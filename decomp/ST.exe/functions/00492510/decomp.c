#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall FUN_00492510(void *this,int param_1)

{
  if (STField<int>(this,0x7ca) == param_1) {
    STField<undefined4>(this,0x7ca) = 0;
    STField<undefined4>(this,0x7c6) = 0;
    return;
  }
  STBoatC::sub_00492420(this);
  return;
}

