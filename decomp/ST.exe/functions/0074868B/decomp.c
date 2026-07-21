
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0074868B -> EXTERNAL:00000019 @ 007486CE */

undefined4
FUN_0074868b(AnonShape_0074868B_7E9383CB *param_1,LPCRITICAL_SECTION lpCriticalSection,
            undefined1 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection_00;
  int *piVar1;
  undefined4 uVar2;

  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    lpCriticalSection_00 = *(LPCRITICAL_SECTION *)(param_1 + -4);
    EnterCriticalSection(lpCriticalSection_00);
    piVar1 = (int *)param_1->field_0004;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)lpCriticalSection->DebugInfo->CriticalSection)(lpCriticalSection);
    param_1->field_0004 = lpCriticalSection;
    if (piVar1 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    param_1->field_0008 = param_3;
    LeaveCriticalSection(lpCriticalSection_00);
    uVar2 = 0;
  }
  return uVar2;
}

