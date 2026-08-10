#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=2, ignored=1, unknown=0 */

uint __thiscall FUN_00672af0(void *this,byte param_1)

{
  uint uVar1;

  uVar1 = FUN_006c8950(STReplaceLowWord((uint32_t)(this), (uint16_t)((undefined2)DAT_007d2d24)),0x1000,param_1
                      );
  DAT_007d2d24 = uVar1 & 0xffff;
  return uVar1 & 0xffff;
}

