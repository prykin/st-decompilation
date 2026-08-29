#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004C5DE0 returns zeroed full register at 004C5E13 @ 004C5E15 */

uint __fastcall FUN_004c5de0(RecoveredRecordView_004C5DE0_C11858A1 *param_1)

{
  param_1->field_04D0 = 0;
  param_1->field_04D4 = g_playSystem_00802A38->field_00E4 + 0x7d;
  if ((param_1->field_0231 == 1) || (param_1->field_0231 == 3)) {

    thunk_FUN_004c5f30((RecoveredRecordView_004C5F30_F38E2F1A *)param_1);
  }
  return 0;
}

