
void __fastcall FUN_00694c80(int param_1)

{
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    thunk_FUN_00694b90(param_1);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

