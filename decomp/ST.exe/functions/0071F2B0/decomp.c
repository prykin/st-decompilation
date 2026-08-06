#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0071F2B0 returns zeroed full register at 0071F2E9 @ 0071F2ED

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071F2B3 MOV AX,word ptr
   [EBP + 0x8]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071F2BA MOV CX,word ptr
   [EBP + 0xc] */

uint __thiscall FUN_0071f2b0(void *this,ushort param_1,ushort param_2)

{
  int iVar1;

  STField<ushort>(this,0x156) = param_2;
  STField<ushort>(this,0x154) = param_1;
  iVar1 = FUN_006e5fe0(this,(undefined4 *)((int)this + 0x140));
  if (iVar1 == 0) {
    return STField<uint>(this,0x158);
  }
  return 0;
}

