
undefined4
thunk_FUN_005fe360(short *param_1,int param_2,int param_3,short param_4,int param_5,int param_6,
                  short param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_1[7] = (short)param_6;
  param_1[2] = param_4;
  param_1[8] = param_7;
  *param_1 = (short)param_2;
  param_1[1] = (short)param_3;
  *(int *)(param_1 + 0xc) = (int)(short)param_5 - (int)(short)param_2;
  param_1[6] = (short)param_5;
  *(int *)(param_1 + 0xe) = (int)(short)param_6 - (int)(short)param_3;
  iVar2 = FUN_006aced8(param_2,param_3,param_5,param_6);
  *(int *)(param_1 + 0x10) = iVar2;
  param_1[0x12] = 0x11;
  param_1[0x13] = 0;
  if (iVar2 == 0) {
    return 0;
  }
  param_1[3] = *param_1;
  param_1[9] = *param_1;
  sVar1 = param_1[2];
  iVar2 = (iVar2 + -100) / 0x32;
  param_1[4] = param_1[1];
  param_1[5] = sVar1;
  param_1[10] = param_1[1];
  param_1[0xb] = sVar1;
  if (0x1d < iVar2) {
    iVar2 = 0xf;
  }
  iVar3 = (int)sVar1 - (int)param_1[8];
  *(undefined4 *)((int)param_1 + 0x2d) = 7;
  *(undefined4 *)((int)param_1 + 0x31) = 200;
  if (800 < iVar3) {
    if (iVar3 < 0x3b6) {
      iVar4 = *(int *)(&DAT_007ce948 + iVar2 * 4);
      iVar2 = *(int *)(&DAT_007ce9c8 + iVar2 * 4);
      *(undefined4 *)((int)param_1 + 0x35) = 0;
      *(int *)((int)param_1 + 0x29) = iVar4 - ((iVar4 - iVar2) * (iVar3 + -800)) / 200;
      return 1;
    }
    return 0xffffffff;
  }
  if (iVar3 < 600) {
    if (iVar3 < 400) {
      if (iVar3 < 200) {
        iVar4 = *(int *)(iVar2 * 4 + 0x7ceac8);
      }
      else {
        iVar4 = *(int *)(iVar2 * 4 + 0x7ceac8);
        iVar4 = ((*(int *)(iVar2 * 4 + 0x7cea48) - iVar4) * (iVar3 + -400)) / 200 + iVar4;
      }
    }
    else {
      iVar4 = *(int *)(iVar2 * 4 + 0x7cea48);
      iVar4 = ((*(int *)(&DAT_007ce9c8 + iVar2 * 4) - iVar4) * (iVar3 + -400)) / 200 + iVar4;
    }
  }
  else {
    iVar4 = ((*(int *)(&DAT_007ce948 + iVar2 * 4) - *(int *)(&DAT_007ce9c8 + iVar2 * 4)) *
            (iVar3 + -600)) / 200 + *(int *)(&DAT_007ce9c8 + iVar2 * 4);
  }
  *(int *)((int)param_1 + 0x29) = iVar4;
  *(undefined4 *)((int)param_1 + 0x35) = 0;
  return 1;
}

