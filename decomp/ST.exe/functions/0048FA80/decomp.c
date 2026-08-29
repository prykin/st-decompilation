#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0046CF20 -> 0048FA80 @ 0046D0D1; STBoatC::CreateGame this; stable alias ESI

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=2, ignored=0,
   unknown=0 */

int __fastcall FUN_0048fa80(STBoatC *param_1)

{
  int iVar1;
  int *piVar2;

  iVar1 = 0;
  piVar2 = &param_1->field_02CC;
  while ((iVar1 == 2 || (*piVar2 != 1))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (0x16 < iVar1) {
      return 1;
    }
  }
  return 0;
}

