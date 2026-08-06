#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 00678950 returns return of FUN_006e6000 @ 00678968 */

int __thiscall FUN_00678950(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;

  iVar1 = FUN_006e6000((void *)((int)this + -0x1c),param_1,param_2,param_3);
  return iVar1;
}

