
undefined4 __fastcall FUN_006b0460(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  iVar1 = iVar2 + param_2[2];
  if (iVar2 <= *param_3) {
    iVar2 = *param_3;
  }
  if (*param_3 + param_3[2] <= iVar1) {
    iVar1 = *param_3 + param_3[2];
  }
  if (iVar1 - iVar2 != 0 && iVar2 <= iVar1) {
    *param_1 = iVar2;
    param_1[2] = iVar1 - iVar2;
    iVar2 = param_2[1];
    iVar1 = iVar2 + param_2[3];
    if (iVar2 <= param_3[1]) {
      iVar2 = param_3[1];
    }
    if (param_3[1] + param_3[3] <= iVar1) {
      iVar1 = param_3[1] + param_3[3];
    }
    if (iVar1 - iVar2 != 0 && iVar2 <= iVar1) {
      param_1[1] = iVar2;
      param_1[3] = iVar1 - iVar2;
      return 1;
    }
  }
  return 0;
}

