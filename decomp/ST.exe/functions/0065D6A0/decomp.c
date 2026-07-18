
void __fastcall FUN_0065d6a0(int param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  void *this;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),*(short *)(param_1 + 0x7d));
  if ((*(short *)(param_1 + 0x7d) != -2) && (DAT_007fa174 != 0)) {
    this = (void *)thunk_FUN_0042b760(CONCAT31((int3)(uVar1 >> 8),*(undefined1 *)(param_1 + 0x24)),
                                      uVar1);
    if (this != (void *)0x0) {
      thunk_FUN_004232e0(this,param_1);
    }
  }
  return;
}

