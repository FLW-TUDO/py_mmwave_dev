################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.oe674: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C6000 Compiler'
	"D:/ti/ccs1270/ccs/tools/compiler/ti-cgt-c6000_8.3.12/bin/cl6x" -mv6740 --abi=eabi -O3 --opt_for_speed=3 --include_path="D:/ti/dev/mmWave/out_of_box_6843_isk_dss" --include_path="D:/ti/mmwave_sdk_03_05_00_04/packages" --include_path="D:/ti/mathlib_c674x_3_1_2_1/packages" --include_path="D:/ti/dsplib_c64Px_3_4_0_0/packages" --include_path="D:/ti/dsplib_c64Px_3_4_0_0/packages/ti/dsplib/src/DSP_fft16x16/c64P" --include_path="D:/ti/dsplib_c64Px_3_4_0_0/packages/ti/dsplib/src/DSP_fft32x32/c64P" --include_path="D:/ti/ccs1270/ccs/tools/compiler/ti-cgt-c6000_8.3.12/include" --define=SOC_XWR68XX --define=SUBSYS_DSS --define=MMWAVE_L3RAM_NUM_BANK=6 --define=MMWAVE_SHMEM_TCMA_NUM_BANK=0 --define=MMWAVE_SHMEM_TCMB_NUM_BANK=0 --define=MMWAVE_SHMEM_BANK_SIZE=0x20000 --define=DOWNLOAD_FROM_CCS --define=DebugP_ASSERT_ENABLED --define=_LITTLE_ENDIAN --define=OBJDET_NO_RANGE --define=ISK --define=APP_RESOURCE_FILE='<'ti/demo/xwr68xx/mmw/mmw_res.h'>' -g --gcc --diag_error=10015 --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --obj_extension=.oe674 --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-985778783:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-985778783-inproc

build-985778783-inproc: ../mmw_dss.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"D:/ti/xdctools_3_50_08_24_core/xs" --xdcpath="D:/ti/bios_6_73_01_01/packages;" xdc.tools.configuro -o configPkg -t ti.targets.elf.C674 -p ti.platforms.c6x:IWR68XX:false:600 -r release -c "D:/ti/ccs1270/ccs/tools/compiler/ti-cgt-c6000_8.3.12" --compileOptions "--enum_type=int " "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-985778783 ../mmw_dss.cfg
configPkg/compiler.opt: build-985778783
configPkg: build-985778783


