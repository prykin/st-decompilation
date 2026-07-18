
undefined4 __thiscall thunk_FUN_004dbb10(void *this,int param_1)

{
  if (((*(int *)(param_1 + 0x4c0) == 0) && (*(int *)(param_1 + 0x5ac) != 0x6d)) &&
     ((*(int *)((int)this + 0x4d0) == 0 || (*(int *)((int)this + 0x4d4) == 0)))) {
    return 1;
  }
  return 0;
}

