
void __thiscall FUN_0074a844(void *this,int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)(param_1,&DAT_007a1ae0,&param_1);
  if (-1 < iVar1) {
    (**(code **)(*param_1 + 0xc))(param_1,0x19,param_2,0);
    (**(code **)(*param_1 + 8))(param_1);
  }
  FUN_00747406(this,0x19,param_2,0);
  return;
}

