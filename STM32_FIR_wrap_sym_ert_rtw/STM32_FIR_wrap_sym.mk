###########################################################################
## Makefile generated for Simulink model 'STM32_FIR_wrap_sym'. 
## 
## Makefile     : STM32_FIR_wrap_sym.mk
## Generated on : Fri Sep 28 16:46:34 2018
## MATLAB Coder version: 4.0 (R2018a)
## 
## Build Info:
## 
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/STM32_FIR_wrap_sym.elf
## Product type : executable
## Build type   : Top-Level Standalone Executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPUTER                Computer type. See the MATLAB "computer" command.

PRODUCT_NAME              = STM32_FIR_wrap_sym
MAKEFILE                  = STM32_FIR_wrap_sym.mk
COMPUTER                  = PCWIN64
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2018a
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2018a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
MASTER_ANCHOR_DIR         = 
START_DIR                 = C:/Users/hpong/Documents/MATLAB
ARCH                      = win64
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ARM Cortex-M (CMSIS)
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
MODELREF_LINK_RSPFILE_NAME = STM32_FIR_wrap_sym_ref.rsp
RELATIVE_PATH_TO_ANCHOR   = ..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          GNU Tools for ARM Embedded Processors v5.2 | gmake (64-bit Windows)
# Supported Version(s):    
# ToolchainInfo Version:   R2018a
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# TARGET_LOAD_CMD_ARGS
# TARGET_LOAD_CMD
# MW_GNU_ARM_TOOLS_PATH
# FDATASECTIONS_FLG

#-----------
# MACROS
#-----------

LIBGCC                = ${shell arm-none-eabi-gcc ${CFLAGS} -print-libgcc-file-name}
LIBC                  = ${shell arm-none-eabi-gcc ${CFLAGS} -print-file-name=libc.a}
LIBM                  = ${shell arm-none-eabi-gcc ${CFLAGS} -print-file-name=libm.a}
PRODUCT_BIN           = $(RELATIVE_PATH_TO_ANCHOR)/$(PRODUCT_NAME).bin
PRODUCT_HEX           = $(RELATIVE_PATH_TO_ANCHOR)/$(PRODUCT_NAME).hex
CPFLAGS               = -O binary
SHELL                 = %SystemRoot%/system32/cmd.exe

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lm

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# Assembler: GNU ARM Assembler
AS_PATH = $(MW_GNU_ARM_TOOLS_PATH)
AS = $(AS_PATH)/arm-none-eabi-gcc

# C Compiler: GNU ARM C Compiler
CC_PATH = $(MW_GNU_ARM_TOOLS_PATH)
CC = $(CC_PATH)/arm-none-eabi-gcc

# Linker: GNU ARM Linker
LD_PATH = $(MW_GNU_ARM_TOOLS_PATH)
LD = $(LD_PATH)/arm-none-eabi-g++

# C++ Compiler: GNU ARM C++ Compiler
CPP_PATH = $(MW_GNU_ARM_TOOLS_PATH)
CPP = $(CPP_PATH)/arm-none-eabi-g++

# C++ Linker: GNU ARM C++ Linker
CPP_LD_PATH = $(MW_GNU_ARM_TOOLS_PATH)
CPP_LD = $(CPP_LD_PATH)/arm-none-eabi-g++

# Archiver: GNU ARM Archiver
AR_PATH = $(MW_GNU_ARM_TOOLS_PATH)
AR = $(AR_PATH)/arm-none-eabi-ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = $(MEX_PATH)/mex

# Binary Converter: Binary Converter
OBJCOPYPATH = $(MW_GNU_ARM_TOOLS_PATH)
OBJCOPY = $(OBJCOPYPATH)/arm-none-eabi-objcopy

# Hex Converter: Hex Converter
OBJCOPYPATH = $(MW_GNU_ARM_TOOLS_PATH)
OBJCOPY = $(OBJCOPYPATH)/arm-none-eabi-objcopy

# Executable Size: Executable Size
EXESIZEPATH = $(MW_GNU_ARM_TOOLS_PATH)
EXESIZE = $(EXESIZEPATH)/arm-none-eabi-size

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%\bin\win64
MAKE = $(MAKE_PATH)/gmake


#-------------------------
# Directives/Utilities
#-------------------------

ASDEBUG             = -g
AS_OUTPUT_FLAG      = -o
CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @del /f/q
ECHO                = @echo
MV                  = @move
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = ruvs
ASFLAGS              = -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  \
                       -Wall \
                       -x assembler-with-cpp \
                       $(ASFLAGS_ADDITIONAL) \
                       $(DEFINES) \
                       $(INCLUDES) \
                       -c
OBJCOPYFLAGS_BIN     = -O binary $(PRODUCT) $(PRODUCT_BIN)
CFLAGS               = $(FDATASECTIONS_FLG) \
                       -Wall \
                       -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  \
                       -c \
                       -O0
CPPFLAGS             = -std=c++98 \
                       -fno-rtti \
                       -fno-exceptions \
                       $(FDATASECTIONS_FLG) \
                       -Wall \
                       -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  \
                       -c \
                       -O0
CPP_LDFLAGS          = -Wl,--gc-sections \
                       -Wl,-Map="$(PRODUCT_NAME).map"
CPP_SHAREDLIB_LDFLAGS  =
DOWNLOAD_FLAGS       =
EXESIZE_FLAGS        = $(PRODUCT)
EXECUTE_FLAGS        =
OBJCOPYFLAGS_HEX     = -O ihex $(PRODUCT) $(PRODUCT_HEX)
LDFLAGS              = -Wl,--gc-sections \
                       -Wl,-Map="$(PRODUCT_NAME).map"
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    =

#--------------------
# File extensions
#--------------------

ASM_Type1_Ext       = .S
DEP_EXT             = .dep
OBJ_EXT             = .o
ASM_EXT             = .s
DEP_EXT             = .dep
H_EXT               = .h
OBJ_EXT             = .o
C_EXT               = .c
EXE_EXT             = .elf
SHAREDLIB_EXT       = .so
CXX_EXT             = .cxx
DEP_EXT             = .dep
HPP_EXT             = .hpp
OBJ_EXT             = .o
CPP_EXT             = .cpp
UNIX_TYPE1_EXT      = .cc
UNIX_TYPE2_EXT      = .C
EXE_EXT             = .elf
SHAREDLIB_EXT       = .so
STATICLIB_EXT       = .lib
MEX_EXT             = .mexw64
MAKE_EXT            = .mk


###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/STM32_FIR_wrap_sym.elf
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -IC:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/shared/svd/include -I$(START_DIR)/STM32_FIR_wrap_sym_ert_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils -IC:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/armcortexmbase/scheduler/include -IC:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/armcortexmbase/cmsis_rtos_rtx/include -IC:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/armcortexmbase/xcp/include -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/serial -IC:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/stm32f769idiscovery/include -IC:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/mbed/include -IC:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/stm32f746gdiscovery/include -IC:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/mbedlibrary-stm.instrset/0f02307a0877 -IC:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/mbedlibrary-stm.instrset/0f02307a0877/TARGET_DISCO_F769NI -IC:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/mbedlibrary-stm.instrset/0f02307a0877/TARGET_DISCO_F769NI/TARGET_STM -IC:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/mbedlibrary-stm.instrset/0f02307a0877/TARGET_DISCO_F769NI/TARGET_STM/TARGET_STM32F7 -IC:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/mbedlibrary-stm.instrset/0f02307a0877/TARGET_DISCO_F769NI/TARGET_STM/TARGET_STM32F7/TARGET_STM32F769xI -IC:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/mbedlibrary-stm.instrset/0f02307a0877/TARGET_DISCO_F769NI/TARGET_STM/TARGET_STM32F7/TARGET_STM32F769xI/TARGET_DISCO_F769NI -IC:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/mbedlibrary-stm.instrset/0f02307a0877/TARGET_DISCO_F769NI/TARGET_STM/TARGET_STM32F7/TARGET_STM32F769xI/device -IC:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/mbedlibrary-stm.instrset/0f02307a0877/TARGET_DISCO_F769NI/TARGET_STM/TARGET_STM32F7/device -IC:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/mbedlibrary-stm.instrset/0f02307a0877/TARGET_DISCO_F769NI/TOOLCHAIN_GCC_ARM -IC:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/mbedlibrary-stm.instrset/0f02307a0877/drivers -IC:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/mbedlibrary-stm.instrset/0f02307a0877/hal -IC:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/mbedlibrary-stm.instrset/0f02307a0877/platform -IC:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/cmsis.instrset/CMSIS/Include -IC:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/lwip.instrset/lwip-1.4.1/src/include -IC:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/lwip.instrset/lwip-1.4.1/src/include/ipv4

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DMW_AUDIO_OUT_BLOCK_AVAILABLE=1 -DMW_DONT_USE_SYSTICK=1 -DMW_AUDIO_OUT_PLAY_BUFFER_SIZE=48 -DMW_MIC_IN_BLOCK_AVAILABLE=1 -DMW_AUDIO_IN_REC_BUFFER_SIZE=48 -DMODEL=STM32_FIR_wrap_sym -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DON_TARGET_WAIT_FOR_START=1 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DEXT_MODE=1 -DINTEGER_CODE=0 -DMT=0 -DSTM32F7XX -DSTM32F769xx -DUSE_HAL_DRIVER -D__FPU_PRESENT=1 -D__FPU_USED=1 -DTOOLCHAIN_GCC_ARM -DTOOLCHAIN_GCC -DTARGET_STM32F769NI -DTARGET_STM32F769 -DARM_MATH_CM7 -DTARGET_CORTEX_M -D__CORTEX_M7 -DTARGET_DISCO_F769NI -DTARGET_STM -DTARGET_M7 -DTARGET_STM32F7 -D__MBED__=1 -DNULL=0 -D__START=_start -DEXIT_FAILURE=1 -DEXTMODE_DISABLEPRINTF -DEXTMODE_DISABLETESTING -DXCP_CUSTOM_PLATFORM -DEXTMODE_DISABLE_ARGS_PROCESSING=1 -DDEVICE_I2CSLAVE=1 -DDDEVICE_PORTINOUT=1 -D__MBED_CMSIS_RTOS_CM -DTOOLCHAIN_object -DDEVICE_SERIAL_ASYNCH=1 -D__CMSIS_RTOS -DMBEDTLS_ENTROPY_HARDWARE_ALT -DFEATURE_IPV4=1 -DDEVICE_CAN=1 -DTARGET_LIKE_CORTEX_M7 -DDEVICE_ANALOGOUT=1 -DTARGET_UVISOR_UNSUPPORTED -DDEVICE_SERIAL=1 -DDEVICE_INTERRUPTIN=1 -DDEVICE_I2C=1 -DDEVICE_I2C_ASYNCH=1 -DDEVICE_PORTOUT=1 -DDEVICE_STDIO_MESSAGES=1 -DDEVICE_PORTIN=1 -DTARGET_RELEASE -DTARGET_RTOS_M4_M7 -DDEVICE_SLEEP=1 -DDEVICE_SPI=1 -DDEVICE_SPISLAVE=1 -DDEVICE_ANALOGIN=1 -DDEVICE_PWMOUT=1 -DDEVICE_RTC=1 -DMBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE=9600 -DSTACK_SIZE=64 -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DRT -DMW_NUM_UDP_RECEIVE_BLKS=0 -DMW_NUM_TCP_RECEIVE_BLKS=0 -DMW_NUM_TCP_TRANSMIT_BLKS=0 -DMW_NUM_UDP_TRANSMIT_BLKS=0 -DLWIP_NETIF_HOSTNAME=1 -DMW_MAC_ADDR0=0xA8 -DMW_MAC_ADDR1=0x63 -DMW_MAC_ADDR2=0xF2 -DMW_MAC_ADDR3=0x80 -DMW_MAC_ADDR4=0x90 -DMW_MAC_ADDR5=0x80 -DMW_BASE_ST_ON_AUDIO_OUT=1
DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DEXT_MODE=1 -DINTEGER_CODE=0 -DMT=0
DEFINES_IMPLIED = -DTID01EQ=0
DEFINES_OPTS = -DON_TARGET_WAIT_FOR_START=1
DEFINES_SKIPFORSIL = -DSTM32F7XX -DSTM32F769xx -DUSE_HAL_DRIVER -D__FPU_PRESENT=1 -D__FPU_USED=1 -DTOOLCHAIN_GCC_ARM -DTOOLCHAIN_GCC -DTARGET_STM32F769NI -DTARGET_STM32F769 -DARM_MATH_CM7 -DTARGET_CORTEX_M -D__CORTEX_M7 -DTARGET_DISCO_F769NI -DTARGET_STM -DTARGET_M7 -DTARGET_STM32F7 -D__MBED__=1 -DNULL=0 -D__START=_start -DEXIT_FAILURE=1 -DEXTMODE_DISABLEPRINTF -DEXTMODE_DISABLETESTING -DXCP_CUSTOM_PLATFORM -DEXTMODE_DISABLE_ARGS_PROCESSING=1 -DDEVICE_I2CSLAVE=1 -DDDEVICE_PORTINOUT=1 -D__MBED_CMSIS_RTOS_CM -DTOOLCHAIN_object -DDEVICE_SERIAL_ASYNCH=1 -D__CMSIS_RTOS -DMBEDTLS_ENTROPY_HARDWARE_ALT -DFEATURE_IPV4=1 -DDEVICE_CAN=1 -DTARGET_LIKE_CORTEX_M7 -DDEVICE_ANALOGOUT=1 -DTARGET_UVISOR_UNSUPPORTED -DDEVICE_SERIAL=1 -DDEVICE_INTERRUPTIN=1 -DDEVICE_I2C=1 -DDEVICE_I2C_ASYNCH=1 -DDEVICE_PORTOUT=1 -DDEVICE_STDIO_MESSAGES=1 -DDEVICE_PORTIN=1 -DTARGET_RELEASE -DTARGET_RTOS_M4_M7 -DDEVICE_SLEEP=1 -DDEVICE_SPI=1 -DDEVICE_SPISLAVE=1 -DDEVICE_ANALOGIN=1 -DDEVICE_PWMOUT=1 -DDEVICE_RTC=1 -DMBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE=9600 -DSTACK_SIZE=64 -DRT
DEFINES_STANDARD = -DMODEL=STM32_FIR_wrap_sym -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_IMPLIED) $(DEFINES_OPTS) $(DEFINES_SKIPFORSIL) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/stm32f769idiscovery/src/stm32f7_audio_wrapper.c C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/stm32f769idiscovery/src/stm32f769i_discovery.c C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/stm32f769idiscovery/src/stm32f769i_discovery_audio.c C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/stm32f769idiscovery/src/wm8994.c C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/mbed/src/MW_digitalIO.cpp $(START_DIR)/STM32_FIR_wrap_sym_ert_rtw/STM32_FIR_wrap_sym.c $(START_DIR)/STM32_FIR_wrap_sym_ert_rtw/STM32_FIR_wrap_sym_data.c $(START_DIR)/STM32_FIR_wrap_sym_ert_rtw/rtGetInf.c $(START_DIR)/STM32_FIR_wrap_sym_ert_rtw/rtGetNaN.c $(START_DIR)/STM32_FIR_wrap_sym_ert_rtw/rt_nonfinite.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_svr.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/updown.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_work.c $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/rtiostream_utils.c C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/stm32f769idiscovery/src/stm32f769i_init_board.c C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/stm32f769idiscovery/src/mw_mbed_interface.cpp C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/mbed/src/BufferedSerial.cpp C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/armcortexmbase/scheduler/src/SysTickScheduler.c C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/armcortexmbase/scheduler/src/m3m4m4f_multitasking.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/serial/ext_serial_pkt.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/serial/rtiostream_serial_interface.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/serial/ext_svr_serial_transport.c C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/mbed/src/rtiostream_serial_mbed.cpp

MAIN_SRC = $(START_DIR)/STM32_FIR_wrap_sym_ert_rtw/ert_main.c

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = stm32f7_audio_wrapper.o stm32f769i_discovery.o stm32f769i_discovery_audio.o wm8994.o MW_digitalIO.o STM32_FIR_wrap_sym.o STM32_FIR_wrap_sym_data.o rtGetInf.o rtGetNaN.o rt_nonfinite.o ext_svr.o updown.o ext_work.o rtiostream_utils.o stm32f769i_init_board.o mw_mbed_interface.o BufferedSerial.o SysTickScheduler.o m3m4m4f_multitasking.o ext_serial_pkt.o rtiostream_serial_interface.o ext_svr_serial_transport.o rtiostream_serial_mbed.o

MAIN_OBJ = ert_main.o

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = C:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/mbedlibrary-stm.instrset/0f02307a0877/TARGET_DISCO_F769NI/TOOLCHAIN_GCC_ARM/libmbed.a C:/ProgramData/MATLAB/SupportPackages/R2018a/3P.instrset/cmsis.instrset/CMSIS/Lib/GCC/libarm_cortexM7l_math.a

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_SKIPFORSIL = -mcpu=cortex-m7 -mthumb -mlittle-endian -mthumb-interwork -mfloat-abi=softfp -mfpu=fpv5-d16 -DTARGET_STM32F769NI -D__MBED__=1 -DDEVICE_I2CSLAVE=1 -D__FPU_PRESENT=1 -DDEVICE_PORTINOUT=1 -D__MBED_CMSIS_RTOS_CM -DTARGET_DISCO_F769NI -DTARGET_STM32F7 -DTOOLCHAIN_object -DDEVICE_SERIAL_ASYNCH=1 -D__CMSIS_RTOS -DMBEDTLS_ENTROPY_HARDWARE_ALT -DFEATURE_IPV4=1 -DTOOLCHAIN_GCC -DDEVICE_CAN=1 -DARM_MATH_CM7 -DTARGET_CORTEX_M -DTARGET_LIKE_CORTEX_M7 -DDEVICE_ANALOGOUT=1 -DTARGET_UVISOR_UNSUPPORTED -DTARGET_M7 -DDEVICE_SERIAL=1 -DDEVICE_INTERRUPTIN=1 -DDEVICE_I2C=1 -DDEVICE_PORTOUT=1 -DDEVICE_STDIO_MESSAGES=1 -D__CORTEX_M7 -DTARGET_STM32F769 -DTARGET_LIKE_MBED -DDEVICE_PORTIN=1 -DTARGET_RELEASE -DTARGET_STM -DTARGET_RTOS_M4_M7 -DDEVICE_SLEEP=1 -DTOOLCHAIN_GCC_ARM -DDEVICE_SPI=1 -DDEVICE_SPISLAVE=1 -DDEVICE_ANALOGIN=1 -DDEVICE_PWMOUT=1 -DDEVICE_RTC=1
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_SKIPFORSIL) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_SKIPFORSIL = -mcpu=cortex-m7 -mthumb -mlittle-endian -mthumb-interwork -mfloat-abi=softfp -mfpu=fpv5-d16 -DTARGET_STM32F769NI -D__MBED__=1 -DDEVICE_I2CSLAVE=1 -D__FPU_PRESENT=1 -DDEVICE_PORTINOUT=1 -D__MBED_CMSIS_RTOS_CM -DTARGET_DISCO_F769NI -DTARGET_STM32F7 -DTOOLCHAIN_object -DDEVICE_SERIAL_ASYNCH=1 -D__CMSIS_RTOS -DMBEDTLS_ENTROPY_HARDWARE_ALT -DFEATURE_IPV4=1 -DTOOLCHAIN_GCC -DDEVICE_CAN=1 -DARM_MATH_CM7 -DTARGET_CORTEX_M -DTARGET_LIKE_CORTEX_M7 -DDEVICE_ANALOGOUT=1 -DTARGET_UVISOR_UNSUPPORTED -DTARGET_M7 -DDEVICE_SERIAL=1 -DDEVICE_INTERRUPTIN=1 -DDEVICE_I2C=1 -DDEVICE_PORTOUT=1 -DDEVICE_STDIO_MESSAGES=1 -D__CORTEX_M7 -DTARGET_STM32F769 -DTARGET_LIKE_MBED -DDEVICE_PORTIN=1 -DTARGET_RELEASE -DTARGET_STM -DTARGET_RTOS_M4_M7 -DDEVICE_SLEEP=1 -DTOOLCHAIN_GCC_ARM -DDEVICE_SPI=1 -DDEVICE_SPISLAVE=1 -DDEVICE_ANALOGIN=1 -DDEVICE_PWMOUT=1 -DDEVICE_RTC=1
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_SKIPFORSIL) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_SKIPFORSIL = -mcpu=cortex-m7 -mthumb -mlittle-endian -mthumb-interwork -mfloat-abi=softfp -mfpu=fpv5-d16 --entry Reset_Handler --specs=nano.specs --specs=nosys.specs "C:/PROGRA~3/MATLAB/SUPPOR~1/R2018a/3P778C~1.INS/MBEDLI~1.INS/0F0230~1/TARGET_DISCO_F769NI/TOOLCHAIN_GCC_ARM/*.o" -T"C:\ProgramData\MATLAB\SupportPackages\R2018a\toolbox\target\supportpackages\stm32f769idiscovery/src/STM32F769NI.ld"

CPP_LDFLAGS += $(CPP_LDFLAGS_SKIPFORSIL)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL = -mcpu=cortex-m7 -mthumb -mlittle-endian -mthumb-interwork -mfloat-abi=softfp -mfpu=fpv5-d16 --entry Reset_Handler --specs=nano.specs --specs=nosys.specs "C:/PROGRA~3/MATLAB/SUPPOR~1/R2018a/3P778C~1.INS/MBEDLI~1.INS/0F0230~1/TARGET_DISCO_F769NI/TOOLCHAIN_GCC_ARM/*.o" -T"C:\ProgramData\MATLAB\SupportPackages\R2018a\toolbox\target\supportpackages\stm32f769idiscovery/src/STM32F769NI.ld"

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL)

#-----------
# Linker
#-----------

LDFLAGS_SKIPFORSIL = -mcpu=cortex-m7 -mthumb -mlittle-endian -mthumb-interwork -mfloat-abi=softfp -mfpu=fpv5-d16 --entry Reset_Handler --specs=nano.specs --specs=nosys.specs "C:/PROGRA~3/MATLAB/SUPPOR~1/R2018a/3P778C~1.INS/MBEDLI~1.INS/0F0230~1/TARGET_DISCO_F769NI/TOOLCHAIN_GCC_ARM/*.o" -T"C:\ProgramData\MATLAB\SupportPackages\R2018a\toolbox\target\supportpackages\stm32f769idiscovery/src/STM32F769NI.ld"

LDFLAGS += $(LDFLAGS_SKIPFORSIL)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_SKIPFORSIL = -mcpu=cortex-m7 -mthumb -mlittle-endian -mthumb-interwork -mfloat-abi=softfp -mfpu=fpv5-d16 --entry Reset_Handler --specs=nano.specs --specs=nosys.specs "C:/PROGRA~3/MATLAB/SUPPOR~1/R2018a/3P778C~1.INS/MBEDLI~1.INS/0F0230~1/TARGET_DISCO_F769NI/TOOLCHAIN_GCC_ARM/*.o" -T"C:\ProgramData\MATLAB\SupportPackages\R2018a\toolbox\target\supportpackages\stm32f769idiscovery/src/STM32F769NI.ld"

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_SKIPFORSIL)

###########################################################################
## INLINED COMMANDS
###########################################################################


ALL_DEPS:=$(patsubst %$(OBJ_EXT),%$(DEP_EXT),$(ALL_OBJS))
all:

ifndef DISABLE_GCC_FUNCTION_DATA_SECTIONS
FDATASECTIONS_FLG := -ffunction-sections -fdata-sections
endif



-include codertarget_assembly_flags.mk
-include ../codertarget_assembly_flags.mk
-include $(ALL_DEPS)


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild postbuild download execute


all : build postbuild
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


postbuild : build
	@echo "### Invoking postbuild tool "Binary Converter" ..."
	$(OBJCOPY) $(OBJCOPYFLAGS_BIN)
	@echo "### Done invoking postbuild tool."
	@echo "### Invoking postbuild tool "Hex Converter" ..."
	$(OBJCOPY) $(OBJCOPYFLAGS_HEX)
	@echo "### Done invoking postbuild tool."
	@echo "### Invoking postbuild tool "Executable Size" ..."
	$(EXESIZE) $(EXESIZE_FLAGS)
	@echo "### Done invoking postbuild tool."


download : postbuild


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS) $(MAIN_OBJ)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(CPP_LD) $(CPP_LDFLAGS) -o $(PRODUCT) $(OBJS) $(MAIN_OBJ) $(LIBS) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : %.s
	$(AS) $(ASFLAGS) -o $@ $<


%.o : %.S
	$(AS) $(ASFLAGS) -o $@ $<


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : %.cc
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : %.C
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : %.cxx
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.S
	$(AS) $(ASFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cc
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.C
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cxx
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.o : $(START_DIR)/%.S
	$(AS) $(ASFLAGS) -o $@ $<


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/%.cc
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/%.C
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/%.cxx
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/STM32_FIR_wrap_sym_ert_rtw/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/STM32_FIR_wrap_sym_ert_rtw/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.o : $(START_DIR)/STM32_FIR_wrap_sym_ert_rtw/%.S
	$(AS) $(ASFLAGS) -o $@ $<


%.o : $(START_DIR)/STM32_FIR_wrap_sym_ert_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/STM32_FIR_wrap_sym_ert_rtw/%.cc
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/STM32_FIR_wrap_sym_ert_rtw/%.C
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/STM32_FIR_wrap_sym_ert_rtw/%.cxx
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.S
	$(AS) $(ASFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cc
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.C
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cxx
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.S
	$(AS) $(ASFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.cc
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.C
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.cxx
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.S
	$(AS) $(ASFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.cc
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.C
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.cxx
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.S
	$(AS) $(ASFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.cc
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.C
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.cxx
	$(CPP) $(CPPFLAGS) -o $@ $<


stm32f7_audio_wrapper.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/stm32f769idiscovery/src/stm32f7_audio_wrapper.c
	$(CC) $(CFLAGS) -o $@ $<


stm32f769i_discovery.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/stm32f769idiscovery/src/stm32f769i_discovery.c
	$(CC) $(CFLAGS) -o $@ $<


stm32f769i_discovery_audio.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/stm32f769idiscovery/src/stm32f769i_discovery_audio.c
	$(CC) $(CFLAGS) -o $@ $<


wm8994.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/stm32f769idiscovery/src/wm8994.c
	$(CC) $(CFLAGS) -o $@ $<


MW_digitalIO.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/mbed/src/MW_digitalIO.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


stm32f769i_init_board.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/stm32f769idiscovery/src/stm32f769i_init_board.c
	$(CC) $(CFLAGS) -o $@ $<


mw_mbed_interface.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/stm32f769idiscovery/src/mw_mbed_interface.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


BufferedSerial.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/mbed/src/BufferedSerial.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


SysTickScheduler.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/armcortexmbase/scheduler/src/SysTickScheduler.c
	$(CC) $(CFLAGS) -o $@ $<


m3m4m4f_multitasking.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/armcortexmbase/scheduler/src/m3m4m4f_multitasking.c
	$(CC) $(CFLAGS) -o $@ $<


ext_serial_pkt.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/serial/ext_serial_pkt.c
	$(CC) $(CFLAGS) -o $@ $<


rtiostream_serial_interface.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/serial/rtiostream_serial_interface.c
	$(CC) $(CFLAGS) -o $@ $<


ext_svr_serial_transport.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/serial/ext_svr_serial_transport.c
	$(CC) $(CFLAGS) -o $@ $<


rtiostream_serial_mbed.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/mbed/src/rtiostream_serial_mbed.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : $(MAKEFILE) rtw_proj.tmw


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### ASFLAGS = $(ASFLAGS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### OBJCOPYFLAGS_BIN = $(OBJCOPYFLAGS_BIN)"
	@echo "### OBJCOPYFLAGS_HEX = $(OBJCOPYFLAGS_HEX)"
	@echo "### EXESIZE_FLAGS = $(EXESIZE_FLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(RM) *.dep
	$(ECHO) "### Deleted all derived files."


