
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00747F94 -> EXTERNAL:00000019 @ 00748046 | 00747F94 -> EXTERNAL:00000019 @ 00748089 |
   00747F94 -> EXTERNAL:00000019 @ 00748096 */

int * FUN_00747f94(LPCRITICAL_SECTION lpCriticalSection,int *param_2,int param_3)

{
  HANDLE *ppvVar1;
  LPCRITICAL_SECTION lpCriticalSection_00;
  int *piVar2;

  if ((param_2 == (int *)0x0) || (param_3 == 0)) {
    param_2 = (int *)0x80004003;
  }
  else {
    lpCriticalSection_00 = (LPCRITICAL_SECTION)lpCriticalSection[3].SpinCount;
    EnterCriticalSection(lpCriticalSection_00);
    if (lpCriticalSection->OwningThread == (HANDLE)0x0) {
      if (*(int *)(lpCriticalSection[4].LockCount + 0x14) == 0) {
        ppvVar1 = &lpCriticalSection[-1].OwningThread;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        piVar2 = (int *)(**(code **)((int)lpCriticalSection[-1].OwningThread + 0x28))(param_2);
        if ((int)piVar2 < 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)((int)*ppvVar1 + 0x2c))();
          param_2 = piVar2;
        }
        else {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          piVar2 = (int *)(**(code **)((int)*ppvVar1 + 0x20))(param_3);
          if (piVar2 == (int *)0x0) {
            lpCriticalSection->OwningThread = param_2;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*param_2 + 4))(param_2);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)((int)*ppvVar1 + 0x24))(param_3);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            piVar2 = (int *)(**(code **)((int)*ppvVar1 + 0x30))(param_2);
            if ((int)piVar2 < 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(*(int *)lpCriticalSection->OwningThread + 8))
                        (lpCriticalSection->OwningThread);
              lpCriticalSection->OwningThread = (HANDLE)0x0;
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)((int)*ppvVar1 + 0x2c))();
              LeaveCriticalSection(lpCriticalSection_00);
              return piVar2;
            }
            LeaveCriticalSection(lpCriticalSection_00);
            return (int *)0x0;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)((int)*ppvVar1 + 0x2c))();
          if (((-1 < (int)piVar2) || (piVar2 == (int *)0x80004005)) ||
             (param_2 = piVar2, piVar2 == (int *)0x80070057)) {
            param_2 = (int *)0x8004022a;
          }
        }
        LeaveCriticalSection(lpCriticalSection_00);
      }
      else {
        LeaveCriticalSection(lpCriticalSection_00);
        param_2 = (int *)0x80040224;
      }
    }
    else {
      LeaveCriticalSection(lpCriticalSection_00);
      param_2 = (int *)0x80040204;
    }
  }
  return param_2;
}

