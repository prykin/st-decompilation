#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0062E520 returns return of FUN_0062dbd0 @ 0062E531 */

uint __thiscall FUN_0062e520(void *this,int param_1,int param_2)

{
  uint uVar1;

  uVar1 = thunk_FUN_0062dbd0(this,param_1,param_2);
  return uVar1;
}

