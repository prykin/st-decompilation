#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __fastcall FUN_0074bb83(undefined4 *param_1)

{

  memset(param_1, 0, 0x48); /* compiler bulk-zero initialization */
  param_1[10] = 1;
  param_1[8] = 1;
  return;
}

