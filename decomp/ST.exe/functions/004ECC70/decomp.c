#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004ECC70 returns zeroed full register at 004ECC98 @ 004ECCA1 */

uint __fastcall FUN_004ecc70(RecoveredRecordView_004ECC70_6C1B81DC *param_1)

{
  if (param_1->field_05AC == 0x6f) {
    thunk_FUN_0041d3e0(param_1,8);
  }
  param_1->field_04D0 = 5000;
  param_1->field_04D4 = g_playSystem_00802A38->field_00E4;
  return 0;
}

