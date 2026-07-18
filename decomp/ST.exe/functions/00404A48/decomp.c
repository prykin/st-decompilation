
void __fastcall thunk_FUN_004dea40(int param_1)

{
  if (*(int *)(param_1 + 0x4d0) != 0) {
    *(int *)(param_1 + 0x4d0) = *(int *)(param_1 + 0x4d0) + -1;
    *(int *)((int)&DAT_007f55f6 + *(int *)(param_1 + 0x24) * 0xa62) =
         *(int *)((int)&DAT_007f55f6 + *(int *)(param_1 + 0x24) * 0xa62) + -1;
  }
  return;
}

