
undefined4 __thiscall FUN_00552160(void *this,char param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(char *)((int)this + 0x184) != param_1) &&
     (uVar1 = thunk_FUN_0053e920(this,param_1), param_1 != '\0')) {
    thunk_FUN_00551460(this,param_2);
    thunk_FUN_00551ba0();
  }
  return uVar1;
}

