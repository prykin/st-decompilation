#include "../../pseudocode_runtime.h"


void __thiscall
FUN_00748a83(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  STField<undefined4>(this,0xc) = param_4;
  STField<undefined4>(this,0x10) = param_5;
  STField<undefined4>(this,0x14) = param_5;
  STField<undefined4>(this,4) = 0;
  STField<undefined4>(this,8) = 0;
  STField<undefined4>(this,0x18) = param_2;
  STField<undefined4>(this,0x3c) = 0;
  STField<undefined4>(this,0x40) = 0;
  STField<undefined4>(this,0x44) = 0;
  *(VTable_007A1148 **)this = &VTable_007A1148;
  return;
}

