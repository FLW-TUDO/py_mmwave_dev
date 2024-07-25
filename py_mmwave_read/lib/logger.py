import csv, json, time
import numpy as np
import os
import sys
import signal
from datetime import datetime

# Function to convert numpy types to native Python types
def convert_to_native(obj):
    if isinstance(obj, np.integer):
        return int(obj)
    elif isinstance(obj, np.floating):
        return float(obj)
    elif isinstance(obj, np.ndarray):
        return obj.tolist()
    elif isinstance(obj, np.complex128):
        print("convert np azimuth")
        return obj.tolist()
    elif isinstance(obj, (np.float32, np.float64)):
        return float(obj)
    elif isinstance(obj, (np.int32, np.int64)):
        return int(obj)
    else:
        return obj
    
def store_detObj(config_params, numDetObj, detectedRange_array, detectedAzimuth_array, detectedElevAngle_array,
                 detectedX_array, detectedY_array, detectedZ_array, detectedV_array, detectedSNR_array, 
                 range_prof_data, range_noise_data, range_doppler_heatmap_data, range_azimuth_heatmap_data, filename):
    
    current_timestamp = time.time()

    detObj = {"timestamp": current_timestamp}

    if config_params["detectedObjects"] == 1:
        detObj.update({
            "numObj": convert_to_native(numDetObj),
            "range": convert_to_native(detectedRange_array),
            "azimuth": convert_to_native(detectedAzimuth_array),
            "elevation": convert_to_native(detectedElevAngle_array),
            "x": convert_to_native(detectedX_array),
            "y": convert_to_native(detectedY_array),
            "z": convert_to_native(detectedZ_array),
            "v": convert_to_native(detectedV_array)
        })

    if config_params["logMagRange"] == 1:
        detObj["rangeProfile"] = convert_to_native(range_prof_data)

    if config_params["noiseProfile"] == 1:
        detObj["noiseProfile"] = convert_to_native(range_noise_data)

    if config_params["rangeAzimuthHeatMap"] == 1:
        range_azimuth_heatmap_magnitude = np.abs(range_azimuth_heatmap_data)
        range_azimuth_heatmap_phase = np.angle(range_azimuth_heatmap_data)
        detObj["rangeAzimuthHeatMap"] = {
            "magnitude": convert_to_native(range_azimuth_heatmap_magnitude),
            "phase": convert_to_native(range_azimuth_heatmap_phase)
        }
        # detObj["rangeAzimuthHeatMap"] = convert_to_native(range_azimuth_heatmap_data)  # Placeholder
        print("rangeAzimuthHeatMap: ", detObj["rangeAzimuthHeatMap"])

    if config_params["rangeDopplerHeatMap"] == 1:
        detObj["rangeDopplerHeatMap"] = convert_to_native(range_doppler_heatmap_data)  # Placeholder

    if config_params["sideInfo"] == 1:
        detObj["snr"] = convert_to_native(detectedSNR_array)  # Placeholder

    print("before json dumps")
    detObj_json = json.dumps(detObj)
    dataOk = 1

    print("dataOk: ", dataOk, "detObj: ", detObj_json)

    with open(filename, "a+") as test_data:
        test_data.write(detObj_json + '\n')

    return dataOk, detObj
    