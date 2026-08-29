#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004C2DD0 returns zeroed full register at 004C2E06 @ 004C2E08 */

uint __fastcall FUN_004c2dd0(RecoveredRecordView_004C2DD0_9CD5C7AF *param_1)

{
  param_1->field_0408 = 0;
  param_1->field_040C = 0;
  if (((param_1->field_0231 == 1) || (param_1->field_0231 == 3)) &&
     (*(int *)(&DAT_00794e9c + param_1->field_0235 * 4) != 0)) {

    thunk_FUN_004c2c10((RecoveredRecordView_004C2C10_0CCE72F6 *)param_1);
  }
  return 0;
}

