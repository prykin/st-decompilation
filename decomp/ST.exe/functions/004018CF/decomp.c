
uint * __fastcall thunk_FUN_0065da10(int param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  
  if ((*(short *)(param_1 + 0x7d) != -2) && (DAT_007fa174 != 0)) {
    iVar1 = thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x24)),
                               CONCAT22((short)((uint)param_2 >> 0x10),*(short *)(param_1 + 0x7d)));
    if (iVar1 != 0) {
      puVar2 = thunk_FUN_004233e0(iVar1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}

