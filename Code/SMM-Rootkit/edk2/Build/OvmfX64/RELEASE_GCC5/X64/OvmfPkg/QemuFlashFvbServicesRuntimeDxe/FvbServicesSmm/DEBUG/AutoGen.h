/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_2E7DB7A7_608E_4041_B45F_00359E0766C6
#define _AUTOGENH_2E7DB7A7_608E_4041_B45F_00359E0766C6

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x2E7DB7A7, 0x608E, 0x4041, {0xB4, 0x5F, 0x00, 0x35, 0x9E, 0x07, 0x66, 0xC6}}

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;

// Protocols
extern EFI_GUID gEfiSmmFirmwareVolumeBlockProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  95U
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize  _PCD_SIZE_PcdFlashNvStorageVariableSize 
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x40000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  254U
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingSize  _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize  0x1000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  94U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize  _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x42000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFlashNvStorageVariableBase  255U
#define _PCD_SIZE_PcdOvmfFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFlashNvStorageVariableBase  _PCD_SIZE_PcdOvmfFlashNvStorageVariableBase 
#define _PCD_VALUE_PcdOvmfFlashNvStorageVariableBase  0xFFC00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdOvmfFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdOvmfFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFlashNvStorageFtwWorkingBase  256U
#define _PCD_SIZE_PcdOvmfFlashNvStorageFtwWorkingBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFlashNvStorageFtwWorkingBase  _PCD_SIZE_PcdOvmfFlashNvStorageFtwWorkingBase 
#define _PCD_VALUE_PcdOvmfFlashNvStorageFtwWorkingBase  4291039232U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageFtwWorkingBase;
#define _PCD_GET_MODE_32_PcdOvmfFlashNvStorageFtwWorkingBase  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageFtwWorkingBase
//#define _PCD_SET_MODE_32_PcdOvmfFlashNvStorageFtwWorkingBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFlashNvStorageFtwSpareBase  257U
#define _PCD_SIZE_PcdOvmfFlashNvStorageFtwSpareBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFlashNvStorageFtwSpareBase  _PCD_SIZE_PcdOvmfFlashNvStorageFtwSpareBase 
#define _PCD_VALUE_PcdOvmfFlashNvStorageFtwSpareBase  4291043328U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageFtwSpareBase;
#define _PCD_GET_MODE_32_PcdOvmfFlashNvStorageFtwSpareBase  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageFtwSpareBase
//#define _PCD_SET_MODE_32_PcdOvmfFlashNvStorageFtwSpareBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFlashNvStorageEventLogSize  258U
#define _PCD_SIZE_PcdOvmfFlashNvStorageEventLogSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFlashNvStorageEventLogSize  _PCD_SIZE_PcdOvmfFlashNvStorageEventLogSize 
#define _PCD_VALUE_PcdOvmfFlashNvStorageEventLogSize  0x1000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageEventLogSize;
#define _PCD_GET_MODE_32_PcdOvmfFlashNvStorageEventLogSize  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageEventLogSize
//#define _PCD_SET_MODE_32_PcdOvmfFlashNvStorageEventLogSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFdBaseAddress  214U
#define _PCD_SIZE_PcdOvmfFdBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFdBaseAddress  _PCD_SIZE_PcdOvmfFdBaseAddress 
#define _PCD_VALUE_PcdOvmfFdBaseAddress  0xFFC00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFdBaseAddress;
#define _PCD_GET_MODE_32_PcdOvmfFdBaseAddress  _gPcd_FixedAtBuild_PcdOvmfFdBaseAddress
//#define _PCD_SET_MODE_32_PcdOvmfFdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFirmwareFdSize  259U
#define _PCD_SIZE_PcdOvmfFirmwareFdSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFirmwareFdSize  _PCD_SIZE_PcdOvmfFirmwareFdSize 
#define _PCD_VALUE_PcdOvmfFirmwareFdSize  0x00400000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFirmwareFdSize;
#define _PCD_GET_MODE_32_PcdOvmfFirmwareFdSize  _gPcd_FixedAtBuild_PcdOvmfFirmwareFdSize
//#define _PCD_SET_MODE_32_PcdOvmfFirmwareFdSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFirmwareBlockSize  260U
#define _PCD_SIZE_PcdOvmfFirmwareBlockSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFirmwareBlockSize  _PCD_SIZE_PcdOvmfFirmwareBlockSize 
#define _PCD_VALUE_PcdOvmfFirmwareBlockSize  0x1000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFirmwareBlockSize;
#define _PCD_GET_MODE_32_PcdOvmfFirmwareBlockSize  _gPcd_FixedAtBuild_PcdOvmfFirmwareBlockSize
//#define _PCD_SET_MODE_32_PcdOvmfFirmwareBlockSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSmmSmramRequire  42U
#define _PCD_SIZE_PcdSmmSmramRequire 1
#define _PCD_GET_MODE_SIZE_PcdSmmSmramRequire  _PCD_SIZE_PcdSmmSmramRequire 
#define _PCD_VALUE_PcdSmmSmramRequire  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSmmSmramRequire;
#define _PCD_GET_MODE_BOOL_PcdSmmSmramRequire  _gPcd_FixedAtBuild_PcdSmmSmramRequire
//#define _PCD_SET_MODE_BOOL_PcdSmmSmramRequire  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase  36U
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingBase  LibPcdGet32(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingBase  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase)
#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase, (Value))
#define _PCD_SET_MODE_32_S_PcdFlashNvStorageFtwWorkingBase(Value)  LibPcdSet32S(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase  25U
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareBase  LibPcdGet32(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareBase  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase)
#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase, (Value))
#define _PCD_SET_MODE_32_S_PcdFlashNvStorageFtwSpareBase(Value)  LibPcdSet32S(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase  261U
#define _PCD_SIZE_PcdFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase  _PCD_SIZE_PcdFlashNvStorageVariableBase 
#define _PCD_VALUE_PcdFlashNvStorageVariableBase  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFlashNvStorageEventLogBase  262U
#define _PCD_SIZE_PcdOvmfFlashNvStorageEventLogBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFlashNvStorageEventLogBase  _PCD_SIZE_PcdOvmfFlashNvStorageEventLogBase 
#define _PCD_VALUE_PcdOvmfFlashNvStorageEventLogBase  4291035136U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageEventLogBase;
#define _PCD_GET_MODE_32_PcdOvmfFlashNvStorageEventLogBase  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageEventLogBase
//#define _PCD_SET_MODE_32_PcdOvmfFlashNvStorageEventLogBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase64  28U
#define _PCD_GET_MODE_64_PcdFlashNvStorageVariableBase64  LibPcdGet64(_PCD_TOKEN_PcdFlashNvStorageVariableBase64)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase64  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageVariableBase64)
#define _PCD_SET_MODE_64_PcdFlashNvStorageVariableBase64(Value)  LibPcdSet64(_PCD_TOKEN_PcdFlashNvStorageVariableBase64, (Value))
#define _PCD_SET_MODE_64_S_PcdFlashNvStorageVariableBase64(Value)  LibPcdSet64S(_PCD_TOKEN_PcdFlashNvStorageVariableBase64, (Value))

#define _PCD_TOKEN_PcdOvmfFlashVariablesEnable  29U
#define _PCD_GET_MODE_BOOL_PcdOvmfFlashVariablesEnable  LibPcdGetBool(_PCD_TOKEN_PcdOvmfFlashVariablesEnable)
#define _PCD_GET_MODE_SIZE_PcdOvmfFlashVariablesEnable  LibPcdGetSize(_PCD_TOKEN_PcdOvmfFlashVariablesEnable)
#define _PCD_SET_MODE_BOOL_PcdOvmfFlashVariablesEnable(Value)  LibPcdSetBool(_PCD_TOKEN_PcdOvmfFlashVariablesEnable, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdOvmfFlashVariablesEnable(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdOvmfFlashVariablesEnable, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
FvbInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
