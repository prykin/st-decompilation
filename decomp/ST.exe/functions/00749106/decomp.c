
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00749106 -> EXTERNAL:00000019 @ 0074914E | 00749106 -> EXTERNAL:00000019 @ 00749164 |
   00749106 -> EXTERNAL:00000019 @ 0074917C | 00749106 -> EXTERNAL:00000019 @ 007491B4 */

undefined4
FUN_00749106(AnonShape_00749106_79800343 *param_1,LPCRITICAL_SECTION lpCriticalSection,
            undefined4 *param_3)

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
    lpCriticalSection_00 =
         (LPCRITICAL_SECTION)
         (-(uint)(param_1 != (AnonShape_00749106_79800343 *)&DAT_0000000c) &
         (uint)&param_1->field_0x4);
    EnterCriticalSection(lpCriticalSection_00);
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    if (lpCriticalSection->RecursionCount == 1) {
      if (param_1->field_0044 == 0) {
        if (param_1->field_0030 == param_1->field_0020) {
          LVar1 = lpCriticalSection->LockCount;
          param_1->field_0034 = LVar1;
          param_3[1] = LVar1;
          p_Var2 = lpCriticalSection->DebugInfo;
          param_1->field_002C = p_Var2;
          *param_3 = p_Var2;
          LVar1 = lpCriticalSection->RecursionCount;
          param_1->field_0038 = LVar1;
          param_3[2] = LVar1;
          pvVar3 = lpCriticalSection->OwningThread;
          param_1->field_003C = pvVar3;
          param_3[3] = pvVar3;
          param_1->field_0040 = 1;
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

