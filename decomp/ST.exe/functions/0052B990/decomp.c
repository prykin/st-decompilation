
void __fastcall FUN_0052b990(AnonShape_0052B990_04D99BFA *param_1)

{
  uint uVar1;
  byte bVar2;
  BITMAPINFO *pBVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint local_8;

  bVar2 = ((DAT_0080874e == '\x03') - 1U & 0xf9) + 0x14;
  FUN_006b5f80((int *)PTR_008075a8,param_1->field_0030,param_1->field_0034,param_1->field_0058,
               param_1->field_005C);
  if (param_1->field_00A4 == '\0') {
    uVar1 = (uint)bVar2;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8._0_1_ = 1;
    if (0 < (int)(uVar1 - (byte)param_1->field_00A2)) {
      uVar7 = 1;
      do {
        pBVar3 = (BITMAPINFO *)
                 FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)param_1->field_0082,0);
        PutDDX(param_1->field_0030 + -4 + uVar7 * 4,param_1->field_0034,'\x01',pBVar3);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8._0_1_ = (byte)local_8 + 1;
        uVar7 = (uint)(byte)local_8;
      } while ((int)uVar7 <= (int)(uVar1 - (byte)param_1->field_00A2));
    }
    bVar4 = (bVar2 - param_1->field_00A2) + 1;
    if (bVar4 <= bVar2) {
      iVar5 = (uint)bVar4 * 4;
      iVar6 = (uVar1 - bVar4) + 1;
      do {
        pBVar3 = (BITMAPINFO *)
                 FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)param_1->field_0082,4);
        PutDDX(param_1->field_0030 + -4 + iVar5,param_1->field_0034,'\x01',pBVar3);
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
    bVar4 = 1;
    local_8 = 1;
    if (param_1->field_00A2 != '\0') {
      do {
        pBVar3 = (BITMAPINFO *)
                 FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)param_1->field_0082,
                              (-(uint)(DAT_0080874e != '\x03') & 2) + 1);
        PutDDX(param_1->field_0030 + -4 + local_8 * 4,param_1->field_0034,'\x01',pBVar3);
        bVar4 = bVar4 + 1;
        local_8 = (uint)bVar4;
      } while (bVar4 <= (byte)param_1->field_00A2);
    }
    bVar4 = param_1->field_00A2 + 1;
    if (bVar4 <= bVar2) {
      iVar5 = (uint)bVar4 * 4;
      iVar6 = ((uint)bVar2 - (uint)bVar4) + 1;
      do {
        pBVar3 = (BITMAPINFO *)
                 FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)param_1->field_0082,0);
        PutDDX(param_1->field_0030 + -4 + iVar5,param_1->field_0034,'\x01',pBVar3);
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return;
    }
  }
  return;
}

