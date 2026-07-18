
undefined4 __thiscall FUN_006d5260(void *this,undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  tagPALETTEENTRY *ptVar6;
  int *piVar7;
  HDC hdc;
  UINT UVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 *iStart;
  UINT UVar12;
  bool bVar13;
  tagPALETTEENTRY local_414 [246];
  tagPALETTEENTRY local_3c [10];
  LPCRITICAL_SECTION local_14;
  int local_10;
  void *local_c;
  undefined4 *local_8;
  
  local_14 = (LPCRITICAL_SECTION)((int)this + 0x7c);
  local_c = this;
  EnterCriticalSection(local_14);
  iVar9 = *(int *)((int)this + 0x284);
  iVar5 = param_1[0x11];
  if (((uint)param_1[0x10] < 0x59) || (iVar2 = FUN_00749a5e(iVar5), iVar2 == 0)) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8 = (undefined4 *)0x1;
    if ((iVar9 != 0) && (iVar2 = FUN_00749a5e(iVar9), iVar2 != 0)) {
      iVar2 = *(int *)(iVar9 + 0x50);
      if ((*(int *)(iVar5 + 0x50) == iVar2) ||
         ((*(int *)(iVar5 + 0x50) == 0 && (iVar2 == 1 << (*(byte *)(iVar5 + 0x3e) & 0x1f))))) {
        pcVar3 = (char *)FUN_00749a79(iVar9);
        local_10 = iVar2 * 4;
        pcVar4 = (char *)FUN_00749a79(iVar5);
        bVar13 = true;
        iVar9 = local_10;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          bVar13 = *pcVar4 == *pcVar3;
          pcVar4 = pcVar4 + 1;
          pcVar3 = pcVar3 + 1;
        } while (bVar13);
        this = local_c;
        if (bVar13) {
          local_8 = (undefined4 *)0x0;
        }
      }
    }
  }
  FUN_0074b98a((void *)((int)this + 0x240),param_1);
  iVar9 = *(int *)((int)this + 0x284);
  bVar1 = (byte)*(ushort *)(iVar9 + 0x3e);
  if ((*(ushort *)(iVar9 + 0x3e) < 9) && (*(int *)(iVar9 + 0x50) == 0)) {
    *(int *)(iVar9 + 0x50) = 1 << (bVar1 & 0x1f);
  }
  if (*(uint *)(iVar9 + 0x50) < *(uint *)(iVar9 + 0x54)) {
    *(int *)(iVar9 + 0x54) = 1 << (bVar1 & 0x1f);
  }
  if (*(int *)(iVar9 + 0x44) == 0) {
    iVar5 = FUN_00749841(iVar9 + 0x30);
    *(int *)(iVar9 + 0x44) = iVar5;
  }
  if (local_8 != (undefined4 *)0x0) {
    iVar5 = FUN_00749a79(iVar9);
    param_1 = *(undefined4 **)(iVar9 + 0x50);
    local_8 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      ptVar6 = local_414;
      puVar10 = (undefined1 *)(iVar5 + 1);
      do {
        puVar11 = puVar10 + 4;
        ptVar6->peRed = puVar10[1];
        puVar11[(int)(&stack0xfffffbe8 + -iVar5)] = *puVar10;
        puVar11[(int)(&stack0xfffffbe9 + -iVar5)] = puVar10[-1];
        puVar11[(int)(&stack0xfffffbea + -iVar5)] = 0;
        ptVar6 = ptVar6 + 1;
        param_1 = (undefined4 *)((int)param_1 + -1);
        puVar10 = puVar11;
      } while (param_1 != (undefined4 *)0x0);
    }
    UVar12 = 0;
    ptVar6 = local_414;
    do {
      if (*ptVar6 != (tagPALETTEENTRY)0x0) break;
      UVar12 = UVar12 + 1;
      ptVar6 = ptVar6 + 1;
    } while ((int)UVar12 < 10);
    iStart = local_8;
    if (0xf6 < (int)local_8) {
      piVar7 = (int *)(&stack0xfffffbe8 + (int)local_8 * 4);
      do {
        if (*piVar7 != 0) break;
        iStart = (undefined4 *)((int)iStart - 1);
        piVar7 = piVar7 + -1;
      } while (0xf6 < (int)iStart);
    }
    hdc = GetDC((HWND)0x0);
    if (0 < (int)UVar12) {
      UVar8 = UVar12;
      if (10 < (int)UVar12) {
        UVar8 = 10;
      }
      GetSystemPaletteEntries(hdc,0,UVar8,local_414);
    }
    if ((int)iStart < 0x100) {
      if ((int)iStart < 0xf6) {
        UVar8 = 10;
      }
      else {
        UVar8 = 0x100 - (int)iStart;
      }
      GetSystemPaletteEntries(hdc,(UINT)iStart,UVar8,local_3c);
    }
    ReleaseDC((HWND)0x0,hdc);
    this = local_c;
    FUN_006b0a20(*(undefined4 **)(*(int *)((int)local_c + 0x288) + 0x28),(int)(local_414 + UVar12),
                 UVar12,(int)iStart - UVar12,0);
    FUN_00747406(this,9,0,0);
  }
  FUN_006d6110((void *)((int)this + 0x294),(int)this + 0x240);
  LeaveCriticalSection(local_14);
  return 0;
}

