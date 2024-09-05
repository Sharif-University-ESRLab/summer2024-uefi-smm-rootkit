/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_FB65006C_AC9F_4992_AD80_184B2BDBBD83
#define _AUTOGENH_FB65006C_AC9F_4992_AD80_184B2BDBBD83

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiXenInfoGuid;
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
extern EFI_GUID gRootBridgesConnectedEventGroupGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiIntelFrameworkModulePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiDecompressProtocolGuid;
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiS3SaveStateProtocolGuid;
extern EFI_GUID gEfiDxeSmmReadyToLockProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdEmuVariableEvent  32U
#define _PCD_GET_MODE_64_PcdEmuVariableEvent  LibPcdGet64(_PCD_TOKEN_PcdEmuVariableEvent)
#define _PCD_GET_MODE_SIZE_PcdEmuVariableEvent  LibPcdGetSize(_PCD_TOKEN_PcdEmuVariableEvent)
#define _PCD_SET_MODE_64_PcdEmuVariableEvent(Value)  LibPcdSet64(_PCD_TOKEN_PcdEmuVariableEvent, (Value))
#define _PCD_SET_MODE_64_S_PcdEmuVariableEvent(Value)  LibPcdSet64S(_PCD_TOKEN_PcdEmuVariableEvent, (Value))
#define _PCD_TOKEN_PcdOvmfFlashVariablesEnable  29U
#define _PCD_GET_MODE_BOOL_PcdOvmfFlashVariablesEnable  LibPcdGetBool(_PCD_TOKEN_PcdOvmfFlashVariablesEnable)
#define _PCD_GET_MODE_SIZE_PcdOvmfFlashVariablesEnable  LibPcdGetSize(_PCD_TOKEN_PcdOvmfFlashVariablesEnable)
#define _PCD_SET_MODE_BOOL_PcdOvmfFlashVariablesEnable(Value)  LibPcdSetBool(_PCD_TOKEN_PcdOvmfFlashVariablesEnable, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdOvmfFlashVariablesEnable(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdOvmfFlashVariablesEnable, (Value))
#define _PCD_TOKEN_PcdOvmfHostBridgePciDevId  1U
#define _PCD_GET_MODE_16_PcdOvmfHostBridgePciDevId  LibPcdGet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_GET_MODE_SIZE_PcdOvmfHostBridgePciDevId  LibPcdGetSize(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_SET_MODE_16_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))
#define _PCD_SET_MODE_16_S_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16S(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))
#define _PCD_TOKEN_PcdPlatformBootTimeOut  24U
#define _PCD_GET_MODE_16_PcdPlatformBootTimeOut  LibPcdGet16(_PCD_TOKEN_PcdPlatformBootTimeOut)
#define _PCD_GET_MODE_SIZE_PcdPlatformBootTimeOut  LibPcdGetSize(_PCD_TOKEN_PcdPlatformBootTimeOut)
#define _PCD_SET_MODE_16_PcdPlatformBootTimeOut(Value)  LibPcdSet16(_PCD_TOKEN_PcdPlatformBootTimeOut, (Value))
#define _PCD_SET_MODE_16_S_PcdPlatformBootTimeOut(Value)  LibPcdSet16S(_PCD_TOKEN_PcdPlatformBootTimeOut, (Value))
#define _PCD_TOKEN_PcdShellFile  158U
extern const UINT8 _gPcd_FixedAtBuild_PcdShellFile[];
#define _PCD_GET_MODE_PTR_PcdShellFile  (VOID *)_gPcd_FixedAtBuild_PcdShellFile
//#define _PCD_SET_MODE_PTR_PcdShellFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdShellFile (VOID *)_gPcd_FixedAtBuild_PcdShellFile
#define _PCD_SIZE_PcdShellFile 16
#define _PCD_GET_MODE_SIZE_PcdShellFile _PCD_SIZE_PcdShellFile
#define _PCD_TOKEN_PcdFSBClock  159U
extern const UINT32 _gPcd_FixedAtBuild_PcdFSBClock;
#define _PCD_GET_MODE_32_PcdFSBClock  _gPcd_FixedAtBuild_PcdFSBClock
//#define _PCD_SET_MODE_32_PcdFSBClock  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFSBClock 200000000
#define _PCD_SIZE_PcdFSBClock 4
#define _PCD_GET_MODE_SIZE_PcdFSBClock _PCD_SIZE_PcdFSBClock


#ifdef __cplusplus
}
#endif

#endif
