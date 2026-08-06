#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004accd0(void *this,char param_1)

{
  if ((-1 < param_1) && ((int)param_1 <= STField<int>(this,0x14) + -1)) {
    return *(undefined4 *)(STField<int>(this,0x20) + param_1 * 0x24);
  }
  return 0;
}

