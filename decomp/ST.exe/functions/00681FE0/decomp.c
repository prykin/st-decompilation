#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=2, ignored=0,
   unknown=0 */

int __cdecl FUN_00681fe0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  if (0 < param_1) {
    do {
      if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar1] != '\x01') &&
         ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar1] != '\x04')) {
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1);
  }
  return 1;
}

