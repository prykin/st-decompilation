#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0042D770 -> 00493CD0 @ 0042D80F | 0043BEB0 -> 00493CD0 @ 0043C1CB

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=26,
   ignored=0, unknown=0 */

int __fastcall FUN_00493cd0(STGameObjC *objPtr)

{
  if (((((objPtr->field_01D1 & 4) == 0) && (objPtr->field_0736 == 0)) && (objPtr->field_073A == 0))
     && (objPtr->field_05C0 != CASE_3)) {
    return 0;
  }
  return 1;
}

