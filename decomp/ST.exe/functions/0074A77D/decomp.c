
undefined4 __fastcall FUN_0074a77d(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  int iVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x25);
  EnterCriticalSection(lpCriticalSection);
  if (param_1[0x19] != 1) {
    param_1[0x19] = 1;
    timeBeginPeriod(1);
    (**(code **)(*param_1 + 0x40))();
    if (param_1[0x1b] == 0) {
      uVar1 = (**(code **)(*param_1 + 0x60))();
      LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
    iVar2 = (**(code **)(*param_1 + 0x54))(param_1[0x1b]);
    if (iVar2 == 0) {
      SetEvent((HANDLE)param_1[0x15]);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

