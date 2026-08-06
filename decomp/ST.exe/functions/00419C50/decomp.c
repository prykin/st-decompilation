#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00419C53 MOV AX,word ptr
   [EBP + 0x8] */

void __thiscall FUN_00419c50(void *this,ushort param_1)

{
  STField<ushort>(this,0x32) = param_1;
  return;
}

