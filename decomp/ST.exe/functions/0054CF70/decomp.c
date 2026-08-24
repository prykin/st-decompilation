#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=14, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_0054cf70(void *this,uint param_1)

{
  thunk_FUN_0054cdb0();
  StartSystemTy::sub_006E56B0(this,param_1);
  return;
}

