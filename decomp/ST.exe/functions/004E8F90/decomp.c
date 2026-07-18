
undefined4 __fastcall FUN_004e8f90(int param_1)

{
  if ((*(int *)(param_1 + 0x4d8) != 0xffff) &&
     (*(undefined4 *)(param_1 + 0x4d8) = 0xffff, *(int *)(param_1 + 0x4e0) != 0)) {
    thunk_FUN_004d0a80(DAT_00800bcc,*(int *)(param_1 + 0x4e4),*(int *)(param_1 + 0x4e8),
                       *(int *)(param_1 + 0x4ec));
    *(undefined4 *)(param_1 + 0x4e0) = 0;
  }
  if (((*(int *)(param_1 + 0x4f8) != 0) && (*(int *)(param_1 + 0x4fc) != 0)) &&
     (*(void **)(param_1 + 0x61b) != (void *)0x0)) {
    thunk_FUN_004e9bb0(*(void **)(param_1 + 0x61b),param_1);
    *(undefined4 *)(param_1 + 0x4f8) = 0;
    *(undefined4 *)(param_1 + 0x4fc) = 0;
  }
  return 0;
}

