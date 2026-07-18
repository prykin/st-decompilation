
undefined4 __fastcall FUN_0074f0d8(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return 0;
}

