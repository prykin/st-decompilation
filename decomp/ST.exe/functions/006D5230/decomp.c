#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_006d5230(void *this,int param_1)

{
  if (param_1 != 0) {
    return 0;
  }
  if (STField<int>(this,0x78) == 0) {
    STField<int>(this,0x78) = (int)this + 0x150;
  }
  return STField<undefined4>(this,0x78);
}

