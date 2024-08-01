################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
CFG_SRCS += \
../mmw_dss.cfg 

CMD_SRCS += \
../c674x_linker.cmd \
../mmw_dss_linker.cmd 

C_SRCS += \
../antenna_geometry.c \
../dss_main.c \
../objectdetection.c 

GEN_CMDS += \
./configPkg/linker.cmd 

GEN_FILES += \
./configPkg/linker.cmd \
./configPkg/compiler.opt 

GEN_MISC_DIRS += \
./configPkg 

C_DEPS += \
./antenna_geometry.d \
./dss_main.d \
./objectdetection.d 

GEN_OPTS += \
./configPkg/compiler.opt 

OBJS += \
./antenna_geometry.oe674 \
./dss_main.oe674 \
./objectdetection.oe674 

GEN_MISC_DIRS__QUOTED += \
"configPkg" 

OBJS__QUOTED += \
"antenna_geometry.oe674" \
"dss_main.oe674" \
"objectdetection.oe674" 

C_DEPS__QUOTED += \
"antenna_geometry.d" \
"dss_main.d" \
"objectdetection.d" 

GEN_FILES__QUOTED += \
"configPkg\linker.cmd" \
"configPkg\compiler.opt" 

C_SRCS__QUOTED += \
"../antenna_geometry.c" \
"../dss_main.c" \
"../objectdetection.c" 


