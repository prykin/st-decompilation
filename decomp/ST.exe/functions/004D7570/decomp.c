#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004749C0 -> 004D7570 @ 0047525A; /STBoatC+0x18 | 004C7460 -> 004D7570 @ 004C74A4;
   /TLOBaseTy+0x18 */

undefined4 FUN_004d7570(char param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;

  iVar2 = (int)param_1;
  (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = 0;
  do {
    uVar1 = (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11];
    if ((&g_packedRecords_A62x8[iVar2].field1612_0x7fa)[param_2 * 0x11] <= uVar1)
    goto cf_common_exit_004D766D;
    piVar3 = (int *)((&g_packedRecords_A62x8[iVar2].field1611_0x7f6)[param_2 * 0x11] * uVar1 +
                    (&g_packedRecords_A62x8[iVar2].field1625_0x80a)[param_2 * 0x11]);
    (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = uVar1 + 1;
    if (piVar3 == nullptr) goto cf_common_exit_004D766D;
  } while ((int *)*piVar3 != param_3);
  (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] - piVar3[1];
  (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] - piVar3[2];
  (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] - piVar3[3];
  (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] - piVar3[4];
  if ((&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] < 0) {
    (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] = 0;
  }
  if ((&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] < 0) {
    (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] = 0;
  }
  if ((&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] < 0) {
    (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] = 0;
  }
  if ((&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] < 0) {
    (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] = 0;
  }
  DArrayRemoveAt((DArrayTy *)(&g_packedRecords_A62x8[iVar2].field_0x7ee + param_2 * 0x44),
                 (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] - 1);
cf_common_exit_004D766D:
  thunk_FUN_004d78e0(param_1);
  return 0;
}

