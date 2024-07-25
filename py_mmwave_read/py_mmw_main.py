import serial
import time
import numpy as np
import os
import sys
import signal
import csv, json, time
from datetime import datetime
import atexit
import threading
from queue import Queue

from PyQt5 import QtWidgets, QtCore
import pyqtgraph as pg
import pyqtgraph.opengl as gl
from pyqtgraph.Qt import QtGui

from mss.x8_handler import *
from lib.utility import *
from lib.serial_comm import *
from lib.probe import *
from lib.logger import *
from parser_scripts.config_parser import *
from parser_scripts.data_parser import *

# Global running flag
running = True

# Change the configuration file name
#configFileName = 'config/xwr68xxconfig.cfg' #xwr68xx_profile_range.cfg xwr68xxconfig.cfg

config_file = 'config/py_mmw_setup.json'  # Path to your JSON config file
pymmw_setup = read_config(config_file)
#filename = f'Node1_mmw_demo_output_{current_datetime}.txt'

configFileName = pymmw_setup["configFileName"]
visualizer = pymmw_setup["visualizer"]
controlPort_ = pymmw_setup["controlPort"]
dataPort_ = pymmw_setup["dataPort"]
current_datetime = datetime.now().strftime("%Y%m%d_%H%M%S")
filename = pymmw_setup["fileName"] + '_' + current_datetime + '.txt'


print("Config File Name:", pymmw_setup["configFileName"])
print("Visualizer:", pymmw_setup["visualizer"])
print("Control Port:", pymmw_setup["controlPort"])
print("Data Port:", pymmw_setup["dataPort"])
#print("File Name:", filename)

# Change the debug variable to use print()
DEBUG = False

CLIport = {}
Dataport = {}
detObj = {}  
frameData = {}    
currentIndex = 0

#Threading data queue
data_queue = Queue()

#time interval frame in ms
interval = 250

def send_reset_command(prt):
    """Send the resetSystem command to the control port."""
    try:
        prt.write(b'resetSystem\n')
        #time.sleep(0.01)
        print("Reset command sent successfully.")
    except Exception as e:
        print(f"Failed to send reset command: {e}")

##--------------- update threading ----------------------------------#
def read_serial_data():
    """Read data from the serial port and put it into the queue."""
    while running:
        try:
            if Dataport.in_waiting > 0:
                data = Dataport.read(Dataport.in_waiting)
                if data:
                    data_queue.put(data)
                    #print(f"data_queue: {data}")
        except Exception as e:
            print(f"Error reading serial data: {e}")

def read_parse_data(data_parser):
    global detObj
    dataOk = 0

    try:
        while not data_queue.empty():
            data = data_queue.get()
            dataOk, frameNumber, detObj = data_parser.readAndParseData68xx(data)
            if dataOk and data_parser.configParameters["detectedObjects"] and len(detObj["x"]) > 0:
                x = detObj["x"]
                y = detObj["y"]
                z = detObj["z"]
                snr = detObj["snr"]
                return dataOk, detObj
    except Exception as e:
        print(f"Error parsing data: {e}")

    return 0, {}

#parse data if visualizer is active
def parse_data(data_parser, data):
    dataOk, frameNumber, detObj = data_parser.readAndParseData68xx(data)
    if dataOk and data_parser.configParameters["detectedObjects"] and len(detObj["x"]) > 0:
        return dataOk, detObj
    return 0, {}



##----------------end of update -------------------------------------#

def signal_handler(sig, frame):
    global running
    running = False
    print("Ctrl+C pressed. Exiting...")
    if CLIport.is_open:
        CLIport.write(('sensorStop\n').encode())
        CLIport.close()
        print("signal handler: Send Sensor Stop and CLIPort is closed!")
    if Dataport.is_open:
        Dataport.close()
        print("signal handler: Data Port is closed!")
    if visualizer:
        QtWidgets.QApplication.quit()
    sys.exit(0)

def close_ports():
    if CLIport.is_open:
        CLIport.write(('sensorStop\n').encode())
        CLIport.close()
    if Dataport.is_open:
        Dataport.close()

atexit.register(close_ports)

'TODO: optimize the MyWidget'
class MyWidget(QtWidgets.QWidget):  # Change to QWidget for main application
    newDataSignal = QtCore.pyqtSignal(object)

    def __init__(self, data_parser, configParameters, parent=None):
        super().__init__(parent=parent)
        self.data_parser = data_parser
        self.configParameters = configParameters

        #new
        self.newDataSignal.connect(self.update_plot)

        # self.timer = QtCore.QTimer(self)
        # self.timer.setInterval(interval) # in milliseconds
        # self.timer.start()
        # self.timer.timeout.connect(self.onNewData)

        # Create the 3D plot
        self.mainLayout = QtWidgets.QVBoxLayout()
        self.setLayout(self.mainLayout)
        self.glViewWidget = gl.GLViewWidget()
        #self.glViewWidget.setBackgroundColor('w')  # Set background color to white
        self.mainLayout.addWidget(self.glViewWidget)

        self.scatterPlotItem = gl.GLScatterPlotItem()
        self.glViewWidget.addItem(self.scatterPlotItem)

        # Add grids for better visualization
        grid_x = gl.GLGridItem()
        grid_y = gl.GLGridItem()
        grid_z = gl.GLGridItem()
        
        grid_x.rotate(90, 0, 1, 0)
        #grid_x.translate(-10, 0, 0)
        
        grid_y.rotate(90, 1, 0, 0)
        #grid_y.translate(0, -10, 0)
        
        #grid_z.translate(0, 0, -10)
        
        self.glViewWidget.addItem(grid_x)
        self.glViewWidget.addItem(grid_y)
        self.glViewWidget.addItem(grid_z)

        # Add axis labels
        self.addAxisLabels()
        print("finish to initialize QtWidget")

    def setData(self, x, y, z, snr):
            #snr = snr / 0.1
            pos = np.vstack((x, y, z)).transpose()
            color = self.getColorFromSNR(snr)
            self.scatterPlotItem.setData(pos=pos, size=5, color=color, pxMode=True)

    def addAxisLabels(self):
            axis_length = 10
            tick_interval = 1

            x_axis = gl.GLLinePlotItem(pos=np.array([[0, 0, 0], [axis_length, 0, 0]]), color=(1, 0, 0, 1), width=2)
            y_axis = gl.GLLinePlotItem(pos=np.array([[0, 0, 0], [0, axis_length, 0]]), color=(0, 1, 0, 1), width=2)
            z_axis = gl.GLLinePlotItem(pos=np.array([[0, 0, 0], [0, 0, axis_length]]), color=(0, 0, 1, 1), width=2)
            
            self.glViewWidget.addItem(x_axis)
            self.glViewWidget.addItem(y_axis)
            self.glViewWidget.addItem(z_axis)
            
            x_label = gl.GLTextItem(pos=[axis_length, 0, 0], text='X (m)', color=(1, 0, 0, 1))
            y_label = gl.GLTextItem(pos=[0, axis_length, 0], text='Y (m)', color=(0, 1, 0, 1))
            z_label = gl.GLTextItem(pos=[0, 0, axis_length], text='Z (m)', color=(0, 0, 1, 1))
            
            self.glViewWidget.addItem(x_label)
            self.glViewWidget.addItem(y_label)
            self.glViewWidget.addItem(z_label)

            # Add tick marks and labels for the x-axis
            for i in range(0, axis_length + 1, tick_interval):
                tick = gl.GLLinePlotItem(pos=np.array([[i, -0.1, 0], [i, 0.1, 0]]), color=(1, 0, 0, 1), width=2)
                tick_label = gl.GLTextItem(pos=[i, -0.5, 0], text=f'{i}', color=(1, 0, 0, 1))
                self.glViewWidget.addItem(tick)
                self.glViewWidget.addItem(tick_label)

            # Add tick marks and labels for the y-axis
            for i in range(0, axis_length + 1, tick_interval):
                tick = gl.GLLinePlotItem(pos=np.array([[-0.1, i, 0], [0.1, i, 0]]), color=(0, 1, 0, 1), width=2)
                tick_label = gl.GLTextItem(pos=[-0.5, i, 0], text=f'{i}', color=(0, 1, 0, 1))
                self.glViewWidget.addItem(tick)
                self.glViewWidget.addItem(tick_label)

            # Add tick marks and labels for the z-axis
            for i in range(0, axis_length + 1, tick_interval):
                tick = gl.GLLinePlotItem(pos=np.array([[-0.1, 0, i], [0.1, 0, i]]), color=(0, 0, 1, 1), width=2)
                tick_label = gl.GLTextItem(pos=[-0.5, 0, i], text=f'{i}', color=(0, 0, 1, 1))
                self.glViewWidget.addItem(tick)
                self.glViewWidget.addItem(tick_label)

    def getColorFromSNR(self, snr):
        norm = (snr - np.min(snr)) / (np.max(snr) - np.min(snr))
        colors = np.zeros((len(snr), 4))
        colors[:, 0] = norm  # Red channel
        colors[:, 1] = 0     # Green channel
        colors[:, 2] = 1 - norm  # Blue channel
        colors[:, 3] = 1     # Alpha channel
        return colors

    # # Funtion to update the data and display in the plot
    # def update(self):
        
    #     dataOk = 0
    #     global detObj
    #     x = []
    #     y = []
    #     z = []
    #     snr = []
        
    #     # Read and parse the received data
    #     #dataOk, detObj = read_parse_data(self.data_parser)
    #     #dataOk, frameNumber, detObj = self.data_parser.readAndParseData68xx(Dataport, self.configParameters)
    #     #print("self update dataOk: ", dataOk, "detObj X: ", len(detObj["x"]))

    #     if not data_queue.empty():
    #         data = data_queue.get()
    #         dataOk, frameNumber, detObj = self.data_parser.readAndParseData68xx(data)
    #         if dataOk and self.data_parser.configParameters["detectedObjects"] and len(detObj["x"]) > 0:
    #             x = detObj["x"]
    #             y = detObj["y"]
    #             z = detObj["z"]
    #             snr = detObj["snr"]

    #     return dataOk, x, y, z, snr


    # def onNewData(self):
        
    #     # Update the data and check if the data is okay        
    #     dataOk, newx, newy, newz, newsnr = self.update()
    #     if dataOk and visualizer:
    #         self.setData(newx, newy, newz, newsnr)
    #         print(f"onNewData x: {newx}, y: {newy}, z: {newz}, snr: {newsnr}")

    def update_plot(self, data):
        x, y, z, snr = data
        self.setData(x, y, z, snr)

    def update_data(self):
        while running:
            if not data_queue.empty():
                data = data_queue.get()
                dataOk, detObj = parse_data(self.data_parser, data)
                if dataOk:
                    x = detObj["x"]
                    y = detObj["y"]
                    z = detObj["z"]
                    snr = detObj["snr"]
                    self.newDataSignal.emit((x, y, z, snr))
            #time.sleep(interval/1000)

def main():
    global configParameters, CLIport, Dataport
    signal.signal(signal.SIGINT, signal_handler)  # Set up the signal handler
    nrst = True
    
    frameData = {}    
    currentIndex = 0
    # Main loop 
    try:
        
        # Configurate the serial port
        CLIport, Dataport = serialConfig(configFileName, controlPort_, dataPort_)

        # Get the configuration parameters from the configuration file
        configParameters = parseConfigFile(configFileName)

        data_parser = DataParser(configParameters, filename)
        
        #Reset for the first time
        # ---
        nrst = True
        print("nrst mode 2: ", nrst)

        if nrst:
            send_reset_command(CLIport)
        else:
            print('\nwaiting for reset (NRST) of the device', file=sys.stderr, flush=True)
        
        time.sleep(0.1)

        ## new update with thread
        read_thread = threading.Thread(target=read_serial_data)
        read_thread.start()

        while running:
            # Update the data and check if the data is okay
            dataOk = read_parse_data(data_parser)
            #print("detObj: ", detObj)
            #time.sleep(interval/1000) # Sampling frequency of 30 Hz

        read_thread.join()

    except Exception as e: 
        #KeyboardInterrupt:
        if CLIport.is_open:
            CLIport.write(('sensorStop\n').encode())
            CLIport.close()
            print("Exception: Send Sensor Stop and CLIPort is closed!")
        if Dataport.is_open:
            Dataport.close()
            print("Exception: Data Port is closed!")

    finally:
        if 'CLIport' in globals() and CLIport.is_open:
            CLIport.write(('sensorStop\n').encode())
            print("finally Send Sensor Stop!")
            CLIport.close()
        if 'Dataport' in globals() and Dataport.is_open:
            print("finally Dataport Stop!")
            Dataport.close()   


def main_with_Qt():
    signal.signal(signal.SIGINT, signal_handler)  # Set up the signal handler

    global configParameters, CLIport, Dataport

    # Configurate the serial port
    CLIport, Dataport = serialConfig(configFileName, controlPort_, dataPort_)

    # Get the configuration parameters from the configuration file
    configParameters = parseConfigFile(configFileName)

    data_parser = DataParser(configParameters, filename)

    #Reset for the first time
    # ---
    nrst = True
    print("nrst mode 2: ", nrst)

    if nrst:
        send_reset_command(CLIport)
    else:
        print('\nwaiting for reset (NRST) of the device', file=sys.stderr, flush=True)

    time.sleep(0.1)

    ## new update with thread
    read_thread = threading.Thread(target=read_serial_data)
    read_thread.start()

    try:
        app = QtWidgets.QApplication([])
        pg.setConfigOptions(antialias=False) # True seems to work as well
        win = MyWidget(data_parser, configParameters)
        win.show()
        win.resize(800, 600)

        #new update
        data_update_thread = threading.Thread(target=win.update_data)
        data_update_thread.start()

        app.exec_()

        read_thread.join()
        data_update_thread.join()

    except Exception as e: 
        #KeyboardInterrupt:
        if CLIport.is_open:
            CLIport.write(('sensorStop\n').encode())
            CLIport.close()
            print("Exception: Send Sensor Stop and CLIPort is closed!")
        if Dataport.is_open:
            Dataport.close()
            print("Exception: Data Port is closed!")

    finally:
        if 'CLIport' in globals() and CLIport.is_open:
            CLIport.write(('sensorStop\n').encode())
            print("finally Send Sensor Stop!")
            CLIport.close()
        if 'Dataport' in globals() and Dataport.is_open:
            print("finally Dataport Stop!")
            Dataport.close()   


if __name__ == "__main__":
    #main_with_Qt()
    if visualizer: #and configParameters["detectedObjects"] == 1:
        main_with_Qt()
    else:
        main()