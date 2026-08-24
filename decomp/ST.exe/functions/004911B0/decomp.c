#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004911b0(void *this,undefined4 param_1)

{
  uint uVar1;
  uVar1 = 0;
  if (((STField<int>(this,0x45d) == 0x14) && (STField<int>(this,0x5c0) != 2)) &&
     (STField<int>(this,0x5a2) == 0)) {
    STField<undefined4>(this,0x5a2) = param_1;
    uVar1 = 1;
  }
  return uVar1;
}

