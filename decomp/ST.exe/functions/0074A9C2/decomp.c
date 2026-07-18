
int FUN_0074a9c2(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x7c);
  EnterCriticalSection(lpCriticalSection);
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x94);
  EnterCriticalSection(lpCriticalSection_00);
  iVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x38))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x68))();
    if (-1 < iVar1) {
      iVar1 = FUN_007482a5();
    }
  }
  LeaveCriticalSection(lpCriticalSection_00);
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}

