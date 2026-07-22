
undefined4 FUN_004d8b70(char param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;

  uVar4 = (uint)param_1;
  if (uVar4 == 0xff) {
    return 0;
  }
  if ((uVar4 == DAT_0080874d) && (g_money_008016D4 != (MoneyTy *)0x0)) {
    if (g_playerRuntime[uVar4].raceId == 3) {
      iVar2 = thunk_FUN_004e41c0(uVar4);
      iVar3 = thunk_FUN_004e4180(uVar4);
      iVar3 = (iVar2 * 0x14) / iVar3;
      if (0x14 < iVar3) {
        iVar3 = 0x14;
      }
      bVar1 = (byte)iVar3;
      uVar5 = g_playerRuntime[uVar4].field17_0x23;
      iVar2 = 0;
      uVar7 = 1;
      uVar6 = g_playerRuntime[uVar4].field2134_0x99e;
      uVar4 = thunk_FUN_004e41c0(uVar4);
      thunk_FUN_0052bc30(g_money_008016D4,uVar4,uVar5,uVar6,bVar1,uVar7,iVar2);
      return 0;
    }
    iVar2 = g_playerRuntime[uVar4].field2108_0x972;
    iVar3 = iVar2 - g_playerRuntime[uVar4].field2109_0x976;
    if (iVar3 < 0) {
      thunk_FUN_0052bc30(g_money_008016D4,g_playerRuntime[uVar4].field16_0x1f,
                         g_playerRuntime[uVar4].field17_0x23,g_playerRuntime[uVar4].field18_0x27,0xd
                         ,0,0);
      return 0;
    }
    if (((iVar2 != 0) && (iVar3 != 0)) && (iVar3 = (iVar3 * 0xd) / iVar2, 0xd < iVar3)) {
      iVar3 = 0xd;
    }
    thunk_FUN_0052bc30(g_money_008016D4,g_playerRuntime[uVar4].field16_0x1f,
                       g_playerRuntime[uVar4].field17_0x23,g_playerRuntime[uVar4].field18_0x27,
                       (byte)iVar3,1,0);
  }
  return 0;
}

