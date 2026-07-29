#include "../../pseudocode_runtime.h"


void FUN_007175d0(byte *param_1,int param_2,int param_3,byte param_4)

{
  byte *pbVar1;
  uint uVar3;
  byte *pbVar4;

  uVar3 = param_2 * param_3;
  pbVar1 = (byte *)Library::DKW::LIB::FUN_006aac70(uVar3);
  pbVar4 = pbVar1;
  memmove(pbVar4, param_1, uVar3); /* compiler REP MOVS byte copy */
  if (-1 < (int)(uVar3 - 1)) {
    do {
      if (param_4 < *pbVar1) {
        *pbVar1 = param_4;
      }
      pbVar1 = pbVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

