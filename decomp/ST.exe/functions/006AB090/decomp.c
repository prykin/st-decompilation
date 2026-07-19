
undefined4
FUN_006ab090(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  short sVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  short *psVar20;
  uint uVar21;
  int iVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  ushort uVar26;
  int iVar27;
  undefined4 local_4c;
  short *local_48;
  int local_44;
  int local_40;
  byte *local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  ushort *local_28;
  byte *local_24;
  byte *local_20;
  ushort *local_1c;
  ushort *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  ushort *local_8;
  
  local_c = param_2 * param_3;
  local_4c = 0;
  *(undefined2 *)(param_1 + (param_2 * param_6 + param_5 + local_c * param_7) * 2) = 1;
  if (((param_5 == param_8) && (param_6 == param_9)) && (param_7 == param_10)) {
    return 0;
  }
  sVar4 = 0;
  bVar8 = false;
  if (((param_8 < 0) || (param_9 < 0)) || (param_10 < 0)) {
    local_48 = (short *)0x0;
  }
  else {
    local_48 = (short *)(param_1 + (param_2 * param_9 + param_8 + local_c * param_10) * 2);
    sVar4 = *local_48;
    if (sVar4 != 0) {
      *local_48 = 0;
      if (((((param_8 < 1) || (local_48[-1] != 0)) &&
           ((param_2 + -1 <= param_8 || (local_48[1] != 0)))) &&
          ((param_9 < 1 || (local_48[-param_2] != 0)))) &&
         (((param_3 + -1 <= param_9 || (local_48[param_2] != 0)) &&
          (((param_10 < 1 || (local_48[-local_c] != 0)) &&
           ((param_4 + -1 <= param_10 || (local_48[local_c] != 0)))))))) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
    }
  }
  iVar22 = (param_2 + param_3) * param_4;
  local_34 = iVar22 * 2;
  local_38 = (byte *)FUN_006bfb70(iVar22 * 0x10);
  if (local_38 == (byte *)0x0) {
LAB_006acc40:
    local_4c = 0xfffffffe;
  }
  else {
    local_24 = local_38 + iVar22 * 8;
    local_44 = 1;
    *local_24 = (byte)param_5;
    local_24[1] = (byte)param_6;
    local_24[2] = (byte)param_7;
    bVar9 = false;
    local_20 = local_38;
    while( true ) {
      param_5 = 0;
      local_40 = 0;
      pbVar23 = local_20;
      if (local_44 < 1) break;
      do {
        bVar1 = local_24[local_40 * 4];
        uVar21 = (uint)bVar1;
        bVar2 = local_24[local_40 * 4 + 1];
        uVar12 = (uint)bVar2;
        bVar3 = local_24[local_40 * 4 + 2];
        uVar10 = (uint)bVar3;
        iVar22 = uVar12 * param_2 + uVar21 + local_c * uVar10;
        sVar5 = *(short *)(param_1 + iVar22 * 2);
        iVar27 = (int)sVar5;
        local_28 = (ushort *)(param_1 + iVar22 * 2);
        if (local_34 < param_5 + 0x1a) {
          local_34 = local_34 + 0x80;
          pbVar11 = (byte *)FUN_006bfb50((undefined4 *)local_38,local_34 * 8);
          if (pbVar11 == (byte *)0x0) goto LAB_006acc40;
          local_20 = pbVar11 + ((int)local_20 - (int)local_38 >> 2) * 4;
          local_24 = pbVar11 + ((int)local_24 - (int)local_38 >> 2) * 4;
          if (local_20 == pbVar11) {
            local_24 = local_24 + 0x200;
          }
          else {
            local_20 = local_20 + 0x200;
          }
          pbVar23 = local_20 + param_5 * 4;
          local_38 = pbVar11;
          Library::MSVCRT::FUN_0072da70
                    ((undefined4 *)(pbVar11 + local_34 * 4),
                     (undefined4 *)(pbVar11 + local_34 * 4 + -0x200),local_34 * 4 - 0x200);
        }
        pbVar11 = local_24;
        local_14 = 0xff;
        if ((int)uVar21 < param_2 + -1) {
          local_14 = 0xfe;
        }
        if (uVar21 != 0) {
          local_14 = local_14 & 0xffffffef;
        }
        if ((int)uVar12 < param_3 + -1) {
          local_14 = local_14 & 0xfffffffd;
        }
        if (uVar12 != 0) {
          local_14 = local_14 & 0xffffffdf;
        }
        if ((int)uVar10 < param_4 + -1) {
          local_14 = local_14 & 0xfffffffb;
        }
        if (uVar10 != 0) {
          local_14 = local_14 & 0xffffffbf;
        }
        local_30 = local_14;
        if ((local_14 & 0x33) == 0) {
          if ((local_28[-1] == 0) || (iVar27 + 3 < (int)(short)local_28[-1])) {
            local_28[-1] = sVar5 + 3;
            *pbVar23 = bVar1 - 1;
            pbVar23[1] = bVar2;
            pbVar23[2] = bVar3;
            pbVar23 = pbVar23 + 4;
            param_5 = param_5 + 1;
          }
          if ((local_28[1] == 0) || (iVar27 + 3 < (int)(short)local_28[1])) {
            local_28[1] = (ushort)(iVar27 + 3);
            pbVar23[1] = bVar2;
            *pbVar23 = bVar1 + 1;
            pbVar23[2] = bVar3;
            pbVar23 = pbVar23 + 4;
            param_5 = param_5 + 1;
          }
          local_18 = local_28 + -param_2;
          if ((*local_18 == 0) || (pbVar24 = pbVar23, iVar27 + 3 < (int)(short)*local_18)) {
            pbVar24 = pbVar23 + 4;
            *local_18 = sVar5 + 3;
            pbVar23[1] = bVar2 - 1;
            *pbVar23 = bVar1;
            pbVar23[2] = bVar3;
            param_5 = param_5 + 1;
          }
          if ((local_28[param_2] == 0) ||
             (pbVar23 = pbVar24, iVar27 + 3 < (int)(short)local_28[param_2])) {
            pbVar23 = pbVar24 + 4;
            local_28[param_2] = sVar5 + 3;
            pbVar24[1] = bVar2 + 1;
            *pbVar24 = bVar1;
            pbVar24[2] = bVar3;
            param_5 = param_5 + 1;
          }
          uVar13 = local_14 & 0x40;
          pbVar24 = pbVar23;
          if (uVar13 == 0) {
            local_8 = local_28 + -local_c;
            if ((*local_8 == 0) || (iVar27 + 3 < (int)(short)*local_8)) {
              pbVar24 = pbVar23 + 4;
              *local_8 = sVar5 + 3;
              pbVar23[1] = bVar2;
              *pbVar23 = bVar1;
              pbVar23[2] = bVar3 - 1;
              param_5 = param_5 + 1;
            }
          }
          uVar14 = local_14 & 4;
          pbVar23 = pbVar24;
          if ((uVar14 == 0) &&
             ((local_28[local_c] == 0 || (iVar27 + 3 < (int)(short)local_28[local_c])))) {
            pbVar23 = pbVar24 + 4;
            local_28[local_c] = sVar5 + 3;
            pbVar24[1] = bVar2;
            *pbVar24 = bVar1;
            pbVar24[2] = bVar3 + 1;
            param_5 = param_5 + 1;
          }
          if ((uVar14 == 0) && (local_8 = local_28 + local_c, -1 < (short)local_28[local_c])) {
            pbVar24 = pbVar23;
            if (((local_8[-1] == 0) || (iVar27 + 4 < (int)(short)local_8[-1])) &&
               ((local_28[-1] & 0xc000) != 0xc000)) {
              pbVar24 = pbVar23 + 4;
              local_8[-1] = sVar5 + 4;
              *pbVar23 = bVar1 - 1;
              pbVar23[1] = bVar2;
              pbVar23[2] = bVar3 + 1;
              param_5 = param_5 + 1;
            }
            pbVar23 = pbVar24;
            if (((local_8[1] == 0) || (iVar27 + 4 < (int)(short)local_8[1])) &&
               ((local_28[1] & 0xc000) != 0xc000)) {
              pbVar23 = pbVar24 + 4;
              local_8[1] = sVar5 + 4;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2;
              pbVar24[2] = bVar3 + 1;
              param_5 = param_5 + 1;
            }
            pbVar24 = pbVar23;
            if (((local_8[param_2] == 0) || (iVar27 + 4 < (int)(short)local_8[param_2])) &&
               ((local_28[param_2] & 0xc000) != 0xc000)) {
              pbVar24 = pbVar23 + 4;
              local_8[param_2] = sVar5 + 4;
              pbVar23[1] = bVar2 + 1;
              *pbVar23 = bVar1;
              pbVar23[2] = bVar3 + 1;
              param_5 = param_5 + 1;
            }
            local_1c = local_8 + -param_2;
            pbVar23 = pbVar24;
            if (((*local_1c == 0) || (iVar27 + 4 < (int)(short)*local_1c)) &&
               ((*local_18 & 0xc000) != 0xc000)) {
              pbVar23 = pbVar24 + 4;
              *local_1c = sVar5 + 4;
              pbVar24[1] = bVar2 - 1;
              *pbVar24 = bVar1;
              pbVar24[2] = bVar3 + 1;
              param_5 = param_5 + 1;
            }
          }
          if ((uVar13 == 0) && (local_8 = local_28 + -local_c, -1 < (short)*local_8)) {
            pbVar24 = pbVar23;
            if (((local_8[-1] == 0) || (iVar27 + 4 < (int)(short)local_8[-1])) &&
               ((local_28[-1] & 0xc000) != 0xc000)) {
              pbVar24 = pbVar23 + 4;
              local_8[-1] = sVar5 + 4;
              *pbVar23 = bVar1 - 1;
              pbVar23[1] = bVar2;
              pbVar23[2] = bVar3 - 1;
              param_5 = param_5 + 1;
            }
            pbVar23 = pbVar24;
            if (((local_8[1] == 0) || (iVar27 + 4 < (int)(short)local_8[1])) &&
               ((local_28[1] & 0xc000) != 0xc000)) {
              pbVar23 = pbVar24 + 4;
              local_8[1] = sVar5 + 4;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2;
              pbVar24[2] = bVar3 - 1;
              param_5 = param_5 + 1;
            }
            local_1c = local_8 + -param_2;
            pbVar24 = pbVar23;
            if (((*local_1c == 0) || (iVar27 + 4 < (int)(short)*local_1c)) &&
               ((*local_18 & 0xc000) != 0xc000)) {
              pbVar24 = pbVar23 + 4;
              *local_1c = sVar5 + 4;
              pbVar23[1] = bVar2 - 1;
              *pbVar23 = bVar1;
              pbVar23[2] = bVar3 - 1;
              param_5 = param_5 + 1;
            }
            pbVar23 = pbVar24;
            if (((local_8[param_2] == 0) || (iVar27 + 4 < (int)(short)local_8[param_2])) &&
               ((local_28[param_2] & 0xc000) != 0xc000)) {
              pbVar23 = pbVar24 + 4;
              local_8[param_2] = sVar5 + 4;
              pbVar24[1] = bVar2 + 1;
              *pbVar24 = bVar1;
              pbVar24[2] = bVar3 - 1;
              param_5 = param_5 + 1;
            }
          }
          puVar15 = (ushort *)((int)local_28 - (param_2 * 2 + 2));
          pbVar24 = pbVar23;
          if ((((*puVar15 == 0) || (iVar27 + 4 < (int)(short)*puVar15)) &&
              ((*local_18 & 0xc000) != 0xc000)) && ((local_28[-1] & 0xc000) != 0xc000)) {
            pbVar24 = pbVar23 + 4;
            *puVar15 = sVar5 + 4;
            *pbVar23 = bVar1 - 1;
            pbVar23[2] = bVar3;
            pbVar23[1] = bVar2 - 1;
            param_5 = param_5 + 1;
          }
          pbVar23 = pbVar24;
          if (((local_18[1] == 0) || (iVar27 + 4 < (int)(short)local_18[1])) &&
             (((*local_18 & 0xc000) != 0xc000 && ((local_28[1] & 0xc000) != 0xc000)))) {
            pbVar23 = pbVar24 + 4;
            local_18[1] = sVar5 + 4;
            *pbVar24 = bVar1 + 1;
            pbVar24[2] = bVar3;
            pbVar24[1] = bVar2 - 1;
            param_5 = param_5 + 1;
          }
          pbVar24 = pbVar23;
          if (((local_28[param_2 + -1] == 0) || (iVar27 + 4 < (int)(short)local_28[param_2 + -1]))
             && (((local_28[param_2] & 0xc000) != 0xc000 && ((local_28[-1] & 0xc000) != 0xc000)))) {
            pbVar24 = pbVar23 + 4;
            local_28[param_2 + -1] = sVar5 + 4;
            *pbVar23 = bVar1 - 1;
            pbVar23[1] = bVar2 + 1;
            pbVar23[2] = bVar3;
            param_5 = param_5 + 1;
          }
          local_14 = param_2 * 2 + 2;
          pbVar23 = pbVar24;
          if ((((local_28[param_2 + 1] == 0) || (iVar27 + 4 < (int)(short)local_28[param_2 + 1])) &&
              ((local_28[param_2] & 0xc000) != 0xc000)) && ((local_28[1] & 0xc000) != 0xc000)) {
            pbVar23 = pbVar24 + 4;
            local_28[param_2 + 1] = sVar5 + 4;
            *pbVar24 = bVar1 + 1;
            pbVar24[2] = bVar3;
            pbVar24[1] = bVar2 + 1;
            param_5 = param_5 + 1;
          }
          iVar27 = iVar27 + 5;
          uVar26 = (ushort)iVar27;
          if ((uVar14 == 0) && ((local_28[local_c] & 0xc000) != 0xc000)) {
            local_1c = (ushort *)((int)local_28 + (local_c * 2 - local_14));
            pbVar24 = pbVar23;
            if ((((*local_1c == 0) || (iVar27 < (short)*local_1c)) &&
                ((((local_28[local_c - param_2] & 0xc000) != 0xc000 &&
                  ((local_28[local_c + -1] & 0xc000) != 0xc000)) && ((*local_18 & 0xc000) != 0xc000)
                 ))) && (((local_28[-1] & 0xc000) != 0xc000 && ((*puVar15 & 0xc000) != 0xc000)))) {
              pbVar24 = pbVar23 + 4;
              *local_1c = uVar26;
              *pbVar23 = bVar1 - 1;
              pbVar23[2] = bVar3 + 1;
              pbVar23[1] = bVar2 - 1;
              param_5 = param_5 + 1;
            }
            puVar16 = local_28 + (local_c - param_2);
            pbVar23 = pbVar24;
            if ((((puVar16[1] == 0) || (iVar27 < (short)puVar16[1])) &&
                ((*puVar16 & 0xc000) != 0xc000)) &&
               ((((local_28[local_c + 1] & 0xc000) != 0xc000 && ((*local_18 & 0xc000) != 0xc000)) &&
                (((local_28[1] & 0xc000) != 0xc000 && ((local_18[1] & 0xc000) != 0xc000)))))) {
              puVar16[1] = uVar26;
              pbVar23 = pbVar24 + 4;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2 - 1;
              pbVar24[2] = bVar3 + 1;
              param_5 = param_5 + 1;
            }
            pbVar24 = pbVar23;
            if (((local_28[local_c + param_2 + -1] == 0) ||
                (iVar27 < (short)local_28[local_c + param_2 + -1])) &&
               (((local_28[local_c + param_2] & 0xc000) != 0xc000 &&
                (((((local_28[local_c + -1] & 0xc000) != 0xc000 &&
                   ((local_28[param_2] & 0xc000) != 0xc000)) && ((local_28[-1] & 0xc000) != 0xc000))
                 && ((local_28[param_2 + -1] & 0xc000) != 0xc000)))))) {
              pbVar24 = pbVar23 + 4;
              local_28[local_c + param_2 + -1] = uVar26;
              *pbVar23 = bVar1 - 1;
              pbVar23[1] = bVar2 + 1;
              pbVar23[2] = bVar3 + 1;
              param_5 = param_5 + 1;
            }
            pbVar23 = pbVar24;
            if (((local_28[local_c + param_2 + 1] == 0) ||
                (iVar27 < (short)local_28[local_c + param_2 + 1])) &&
               (((((local_28[local_c + param_2] & 0xc000) != 0xc000 &&
                  (((local_28[local_c + 1] & 0xc000) != 0xc000 &&
                   ((local_28[param_2] & 0xc000) != 0xc000)))) && ((local_28[1] & 0xc000) != 0xc000)
                 ) && ((local_28[param_2 + 1] & 0xc000) != 0xc000)))) {
              pbVar23 = pbVar24 + 4;
              local_28[local_c + param_2 + 1] = uVar26;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2 + 1;
              pbVar24[2] = bVar3 + 1;
              param_5 = param_5 + 1;
            }
          }
          local_10 = param_2 * 2;
          if ((uVar13 == 0) && (local_8 = local_28 + -local_c, (*local_8 & 0xc000) != 0xc000)) {
            uVar6 = *(ushort *)((int)local_8 - local_14);
            pbVar24 = pbVar23;
            if (((uVar6 == 0) || (iVar27 < (short)uVar6)) &&
               (((((local_8[-param_2] & 0xc000) != 0xc000 && ((local_8[-1] & 0xc000) != 0xc000)) &&
                 ((*local_18 & 0xc000) != 0xc000)) &&
                (((local_28[-1] & 0xc000) != 0xc000 && ((*puVar15 & 0xc000) != 0xc000)))))) {
              pbVar24 = pbVar23 + 4;
              *(ushort *)((int)local_8 - local_14) = uVar26;
              *pbVar23 = bVar1 - 1;
              pbVar23[2] = bVar3 - 1;
              pbVar23[1] = bVar2 - 1;
              param_5 = param_5 + 1;
            }
            local_1c = local_8 + -param_2;
            if ((((local_1c[1] == 0) || (iVar27 < (short)local_1c[1])) &&
                (((*local_1c & 0xc000) != 0xc000 &&
                 ((((local_8[1] & 0xc000) != 0xc000 && ((*local_18 & 0xc000) != 0xc000)) &&
                  ((local_28[1] & 0xc000) != 0xc000)))))) && ((local_18[1] & 0xc000) != 0xc000)) {
              local_1c[1] = uVar26;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2 - 1;
              pbVar24[2] = bVar3 - 1;
              param_5 = param_5 + 1;
              pbVar24 = pbVar24 + 4;
            }
            pbVar23 = pbVar24;
            if ((((local_8[param_2 + -1] == 0) || (iVar27 < (short)local_8[param_2 + -1])) &&
                (((local_8[param_2] & 0xc000) != 0xc000 &&
                 (((local_8[-1] & 0xc000) != 0xc000 && ((local_28[param_2] & 0xc000) != 0xc000))))))
               && (((local_28[-1] & 0xc000) != 0xc000 &&
                   ((local_28[param_2 + -1] & 0xc000) != 0xc000)))) {
              pbVar23 = pbVar24 + 4;
              local_8[param_2 + -1] = uVar26;
              *pbVar24 = bVar1 - 1;
              pbVar24[1] = bVar2 + 1;
              pbVar24[2] = bVar3 - 1;
              param_5 = param_5 + 1;
            }
            local_10 = param_2 * 2;
            if ((((((local_8[param_2 + 1] == 0) || (iVar27 < (short)local_8[param_2 + 1])) &&
                  ((local_8[param_2] & 0xc000) != 0xc000)) &&
                 (((local_8[1] & 0xc000) != 0xc000 && ((local_28[param_2] & 0xc000) != 0xc000)))) &&
                ((local_28[1] & 0xc000) != 0xc000)) && ((local_28[param_2 + 1] & 0xc000) != 0xc000))
            {
              local_8[param_2 + 1] = uVar26;
              pbVar24 = pbVar23;
              local_28 = puVar15;
LAB_006acb91:
              pbVar23 = pbVar24 + 4;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2 + 1;
              pbVar24[2] = bVar3 - 1;
              param_5 = param_5 + 1;
              puVar15 = local_28;
            }
          }
        }
        else {
          local_10 = local_14 & 0x10;
          if ((local_10 == 0) && ((local_28[-1] == 0 || (iVar27 + 3 < (int)(short)local_28[-1])))) {
            local_28[-1] = sVar5 + 3;
            pbVar23[1] = bVar2;
            *pbVar23 = bVar1 - 1;
            pbVar23[2] = bVar3;
            pbVar23 = pbVar23 + 4;
            param_5 = param_5 + 1;
          }
          uVar13 = local_14 & 1;
          if ((uVar13 == 0) && ((local_28[1] == 0 || (iVar27 + 3 < (int)(short)local_28[1])))) {
            local_28[1] = sVar5 + 3;
            pbVar23[1] = bVar2;
            *pbVar23 = bVar1 + 1;
            pbVar23[2] = bVar3;
            pbVar23 = pbVar23 + 4;
            param_5 = param_5 + 1;
          }
          uVar14 = local_14 & 0x20;
          pbVar24 = pbVar23;
          if (uVar14 == 0) {
            uVar26 = local_28[-param_2];
            if ((uVar26 == 0) || (iVar27 + 3 < (int)(short)uVar26)) {
              pbVar24 = pbVar23 + 4;
              local_28[-param_2] = sVar5 + 3;
              pbVar23[1] = bVar2 - 1;
              *pbVar23 = bVar1;
              pbVar23[2] = bVar3;
              param_5 = param_5 + 1;
            }
          }
          uVar17 = local_14 & 2;
          pbVar23 = pbVar24;
          if ((uVar17 == 0) &&
             ((local_28[param_2] == 0 || (iVar27 + 3 < (int)(short)local_28[param_2])))) {
            pbVar23 = pbVar24 + 4;
            local_28[param_2] = sVar5 + 3;
            pbVar24[1] = bVar2 + 1;
            *pbVar24 = bVar1;
            pbVar24[2] = bVar3;
            param_5 = param_5 + 1;
          }
          uVar18 = local_14 & 0x40;
          pbVar24 = pbVar23;
          if (uVar18 == 0) {
            local_8 = local_28 + -local_c;
            if ((*local_8 == 0) || (iVar27 + 3 < (int)(short)*local_8)) {
              pbVar24 = pbVar23 + 4;
              *local_8 = sVar5 + 3;
              pbVar23[1] = bVar2;
              *pbVar23 = bVar1;
              pbVar23[2] = bVar3 - 1;
              param_5 = param_5 + 1;
            }
          }
          uVar19 = local_14 & 4;
          pbVar23 = pbVar24;
          if ((uVar19 == 0) &&
             ((local_28[local_c] == 0 || (iVar27 + 3 < (int)(short)local_28[local_c])))) {
            pbVar23 = pbVar24 + 4;
            local_28[local_c] = sVar5 + 3;
            pbVar24[1] = bVar2;
            *pbVar24 = bVar1;
            pbVar24[2] = bVar3 + 1;
            param_5 = param_5 + 1;
          }
          if ((uVar19 == 0) && (local_8 = local_28 + local_c, -1 < (short)local_28[local_c])) {
            pbVar24 = pbVar23;
            if ((local_10 == 0) &&
               (((local_8[-1] == 0 || (iVar27 + 4 < (int)(short)local_8[-1])) &&
                ((local_28[-1] & 0xc000) != 0xc000)))) {
              pbVar24 = pbVar23 + 4;
              local_8[-1] = sVar5 + 4;
              *pbVar23 = bVar1 - 1;
              pbVar23[1] = bVar2;
              pbVar23[2] = bVar3 + 1;
              param_5 = param_5 + 1;
            }
            pbVar23 = pbVar24;
            if (((uVar13 == 0) && ((local_8[1] == 0 || (iVar27 + 4 < (int)(short)local_8[1])))) &&
               ((local_28[1] & 0xc000) != 0xc000)) {
              pbVar23 = pbVar24 + 4;
              local_8[1] = sVar5 + 4;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2;
              pbVar24[2] = bVar3 + 1;
              param_5 = param_5 + 1;
            }
            pbVar24 = pbVar23;
            if (((uVar17 == 0) &&
                ((local_8[param_2] == 0 || (iVar27 + 4 < (int)(short)local_8[param_2])))) &&
               ((local_28[param_2] & 0xc000) != 0xc000)) {
              pbVar24 = pbVar23 + 4;
              local_8[param_2] = sVar5 + 4;
              pbVar23[1] = bVar2 + 1;
              *pbVar23 = bVar1;
              pbVar23[2] = bVar3 + 1;
              param_5 = param_5 + 1;
            }
            pbVar23 = pbVar24;
            if (uVar14 == 0) {
              local_1c = local_8 + -param_2;
              if (((*local_1c == 0) || (iVar27 + 4 < (int)(short)*local_1c)) &&
                 ((local_28[-param_2] & 0xc000) != 0xc000)) {
                pbVar23 = pbVar24 + 4;
                *local_1c = sVar5 + 4;
                pbVar24[1] = bVar2 - 1;
                *pbVar24 = bVar1;
                pbVar24[2] = bVar3 + 1;
                param_5 = param_5 + 1;
              }
            }
          }
          if ((uVar18 == 0) && (local_8 = local_28 + -local_c, -1 < (short)*local_8)) {
            pbVar24 = pbVar23;
            if (((local_10 == 0) && ((local_8[-1] == 0 || (iVar27 + 4 < (int)(short)local_8[-1]))))
               && ((local_28[-1] & 0xc000) != 0xc000)) {
              pbVar24 = pbVar23 + 4;
              local_8[-1] = sVar5 + 4;
              *pbVar23 = bVar1 - 1;
              pbVar23[1] = bVar2;
              pbVar23[2] = bVar3 - 1;
              param_5 = param_5 + 1;
            }
            pbVar23 = pbVar24;
            if ((uVar13 == 0) &&
               (((local_8[1] == 0 || (iVar27 + 4 < (int)(short)local_8[1])) &&
                ((local_28[1] & 0xc000) != 0xc000)))) {
              pbVar23 = pbVar24 + 4;
              local_8[1] = sVar5 + 4;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2;
              pbVar24[2] = bVar3 - 1;
              param_5 = param_5 + 1;
            }
            pbVar24 = pbVar23;
            if (uVar14 == 0) {
              local_1c = local_8 + -param_2;
              if (((*local_1c == 0) || (iVar27 + 4 < (int)(short)*local_1c)) &&
                 ((local_28[-param_2] & 0xc000) != 0xc000)) {
                pbVar24 = pbVar23 + 4;
                *local_1c = sVar5 + 4;
                pbVar23[1] = bVar2 - 1;
                *pbVar23 = bVar1;
                pbVar23[2] = bVar3 - 1;
                param_5 = param_5 + 1;
              }
            }
            pbVar23 = pbVar24;
            if (((uVar17 == 0) &&
                ((local_8[param_2] == 0 || (iVar27 + 4 < (int)(short)local_8[param_2])))) &&
               ((local_28[param_2] & 0xc000) != 0xc000)) {
              pbVar23 = pbVar24 + 4;
              local_8[param_2] = sVar5 + 4;
              pbVar24[1] = bVar2 + 1;
              *pbVar24 = bVar1;
              pbVar24[2] = bVar3 - 1;
              param_5 = param_5 + 1;
            }
          }
          uVar13 = local_14 & 0x30;
          pbVar24 = pbVar23;
          if (uVar13 == 0) {
            psVar20 = (short *)((int)local_28 - (param_2 * 2 + 2));
            sVar7 = *psVar20;
            if ((((sVar7 == 0) || (iVar27 + 4 < (int)sVar7)) &&
                ((local_28[-param_2] & 0xc000) != 0xc000)) && ((local_28[-1] & 0xc000) != 0xc000)) {
              pbVar24 = pbVar23 + 4;
              *psVar20 = sVar5 + 4;
              *pbVar23 = bVar1 - 1;
              pbVar23[2] = bVar3;
              pbVar23[1] = bVar2 - 1;
              param_5 = param_5 + 1;
            }
          }
          uVar14 = local_14 & 0x21;
          pbVar23 = pbVar24;
          if (uVar14 == 0) {
            puVar15 = local_28 + -param_2;
            if (((puVar15[1] == 0) || (iVar27 + 4 < (int)(short)puVar15[1])) &&
               (((*puVar15 & 0xc000) != 0xc000 && ((local_28[1] & 0xc000) != 0xc000)))) {
              pbVar23 = pbVar24 + 4;
              puVar15[1] = sVar5 + 4;
              *pbVar24 = bVar1 + 1;
              pbVar24[2] = bVar3;
              pbVar24[1] = bVar2 - 1;
              param_5 = param_5 + 1;
            }
          }
          puVar15 = (ushort *)(local_14 & 0x12);
          pbVar24 = pbVar23;
          if (((puVar15 == (ushort *)0x0) &&
              ((local_28[param_2 + -1] == 0 || (iVar27 + 4 < (int)(short)local_28[param_2 + -1]))))
             && (((local_28[param_2] & 0xc000) != 0xc000 && ((local_28[-1] & 0xc000) != 0xc000)))) {
            pbVar24 = pbVar23 + 4;
            local_28[param_2 + -1] = sVar5 + 4;
            *pbVar23 = bVar1 - 1;
            pbVar23[2] = bVar3;
            pbVar23[1] = bVar2 + 1;
            param_5 = param_5 + 1;
          }
          local_18 = (ushort *)(local_14 & 3);
          pbVar23 = pbVar24;
          if (((local_18 == (ushort *)0x0) &&
              (((local_28[param_2 + 1] == 0 || (iVar27 + 4 < (int)(short)local_28[param_2 + 1])) &&
               ((local_28[param_2] & 0xc000) != 0xc000)))) && ((local_28[1] & 0xc000) != 0xc000)) {
            pbVar23 = pbVar24 + 4;
            local_28[param_2 + 1] = sVar5 + 4;
            *pbVar24 = bVar1 + 1;
            pbVar24[2] = bVar3;
            pbVar24[1] = bVar2 + 1;
            param_5 = param_5 + 1;
          }
          iVar27 = iVar27 + 5;
          uVar26 = (ushort)iVar27;
          if ((uVar19 == 0) && ((local_28[local_c] & 0xc000) != 0xc000)) {
            pbVar24 = pbVar23;
            if (uVar13 == 0) {
              local_1c = (ushort *)((int)local_28 + (local_c * 2 - (param_2 * 2 + 2)));
              if ((((*local_1c == 0) || (iVar27 < (short)*local_1c)) &&
                  (((local_28[local_c - param_2] & 0xc000) != 0xc000 &&
                   ((((local_28[local_c + -1] & 0xc000) != 0xc000 &&
                     ((local_28[-param_2] & 0xc000) != 0xc000)) &&
                    ((local_28[-1] & 0xc000) != 0xc000)))))) &&
                 ((*(ushort *)((int)local_28 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
                pbVar24 = pbVar23 + 4;
                *local_1c = uVar26;
                *pbVar23 = bVar1 - 1;
                pbVar23[1] = bVar2 - 1;
                pbVar23[2] = bVar3 + 1;
                param_5 = param_5 + 1;
              }
            }
            pbVar23 = pbVar24;
            if (uVar14 == 0) {
              local_10 = param_2 * 2;
              local_1c = local_28 + (local_c - param_2);
              if ((((local_1c[1] == 0) || (iVar27 < (short)local_1c[1])) &&
                  (((*local_1c & 0xc000) != 0xc000 &&
                   (((local_28[local_c + 1] & 0xc000) != 0xc000 &&
                    ((local_28[-param_2] & 0xc000) != 0xc000)))))) &&
                 (((local_28[1] & 0xc000) != 0xc000 &&
                  (((local_28 + -param_2)[1] & 0xc000) != 0xc000)))) {
                pbVar23 = pbVar24 + 4;
                local_1c[1] = uVar26;
                *pbVar24 = bVar1 + 1;
                pbVar24[2] = bVar3 + 1;
                pbVar24[1] = bVar2 - 1;
                param_5 = param_5 + 1;
              }
            }
            pbVar24 = pbVar23;
            if (puVar15 == (ushort *)0x0) {
              if ((((((local_28[local_c + param_2 + -1] == 0) ||
                     (iVar27 < (short)local_28[local_c + param_2 + -1])) &&
                    ((local_28[local_c + param_2] & 0xc000) != 0xc000)) &&
                   (((local_28[local_c + -1] & 0xc000) != 0xc000 &&
                    ((local_28[param_2] & 0xc000) != 0xc000)))) &&
                  ((local_28[-1] & 0xc000) != 0xc000)) &&
                 ((local_28[param_2 + -1] & 0xc000) != 0xc000)) {
                pbVar24 = pbVar23 + 4;
                local_28[local_c + param_2 + -1] = uVar26;
                *pbVar23 = bVar1 - 1;
                pbVar23[1] = bVar2 + 1;
                pbVar23[2] = bVar3 + 1;
                param_5 = param_5 + 1;
              }
            }
            pbVar23 = pbVar24;
            if (local_18 == (ushort *)0x0) {
              if ((((local_28[local_c + param_2 + 1] == 0) ||
                   (iVar27 < (short)local_28[local_c + param_2 + 1])) &&
                  (((local_28[local_c + param_2] & 0xc000) != 0xc000 &&
                   ((((local_28[local_c + 1] & 0xc000) != 0xc000 &&
                     ((local_28[param_2] & 0xc000) != 0xc000)) && ((local_28[1] & 0xc000) != 0xc000)
                    ))))) && ((local_28[param_2 + 1] & 0xc000) != 0xc000)) {
                pbVar23 = pbVar24 + 4;
                local_28[local_c + param_2 + 1] = uVar26;
                *pbVar24 = bVar1 + 1;
                pbVar24[1] = bVar2 + 1;
                pbVar24[2] = bVar3 + 1;
                param_5 = param_5 + 1;
              }
            }
          }
          if ((uVar18 == 0) && (local_8 = local_28 + -local_c, (*local_8 & 0xc000) != 0xc000)) {
            pbVar24 = pbVar23;
            if (uVar13 == 0) {
              local_1c = (ushort *)((int)local_8 - (param_2 * 2 + 2));
              if ((((*local_1c == 0) || (iVar27 < (short)*local_1c)) &&
                  ((local_10 = param_2 * 2, (local_8[-param_2] & 0xc000) != 0xc000 &&
                   ((((local_8[-1] & 0xc000) != 0xc000 && ((local_28[-param_2] & 0xc000) != 0xc000))
                    && ((local_28[-1] & 0xc000) != 0xc000)))))) &&
                 ((*(ushort *)((int)local_28 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
                pbVar24 = pbVar23 + 4;
                *local_1c = uVar26;
                *pbVar23 = bVar1 - 1;
                pbVar23[1] = bVar2 - 1;
                pbVar23[2] = bVar3 - 1;
                param_5 = param_5 + 1;
              }
            }
            pbVar25 = pbVar24;
            if (uVar14 == 0) {
              local_10 = param_2 * 2;
              local_1c = local_8 + -param_2;
              if ((((local_1c[1] == 0) || (iVar27 < (short)local_1c[1])) &&
                  (((*local_1c & 0xc000) != 0xc000 &&
                   (((local_8[1] & 0xc000) != 0xc000 && ((local_28[-param_2] & 0xc000) != 0xc000))))
                  )) && (((local_28[1] & 0xc000) != 0xc000 &&
                         (((local_28 + -param_2)[1] & 0xc000) != 0xc000)))) {
                pbVar25 = pbVar24 + 4;
                local_1c[1] = uVar26;
                *pbVar24 = bVar1 + 1;
                pbVar24[2] = bVar3 - 1;
                pbVar24[1] = bVar2 - 1;
                param_5 = param_5 + 1;
              }
            }
            pbVar23 = pbVar25;
            if ((((puVar15 == (ushort *)0x0) &&
                 ((((local_8[param_2 + -1] == 0 || (iVar27 < (short)local_8[param_2 + -1])) &&
                   ((local_8[param_2] & 0xc000) != 0xc000)) &&
                  (((local_8[-1] & 0xc000) != 0xc000 && ((local_28[param_2] & 0xc000) != 0xc000)))))
                 ) && ((local_28[-1] & 0xc000) != 0xc000)) &&
               ((local_28[param_2 + -1] & 0xc000) != 0xc000)) {
              pbVar23 = pbVar25 + 4;
              local_8[param_2 + -1] = uVar26;
              *pbVar25 = bVar1 - 1;
              pbVar25[1] = bVar2 + 1;
              pbVar25[2] = bVar3 - 1;
              param_5 = param_5 + 1;
            }
            if (((local_18 == (ushort *)0x0) &&
                ((local_8[param_2 + 1] == 0 || (iVar27 < (short)local_8[param_2 + 1])))) &&
               (((local_8[param_2] & 0xc000) != 0xc000 &&
                (((((local_8[1] & 0xc000) != 0xc000 && ((local_28[param_2] & 0xc000) != 0xc000)) &&
                  ((local_28[1] & 0xc000) != 0xc000)) &&
                 ((local_28[param_2 + 1] & 0xc000) != 0xc000)))))) {
              local_8[param_2 + 1] = uVar26;
              pbVar24 = pbVar23;
              local_28 = puVar15;
              goto LAB_006acb91;
            }
          }
        }
        local_28 = puVar15;
        local_2c = local_30 & 4;
        local_30 = local_30 & 0x40;
        if (local_48 != (short *)0x0) {
          if (0 < *local_48) goto LAB_006acc47;
          if ((((bVar8) && ((int)(uVar21 - 1) <= param_8)) &&
              ((param_8 <= (int)(uVar21 + 1) &&
               ((((int)(uVar12 - 1) <= param_9 && (param_9 <= (int)(uVar12 + 1))) &&
                ((int)(uVar10 - 1) <= param_10)))))) && (param_10 <= (int)(uVar10 + 1))) {
            bVar9 = true;
          }
        }
        local_40 = local_40 + 1;
      } while (local_40 < local_44);
      if ((bVar9) || (param_5 == 0)) break;
      local_44 = param_5;
      local_24 = local_20;
      local_20 = pbVar11;
    }
  }
LAB_006acc47:
  if (sVar4 < 0) {
    *local_48 = sVar4;
  }
  FUN_006ab060(&local_38);
  return local_4c;
}

