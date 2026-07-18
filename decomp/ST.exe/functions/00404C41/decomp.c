
void __fastcall thunk_FUN_0065d720(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(short *)(param_1 + 0x7d) != -2) && (DAT_007fa174 != 0)) {
    iVar1 = thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x24)),
                               CONCAT22((short)((uint)param_2 >> 0x10),*(short *)(param_1 + 0x7d)));
    if (iVar1 != 0) {
      thunk_FUN_00423380(iVar1);
      return;
    }
  }
  return;
}

