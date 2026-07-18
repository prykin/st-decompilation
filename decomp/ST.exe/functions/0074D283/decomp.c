
int __fastcall FUN_0074d283(int param_1)

{
  FUN_0074d1ea((void *)(param_1 + 4),1);
  FUN_0074d1ea((void *)(param_1 + 8),0);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}

