#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void FUN_006c4a70(undefined4 *param_1)

{
  if (param_1 != nullptr) {
    FUN_006d46a0((undefined4 *)param_1[7],0);
    FUN_006a5e90((short *)param_1);
  }
  return;
}

