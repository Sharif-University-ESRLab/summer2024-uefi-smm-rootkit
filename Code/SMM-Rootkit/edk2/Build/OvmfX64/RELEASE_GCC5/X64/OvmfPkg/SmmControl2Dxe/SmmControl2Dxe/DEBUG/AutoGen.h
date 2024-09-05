/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_1206F7CA_A475_4624_A83E_E6FC9BB38E49
#define _AUTOGENH_1206F7CA_A475_4624_A83E_E6FC9BB38E49

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x1206F7CA, 0xA475, 0x4624, {0xA8, 0x3E, 0xE6, 0xFC, 0x9B, 0xB3, 0x8E, 0x49}}

// Guids
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiS3SaveStateProtocolGuid;
extern EFI_GUID gEfiSmmControl2ProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEdkiiIoMmuProtocolGuid;
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

#define _PCD_TOKEN_PcdCpuSmmApSyncTimeout  27U
#define _PCD_GET_MODE_64_PcdCpuSmmApSyncTimeout  LibPcdGet64(_PCD_TOKEN_PcdCpuSmmApSyncTimeout)
#define _PCD_GET_MODE_SIZE_PcdCpuSmmApSyncTimeout  LibPcdGetSize(_PCD_TOKEN_PcdCpuSmmApSyncTimeout)
#define _PCD_SET_MODE_64_PcdCpuSmmApSyncTimeout(Value)  LibPcdSet64(_PCD_TOKEN_PcdCpuSmmApSyncTimeout, (Value))
#define _PCD_SET_MODE_64_S_PcdCpuSmmApSyncTimeout(Value)  LibPcdSet64S(_PCD_TOKEN_PcdCpuSmmApSyncTimeout, (Value))

#define _PCD_TOKEN_PcdCpuSmmSyncMode  37U
#define _PCD_GET_MODE_8_PcdCpuSmmSyncMode  LibPcdGet8(_PCD_TOKEN_PcdCpuSmmSyncMode)
#define _PCD_GET_MODE_SIZE_PcdCpuSmmSyncMode  LibPcdGetSize(_PCD_TOKEN_PcdCpuSmmSyncMode)
#define _PCD_SET_MODE_8_PcdCpuSmmSyncMode(Value)  LibPcdSet8(_PCD_TOKEN_PcdCpuSmmSyncMode, (Value))
#define _PCD_SET_MODE_8_S_PcdCpuSmmSyncMode(Value)  LibPcdSet8S(_PCD_TOKEN_PcdCpuSmmSyncMode, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SmmControl2DxeEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
