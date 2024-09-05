# 1 "/root/edk2/OvmfPkg/Library/XenHypercallLib/X64/hypercall.nasm"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/root/edk2/Build/OvmfX64/RELEASE_GCC5/X64/OvmfPkg/Library/XenHypercallLib/XenHypercallLib/DEBUG/AutoGen.h" 1
# 16 "/root/edk2/Build/OvmfX64/RELEASE_GCC5/X64/OvmfPkg/Library/XenHypercallLib/XenHypercallLib/DEBUG/AutoGen.h"
# 1 "/root/edk2/MdePkg/Include/Base.h" 1
# 28 "/root/edk2/MdePkg/Include/Base.h"
# 1 "/root/edk2/MdePkg/Include/X64/ProcessorBind.h" 1
# 188 "/root/edk2/MdePkg/Include/X64/ProcessorBind.h"
  typedef unsigned long long UINT64;



  typedef long long INT64;



  typedef unsigned int UINT32;



  typedef int INT32;



  typedef unsigned short UINT16;




  typedef unsigned short CHAR16;



  typedef short INT16;




  typedef unsigned char BOOLEAN;



  typedef unsigned char UINT8;



  typedef char CHAR8;



  typedef signed char INT8;






typedef UINT64 UINTN;




typedef INT64 INTN;
# 29 "/root/edk2/MdePkg/Include/Base.h" 2
# 54 "/root/edk2/MdePkg/Include/Base.h"
extern UINT8 _VerifySizeofBOOLEAN[(sizeof(BOOLEAN) == (1)) / (sizeof(BOOLEAN) == (1))];
extern UINT8 _VerifySizeofINT8[(sizeof(INT8) == (1)) / (sizeof(INT8) == (1))];
extern UINT8 _VerifySizeofUINT8[(sizeof(UINT8) == (1)) / (sizeof(UINT8) == (1))];
extern UINT8 _VerifySizeofINT16[(sizeof(INT16) == (2)) / (sizeof(INT16) == (2))];
extern UINT8 _VerifySizeofUINT16[(sizeof(UINT16) == (2)) / (sizeof(UINT16) == (2))];
extern UINT8 _VerifySizeofINT32[(sizeof(INT32) == (4)) / (sizeof(INT32) == (4))];
extern UINT8 _VerifySizeofUINT32[(sizeof(UINT32) == (4)) / (sizeof(UINT32) == (4))];
extern UINT8 _VerifySizeofINT64[(sizeof(INT64) == (8)) / (sizeof(INT64) == (8))];
extern UINT8 _VerifySizeofUINT64[(sizeof(UINT64) == (8)) / (sizeof(UINT64) == (8))];
extern UINT8 _VerifySizeofCHAR8[(sizeof(CHAR8) == (1)) / (sizeof(CHAR8) == (1))];
extern UINT8 _VerifySizeofCHAR16[(sizeof(CHAR16) == (2)) / (sizeof(CHAR16) == (2))];
# 73 "/root/edk2/MdePkg/Include/Base.h"
typedef enum {
  __VerifyUint8EnumValue = 0xff
} __VERIFY_UINT8_ENUM_SIZE;

typedef enum {
  __VerifyUint16EnumValue = 0xffff
} __VERIFY_UINT16_ENUM_SIZE;

typedef enum {
  __VerifyUint32EnumValue = 0xffffffff
} __VERIFY_UINT32_ENUM_SIZE;

extern UINT8 _VerifySizeof__VERIFY_UINT8_ENUM_SIZE[(sizeof(__VERIFY_UINT8_ENUM_SIZE) == (4)) / (sizeof(__VERIFY_UINT8_ENUM_SIZE) == (4))];
extern UINT8 _VerifySizeof__VERIFY_UINT16_ENUM_SIZE[(sizeof(__VERIFY_UINT16_ENUM_SIZE) == (4)) / (sizeof(__VERIFY_UINT16_ENUM_SIZE) == (4))];
extern UINT8 _VerifySizeof__VERIFY_UINT32_ENUM_SIZE[(sizeof(__VERIFY_UINT32_ENUM_SIZE) == (4)) / (sizeof(__VERIFY_UINT32_ENUM_SIZE) == (4))];
# 261 "/root/edk2/MdePkg/Include/Base.h"
typedef struct {
  UINT32 Data1;
  UINT16 Data2;
  UINT16 Data3;
  UINT8 Data4[8];
} GUID;




typedef struct {
  UINT8 Addr[4];
} IPv4_ADDRESS;




typedef struct {
  UINT8 Addr[16];
} IPv6_ADDRESS;




typedef UINT64 PHYSICAL_ADDRESS;




typedef struct _LIST_ENTRY LIST_ENTRY;




struct _LIST_ENTRY {
  LIST_ENTRY *ForwardLink;
  LIST_ENTRY *BackLink;
};
# 657 "/root/edk2/MdePkg/Include/Base.h"
typedef __builtin_ms_va_list VA_LIST;
# 761 "/root/edk2/MdePkg/Include/Base.h"
typedef UINTN *BASE_LIST;
# 925 "/root/edk2/MdePkg/Include/Base.h"
typedef UINTN RETURN_STATUS;
# 1241 "/root/edk2/MdePkg/Include/Base.h"
  void * __builtin_return_address (unsigned int level);
# 17 "/root/edk2/Build/OvmfX64/RELEASE_GCC5/X64/OvmfPkg/Library/XenHypercallLib/XenHypercallLib/DEBUG/AutoGen.h" 2

extern GUID gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;



extern GUID gEfiXenInfoGuid;


extern UINT64 _gPcd_SkuId_Array[];

RETURN_STATUS

XenHypercallLibInit (
  void
  );
# 1 "<command-line>" 2
# 1 "/root/edk2/OvmfPkg/Library/XenHypercallLib/X64/hypercall.nasm"
DEFAULT REL
SECTION .text

; INTN
;
; __XenHypercall2 (
; void *HypercallAddr,
; INTN Arg1,
; INTN Arg2
; );
global __XenHypercall2
__XenHypercall2:
  push rdi
  push rsi
  ; Copy HypercallAddr to rax
  mov rax, rcx
  ; Copy Arg1 to the register expected by Xen
  mov rdi, rdx
  ; Copy Arg2 to the register expected by Xen
  mov rsi, r8
  ; Call HypercallAddr
  call rax
  pop rsi
  pop rdi
  ret
