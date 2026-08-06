#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004dd700(void *this,int param_1)

{
  if (STField<int>(this,0x4d4) == param_1) {
    STField<undefined4>(this,0x4d4) = 0;
    return 1;
  }
  return 0;
}

