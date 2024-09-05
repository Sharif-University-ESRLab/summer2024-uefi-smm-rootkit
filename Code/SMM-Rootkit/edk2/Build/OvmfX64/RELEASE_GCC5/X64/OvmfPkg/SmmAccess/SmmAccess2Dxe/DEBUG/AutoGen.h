/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_AC95AD3D_4366_44BF_9A62_E4B29D7A2206
#define _AUTOGENH_AC95AD3D_4366_44BF_9A62_E4B29D7A2206

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xAC95AD3D, 0x4366, 0x44BF, {0x9A, 0x62, 0xE4, 0xB2, 0x9D, 0x7A, 0x22, 0x06}}

// Guids
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

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

#define _PCD_TOKEN_PcdQ35TsegMbytes  12U
#define _PCD_GET_MODE_16_PcdQ35TsegMbytes  LibPcdGet16(_PCD_TOKEN_PcdQ35TsegMbytes)
#define _PCD_GET_MODE_SIZE_PcdQ35TsegMbytes  LibPcdGetSize(_PCD_TOKEN_PcdQ35TsegMbytes)
#define _PCD_SET_MODE_16_PcdQ35TsegMbytes(Value)  LibPcdSet16(_PCD_TOKEN_PcdQ35TsegMbytes, (Value))
#define _PCD_SET_MODE_16_S_PcdQ35TsegMbytes(Value)  LibPcdSet16S(_PCD_TOKEN_PcdQ35TsegMbytes, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SmmAccess2DxeEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
