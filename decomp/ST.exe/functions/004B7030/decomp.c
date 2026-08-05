
/* [STPrototypeApplier] Propagated return.
   Evidence: 004B7030 returns zeroed full register at 004B7064 @ 004B7068 */

uint FUN_004b7030(char param_1)

{
  if (g_packedRecords_A62x8[param_1].field1948_0x992 != nullptr) {
    DArrayDestroy(g_packedRecords_A62x8[param_1].field1948_0x992);
    g_packedRecords_A62x8[param_1].field1948_0x992 = nullptr;
  }
  return 0;
}

