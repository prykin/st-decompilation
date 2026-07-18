
undefined4 __thiscall thunk_FUN_004dd6c0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x4d4) == 0) {
    *(undefined4 *)((int)this + 0x4d4) = param_1;
    return 1;
  }
  return 0;
}

