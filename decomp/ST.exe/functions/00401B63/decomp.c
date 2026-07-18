
void __fastcall thunk_FUN_005bba40(int param_1)

{
  *(undefined4 *)(param_1 + 0x1a65) = 0;
  *(undefined4 *)(param_1 + 0x29) = 2;
  *(undefined4 *)(param_1 + 0x2d) = 0x20;
  if (*(int *)(param_1 + 0x1a73) != 0) {
    *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x1a73);
    *(undefined4 *)(param_1 + 0x31) = 0;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x1d);
  }
  return;
}

