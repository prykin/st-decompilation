
undefined2 __fastcall thunk_FUN_0065d9c0(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  if ((*(short *)(param_1 + 0x7d) != -2) && (DAT_007fa174 != 0)) {
    iVar2 = thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x24)),
                               CONCAT22((short)((uint)param_2 >> 0x10),*(short *)(param_1 + 0x7d)));
    if (iVar2 != 0) {
      uVar1 = thunk_FUN_004233c0(iVar2);
      return uVar1;
    }
  }
  return 0;
}

