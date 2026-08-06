#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=005844B3 MOV AX,word ptr
   [EBP + 0xc] */

void __thiscall FUN_005844b0(void *this,undefined4 param_1,ushort param_2)

{
  STField<ushort>(this,0x292) = param_2;
  STField<undefined4>(this,0x25a) = param_1;
  return;
}

