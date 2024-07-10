import serial
import time
import numpy as np
import os
import sys
import signal

from PyQt5 import QtWidgets, QtCore
import pyqtgraph as pg
import pyqtgraph.opengl as gl
from pyqtgraph.Qt import QtGui
# import the parser function 
#from parser_scripts.parser_mmw_demo import parser_one_mmw_demo_output_packet
from parser_scripts.parser_mmw_demo import parser_one_mmw_demo_output_packet #checkMagicPattern, getint16_Q7_9
# from mss.x8_handler import *
# from lib.utility import *
#from parser_scripts.parser_mmw_helper import checkMagicPattern

# Change the configuration file name
configFileName = 'config/xwr68xxconfig.cfg' #xwr68xx_profile_range.cfg xwr68xxconfig.cfg

# Change the debug variable to use print()
DEBUG = False

# Constants
MMWDEMO_UART_MSG_DETECTED_POINTS = 1
MMWDEMO_UART_MSG_RANGE_PROFILE = 2
maxBufferSize = 2**15;
CLIport = {}
Dataport = {}
byteBuffer = np.zeros(2**15,dtype = 'uint8')
byteBufferLength = 0;
maxBufferSize = 2**15;
magicWord = [2, 1, 4, 3, 6, 5, 8, 7]
detObj = {}  
frameData = {}    
currentIndex = 0

# definitions for parser pass/fail
TC_PASS   =  0
TC_FAIL   =  1

#enable stats collection for plots
gDebugStats = 1; 

#TLV Types declaration
TLV_type = {
    "MMWDEMO_OUTPUT_MSG_DETECTED_POINTS": 1,
    "MMWDEMO_OUTPUT_MSG_RANGE_PROFILE": 2,
    "MMWDEMO_OUTPUT_MSG_NOISE_PROFILE": 3,
    "MMWDEMO_OUTPUT_MSG_AZIMUT_STATIC_HEAT_MAP": 4,
    "MMWDEMO_OUTPUT_MSG_RANGE_DOPPLER_HEAT_MAP": 5,
    "MMWDEMO_OUTPUT_MSG_STATS": 6,
    "MMWDEMO_OUTPUT_MSG_DETECTED_POINTS_SIDE_INFO": 7,
    "MMWDEMO_OUTPUT_MSG_AZIMUT_ELEVATION_STATIC_HEAT_MAP": 8,
    "MMWDEMO_OUTPUT_MSG_TEMPERATURE_STATS": 9,
    "MMWDEMO_OUTPUT_MSG_MAX": 10
}


# word array to convert 4 bytes to a 32 bit number
word = [1, 2**8, 2**16, 2**24]

def getTimeDiff(start_timestamp):
    if gDebugStats == 1:
        return int(time.time() * 1000) - start_timestamp
    else:
        return 0

# Function to configure the serial ports and send the data from
# the configuration file to the radar
def serialConfig(configFileName):
    
    global CLIport
    global Dataport
    # Open the serial ports for the configuration and the data ports
    
    # Raspberry pi
    #CLIport = serial.Serial('/dev/ttyACM0', 115200)
    #Dataport = serial.Serial('/dev/ttyACM1', 921600)
    
    # Windows
    CLIport = serial.Serial("COM11", 115200, timeout=0.01)#serial.Serial('COM11', 115200)
    Dataport = serial.Serial("COM12", 921600, timeout=0.01)#serial.Serial('COM12', 921600)

    # Read the configuration file and send it to the board
    config = [line.rstrip('\r\n') for line in open(configFileName)]
    for i in config:
        CLIport.write((i+'\n').encode())
        print(i)
        time.sleep(0.01)
        
    return CLIport, Dataport

# Function to parse the data inside the configuration file
def parseConfigFile(configFileName):
    configParameters = {} # Initialize an empty dictionary to store the configuration parameters
    
    # Read the configuration file and send it to the board
    config = [line.rstrip('\r\n') for line in open(configFileName)]
    for i in config:
        
        # Split the line
        splitWords = i.split(" ")
        
        # Hard code the number of antennas, change if other configuration is used
        numRxAnt = 4
        numTxAnt = 3
        
        # Get the information about the profile configuration
        if "profileCfg" in splitWords[0]:
            startFreq = int(float(splitWords[2]))
            idleTime = int(splitWords[3])
            rampEndTime = float(splitWords[5])
            freqSlopeConst = float(splitWords[8])
            numAdcSamples = int(splitWords[10])
            numAdcSamplesRoundTo2 = 1;
            
            while numAdcSamples > numAdcSamplesRoundTo2:
                numAdcSamplesRoundTo2 = numAdcSamplesRoundTo2 * 2;
                
            digOutSampleRate = int(splitWords[11]);
            
        # Get the information about the frame configuration    
        elif "frameCfg" in splitWords[0]:
            
            chirpStartIdx = int(splitWords[1]);
            chirpEndIdx = int(splitWords[2]);
            numLoops = int(splitWords[3]);
            numFrames = int(splitWords[4]);
            framePeriodicity = int(splitWords[5]);

            
    # Combine the read data to obtain the configuration parameters           
    numChirpsPerFrame = (chirpEndIdx - chirpStartIdx + 1) * numLoops
    configParameters["numDopplerBins"] = numChirpsPerFrame / numTxAnt
    configParameters["numRangeBins"] = numAdcSamplesRoundTo2
    configParameters["rangeResolutionMeters"] = (3e8 * digOutSampleRate * 1e3) / (2 * freqSlopeConst * 1e12 * numAdcSamples)
    configParameters["rangeIdxToMeters"] = (3e8 * digOutSampleRate * 1e3) / (2 * freqSlopeConst * 1e12 * configParameters["numRangeBins"])
    configParameters["dopplerResolutionMps"] = 3e8 / (2 * startFreq * 1e9 * (idleTime + rampEndTime) * 1e-6 * configParameters["numDopplerBins"] * numTxAnt)
    configParameters["maxRange"] = (300 * 0.9 * digOutSampleRate)/(2 * freqSlopeConst * 1e3)
    configParameters["maxVelocity"] = 3e8 / (4 * startFreq * 1e9 * (idleTime + rampEndTime) * 1e-6 * numTxAnt)
    
    return configParameters

##################################################################################
# USE parser_mmw_demo SCRIPT TO PARSE ABOVE INPUT FILES
##################################################################################
def readAndParseData68xx(Dataport, configParameters):
    #load from serial
    global byteBuffer, byteBufferLength

    # Initialize variables
    magicOK = 0 # Checks if magic number has been read
    dataOK = 0 # Checks if the data has been read correctly
    frameNumber = 0
    detObj = {}

    readBuffer = Dataport.read(Dataport.in_waiting)
    byteVec = np.frombuffer(readBuffer, dtype = 'uint8')
    byteCount = len(byteVec)

    # Check that the buffer is not full, and then add the data to the buffer
    if (byteBufferLength + byteCount) < maxBufferSize:
        byteBuffer[byteBufferLength:byteBufferLength + byteCount] = byteVec[:byteCount]
        byteBufferLength = byteBufferLength + byteCount
    
    # Check that the buffer has some data
    if byteBufferLength > 16:
        
        # Check for all possible locations of the magic word
        possibleLocs = np.where(byteBuffer == magicWord[0])[0]

        # Confirm that is the beginning of the magic word and store the index in startIdx
        startIdx = []
        for loc in possibleLocs:
            check = byteBuffer[loc:loc+8]
            if np.all(check == magicWord):
                startIdx.append(loc)

        # Check that startIdx is not empty
        if startIdx:
            
            # Remove the data before the first start index
            if startIdx[0] > 0 and startIdx[0] < byteBufferLength:
                byteBuffer[:byteBufferLength-startIdx[0]] = byteBuffer[startIdx[0]:byteBufferLength]
                byteBuffer[byteBufferLength-startIdx[0]:] = np.zeros(len(byteBuffer[byteBufferLength-startIdx[0]:]),dtype = 'uint8')
                byteBufferLength = byteBufferLength - startIdx[0]
                
            # Check that there have no errors with the byte buffer length
            if byteBufferLength < 0:
                byteBufferLength = 0

            # Read the total packet length
            totalPacketLen = np.matmul(byteBuffer[12:12+4],word)
            # Check that all the packet has been read
            if (byteBufferLength >= totalPacketLen) and (byteBufferLength != 0):
                magicOK = 1
    
    # If magicOK is equal to 1 then process the message
    if magicOK:
        # Read the entire buffer
        readNumBytes = byteBufferLength
        if(True):
            print("readNumBytes: ", readNumBytes)
        allBinData = byteBuffer
        if(True):
            print("allBinData: ", allBinData[0], allBinData[1], allBinData[2], allBinData[3])


        # init local variables
        totalBytesParsed = 0;
        numFramesParsed = 0;

        # original -------------------------------

        # parser_one_mmw_demo_output_packet extracts only one complete frame at a time
        # so call this in a loop till end of file
        #             
        # parser_one_mmw_demo_output_packet function already prints the
        # parsed data to stdio. So showcasing only saving the data to arrays 
        # here for further custom processing
        parser_result, \
        headerStartIndex,  \
        totalPacketNumBytes, \
        numDetObj,  \
        numTlv,  \
        subFrameNumber,  \
        detectedX_array,  \
        detectedY_array,  \
        detectedZ_array,  \
        detectedV_array,  \
        detectedRange_array,  \
        detectedAzimuth_array,  \
        detectedElevation_array,  \
        detectedSNR_array,  \
        detectedNoise_array, \
        rangeProfile = parser_one_mmw_demo_output_packet(allBinData[totalBytesParsed::1], readNumBytes-totalBytesParsed,DEBUG)
        #print("range Profile: ", rangeProfile)
        # Check the parser result
        if(DEBUG):
            print ("Parser result: ", parser_result)
        if (parser_result == 0): 
            totalBytesParsed += (headerStartIndex+totalPacketNumBytes)    
            numFramesParsed+=1
            if(DEBUG):
                print("totalBytesParsed: ", totalBytesParsed)
            ##################################################################################
            # TODO: use the arrays returned by above parser as needed. 
            # For array dimensions, see help(parser_one_mmw_demo_output_packet)
            # help(parser_one_mmw_demo_output_packet)
            ##################################################################################

            
            # For example, dump all S/W objects to a csv file
            """
            import csv
            if (numFramesParsed == 1):
                democsvfile = open('mmw_demo_output.csv', 'w', newline='')                
                demoOutputWriter = csv.writer(democsvfile, delimiter=',',
                                        quotechar='', quoting=csv.QUOTE_NONE)                                  
                demoOutputWriter.writerow(["frame","DetObj#","x","y","z","v","snr","noise"])            
            
            for obj in range(numDetObj):
                demoOutputWriter.writerow([numFramesParsed-1, obj, detectedX_array[obj],\
                                            detectedY_array[obj],\
                                            detectedZ_array[obj],\
                                            detectedV_array[obj],\
                                            detectedSNR_array[obj],\
                                            detectedNoise_array[obj]]) #"elevation": detectedElevation_array, \
            """

            detObj = {"numObj": numDetObj, "range": detectedRange_array, "range profile": rangeProfile, \
                      "azimuth": detectedAzimuth_array, \
                        "x": detectedX_array, "y": detectedY_array, "z": detectedZ_array, \
                            "v": detectedV_array, "snr": detectedSNR_array}
            
            dataOK = 1 
        else: 
            # error in parsing; exit the loop
            print("error in parsing this frame; continue")

        
        shiftSize = totalPacketNumBytes            
        byteBuffer[:byteBufferLength - shiftSize] = byteBuffer[shiftSize:byteBufferLength]
        byteBuffer[byteBufferLength - shiftSize:] = np.zeros(len(byteBuffer[byteBufferLength - shiftSize:]),dtype = 'uint8')
        byteBufferLength = byteBufferLength - shiftSize
        
        # Check that there are no errors with the buffer length
        if byteBufferLength < 0:
            byteBufferLength = 0
        # All processing done; Exit
        if(DEBUG):
            print("numFramesParsed: ", numFramesParsed)

    return dataOK, frameNumber, detObj

def _input_(prt):  # accept keyboard input and forward to control port
    while not sys.stdin.closed:
        line = sys.stdin.readline()   
        if not line.startswith('%'):
            prt.write(line.encode())

def send_reset_command(prt):
    """Send the resetSystem command to the control port."""
    try:
        prt.write(b'resetSystem\n')
        #time.sleep(0.01)
        print("Reset command sent successfully.")
    except Exception as e:
        print(f"Failed to send reset command: {e}")

class MyWidget(QtWidgets.QWidget):  # Change to QWidget for main application

    def __init__(self, parent=None):
        super().__init__(parent=parent)

        self.mainLayout = QtWidgets.QVBoxLayout()
        self.setLayout(self.mainLayout)

        self.timer = QtCore.QTimer(self)
        self.timer.setInterval(100) # in milliseconds
        self.timer.start()
        self.timer.timeout.connect(self.onNewData)

        # Create the 3D plot
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

    # Funtion to update the data and display in the plot
    def update(self):
        
        dataOk = 0
        global detObj
        x = []
        y = []
        z = []
        snr = []
        
        # Read and parse the received data
        dataOk, frameNumber, detObj = readAndParseData68xx(Dataport, configParameters)
        if dataOk and len(detObj["x"]) > 0:
            #print("update: ", detObj)
            x = detObj["x"]
            y = detObj["y"]
            z = detObj["z"]
            snr = detObj["snr"]

        return dataOk, x, y, z, snr


    def onNewData(self):
        
        # Update the data and check if the data is okay        
        dataOk, newx, newy, newz, newsnr = self.update()

        x = newx
        y = newy
        z = newz
        snr = newsnr
        self.setData(x, y, z, snr)


def main():        
    # Configurate the serial port
    CLIport, Dataport = serialConfig(configFileName)

    # Get the configuration parameters from the configuration file
    global configParameters 
    configParameters = parseConfigFile(configFileName)
    #time.sleep(0.1)
    #Reset for the first time
    send_reset_command(CLIport)
    time.sleep(0.1)

    app = QtWidgets.QApplication([])

    pg.setConfigOptions(antialias=False) # True seems to work as well

    win = MyWidget()
    win.show()
    win.resize(800,600) 
    win.raise_()
    app.exec_()
    CLIport.write(('sensorStop\n').encode())
    CLIport.close()
    Dataport.close()


if __name__ == "__main__":
    main()
