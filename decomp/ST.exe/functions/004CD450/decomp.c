#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004CD450 returns zeroed full register at 004CD45F @ 004CD461 */

uint __fastcall FUN_004cd450(RecoveredRecordView_004CC900_A43E8B7C *param_1)

{
  *(undefined4 *)&param_1->field_0x45c = 0;
  /* ST_CALLSITE[004CD45A]: CALL 0x00405768; direct=00405768 TLOBaseTy::sub_004CC900 */
  TLOBaseTy::sub_004CC900((TLOBaseTy *)param_1);
  return 0;
}

