
uint __thiscall thunk_FUN_00505070(void *this,byte param_1)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_005050b0(this,param_1);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)*(byte *)((int)this + (uVar1 * 3 + 0x609) * 2);
  }
  return uVar1;
}

