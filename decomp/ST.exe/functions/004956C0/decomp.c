#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_004956c0(void *this,undefined4 param_1)

{
  if (STField<int>(this,0x6f7) == 0x17) {
    STField<undefined4>(this,0x7e2) = param_1;
  }
  return;
}

