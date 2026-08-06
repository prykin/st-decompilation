#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=15, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl FUN_00682370(undefined4 *param_1)

{
  if (g_anonShape_00683780_11EA4E23_00848A14 != nullptr) {
    thunk_FUN_0064a830((int *)g_anonShape_00683780_11EA4E23_00848A14,param_1);
  }
  return;
}

