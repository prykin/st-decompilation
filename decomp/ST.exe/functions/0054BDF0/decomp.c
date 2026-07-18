
bool FUN_0054bdf0(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *param_5;
  if (iVar3 < param_1) {
    *param_5 = param_1;
  }
  iVar1 = param_1 + -1 + param_3;
  iVar4 = *param_5;
  if (iVar1 < iVar4) {
    *param_5 = iVar1;
  }
  iVar5 = *param_6;
  if (iVar5 < param_2) {
    *param_6 = param_2;
  }
  iVar2 = param_2 + -1 + param_4;
  iVar6 = *param_6;
  if (iVar2 < iVar6) {
    *param_6 = iVar2;
  }
  return iVar2 < iVar6 || (iVar5 < param_2 || (iVar1 < iVar4 || iVar3 < param_1));
}

