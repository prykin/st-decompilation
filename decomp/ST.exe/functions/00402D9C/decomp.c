
undefined4 __fastcall thunk_FUN_004e4b10(int param_1)

{
  if ((*(int *)(param_1 + 0x245) == 0) && (*(int *)(param_1 + 0x4d4) < 0x28)) {
    if (*(int *)(param_1 + 0x4d8) + 0x1cU <= *(uint *)(DAT_00802a38 + 0xe4)) {
      *(uint *)(param_1 + 0x4d8) = *(uint *)(DAT_00802a38 + 0xe4);
      *(int *)(param_1 + 0x4d4) = *(int *)(param_1 + 0x4d4) + 1;
    }
  }
  return 0;
}

