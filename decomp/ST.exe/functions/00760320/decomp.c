#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00760320 -> 006A3BE0 @ 00760327

   [STPrototypeApplier] Propagated return.
   Evidence: 00760320 returns return of FUN_006a3be0 @ 00760330 */

int * FUN_00760320(undefined4 param_1,uint param_2)

{
  int *piVar1;

  piVar1 = thunk_FUN_006a3be0(param_2);
  return piVar1;
}

