
int __thiscall FUN_00711530(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar2 = FUN_00711110(this,(uint *)*param_1);
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar2 = *piVar1;
  }
  return iVar3;
}

