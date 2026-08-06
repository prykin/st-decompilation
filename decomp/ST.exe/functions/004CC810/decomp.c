#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004CC810 returns zeroed full register at 004CC82C @ 004CC82F */

uint __fastcall FUN_004cc810(AnonShape_004CC900_31EE9CAA *param_1)

{
  if (param_1->field_0448 != 0) {
    TLOBaseTy::sub_004CC900((TLOBaseTy *)param_1);
  }
  param_1->field_0444 = 0;
  return 0;
}

