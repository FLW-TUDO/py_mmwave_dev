# Pythonic mmWave Toolbox for TI's IWR Radar Sensors

## Introduction

This is a toolbox composed of Python scripts to interact with TI's evaluation module (BoosterPack) for IWRxx43 mmWave sensing devices. This toolbox is the modified version from https://github.com/m6c7l/pymmw.


The toolbox provides easy access to particular OOB firmware versions, which are included in TI's mmWave SDKs and Industrial Toolboxes while focusing on data capturing and visualization with Python 3. Some elements of the toolbox can be considered being a Pythonic alternative to TI's mmWave Demo Visualizer.

![pymmw](pymmw-plots.png)

## Support 

* IWR1443 ES2.0
  * Capture Demo (SDK 1.1.0.2)
  * mmWave SDK Demo (SDK 1.2.0.5)
  * High Accuracy 14xx (Industrial Toolbox 2.5.2)
  * 4K FFT Stitching (Industrial Toolbox 2.5.2)
* IWR1443 ES3.0
  * mmWave SDK Demo (SDK 2.1.0.4)
  * High Accuracy 14xx (Industrial Toolbox 4.1.0)
* IWR1843 ES1.0
  * mmWave SDK Demo (SDK 3.5.0.4)
* IWR6843 ES2.0
  * mmWave SDK Demo (SDK 3.5.0.4)

> Make sure to connect the carrier board (i.e. ICBOOST) of the antenna module used (e.g. IWR6843-ISKODS) via FTDI to enable resets without pressing NRST. Resets via XDS110 are supported for IWR-BOOST-EVMs devices only.

> Advanced frame configuration with subframes is yet not supported.

## Features

* 2D plots
  * range and noise profile
  * Doppler-range FFT heat map
  * azimuth-range FFT heat map
  * FFT of IF signals
* 3D plots
  * CFAR detected objects (point cloud)
  * simple CFAR clustering
* Data capture
  * range and noise profile with CFAR detected objects

> 3D plots are currently not implemented for IWR1843 ES1.0 and IWR6843 ES2.0.

## Usage

The launcher of the toolbox is `pymmw.py`:

```
usage: pymmw.py [-h] [-c PORT] [-d PORT] [-f HANDLER] [-n]

arguments:
  -h, --help                            show this message and exit
  -c PORT, --control-port PORT          set port for control communication
  -d PORT, --data-port PORT             set port for data communication
  -f HANDLER, --force-handler HANDLER   force handler for data processing
  -n, --no-discovery                    no discovery for USB devices
```

In GNU/Linux, the launcher attempts to find and select serial ports of a valid USB device if no serial ports are provided.

## Dependencies

The toolbox works at least under GNU/Linux and Windows 10 with Python 3.8.5 - 3.8.9 if the following dependencies are met:

* pyserial (3.4 - 3.5)
* pyusb (1.0.2 - 1.1.1)
* matplotlib (3.3.1 - 3.4.1)
* numpy (1.19.1 - 1.20.2)
* scipy (1.5.2 - 1.6.2) - is only required for the application "azimuth-range FFT heat map" of the mmWave SDK Demo
* pyftdi (0.51.2 - 0.52.9) - is only required for carrier boards to reset via FTDI since reset via XDS110 is not reliable
* tiflash (1.2.9) - is only required for the application "FFT of IF signals" of the Capture Demo in conjunction with Texas Instruments’s Code Composer Studio (8.3.0) scripting interface to read ADC data from the L3 memory
* XDS Emulation Software Package (8.3.0) - is only required for working with Windows

> To make the tiflash module and the "FFT of IF signals" application work properly, an environment variable named CCS_PATH should point to the Code Composer Studio directory.

## Troubleshooting

### No Handler

No handler for a supported device and firmware could be found: `pymmw _read_ no handler found`. If `pymmw.py` is not able to read the welcome message of the firmware for some reason, try to set the USB ports manually and disable the USB discovery:
```
pymmw.py -c /dev/ttyACM0 -d /dev/ttyACM1 --no-discovery
```

> Use the NRST button to reset the device if the no-discovery option is activated.

## Reference

If you find this toolbox or code useful, please consider citing this [paper](https://publikationsserver.tu-braunschweig.de/receive/dbbs_mods_00066760):

```
@inproceedings{constapel2019practical,
  title={A Practical Toolbox for Getting Started with mmWave FMCW Radar Sensors},
  author={Constapel, Manfred and Cimdins, Marco and Hellbr{\"u}ck, Horst},
  booktitle={Proceedings of the 4th KuVS/GI Expert Talk on Localization},
  year={2019}
}
```
