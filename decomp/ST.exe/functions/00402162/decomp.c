
int __fastcall thunk_FUN_00636fc0(int param_1)

{
  int iVar1;
  short sVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar4 = *(int *)(param_1 + 0xc);
  sVar2 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar2) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar2) -
                        (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
  }
  iVar5 = *(int *)(param_1 + 0x10);
  sVar2 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                        (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
  }
  iVar1 = *(int *)(param_1 + 0x14);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    iStack_c = (short)(((short)(iVar1 / 200) + sVar2) -
                      (short)((longlong)iVar1 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iStack_c = (int)(short)(((short)(iVar1 / 200) + sVar2) -
                           (short)((longlong)iVar1 * 0x51eb851f >> 0x3f));
  }
  if ((((*(int *)(DAT_00807598 + 0x48) <= iVar4) && (iVar4 <= *(int *)(DAT_00807598 + 0x58))) &&
      (*(int *)(DAT_00807598 + 0x44) <= iVar5)) && (iVar5 <= *(int *)(DAT_00807598 + 0x54))) {
    iStack_8 = FUN_006ddbd0();
    pvVar3 = DAT_00802a88;
    if (iStack_8 == 0) {
      return 0;
    }
    if (DAT_00802a88 == (void *)0x0) {
      return iStack_8;
    }
    if (DAT_0080874d == -1) {
      return iStack_8;
    }
    if (*(int *)((int)DAT_00802a88 + 0xf8) == 0) {
      return iStack_8;
    }
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar4,iVar5,
                       &iStack_10,&iStack_14);
    if (iStack_c < 0) {
      return iStack_8;
    }
    if (4 < iStack_c) {
      return iStack_8;
    }
    if (iStack_10 < 0) {
      return iStack_8;
    }
    if (*(int *)((int)pvVar3 + 0x30) <= iStack_10) {
      return iStack_8;
    }
    iStack_14 = (&DAT_0079aed0)[iStack_c] + iStack_14;
    if (iStack_14 < 0) {
      return iStack_8;
    }
    if (*(int *)((int)pvVar3 + 0x34) <= iStack_14) {
      return iStack_8;
    }
    if (*(int *)((int)pvVar3 + 0x4c) == 0) {
      return iStack_8;
    }
    if (*(char *)(iStack_14 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) +
                 iStack_10) != '\0') {
      return iStack_8;
    }
  }
  return 0;
}

