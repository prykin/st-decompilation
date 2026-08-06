#include "../../pseudocode_runtime.h"


void __thiscall FUN_0074e2d9(void *this,undefined4 *param_1)

{
  if (STField<int>(this,4) < *(int *)this) {
    param_1[1] = STField<undefined4>(this,8);
    STField<int>(this,4) = STField<int>(this,4) + 1;
    STField<undefined4 *>(this,8) = param_1;
  }
  else {
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)param_1);
  }
  return;
}

