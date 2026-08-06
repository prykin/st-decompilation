#include "../../pseudocode_runtime.h"


uint __thiscall FUN_006a06d0(void *this,int param_1,int param_2)

{
  return ((uint)*(byte *)(STField<int>(this,0x5703) * param_2 + STField<int>(this,0x56ff) +
                         param_1) * 500) / 0xff;
}

