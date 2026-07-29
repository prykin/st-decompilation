#include "../../pseudocode_runtime.h"


void FUN_006affc0(uint *param_1,uint *param_2,int *param_3)

{
  uint uVar3;
  uint *puVar4;
  uint *puVar5;

  uVar3 = param_1[3] * param_1[2];
  if (param_3 != (int *)0x0) {
    *param_3 = uVar3 + 0x1c;
  }
  puVar4 = param_1;
  puVar5 = param_2;
  memmove(puVar5, puVar4, 0x1c); /* compiler REP MOVS byte copy */
  param_2[6] = 0;
  *param_2 = *param_2 & 0xfffffef7;
  puVar4 = (uint *)param_1[7];
  puVar5 = param_2 + 7;
  memmove(puVar5, puVar4, uVar3); /* compiler REP MOVS byte copy */
  return;
}

