#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=2, ignored=0,
   unknown=0 */

int __cdecl FUN_00529f90(RecoveredRecord_00529F90_28CA9BE3 *param_1)

{
  int iVar1;

  iVar1 = 0;
  switch(param_1->field_0014) {
  case 0:
  case 1:
  case 3:
    return 0;
  case 2:
    iVar1 = 1;
  }
  return iVar1;
}

