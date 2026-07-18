
int FUN_0074ebd8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0074e8df(param_1,(int *)&param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

