
void __fastcall FUN_0074ffd2(int param_1)

{
  int *piVar1;
  int iVar2;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x20);
  while (local_8 != 0) {
    iVar2 = FUN_0074dec2(&local_8);
    (**(code **)(*(int *)(iVar2 + 0xc) + 8))(iVar2 + 0xc);
  }
  FUN_0074de91((undefined4 *)(param_1 + 0x20));
  local_8 = *(int *)(param_1 + 0x38);
  while (local_8 != 0) {
    iVar2 = FUN_0074dec2(&local_8);
    (**(code **)(*(int *)(iVar2 + 0xc) + 8))(iVar2 + 0xc);
  }
  FUN_0074de91((undefined4 *)(param_1 + 0x38));
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_1 + 0x54) != 0) {
      (**(code **)(*piVar1 + 0x18))(piVar1,*(int *)(param_1 + 0x54));
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    (**(code **)(**(int **)(param_1 + 0x60) + 8))(*(int **)(param_1 + 0x60));
  }
  FUN_0074d204((undefined4 *)(param_1 + 0x50));
  FUN_0074de7f((undefined4 *)(param_1 + 0x38));
  FUN_0074de7f((undefined4 *)(param_1 + 0x20));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}

