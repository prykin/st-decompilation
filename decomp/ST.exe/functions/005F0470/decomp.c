#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_005f0470(void *this,int param_1)

{
  uint uVar1;
  uVar1 = 0;
  if ((((param_1 == 0x1b) || (param_1 == 7)) || (param_1 == 0x13)) &&
     (STField<int>(this,0x23a) == 1)) {
    uVar1 = 1;
  }
  return uVar1;
}

