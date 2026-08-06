#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_004e9960(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (((STField<int>(this,0x4f8) != 0) && (STField<int>(this,0x4fc) != 0)) &&
     (STField<int>(this,0x61b) != 0)) {
    *param_1 = *(undefined4 *)(STField<int>(this,0x61b) + 0x5b0);
    *param_2 = *(undefined4 *)(STField<int>(this,0x61b) + 0x5b4);
    *param_3 = *(undefined4 *)(STField<int>(this,0x61b) + 0x5b8);
    return 1;
  }
  return 0;
}

