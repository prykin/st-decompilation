#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void FUN_006ba7b0(AnonShape_006BA7B0_E82BD3A2 *param_1,undefined4 param_2,undefined4 param_3,
                 undefined4 *param_4)

{
  if (param_4 != nullptr) {
    *param_4 = param_1->field_0010;
    param_4[1] = param_1->field_0014;
  }
  param_1->field_0010 = param_2;
  param_1->field_0014 = param_3;
  return;
}

