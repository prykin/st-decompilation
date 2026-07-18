
void thunk_FUN_006a0c90(uint param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                       uint param_7)

{
  uint uVar1;
  uint uVar2;
  ushort auStack_10 [4];
  int iStack_8;
  
  if ((((-1 < param_3) && (param_3 < 6)) && (-1 < (int)param_4)) && ((int)param_4 < 5)) {
    auStack_10[0] = 0;
    auStack_10[1] = 0;
    auStack_10[2] = 0;
    uVar1 = param_7;
    uVar2 = 0;
    if (param_6 == 1) {
      uVar1 = 0;
      uVar2 = param_7;
    }
    uVar1 = thunk_FUN_006a2bf0(param_6,param_3,param_4,uVar2,uVar1);
    auStack_10[2] = (ushort)uVar1;
    if ((param_5 == 1) || ((param_5 == 0xff && (param_3 == 0)))) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    uVar1 = thunk_FUN_006a29b0(param_3,param_4,param_7,param_6,uVar1);
    if (param_5 == 1) {
      auStack_10[1] = (short)uVar1;
    }
    else {
      auStack_10[0] = (short)uVar1;
    }
    thunk_FUN_006a2700(*(int **)(iStack_8 + 8),param_1,param_2,param_3 + -1 + param_4,param_1,
                       param_2,auStack_10,(undefined *)0x0,0);
  }
  return;
}

