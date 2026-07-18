
void __fastcall FUN_00614bf0(int param_1)

{
  if (*(int *)(param_1 + 0x2dd) != 0) {
    FUN_006ab060((undefined4 *)(param_1 + 0x2dd));
  }
  if (*(int *)(param_1 + 0x2e5) != 0) {
    FUN_006ab060((undefined4 *)(param_1 + 0x2e5));
  }
  *(undefined4 *)(param_1 + 0x2d5) = 0;
  if (*(int *)(param_1 + 0x252) != 0) {
    thunk_FUN_004ad310(*(int *)(param_1 + 0x252));
    FUN_0072e2b0(*(undefined4 **)(param_1 + 0x252));
    *(undefined4 *)(param_1 + 0x252) = 0;
  }
  return;
}

