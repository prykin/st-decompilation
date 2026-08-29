#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006B94E0 -> 006BBB00 @ 006B9563 */

undefined4 FUN_006bbb00(RecoveredRecordView_006B94E0_92E1E144 *param_1,undefined4 param_2)

{
  uint uVar1;
  uVar1 = param_1->field_0498;
  param_1->field_0498 = param_2;
  return uVar1;
}

