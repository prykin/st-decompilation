
undefined4 FUN_0074aa28(int param_1)

{
  undefined4 uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x7c);
  EnterCriticalSection(lpCriticalSection_00);
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x94);
  EnterCriticalSection(lpCriticalSection);
  FUN_00748946(param_1);
  (**(code **)(**(int **)(param_1 + 0xcc) + 0x84))();
  LeaveCriticalSection(lpCriticalSection);
  uVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 100))();
  LeaveCriticalSection(lpCriticalSection_00);
  return uVar1;
}

