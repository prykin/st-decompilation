
undefined4 __fastcall FUN_004d8f80(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4ec) < 100) {
    if (*(int *)(param_1 + 0x4d8) + 0x4bU <= *(uint *)(DAT_00802a38 + 0xe4)) {
      iVar1 = *(int *)(param_1 + 0x4ec) + 1;
      *(uint *)(param_1 + 0x4d8) = *(uint *)(DAT_00802a38 + 0xe4);
      *(int *)(param_1 + 0x4ec) = iVar1;
      if ((99 < iVar1) && (*(undefined4 *)(param_1 + 0x4ec) = 100, *(int *)(param_1 + 0x4f0) != 0))
      {
        *(undefined4 *)(param_1 + 0x261) = 1;
      }
    }
  }
  return 0;
}

