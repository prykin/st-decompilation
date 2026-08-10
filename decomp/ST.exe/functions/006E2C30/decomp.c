#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=2, ignored=1, unknown=0 */

int __thiscall FUN_006e2c30(void *this,int *param_1)

{
  longlong lVar1;

  lVar1 = Library::MSVCRT::__ftol();
  *param_1 = (int)lVar1 + STField<int>(this,0x30) * 0x10000;
  lVar1 = Library::MSVCRT::__ftol();
  param_1[1] = STField<int>(this,0x3c) * 0x10000 - (int)lVar1;
  lVar1 = Library::MSVCRT::__ftol();
  param_1[2] = (int)lVar1;
  return (int)lVar1;
}

