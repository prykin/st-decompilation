
int __thiscall FUN_00747e65(void *this,int *param_1,char *param_2)

{
  int iVar1;
  int local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  if ((param_2 != (char *)0x0) && (iVar1 = FUN_0074bb9a(param_2), iVar1 == 0)) {
    iVar1 = FUN_00747ce5(this,param_1);
    return iVar1;
  }
  local_c = -0x7ffbfdf9;
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,&local_8);
  if (-1 < iVar1) {
    iVar1 = FUN_00747d92(this,param_1,param_2,local_8);
    (**(code **)(*local_8 + 8))(local_8);
    if (-1 < iVar1) {
      return 0;
    }
    if (((iVar1 != -0x7fffbffb) && (iVar1 != -0x7ff8ffa9)) && (iVar1 != -0x7ffbfdd6)) {
      local_c = iVar1;
    }
  }
  iVar1 = (**(code **)(*(int *)((int)this + 0xc) + 0x30))((int)this + 0xc,&local_8);
  if (iVar1 < 0) {
    return local_c;
  }
  iVar1 = FUN_00747d92(this,param_1,param_2,local_8);
  (**(code **)(*local_8 + 8))(local_8);
  if (-1 < iVar1) {
    return 0;
  }
  if (iVar1 == -0x7fffbffb) {
    return local_c;
  }
  if (iVar1 == -0x7ff8ffa9) {
    return local_c;
  }
  if (iVar1 != -0x7ffbfdd6) {
    return iVar1;
  }
  return local_c;
}

