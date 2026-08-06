#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_006193a0(void *this,undefined4 *param_1)

{
  byte *puVar2;

  puVar2 = (byte *)((int)this + 0x4d);
  memmove(puVar2, param_1, 0x104); /* compiler REP MOVS byte copy */
  STField<undefined4>(this,0x97) = 0xffffffff;
  return 0x104;
}

