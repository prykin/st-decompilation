
undefined4 __fastcall FUN_004c5de0(int param_1)

{
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(int *)(param_1 + 0x4d4) = *(int *)(DAT_00802a38 + 0xe4) + 0x7d;
  if ((*(int *)(param_1 + 0x231) == 1) || (*(int *)(param_1 + 0x231) == 3)) {
    thunk_FUN_004c5f30(param_1);
  }
  return 0;
}

