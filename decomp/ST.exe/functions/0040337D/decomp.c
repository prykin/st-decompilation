
void __fastcall thunk_FUN_005c5eb0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iStack_8;
  
  iVar1 = 7;
  *(undefined4 *)(param_1 + 0x1c63) = 0;
  *(undefined4 *)(param_1 + 0x29) = 2;
  *(undefined4 *)(param_1 + 0x2d) = 0x20;
  *(undefined4 *)(param_1 + 0x31) = 0;
  piVar2 = (int *)(param_1 + 0x1f60);
  do {
    if (*piVar2 != 0) {
      *(int *)(param_1 + 0x25) = *piVar2;
      (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x1d);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 0x215d) != 0) {
    *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x215d);
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x1d);
  }
  piVar2 = (int *)(param_1 + 0x2125);
  iVar1 = 0xe;
  do {
    if (*piVar2 != 0) {
      *(int *)(param_1 + 0x25) = *piVar2;
      (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x1d);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar2 = (int *)(param_1 + 0x1f8c);
  iStack_8 = 10;
  do {
    iVar1 = 8;
    do {
      if (*piVar2 != 0) {
        *(int *)(param_1 + 0x25) = *piVar2;
        (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x1d);
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iStack_8 = iStack_8 + -1;
  } while (iStack_8 != 0);
  if (*(int *)(param_1 + 0x211d) != 0) {
    *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x211d);
    *(undefined4 *)(param_1 + 0x31) = 0;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x1d);
  }
  if (*(int *)(DAT_0081176c + 0x389) != 0) {
    *(int *)(param_1 + 0x25) = *(int *)(DAT_0081176c + 0x389);
    *(undefined4 *)(param_1 + 0x2d) = 0x20;
    *(undefined4 *)(param_1 + 0x31) = 0;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x1d);
  }
  return;
}

