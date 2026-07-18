
void __fastcall thunk_FUN_00694c30(int param_1)

{
  if ((*(int *)(param_1 + 0x10) != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    thunk_FUN_00694be0(param_1);
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  thunk_FUN_006a0150(param_1);
  return;
}

