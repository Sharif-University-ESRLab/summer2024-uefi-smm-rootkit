/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_222c386d_5abc_4fb4_b124_fbb82488acf4
#define _AUTOGENH_222c386d_5abc_4fb4_b124_fbb82488acf4

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x222c386d, 0x5abc, 0x4fb4, {0xb1, 0x24, 0xfb, 0xb8, 0x24, 0x88, 0xac, 0xf4}}

// Guids
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gEfiXenInfoGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiSecurityPkgTokenSpaceGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;

// PPIs
extern EFI_GUID gEfiPeiMasterBootModePpiGuid;
extern EFI_GUID gEfiPeiMpServicesPpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPciExpressBaseAddress  91U
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress  _PCD_SIZE_PcdPciExpressBaseAddress 
#define _PCD_VALUE_PcdPciExpressBaseAddress  0x80000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSmmSmramRequire  42U
#define _PCD_SIZE_PcdSmmSmramRequire 1
#define _PCD_GET_MODE_SIZE_PcdSmmSmramRequire  _PCD_SIZE_PcdSmmSmramRequire 
#define _PCD_VALUE_PcdSmmSmramRequire  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSmmSmramRequire;
#define _PCD_GET_MODE_BOOL_PcdSmmSmramRequire  _gPcd_FixedAtBuild_PcdSmmSmramRequire
//#define _PCD_SET_MODE_BOOL_PcdSmmSmramRequire  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfPeiMemFvBase  43U
#define _PCD_SIZE_PcdOvmfPeiMemFvBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfPeiMemFvBase  _PCD_SIZE_PcdOvmfPeiMemFvBase 
#define _PCD_VALUE_PcdOvmfPeiMemFvBase  0x00820000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfPeiMemFvBase;
#define _PCD_GET_MODE_32_PcdOvmfPeiMemFvBase  _gPcd_FixedAtBuild_PcdOvmfPeiMemFvBase
//#define _PCD_SET_MODE_32_PcdOvmfPeiMemFvBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfPeiMemFvSize  44U
#define _PCD_SIZE_PcdOvmfPeiMemFvSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfPeiMemFvSize  _PCD_SIZE_PcdOvmfPeiMemFvSize 
#define _PCD_VALUE_PcdOvmfPeiMemFvSize  0x000E0000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfPeiMemFvSize;
#define _PCD_GET_MODE_32_PcdOvmfPeiMemFvSize  _gPcd_FixedAtBuild_PcdOvmfPeiMemFvSize
//#define _PCD_SET_MODE_32_PcdOvmfPeiMemFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfDxeMemFvBase  45U
#define _PCD_SIZE_PcdOvmfDxeMemFvBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfDxeMemFvBase  _PCD_SIZE_PcdOvmfDxeMemFvBase 
#define _PCD_VALUE_PcdOvmfDxeMemFvBase  0x00900000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfDxeMemFvBase;
#define _PCD_GET_MODE_32_PcdOvmfDxeMemFvBase  _gPcd_FixedAtBuild_PcdOvmfDxeMemFvBase
//#define _PCD_SET_MODE_32_PcdOvmfDxeMemFvBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfDxeMemFvSize  46U
#define _PCD_SIZE_PcdOvmfDxeMemFvSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfDxeMemFvSize  _PCD_SIZE_PcdOvmfDxeMemFvSize 
#define _PCD_VALUE_PcdOvmfDxeMemFvSize  0x00A00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfDxeMemFvSize;
#define _PCD_GET_MODE_32_PcdOvmfDxeMemFvSize  _gPcd_FixedAtBuild_PcdOvmfDxeMemFvSize
//#define _PCD_SET_MODE_32_PcdOvmfDxeMemFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPeiTempRamBase  47U
#define _PCD_SIZE_PcdOvmfSecPeiTempRamBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPeiTempRamBase  _PCD_SIZE_PcdOvmfSecPeiTempRamBase 
#define _PCD_VALUE_PcdOvmfSecPeiTempRamBase  0x00810000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamBase;
#define _PCD_GET_MODE_32_PcdOvmfSecPeiTempRamBase  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamBase
//#define _PCD_SET_MODE_32_PcdOvmfSecPeiTempRamBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPeiTempRamSize  48U
#define _PCD_SIZE_PcdOvmfSecPeiTempRamSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPeiTempRamSize  _PCD_SIZE_PcdOvmfSecPeiTempRamSize 
#define _PCD_VALUE_PcdOvmfSecPeiTempRamSize  0x00010000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamSize;
#define _PCD_GET_MODE_32_PcdOvmfSecPeiTempRamSize  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamSize
//#define _PCD_SET_MODE_32_PcdOvmfSecPeiTempRamSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPageTablesBase  40U
#define _PCD_SIZE_PcdOvmfSecPageTablesBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPageTablesBase  _PCD_SIZE_PcdOvmfSecPageTablesBase 
#define _PCD_VALUE_PcdOvmfSecPageTablesBase  0x00800000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase;
#define _PCD_GET_MODE_32_PcdOvmfSecPageTablesBase  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase
//#define _PCD_SET_MODE_32_PcdOvmfSecPageTablesBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPageTablesSize  41U
#define _PCD_SIZE_PcdOvmfSecPageTablesSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPageTablesSize  _PCD_SIZE_PcdOvmfSecPageTablesSize 
#define _PCD_VALUE_PcdOvmfSecPageTablesSize  0x00006000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesSize;
#define _PCD_GET_MODE_32_PcdOvmfSecPageTablesSize  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesSize
//#define _PCD_SET_MODE_32_PcdOvmfSecPageTablesSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfLockBoxStorageBase  92U
#define _PCD_SIZE_PcdOvmfLockBoxStorageBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfLockBoxStorageBase  _PCD_SIZE_PcdOvmfLockBoxStorageBase 
#define _PCD_VALUE_PcdOvmfLockBoxStorageBase  0x00806000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageBase;
#define _PCD_GET_MODE_32_PcdOvmfLockBoxStorageBase  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageBase
//#define _PCD_SET_MODE_32_PcdOvmfLockBoxStorageBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfLockBoxStorageSize  93U
#define _PCD_SIZE_PcdOvmfLockBoxStorageSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfLockBoxStorageSize  _PCD_SIZE_PcdOvmfLockBoxStorageSize 
#define _PCD_VALUE_PcdOvmfLockBoxStorageSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageSize;
#define _PCD_GET_MODE_32_PcdOvmfLockBoxStorageSize  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageSize
//#define _PCD_SET_MODE_32_PcdOvmfLockBoxStorageSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGuidedExtractHandlerTableSize  50U
#define _PCD_SIZE_PcdGuidedExtractHandlerTableSize 4
#define _PCD_GET_MODE_SIZE_PcdGuidedExtractHandlerTableSize  _PCD_SIZE_PcdGuidedExtractHandlerTableSize 
#define _PCD_VALUE_PcdGuidedExtractHandlerTableSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableSize;
#define _PCD_GET_MODE_32_PcdGuidedExtractHandlerTableSize  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableSize
//#define _PCD_SET_MODE_32_PcdGuidedExtractHandlerTableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfHostBridgePciDevId  1U
#define _PCD_GET_MODE_16_PcdOvmfHostBridgePciDevId  LibPcdGet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_GET_MODE_SIZE_PcdOvmfHostBridgePciDevId  LibPcdGetSize(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_SET_MODE_16_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))
#define _PCD_SET_MODE_16_S_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16S(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))

#define _PCD_TOKEN_PcdPciIoBase  3U
#define _PCD_GET_MODE_64_PcdPciIoBase  LibPcdGet64(_PCD_TOKEN_PcdPciIoBase)
#define _PCD_GET_MODE_SIZE_PcdPciIoBase  LibPcdGetSize(_PCD_TOKEN_PcdPciIoBase)
#define _PCD_SET_MODE_64_PcdPciIoBase(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciIoBase, (Value))
#define _PCD_SET_MODE_64_S_PcdPciIoBase(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciIoBase, (Value))

#define _PCD_TOKEN_PcdPciIoSize  13U
#define _PCD_GET_MODE_64_PcdPciIoSize  LibPcdGet64(_PCD_TOKEN_PcdPciIoSize)
#define _PCD_GET_MODE_SIZE_PcdPciIoSize  LibPcdGetSize(_PCD_TOKEN_PcdPciIoSize)
#define _PCD_SET_MODE_64_PcdPciIoSize(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciIoSize, (Value))
#define _PCD_SET_MODE_64_S_PcdPciIoSize(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciIoSize, (Value))

#define _PCD_TOKEN_PcdPciMmio32Base  14U
#define _PCD_GET_MODE_64_PcdPciMmio32Base  LibPcdGet64(_PCD_TOKEN_PcdPciMmio32Base)
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Base  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio32Base)
#define _PCD_SET_MODE_64_PcdPciMmio32Base(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio32Base, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio32Base(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio32Base, (Value))

#define _PCD_TOKEN_PcdPciMmio32Size  5U
#define _PCD_GET_MODE_64_PcdPciMmio32Size  LibPcdGet64(_PCD_TOKEN_PcdPciMmio32Size)
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Size  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio32Size)
#define _PCD_SET_MODE_64_PcdPciMmio32Size(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio32Size, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio32Size(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio32Size, (Value))

#define _PCD_TOKEN_PcdPciMmio64Base  15U
#define _PCD_GET_MODE_64_PcdPciMmio64Base  LibPcdGet64(_PCD_TOKEN_PcdPciMmio64Base)
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Base  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio64Base)
#define _PCD_SET_MODE_64_PcdPciMmio64Base(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio64Base, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio64Base(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio64Base, (Value))

#define _PCD_TOKEN_PcdPciMmio64Size  2U
#define _PCD_GET_MODE_64_PcdPciMmio64Size  LibPcdGet64(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Size  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_SET_MODE_64_PcdPciMmio64Size(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio64Size, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio64Size(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio64Size, (Value))

#define _PCD_TOKEN_PcdOvmfDecompressionScratchEnd  51U
#define _PCD_SIZE_PcdOvmfDecompressionScratchEnd 4
#define _PCD_GET_MODE_SIZE_PcdOvmfDecompressionScratchEnd  _PCD_SIZE_PcdOvmfDecompressionScratchEnd 
#define _PCD_VALUE_PcdOvmfDecompressionScratchEnd  22085632U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfDecompressionScratchEnd;
#define _PCD_GET_MODE_32_PcdOvmfDecompressionScratchEnd  _gPcd_FixedAtBuild_PcdOvmfDecompressionScratchEnd
//#define _PCD_SET_MODE_32_PcdOvmfDecompressionScratchEnd  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdQ35TsegMbytes  12U
#define _PCD_GET_MODE_16_PcdQ35TsegMbytes  LibPcdGet16(_PCD_TOKEN_PcdQ35TsegMbytes)
#define _PCD_GET_MODE_SIZE_PcdQ35TsegMbytes  LibPcdGetSize(_PCD_TOKEN_PcdQ35TsegMbytes)
#define _PCD_SET_MODE_16_PcdQ35TsegMbytes(Value)  LibPcdSet16(_PCD_TOKEN_PcdQ35TsegMbytes, (Value))
#define _PCD_SET_MODE_16_S_PcdQ35TsegMbytes(Value)  LibPcdSet16S(_PCD_TOKEN_PcdQ35TsegMbytes, (Value))

#define _PCD_TOKEN_PcdGuidedExtractHandlerTableAddress  49U
#define _PCD_SIZE_PcdGuidedExtractHandlerTableAddress 8
#define _PCD_GET_MODE_SIZE_PcdGuidedExtractHandlerTableAddress  _PCD_SIZE_PcdGuidedExtractHandlerTableAddress 
#define _PCD_VALUE_PcdGuidedExtractHandlerTableAddress  0x00807000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress;
#define _PCD_GET_MODE_64_PcdGuidedExtractHandlerTableAddress  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress
//#define _PCD_SET_MODE_64_PcdGuidedExtractHandlerTableAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  94U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize  _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x42000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  95U
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize  _PCD_SIZE_PcdFlashNvStorageVariableSize 
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x40000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuVariableNvStoreReserved  11U
#define _PCD_GET_MODE_64_PcdEmuVariableNvStoreReserved  LibPcdGet64(_PCD_TOKEN_PcdEmuVariableNvStoreReserved)
#define _PCD_GET_MODE_SIZE_PcdEmuVariableNvStoreReserved  LibPcdGetSize(_PCD_TOKEN_PcdEmuVariableNvStoreReserved)
#define _PCD_SET_MODE_64_PcdEmuVariableNvStoreReserved(Value)  LibPcdSet64(_PCD_TOKEN_PcdEmuVariableNvStoreReserved, (Value))
#define _PCD_SET_MODE_64_S_PcdEmuVariableNvStoreReserved(Value)  LibPcdSet64S(_PCD_TOKEN_PcdEmuVariableNvStoreReserved, (Value))

#define _PCD_TOKEN_PcdPciDisableBusEnumeration  17U
#define _PCD_GET_MODE_BOOL_PcdPciDisableBusEnumeration  LibPcdGetBool(_PCD_TOKEN_PcdPciDisableBusEnumeration)
#define _PCD_GET_MODE_SIZE_PcdPciDisableBusEnumeration  LibPcdGetSize(_PCD_TOKEN_PcdPciDisableBusEnumeration)
#define _PCD_SET_MODE_BOOL_PcdPciDisableBusEnumeration(Value)  LibPcdSetBool(_PCD_TOKEN_PcdPciDisableBusEnumeration, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdPciDisableBusEnumeration(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdPciDisableBusEnumeration, (Value))

#define _PCD_TOKEN_PcdDxeIplSwitchToLongMode  96U
#define _PCD_SIZE_PcdDxeIplSwitchToLongMode 1
#define _PCD_GET_MODE_SIZE_PcdDxeIplSwitchToLongMode  _PCD_SIZE_PcdDxeIplSwitchToLongMode 
#define _PCD_VALUE_PcdDxeIplSwitchToLongMode  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDxeIplSwitchToLongMode;
#define _PCD_GET_MODE_BOOL_PcdDxeIplSwitchToLongMode  _gPcd_FixedAtBuild_PcdDxeIplSwitchToLongMode
//#define _PCD_SET_MODE_BOOL_PcdDxeIplSwitchToLongMode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUse1GPageTable  87U
#define _PCD_SIZE_PcdUse1GPageTable 1
#define _PCD_GET_MODE_SIZE_PcdUse1GPageTable  _PCD_SIZE_PcdUse1GPageTable 
#define _PCD_VALUE_PcdUse1GPageTable  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUse1GPageTable;
#define _PCD_GET_MODE_BOOL_PcdUse1GPageTable  _gPcd_FixedAtBuild_PcdUse1GPageTable
//#define _PCD_SET_MODE_BOOL_PcdUse1GPageTable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSetNxForStack  8U
#define _PCD_GET_MODE_BOOL_PcdSetNxForStack  LibPcdGetBool(_PCD_TOKEN_PcdSetNxForStack)
#define _PCD_GET_MODE_SIZE_PcdSetNxForStack  LibPcdGetSize(_PCD_TOKEN_PcdSetNxForStack)
#define _PCD_SET_MODE_BOOL_PcdSetNxForStack(Value)  LibPcdSetBool(_PCD_TOKEN_PcdSetNxForStack, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdSetNxForStack(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdSetNxForStack, (Value))

#define _PCD_TOKEN_PcdPropertiesTableEnable  4U
#define _PCD_GET_MODE_BOOL_PcdPropertiesTableEnable  LibPcdGetBool(_PCD_TOKEN_PcdPropertiesTableEnable)
#define _PCD_GET_MODE_SIZE_PcdPropertiesTableEnable  LibPcdGetSize(_PCD_TOKEN_PcdPropertiesTableEnable)
#define _PCD_SET_MODE_BOOL_PcdPropertiesTableEnable(Value)  LibPcdSetBool(_PCD_TOKEN_PcdPropertiesTableEnable, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdPropertiesTableEnable(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdPropertiesTableEnable, (Value))

#define _PCD_TOKEN_PcdAcpiS3Enable  6U
#define _PCD_GET_MODE_BOOL_PcdAcpiS3Enable  LibPcdGetBool(_PCD_TOKEN_PcdAcpiS3Enable)
#define _PCD_GET_MODE_SIZE_PcdAcpiS3Enable  LibPcdGetSize(_PCD_TOKEN_PcdAcpiS3Enable)
#define _PCD_SET_MODE_BOOL_PcdAcpiS3Enable(Value)  LibPcdSetBool(_PCD_TOKEN_PcdAcpiS3Enable, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdAcpiS3Enable(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdAcpiS3Enable, (Value))

#define _PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask  10U
#define _PCD_GET_MODE_64_PcdPteMemoryEncryptionAddressOrMask  LibPcdGet64(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask)
#define _PCD_GET_MODE_SIZE_PcdPteMemoryEncryptionAddressOrMask  LibPcdGetSize(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask)
#define _PCD_SET_MODE_64_PcdPteMemoryEncryptionAddressOrMask(Value)  LibPcdSet64(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask, (Value))
#define _PCD_SET_MODE_64_S_PcdPteMemoryEncryptionAddressOrMask(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask, (Value))

#define _PCD_TOKEN_PcdOptionRomImageVerificationPolicy  7U
#define _PCD_GET_MODE_32_PcdOptionRomImageVerificationPolicy  LibPcdGet32(_PCD_TOKEN_PcdOptionRomImageVerificationPolicy)
#define _PCD_GET_MODE_SIZE_PcdOptionRomImageVerificationPolicy  LibPcdGetSize(_PCD_TOKEN_PcdOptionRomImageVerificationPolicy)
#define _PCD_SET_MODE_32_PcdOptionRomImageVerificationPolicy(Value)  LibPcdSet32(_PCD_TOKEN_PcdOptionRomImageVerificationPolicy, (Value))
#define _PCD_SET_MODE_32_S_PcdOptionRomImageVerificationPolicy(Value)  LibPcdSet32S(_PCD_TOKEN_PcdOptionRomImageVerificationPolicy, (Value))

#define _PCD_TOKEN_PcdCpuLocalApicBaseAddress  64U
#define _PCD_SIZE_PcdCpuLocalApicBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdCpuLocalApicBaseAddress  _PCD_SIZE_PcdCpuLocalApicBaseAddress 
#define _PCD_VALUE_PcdCpuLocalApicBaseAddress  0xfee00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress;
#define _PCD_GET_MODE_32_PcdCpuLocalApicBaseAddress  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress
//#define _PCD_SET_MODE_32_PcdCpuLocalApicBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber  16U
#define _PCD_GET_MODE_32_PcdCpuMaxLogicalProcessorNumber  LibPcdGet32(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber)
#define _PCD_GET_MODE_SIZE_PcdCpuMaxLogicalProcessorNumber  LibPcdGetSize(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber)
#define _PCD_SET_MODE_32_PcdCpuMaxLogicalProcessorNumber(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuMaxLogicalProcessorNumber(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber, (Value))

#define _PCD_TOKEN_PcdCpuApInitTimeOutInMicroSeconds  9U
#define _PCD_GET_MODE_32_PcdCpuApInitTimeOutInMicroSeconds  LibPcdGet32(_PCD_TOKEN_PcdCpuApInitTimeOutInMicroSeconds)
#define _PCD_GET_MODE_SIZE_PcdCpuApInitTimeOutInMicroSeconds  LibPcdGetSize(_PCD_TOKEN_PcdCpuApInitTimeOutInMicroSeconds)
#define _PCD_SET_MODE_32_PcdCpuApInitTimeOutInMicroSeconds(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuApInitTimeOutInMicroSeconds, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuApInitTimeOutInMicroSeconds(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuApInitTimeOutInMicroSeconds, (Value))

#define _PCD_TOKEN_PcdCpuApStackSize  97U
#define _PCD_SIZE_PcdCpuApStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCpuApStackSize  _PCD_SIZE_PcdCpuApStackSize 
#define _PCD_VALUE_PcdCpuApStackSize  0x8000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuApStackSize;
#define _PCD_GET_MODE_32_PcdCpuApStackSize  _gPcd_FixedAtBuild_PcdCpuApStackSize
//#define _PCD_SET_MODE_32_PcdCpuApStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializePlatform (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
