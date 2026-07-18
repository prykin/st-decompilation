
undefined4 __thiscall FUN_00747f68(void *this,int *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x24))(param_1,&param_1);
  if (param_1 == *(int **)((int)this + 100)) {
    uVar1 = 0x80040208;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

