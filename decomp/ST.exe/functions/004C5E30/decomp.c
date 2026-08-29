#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004C5E30 returns zeroed full register at 004C5E3F @ 004C5E41 */

uint __fastcall FUN_004c5e30(RecoveredRecordView_004C5F30_F38E2F1A *param_1)

{
  if (*(int *)&param_1->field_0x231 == 0) {

    thunk_FUN_004c5f30(param_1);
  }
  return 0;
}

