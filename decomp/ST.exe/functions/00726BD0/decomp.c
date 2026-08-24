#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl FUN_00726bd0(int *param_1)

{
  int iVar1;

  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(cMf32 **)(iVar1 + 2) != nullptr) {
      cMf32::RecMemFree(*(cMf32 **)(iVar1 + 2),(uint *)(iVar1 + 10));
    }
    FreeAndNull(param_1);
  }
  return;
}

