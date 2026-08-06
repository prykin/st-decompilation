#include "../../pseudocode_runtime.h"


void * __thiscall
FUN_00746c24(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_0074b7b8(this,param_1,param_2);
  STField<undefined4>(this,0x10) = 0;
  STField<undefined4>(this,0x14) = 0;
  STField<undefined4>(this,0x18) = 0;
  STField<undefined4>(this,0x1c) = 0;
  STField<undefined4>(this,0x20) = *param_4;
  STField<undefined4>(this,0x24) = param_4[1];
  STField<undefined4>(this,0x28) = param_4[2];
  STField<undefined4>(this,0x2c) = param_4[3];
  STField<undefined4>(this,0x30) = param_3;
  return this;
}

