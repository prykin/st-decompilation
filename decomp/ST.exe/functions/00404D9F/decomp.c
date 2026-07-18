
undefined4 __fastcall thunk_FUN_004d9b20(int param_1)

{
  if (*(int *)(param_1 + 0x4d0) != 0) {
    thunk_FUN_004d87b0(*(char *)(param_1 + 0x24),*(int *)(param_1 + 0x4d0));
    thunk_FUN_004d78e0(*(char *)(param_1 + 0x24));
    if (*(uint *)(param_1 + 0x24) == (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x112d)) {
      thunk_FUN_004d8b70((char)*(uint *)(param_1 + 0x24));
    }
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  }
  return 0;
}

