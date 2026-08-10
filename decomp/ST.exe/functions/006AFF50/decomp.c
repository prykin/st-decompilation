#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] shared_tail_return.
   Evidence: every reachable exit is the same unconditional jump into a trusted function body with
   concrete return type /uint; machine CFG audit: used=12, ignored=1, unknown=0 */

uint __cdecl FUN_006aff50(int param_1)

{
  uint uVar1_mg2;
  uint uVar1_mg1;
  uint uVar1;

  uVar1 = (param_1 + 0x5a) % 0x168;
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 0x168;
  }
  if (uVar1 < 0xb5) {
    uVar1_mg1 = FUN_006aff93();
  }
  else {
    uVar1_mg2 = FUN_006aff93();
    uVar1_mg1 = -uVar1_mg2;
  }
  return uVar1_mg1;
}

