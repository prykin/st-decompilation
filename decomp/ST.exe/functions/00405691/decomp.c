
undefined4 __thiscall thunk_FUN_004e18e0(void *this,int param_1)

{
  if (((*(int *)((int)this + 0x4d8) == param_1) && (*(int *)((int)this + 0x4d0) == 1)) &&
     (*(int *)((int)this + 0x4e4) != 0)) {
    *(undefined4 *)((int)this + 0x4e4) = 0;
  }
  return 0;
}

