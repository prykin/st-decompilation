#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00505070 -> 005050B0 @ 0050507A */

uint __thiscall FUN_00505070(void *this,CPanelTy_sub_005050B0_param_1Enum param_1)

{
  uint uVar1;

  /* ST_CALLSITE[0050507A]: CALL 0x00403d7d; direct=00403D7D CPanelTy::sub_005050B0 */
  uVar1 = CPanelTy::sub_005050B0(this,param_1);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)*(byte *)((int)this + (uVar1 * 3 + 0x609) * 2);
  }
  return uVar1;
}

