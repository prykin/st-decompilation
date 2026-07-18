
void __fastcall thunk_FUN_005c0190(int param_1)

{
  int *piVar1;
  int iStack_8;
  
  iStack_8 = 4;
  *(undefined4 *)(param_1 + 0x29) = 2;
  *(undefined4 *)(param_1 + 0x2d) = 0x20;
  piVar1 = (int *)(param_1 + 0x8f);
  do {
    if (*piVar1 != 0) {
      *(int *)(param_1 + 0x25) = *piVar1;
      *(undefined4 *)(param_1 + 0x31) = 0;
      (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x1d);
    }
    piVar1 = piVar1 + 1;
    iStack_8 = iStack_8 + -1;
  } while (iStack_8 != 0);
  if (*(int *)(param_1 + 0x9f) != 0) {
    *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x9f);
    *(undefined4 *)(param_1 + 0x31) = 0;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x1d);
  }
  return;
}

