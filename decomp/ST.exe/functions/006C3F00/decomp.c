
undefined4 FUN_006c3f00(int param_1)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x508));
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x50);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  FUN_006c3500(param_1);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xbffffffe;
  FUN_006c3570(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x508));
  return 0;
}

