
void __fastcall thunk_FUN_005e9970(int param_1)

{
  *(undefined4 *)(param_1 + 0x1a60) = 1;
  *(undefined4 *)(param_1 + 0x29) = 2;
  *(undefined4 *)(param_1 + 0x2d) = 0x20;
  if (*(int *)(DAT_0081176c + 0x389) != 0) {
    *(int *)(param_1 + 0x25) = *(int *)(DAT_0081176c + 0x389);
    *(undefined4 *)(param_1 + 0x31) = 1;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x1d);
  }
  if (*(int *)(DAT_0081176c + 0x550) != 0) {
    *(int *)(param_1 + 0x25) = *(int *)(DAT_0081176c + 0x550);
    *(undefined4 *)(param_1 + 0x31) = 1;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x1d);
  }
  if (*(int *)(DAT_0081176c + 0x54c) != 0) {
    *(int *)(param_1 + 0x25) = *(int *)(DAT_0081176c + 0x54c);
    *(undefined4 *)(param_1 + 0x2d) = 0x29;
    *(undefined4 *)(param_1 + 0x31) = 9;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x1d);
  }
  return;
}

