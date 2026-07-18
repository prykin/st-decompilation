
int FUN_00749339(int *param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection =
       (LPCRITICAL_SECTION)(-(uint)(param_1 + -3 != (int *)0x0) & (uint)(param_1 + 1));
  EnterCriticalSection(lpCriticalSection);
  if (param_1[0x11] == 0) {
    param_1[0x11] = 1;
    if (param_1[0x12] == 0) {
      iVar1 = (**(code **)(param_1[-3] + 0x14))();
      if (iVar1 < 0) {
        param_1[0x11] = 0;
        LeaveCriticalSection(lpCriticalSection);
        return iVar1;
      }
      (**(code **)(*param_1 + 4))(param_1);
    }
    else {
      param_1[0x12] = 0;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

