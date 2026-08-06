#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __cdecl FUN_006f07e0(int *param_1)

{
  if (*param_1 != 0) {
    FreeAndNull((void **)param_1);
  }
  return;
}

