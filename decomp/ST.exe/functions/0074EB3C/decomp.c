
int __thiscall FUN_0074eb3c(void *this,undefined *param_1,undefined4 param_2)

{
  int iVar1;
  int *local_8;
  
  local_8 = this;
  iVar1 = FUN_0074e8df(this,(int *)&local_8);
  if (-1 < iVar1) {
    iVar1 = (*(code *)param_1)(local_8,param_2);
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar1;
}

