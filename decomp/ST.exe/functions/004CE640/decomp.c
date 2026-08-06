#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004CE640 returns zeroed full register at 004CE657 @ 004CE659 */

uint __fastcall FUN_004ce640(void *param_1)

{
  if ((STField<int>(param_1,0x231) == 1) || (STField<int>(param_1,0x231) == 3)) {
    thunk_FUN_004ce250(param_1,1);
  }
  return 0;
}

