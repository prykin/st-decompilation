
void __fastcall thunk_FUN_0065d6e0(int param_1,undefined4 param_2)

{
  void *this;
  
  if ((*(short *)(param_1 + 0x7d) != -2) && (DAT_007fa174 != 0)) {
    this = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1 >> 8),
                                               *(undefined1 *)(param_1 + 0x24)),
                                      CONCAT22((short)((uint)param_2 >> 0x10),
                                               *(short *)(param_1 + 0x7d)));
    if (this != (void *)0x0) {
      thunk_FUN_004232e0(this,0);
    }
  }
  return;
}

