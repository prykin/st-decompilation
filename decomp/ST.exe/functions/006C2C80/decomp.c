#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006c2c80(int *param_1)

{
  if (param_1 != nullptr) {
    if (*param_1 != 0) {
      _BinkClose_4(*param_1);
    }
    *param_1 = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)param_1[0xd] + 8))((int *)param_1[0xd]);
    param_1[0xd] = 0;
    param_1[2] = param_1[2] & 0xbfffffff;
  }
  return;
}

