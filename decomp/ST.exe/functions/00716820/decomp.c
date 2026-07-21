
int * __cdecl FUN_00716820(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;

  if (((param_1 != (int *)0x0) && (param_3 < param_2)) && (-1 < param_3)) {
    iVar2 = param_3 + 1;
    do {
      piVar1 = param_1 + 1;
      param_1 = (int *)(*param_1 + (int)piVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return piVar1;
  }
  return (int *)0x0;
}

