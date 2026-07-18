
undefined4 __cdecl thunk_FUN_00635da0(int param_1,int param_2,int param_3)

{
  short sVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar4 = (short)(((short)(param_1 / 0xc9) + sVar1) -
                   (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar5 = (short)(((short)(param_2 / 0xc9) + sVar1) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    param_1 = (short)(((short)(param_3 / 200) + sVar1) -
                     (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    param_1 = (int)(short)(((short)(param_3 / 200) + sVar1) -
                          (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  if ((((iVar4 < *(int *)(DAT_00807598 + 0x48)) || (*(int *)(DAT_00807598 + 0x58) < iVar4)) ||
      (iVar5 < *(int *)(DAT_00807598 + 0x44))) || (*(int *)(DAT_00807598 + 0x54) < iVar5)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_006ddbd0();
  }
  pvVar2 = DAT_00802a88;
  if (((char)uVar3 != '\0') && (DAT_00802a88 != (void *)0x0)) {
    if ((((DAT_0080874d != -1) &&
         ((uVar3 = 0, *(int *)((int)DAT_00802a88 + 0xf8) != 0 &&
          (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar4,iVar5,
                              &param_2,&param_3), uVar3 = param_1, -1 < param_1)))) &&
        ((param_1 < 5 &&
         ((((-1 < param_2 && (param_2 < *(int *)((int)pvVar2 + 0x30))) &&
           (uVar3 = (&DAT_0079aed0)[param_1] + param_3, -1 < (int)uVar3)) &&
          (((int)uVar3 < *(int *)((int)pvVar2 + 0x34) && (*(int *)((int)pvVar2 + 0x4c) != 0))))))))
       && (uVar3 = (uint)*(byte *)(uVar3 * *(int *)((int)pvVar2 + 0x30) +
                                   *(int *)((int)pvVar2 + 0x4c) + param_2), uVar3 == 0)) {
      return 0;
    }
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  return uVar3;
}

