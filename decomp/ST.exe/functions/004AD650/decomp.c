#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004AD650 returns stored into /STMineSetC+0x2ba @ 006231BB

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004C6210 -> 004AD650 @ 004C62A0; /TLOBldMark+0x2c | 004CC900 -> 004AD650 @ 004CC943;
   /TLOBaseTy+0x603 */

int __fastcall FUN_004ad650(STT3DSprC *param_1)

{
  return param_1->field_0018;
}

