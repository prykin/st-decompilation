#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 6.
   Evidence: raw retained-width parameter lifetime: width=1, reads=1, sites=006B022A MOV AL,byte ptr
   [EBP + 0x20] */

void FUN_006b01d0(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 byte param_7)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;

  if ((0 < (int)param_5) && (0 < param_6)) {
    pbVar2 = (byte *)(param_1 + param_2 * param_4 + param_3);
    while (param_6 != 0) {
      pbVar3 = pbVar2;
      for (uVar1 = param_5 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(uint *)pbVar3 = CONCAT22(CONCAT11(param_7,param_7),CONCAT11(param_7,param_7));
        pbVar3 = pbVar3 + 4;
      }
      for (uVar1 = param_5 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *pbVar3 = param_7;
        pbVar3 = pbVar3 + 1;
      }
      pbVar2 = pbVar2 + param_2;
      param_6 = param_6 + -1;
    }
  }
  return;
}

