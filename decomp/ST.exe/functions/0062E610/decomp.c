#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0062E610 -> 0062DFD0 @ 0062E61F

   [STPrototypeApplier] Propagated return.
   Evidence: 0062E610 returns return of FUN_0062dfd0 @ 0062E625 */

uint __thiscall FUN_0062e610(void *this,int param_1,int *param_2)

{
  uint uVar1;

  uVar1 = thunk_FUN_0062dfd0(this,param_1,(int)param_2,(int *)&param_2);
  return uVar1;
}

