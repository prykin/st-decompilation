
undefined4 FUN_004d7d30(char param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;

  iVar2 = (int)param_1;
  uVar3 = 0;
  if (param_4 <= (&g_packedRecords_A62x8[iVar2].field1603_0x7e2)[param_2 * 0x11]) {
    (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = 0;
    do {
      uVar1 = (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11];
      if ((&g_packedRecords_A62x8[iVar2].field1612_0x7fa)[param_2 * 0x11] <= uVar1) {
        return 0;
      }
      piVar4 = (int *)((&g_packedRecords_A62x8[iVar2].field1611_0x7f6)[param_2 * 0x11] * uVar1 +
                      (&g_packedRecords_A62x8[iVar2].field1625_0x80a)[param_2 * 0x11]);
      (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = uVar1 + 1;
      if (piVar4 == nullptr) {
        return 0;
      }
    } while (*piVar4 != param_3);
    thunk_FUN_004d8940(param_1,param_4);
    (&g_packedRecords_A62x8[iVar2].field1603_0x7e2)[param_2 * 0x11] =
         (&g_packedRecords_A62x8[iVar2].field1603_0x7e2)[param_2 * 0x11] - param_4;
    (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] =
         (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] - param_4;
    piVar4[2] = piVar4[2] - param_4;
    uVar3 = 1;
    if ((&g_packedRecords_A62x8[iVar2].field1603_0x7e2)[param_2 * 0x11] == 0) {
      thunk_FUN_004d78e0(param_1);
    }
  }
  return uVar3;
}

