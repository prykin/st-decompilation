#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004CD3B0 returns zeroed full register at 004CD3BF @ 004CD3C1 */

uint __fastcall FUN_004cd3b0(AnonShape_004CC900_31EE9CAA *param_1)

{
  if (*(int *)&param_1->field_0x45c != 0) {
    thunk_FUN_004cd450(param_1);
  }
  return 0;
}

