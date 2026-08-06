#include "../../pseudocode_runtime.h"


undefined4 FUN_006cfd90(byte *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;

  if (param_3 < 1) {
    pbVar1 = param_1 + (param_1[0xd] >> 1 & 0xe) + 0x16;
  }
  else {
    pbVar1 = FUN_006cfe10(param_1,param_3);
  }
  uVar3 = (uint)*pbVar1;
  pbVar2 = pbVar1 + 1;
  if (uVar3 != 0) {
    while( true ) {
      while ((uVar3 & 0x80) != 0) {
        uVar4 = uVar3 & 0x3f;
        param_2 = param_2 - uVar4;
        if (param_2 < 0) {
          return 1;
        }
        if ((uVar3 & 0x40) == 0) {
          uVar3 = (uint)pbVar2[uVar4];
          pbVar2 = pbVar2 + uVar4 + 1;
        }
        else {
          uVar3 = (uint)pbVar2[1];
          pbVar2 = pbVar2 + 2;
        }
      }
      param_2 = param_2 - (uVar3 & 0x7f);
      if (param_2 < 0) break;
      uVar3 = (uint)*pbVar2;
      pbVar2 = pbVar2 + 1;
    }
  }
  return 0;
}

