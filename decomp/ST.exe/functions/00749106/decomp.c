
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00749106 -> EXTERNAL:00000019 @ 0074914E | 00749106 -> EXTERNAL:00000019 @ 00749164 |
   00749106 -> EXTERNAL:00000019 @ 0074917C | 00749106 -> EXTERNAL:00000019 @ 007491B4 */

undefined4 FUN_00749106(int param_1,LPCRITICAL_SECTION lpCriticalSection,undefined4 *param_3)

{
  LONG LVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  HANDLE pvVar3;
  undefined4 uVar4;
  LPCRITICAL_SECTION lpCriticalSection_00;
  
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) || (param_3 == (undefined4 *)0x0)) {
    uVar4 = 0x80004003;
  }
  else {
    lpCriticalSection_00 = (LPCRITICAL_SECTION)(-(uint)(param_1 != 0xc) & param_1 + 4U);
    EnterCriticalSection(lpCriticalSection_00);
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    if (lpCriticalSection->RecursionCount == 1) {
      if (*(int *)(param_1 + 0x44) == 0) {
        if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x20)) {
          LVar1 = lpCriticalSection->LockCount;
          *(LONG *)(param_1 + 0x34) = LVar1;
          param_3[1] = LVar1;
          p_Var2 = lpCriticalSection->DebugInfo;
          *(PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0x2c) = p_Var2;
          *param_3 = p_Var2;
          LVar1 = lpCriticalSection->RecursionCount;
          *(LONG *)(param_1 + 0x38) = LVar1;
          param_3[2] = LVar1;
          pvVar3 = lpCriticalSection->OwningThread;
          *(HANDLE *)(param_1 + 0x3c) = pvVar3;
          param_3[3] = pvVar3;
          *(undefined4 *)(param_1 + 0x40) = 1;
          LeaveCriticalSection(lpCriticalSection_00);
          uVar4 = 0;
        }
        else {
          LeaveCriticalSection(lpCriticalSection_00);
          uVar4 = 0x80040210;
        }
      }
      else {
        LeaveCriticalSection(lpCriticalSection_00);
        uVar4 = 0x8004020f;
      }
    }
    else {
      LeaveCriticalSection(lpCriticalSection_00);
      uVar4 = 0x8004020e;
    }
  }
  return uVar4;
}

