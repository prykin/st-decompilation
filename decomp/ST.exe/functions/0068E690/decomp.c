
undefined4 __thiscall FUN_0068e690(void *this,int param_1)

{
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  if (param_1 == 0) {
    FUN_006a5e40(-6,DAT_007ed77c,0x7d56e0,0x107);
    return 0xfffffffa;
  }
  local_c = *(undefined4 *)(param_1 + 0x18);
  local_8 = param_1;
  FUN_006ae1c0(*(uint **)((int)this + 0xa5),&local_c);
  *(void **)(param_1 + 0x284) = this;
  *(undefined4 *)(param_1 + 0x97) = *(undefined4 *)((int)this + 0x9d);
  return 0;
}

