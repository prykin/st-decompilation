#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00691690 -> 00692BA0 @ 00691759 | 00691690 -> 00692BA0 @ 00691888 | 00691690 ->
   00692BA0 @ 006918FD | 00691690 -> 00692BA0 @ 006920B8 */

void FUN_00692ba0(RecoveredRecord_00692BA0_C4D2C982 *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint *puVar3;
  iVar1 = 0;
  if (0 < param_1->field_0023) {
    puVar3 = (undefined4 *)&param_1[1].field_0x8;
    do {
      pbVar2 = &DAT_007d5930;
      do {
        FUN_006c8e60((RecoveredRecord_006C8E60_3F75B164 *)*puVar3,*pbVar2,pbVar2[4]);
        pbVar2 = pbVar2 + 8;
      } while ((int)pbVar2 < 0x7d5958);
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar1 < param_1->field_0023);
  }
  return;
}

