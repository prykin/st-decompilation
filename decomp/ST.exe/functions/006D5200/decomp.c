#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006D5200 returns literal 2147500037 at 006D5212 @ 006D5218 */

uint __thiscall FUN_006d5200(void *this,int *param_1)

{
  uint uVar1;

  if (((STField<AnonShape_006D4CF0_8A8947BE *>(this,0x288))->field_0004 & 0x1000000) == 0) {
    return 0x80004005;
  }
  uVar1 = FUN_006d4cf0(STField<AnonShape_006D4CF0_8A8947BE *>(this,0x288),param_1);
  return uVar1;
}

