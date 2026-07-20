
/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 007494D1 -> EXTERNAL:00000019 @ 00749535 | 007494D1 -> EXTERNAL:00000019 @ 0074954D |
   007494D1 -> EXTERNAL:00000019 @ 007495A0 | 007494D1 -> EXTERNAL:00000019 @ 007495AD */

undefined4 FUN_007494d1(int param_1,undefined4 *param_2,LPCRITICAL_SECTION lpCriticalSection)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  LONG LVar3;
  HANDLE pvVar4;
  int iVar5;
  undefined4 uVar6;
  LPCRITICAL_SECTION lpCriticalSection_00;
  _SYSTEM_INFO local_28;
  
  iVar5 = param_1;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    uVar6 = 0x80004003;
  }
  else {
    lpCriticalSection_00 = (LPCRITICAL_SECTION)(-(uint)(param_1 != 0xc) & param_1 + 4U);
    EnterCriticalSection(lpCriticalSection_00);
    lpCriticalSection->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    lpCriticalSection->LockCount = 0;
    lpCriticalSection->RecursionCount = 0;
    lpCriticalSection->OwningThread = (HANDLE)0x0;
    GetSystemInfo(&local_28);
    iVar1 = param_2[2];
    if ((iVar1 == 0) || ((local_28.dwAllocationGranularity & iVar1 - 1U) != 0)) {
      LeaveCriticalSection(lpCriticalSection_00);
      uVar6 = 0x8004020e;
    }
    else if (*(int *)(param_1 + 0x44) == 1) {
      LeaveCriticalSection(lpCriticalSection_00);
      uVar6 = 0x8004020f;
    }
    else if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x30)) {
      LeaveCriticalSection(lpCriticalSection_00);
      uVar6 = 0x80040210;
    }
    else {
      param_1 = param_2[1] + param_2[3];
      if (param_1 % iVar1 != 0) {
        param_1 = param_1 + (iVar1 - param_1 % iVar1);
      }
      iVar1 = param_2[3];
      *(int *)(iVar5 + 0x34) = param_1 - iVar1;
      lpCriticalSection->LockCount = param_1 - iVar1;
      p_Var2 = (PRTL_CRITICAL_SECTION_DEBUG)*param_2;
      *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar5 + 0x2c) = p_Var2;
      lpCriticalSection->DebugInfo = p_Var2;
      LVar3 = param_2[2];
      *(LONG *)(iVar5 + 0x38) = LVar3;
      lpCriticalSection->RecursionCount = LVar3;
      pvVar4 = (HANDLE)param_2[3];
      *(HANDLE *)(iVar5 + 0x3c) = pvVar4;
      lpCriticalSection->OwningThread = pvVar4;
      *(undefined4 *)(iVar5 + 0x40) = 1;
      LeaveCriticalSection(lpCriticalSection_00);
      uVar6 = 0;
    }
  }
  return uVar6;
}

