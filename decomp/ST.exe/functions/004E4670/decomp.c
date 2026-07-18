
undefined4 __fastcall FUN_004e4670(int param_1)

{
  if (*(int *)(param_1 + 0x4d0) != 0) {
    thunk_FUN_004e4380(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x4d0));
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    thunk_FUN_004d78e0(*(char *)(param_1 + 0x24));
    if (*(uint *)(param_1 + 0x24) == (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x112d)) {
      thunk_FUN_004d8b70((char)*(uint *)(param_1 + 0x24));
    }
  }
  return 0;
}

