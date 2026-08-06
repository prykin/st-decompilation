#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004CE770 returns zeroed full register at 004CE788 @ 004CE78B */

uint __thiscall FUN_004ce770(void *this,int param_1)

{
  if ((param_1 == 1) && (STField<int>(this,0x4d0) == 0)) {
    thunk_FUN_004ce7a0(this);
  }
  return 0;
}

