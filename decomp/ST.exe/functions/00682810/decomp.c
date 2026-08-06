#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=22, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl FUN_00682810(int param_1)

{
  if (DAT_007d2d18 == param_1) {
    thunk_FUN_006827a0();
    return;
  }
  thunk_FUN_00682720(DAT_007d2d18);
  return;
}

