
/* [STPrototypeApplier] Propagated parameter 8.
   Evidence: 0070CB20 -> EXTERNAL:000000B2 @ 0070CD54 */

uint __cdecl
FUN_0070cb20(uint param_1,int param_2,int *param_3,int param_4,int param_5,byte param_6,byte param_7
            ,int param_8,HPALETTE h,uint param_10,int param_11)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  UINT UVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint local_54 [15];
  uint local_18;
  uint *local_14;
  int local_10;
  int *local_c;
  int local_8;

  local_8 = 0;
  local_10 = 0x10;
  local_18 = 0;
  if (param_10 == 0x800000) {
    local_10 = 4;
  }
  else if (param_10 == 0x1000000) {
    local_10 = 0x20;
  }
  local_14 = local_54;
  param_10 = 0;
  local_c = &DAT_007f014c;
  do {
    iVar7 = local_c[-1] + param_1;
    iVar10 = *local_c + param_2;
    if ((((-1 < iVar7) && (iVar7 < param_4)) && (-1 < iVar10)) && (iVar10 < param_5)) {
      iVar2 = FUN_006b4fa0((int)param_3);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      bVar1 = *(byte *)(((uint)*(ushort *)((int)param_3 + 0xe) * param_3[1] + 0x1f >> 3 & 0x1ffffffc
                        ) * ((param_3[2] - iVar10) + -1) + iVar7 + iVar2);
      if (bVar1 != param_7) {
        uVar3 = (uint)bVar1;
        local_14[-1] = param_10;
        bVar1 = *(byte *)(param_8 + 5 + uVar3 * 4);
        *local_14 = (uint)*(byte *)(param_8 + 4 + uVar3 * 4);
        local_14[1] = (uint)bVar1;
        local_14[2] = (uint)*(byte *)(param_8 + 6 + uVar3 * 4);
        local_8 = local_8 + 1;
        local_14 = local_14 + 4;
      }
    }
    local_c = local_c + 3;
    param_10 = param_10 + 1;
  } while ((int)local_c < 0x7f017c);
  if (local_8 < 1) {
    return 0xffffffff;
  }
  param_1 = (uint)param_6;
  uVar3 = (uint)param_6;
  iVar7 = (4 - local_8) * local_10;
  iVar10 = (uint)*(byte *)(param_8 + 4 + uVar3 * 4) * iVar7;
  _param_7 = (uint)*(byte *)(param_8 + 5 + uVar3 * 4) * iVar7;
  param_10 = (uint)*(byte *)(param_8 + 6 + uVar3 * 4) * iVar7;
  if (0 < local_8) {
    param_3 = &DAT_007f0150;
    param_8 = local_8;
    puVar8 = local_54 + 1;
    do {
      iVar2 = *param_3;
      iVar10 = iVar10 + puVar8[-1] * iVar2;
      _param_7 = _param_7 + iVar2 * *puVar8;
      iVar7 = iVar7 + iVar2;
      param_10 = param_10 + puVar8[1] * iVar2;
      param_3 = param_3 + 3;
      param_8 = param_8 + -1;
      puVar8 = puVar8 + 4;
    } while (param_8 != 0);
  }
  iVar2 = iVar7;
  if (iVar7 == 0) {
    iVar2 = 1;
  }
  uVar3 = iVar10 / iVar2;
  iVar10 = iVar7;
  if (iVar7 == 0) {
    iVar10 = 1;
  }
  uVar4 = _param_7 / iVar10;
  if (iVar7 == 0) {
    iVar7 = 1;
  }
  uVar5 = (int)param_10 / iVar7;
  if (((uVar3 == 0) && (uVar4 == 0)) && (uVar5 == 0)) {
    return 0;
  }
  uVar9 = local_18;
  if (param_11 != 0) {
    uVar9 = ((uVar3 & 0x3f) << 6 | uVar4 & 0x3f) << 6 | uVar5 & 0x3f;
    bVar1 = *(byte *)(uVar9 + param_11);
    if (bVar1 != 0) {
      return (uint)bVar1;
    }
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  UVar6 = GetNearestPaletteIndex(h,(uint)CONCAT11((char)uVar5,(char)uVar4) << 8 | uVar3 & 0xff);
  if (UVar6 != 0xffffffff) {
    param_1 = UVar6 & 0xff;
    if (param_11 != 0) {
      *(char *)(uVar9 + param_11) = (char)UVar6;
    }
  }
  return param_1;
}

