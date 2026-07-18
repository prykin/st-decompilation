
undefined4 thunk_FUN_005fd5c0(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2 - param_1[3];
  if (iVar4 == 0) {
    return 0;
  }
  iVar1 = param_1[2];
  if (iVar4 < iVar1 / 2) {
    iVar2 = *param_1;
    iVar3 = iVar2 * iVar4 - (iVar2 * iVar4 * iVar4) / iVar1;
    iVar4 = ((param_1[1] * iVar3 * iVar3) / 10) / (iVar2 * iVar2 * 2);
    *param_3 = iVar3 / 10;
    *param_4 = iVar4 + (iVar4 * iVar3 * 2) / (iVar2 * iVar1 * 3);
    return 1;
  }
  return 2;
}

