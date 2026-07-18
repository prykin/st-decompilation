
void __thiscall FUN_00647ce0(void *this,int param_1,undefined4 param_2)

{
  if ((-1 < param_1) && (param_1 < 0x100)) {
    *(undefined4 *)((int)this + param_1 * 4 + 0xde) = param_2;
  }
  return;
}

