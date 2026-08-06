#include "../../pseudocode_runtime.h"


undefined4 FUN_004d8b70(char param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar2;
  uint uVar5;
  int iVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;

  uVar6 = (uint)param_1;
  if (uVar6 == 0xff) {
    return 0;
  }
  if ((uVar6 == DAT_0080874d) && (g_money_008016D4 != nullptr)) {
    if (g_packedRecords_A62x8[uVar6].field0_0x0 == '\x03') {
      uVar2 = thunk_FUN_004e41c0(uVar6);
      iVar3 = thunk_FUN_004e4180(uVar6);
      iVar2 = (int)(uVar2 * 0x14) / iVar3;
      if (0x14 < iVar2) {
        iVar2 = 0x14;
      }
      bVar1 = (byte)iVar2;
      uVar7 = g_packedRecords_A62x8[uVar6].field16_0x23;
      iVar2 = 0;
      bVar9 = 1;
      uVar8 = g_packedRecords_A62x8[uVar6].field1951_0x99e;
      uVar5 = thunk_FUN_004e41c0(uVar6);
      MoneyTy::sub_0052BC30(g_money_008016D4,uVar5,uVar7,uVar8,bVar1,bVar9,iVar2);
      return 0;
    }
    iVar2 = g_packedRecords_A62x8[uVar6].field1940_0x972;
    iVar4 = iVar2 - g_packedRecords_A62x8[uVar6].field1941_0x976;
    if (iVar4 < 0) {
      MoneyTy::sub_0052BC30
                (g_money_008016D4,g_packedRecords_A62x8[uVar6].field15_0x1f,
                 g_packedRecords_A62x8[uVar6].field16_0x23,g_packedRecords_A62x8[uVar6].field17_0x27
                 ,0xd,0,0);
      return 0;
    }
    if (((iVar2 != 0) && (iVar4 != 0)) && (iVar4 = (iVar4 * 0xd) / iVar2, 0xd < iVar4)) {
      iVar4 = 0xd;
    }
    MoneyTy::sub_0052BC30
              (g_money_008016D4,g_packedRecords_A62x8[uVar6].field15_0x1f,
               g_packedRecords_A62x8[uVar6].field16_0x23,g_packedRecords_A62x8[uVar6].field17_0x27,
               (byte)iVar4,1,0);
  }
  return 0;
}

