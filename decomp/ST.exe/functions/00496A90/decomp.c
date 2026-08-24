#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00496CC0 -> 00496A90 @ 00496CE2; FUN_00496cc0 parameter param_3

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 00496E40 -> 00496A90 @ 00496E60; address of FUN_00496e40 parameter param_4 */

uint FUN_00496a90(int param_1,int param_2,uint *param_3,undefined4 param_4,int param_5,uint *param_6
                 )

{
  dword dVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  DArrayTy *pDVar5;

  uVar2 = 0xffffffff;
  *param_6 = 0;
  uVar4 = 0;
  dVar1 = g_array_007FB270->count;
  pDVar5 = g_array_007FB270;
  if (0 < (int)dVar1) {
    do {
      if (uVar4 < pDVar5->count) {
        piVar3 = DArrayAt<int>(pDVar5, uVar4);
      }
      else {
        piVar3 = nullptr;
      }
      if ((piVar3[4] == param_5) &&
         (((uVar2 = uVar4, *piVar3 != param_1 || (piVar3[1] != param_2)) ||
          ((uint *)piVar3[2] != param_3)))) {
        *param_6 = 1;
        pDVar5 = g_array_007FB270;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)dVar1);
  }
  return uVar2;
}

