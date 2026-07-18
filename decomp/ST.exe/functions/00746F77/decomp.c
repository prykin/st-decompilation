
void __fastcall FUN_00746f77(int param_1)

{
  int *piVar1;
  
  if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
    FUN_0072e2b0(*(undefined4 **)(param_1 + 0x3c));
  }
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_0074b777();
  return;
}

