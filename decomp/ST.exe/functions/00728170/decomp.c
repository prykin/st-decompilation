
void __cdecl FUN_00728170(AnonShape_00728170_E57D1DF1 *param_1,AnonShape_00728170_7560EBA7 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_ECX;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint local_c;

  if ((((int)DAT_008570dc < (int)param_2->field_0024) &&
      ((int)param_1->field_0024 < (int)DAT_0085705c)) &&
     ((int)param_1->field_0024 >> 0x10 < (int)param_2->field_0024 >> 0x10)) {
    local_c = param_1->field_001C;
    iVar3 = param_2->field_001C - local_c;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar3 = (int)(CONCAT44(iVar3 >> 0x10,iVar3 * 0x10000) /
                 (longlong)
                 (int)((param_2->field_0024 & 0xffff0000) - (param_1->field_0024 & 0xffff0000)));
    uVar2 = param_2->field_0024 & 0xffff0000;
    if ((int)DAT_0085705c <= (int)uVar2) {
      uVar2 = DAT_0085705c;
    }
    uVar6 = param_1->field_0024 & 0xffff0000;
    if ((int)uVar6 < (int)DAT_008570dc) {
      uVar2 = FUN_006db5f0(iVar3,DAT_008570dc - uVar6);
      local_c = local_c + uVar2;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar2 = extraout_ECX;
      uVar6 = DAT_008570dc;
    }
    uVar1 = DAT_008570f8;
    if (uVar2 - uVar6 != 0 && (int)uVar6 <= (int)uVar2) {
      iVar7 = (uVar6 >> 0x10) + DAT_00857090 * DAT_00857098;
      puVar5 = (uint *)(iVar7 * 2 + DAT_0085707c);
      uVar6 = uVar2 - uVar6 >> 0x10;
      puVar8 = (undefined1 *)(iVar7 + DAT_0085708c);
      for (uVar2 = uVar6; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = uVar1;
        puVar8 = puVar8 + 1;
      }
      uVar2 = uVar6;
      if (((uint)puVar5 & 2) != 0) {
        *(short *)puVar5 = (short)(local_c >> 0x10);
        puVar5 = (uint *)((int)puVar5 + 2);
        local_c = local_c + iVar3;
        uVar2 = uVar6 - 1;
        if (uVar2 == 0 || uVar6 == 0) {
          return;
        }
      }
      while (1 < (int)uVar2) {
        uVar4 = local_c + iVar3;
        uVar6 = local_c >> 0x10;
        local_c = uVar4 + iVar3;
        *puVar5 = uVar6 | uVar4 & 0xffff0000;
        puVar5 = puVar5 + 1;
        uVar2 = uVar2 - 2;
      }
      if ((uVar2 - 2 & 1) != 0) {
        *(short *)puVar5 = (short)(local_c >> 0x10);
      }
    }
  }
  return;
}

