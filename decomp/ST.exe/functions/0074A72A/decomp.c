
undefined4 __fastcall FUN_0074a72a(int param_1)

{
  FUN_0074a760(param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  return 0;
}

