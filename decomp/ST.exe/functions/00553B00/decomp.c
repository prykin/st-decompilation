#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00553B00 -> 00553990 @ 00553BA3 */

void __cdecl
FUN_00553b00(int param_1,int param_2,byte *param_3,uint param_4,int param_5,undefined *param_6)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if (param_3 != nullptr) {
    pbVar3 = thunk_FUN_005532f0((Global_sub_005532F0_param_1Enum)param_6);
    iVar2 = (int)param_6 * 2 + 1;
    iVar5 = param_1 - (int)param_6;
    iVar4 = param_2 - (int)param_6;
    if (0 < iVar2) {
      auto param_1_after_write = (int)(param_3 + iVar4 * param_4 + iVar5); /* compiler stack-slot lifetime split */
      iVar6 = 0;
      int param_2_after_write = iVar2; /* compiler stack-slot lifetime split */
      param_6 = pbVar3;
      while( true ) {
        do {
          iVar1 = iVar6 + iVar5;
          if (((((iVar1 < 0) || ((int)param_4 <= iVar1)) || (iVar4 < 0)) ||
              ((param_5 <= iVar4 || (*(char *)(param_1_after_write + iVar6) != '\x0f')))) &&
             ((pbVar3 == nullptr || (param_6[iVar6] != '\0')))) {
            thunk_FUN_00553990(iVar1,iVar4,param_3,param_4,param_5);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
        param_6 = param_6 + iVar2;
        iVar4 = iVar4 + 1;
        param_1_after_write = param_1_after_write + param_4;
        param_2_after_write = param_2_after_write + -1;
        if (param_2_after_write == 0) break;
        iVar6 = 0;
      }
    }
  }
  return;
}

