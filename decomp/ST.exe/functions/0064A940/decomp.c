#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00671F10 -> 0064A940 @ 00672079; return of FUN_0064a630 | 006823E0 -> 0064A940 @
   006824E7; data at 00848A14 | 006823E0 -> 0064A940 @ 00682550; data at 00848A14 | 006823E0 ->
   0064A940 @ 0068258D; data at 00848A14

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=4, ignored=0,
   unknown=0 */

int __cdecl FUN_0064a940(RecoveredGlobalRecordView_00848A14 *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 <= param_1->field_0004)) {
    param_1->field_0004 = param_2;
    return 1;
  }
  return 0;
}

