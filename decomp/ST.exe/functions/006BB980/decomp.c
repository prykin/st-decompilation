#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=20, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006bb980(AnonShape_006BB980_E41494A1 *param_1)

{
  if (param_1->field_0474 != 0) {
    /* ST_CALLSITE[006BB999]: CALL dword ptr [ECX + 0x80] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1->field_0040 + 0x80))(param_1->field_0040,0);
    param_1->field_0474 = 0;
    param_1->field_0478 = 0;
    if ((param_1->field_0008 & 0x4000000) != 0) {
      /* ST_CALLSITE[006BB9C4]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection((LPCRITICAL_SECTION)&param_1[1].field_0x74);
    }
  }
  return;
}

