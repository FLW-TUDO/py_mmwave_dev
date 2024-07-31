################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
CFG_SRCS += \
../mmw_mss.cfg 

CMD_SRCS += \
../mmw_mss_linker.cmd \
../r4f_linker.cmd 

C_SRCS += \
../mmw_cli.c \
../mmw_lvds_stream.c \
../mmwdemo_adcconfig.c \
../mmwdemo_flash.c \
../mmwdemo_monitor.c \
../mmwdemo_rfparser.c \
../mss_main.c \
../objdetrangehwa.c 

GEN_CMDS += \
./configPkg/linker.cmd 

GEN_FILES += \
./configPkg/linker.cmd \
./configPkg/compiler.opt 

GEN_MISC_DIRS += \
./configPkg 

C_DEPS += \
./mmw_cli.d \
./mmw_lvds_stream.d \
./mmwdemo_adcconfig.d \
./mmwdemo_flash.d \
./mmwdemo_monitor.d \
./mmwdemo_rfparser.d \
./mss_main.d \
./objdetrangehwa.d 

GEN_OPTS += \
./configPkg/compiler.opt 

OBJS += \
./mmw_cli.oer4f \
./mmw_lvds_stream.oer4f \
./mmwdemo_adcconfig.oer4f \
./mmwdemo_flash.oer4f \
./mmwdemo_monitor.oer4f \
./mmwdemo_rfparser.oer4f \
./mss_main.oer4f \
./objdetrangehwa.oer4f 

GEN_MISC_DIRS__QUOTED += \
"configPkg" 

OBJS__QUOTED += \
"mmw_cli.oer4f" \
"mmw_lvds_stream.oer4f" \
"mmwdemo_adcconfig.oer4f" \
"mmwdemo_flash.oer4f" \
"mmwdemo_monitor.oer4f" \
"mmwdemo_rfparser.oer4f" \
"mss_main.oer4f" \
"objdetrangehwa.oer4f" 

C_DEPS__QUOTED += \
"mmw_cli.d" \
"mmw_lvds_stream.d" \
"mmwdemo_adcconfig.d" \
"mmwdemo_flash.d" \
"mmwdemo_monitor.d" \
"mmwdemo_rfparser.d" \
"mss_main.d" \
"objdetrangehwa.d" 

GEN_FILES__QUOTED += \
"configPkg\linker.cmd" \
"configPkg\compiler.opt" 

C_SRCS__QUOTED += \
"../mmw_cli.c" \
"../mmw_lvds_stream.c" \
"../mmwdemo_adcconfig.c" \
"../mmwdemo_flash.c" \
"../mmwdemo_monitor.c" \
"../mmwdemo_rfparser.c" \
"../mss_main.c" \
"../objdetrangehwa.c" 


