
undefined4 __thiscall
FUN_0074c32d(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x90) == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)((int)this + 0x90) + 0x58))
                      (param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

