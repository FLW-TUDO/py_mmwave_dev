# invoke SourceDir generated makefile for mmw_dss.pe674
mmw_dss.pe674: .libraries,mmw_dss.pe674
.libraries,mmw_dss.pe674: package/cfg/mmw_dss_pe674.xdl
	$(MAKE) -f D:\ti\dev\mmWave\out_of_box_6843_isk_dss/src/makefile.libs

clean::
	$(MAKE) -f D:\ti\dev\mmWave\out_of_box_6843_isk_dss/src/makefile.libs clean

