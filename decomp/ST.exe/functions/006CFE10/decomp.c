
byte * FUN_006cfe10(RecoveredRecord_006CFE10_B59F6D2D *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7_mg1;
  RecoveredRecord_006CFE10_B59F6D2D *pRVar7;

  iVar2 = (int)param_1->field_0012;
  uVar4 = ((byte)param_1->field_0xd & 0x1c) >> 2;
  uVar3 = (int)(param_2 + (param_2 >> 0x1f & 0xfU)) >> 4;
  pRVar7 = (RecoveredRecord_006CFE10_B59F6D2D *)(&param_1[1].field_0x2 + uVar4 * 2);
  if ((0 < (int)uVar3) && (uVar4 != 0)) {
    if ((int)uVar4 < (int)uVar3) {
      uVar3 = uVar4;
    }
    param_2 = param_2 + uVar3 * -0x10;
    pRVar7 = (RecoveredRecord_006CFE10_B59F6D2D *)
             (&param_1[1].field_0x2 + *(ushort *)(&param_1[1].field_0x0 + uVar3 * 2));
  }
  auto param_1_after_write = pRVar7; /* compiler stack-slot lifetime split */
  uVar3 = 0;
  iVar6 = param_2 * iVar2;
  pRVar7 = param_1_after_write;
  do {
    while( true ) {
      pbVar7_mg1 = (byte *)pRVar7;
      iVar5 = iVar6 - uVar3;
      if (iVar5 == 0 || iVar6 < (int)uVar3) {
        return pbVar7_mg1;
      }
      bVar1 = *pbVar7_mg1;
      uVar3 = (uint)bVar1;
      pRVar7 = (RecoveredRecord_006CFE10_B59F6D2D *)(pbVar7_mg1 + 1);
      if (uVar3 == 0) break;
      iVar6 = iVar5;
      if ((bVar1 & 0x80) != 0) {
        if ((bVar1 & 0x40) == 0) {
          uVar3 = bVar1 & 0xffffff3f;
          pRVar7 = (RecoveredRecord_006CFE10_B59F6D2D *)((int)pRVar7 + uVar3);
        }
        else {
          uVar3 = bVar1 & 0xffffff3f;
          pRVar7 = (RecoveredRecord_006CFE10_B59F6D2D *)(pbVar7_mg1 + 2);
        }
      }
    }
    iVar6 = iVar5 - iVar2;
  } while (iVar6 != 0 && iVar2 <= iVar5);
  return (byte *)pRVar7;
}

