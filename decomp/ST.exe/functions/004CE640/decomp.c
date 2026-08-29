#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004CE640 returns zeroed full register at 004CE657 @ 004CE659 */

uint __fastcall FUN_004ce640(RecoveredRecord_004CE640_336DA25F *param_1)

{
  if ((param_1->field_0231 == 1) || (param_1->field_0231 == 3)) {

    thunk_FUN_004ce250(param_1,1);
  }
  return 0;
}

