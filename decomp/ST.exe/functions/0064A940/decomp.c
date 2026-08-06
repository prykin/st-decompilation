#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00671F10 -> 0064A940 @ 00672079; return of FUN_0064a630 | 006823E0 -> 0064A940 @
   006824E7; data at 00848A14 | 006823E0 -> 0064A940 @ 00682550; data at 00848A14 | 006823E0 ->
   0064A940 @ 0068258D; data at 00848A14 */

undefined4 __cdecl FUN_0064a940(AnonShape_00683780_11EA4E23 *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 <= param_1->field_0004)) {
    param_1->field_0004 = param_2;
    return 1;
  }
  return 0;
}

