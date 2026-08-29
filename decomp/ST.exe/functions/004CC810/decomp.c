#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004CC810 returns zeroed full register at 004CC82C @ 004CC82F */

uint __fastcall FUN_004cc810(RecoveredRecordView_004CC900_A43E8B7C *param_1)

{
  if (param_1->field_0448 != 0) {
    /* ST_CALLSITE[004CC81D]: CALL 0x00405768; direct=00405768 TLOBaseTy::sub_004CC900 */
    TLOBaseTy::sub_004CC900((TLOBaseTy *)param_1);
  }
  param_1->field_0444 = 0;
  return 0;
}

