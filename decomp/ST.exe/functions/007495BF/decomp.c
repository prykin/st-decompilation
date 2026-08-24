#include "../../pseudocode_runtime.h"


uint __fastcall FUN_007495bf(uint param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  RecoveredClass_00748A83 *pRVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  uint local_8;

  lpCriticalSection = (LPCRITICAL_SECTION)(-(uint)(param_1 != 0) & param_1 + 0x10);
  local_8 = param_1;
  /* ST_CALLSITE[007495D4]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(lpCriticalSection);
  uVar1 = FUN_00749415((AnonShape_00749415_513CA2B2 *)param_1);
  local_8 = uVar1;
  if ((int)uVar1 < 0) {
    /* ST_CALLSITE[007495EB]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    if (uVar1 != 1) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(param_1 + 0x58) != 0) {
        FUN_007496a1((AnonShape_007496A1_B3436AED *)param_1);
      }
      /* ST_CALLSITE[00749622]: CALL dword ptr [0x0085bbe4] */
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pvVar2 = VirtualAlloc((LPVOID)0x0,
                            (*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x48)) *
                            *(int *)(param_1 + 0x38),0x1000,4);
      *(LPVOID *)(param_1 + 0x58) = pvVar2;
      if (pvVar2 == (LPVOID)0x0) {
LAB_00749680:
        /* ST_CALLSITE[00749681]: CALL dword ptr [0x0085bb90] */
        LeaveCriticalSection(lpCriticalSection);
        return 0x8007000e;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = *(int *)(param_1 + 0x3c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      while (iVar3 < *(int *)(param_1 + 0x38)) {
        pRVar4 = (RecoveredClass_00748A83 *)Library::MSVCRT::FUN_0072e530(0x48);
        if (pRVar4 == nullptr) {
          pRVar4 = nullptr;
        }
        else {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pRVar4 = RecoveredClass_00748A83::FUN_00748a83
                             (pRVar4,0,param_1,&local_8,(int)pvVar2 + *(int *)(param_1 + 0x48),
                              *(undefined4 *)(param_1 + 0x40));
        }
        if (pRVar4 == nullptr) goto LAB_00749680;
        *(undefined4 *)&pRVar4->field_0x1c = *(undefined4 *)(param_1 + 0x28);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        *(RecoveredClass_00748A83 **)(param_1 + 0x28) = pRVar4;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pvVar2 = (LPVOID)((int)pvVar2 + *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x48));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar3 = *(int *)(param_1 + 0x3c);
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    /* ST_CALLSITE[00749693]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0;
  }
  return uVar1;
}

