
int FUN_006b1ab0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    return 0;
  }
  iVar1 = param_1[param_2 + 0x3c];
  param_1[param_2 + 0x3c] = param_3;
  if (param_3 != 0) {
    FUN_006b5f80(param_1,param_1[param_2 * 4 + 5],param_1[param_2 * 4 + 6],
                 param_1[param_2 * 4 + 7] - param_1[param_2 * 4 + 5],
                 param_1[(param_2 + 2) * 4] - param_1[param_2 * 4 + 6]);
  }
  return iVar1;
}

