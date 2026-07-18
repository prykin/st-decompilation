
void __cdecl thunk_FUN_006756d0(short *param_1,short *param_2,short *param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  sVar1 = DAT_007fb242;
  sVar3 = DAT_007fb240;
  iVar4 = (int)DAT_007fb242;
  iVar6 = (int)DAT_007fb240;
  if (*param_1 < 0) {
    *param_1 = 0;
  }
  if (*param_2 < 0) {
    *param_2 = 0;
  }
  iVar5 = (int)*param_1 + (int)*param_3;
  while ((iVar6 < iVar5 && (0 < *param_1))) {
    sVar2 = *param_1 + -1;
    *param_1 = sVar2;
    iVar5 = (int)*param_3 + (int)sVar2;
  }
  if (iVar6 < (int)*param_3 + (int)*param_1) {
    *param_3 = sVar3 - *param_1;
  }
  iVar6 = (int)*param_2 + (int)*param_4;
  while ((iVar4 < iVar6 && (0 < *param_2))) {
    sVar3 = *param_2 + -1;
    *param_2 = sVar3;
    iVar6 = (int)sVar3 + (int)*param_4;
  }
  if (iVar4 < (int)*param_2 + (int)*param_4) {
    *param_4 = sVar1 - *param_2;
  }
  return;
}

