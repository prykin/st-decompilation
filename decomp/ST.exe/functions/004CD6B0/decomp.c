#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004CD6B0 returns zeroed full register at 004CD6CF @ 004CD6D1 */

uint __fastcall FUN_004cd6b0(RecoveredRecordView_004CD6B0_B4453352 *param_1)

{
  param_1->field_0524 = 0;
  if ((param_1->field_0231 == 1) || (param_1->field_0231 == 3)) {

    thunk_FUN_004cd790((RecoveredRecordView_004CD790_D51B3E61 *)param_1);
  }
  return 0;
}

