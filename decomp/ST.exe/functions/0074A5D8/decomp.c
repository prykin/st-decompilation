
undefined4 __fastcall FUN_0074a5d8(int param_1)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  return 0;
}

