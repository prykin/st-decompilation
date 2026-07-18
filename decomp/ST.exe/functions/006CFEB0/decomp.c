
undefined4 __cdecl FUN_006cfeb0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_2;
  iVar5 = iVar1;
  if (iVar1 <= *param_3) {
    iVar5 = *param_3;
  }
  iVar4 = param_2[2] + iVar1;
  if (param_3[2] <= param_2[2] + iVar1) {
    iVar4 = param_3[2];
  }
  if (iVar4 - iVar5 != 0 && iVar5 <= iVar4) {
    iVar1 = param_2[1];
    iVar2 = iVar1;
    if (iVar1 <= param_3[1]) {
      iVar2 = param_3[1];
    }
    iVar3 = param_2[3] + iVar1;
    if (param_3[3] <= param_2[3] + iVar1) {
      iVar3 = param_3[3];
    }
    if (iVar3 - iVar2 != 0 && iVar2 <= iVar3) {
      *param_1 = iVar5;
      param_1[2] = iVar4 - iVar5;
      param_1[1] = iVar2;
      param_1[3] = iVar3 - iVar2;
      return 1;
    }
  }
  return 0;
}

