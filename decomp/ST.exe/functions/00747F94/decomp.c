#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00747F94 -> EXTERNAL:00000019 @ 00748046 | 00747F94 -> EXTERNAL:00000019 @ 00748089 |
   00747F94 -> EXTERNAL:00000019 @ 00748096 */

int * FUN_00747f94(LPCRITICAL_SECTION lpCriticalSection,int *param_2,int param_3)

{
  HANDLE *ppvVar1;
  LPCRITICAL_SECTION lpCriticalSection_00;
  int *piVar2;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_2 == nullptr) || (param_3 == 0)) {
    param_2 = (int *)0x80004003;
  }
  else {
    lpCriticalSection_00 = (LPCRITICAL_SECTION)lpCriticalSection[3].SpinCount;
    /* ST_CALLSITE[00747FBB]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection(lpCriticalSection_00);
    if (lpCriticalSection->OwningThread == (HANDLE)0x0) {
      if (*(int *)(lpCriticalSection[4].LockCount + 0x14) == 0) {
        ppvVar1 = &lpCriticalSection[-1].OwningThread;
        /* ST_CALLSITE[00747FFB]: CALL dword ptr [EAX + 0x28] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        piVar2 = (int *)(**(code **)((int)lpCriticalSection[-1].OwningThread + 0x28))(param_2);
        if ((int)piVar2 < 0) {
          /* ST_CALLSITE[00748009]: CALL dword ptr [EAX + 0x2c] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)((int)*ppvVar1 + 0x2c))();
          param_2 = piVar2;
        }
        else {
          /* ST_CALLSITE[00748013]: CALL dword ptr [EAX + 0x20] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          piVar2 = (int *)(**(code **)((int)*ppvVar1 + 0x20))(param_3);
          if (piVar2 == nullptr) {
            lpCriticalSection->OwningThread = param_2;
            /* ST_CALLSITE[00748057]: CALL dword ptr [EAX + 0x4] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*param_2 + 4))(param_2);
            /* ST_CALLSITE[00748061]: CALL dword ptr [EAX + 0x24] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)((int)*ppvVar1 + 0x24))(param_3);
            /* ST_CALLSITE[00748069]: CALL dword ptr [EAX + 0x30] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            piVar2 = (int *)(**(code **)((int)*ppvVar1 + 0x30))(param_2);
            if ((int)piVar2 < 0) {
              /* ST_CALLSITE[00748078]: CALL dword ptr [ECX + 0x8] */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)(*(int *)lpCriticalSection->OwningThread + 8))
                        (lpCriticalSection->OwningThread);
              lpCriticalSection->OwningThread = (HANDLE)0x0;
              /* ST_CALLSITE[00748083]: CALL dword ptr [EAX + 0x2c] */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)((int)*ppvVar1 + 0x2c))();
              /* ST_CALLSITE[00748089]: CALL dword ptr [0x0085bb90] */
              LeaveCriticalSection(lpCriticalSection_00);
              return piVar2;
            }
            /* ST_CALLSITE[00748096]: CALL dword ptr [0x0085bb90] */
            LeaveCriticalSection(lpCriticalSection_00);
            return nullptr;
          }
          /* ST_CALLSITE[00748021]: CALL dword ptr [EAX + 0x2c] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)((int)*ppvVar1 + 0x2c))();
          if (((-1 < (int)piVar2) || (piVar2 == (int *)0x80004005)) ||
             (param_2 = piVar2, piVar2 == (int *)0x80070057)) {
            param_2 = (int *)0x8004022a;
          }
        }
        /* ST_CALLSITE[00748046]: CALL dword ptr [0x0085bb90] */
        LeaveCriticalSection(lpCriticalSection_00);
      }
      else {
        /* ST_CALLSITE[00747FE2]: CALL dword ptr [0x0085bb90] */
        LeaveCriticalSection(lpCriticalSection_00);
        param_2 = (int *)0x80040224;
      }
    }
    else {
      /* ST_CALLSITE[00747FC8]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(lpCriticalSection_00);
      param_2 = (int *)0x80040204;
    }
  }
  return param_2;
}

