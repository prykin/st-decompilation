#include "../../pseudocode_runtime.h"


void __thiscall FUN_0048dc90(void *this,undefined4 *param_1)

{
  byte *puVar2;

  puVar2 = (byte *)((int)this + 0x49b);
  memmove(param_1, puVar2, 0x42); /* compiler REP MOVS byte copy */
  return;
}

