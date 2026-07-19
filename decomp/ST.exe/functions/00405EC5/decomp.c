
undefined4 __thiscall thunk_FUN_0068e690(void *this,int param_1)

{
  undefined4 uStack_c;
  int iStack_8;
  
  uStack_c = 0;
  iStack_8 = 0;
  if (param_1 == 0) {
    RaiseInternalException(-6,DAT_007ed77c,s_E____titans_ai_ai_tact_cpp_007d56e0,0x107);
    return 0xfffffffa;
  }
  uStack_c = *(undefined4 *)(param_1 + 0x18);
  iStack_8 = param_1;
  FUN_006ae1c0(*(uint **)((int)this + 0xa5),&uStack_c);
  *(void **)(param_1 + 0x284) = this;
  *(undefined4 *)(param_1 + 0x97) = *(undefined4 *)((int)this + 0x9d);
  return 0;
}

