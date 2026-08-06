#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004dd6c0(void *this,undefined4 param_1)

{
  if (STField<int>(this,0x4d4) == 0) {
    STField<undefined4>(this,0x4d4) = param_1;
    return 1;
  }
  return 0;
}

