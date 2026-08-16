#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006B0A20 -> 006B0520 @ 006B0B2C

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006B0A20 -> 006B0520 @ 006B0B2C; FUN_006b0a20 parameter param_1 */

undefined4
FUN_006b0520(AnonShape_GLOBAL_0080759C_9638EF10 *param_1,int param_2,UINT param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;

  if (*(int *)&param_1->field_0x24 == 0x10) {
    if (*(int *)&param_1[1].field_0x8 == 0) {
      puVar1 = FUN_006b04d0(0x200);
      *(undefined4 **)&param_1[1].field_0x8 = puVar1;
      if (puVar1 == nullptr) {
        return 0xfffffffe;
      }
    }
    if (0 < param_4) {
      iVar2 = param_3 * 2;
      pbVar3 = (byte *)(param_2 + 1);
      do {
        *(ushort *)(iVar2 + *(int *)&param_1[1].field_0x8) =
             (ushort)((int)((uint)pbVar3[-1] << 8) >> ((byte)param_1[1].field_0018 & 0x1f)) &
             (ushort)param_1[1].field_000C |
             (ushort)((int)((uint)pbVar3[1] << 8) >> ((byte)param_1[1].field_0020 & 0x1f)) &
             *(ushort *)&param_1[1].field_0x14 |
             (ushort)((int)((uint)*pbVar3 << 8) >> ((byte)param_1[1].field_001C & 0x1f)) &
             *(ushort *)&param_1[1].field_0x10;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = param_4 + -1;
        iVar2 = iVar2 + 2;
        pbVar3 = pbVar3 + 4;
      } while (param_4 != 0);
      return 0;
    }
  }
  else if (0x10 < *(int *)&param_1->field_0x24) {
    if (*(int *)&param_1[1].field_0x8 == 0) {
      puVar1 = FUN_006b04d0(0x400);
      *(undefined4 **)&param_1[1].field_0x8 = puVar1;
      if (puVar1 == nullptr) {
        return 0xfffffffe;
      }
    }
    if (0 < param_4) {
      pbVar3 = (byte *)(param_2 + 1);
      iVar2 = param_3 << 2;
      do {
        *(uint *)(iVar2 + *(int *)&param_1[1].field_0x8) =
             ((uint)pbVar3[-1] << 0x10) >> ((byte)param_1[1].field_0018 & 0x1f) &
             param_1[1].field_000C |
             ((uint)pbVar3[1] << 0x10) >> ((byte)param_1[1].field_0020 & 0x1f) &
             *(uint *)&param_1[1].field_0x14 |
             ((uint)*pbVar3 << 0x10) >> ((byte)param_1[1].field_001C & 0x1f) &
             *(uint *)&param_1[1].field_0x10;
        param_4 = param_4 + -1;
        pbVar3 = pbVar3 + 4;
        iVar2 = iVar2 + 4;
      } while (param_4 != 0);
    }
  }
  return 0;
}

