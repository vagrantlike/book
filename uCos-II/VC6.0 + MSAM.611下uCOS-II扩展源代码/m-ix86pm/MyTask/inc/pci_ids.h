#ifndef PCI_IDS_H
#define PCI_IDS_H
/*
 *	PCI Class, Vendor and Device IDs
 *
 *	Please keep sorted.
 */

/* Device classes and subclasses */

#define PCI_CLASS_NOT_DEFINED		0x0000
#define PCI_CLASS_NOT_DEFINED_VGA	0x0001

#define PCI_BASE_CLASS_STORAGE		0x01
#define PCI_CLASS_STORAGE_SCSI		0x0100
#define PCI_CLASS_STORAGE_IDE		0x0101
#define PCI_CLASS_STORAGE_FLOPPY	0x0102
#define PCI_CLASS_STORAGE_IPI		0x0103
#define PCI_CLASS_STORAGE_RAID		0x0104
#define PCI_CLASS_STORAGE_OTHER		0x0180

#define PCI_BASE_CLASS_NETWORK		0x02
#define PCI_CLASS_NETWORK_ETHERNET	0x0200
#define PCI_CLASS_NETWORK_TOKEN_RING	0x0201
#define PCI_CLASS_NETWORK_FDDI		0x0202
#define PCI_CLASS_NETWORK_ATM		0x0203
#define PCI_CLASS_NETWORK_OTHER		0x0280

#define PCI_BASE_CLASS_DISPLAY		0x03
#define PCI_CLASS_DISPLAY_VGA		0x0300
#define PCI_CLASS_DISPLAY_XGA		0x0301
#define PCI_CLASS_DISPLAY_3D		0x0302
#define PCI_CLASS_DISPLAY_OTHER		0x0380

#define PCI_BASE_CLASS_MULTIMEDIA	0x04
#define PCI_CLASS_MULTIMEDIA_VIDEO	0x0400
#define PCI_CLASS_MULTIMEDIA_AUDIO	0x0401
#define PCI_CLASS_MULTIMEDIA_PHONE	0x0402
#define PCI_CLASS_MULTIMEDIA_OTHER	0x0480

#define PCI_BASE_CLASS_MEMORY		0x05
#define PCI_CLASS_MEMORY_RAM		0x0500
#define PCI_CLASS_MEMORY_FLASH		0x0501
#define PCI_CLASS_MEMORY_OTHER		0x0580

#define PCI_BASE_CLASS_BRIDGE		0x06
#define PCI_CLASS_BRIDGE_HOST		0x0600
#define PCI_CLASS_BRIDGE_ISA		0x0601
#define PCI_CLASS_BRIDGE_EISA		0x0602
#define PCI_CLASS_BRIDGE_MC		0x0603
#define PCI_CLASS_BRIDGE_PCI		0x0604
#define PCI_CLASS_BRIDGE_PCMCIA		0x0605
#define PCI_CLASS_BRIDGE_NUBUS		0x0606
#define PCI_CLASS_BRIDGE_CARDBUS	0x0607
#define PCI_CLASS_BRIDGE_RACEWAY	0x0608
#define PCI_CLASS_BRIDGE_OTHER		0x0680

#define PCI_BASE_CLASS_COMMUNICATION	0x07
#define PCI_CLASS_COMMUNICATION_SERIAL	0x0700
#define PCI_CLASS_COMMUNICATION_PARALLEL 0x0701
#define PCI_CLASS_COMMUNICATION_MULTISERIAL 0x0702
#define PCI_CLASS_COMMUNICATION_MODEM	0x0703
#define PCI_CLASS_COMMUNICATION_OTHER	0x0780

#define PCI_BASE_CLASS_SYSTEM		0x08
#define PCI_CLASS_SYSTEM_PIC		0x0800
#define PCI_CLASS_SYSTEM_DMA		0x0801
#define PCI_CLASS_SYSTEM_TIMER		0x0802
#define PCI_CLASS_SYSTEM_RTC		0x0803
#define PCI_CLASS_SYSTEM_PCI_HOTPLUG	0x0804
#define PCI_CLASS_SYSTEM_OTHER		0x0880

#define PCI_BASE_CLASS_INPUT		0x09
#define PCI_CLASS_INPUT_KEYBOARD	0x0900
#define PCI_CLASS_INPUT_PEN		0x0901
#define PCI_CLASS_INPUT_MOUSE		0x0902
#define PCI_CLASS_INPUT_SCANNER		0x0903
#define PCI_CLASS_INPUT_GAMEPORT	0x0904
#define PCI_CLASS_INPUT_OTHER		0x0980

#define PCI_BASE_CLASS_DOCKING		0x0a
#define PCI_CLASS_DOCKING_GENERIC	0x0a00
#define PCI_CLASS_DOCKING_OTHER		0x0a80

#define PCI_BASE_CLASS_PROCESSOR	0x0b
#define PCI_CLASS_PROCESSOR_386		0x0b00
#define PCI_CLASS_PROCESSOR_486		0x0b01
#define PCI_CLASS_PROCESSOR_PENTIUM	0x0b02
#define PCI_CLASS_PROCESSOR_ALPHA	0x0b10
#define PCI_CLASS_PROCESSOR_POWERPC	0x0b20
#define PCI_CLASS_PROCESSOR_MIPS	0x0b30
#define PCI_CLASS_PROCESSOR_CO		0x0b40

#define PCI_BASE_CLASS_SERIAL		0x0c
#define PCI_CLASS_SERIAL_FIREWIRE	0x0c00
#define PCI_CLASS_SERIAL_ACCESS		0x0c01
#define PCI_CLASS_SERIAL_SSA		0x0c02
#define PCI_CLASS_SERIAL_USB		0x0c03
#define PCI_CLASS_SERIAL_FIBER		0x0c04
#define PCI_CLASS_SERIAL_SMBUS		0x0c05

#define PCI_BASE_CLASS_INTELLIGENT	0x0e
#define PCI_CLASS_INTELLIGENT_I2O	0x0e00

#define PCI_BASE_CLASS_SATELLITE	0x0f
#define PCI_CLASS_SATELLITE_TV		0x0f00
#define PCI_CLASS_SATELLITE_AUDIO	0x0f01
#define PCI_CLASS_SATELLITE_VOICE	0x0f03
#define PCI_CLASS_SATELLITE_DATA	0x0f04

#define PCI_BASE_CLASS_CRYPT		0x10
#define PCI_CLASS_CRYPT_NETWORK		0x1000
#define PCI_CLASS_CRYPT_ENTERTAINMENT	0x1001
#define PCI_CLASS_CRYPT_OTHER		0x1080

#define PCI_BASE_CLASS_SIGNAL_PROCESSING 0x11
#define PCI_CLASS_SP_DPIO		0x1100
#define PCI_CLASS_SP_OTHER		0x1180

#define PCI_CLASS_OTHERS		0xff

/* Include the ID list */




#define PCI_VENDOR_ID_ADMTEK            0x1317
#define PCI_DEVICE_ID_ADMTEK_0985       0x0985
#define PCI_VENDOR_ID_REALTEK           0x10ec
#define PCI_DEVICE_ID_REALTEK_8029      0x8029
#define PCI_DEVICE_ID_REALTEK_8139      0x8139
#define PCI_VENDOR_ID_WINBOND2          0x1050
#define PCI_DEVICE_ID_WINBOND2_89C940   0x0940
#define PCI_DEVICE_ID_WINBOND2_89C840   0x0840
#define PCI_VENDOR_ID_COMPEX            0x11f6
#define PCI_DEVICE_ID_COMPEX_RL2000     0x1401
#define PCI_DEVICE_ID_COMPEX_RL100ATX   0x2011
#define PCI_VENDOR_ID_KTI               0x8e2e
#define PCI_DEVICE_ID_KTI_ET32P2        0x3000
#define PCI_VENDOR_ID_NETVIN            0x4a14
#define PCI_DEVICE_ID_NETVIN_NV5000SC   0x5000
#define PCI_VENDOR_ID_3COM		0x10b7
#define PCI_DEVICE_ID_3COM_3C590	0x5900
#define PCI_DEVICE_ID_3COM_3C595	0x5950
#define PCI_DEVICE_ID_3COM_3C595_1	0x5951
#define PCI_DEVICE_ID_3COM_3C595_2	0x5952
#define PCI_DEVICE_ID_3COM_3C900TPO	0x9000
#define PCI_DEVICE_ID_3COM_3C900COMBO	0x9001
#define PCI_DEVICE_ID_3COM_3C905TX	0x9050
#define PCI_DEVICE_ID_3COM_3C905T4	0x9051
#define PCI_DEVICE_ID_3COM_3C905B_TX	0x9055
#define PCI_DEVICE_ID_3COM_3C905C_TXM	0x9200
#define PCI_VENDOR_ID_INTEL		0x8086
#define PCI_DEVICE_ID_INTEL_82557	0x1229
#define PCI_DEVICE_ID_INTEL_82559ER	0x1209
#define PCI_DEVICE_ID_INTEL_ID1029	0x1029
#define PCI_DEVICE_ID_INTEL_ID1030	0x1030
#define PCI_DEVICE_ID_INTEL_82562	0x2449
#define PCI_VENDOR_ID_AMD		0x1022
#define PCI_DEVICE_ID_AMD_LANCE		0x2000
#define PCI_VENDOR_ID_AMD_HOMEPNA	0x1022
#define PCI_DEVICE_ID_AMD_HOMEPNA	0x2001
#define PCI_VENDOR_ID_SMC_1211          0x1113
#define PCI_DEVICE_ID_SMC_1211          0x1211
#define PCI_VENDOR_ID_DEC		0x1011
#define PCI_DEVICE_ID_DEC_TULIP		0x0002
#define PCI_DEVICE_ID_DEC_TULIP_FAST	0x0009
#define PCI_DEVICE_ID_DEC_TULIP_PLUS	0x0014
#define PCI_DEVICE_ID_DEC_21142		0x0019
#define PCI_VENDOR_ID_MACRONIX		0x10d9
#define PCI_DEVICE_ID_MX987x5		0x0531
#define PCI_VENDOR_ID_LINKSYS		0x11AD
#define PCI_DEVICE_ID_LC82C115		0xC115
#define PCI_VENDOR_ID_VIATEC		0x1106
#define PCI_DEVICE_ID_VIA_RHINE_I	0x3043
#define PCI_DEVICE_ID_VIA_VT6102	0x3065
#define PCI_DEVICE_ID_VIA_86C100A	0x6100
#define PCI_VENDOR_ID_DAVICOM		0x1282
#define	PCI_DEVICE_ID_DM9009		0x9009
#define PCI_DEVICE_ID_DM9102		0x9102
#define PCI_VENDOR_ID_SIS         	0x1039
#define PCI_DEVICE_ID_SIS900     	0x0900   
#define PCI_DEVICE_ID_SIS7016    	0x7016  
#define	PCI_VENDOR_ID_DLINK		0x1186
#define	PCI_DEVICE_ID_DFE530TXP		0x1300
#define	PCI_DEVICE_ID_DP83815		0x0020

#endif



