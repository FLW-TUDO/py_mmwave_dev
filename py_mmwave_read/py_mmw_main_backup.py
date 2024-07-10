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
from parser_scripts.parser_mmw_helper_example import parser_one_mmw_demo_output_packet #checkMagicPattern, getint16_Q7_9
from mss.x8_handler import *
from lib.utility import *
import csv, json, time
from datetime import datetime
#from parser_scripts.parser_mmw_helper import checkMagicPattern

# Change the configuration file name
configFileName = 'config/xwr68xxconfig.cfg' #xwr68xx_profile_range.cfg xwr68xxconfig.cfg
current_datetime = datetime.now().strftime("%Y%m%d_%H%M%S")
filename = f'Node1_mmw_demo_output_{current_datetime}.txt'

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
    CLIport = serial.Serial("COM6", 115200, timeout=0.01)#serial.Serial('COM11', 115200)
    if CLIport is None: raise Exception('not able to connect to control port')

    Dataport = serial.Serial("COM5", 921600, timeout=0.01)#serial.Serial('COM12', 921600)
    if Dataport is None: raise Exception('not able to connect to control port')

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
    
    #print(f"cfg param: chirpEndIdx: {chirpEndIdx}, chirpStartIdx: {chirpStartIdx}, numAdcSamples: {numAdcSamples}, \
    #      digOutSampleRate: {digOutSampleRate}, freqSlopeConst: {freqSlopeConst}, numRangeBins: {configParameters["numRangeBins"]}")  
    return configParameters

# Function to convert numpy types to native Python types
def convert_to_native(obj):
    if isinstance(obj, np.integer):
        return int(obj)
    elif isinstance(obj, np.floating):
        return float(obj)
    elif isinstance(obj, np.ndarray):
        return obj.tolist()
    else:
        return obj
##################################################################################
# USE parser_mmw_demo SCRIPT TO PARSE ABOVE INPUT FILES
##################################################################################
def readAndParseData68xx(Dataport, configParameters):
    #load from serial
    global byteBuffer, byteBufferLength

    # Initialize variables
    magicOK = 0 # Checks if magic number has been read
    dataOk = 0 # Checks if the data has been read correctly
    frameNumber = 0
    detObj = {}
    detectedX_array = []
    detectedY_array = []
    detectedZ_array = []
    detectedV_array = []
    detectedRange_array = []
    detectedAzimuth_array = []
    detectedElevAngle_array = []
    detectedSNR_array = []
    detectedNoise_array = []
    range_prof_data =[]
    range_noise_data =[]
    word = [1, 2**8, 2**16, 2**24]

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
        
        # changes ----------------------------

        #initialize mandatory variables for flag condition
        byteVecIdx = 0
        tlvidx = 0
        byteVecIdx_detObjs = -1
        byteVecIdx_rangeProfile = -1
        byteVecIdx_noiseProfile = -1
        tlvLen_rangeProfile = -1
        tlvLen_noiseProfile = -1
        byteVecIdx_sideInfo = -1

        result = TC_PASS

        headerStartIndex = -1

        for index in range (readNumBytes):
            if checkMagicPattern(allBinData[index:index+8:1]) == 1:
                headerStartIndex = index
                break

        # Read the header
        magicNumber = allBinData[byteVecIdx:byteVecIdx+8]
        byteVecIdx += 8
        version = format(np.matmul(allBinData[byteVecIdx:byteVecIdx+4],word),'x')
        byteVecIdx += 4
        totalPacketNumBytes = np.matmul(allBinData[byteVecIdx:byteVecIdx+4],word)
        byteVecIdx += 4
        platform = format(np.matmul(allBinData[byteVecIdx:byteVecIdx+4],word),'x')
        byteVecIdx += 4
        frameNumber = np.matmul(allBinData[byteVecIdx:byteVecIdx+4],word)
        byteVecIdx += 4
        timeCpuCycles = np.matmul(allBinData[byteVecIdx:byteVecIdx+4],word)
        byteVecIdx += 4
        numDetObj = np.matmul(allBinData[byteVecIdx:byteVecIdx+4],word)
        byteVecIdx += 4
        numTlv = np.matmul(allBinData[byteVecIdx:byteVecIdx+4],word)
        print("numTLV: ", numTlv, ", byteVecIdx: ", byteVecIdx)
        byteVecIdx += 4
        subFrameNumber = np.matmul(allBinData[byteVecIdx:byteVecIdx+4],word)
        print("subFrameNumber: ", subFrameNumber, ", byteVecIdx: ", byteVecIdx)
        byteVecIdx += 4

        if headerStartIndex == -1:
            result = TC_FAIL
            print("************ Frame Fail, cannot find the magic words *****************")
        else:
            nextHeaderStartIndex = headerStartIndex + totalPacketNumBytes
            print("header start: ", headerStartIndex, \
                    "Packet bytes: ", totalPacketNumBytes)

            if headerStartIndex + totalPacketNumBytes > readNumBytes:
                result = TC_FAIL
                print("********** Frame Fail, readNumBytes may not long enough ***********")
            elif nextHeaderStartIndex + 8 < readNumBytes and checkMagicPattern(allBinData[nextHeaderStartIndex:nextHeaderStartIndex+8:1]) == 0:
                result = TC_FAIL
                print("********** Frame Fail, incomplete packet **********") 
            elif numDetObj <= 0:
                result = TC_FAIL
                print("************ Frame Fail, numDetObj = %d *****************" % (numDetObj))
            elif subFrameNumber > 3:
                result = TC_FAIL
                print("************ Frame Fail, subFrameNumber = %d *****************" % (subFrameNumber))
            else: 
                # Read the TLV messages
                for tlvIdx in range(numTlv):
                    tlvType = np.matmul(allBinData[byteVecIdx:byteVecIdx+4],word)
                    tlvType_Uint = getUint32(allBinData[byteVecIdx+0:byteVecIdx+4:1])
                    print("tlvIdx: ", tlvIdx, "numTLV: ", numTlv, ", byteVecIdx: ", byteVecIdx)
                    byteVecIdx += 4
                    tlvLen = np.matmul(allBinData[byteVecIdx:byteVecIdx+4],word)
                    tlvLen_Uint = getUint32(allBinData[byteVecIdx+4:byteVecIdx+8:1]) 
                    byteVecIdx += 4
                    start_tlv_ticks = getTimeDiff(0)
                    print("TLV type: ", tlvType, "TLV type Uint: ", tlvType_Uint)
                    print("TLV len: ", tlvLen, "TLV len Uint: ", tlvLen_Uint)

                    if tlvType == TLV_type["MMWDEMO_OUTPUT_MSG_DETECTED_POINTS"]:
                        byteVecIdx_detObjs = byteVecIdx
                        #print("TLV: ", tlvType, ", byteVecIdx: ", byteVecIdx, "value: ", allBinData[byteVecIdx:byteVecIdx+16])
                    elif tlvType == TLV_type["MMWDEMO_OUTPUT_MSG_RANGE_PROFILE"]:
                        tlvLen_rangeProfile = tlvLen
                        byteVecIdx_rangeProfile = byteVecIdx
                        #print("TLV: ", tlvType, ", byteVecIdx: ", byteVecIdx)
                    elif tlvType == TLV_type["MMWDEMO_OUTPUT_MSG_NOISE_PROFILE"]:
                        tlvLen_noiseProfile = tlvLen
                        byteVecIdx_noiseProfile = byteVecIdx
                        #print("TLV: ", tlvType, ", byteVecIdx: ", byteVecIdx)
                        #processRangeNoiseProfile(bytevec, byteVecIdx, Params, False)
                        #gatherParamStats(Params["plot"]["noiseStats"], getTimeDiff(start_tlv_ticks))
                    elif tlvType == TLV_type["MMWDEMO_OUTPUT_MSG_AZIMUT_STATIC_HEAT_MAP"]:
                        print("TLV azimuth heatmap: ", tlvType, ", byteVecIdx: ", byteVecIdx)
                        # processAzimuthHeatMap(bytevec, byteVecIdx, Params)
                        # gatherParamStats(Params["plot"]["azimuthStats"], getTimeDiff(start_tlv_ticks))
                    elif tlvType == TLV_type["MMWDEMO_OUTPUT_MSG_RANGE_DOPPLER_HEAT_MAP"]:
                        print("TLV range doppler heatmap: ", tlvType, ", byteVecIdx: ", byteVecIdx)
                        # processRangeDopplerHeatMap(bytevec, byteVecIdx, Params)
                        # gatherParamStats(Params["plot"]["dopplerStats"], getTimeDiff(start_tlv_ticks))
                    elif tlvType == TLV_type["MMWDEMO_OUTPUT_MSG_STATS"]:
                        print("TLV: ", tlvType, ", byteVecIdx: ", byteVecIdx)
                        payload_start = byteVecIdx
                        n, ifpt, tot, ifpm, icpm, afpl, ifpl = stat_info(allBinData[payload_start:payload_start+24])
                        statistics_info =  {
                            'interframe_processing': ifpt,
                            'transmit_output': tot,
                            'processing_margin': {
                                'interframe': ifpm,
                                'interchirp': icpm},
                            'cpu_load': {
                                'active_frame': afpl,
                                'interframe': ifpl}
                            }
                        #print(statistics_info)
                        # processStatistics(bytevec, byteVecIdx, Params)
                        # gatherParamStats(Params["plot"]["cpuloadStats"], getTimeDiff(start_tlv_ticks))
                    elif tlvType == TLV_type["MMWDEMO_OUTPUT_MSG_DETECTED_POINTS_SIDE_INFO"]:
                        byteVecIdx_sideInfo = byteVecIdx
                        print("TLV: ", tlvType, ", byteVecIdx: ", byteVecIdx)
                        

                    byteVecIdx += tlvLen

                '''Now process the (remaining) received TLVs in the required order:
                Side info -> detected points -> range profile '''
                if byteVecIdx_sideInfo > -1:
                    for obj in range(numDetObj):
                        offset = obj*4 #each obj has 4 bytes
                        snr, noise = process_side_info(byteVecIdx_sideInfo, allBinData, offset)
                        detectedSNR_array.append(snr)
                        detectedNoise_array.append(noise)
                
                if byteVecIdx_detObjs > -1 and numDetObj > 0:
                    for obj in range(numDetObj):
                        offset = obj*16 #each obj has 16 bytes
                        #print("offset: ", offset, "obj: ", obj)
                        x, y, z, v, compDetectedRange, detectedAzimuth, detectedElevAngle = \
                            process_detected_object(byteVecIdx_detObjs, allBinData, offset, \
                                                    configParameters["rangeIdxToMeters"], \
                                                        configParameters["dopplerResolutionMps"])
                        
                        detectedX_array.append(x)
                        detectedY_array.append(y)
                        detectedZ_array.append(z)
                        detectedV_array.append(v)
                        detectedRange_array.append(compDetectedRange)
                        detectedAzimuth_array.append(detectedAzimuth)
                        detectedElevAngle_array.append(detectedElevAngle) 


                if (byteVecIdx_rangeProfile > -1 and tlvLen_rangeProfile > -1):
                    range_prof_data = process_range_profile(byteVecIdx_rangeProfile, tlvLen_rangeProfile, allBinData, configParameters["numRangeBins"])
                    #print("range profile array: ", range_prof_data)
                if (byteVecIdx_noiseProfile > -1 and tlvLen_noiseProfile > -1):
                    range_noise_data = process_range_profile(byteVecIdx_noiseProfile, tlvLen_noiseProfile, allBinData, configParameters["numRangeBins"])



        # end of changes ---------------------------

        # Check the parser result
        if(DEBUG):
            print ("Parser result: ", result)
        if (result == 0): 
            totalBytesParsed += (headerStartIndex+totalPacketNumBytes)    
            numFramesParsed+=1
            if(DEBUG):
                print("totalBytesParsed: ", totalBytesParsed)
            ##################################################################################
            # TODO: use the arrays returned by above parser as needed. 
            # For array dimensions, see help(parser_one_mmw_demo_output_packet)
            # help(parser_one_mmw_demo_output_packet)
            ##################################################################################

            current_timestamp = time.time()

            # Create detObj dictionary
            detObj = {
                "timestamp": current_timestamp,
                "numObj": convert_to_native(numDetObj),
                "range": convert_to_native(detectedRange_array),
                "azimuth": convert_to_native(detectedAzimuth_array),
                "elevation": convert_to_native(detectedElevAngle_array),
                "x": convert_to_native(detectedX_array),
                "y": convert_to_native(detectedY_array),
                "z": convert_to_native(detectedZ_array),
                "v": convert_to_native(detectedV_array),
                "snr": convert_to_native(detectedSNR_array),
                "rangeProfile": convert_to_native(range_prof_data),
                "noiseProfile": convert_to_native(range_noise_data)
            }
            dataOk = 1
            detObj_json = json.dumps(detObj)
            print("dataOk: ", dataOk, "detObj: ", detObj_json)


            with open(filename, "a+") as test_data:
                test_data.write(detObj_json + '\n')
            test_data.close()

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

    return dataOk, frameNumber, detObj

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

running = True
def signal_handler(sig, frame):
    global running
    running = False
    print("Ctrl+C pressed. Exiting...")
    QtWidgets.QApplication.quit()
    # CLIport.write(('sensorStop\n').encode())
    # print("except Send Sensor Stop!")
    # CLIport.close()
    # Dataport.close()
    # print("except CLI and Dataport Stop!")
    #win.close()


class MyWidget(QtWidgets.QWidget):  # Change to QWidget for main application

    def __init__(self, parent=None):
        super().__init__(parent=parent)

        self.mainLayout = QtWidgets.QVBoxLayout()
        self.setLayout(self.mainLayout)

        self.timer = QtCore.QTimer(self)
        self.timer.setInterval(50) # in milliseconds
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
        print("self update dataOk: ", dataOk, "detObj X: ", len(detObj["x"]))
                    
        x = detObj["x"]
        y = detObj["y"]
        z = detObj["z"]
        snr = detObj["snr"]
        # if dataOk and len(detObj["x"]) > 0:
        #     print("update: ", detObj)
        #     x = detObj["x"]
        #     y = detObj["y"]
        #     z = detObj["z"]
        #     snr = detObj["snr"]

        return dataOk, x, y, z, snr


    def onNewData(self):
        
        # Update the data and check if the data is okay        
        dataOk, newx, newy, newz, newsnr = self.update()
        if dataOk:
            self.setData(newx, newy, newz, newsnr)
            print(f"onNewData x: {newx}, y: {newy}, z: {newz}, snr: {newsnr}")
        


def main():
    signal.signal(signal.SIGINT, signal_handler)  # Set up the signal handler

    try:
        # Configurate the serial port
        CLIport, Dataport = serialConfig(configFileName)

        # Get the configuration parameters from the configuration file
        global configParameters 
        configParameters = parseConfigFile(configFileName)
        #time.sleep(0.1)
        #Reset for the first time
        send_reset_command(CLIport)
        #time.sleep(0.1)

        app = QtWidgets.QApplication([])

        pg.setConfigOptions(antialias=False) # True seems to work as well

        win = MyWidget()
        win.show()
        win.resize(800,600) 
        win.raise_()

        app.exec_()

    except KeyboardInterrupt:
        CLIport.write(('sensorStop\n').encode())
        print("except Send Sensor Stop!")
        CLIport.close()
        Dataport.close()
        print("except CLI and Dataport Stop!")
        win.close()
    finally:
        if 'CLIport' in locals() and CLIport.is_open:
            CLIport.write(('sensorStop\n').encode())
            print("finally Send Sensor Stop!")
            CLIport.close()
        if 'Dataport' in locals() and Dataport.is_open:
            print("finally Dataport Stop!")
            Dataport.close()


if __name__ == "__main__":
    main()
