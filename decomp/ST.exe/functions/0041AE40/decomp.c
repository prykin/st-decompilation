#include "../../pseudocode_runtime.h"


void __thiscall FUN_0041ae40(void *this,undefined4 *param_1)

{

  memset(param_1, 0, 0x18); /* compiler bulk-zero initialization */
  *param_1 = *(undefined4 *)((int)this + 0x18);
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}

