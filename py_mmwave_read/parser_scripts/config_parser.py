import json
import os
import sys

#Function to read json config setup
def read_config(config_file):
    with open(config_file, 'r') as file:
        config = json.load(file)
    
    config_file_name = config.get('configFileName', None)
    visualizer = config.get('visualizer', None)
    control_port = config.get('controlPort', None)
    data_port = config.get('dataPort', None)
    file_name = config.get('fileName', None)
    
    return {
        "configFileName": config_file_name,
        "visualizer": visualizer,
        "controlPort": control_port,
        "dataPort": data_port,
        "fileName": file_name
    }

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

        # Get the information about the guiMonitor   
        elif "guiMonitor" in splitWords[0]:
            
            detectedObjects = int(splitWords[2]);
            logMagRange = int(splitWords[3]);
            noiseProfile = int(splitWords[4]);
            rangeAzimuthHeatMap = int(splitWords[5]);
            rangeDopplerHeatMap = int(splitWords[6]);
            sideInfo = int(splitWords[7]);
            print(f"guiMonitor: {detectedObjects}, {logMagRange}, {noiseProfile}, {rangeAzimuthHeatMap}, {rangeDopplerHeatMap}, {sideInfo}")

          
    # Combine the read data to obtain the configuration parameters           
    numChirpsPerFrame = (chirpEndIdx - chirpStartIdx + 1) * numLoops
    configParameters["numDopplerBins"] = numChirpsPerFrame / numTxAnt
    configParameters["numRangeBins"] = numAdcSamplesRoundTo2
    configParameters["numVirtAnt"] = numTxAnt * numRxAnt
    configParameters["rangeResolutionMeters"] = (3e8 * digOutSampleRate * 1e3) / (2 * freqSlopeConst * 1e12 * numAdcSamples)
    configParameters["rangeIdxToMeters"] = (3e8 * digOutSampleRate * 1e3) / (2 * freqSlopeConst * 1e12 * configParameters["numRangeBins"])
    configParameters["dopplerResolutionMps"] = 3e8 / (2 * startFreq * 1e9 * (idleTime + rampEndTime) * 1e-6 * configParameters["numDopplerBins"] * numTxAnt)
    configParameters["maxRange"] = (300 * 0.9 * digOutSampleRate)/(2 * freqSlopeConst * 1e3)
    configParameters["maxVelocity"] = 3e8 / (4 * startFreq * 1e9 * (idleTime + rampEndTime) * 1e-6 * numTxAnt)
    
    #config of Gui Monitor
    configParameters["detectedObjects"] = detectedObjects
    configParameters["logMagRange"] = logMagRange
    configParameters["noiseProfile"] = noiseProfile
    configParameters["rangeAzimuthHeatMap"] = rangeAzimuthHeatMap
    configParameters["rangeDopplerHeatMap"] = rangeDopplerHeatMap
    configParameters["sideInfo"] = sideInfo
    print(f"cfg param: chirpEndIdx: {chirpEndIdx}, chirpStartIdx: {chirpStartIdx}, numAdcSamples: {numAdcSamples}, freqSlopeConst: {freqSlopeConst}, numDopplerBins: {numChirpsPerFrame / numTxAnt}, numRangeBins: {numAdcSamplesRoundTo2}")  
    return configParameters
