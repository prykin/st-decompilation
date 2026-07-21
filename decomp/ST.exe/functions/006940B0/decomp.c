
void __thiscall FUN_006940b0(void *this,int param_1)

{
  int iVar1;

  iVar1 = thunk_FUN_00693e60(this,param_1);
  if (iVar1 != 0) {
    thunk_FUN_00693cb0(this,param_1);
    *(char *)((int)this + 0x10) = *(char *)((int)this + 0x10) + -1;
    thunk_FUN_00694100(this);
  }
  return;
}

