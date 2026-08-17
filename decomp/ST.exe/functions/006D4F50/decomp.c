#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void FUN_006d4f50(int *param_1)

{
  if (param_1 != nullptr) {
    /* ST_CALLSITE[006D4F5E]: CALL dword ptr [EAX + 0xc] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0xc))(1);
  }
  return;
}

