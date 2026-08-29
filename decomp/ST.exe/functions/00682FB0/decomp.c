#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=2, ignored=0,
   unknown=0 */

int __cdecl FUN_00682fb0(int param_1)

{
  if (((param_1 != 0x30) && (param_1 != 0x16)) && (param_1 != 0x2c)) {
    return 0;
  }
  return 1;
}

