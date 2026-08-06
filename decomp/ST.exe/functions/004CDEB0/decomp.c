#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004cdeb0(void *this,undefined4 param_1)

{
  if (STField<int>(this,0x524) < 0x14) {
    *(undefined4 *)((int)this + STField<int>(this,0x524) * 4 + 0x4d0) = param_1;
    STField<int>(this,0x524) = STField<int>(this,0x524) + 1;
  }
  return 0;
}

