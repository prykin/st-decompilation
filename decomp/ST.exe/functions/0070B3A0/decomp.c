#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005C2760 -> 0070B3A0 @ 005C27B7

   [STPrototypeApplier] Propagated return.
   Evidence: 0070B3A0 returns used as parameter 3 of PutDDX @ 00592C0A | 0070B3A0 returns used as
   parameter 3 of PutDDX @ 005B49F2 */

BITMAPINFO * __cdecl FUN_0070b3a0(AnonShape_GLOBAL_0081175C_57F682DD *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < param_1->field_0023)) {
    return *(BITMAPINFO **)(&param_1[1].field_0x4 + param_2 * 4);
  }
  return nullptr;
}

