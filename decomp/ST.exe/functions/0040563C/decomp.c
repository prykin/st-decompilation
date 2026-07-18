
int __fastcall thunk_FUN_0060dd70(int param_1)

{
  short sVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar5 = *(int *)(param_1 + 0x1e9);
  sVar1 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar1) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar1) -
                        (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
  }
  iVar6 = *(int *)(param_1 + 0x1ed);
  sVar1 = (short)(iVar6 >> 0x1f);
  if (iVar6 < 0) {
    iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar1) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar1) -
                        (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
  }
  iVar4 = *(int *)(param_1 + 0x1f1);
  sVar1 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    iStack_8 = (short)(((short)(iVar4 / 200) + sVar1) -
                      (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iStack_8 = (int)(short)(((short)(iVar4 / 200) + sVar1) -
                           (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
  }
  iVar4 = *(int *)(param_1 + 0x24c);
  if ((((*(int *)(DAT_00807598 + 0x48) <= iVar4 + iVar5) &&
       (iVar5 - iVar4 <= *(int *)(DAT_00807598 + 0x58))) &&
      (*(int *)(DAT_00807598 + 0x44) <= iVar4 + iVar6)) &&
     (iVar6 - iVar4 <= *(int *)(DAT_00807598 + 0x54))) {
    iStack_14 = FUN_006ddbd0();
    pvVar2 = DAT_00802a88;
    if (iStack_14 == 0) {
      return 0;
    }
    if (DAT_00802a88 == (void *)0x0) {
      return iStack_14;
    }
    iVar4 = *(int *)(param_1 + 0x24c);
    iStack_18 = iVar6 - iVar4;
    if (iStack_18 < 0) {
      iStack_18 = 0;
    }
    iStack_c = iVar5 - iVar4;
    if (iStack_c < 0) {
      iStack_c = 0;
    }
    iStack_1c = iVar4 + 1 + iVar6;
    if (DAT_007fb242 < iStack_1c) {
      iStack_1c = (int)DAT_007fb242;
    }
    iStack_10 = iVar4 + 1 + iVar5;
    if (DAT_007fb240 < iStack_10) {
      iStack_10 = (int)DAT_007fb240;
    }
    if (DAT_0080874d == -1) {
      return iStack_14;
    }
    if (*(int *)((int)DAT_00802a88 + 0xf8) == 0) {
      return iStack_14;
    }
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar5,iVar6,
                       &iStack_20,&iStack_24);
    iVar6 = iStack_8;
    iVar5 = iStack_18;
    pvVar3 = DAT_00802a88;
    if (iStack_8 < 0) {
      return iStack_14;
    }
    if (4 < iStack_8) {
      return iStack_14;
    }
    if (iStack_20 < 0) {
      return iStack_14;
    }
    if (*(int *)((int)pvVar2 + 0x30) <= iStack_20) {
      return iStack_14;
    }
    iVar4 = (&DAT_0079aed0)[iStack_8] + iStack_24;
    if (iVar4 < 0) {
      return iStack_14;
    }
    if (*(int *)((int)pvVar2 + 0x34) <= iVar4) {
      return iStack_14;
    }
    if (*(int *)((int)pvVar2 + 0x4c) == 0) {
      return iStack_14;
    }
    if (*(char *)(iVar4 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) + iStack_20)
        != '\0') {
      return iStack_14;
    }
    if (DAT_0080874d == -1) {
      return iStack_14;
    }
    if (*(int *)((int)DAT_00802a88 + 0xf8) == 0) {
      return iStack_14;
    }
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iStack_c,iStack_18,
                       &iStack_24,&iStack_20);
    pvVar2 = DAT_00802a88;
    if (iStack_24 < 0) {
      return iStack_14;
    }
    if (*(int *)((int)pvVar3 + 0x30) <= iStack_24) {
      return iStack_14;
    }
    iVar6 = (&DAT_0079aed0)[iVar6] + iStack_20;
    if (iVar6 < 0) {
      return iStack_14;
    }
    if (*(int *)((int)pvVar3 + 0x34) <= iVar6) {
      return iStack_14;
    }
    if (*(int *)((int)pvVar3 + 0x4c) == 0) {
      return iStack_14;
    }
    if (*(char *)(iVar6 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) + iStack_24)
        != '\0') {
      return iStack_14;
    }
    if (DAT_0080874d == -1) {
      return iStack_14;
    }
    if (*(int *)((int)DAT_00802a88 + 0xf8) == 0) {
      return iStack_14;
    }
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iStack_10,iVar5,
                       &iStack_24,&iStack_20);
    iVar6 = iStack_8;
    iVar5 = iStack_1c;
    pvVar3 = DAT_00802a88;
    if (iStack_24 < 0) {
      return iStack_14;
    }
    if (*(int *)((int)pvVar2 + 0x30) <= iStack_24) {
      return iStack_14;
    }
    iVar4 = (&DAT_0079aed0)[iStack_8] + iStack_20;
    if (iVar4 < 0) {
      return iStack_14;
    }
    if (*(int *)((int)pvVar2 + 0x34) <= iVar4) {
      return iStack_14;
    }
    if (*(int *)((int)pvVar2 + 0x4c) == 0) {
      return iStack_14;
    }
    if (*(char *)(iVar4 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) + iStack_24)
        != '\0') {
      return iStack_14;
    }
    if (DAT_0080874d == -1) {
      return iStack_14;
    }
    if (*(int *)((int)DAT_00802a88 + 0xf8) == 0) {
      return iStack_14;
    }
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iStack_c,iStack_1c,
                       &iStack_24,&iStack_20);
    if (iStack_24 < 0) {
      return iStack_14;
    }
    if (*(int *)((int)pvVar3 + 0x30) <= iStack_24) {
      return iStack_14;
    }
    iStack_20 = (&DAT_0079aed0)[iVar6] + iStack_20;
    if (iStack_20 < 0) {
      return iStack_14;
    }
    if (*(int *)((int)pvVar3 + 0x34) <= iStack_20) {
      return iStack_14;
    }
    if (*(int *)((int)pvVar3 + 0x4c) == 0) {
      return iStack_14;
    }
    if (*(char *)(iStack_20 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) +
                 iStack_24) != '\0') {
      return iStack_14;
    }
    iVar5 = thunk_FUN_005f1d80(DAT_00802a88,iStack_10,iVar5,iStack_8);
    if (iVar5 == 1) {
      return iStack_14;
    }
  }
  return 0;
}

