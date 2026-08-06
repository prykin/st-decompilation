#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=1, reads=1, sites=0065BD23 MOV AL,byte ptr
   [EBP + 0x8]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0065BD26 MOV DX,word ptr
   [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0065BD30 MOV AX,word ptr
   [EBP + 0x10]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0065BD3B MOV DX,word ptr
   [EBP + 0x14] */

void __thiscall
FUN_0065bd20(void *this,byte param_1,ushort param_2,ushort param_3,ushort param_4,undefined4 param_5
            )

{
  STField<byte>(this,0x676) = param_1;
  STField<ushort>(this,0x677) = param_2;
  STField<ushort>(this,0x679) = param_3;
  STField<ushort>(this,0x67b) = param_4;
  STField<undefined4>(this,0x67d) = param_5;
  return;
}

