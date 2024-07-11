import csv, json, time
import numpy as np
import os
import sys
import signal
from datetime import datetime
from lib.utility import *
from mss.x8_handler import *
from lib.logger import *

# definitions for parser pass/fail
TC_PASS   =  0
TC_FAIL   =  1
DEBUG = False

#enable stats collection for plots
gDebugStats = 1; 

class DataParser:
    def __init__(self, configParameters, filename):
        self.filename = filename
        self.configParameters = configParameters
        self.byteBuffer = np.zeros(2**15, dtype='uint8')
        self.byteBufferLength = 0
        self.maxBufferSize = 2**15
        self.magicWord = [2, 1, 4, 3, 6, 5, 8, 7]
        # word array to convert 4 bytes to a 32 bit number
        self.word = [1, 2**8, 2**16, 2**24]
        self.TLV_type = {
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

    def getTimeDiff(self, start_timestamp):
        if gDebugStats == 1:
            return int(time.time() * 1000) - start_timestamp
        else:
            return 0

    def readAndParseData68xx(self, Dataport, configParameters):
        #print("readAndParseData68xx")
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
        range_prof_data =[]
        range_noise_data =[]
        range_doppler_heatmap_data = []
        range_azimuth_heatmap_data = []
        detectedSNR_array = []
        detectedNoise_array = []
        word = [1, 2**8, 2**16, 2**24]

        readBuffer = Dataport.read(Dataport.in_waiting)
        byteVec = np.frombuffer(readBuffer, dtype = 'uint8')
        byteCount = len(byteVec)

        # Check that the buffer is not full, and then add the data to the buffer
        if (self.byteBufferLength + byteCount) < self.maxBufferSize:
            self.byteBuffer[self.byteBufferLength:self.byteBufferLength + byteCount] = byteVec[:byteCount]
            self.byteBufferLength = self.byteBufferLength + byteCount
        
        # Check that the buffer has some data
        if self.byteBufferLength > 16:
            
            # Check for all possible locations of the magic word
            possibleLocs = np.where(self.byteBuffer == self.magicWord[0])[0]

            # Confirm that is the beginning of the magic word and store the index in startIdx
            startIdx = []
            for loc in possibleLocs:
                check = self.byteBuffer[loc:loc+8]
                if np.all(check == self.magicWord):
                    startIdx.append(loc)

            # Check that startIdx is not empty
            if startIdx:
                
                # Remove the data before the first start index
                if startIdx[0] > 0 and startIdx[0] < byteBufferLength:
                    self.byteBuffer[:byteBufferLength-startIdx[0]] = self.byteBuffer[startIdx[0]:self.byteBufferLength]
                    self.byteBuffer[byteBufferLength-startIdx[0]:] = np.zeros(len(self.byteBuffer[self.byteBufferLength-startIdx[0]:]),dtype = 'uint8')
                    self.byteBufferLength = self.byteBufferLength - startIdx[0]
                    
                # Check that there have no errors with the byte buffer length
                if self.byteBufferLength < 0:
                    self.byteBufferLength = 0

                # Read the total packet length
                totalPacketLen = np.matmul(self.byteBuffer[12:12+4],word)
                # Check that all the packet has been read
                if (self.byteBufferLength >= totalPacketLen) and (self.byteBufferLength != 0):
                    magicOK = 1
        
        # If magicOK is equal to 1 then process the message
        if magicOK:
            # Read the entire buffer
            readNumBytes = self.byteBufferLength
            if(DEBUG):
                print("readNumBytes: ", readNumBytes)
            allBinData = self.byteBuffer
            if(DEBUG):
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
            print("after check magic pattern")

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
                        #start_tlv_ticks = getTimeDiff(0)
                        print("TLV type: ", tlvType, "TLV type Uint: ", tlvType_Uint)
                        print("TLV len: ", tlvLen, "TLV len Uint: ", tlvLen_Uint)

                        if tlvType == self.TLV_type["MMWDEMO_OUTPUT_MSG_DETECTED_POINTS"]:
                            byteVecIdx_detObjs = byteVecIdx
                        elif tlvType == self.TLV_type["MMWDEMO_OUTPUT_MSG_RANGE_PROFILE"]:
                            tlvLen_rangeProfile = tlvLen
                            byteVecIdx_rangeProfile = byteVecIdx
                        elif tlvType == self.TLV_type["MMWDEMO_OUTPUT_MSG_NOISE_PROFILE"]:
                            tlvLen_noiseProfile = tlvLen
                            byteVecIdx_noiseProfile = byteVecIdx
                        elif tlvType == self.TLV_type["MMWDEMO_OUTPUT_MSG_AZIMUT_STATIC_HEAT_MAP"]:
                            print("TLV azimuth heatmap: ", tlvType, ", byteVecIdx: ", byteVecIdx)
                            # processAzimuthHeatMap(bytevec, byteVecIdx, Params)
                            # gatherParamStats(Params["plot"]["azimuthStats"], getTimeDiff(start_tlv_ticks))
                        elif tlvType == self.TLV_type["MMWDEMO_OUTPUT_MSG_RANGE_DOPPLER_HEAT_MAP"]:
                            print("TLV range doppler heatmap: ", tlvType, ", byteVecIdx: ", byteVecIdx)
                            # processRangeDopplerHeatMap(bytevec, byteVecIdx, Params)
                            # gatherParamStats(Params["plot"]["dopplerStats"], getTimeDiff(start_tlv_ticks))
                        elif tlvType == self.TLV_type["MMWDEMO_OUTPUT_MSG_STATS"]:
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
                        elif tlvType == self.TLV_type["MMWDEMO_OUTPUT_MSG_DETECTED_POINTS_SIDE_INFO"]:
                            byteVecIdx_sideInfo = byteVecIdx

                        byteVecIdx += tlvLen

                    '''Now process the (remaining) received TLVs in the required order:
                    Side info -> detected points -> range profile '''
                    if configParameters["sideInfo"] and byteVecIdx_sideInfo > -1:
                        for obj in range(numDetObj):
                            offset = obj*4 #each obj has 4 bytes
                            snr, noise = process_side_info(byteVecIdx_sideInfo, allBinData, offset)
                            detectedSNR_array.append(snr)
                            detectedNoise_array.append(noise)
                    
                    if configParameters["detectedObjects"] == 1 and (byteVecIdx_detObjs > -1 and numDetObj > 0):
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


                    if configParameters["logMagRange"] == 1 and (byteVecIdx_rangeProfile > -1 and tlvLen_rangeProfile > -1):
                        range_prof_data = process_range_profile(byteVecIdx_rangeProfile, tlvLen_rangeProfile, allBinData, configParameters["numRangeBins"])
                        #print("range profile array: ", range_prof_data)
                    if configParameters["noiseProfile"] == 1 and (byteVecIdx_noiseProfile > -1 and tlvLen_noiseProfile > -1):
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
                dataOk, detObj = store_detObj(configParameters, numDetObj, detectedRange_array, detectedAzimuth_array, detectedElevAngle_array,
                    detectedX_array, detectedY_array, detectedZ_array, detectedV_array, detectedSNR_array, 
                    range_prof_data, range_noise_data, range_doppler_heatmap_data, range_azimuth_heatmap_data, self.filename)

            else: 
                # error in parsing; exit the loop
                print("error in parsing this frame; continue")

            
            shiftSize = totalPacketNumBytes            
            self.byteBuffer[:self.byteBufferLength - shiftSize] = self.byteBuffer[shiftSize:self.byteBufferLength]
            self.byteBuffer[self.byteBufferLength - shiftSize:] = np.zeros(len(self.byteBuffer[self.byteBufferLength - shiftSize:]),dtype = 'uint8')
            self.byteBufferLength = self.byteBufferLength - shiftSize
            
            # Check that there are no errors with the buffer length
            if self.byteBufferLength < 0:
                self.byteBufferLength = 0
            # All processing done; Exit
            if(DEBUG):
                print("numFramesParsed: ", numFramesParsed)

        return dataOk, frameNumber, detObj



    