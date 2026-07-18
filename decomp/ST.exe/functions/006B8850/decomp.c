
void FUN_006b8850(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x38);
    if (piVar1 != (int *)0x0) {
      if ((*(uint *)(param_1 + 4) & 0x20000000) != 0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1 + 0x38) = 0;
        return;
      }
      if ((*(uint *)(param_1 + 4) & 0xa0000000) != 0) {
        iVar2 = 0;
        if (0 < *(int *)(param_1 + 0x2c)) {
          do {
            piVar1 = *(int **)(*(int *)(param_1 + 0x38) + iVar2 * 4);
            (**(code **)(*piVar1 + 8))(piVar1);
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(param_1 + 0x2c));
        }
        FUN_006a5e90(*(undefined4 **)(param_1 + 0x38));
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
    }
  }
  return;
}

