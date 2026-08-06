#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0046F5C0 -> 004E1FB0 @ 0046FB71; /STBoatC+0x18 | 0046F5C0 -> 004E1FB0 @ 0046FD01;
   /STBoatC+0x18 */

int __thiscall FUN_004e1fb0(void *this,int param_1,uint param_2)

{
  int iVar1;

  iVar1 = 0;
  if (STField<int>(this,0x245) == 0) {
    iVar1 = thunk_FUN_004e1f70(this,param_1);
    if (iVar1 != 0) {
      *(uint *)((int)this + param_1 * 0x28 + 0x4d0) = param_2;
    }
  }
  return iVar1;
}

