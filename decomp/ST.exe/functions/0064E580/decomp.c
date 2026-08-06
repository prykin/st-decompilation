#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0064E580 returns zero-filled partial register load at 0064E592 @ 0064E597 */

byte __thiscall FUN_0064e580(void *this,int param_1)

{
  byte *pbVar1;

  pbVar1 = (byte *)thunk_FUN_0064e510(this,param_1);
  if (pbVar1 != nullptr) {
    return *pbVar1;
  }
  return 1;
}

