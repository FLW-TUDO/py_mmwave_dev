# Python mmWave serial reader for TI mmWave Radar Sensor

## Introduction

This toolbox provides a python toolbox to read the measurement of Texas Instrument (TI) mmWave Radar Sensor IWR 6843 ISK. The toolbox offers straightforward access to specific OOB firmware versions included in TI's mmWave SDKs and Industrial Toolboxes, emphasizing data capture and visualization with Python 3. Certain components of the toolbox serve as a Python-based alternative to TI's mmWave Demo Visualizer.

## Support 

* IWR6843 ES2.0
  * mmWave SDK Demo (SDK 3.5.0.4)

> Compatible to connect directly to the IWR6843 or board carrier board (i.e. MMWAVEICBOOST).

## Features

* GUI Monitor (every 10-12 ms depending on buffer)
  * 3D Point Cloud (default CFAR): X, Y, Z coordinates and range, azimuth, elevation, and velocity of each detected object points 
  * range profile 
  * noise profile
  * side information of detected points: SNR and Noise
* Data logger
* Reset sensor via software
* 3D plot real-time visualization of 3D point cloud

> In progress: Doppler-range FFT heat map and azimuth-range FFT heat map (every 250 ms due to UART limitation). At the moment the user can use the `py_mmwave_visualizer` to capture both heatmaps.

## How to Use

The launcher of the toolbox is `py_mmw_main.py`. 

The code can executed directly via visual studio code or terminal by typing python py_mmw_main.py.

First of all, the user must setup the `py_mmw_setup.json` and `xwr68xx_profile_xxx.cfg` config file under the config folder. The main script will read the corresponding config files and reset the hardware via CLI command that is sent to the sensor in the beginning. When the chirp returns after bouncing o× an object, it is mixed with the original transmit chirp to determine range, velocity,
and angle. The resulting signal is digitized and organized into a Type Length Value structure (TLV) based on the demo being
run. This information is then packed into an output structure and sent back to the computer via UART. The current UART
output is sent out every frame as a packet containing a frame header and TLV. More info please refer to Understanding UART Data Output Format in the Sciebo link.

* `py_mmw_setup.json`:
    * configFileName: path of xwr68xx_profile.cfg config file
    * visualizer: to activate/disable the 3D plot
    * controlPort: COM port of CFG port (please check the device manager)
    * dataPort: COM port of DATA port (please check the device manager)
    * fileName: data logger file name and path

* `xwr68xx_profile_xxx.cfg`:
    * Best config right now: `xwr68xx_profile_2024_07_16_20_fps.cfg`
    * Set up this variable guiMonitor -1 1 1 0 0 0 1 (1/0 refers to on/off), the boolean toggles after -1 character describe different TLV types representing features or data that we want to collect whcih represent respectively:
        * Detected Objects (TLV Type 1): 3D point cloud, velocity and derives the    range, azimuth, elevaton parameters
        * Range profile (TLV Type 2): 1D FFT of range profile or the relative power in dB
        * Noise profile (TLV Type 3): 1D FFT of noise profile or the relative power in dB
        * Range-Azimuth Heatmap (TLV Type 4): 2D FFT of Azimuth heatmap derived from Range
        * Range-Doppler Heatmap (TLV Type 5): 2D FFT of Doppler heatmap derived from Range 
        * Side Infor for Detected Points (TLV Type 7): SNR and Noise values of each point cloud
    * To obtain more densed point cloud, configure the `cfarCfg -1 0 2 8 4 3 0 4* 1 cfarCfg -1 1 0 4 2 3 1 5* 1` the number with asterix must be changed, less means the less threshold (dB) to remove the noise, greater value means more threshold to filter out the noise.

To terminate the measurement, user can press Ctrl+C.

## Troubleshooting
If the measurement is not yet started, try to press the reset button on the IWR 6843 board or MMMWAVEICBOOST module




