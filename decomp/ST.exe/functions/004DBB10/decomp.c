#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=2, ignored=0,
   unknown=0 */

int __thiscall FUN_004dbb10(void *this,RecoveredRecord_004DBB10_49DFDDD6 *param_1)

{
  if (((param_1->field_04C0 == 0) && (param_1->field_05AC != 0x6d)) &&
     ((STField<int>(this,0x4d0) == 0 || (STField<int>(this,0x4d4) == 0)))) {
    return 1;
  }
  return 0;
}

