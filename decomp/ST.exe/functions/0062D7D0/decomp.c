
int FUN_0062d7d0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;

  piVar3 = param_2;
  iVar2 = 0;
  param_2 = (int *)0x8;
  do {
    if (*param_1 != 0) {
      iVar1 = FUN_006b0060((uint *)0x0,(uint *)(piVar3 + 1));
      *param_1 = iVar1;
      iVar1 = *piVar3;
      piVar3 = (int *)((int)(piVar3 + 1) + iVar1);
      iVar2 = iVar2 + 4 + iVar1;
    }
    param_1 = param_1 + 1;
    param_2 = (int *)((int)param_2 + -1);
  } while (param_2 != (int *)0x0);
  return iVar2;
}

