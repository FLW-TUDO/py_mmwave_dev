# import the required Python packages
import struct
import math
import binascii
import codecs
import numpy as np
#from parser_scripts.parser_mmw_helper import parser_one_mmw_demo_output_packet #checkMagicPattern, getint16_Q7_9
from lib.utility import *
from lib.helper import *

PI = 3.14159265
# def getUint16(data):
#     """!
#        This function coverts 2 bytes to a 16-bit unsigned integer.

#         @param data : 1-demension byte array
#         @return     : 16-bit unsigned integer
#     """ 
#     return (data[0] +
#             data[1]*256)

def process_range_profile(payload_start, tlvLen, allBinData, cfg_numRangeBins):
    range_prof_data = []
    range_pymmw = []
    for i in range(tlvLen//2):
        range_data = getint16_Q7_9(allBinData[payload_start+2*i:payload_start+2*i+2:1]) # Take only two bytes of Range data.
        range_data_db = rp_to_db(range_data, cfg_numRangeBins)
        range_data_db_pymmw = q_to_db(range_data)
        range_prof_data.append(range_data_db)
        range_pymmw.append(range_data_db_pymmw)
    
    #print(f"range profile mmw: {range_data_db_pymmw}, range profile db: {range_data_db}")

    return range_prof_data

def process_noise_profile(payload_start, tlvLen, allBinData):
    noise_prof_data = []
    for i in range(tlvLen//2):
        noise_data = getint16_Q7_9(allBinData[payload_start+2*i:payload_start+2*i+2:1]) # Take only two bytes of Range data.
        noise_data_db = q_to_db(noise_data)
        noise_prof_data.append(noise_data_db)
    #print(f"range profile raw: {range_data}, range profile db: {range_data_db}")

    return noise_data_db

def process_range_profile_pymmw(payload_start, tlvLen, allBinData):
    n, v = aux_profile(allBinData[payload_start+0:payload_start+2:1])
    #print("range profile pymmw: ", n, ", ", v)
    return v

def process_side_info(payload_start, allBinData, offset):
    # for each detect objects, extract snr and noise                                            
    snr   = getUint16(allBinData[payload_start+offset:payload_start+offset+2:1])
    snr = float(snr)/10.0

    # byte2 and byte3 represent noise. convert 2 bytes to 16-bit integer 
    #noise = getUint16(allBinData[tlvStart + offset + 2:tlvStart + offset + 4:1])
    noise = getUint16(allBinData[payload_start+offset+2:payload_start+offset+4:1])
    noise = float(noise)/10.0

    peakVal = snr + noise

    #print(f"x8 side info: snr: {snr}, noise: {noise}, peakVal: {peakVal}")

    '''
    /*peakval is not part of the point cloud. It needs to be computed from the side info.
        If sideinfo is empty, peakvalLog is empty and all objects in scatter plot will be mapped
        to same color*/
        if(Params.sideInfo_byteVecIdx > -1)
        {
            peakValLog = math.add(Params.sideInfo.snrDB, Params.sideInfo.noiseDB);
        }    
        else
        {
            /*Side info TLV was not received*/
            peakValLog = {};
        }  
    '''

    return snr, noise

        # detectedSNR_array.append(snr)
        # detectedNoise_array.append(noise)
                                                        
        # offset = offset + 4

def process_detected_object(payload_start, allBinData, offset, config_rangeIdxToMeters, \
                            config_dopplerResolutionMps):
    # TLV type 1 contains x, y, z, v values of all detect objects. 
    # each x, y, z, v are 32-bit float in IEEE 754 single-precision binary floating-point format, so every 16 bytes represent x, y, z, v values of one detect objects.    
    
    '''
    from read IWR6843 example
    #rangeIdx = struct.unpack('<H', allBinData[payload_start+offset:payload_start+offset+2])[0]
    #rangeIdx = np.int16(rangeIdx)

    #dopplerIdx = struct.unpack('<H', allBinData[payload_start+offset+2:payload_start+offset+4])[0]
    #dopplerIdx = np.int16(dopplerIdx)
    
    #peakVal = struct.unpack('<H', allBinData[payload_start+offset+4:payload_start+offset+6])[0]
    #peakVal = np.int16(peakVal)
    '''


    # convert byte0 to byte3 to float x value
    x = struct.unpack('<f', codecs.decode(binascii.hexlify(allBinData[payload_start+offset:payload_start+offset+4:1]),'hex'))[0]
    x = np.round(x,3)

    # convert byte4 to byte7 to float y value
    y = struct.unpack('<f', codecs.decode(binascii.hexlify(allBinData[payload_start+offset+4:payload_start+offset+8:1]),'hex'))[0]
    y = np.round(y,3)

    # convert byte8 to byte11 to float z value
    z = struct.unpack('<f', codecs.decode(binascii.hexlify(allBinData[payload_start+offset+8:payload_start+offset+12:1]),'hex'))[0]
    z = np.round(z,3)

    # convert byte12 to byte15 to float v value
    v = struct.unpack('<f', codecs.decode(binascii.hexlify(allBinData[payload_start+offset+12:payload_start+offset+16:1]),'hex'))[0]
    v = np.round(v,6)

    # calculate range profile from x, y, z
    compDetectedRange = math.sqrt((x * x)+(y * y)+(z * z)) #range from .cpp temp[4] = (float) mmwData.objOut.rangeIdx * vrange; vrange is range resolution

    # Make the necessary corrections and calculate the rest of the data
    rangeIdx = np.round(compDetectedRange / config_rangeIdxToMeters)
    dopplerIdx = np.round(v / config_dopplerResolutionMps)

    #rangeVal = rangeIdx * config_rangeIdxToMeters
    #dopplerIdx[dopplerIdx > (config_numDopplerBin/2 - 1)] = dopplerIdx[dopplerIdx > (config_numDopplerBin/2 - 1)] - 65535
    #dopplerVal = dopplerIdx * config_dopplerResolutionMps
    
    #print("rangeIdx: ", rangeIdx, "rangeVal: ", rangeVal)
    #print(f"rangeIdx: {rangeIdx}, dopplerIdx: {dopplerIdx}")

    # calculate azimuth from x, y           
    if y == 0:
        if x >= 0:
            detectedAzimuth = 90
        else:
            detectedAzimuth = -90 
    else:
        detectedAzimuth = math.atan(x/y) * 180 / PI

    # calculate elevation angle from x, y, z
    if x == 0 and y == 0:
        if z >= 0:
            detectedElevAngle = 90
        else: 
            detectedElevAngle = -90
    else:
        detectedElevAngle = math.atan(z/math.sqrt((x * x)+(y * y))) * 180 / PI
    
    #offset = offset + 16
    #print("detObjs: x:", x, ", y", y, ", z", z, ", v", v, ", range:", \
    #        compDetectedRange, ", azimuth:", detectedAzimuth, ", elevAngle:", detectedElevAngle)

    return x, y, z, v, compDetectedRange, detectedAzimuth, detectedElevAngle

                
def aux_profile(dat, n=2):  # value of range or noise profile
    v = intify(dat[ 0: n])
    return n, v

def stat_info(dat, n=24):  # performance measures and statistical data
    ifpt = intify(dat[ 0: 4])
    tot  = intify(dat[ 4: 8])
    ifpm = intify(dat[ 8:12])
    icpm = intify(dat[12:16])
    afpl = intify(dat[16:20])
    ifpl = intify(dat[20: n])
    return n, ifpt, tot, ifpm, icpm, afpl, ifpl

def aux_heatmap(dat, sgn, n=2):  # value for heatmaps
    v = intify(dat[ 0: n])
    if sgn and v > 32767: v -= 65536
    return n, v