#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0074f215(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    *param_2 = _DAT_007a1dd8;
    param_2[1] = DAT_007a1ddc;
    param_2[2] = DAT_007a1de0;
    param_2[3] = DAT_007a1de4;
    uVar1 = 0;
  }
  return uVar1;
}

