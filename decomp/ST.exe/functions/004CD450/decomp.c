#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004CD450 returns zeroed full register at 004CD45F @ 004CD461 */

uint __fastcall FUN_004cd450(AnonShape_004CC900_31EE9CAA *param_1)

{
  *(undefined4 *)&param_1->field_0x45c = 0;
  TLOBaseTy::sub_004CC900((TLOBaseTy *)param_1);
  return 0;
}

