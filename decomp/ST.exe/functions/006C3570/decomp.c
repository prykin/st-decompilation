#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void FUN_006c3570(AnonShape_006C3570_37024033 *param_1)

{
  int *piVar1;

  if (param_1 != nullptr) {
    /* ST_CALLSITE[006C358A]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection((LPCRITICAL_SECTION)&param_1[9].field_0040);
    if ((param_1->field_0004 & 0x20000000) != 0) {

      Library::DKW::DV::FUN_006c4110((RecoveredSourceFamily_dvideo *)param_1);
    }
    if ((param_1->field_0004 & 0x40000000) != 0) {

      FUN_006c3f00(param_1);
    }
    if ((HANDLE)param_1->field_0084 != (HANDLE)0x0) {
      /* ST_CALLSITE[006C35BA]: CALL dword ptr [0x0085bb6c] */
      TerminateThread((HANDLE)param_1->field_0084,0);
      param_1->field_0084 = 0;
    }
    piVar1 = (int *)param_1->field_0058;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006C35D0]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1->field_0058 = 0;
    }
    piVar1 = (int *)param_1->field_0054;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006C35E0]: CALL dword ptr [EDX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1->field_0054 = 0;
    }
    if ((int *)param_1->field_0040 != nullptr) {
      FUN_006d4f50((int *)param_1->field_0040);
    }
    param_1->field_0040 = 0;
    if ((int *)param_1->field_0044 != nullptr) {
      FUN_006d4f50((int *)param_1->field_0044);
    }
    param_1->field_0044 = 0;
    param_1->field_0074 = 0;
    param_1->field_0004 = param_1->field_0004 & 0x7ffffffe;
    /* ST_CALLSITE[006C3616]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)&param_1[9].field_0040);
  }
  return;
}

