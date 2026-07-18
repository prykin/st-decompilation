
undefined4 __thiscall FUN_00417ee0(void *this,short param_1)

{
  if ((int)(param_1 / *(short *)((int)this + 0x86)) * (int)*(short *)((int)this + 0x86) -
      (int)param_1 != 0) {
    return 0xffffffff;
  }
  *(short *)((int)this + 0x6c) = param_1;
  return 0;
}

