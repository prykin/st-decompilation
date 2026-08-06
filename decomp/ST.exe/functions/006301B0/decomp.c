#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006301B0 -> 0062FCA0 @ 006301B7

   [STPrototypeApplier] Propagated return.
   Evidence: 006301B0 returns return of STRubbishC::sub_0062FCA0 @ 006301BD */

int __thiscall FUN_006301b0(void *this,AnonShape_0062FCA0_22A9EE35 *param_1)

{
  int iVar1;

  iVar1 = STRubbishC::sub_0062FCA0(this,param_1);
  return iVar1;
}

