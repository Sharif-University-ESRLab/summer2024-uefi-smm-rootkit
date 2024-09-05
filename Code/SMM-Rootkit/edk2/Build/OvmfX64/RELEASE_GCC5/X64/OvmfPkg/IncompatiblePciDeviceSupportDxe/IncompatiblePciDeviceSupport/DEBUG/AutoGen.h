/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_F6697AC4_A776_4EE1_B643_1FEFF2B615BB
#define _AUTOGENH_F6697AC4_A776_4EE1_B643_1FEFF2B615BB

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xF6697AC4, 0xA776, 0x4EE1, {0xB6, 0x43, 0x1F, 0xEF, 0xF2, 0xB6, 0x15, 0xBB}}

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiIncompatiblePciDeviceSupportProtocolGuid;
extern EFI_GUID gEfiLegacyBiosProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPciDisableBusEnumeration  17U
#define _PCD_GET_MODE_BOOL_PcdPciDisableBusEnumeration  LibPcdGetBool(_PCD_TOKEN_PcdPciDisableBusEnumeration)
#define _PCD_GET_MODE_SIZE_PcdPciDisableBusEnumeration  LibPcdGetSize(_PCD_TOKEN_PcdPciDisableBusEnumeration)
#define _PCD_SET_MODE_BOOL_PcdPciDisableBusEnumeration(Value)  LibPcdSetBool(_PCD_TOKEN_PcdPciDisableBusEnumeration, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdPciDisableBusEnumeration(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdPciDisableBusEnumeration, (Value))

#define _PCD_TOKEN_PcdPciMmio64Size  2U
#define _PCD_GET_MODE_64_PcdPciMmio64Size  LibPcdGet64(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Size  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_SET_MODE_64_PcdPciMmio64Size(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio64Size, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio64Size(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio64Size, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
DriverInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
