
undefined4 __thiscall FUN_00647ca0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x100)) {
    return *(undefined4 *)((int)this + param_1 * 4 + 0xde);
  }
  return 1;
}

