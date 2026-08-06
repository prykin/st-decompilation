#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0047DF00 -> 004B9CF0 @ 0047E45E | 0047DF00 -> 004B9CF0 @ 0047EAF1

   [STPrototypeApplier] Propagated return.
   Evidence: 004B9CF0 returns zeroed full register at 004B9D04 @ 004B9D07 */

uint __fastcall FUN_004b9cf0(AnonShape_004B9D90_4F3151F9 *param_1)

{
  thunk_FUN_004c91a0((TLOBaseTy *)param_1);
  *(undefined4 *)&param_1->field_0x4b4 = 1;
  return 0;
}

