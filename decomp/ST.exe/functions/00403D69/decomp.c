
undefined4 __thiscall thunk_FUN_004dd7c0(void *this,int param_1,int param_2)

{
  int *piVar1;
  
  if (((*(int *)((int)this + 0x4d4) == param_1) && (0 < param_2)) && (param_2 < 0x29)) {
    piVar1 = (int *)((int)this + param_2 * 4 + 0x4dc);
    *piVar1 = *piVar1 + 1;
  }
  return 0;
}

