
undefined4 __fastcall FUN_0074a6cb(void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0x94);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)param_1 + 100) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0;
  }
  else {
    *(undefined4 *)((int)param_1 + 0xc0) = 0;
    if (*(int **)((int)param_1 + 0x50) != (int *)0x0) {
      FUN_0074f107(*(int **)((int)param_1 + 0x50));
    }
    *(undefined4 *)((int)param_1 + 0x74) = 1;
    uVar1 = FUN_00747406(param_1,1,0,-(uint)(param_1 != (void *)0x0) & (int)param_1 + 0xcU);
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}

