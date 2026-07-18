
undefined4 FUN_0074896b(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
  EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 0;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

