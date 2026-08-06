#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004e18e0(void *this,int param_1)

{
  if (((STField<int>(this,0x4d8) == param_1) && (STField<int>(this,0x4d0) == 1)) &&
     (STField<int>(this,0x4e4) != 0)) {
    STField<undefined4>(this,0x4e4) = 0;
  }
  return 0;
}

