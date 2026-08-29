#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004DCB70 returns zeroed full register at 004DCBA3 @ 004DCBA5 */

uint __fastcall FUN_004dcb70(RecoveredRecordView_004DCB70_C49F3808 *param_1)

{
  param_1->field_02D1 = 7;
  param_1->field_04D0 = 0;
  param_1->field_04EC = 0;
  param_1->field_02CD = 0;
  if ((param_1->field_0231 == 1) || (param_1->field_0231 == 3)) {

    thunk_FUN_004dccf0((RecoveredRecordView_004DCCF0_71744BDA *)param_1);
  }
  return 0;
}

