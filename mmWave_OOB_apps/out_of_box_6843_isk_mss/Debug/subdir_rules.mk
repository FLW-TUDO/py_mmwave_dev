################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.oer4f: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"D:/ti/ccs1270/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/bin/armcl" -mv7R4 --code_state=16 --float_support=VFPv3D16 -me -O3 --include_path="D:/ti/dev/mmWave/out_of_box_6843_isk_mss" --include_path="D:/ti/mmwave_sdk_03_05_00_04/packages" --include_path="D:/ti/ccs1270/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/include" --define=SOC_XWR68XX --define=SUBSYS_MSS --define=DOWNLOAD_FROM_CCS --define=MMWAVE_L3RAM_NUM_BANK=6 --define=MMWAVE_SHMEM_TCMA_NUM_BANK=0 --define=MMWAVE_SHMEM_TCMB_NUM_BANK=0 --define=MMWAVE_SHMEM_BANK_SIZE=0x20000 --define=DebugP_ASSERT_ENABLED --define=_LITTLE_ENDIAN --define=OBJDET_NO_RANGE --define=ISK --define=APP_RESOURCE_FILE='<'ti/demo/xwr68xx/mmw/mmw_res.h'>' -g --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --enum_type=int --abi=eabi --obj_extension=.oer4f --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-2029147391:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-2029147391-inproc

build-2029147391-inproc: ../mmw_mss.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"D:/ti/xdctools_3_50_08_24_core/xs" --xdcpath="D:/ti/bios_6_73_01_01/packages;" xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.R4Ft -p ti.platforms.cortexR:IWR68XX:false:200 -r release -c "D:/ti/ccs1270/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS" --compileOptions "--enum_type=int " "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-2029147391 ../mmw_mss.cfg
configPkg/compiler.opt: build-2029147391
configPkg: build-2029147391


