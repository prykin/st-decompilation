#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0061D093 MOV AX,word ptr
   [EBP + 0xc] */

void __thiscall FUN_0061d080(void *this,undefined4 param_1,ushort param_2)

{
  if ((STField<int>(this,0x93) != 5) && (STField<int>(this,0x93) != 6)) {
    STField<ushort>(this,0x89) = param_2;
    STField<undefined4>(this,0x51) = param_1;
  }
  return;
}

