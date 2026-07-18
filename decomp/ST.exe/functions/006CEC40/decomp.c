
void FUN_006cec40(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x34);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x6c))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0x40);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x6c))(piVar1);
      if (iVar2 == -0x7789fdb5) {
        FUN_006cecb0(param_1,1);
      }
    }
    piVar1 = *(int **)(param_1 + 0x44);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x6c))(piVar1);
      if (iVar2 == -0x7789fdb5) {
        FUN_006cecb0(param_1,0);
      }
    }
    piVar1 = *(int **)(param_1 + 0x48);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x6c))(piVar1);
    }
  }
  return;
}

