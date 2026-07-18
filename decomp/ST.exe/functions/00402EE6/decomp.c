
void thunk_FUN_00497110(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_10 = *(int *)(param_1 + 0x1f1);
  iVar6 = *(int *)(param_1 + 0x1ed) + 100;
  iVar5 = *(int *)(param_1 + 0x1e9) + 100;
  iStack_18 = *(int *)(param_2 + 0x1ed) + 100;
  iVar4 = *(int *)(param_2 + 0x1e9) + 100;
  iVar2 = FUN_006aced8(iVar5,iVar6,iVar4,iStack_18);
  if (0 < iVar2) {
    iVar3 = iStack_18 - iVar6;
    iStack_c = iVar3 / 2 + iVar6;
    iStack_14 = (iVar4 - iVar5) / 2 + iVar5;
    sVar1 = (short)(iStack_10 >> 0x1f);
    if (iStack_10 < 0) {
      iStack_8 = (short)(((short)(iStack_10 / 200) + sVar1) -
                        (short)((longlong)iStack_10 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iStack_8 = (int)(short)(((short)(iStack_10 / 200) + sVar1) -
                             (short)((longlong)iStack_10 * 0x51eb851f >> 0x3f));
    }
    FUN_006e3310(DAT_00807598,(*(int *)((int)DAT_00807598 + 0x380) * iStack_14) / 0xc9,
                 (int *)((*(int *)((int)DAT_00807598 + 0x380) * iStack_c) / 0xc9),iStack_8,
                 &iStack_1c);
    iStack_8 = iStack_8 + 1;
    if (iStack_8 < iStack_1c) {
      iStack_8 = iStack_1c;
    }
    iStack_8 = iStack_8 * 200;
    iVar2 = iVar2 * 4;
    thunk_FUN_0061f5c0(*(undefined4 *)(param_1 + 0x1d9),
                       (short)(((iVar4 - iVar5) * 600) / iVar2) + (short)iVar5,
                       (short)((iVar3 * 600) / iVar2) + (short)iVar6,(short)iStack_10,
                       (short)iStack_14,(short)iStack_c,(short)iStack_8);
    thunk_FUN_0061f5c0(*(undefined4 *)(param_2 + 0x1d9),
                       (short)(((iVar5 - iVar4) * 600) / iVar2) + (short)iVar4,
                       (short)(((iVar6 - iStack_18) * 600) / iVar2) + (short)iStack_18,
                       (short)iStack_10,(short)iStack_14,(short)iStack_c,(short)iStack_8);
  }
  return;
}

