
undefined4 __fastcall FUN_0074837c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return 0;
}

