#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004DD850 returns zeroed full register at 004DD86A @ 004DD86D */

uint __fastcall FUN_004dd850(int param_1)

{
  int iVar1;
  uint *puVar2;
  puVar2 = (undefined4 *)(param_1 + 0x4d0);
  for (iVar1 = 0x37; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_004dd880((AnonShape_004DDCC0_33DEB43E *)param_1);
  return 0;
}

