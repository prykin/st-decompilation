
undefined4 __thiscall FUN_004dd700(void *this,int param_1)

{
  if (*(int *)((int)this + 0x4d4) == param_1) {
    *(undefined4 *)((int)this + 0x4d4) = 0;
    return 1;
  }
  return 0;
}

