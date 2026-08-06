#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070C860 -> 006B4FA0 @ 0070C8C9; FUN_0070c860 parameter param_1 | 0070CB20 -> 006B4FA0
   @ 0070CB96; FUN_0070cb20 parameter param_3 */

int FUN_006b4fa0(int *param_1)

{
  ushort uVar1;
  int iVar2;

  iVar2 = param_1[8];
  if (iVar2 == 0) {
    uVar1 = STField<ushort>(param_1,0xe);
    if (uVar1 != 0) {
      if (uVar1 < 9) {
        return (int)(param_1 + (1 << ((byte)uVar1 & 0x1f)) + 10);
      }
      if (param_1[4] == 3) {
        iVar2 = 3;
      }
    }
  }
  return (int)(param_1 + iVar2 + 10);
}

