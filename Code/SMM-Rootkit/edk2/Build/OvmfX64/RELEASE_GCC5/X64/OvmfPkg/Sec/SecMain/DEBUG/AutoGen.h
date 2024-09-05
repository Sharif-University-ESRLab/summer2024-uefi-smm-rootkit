/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_df1ccef6_f301_4a63_9661_fc6030dcc880
#define _AUTOGENH_df1ccef6_f301_4a63_9661_fc6030dcc880

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xdf1ccef6, 0xf301, 0x4a63, {0x96, 0x61, 0xfc, 0x60, 0x30, 0xdc, 0xc8, 0x80}}

// Guids
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gLzmaCustomDecompressGuid;

// PPIs
extern EFI_GUID gEfiTemporaryRamSupportPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

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

#define _PCD_TOKEN_PcdOvmfSecPageTablesBase  40U
#define _PCD_SIZE_PcdOvmfSecPageTablesBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPageTablesBase  _PCD_SIZE_PcdOvmfSecPageTablesBase 
#define _PCD_VALUE_PcdOvmfSecPageTablesBase  0x00800000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase;
#define _PCD_GET_MODE_32_PcdOvmfSecPageTablesBase  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase
//#define _PCD_SET_MODE_32_PcdOvmfSecPageTablesBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdGuidedExtractHandlerTableAddress  49U
#define _PCD_SIZE_PcdGuidedExtractHandlerTableAddress 8
#define _PCD_GET_MODE_SIZE_PcdGuidedExtractHandlerTableAddress  _PCD_SIZE_PcdGuidedExtractHandlerTableAddress 
#define _PCD_VALUE_PcdGuidedExtractHandlerTableAddress  0x00807000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress;
#define _PCD_GET_MODE_64_PcdGuidedExtractHandlerTableAddress  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress
//#define _PCD_SET_MODE_64_PcdGuidedExtractHandlerTableAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGuidedExtractHandlerTableSize  50U
#define _PCD_SIZE_PcdGuidedExtractHandlerTableSize 4
#define _PCD_GET_MODE_SIZE_PcdGuidedExtractHandlerTableSize  _PCD_SIZE_PcdGuidedExtractHandlerTableSize 
#define _PCD_VALUE_PcdGuidedExtractHandlerTableSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableSize;
#define _PCD_GET_MODE_32_PcdGuidedExtractHandlerTableSize  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableSize
//#define _PCD_SET_MODE_32_PcdGuidedExtractHandlerTableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfDecompressionScratchEnd  51U
#define _PCD_SIZE_PcdOvmfDecompressionScratchEnd 4
#define _PCD_GET_MODE_SIZE_PcdOvmfDecompressionScratchEnd  _PCD_SIZE_PcdOvmfDecompressionScratchEnd 
#define _PCD_VALUE_PcdOvmfDecompressionScratchEnd  22085632U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfDecompressionScratchEnd;
#define _PCD_GET_MODE_32_PcdOvmfDecompressionScratchEnd  _gPcd_FixedAtBuild_PcdOvmfDecompressionScratchEnd
//#define _PCD_SET_MODE_32_PcdOvmfDecompressionScratchEnd  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdInitValueInTempStack  52U
#define _PCD_SIZE_PcdInitValueInTempStack 4
#define _PCD_GET_MODE_SIZE_PcdInitValueInTempStack  _PCD_SIZE_PcdInitValueInTempStack 
#define _PCD_VALUE_PcdInitValueInTempStack  0x5AA55AA5U
extern const  UINT32  _gPcd_FixedAtBuild_PcdInitValueInTempStack;
#define _PCD_GET_MODE_32_PcdInitValueInTempStack  _gPcd_FixedAtBuild_PcdInitValueInTempStack
//#define _PCD_SET_MODE_32_PcdInitValueInTempStack  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


#ifdef __cplusplus
}
#endif

#endif
