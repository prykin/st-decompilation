#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_004e9650(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_3 = 0xffffffff;
  *param_2 = 0xffffffff;
  *param_1 = 0xffffffff;
  if (STField<int>(this,0x4d8) != 0xffff) {
    *param_1 = STField<undefined4>(this,0x4e4);
    *param_2 = STField<undefined4>(this,0x4e8);
    *param_3 = STField<undefined4>(this,0x4ec);
  }
  return 0;
}

