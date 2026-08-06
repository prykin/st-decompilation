#include "../../pseudocode_runtime.h"


undefined4 * __thiscall FUN_0074b929(void *this,undefined4 *param_1)

{
  FUN_0074bb83(this);
  *(undefined4 *)this = *param_1;
  STField<undefined4>(this,4) = param_1[1];
  STField<undefined4>(this,8) = param_1[2];
  STField<undefined4>(this,0xc) = param_1[3];
  return this;
}

