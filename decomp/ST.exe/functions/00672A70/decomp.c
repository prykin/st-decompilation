#include "../../pseudocode_runtime.h"


void __thiscall FUN_00672a70(void *this,byte param_1)

{
  uint uVar1;

  uVar1 = FUN_006c8950(STReplaceLowWord((uint32_t)(this), (uint16_t)((undefined2)DAT_007d2d24)),0x400,param_1);
  DAT_007d2d24 = uVar1 & 0xffff;
  return;
}

