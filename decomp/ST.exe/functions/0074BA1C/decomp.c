#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __thiscall FUN_0074ba1c(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  STField<undefined4>(this,4) = param_1[1];
  STField<undefined4>(this,8) = param_1[2];
  STField<undefined4>(this,0xc) = param_1[3];
  return;
}

