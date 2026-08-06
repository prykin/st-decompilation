#include "../../pseudocode_runtime.h"


void __thiscall FUN_004ad1a0(void *this,char param_1)

{
  ushort *puVar1;

  if (-1 < STField<int>(this,0xc)) {
    puVar1 = (ushort *)(STField<int>(this,0x20) + 0xe + param_1 * 0x24);
    *puVar1 = *puVar1 & 0xfeff;
    FUN_006e93c0(STField<void *>(this,0x3c),STField<uint>(this,0x18),(int)param_1,0xffffffff);
  }
  return;
}

