#include "../../pseudocode_runtime.h"


void FUN_00695140(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  byte *puVar4;

  uVar1 = param_2[6];
  uVar2 = param_2[7];
  puVar4 = (byte *)(param_1);
  memmove(param_2, puVar4, 0x20); /* compiler REP MOVS byte copy */
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}

