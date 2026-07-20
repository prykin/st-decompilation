
/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 007494D1 -> EXTERNAL:00000019 @ 00749535 | 007494D1 -> EXTERNAL:00000019 @ 0074954D |
   007494D1 -> EXTERNAL:00000019 @ 007495A0 | 007494D1 -> EXTERNAL:00000019 @ 007495AD */

undefined4
FUN_007494d1(AnonShape_007494D1_ECEF44C3 *param_1,undefined4 *param_2,
            LPCRITICAL_SECTION lpCriticalSection)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  LONG LVar3;
  HANDLE pvVar4;
  AnonShape_007494D1_ECEF44C3 *pAVar5;
  undefined4 uVar6;
  LPCRITICAL_SECTION lpCriticalSection_00;
  _SYSTEM_INFO local_28;
  
  pAVar5 = param_1;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    uVar6 = 0x80004003;
  }
  else {
    lpCriticalSection_00 =
         (LPCRITICAL_SECTION)
         (-(uint)(param_1 != (AnonShape_007494D1_ECEF44C3 *)&DAT_0000000c) &
         (uint)&param_1->field_0x4);
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
    else if (param_1->field_0044 == 1) {
      LeaveCriticalSection(lpCriticalSection_00);
      uVar6 = 0x8004020f;
    }
    else if (param_1->field_0020 < param_1->field_0030) {
      LeaveCriticalSection(lpCriticalSection_00);
      uVar6 = 0x80040210;
    }
    else {
      param_1 = (AnonShape_007494D1_ECEF44C3 *)(param_2[1] + param_2[3]);
      if ((int)param_1 % iVar1 != 0) {
        param_1 = (AnonShape_007494D1_ECEF44C3 *)((int)param_1 + (iVar1 - (int)param_1 % iVar1));
      }
      iVar1 = param_2[3];
      *(int *)&pAVar5->field_0x34 = (int)param_1 - iVar1;
      lpCriticalSection->LockCount = (int)param_1 - iVar1;
      p_Var2 = (PRTL_CRITICAL_SECTION_DEBUG)*param_2;
      *(PRTL_CRITICAL_SECTION_DEBUG *)&pAVar5->field_0x2c = p_Var2;
      lpCriticalSection->DebugInfo = p_Var2;
      LVar3 = param_2[2];
      *(LONG *)&pAVar5->field_0x38 = LVar3;
      lpCriticalSection->RecursionCount = LVar3;
      pvVar4 = (HANDLE)param_2[3];
      *(HANDLE *)&pAVar5->field_0x3c = pvVar4;
      lpCriticalSection->OwningThread = pvVar4;
      *(undefined4 *)&pAVar5->field_0x40 = 1;
      LeaveCriticalSection(lpCriticalSection_00);
      uVar6 = 0;
    }
  }
  return uVar6;
}

