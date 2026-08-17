#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall FUN_0074931d(AnonShape_0074931D_CA8B6F7D *param_1)

{
  if (param_1->field_0034 != 0) {
    /* ST_CALLSITE[0074932D]: CALL dword ptr [0x0085bc94] */
    ReleaseSemaphore(param_1->field_0030,param_1->field_0034,(LPLONG)0x0);
    param_1->field_0034 = 0;
  }
  return;
}

