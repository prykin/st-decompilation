#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004CCC10 -> 005822B0 @ 004CD079; zero-filled partial register load at 004CD070 */

void __thiscall FUN_005822b0(void *this,undefined4 param_1,ushort param_2)

{
  STField<ushort>(this,0x205) = param_2;
  STField<undefined4>(this,0x1dd) = param_1;
  return;
}

