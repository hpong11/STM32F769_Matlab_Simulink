#ifndef PORTABLE_WORDSIZES
#ifdef __MW_TARGET_USE_HARDWARE_RESOURCES_H__
#ifndef __MW_TARGET_HARDWARE_RESOURCES_H__
#define __MW_TARGET_HARDWARE_RESOURCES_H__

#define MW_MULTI_TASKING_MODE 1
#include "stm32f7xx.h"
#include "stm32f7xx_hal.h"
#include "stm32f769i_init_board.h"
#include "MW_MbedPinInterface.h"
#include "SysTickScheduler.h"
#include "arm_cortex_m_multitasking.h"

#define MW_USECODERTARGET 1
#define MW_TARGETHARDWARE STM32F769I-Discovery
#define MW_CONNECTIONINFO_SERIAL_BAUDRATE 115200
#define MW_CONNECTIONINFO_SERIAL_COMPORT COM1
#define MW_CONNECTIONINFO_SERIAL_VERBOSE 1
#define MW_CONNECTIONINFO_TCPIP_IPADDRESS codertarget.stm32f746gdiscovery.internal.EthernetConfigIPAddressExternalMode
#define MW_CONNECTIONINFO_TCPIP_PORT 17725
#define MW_CONNECTIONINFO_TCPIP_VERBOSE 1
#define MW_EXTMODE_CONFIGURATION serial
#define MW_RTOS Baremetal
#define MW_SCHEDULER_INTERRUPT_SOURCE 0
#define MW_RUNTIME_BUILDACTION 1
#define MW_HOSTDRIVE_SET_HOST_DRIVE 0
#define MW_HOSTDRIVE_DRIVE F:
#define MW_CLOCKING_CPUCLOCKRATEMHZ 216
#define MW_ETHERNET_DHCPENABLED 1
#define MW_ETHERNET_HOSTNAME DIS_F769NI
#define MW_ETHERNET_LOCALIPADDRESS 192.168.1.10
#define MW_ETHERNET_SUBNETMASK 255.255.255.0
#define MW_ETHERNET_GATEWAY 192.168.1.1
#define MW_ETHERNET_MACADDR A8-63-F2-80-90-80
#define MW_I2C0_BUSSPEEDHZ 100000
#define MW_I2C0_SCL D15
#define MW_I2C0_SDA D14
#define MW_SPI0_BUSSPEEDHZ 1000000
#define MW_SPI0_MOSIPIN 11
#define MW_SPI0_MISOPIN 12
#define MW_SPI0_SCKPIN 13
#define MW_SCI0_BAUDRATE 115200
#define MW_SCI0_RXPIN USBRX
#define MW_SCI0_TXPIN USBTX
#define MW_SCI0_DATABITS 8
#define MW_SCI0_PARITY 0.000000
#define MW_SCI0_STOPBITS 1.000000
#define MW_PIL_INTERFACE 1
#define MW_PIL_COMPORT COM3
#define MW_PIL_BAUDRATE 115200.000000
#define MW_PIL_ETHERNETPORT 17725.000000
#define MW_DATAVERSION 2016.02

#endif /* __MW_TARGET_HARDWARE_RESOURCES_H__ */

#endif

#endif
