#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004E0220 returns zeroed full register at 004E022F @ 004E0231 */

uint __fastcall FUN_004e0220(AnonShape_004E0250_5A3B9236 *param_1)

{
  if (*(int *)&param_1->field_0x231 == 0) {
    thunk_FUN_004e0250(param_1);
  }
  return 0;
}

