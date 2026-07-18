
void FUN_006b1980(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  
  if (-1 < param_2) {
    if (((((param_1[param_2 * 4 + 5] != 0) || (param_1[param_2 * 4 + 6] != 0)) ||
         (param_1[param_2 * 4 + 7] != param_1[3])) || (param_1[(param_2 + 2) * 4] != param_1[4])) &&
       (iVar2 = param_1[param_2 * 4 + 7] - param_1[param_2 * 4 + 5], 0 < iVar2)) {
      iVar1 = param_1[(param_2 + 2) * 4] - param_1[param_2 * 4 + 6];
      if (0 < iVar1) {
        FUN_006b5f80(param_1,param_1[param_2 * 4 + 5],param_1[param_2 * 4 + 6],iVar2,iVar1);
      }
    }
    if ((0 < param_6) && (0 < param_7)) {
      FUN_006b5f80(param_1,param_4,param_5,param_6,param_7);
    }
    param_1[param_2 * 4 + 5] = param_4;
    param_1[param_2 * 4 + 6] = param_5;
    param_1[param_2 * 4 + 7] = param_4 + param_6;
    param_1[(param_2 + 2) * 4] = param_5 + param_7;
    if (param_3 < 0) {
      param_3 = -1;
    }
    param_1[param_2 + 0x31] = param_3;
  }
  return;
}

