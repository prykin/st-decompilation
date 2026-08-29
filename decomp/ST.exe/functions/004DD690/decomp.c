#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004DD690 returns zeroed full register at 004DD6A9 @ 004DD6AB */

uint __fastcall FUN_004dd690(RecoveredRecord_004DD690_445B44C4 *param_1)

{
  if (g_manRub3_008117A4 != nullptr) {

    thunk_FUN_0062e520(g_manRub3_008117A4,param_1->field_0024,param_1->field_0018);
  }
  return 0;
}

