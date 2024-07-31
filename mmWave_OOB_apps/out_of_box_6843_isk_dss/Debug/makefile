################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := D:/ti/ccs1270/ccs/tools/compiler/ti-cgt-c6000_8.3.12

GEN_OPTS__FLAG := --cmd_file="configPkg/compiler.opt" 
GEN_CMDS__FLAG := -l"configPkg/linker.cmd" 

ORDERED_OBJS += \
"./antenna_geometry.oe674" \
"./dss_main.oe674" \
"./objectdetection.oe674" \
"../c674x_linker.cmd" \
"../mmw_dss_linker.cmd" \
$(GEN_CMDS__FLAG) \
-ldsplib.ae64P \
-lmathlib.ae674 \
-llibmathutils.ae674 \
-llibsoc_xwr68xx.ae674 \
-llibosal_xwr68xx.ae674 \
-llibcrc_xwr68xx.ae674 \
-llibmailbox_xwr68xx.ae674 \
-llibmmwavelink_xwr68xx.ae674 \
-llibmmwave_xwr68xx.ae674 \
-llibedma_xwr68xx.ae674 \
-llibadcbuf_xwr68xx.ae674 \
-llibmmwavealg_xwr68xx.ae674 \
-llibcbuff_xwr68xx.ae674 \
-llibhsiheader_xwr68xx.ae674 \
-llibcfarcaproc_dsp_xwr68xx.ae674 \
-llibdopplerproc_dsp_xwr68xx.ae674 \
-llibaoaproc_dsp_xwr68xx.ae674 \
-llibdpm_xwr68xx.ae674 \
-llibdpedma_hwa_xwr68xx.ae674 \
-lrts6740_elf.lib \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
out_of_box_6843_isk_dss.xe674 

EXE_OUTPUTS__QUOTED += \
"out_of_box_6843_isk_dss.xe674" 


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "out_of_box_6843_isk_dss.xe674"

# Tool invocations
out_of_box_6843_isk_dss.xe674: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C6000 Linker'
	"D:/ti/ccs1270/ccs/tools/compiler/ti-cgt-c6000_8.3.12/bin/cl6x" -mv6740 --abi=eabi -O3 --opt_for_speed=3 --define=SOC_XWR68XX --define=SUBSYS_DSS --define=MMWAVE_L3RAM_NUM_BANK=6 --define=MMWAVE_SHMEM_TCMA_NUM_BANK=0 --define=MMWAVE_SHMEM_TCMB_NUM_BANK=0 --define=MMWAVE_SHMEM_BANK_SIZE=0x20000 --define=DOWNLOAD_FROM_CCS --define=DebugP_ASSERT_ENABLED --define=_LITTLE_ENDIAN --define=OBJDET_NO_RANGE --define=ISK --define=APP_RESOURCE_FILE='<'ti/demo/xwr68xx/mmw/mmw_res.h'>' -g --gcc --diag_error=10015 --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --obj_extension=.oe674 -z -m"out_of_box_6843_isk_dss.map" --heap_size=0x800 --stack_size=0x800 -i"D:/ti/mathlib_c674x_3_1_2_1/packages/ti/mathlib/lib" -i"D:/ti/dsplib_c64Px_3_4_0_0/packages/ti/dsplib/lib" -i"D:/ti/ccs1270/ccs/tools/compiler/ti-cgt-c6000_8.3.12/lib" -i"D:/ti/dev/mmWave/out_of_box_6843_isk_dss" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/control/mmwave/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/control/mmwavelink/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/control/dpm/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/alg/mmwavelib/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/drivers/crc/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/drivers/soc/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/drivers/osal/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/drivers/mailbox/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/drivers/edma/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/drivers/adcbuf/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/drivers/cbuff/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/utils/hsiheader/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/utils/mathutils/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/datapath/dpc/dpu/dopplerproc/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/datapath/dpc/dpu/cfarcaproc/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/datapath/dpc/dpu/aoaproc/lib" -i"D:/ti/mmwave_sdk_03_05_00_04/packages/ti/datapath/dpedma/lib" -i"C:/ti/dsplib_c64Px_3_4_0_0/packages/ti/dsplib/lib" -i"C:/ti/mathlib_c674x_3_1_2_1/packages/ti/mathlib/lib" -i"D:/ti/ccs1270/ccs/tools/compiler/ti-cgt-c6000_8.3.12/include" --reread_libs --disable_auto_rts --define=MMWAVE_L3RAM_NUM_BANK=6 --define=MMWAVE_SHMEM_TCMA_NUM_BANK=0 --define=MMWAVE_SHMEM_TCMB_NUM_BANK=0 --define=MMWAVE_SHMEM_BANK_SIZE=0x20000 --diag_error=10015 --diag_warning=225 --diag_wrap=off --display_error_number --warn_sections --xml_link_info="xwr68xx_mmw_demo_dss_linkInfo.xml" --ram_model --unused_section_elimination=on -o "out_of_box_6843_isk_dss.xe674" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(GEN_FILES__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "antenna_geometry.oe674" "dss_main.oe674" "objectdetection.oe674" 
	-$(RM) "antenna_geometry.d" "dss_main.d" "objectdetection.d" 
	-$(RMDIR) $(GEN_MISC_DIRS__QUOTED)
	-@echo 'Finished clean'
	-@echo ' '

post-build:
	-D:/ti/mmwave_sdk_03_05_00_04/packages/scripts/ImageCreator/out2rprc/out2rprc.exe out_of_box_6843_isk_dss.xe674 out_of_box_6843_isk_dss.bin
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

