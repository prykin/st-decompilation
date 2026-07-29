#include "../../pseudocode_runtime.h"


byte * FUN_00717620(byte *param_1,int param_2,int param_3,byte param_4,byte param_5)

{
  byte *pbVar1;
  byte *pbVar3;
  uint uVar4;

  uVar4 = param_2 * param_3;
  pbVar1 = (byte *)Library::DKW::LIB::FUN_006aac70(uVar4);
  pbVar3 = pbVar1;
  memmove(pbVar3, param_1, uVar4); /* compiler REP MOVS byte copy */
  pbVar3 = pbVar1;
  if (-1 < (int)(uVar4 - 1)) {
    do {
      if (*pbVar3 < param_5) {
        *pbVar3 = param_5;
      }
      else if (param_4 < *pbVar3) {
        *pbVar3 = param_4;
      }
      uVar4 = uVar4 - 1;
      pbVar3 = pbVar3 + 1;
    } while (uVar4 != 0);
  }
  return pbVar1;
}

