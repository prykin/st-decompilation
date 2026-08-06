#include "../../pseudocode_runtime.h"


void * __thiscall
FUN_00746f2d(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_0074b7b8(this,param_1,param_2);
  STField<undefined4>(this,0x14) = 0;
  STField<undefined4>(this,0x18) = 0;
  STField<undefined4>(this,0x20) = 0;
  STField<undefined4>(this,0x24) = 0;
  STField<undefined4>(this,0x28) = *param_4;
  STField<undefined4>(this,0x2c) = param_4[1];
  STField<undefined4>(this,0x30) = param_4[2];
  STField<undefined4>(this,0x34) = param_4[3];
  STField<undefined4>(this,0x3c) = 0;
  STField<undefined4>(this,0x40) = 0;
  STField<undefined4>(this,0x44) = 0;
  STField<undefined4>(this,0x38) = param_3;
  STField<undefined4>(this,0x48) = 1;
  return this;
}

