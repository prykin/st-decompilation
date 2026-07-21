
undefined4
FUN_006a64e0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  bool bVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  short *psVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  short sVar21;
  int iVar22;
  undefined4 local_34;
  int local_30;
  int local_2c;
  byte *local_24;
  int local_20;
  byte *local_1c;
  byte *local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;

  local_14 = param_2 * param_3;
  local_34 = 0;
  *(undefined2 *)(param_1 + (param_2 * param_6 + param_5 + local_14 * param_7) * 2) = 1;
  if (((param_5 == param_8) && (param_6 == param_9)) && (param_7 == param_10)) {
    return 0;
  }
  iVar17 = (param_2 + param_3) * param_4;
  local_20 = iVar17 * 2;
  local_24 = (byte *)FUN_006bfb70(iVar17 * 0x10);
  if (local_24 == (byte *)0x0) {
LAB_006a6ed7:
    local_34 = 0xfffffffe;
  }
  else {
    local_1c = local_24 + iVar17 * 8;
    local_30 = 1;
    *local_1c = (byte)param_5;
    local_1c[1] = (byte)param_6;
    local_1c[2] = (byte)param_7;
    bVar5 = false;
    local_18 = local_24;
    while( true ) {
      param_6 = 0;
      local_2c = 0;
      pbVar19 = local_18;
      if (local_30 < 1) break;
      do {
        bVar1 = local_1c[local_2c * 4 + 1];
        uVar7 = (uint)bVar1;
        bVar2 = local_1c[local_2c * 4];
        uVar16 = (uint)bVar2;
        bVar3 = local_1c[local_2c * 4 + 2];
        uVar8 = (uint)bVar3;
        iVar17 = uVar7 * param_2 + uVar16 + local_14 * uVar8;
        sVar21 = *(short *)(param_1 + iVar17 * 2);
        iVar22 = (int)sVar21;
        local_10 = param_1 + iVar17 * 2;
        if (local_20 < param_6 + 0x1a) {
          local_20 = local_20 + 0x80;
          pbVar6 = (byte *)FUN_006bfb50((undefined4 *)local_24,local_20 * 8);
          if (pbVar6 == (byte *)0x0) goto LAB_006a6ed7;
          local_18 = pbVar6 + ((int)local_18 - (int)local_24 >> 2) * 4;
          local_1c = pbVar6 + ((int)local_1c - (int)local_24 >> 2) * 4;
          if (local_18 == pbVar6) {
            local_1c = local_1c + 0x200;
          }
          else {
            local_18 = local_18 + 0x200;
          }
          pbVar19 = local_18 + param_6 * 4;
          local_24 = pbVar6;
          Library::MSVCRT::FUN_0072da70
                    ((undefined4 *)(pbVar6 + local_20 * 4),
                     (undefined4 *)(pbVar6 + local_20 * 4 + -0x200),local_20 * 4 - 0x200);
        }
        pbVar6 = local_1c;
        local_c = 0xff;
        if ((int)uVar16 < param_2 + -1) {
          local_c = 0xfe;
        }
        if (uVar16 != 0) {
          local_c = local_c & 0xffffffef;
        }
        if ((int)uVar7 < param_3 + -1) {
          local_c = local_c & 0xfffffffd;
        }
        if (uVar7 != 0) {
          local_c = local_c & 0xffffffdf;
        }
        if ((int)uVar8 < param_4 + -1) {
          local_c = local_c & 0xfffffffb;
        }
        if (uVar8 != 0) {
          local_c = local_c & 0xffffffbf;
        }
        uVar9 = local_c & 0x10;
        pbVar18 = pbVar19;
        if ((uVar9 == 0) &&
           ((*(short *)(local_10 + -2) == 0 || (iVar22 + 3 < (int)*(short *)(local_10 + -2))))) {
          pbVar18 = pbVar19 + 4;
          *(short *)(local_10 + -2) = sVar21 + 3;
          pbVar19[1] = bVar1;
          *pbVar19 = bVar2 - 1;
          pbVar19[2] = bVar3;
          param_6 = param_6 + 1;
        }
        uVar10 = local_c & 1;
        pbVar19 = pbVar18;
        if ((uVar10 == 0) &&
           ((*(short *)(local_10 + 2) == 0 || (iVar22 + 3 < (int)*(short *)(local_10 + 2))))) {
          pbVar19 = pbVar18 + 4;
          *(short *)(local_10 + 2) = sVar21 + 3;
          pbVar18[1] = bVar1;
          *pbVar18 = bVar2 + 1;
          pbVar18[2] = bVar3;
          param_6 = param_6 + 1;
        }
        uVar11 = local_c & 0x20;
        pbVar18 = pbVar19;
        if (uVar11 == 0) {
          psVar12 = (short *)(local_10 + param_2 * -2);
          sVar4 = *psVar12;
          if ((sVar4 == 0) || (iVar22 + 3 < (int)sVar4)) {
            pbVar18 = pbVar19 + 4;
            *psVar12 = sVar21 + 3;
            pbVar19[1] = bVar1 - 1;
            *pbVar19 = bVar2;
            pbVar19[2] = bVar3;
            param_6 = param_6 + 1;
          }
        }
        uVar13 = local_c & 2;
        pbVar19 = pbVar18;
        if ((uVar13 == 0) &&
           ((sVar4 = *(short *)(local_10 + param_2 * 2), sVar4 == 0 || (iVar22 + 3 < (int)sVar4))))
        {
          pbVar19 = pbVar18 + 4;
          *(short *)(local_10 + param_2 * 2) = sVar21 + 3;
          pbVar18[2] = bVar3;
          *pbVar18 = bVar2;
          pbVar18[1] = bVar1 + 1;
          param_6 = param_6 + 1;
        }
        uVar14 = local_c & 0x40;
        pbVar18 = pbVar19;
        if (uVar14 == 0) {
          psVar12 = (short *)(local_10 + local_14 * -2);
          sVar4 = *psVar12;
          if ((sVar4 == 0) || (iVar22 + 3 < (int)sVar4)) {
            pbVar18 = pbVar19 + 4;
            *psVar12 = sVar21 + 3;
            pbVar19[1] = bVar1;
            *pbVar19 = bVar2;
            pbVar19[2] = bVar3 - 1;
            param_6 = param_6 + 1;
          }
        }
        uVar15 = local_c & 4;
        pbVar19 = pbVar18;
        if ((uVar15 == 0) &&
           ((sVar4 = *(short *)(local_10 + local_14 * 2), sVar4 == 0 || (iVar22 + 3 < (int)sVar4))))
        {
          pbVar19 = pbVar18 + 4;
          *(short *)(local_10 + local_14 * 2) = sVar21 + 3;
          pbVar18[2] = bVar3 + 1;
          *pbVar18 = bVar2;
          pbVar18[1] = bVar1;
          param_6 = param_6 + 1;
        }
        if (uVar15 == 0) {
          local_8 = local_10 + local_14 * 2;
          pbVar18 = pbVar19;
          if ((uVar9 == 0) &&
             ((*(short *)(local_8 + -2) == 0 || (iVar22 + 4 < (int)*(short *)(local_8 + -2))))) {
            pbVar18 = pbVar19 + 4;
            *(short *)(local_8 + -2) = sVar21 + 4;
            *pbVar19 = bVar2 - 1;
            pbVar19[1] = bVar1;
            pbVar19[2] = bVar3 + 1;
            param_6 = param_6 + 1;
          }
          pbVar19 = pbVar18;
          if ((uVar10 == 0) &&
             ((*(short *)(local_8 + 2) == 0 || (iVar22 + 4 < (int)*(short *)(local_8 + 2))))) {
            pbVar19 = pbVar18 + 4;
            *(short *)(local_8 + 2) = sVar21 + 4;
            *pbVar18 = bVar2 + 1;
            pbVar18[1] = bVar1;
            pbVar18[2] = bVar3 + 1;
            param_6 = param_6 + 1;
          }
          pbVar18 = pbVar19;
          if ((uVar13 == 0) &&
             ((sVar4 = *(short *)(local_8 + param_2 * 2), sVar4 == 0 || (iVar22 + 4 < (int)sVar4))))
          {
            pbVar18 = pbVar19 + 4;
            *(short *)(local_8 + param_2 * 2) = sVar21 + 4;
            *pbVar19 = bVar2;
            pbVar19[1] = bVar1 + 1;
            pbVar19[2] = bVar3 + 1;
            param_6 = param_6 + 1;
          }
          pbVar19 = pbVar18;
          if (uVar11 == 0) {
            psVar12 = (short *)(local_8 + param_2 * -2);
            sVar4 = *psVar12;
            if ((sVar4 == 0) || (iVar22 + 4 < (int)sVar4)) {
              pbVar19 = pbVar18 + 4;
              *psVar12 = sVar21 + 4;
              pbVar18[1] = bVar1 - 1;
              *pbVar18 = bVar2;
              pbVar18[2] = bVar3 + 1;
              param_6 = param_6 + 1;
            }
          }
        }
        if (uVar14 == 0) {
          local_8 = local_10 + local_14 * -2;
          pbVar18 = pbVar19;
          if ((uVar9 == 0) &&
             ((*(short *)(local_8 + -2) == 0 || (iVar22 + 4 < (int)*(short *)(local_8 + -2))))) {
            pbVar18 = pbVar19 + 4;
            *(short *)(local_8 + -2) = sVar21 + 4;
            *pbVar19 = bVar2 - 1;
            pbVar19[1] = bVar1;
            pbVar19[2] = bVar3 - 1;
            param_6 = param_6 + 1;
          }
          pbVar19 = pbVar18;
          if ((uVar10 == 0) &&
             ((*(short *)(local_8 + 2) == 0 || (iVar22 + 4 < (int)*(short *)(local_8 + 2))))) {
            pbVar19 = pbVar18 + 4;
            *(short *)(local_8 + 2) = sVar21 + 4;
            *pbVar18 = bVar2 + 1;
            pbVar18[1] = bVar1;
            pbVar18[2] = bVar3 - 1;
            param_6 = param_6 + 1;
          }
          pbVar18 = pbVar19;
          if (uVar11 == 0) {
            psVar12 = (short *)(local_8 + param_2 * -2);
            sVar4 = *psVar12;
            if ((sVar4 == 0) || (iVar22 + 4 < (int)sVar4)) {
              pbVar18 = pbVar19 + 4;
              *psVar12 = sVar21 + 4;
              pbVar19[1] = bVar1 - 1;
              *pbVar19 = bVar2;
              pbVar19[2] = bVar3 - 1;
              param_6 = param_6 + 1;
            }
          }
          pbVar19 = pbVar18;
          if ((uVar13 == 0) &&
             ((sVar4 = *(short *)(local_8 + param_2 * 2), sVar4 == 0 || (iVar22 + 4 < (int)sVar4))))
          {
            pbVar19 = pbVar18 + 4;
            *(short *)(local_8 + param_2 * 2) = sVar21 + 4;
            pbVar18[1] = bVar1 + 1;
            *pbVar18 = bVar2;
            pbVar18[2] = bVar3 - 1;
            param_6 = param_6 + 1;
          }
        }
        uVar9 = local_c & 0x30;
        pbVar18 = pbVar19;
        if (uVar9 == 0) {
          psVar12 = (short *)(local_10 - (param_2 * 2 + 2));
          sVar4 = *psVar12;
          if ((sVar4 == 0) || (iVar22 + 4 < (int)sVar4)) {
            pbVar18 = pbVar19 + 4;
            *psVar12 = sVar21 + 4;
            *pbVar19 = bVar2 - 1;
            pbVar19[2] = bVar3;
            pbVar19[1] = bVar1 - 1;
            param_6 = param_6 + 1;
          }
        }
        uVar10 = local_c & 0x21;
        pbVar19 = pbVar18;
        if (uVar10 == 0) {
          iVar17 = local_10 + param_2 * -2;
          sVar4 = *(short *)(iVar17 + 2);
          if ((sVar4 == 0) || (iVar22 + 4 < (int)sVar4)) {
            pbVar19 = pbVar18 + 4;
            *(short *)(iVar17 + 2) = sVar21 + 4;
            *pbVar18 = bVar2 + 1;
            pbVar18[2] = bVar3;
            pbVar18[1] = bVar1 - 1;
            param_6 = param_6 + 1;
          }
        }
        uVar11 = local_c & 0x12;
        pbVar18 = pbVar19;
        if ((uVar11 == 0) &&
           ((sVar4 = *(short *)(local_10 + -2 + param_2 * 2), sVar4 == 0 ||
            (iVar22 + 4 < (int)sVar4)))) {
          pbVar18 = pbVar19 + 4;
          *(short *)(local_10 + -2 + param_2 * 2) = sVar21 + 4;
          *pbVar19 = bVar2 - 1;
          pbVar19[1] = bVar1 + 1;
          pbVar19[2] = bVar3;
          param_6 = param_6 + 1;
        }
        uVar13 = local_c & 3;
        pbVar19 = pbVar18;
        if ((uVar13 == 0) &&
           ((sVar4 = *(short *)(local_10 + 2 + param_2 * 2), sVar4 == 0 || (iVar22 + 4 < (int)sVar4)
            ))) {
          pbVar19 = pbVar18 + 4;
          *(short *)(local_10 + 2 + param_2 * 2) = sVar21 + 4;
          *pbVar18 = bVar2 + 1;
          pbVar18[1] = bVar1 + 1;
          pbVar18[2] = bVar3;
          param_6 = param_6 + 1;
        }
        iVar22 = iVar22 + 5;
        sVar21 = (short)iVar22;
        if (uVar15 == 0) {
          local_8 = local_10 + local_14 * 2;
          pbVar18 = pbVar19;
          if (uVar9 == 0) {
            psVar12 = (short *)(local_8 - (param_2 * 2 + 2));
            sVar4 = *psVar12;
            if ((sVar4 == 0) || (iVar22 < sVar4)) {
              *psVar12 = sVar21;
              pbVar18 = pbVar19 + 4;
              *pbVar19 = bVar2 - 1;
              pbVar19[1] = bVar1 - 1;
              pbVar19[2] = bVar3 + 1;
              param_6 = param_6 + 1;
            }
          }
          pbVar20 = pbVar18;
          if (uVar10 == 0) {
            iVar17 = local_8 + param_2 * -2;
            sVar4 = *(short *)(iVar17 + 2);
            if ((sVar4 == 0) || (iVar22 < sVar4)) {
              *(short *)(iVar17 + 2) = sVar21;
              pbVar20 = pbVar18 + 4;
              *pbVar18 = bVar2 + 1;
              pbVar18[1] = bVar1 - 1;
              pbVar18[2] = bVar3 + 1;
              param_6 = param_6 + 1;
            }
          }
          if ((uVar11 == 0) &&
             ((sVar4 = *(short *)(local_8 + -2 + param_2 * 2), sVar4 == 0 || (iVar22 < sVar4)))) {
            *(short *)(local_8 + -2 + param_2 * 2) = sVar21;
            *pbVar20 = bVar2 - 1;
            pbVar20[1] = bVar1 + 1;
            pbVar20[2] = bVar3 + 1;
            pbVar20 = pbVar20 + 4;
            param_6 = param_6 + 1;
          }
          pbVar19 = pbVar20;
          if ((uVar13 == 0) &&
             ((sVar4 = *(short *)(local_8 + 2 + param_2 * 2), sVar4 == 0 || (iVar22 < sVar4)))) {
            *(short *)(local_8 + 2 + param_2 * 2) = sVar21;
            pbVar19 = pbVar20 + 4;
            *pbVar20 = bVar2 + 1;
            pbVar20[1] = bVar1 + 1;
            pbVar20[2] = bVar3 + 1;
            param_6 = param_6 + 1;
          }
        }
        if (uVar14 == 0) {
          local_8 = local_10 + local_14 * -2;
          pbVar18 = pbVar19;
          if (uVar9 == 0) {
            psVar12 = (short *)(local_8 - (param_2 * 2 + 2));
            sVar4 = *psVar12;
            if ((sVar4 == 0) || (iVar22 < sVar4)) {
              *psVar12 = sVar21;
              pbVar18 = pbVar19 + 4;
              *pbVar19 = bVar2 - 1;
              pbVar19[1] = bVar1 - 1;
              pbVar19[2] = bVar3 - 1;
              param_6 = param_6 + 1;
            }
          }
          pbVar20 = pbVar18;
          if (uVar10 == 0) {
            iVar17 = local_8 + param_2 * -2;
            sVar4 = *(short *)(iVar17 + 2);
            if ((sVar4 == 0) || (iVar22 < sVar4)) {
              *(short *)(iVar17 + 2) = sVar21;
              pbVar20 = pbVar18 + 4;
              *pbVar18 = bVar2 + 1;
              pbVar18[1] = bVar1 - 1;
              pbVar18[2] = bVar3 - 1;
              param_6 = param_6 + 1;
            }
          }
          if ((uVar11 == 0) &&
             ((sVar4 = *(short *)(local_8 + -2 + param_2 * 2), sVar4 == 0 || (iVar22 < sVar4)))) {
            *(short *)(local_8 + -2 + param_2 * 2) = sVar21;
            *pbVar20 = bVar2 - 1;
            pbVar20[1] = bVar1 + 1;
            pbVar20[2] = bVar3 - 1;
            pbVar20 = pbVar20 + 4;
            param_6 = param_6 + 1;
          }
          pbVar19 = pbVar20;
          if ((uVar13 == 0) &&
             ((sVar4 = *(short *)(local_8 + 2 + param_2 * 2), sVar4 == 0 || (iVar22 < sVar4)))) {
            *(short *)(local_8 + 2 + param_2 * 2) = sVar21;
            pbVar19 = pbVar20 + 4;
            *pbVar20 = bVar2 + 1;
            pbVar20[1] = bVar1 + 1;
            pbVar20[2] = bVar3 - 1;
            param_6 = param_6 + 1;
          }
        }
        if ((((((-1 < param_8) && (-1 < param_9)) && (-1 < param_10)) &&
             (((int)(uVar16 - 1) <= param_8 && (param_8 <= (int)(uVar16 + 1))))) &&
            (((int)(uVar7 - 1) <= param_9 &&
             ((param_9 < (int)(uVar7 + 1) && ((int)(uVar8 - 1) <= param_10)))))) &&
           (param_10 < (int)(uVar8 + 1))) {
          bVar5 = true;
        }
        local_2c = local_2c + 1;
      } while (local_2c < local_30);
      if ((bVar5) || (param_6 == 0)) break;
      local_1c = local_18;
      local_30 = param_6;
      local_18 = pbVar6;
    }
  }
  FreeAndNull(&local_24);
  return local_34;
}

