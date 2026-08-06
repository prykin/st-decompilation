#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall FUN_006729f0(void *this,byte param_1)

{
  uint uVar1;

  uVar1 = FUN_006c8950(STReplaceLowWord((uint32_t)(this), (uint16_t)((undefined2)DAT_007d2d24)),4,param_1);
  DAT_007d2d24 = uVar1 & 0xffff;
  return;
}

