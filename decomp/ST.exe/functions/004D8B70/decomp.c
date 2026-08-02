
undefined4 FUN_004d8b70(char param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;

  uVar5 = (uint)param_1;
  if (uVar5 == 0xff) {
    return 0;
  }
  if ((uVar5 == DAT_0080874d) && (g_money_008016D4 != (MoneyTy *)0x0)) {
    if (g_packedRecords_A62x8[uVar5].field0_0x0 == '\x03') {
      uVar2 = thunk_FUN_004e41c0(uVar5);
      iVar3 = thunk_FUN_004e4180(uVar5);
      iVar3 = (int)(uVar2 * 0x14) / iVar3;
      if (0x14 < iVar3) {
        iVar3 = 0x14;
      }
      bVar1 = (byte)iVar3;
      uVar2 = g_packedRecords_A62x8[uVar5].field20_0x23;
      iVar3 = 0;
      bVar7 = 1;
      uVar6 = g_packedRecords_A62x8[uVar5].field2304_0x99e;
      uVar5 = thunk_FUN_004e41c0(uVar5);
      MoneyTy::sub_0052BC30(g_money_008016D4,uVar5,uVar2,uVar6,bVar1,bVar7,iVar3);
      return 0;
    }
    iVar3 = g_packedRecords_A62x8[uVar5].field2272_0x972;
    iVar4 = iVar3 - g_packedRecords_A62x8[uVar5].field2273_0x976;
    if (iVar4 < 0) {
      MoneyTy::sub_0052BC30
                (g_money_008016D4,g_packedRecords_A62x8[uVar5].field19_0x1f,
                 g_packedRecords_A62x8[uVar5].field20_0x23,g_packedRecords_A62x8[uVar5].field21_0x27
                 ,0xd,0,0);
      return 0;
    }
    if (((iVar3 != 0) && (iVar4 != 0)) && (iVar4 = (iVar4 * 0xd) / iVar3, 0xd < iVar4)) {
      iVar4 = 0xd;
    }
    MoneyTy::sub_0052BC30
              (g_money_008016D4,g_packedRecords_A62x8[uVar5].field19_0x1f,
               g_packedRecords_A62x8[uVar5].field20_0x23,g_packedRecords_A62x8[uVar5].field21_0x27,
               (byte)iVar4,1,0);
  }
  return 0;
}

