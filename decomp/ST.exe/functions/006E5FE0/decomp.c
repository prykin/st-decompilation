#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006E5FE0 returns return of FUN_006e3db0 @ 006E5FFC */

int __thiscall FUN_006e5fe0(void *this,undefined4 *param_1)

{
  int iVar1;

  *param_1 = STField<undefined4>(this,8);
  param_1[1] = 2;
  iVar1 = FUN_006e3db0((int)param_1);
  return iVar1;
}

