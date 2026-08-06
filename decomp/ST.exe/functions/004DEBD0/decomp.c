#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004debd0(void *this,int param_1)

{
  STField<int>(this,0x4d4) = param_1;
  if ((param_1 < 1) && (STField<int>(this,0x4d0) == 1)) {
    STField<undefined4>(this,0x4d4) = 0;
  }
  return 0;
}

