
undefined4 __fastcall FUN_00750385(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_00750287(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return 0;
}

