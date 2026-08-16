#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_006d5260(void *this,undefined4 *param_1)

{
  AnonShape_00749A79_05F12707 *pAVar1;
  AnonShape_00749A79_05F12707 *pAVar2;
  byte bVar3;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar4;
  int local_EAX_263;
  tagPALETTEENTRY **pptVar8;
  int *piVar9;
  HDC hdc;
  UINT UVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *iStart;
  UINT iStart_00;
  bool bVar13;
  tagPALETTEENTRY *local_414;
  tagPALETTEENTRY *local_3c;
  _RTL_CRITICAL_SECTION *local_14;
  int local_10;
  void *local_c;
  undefined4 *local_8;

  local_14 = (_RTL_CRITICAL_SECTION *)((int)this + 0x7c);
  local_c = this;
  EnterCriticalSection(local_14);
  pAVar1 = STField<AnonShape_00749A79_05F12707 *>(this,0x284);
  pAVar2 = (AnonShape_00749A79_05F12707 *)param_1[0x11];
  if (((uint)param_1[0x10] < 0x59) || (iVar5 = FUN_00749a5e((int)pAVar2), iVar5 == 0)) {
    local_8 = nullptr;
  }
  else {
    local_8 = (undefined4 *)0x1;
    if ((pAVar1 != nullptr) &&
       (iVar5 = FUN_00749a5e((int)pAVar1), iVar5 != 0)) {
      iVar5 = *(int *)&pAVar1[1].field_0xc;
      if ((*(int *)&pAVar2[1].field_0xc == iVar5) ||
         ((*(int *)&pAVar2[1].field_0xc == 0 && (iVar5 == 1 << (pAVar2->field_0x3e & 0x1f))))) {
        pcVar6 = (char *)FUN_00749a79(pAVar1);
        local_10 = iVar5 * 4;
        pcVar7 = (char *)FUN_00749a79(pAVar2);
        bVar13 = true;
        iVar5 = local_10;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar13 = *pcVar7 == *pcVar6;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (bVar13);
        this = local_c;
        if (bVar13) {
          local_8 = nullptr;
        }
      }
    }
  }
  FUN_0074b98a((void *)((int)this + 0x240),param_1);
  pAVar1 = STField<AnonShape_00749A79_05F12707 *>(this,0x284);
  bVar3 = (byte)*(ushort *)&pAVar1->field_0x3e;
  if ((*(ushort *)&pAVar1->field_0x3e < 9) && (*(int *)&pAVar1[1].field_0xc == 0)) {
    *(int *)&pAVar1[1].field_0xc = 1 << (bVar3 & 0x1f);
  }
  if (*(uint *)&pAVar1[1].field_0xc < *(uint *)&pAVar1[1].field_0x10) {
    *(int *)&pAVar1[1].field_0x10 = 1 << (bVar3 & 0x1f);
  }
  if (*(int *)(pAVar1 + 1) == 0) {
    iVar4 = FUN_00749841((RecoveredSourceFamily_dibcopy *)&pAVar1->field_0030);
    *(int *)(pAVar1 + 1) = iVar4;
  }
  if (local_8 != nullptr) {
    local_EAX_263 = FUN_00749a79(pAVar1);
    auto param_1_after_write = *(undefined4 **)&pAVar1[1].field_0xc; /* compiler stack-slot lifetime split */
    local_8 = param_1_after_write;
    if (param_1_after_write != nullptr) {
      pptVar8 = &local_414;
      puVar11 = (undefined1 *)(local_EAX_263 + 1);
      do {
        puVar12 = puVar11 + 4;
        *(undefined1 *)pptVar8 = puVar11[1];
        puVar12[(int)(&stack0xfffffbe8 + -local_EAX_263)] = *puVar11;
        puVar12[(int)(&stack0xfffffbe9 + -local_EAX_263)] = puVar11[-1];
        puVar12[(int)(&stack0xfffffbea + -local_EAX_263)] = 0;
        pptVar8 = pptVar8 + 1;
        param_1_after_write = (undefined4 *)((int)param_1_after_write + -1);
        puVar11 = puVar12;
      } while (param_1_after_write != nullptr);
    }
    iStart_00 = 0;
    pptVar8 = &local_414;
    do {
      if (*pptVar8 != nullptr) break;
      iStart_00 = iStart_00 + 1;
      pptVar8 = pptVar8 + 1;
    } while ((int)iStart_00 < 10);
    iStart = local_8;
    if (0xf6 < (int)local_8) {
      piVar9 = (int *)(&stack0xfffffbe8 + (int)local_8 * 4);
      do {
        if (*piVar9 != 0) break;
        iStart = (undefined4 *)((int)iStart - 1);
        piVar9 = piVar9 + -1;
      } while (0xf6 < (int)iStart);
    }
    hdc = GetDC((HWND)0x0);
    if (0 < (int)iStart_00) {
      UVar10 = iStart_00;
      if (10 < (int)iStart_00) {
        UVar10 = 10;
      }
      GetSystemPaletteEntries(hdc,0,UVar10,(LPPALETTEENTRY)&local_414);
    }
    if ((int)iStart < 0x100) {
      if ((int)iStart < 0xf6) {
        UVar10 = 10;
      }
      else {
        UVar10 = 0x100 - (int)iStart;
      }
      GetSystemPaletteEntries(hdc,(UINT)iStart,UVar10,(LPPALETTEENTRY)&local_3c);
    }
    ReleaseDC((HWND)0x0,hdc);
    this = local_c;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    FUN_006b0a20(*(AnonShape_GLOBAL_0080759C_9638EF10 **)(STField<int>(local_c,0x288) + 0x28),
                 (int)(&local_414 + iStart_00),iStart_00,(int)iStart - iStart_00,0);
    FUN_00747406(this,9,nullptr,0);
  }
  FUN_006d6110((void *)((int)this + 0x294),(int)this + 0x240);
  LeaveCriticalSection(local_14);
  return 0;
}

