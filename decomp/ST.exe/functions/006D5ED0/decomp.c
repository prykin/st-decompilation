#include "../../pseudocode_runtime.h"


uint __fastcall FUN_006d5ed0(AnonShape_006D5ED0_5EF510E8 *param_1)

{
  int *piVar1;
  uint uVar3;
  int uVar2;
  void *this;
  undefined4 *puVar2;
  uint uVar4;
  int iVar5;
  int iVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  AnonShape_006D5ED0_6A5D6B49 *pAVar7;
  InternalExceptionFrame local_5c;
  uint local_18;
  AnonShape_006D5ED0_6A5D6B49 *local_14;
  int local_10;
  AnonShape_006D5ED0_5EF510E8 *local_c;
  _RTL_CRITICAL_SECTION *local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar6 = *(int *)(param_1->field_005C + 0x288);
  if (param_1 == nullptr) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)&param_1->field_0x10;
  }
  local_10 = iVar6;
  local_c = param_1;
  local_8 = lpCriticalSection;
  /* ST_CALLSITE[006D5EF9]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(lpCriticalSection);
  uVar3 = FUN_00749415((AnonShape_00749415_513CA2B2 *)param_1);
  local_18 = uVar3;
  if ((int)uVar3 < 0) {
    /* ST_CALLSITE[006D5F10]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
    return uVar3;
  }
  if (param_1->field_003C < param_1->field_0038) {
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pAVar7 = (AnonShape_006D5ED0_6A5D6B49 *)(*(int *)(param_1->field_0058 + 0x44) + 0x30);
      local_14 = pAVar7;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(param_1->field_005C + 0x310) == 0) {
        local_5c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_5c;
        uVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
        param_1 = local_c;
        iVar6 = local_10;
        pAVar7 = local_14;
        if (uVar2 != 0) {
          g_currentExceptionFrame = local_5c.previous;
          /* ST_CALLSITE[006D603E]: CALL dword ptr [0x0085bb90] */
          LeaveCriticalSection(local_8);
          return uVar2;
        }
        if (*(int *)(local_c + 1) == 0) {
          uVar4 = (int)local_14->field_0008 >> 0x1f;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          Library::DKW::DDX::FUN_006c4350
                    (*(int *)(local_10 + 0x28),&local_c->field_0064,local_14->field_0004,
                     (local_14->field_0008 ^ uVar4) - uVar4,0,*(uint *)(local_10 + 4) & 0xc);
        }
        g_currentExceptionFrame = local_5c.previous;
      }
      else {
        param_1->field_0064 = *(undefined4 *)(*(int *)(iVar6 + 0x28) + 0x40);
      }
      *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) | 0x2000000;
      this = (void *)Library::MSVCRT::FUN_0072e530(0x48);
      if (this == nullptr) {
        puVar2 = nullptr;
      }
      else {
        puVar2 = FUN_006d6160(this,param_1,0,&local_18,param_1->field_0064,pAVar7[1].field_0008);
      }
      param_1->field_0060 = puVar2;
      if (puVar2 == nullptr) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(int *)(param_1->field_005C + 0x310) == 0) &&
           (piVar1 = (int *)param_1->field_0064, piVar1 != nullptr)) {
          /* ST_CALLSITE[006D6062]: CALL dword ptr [ECX + 0x8] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*piVar1 + 8))(piVar1);
          param_1->field_0064 = 0;
        }
        /* ST_CALLSITE[006D6070]: CALL dword ptr [0x0085bb90] */
        LeaveCriticalSection(local_8);
        return 0x8007000e;
      }
      param_1->field_006C = 0;
      param_1->field_0068 = 0;
      puVar2[7] = param_1->field_0028;
      param_1->field_0028 = puVar2;
      param_1->field_002C = param_1->field_002C + 1;
      iVar5 = param_1->field_003C + 1;
      param_1->field_003C = iVar5;
    } while (iVar5 < param_1->field_0038);
  }
  /* ST_CALLSITE[006D6022]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection(local_8);
  return 0;
}

