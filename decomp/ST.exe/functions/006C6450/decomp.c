#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006B94E0 -> 006C6450 @ 006B956D */

undefined4 FUN_006c6450(RecoveredRecordView_006B94E0_92E1E144 *param_1,undefined4 param_2)

{
  uint uVar1;
  uVar1 = param_1->field_04A4;
  param_1->field_04A4 = param_2;
  return uVar1;
}

