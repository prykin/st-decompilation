
undefined4 __thiscall FUN_006d5260(void *this,undefined4 *param_1)

{
  AnonShape_00749A79_05F12707 *pAVar1;
  AnonShape_00749A79_05F12707 *pAVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  tagPALETTEENTRY **pptVar7;
  int *piVar8;
  HDC hdc;
  UINT UVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 *iStart;
  UINT iStart_00;
  bool bVar12;
  tagPALETTEENTRY *local_414;
  tagPALETTEENTRY *local_3c;
  _RTL_CRITICAL_SECTION *local_14;
  int local_10;
  void *local_c;
  undefined4 *local_8;
  
  local_14 = (_RTL_CRITICAL_SECTION *)((int)this + 0x7c);
  local_c = this;
  EnterCriticalSection(local_14);
  pAVar1 = *(AnonShape_00749A79_05F12707 **)((int)this + 0x284);
  pAVar2 = (AnonShape_00749A79_05F12707 *)param_1[0x11];
  if (((uint)param_1[0x10] < 0x59) || (iVar4 = FUN_00749a5e((int)pAVar2), iVar4 == 0)) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8 = (undefined4 *)0x1;
    if ((pAVar1 != (AnonShape_00749A79_05F12707 *)0x0) &&
       (iVar4 = FUN_00749a5e((int)pAVar1), iVar4 != 0)) {
      iVar4 = *(int *)&pAVar1[1].field_0xc;
      if ((*(int *)&pAVar2[1].field_0xc == iVar4) ||
         ((*(int *)&pAVar2[1].field_0xc == 0 && (iVar4 == 1 << (pAVar2->field_0x3e & 0x1f))))) {
        pcVar5 = (char *)FUN_00749a79(pAVar1);
        local_10 = iVar4 * 4;
        pcVar6 = (char *)FUN_00749a79(pAVar2);
        bVar12 = true;
        iVar4 = local_10;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar12 = *pcVar6 == *pcVar5;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar12);
        this = local_c;
        if (bVar12) {
          local_8 = (undefined4 *)0x0;
        }
      }
    }
  }
  FUN_0074b98a((void *)((int)this + 0x240),param_1);
  pAVar1 = *(AnonShape_00749A79_05F12707 **)((int)this + 0x284);
  bVar3 = (byte)*(ushort *)&pAVar1->field_0x3e;
  if ((*(ushort *)&pAVar1->field_0x3e < 9) && (*(int *)&pAVar1[1].field_0xc == 0)) {
    *(int *)&pAVar1[1].field_0xc = 1 << (bVar3 & 0x1f);
  }
  if (*(uint *)&pAVar1[1].field_0xc < *(uint *)&pAVar1[1].field_0x10) {
    *(int *)&pAVar1[1].field_0x10 = 1 << (bVar3 & 0x1f);
  }
  if (*(int *)(pAVar1 + 1) == 0) {
    iVar4 = FUN_00749841((AnonShape_006B5B10_E0D06CF1 *)&pAVar1->field_0030);
    *(int *)(pAVar1 + 1) = iVar4;
  }
  if (local_8 != (undefined4 *)0x0) {
    iVar4 = FUN_00749a79(pAVar1);
    param_1 = *(undefined4 **)&pAVar1[1].field_0xc;
    local_8 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      pptVar7 = &local_414;
      puVar10 = (undefined1 *)(iVar4 + 1);
      do {
        puVar11 = puVar10 + 4;
        *(undefined1 *)pptVar7 = puVar10[1];
        puVar11[(int)(&stack0xfffffbe8 + -iVar4)] = *puVar10;
        puVar11[(int)(&stack0xfffffbe9 + -iVar4)] = puVar10[-1];
        puVar11[(int)(&stack0xfffffbea + -iVar4)] = 0;
        pptVar7 = pptVar7 + 1;
        param_1 = (undefined4 *)((int)param_1 + -1);
        puVar10 = puVar11;
      } while (param_1 != (undefined4 *)0x0);
    }
    iStart_00 = 0;
    pptVar7 = &local_414;
    do {
      if (*pptVar7 != (tagPALETTEENTRY *)0x0) break;
      iStart_00 = iStart_00 + 1;
      pptVar7 = pptVar7 + 1;
    } while ((int)iStart_00 < 10);
    iStart = local_8;
    if (0xf6 < (int)local_8) {
      piVar8 = (int *)(&stack0xfffffbe8 + (int)local_8 * 4);
      do {
        if (*piVar8 != 0) break;
        iStart = (undefined4 *)((int)iStart - 1);
        piVar8 = piVar8 + -1;
      } while (0xf6 < (int)iStart);
    }
    hdc = GetDC((HWND)0x0);
    if (0 < (int)iStart_00) {
      UVar9 = iStart_00;
      if (10 < (int)iStart_00) {
        UVar9 = 10;
      }
      GetSystemPaletteEntries(hdc,0,UVar9,(LPPALETTEENTRY)&local_414);
    }
    if ((int)iStart < 0x100) {
      if ((int)iStart < 0xf6) {
        UVar9 = 10;
      }
      else {
        UVar9 = 0x100 - (int)iStart;
      }
      GetSystemPaletteEntries(hdc,(UINT)iStart,UVar9,(LPPALETTEENTRY)&local_3c);
    }
    ReleaseDC((HWND)0x0,hdc);
    this = local_c;
    FUN_006b0a20(*(undefined4 **)(*(int *)((int)local_c + 0x288) + 0x28),
                 (int)(&local_414 + iStart_00),iStart_00,(int)iStart - iStart_00,0);
    FUN_00747406(this,9,(int *)0x0,0);
  }
  FUN_006d6110((void *)((int)this + 0x294),(int)this + 0x240);
  LeaveCriticalSection(local_14);
  return 0;
}

