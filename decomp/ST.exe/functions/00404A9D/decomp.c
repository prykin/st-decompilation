
undefined4 __thiscall thunk_FUN_004e22f0(void *this,int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = thunk_FUN_004e1f70(this,param_1);
  if ((CONCAT31(extraout_var,bVar1) == 0) && (*(int *)((int)this + param_1 * 0x28 + 0x4d4) != 0)) {
    return 1;
  }
  return 0;
}

