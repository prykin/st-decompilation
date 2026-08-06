#include "../../pseudocode_runtime.h"


int __thiscall
FUN_0074f158(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0074b7b8((void *)((int)this + 4),param_1,param_2);
  STField<undefined4>(this,0x10) = 0;
  STField<undefined4>(this,0x14) = 0;
  STField<undefined4>(this,0x18) = 0;
  STField<undefined4>(this,0x1c) = 0;
  STField<undefined4>(this,0x34) = param_4;
  STField<undefined4>(this,0x20) = 0xffffffff;
  STField<undefined4>(this,0x24) = 0x3fffffff;
  STField<undefined4>(this,0x10) = STField<undefined4>(this,0x20);
  STField<undefined4>(this,0x14) = STField<undefined4>(this,0x24);
  STField<undefined4>(this,0x30) = 0x37;
  STField<undefined8>(this,0x28) = 0x3ff0000000000000;
  return (int)this;
}

