#include "../../pseudocode_runtime.h"


void FUN_00753260(undefined4 *param_1)

{
  byte *puVar2;
  byte *puVar3;

  if (param_1 != (undefined4 *)0x0) {
    if ((param_1[2] & 0x800000) != 0) {
      param_1[7] = ((undefined4 *)param_1[0xd])[3];
      puVar2 = (byte *)(param_1 + 4);
      puVar3 = (byte *)param_1[0xd];
      memmove(puVar3, puVar2, 0x20); /* compiler REP MOVS byte copy */
    }
    FUN_006d46a0(param_1,0);
  }
  return;
}

