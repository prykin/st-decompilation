
undefined4
FUN_006a6f00(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  short *psVar18;
  int iVar19;
  int local_4c;
  int local_48;
  undefined4 local_1c;
  byte *local_18;
  int local_14;
  byte *local_10;
  byte *local_c;
  int local_8;
  
  local_8 = param_2 * param_3;
  iVar7 = param_2 * param_6 + param_5 + local_8 * param_7;
  local_1c = 0;
  if (*(short *)(param_1 + iVar7 * 2) < 0) {
    return 0;
  }
  iVar17 = (param_2 + param_3) * param_4;
  local_14 = iVar17 * 2;
  local_18 = (byte *)FUN_006bfb70(iVar17 * 0x10);
  if (local_18 == (byte *)0x0) {
LAB_006a76ae:
    local_1c = 0xfffffffe;
  }
  else {
    local_c = local_18 + iVar17 * 8;
    *(undefined2 *)(param_1 + iVar7 * 2) = 0;
    *local_c = (byte)param_5;
    local_c[1] = (byte)param_6;
    local_4c = 1;
    local_c[2] = (byte)param_7;
    local_10 = local_18;
    while( true ) {
      param_5 = 0;
      local_48 = 0;
      pbVar16 = local_10;
      if (local_4c < 1) break;
      do {
        bVar1 = local_c[local_48 * 4 + 2];
        uVar9 = (uint)bVar1;
        bVar2 = local_c[local_48 * 4 + 1];
        uVar8 = (uint)bVar2;
        bVar3 = local_c[local_48 * 4];
        uVar10 = (uint)bVar3;
        iVar7 = param_1 + (uVar8 * param_2 + uVar10 + uVar9 * local_8) * 2;
        if (local_14 < param_5 + 0x1a) {
          local_14 = local_14 + 0x80;
          pbVar6 = (byte *)FUN_006bfb50((undefined4 *)local_18,local_14 * 8);
          if (pbVar6 == (byte *)0x0) goto LAB_006a76ae;
          local_10 = pbVar6 + ((int)local_10 - (int)local_18 >> 2) * 4;
          local_c = pbVar6 + ((int)local_c - (int)local_18 >> 2) * 4;
          if (local_10 == pbVar6) {
            local_c = local_c + 0x200;
          }
          else {
            local_10 = local_10 + 0x200;
          }
          pbVar16 = local_10 + param_5 * 4;
          local_18 = pbVar6;
          Library::MSVCRT::FUN_0072da70
                    ((undefined4 *)(pbVar6 + local_14 * 4),
                     (undefined4 *)(pbVar6 + local_14 * 4 + -0x200),local_14 * 4 - 0x200);
        }
        pbVar6 = local_c;
        param_6 = 0xff;
        if ((int)uVar10 < param_2 + -1) {
          param_6 = 0xfe;
        }
        if (uVar10 != 0) {
          param_6 = param_6 & 0xffffffef;
        }
        if ((int)uVar8 < param_3 + -1) {
          param_6 = param_6 & 0xfffffffd;
        }
        if (uVar8 != 0) {
          param_6 = param_6 & 0xffffffdf;
        }
        bVar4 = (int)uVar9 < param_4 + -1;
        if (bVar4) {
          param_6 = param_6 & 0xfffffffb;
        }
        bVar5 = uVar9 != 0;
        if (bVar5) {
          param_6 = param_6 & 0xffffffbf;
        }
        uVar8 = param_6 & 0x10;
        if ((uVar8 == 0) && (*(short *)(iVar7 + -2) < 0)) {
          *(undefined2 *)(iVar7 + -2) = 0;
          pbVar16[1] = bVar2;
          *pbVar16 = bVar3 - 1;
          pbVar16[2] = bVar1;
          pbVar16 = pbVar16 + 4;
          param_5 = param_5 + 1;
        }
        uVar9 = param_6 & 1;
        if ((uVar9 == 0) && (*(short *)(iVar7 + 2) < 0)) {
          *(undefined2 *)(iVar7 + 2) = 0;
          pbVar16[1] = bVar2;
          *pbVar16 = bVar3 + 1;
          pbVar16[2] = bVar1;
          pbVar16 = pbVar16 + 4;
          param_5 = param_5 + 1;
        }
        uVar10 = param_6 & 0x20;
        if ((uVar10 == 0) && (psVar18 = (short *)(iVar7 + param_2 * -2), *psVar18 < 0)) {
          *psVar18 = 0;
          *pbVar16 = bVar3;
          pbVar16[1] = bVar2 - 1;
          pbVar16[2] = bVar1;
          pbVar16 = pbVar16 + 4;
          param_5 = param_5 + 1;
        }
        uVar11 = param_6 & 2;
        if ((uVar11 == 0) && (*(short *)(iVar7 + param_2 * 2) < 0)) {
          *(undefined2 *)(iVar7 + param_2 * 2) = 0;
          *pbVar16 = bVar3;
          pbVar16[1] = bVar2 + 1;
          pbVar16[2] = bVar1;
          pbVar16 = pbVar16 + 4;
          param_5 = param_5 + 1;
        }
        if ((bVar5) && (psVar18 = (short *)(iVar7 + local_8 * -2), *psVar18 < 0)) {
          *psVar18 = 0;
          *pbVar16 = bVar3;
          pbVar16[2] = bVar1 - 1;
          pbVar16[1] = bVar2;
          pbVar16 = pbVar16 + 4;
          param_5 = param_5 + 1;
        }
        if ((bVar4) && (*(short *)(iVar7 + local_8 * 2) < 0)) {
          *(undefined2 *)(iVar7 + local_8 * 2) = 0;
          *pbVar16 = bVar3;
          pbVar16[2] = bVar1 + 1;
          pbVar16[1] = bVar2;
          pbVar16 = pbVar16 + 4;
          param_5 = param_5 + 1;
        }
        uVar12 = param_6 & 0x30;
        if ((uVar12 == 0) && (psVar18 = (short *)(iVar7 - (param_2 * 2 + 2)), *psVar18 < 0)) {
          *psVar18 = 0;
          pbVar16[2] = bVar1;
          *pbVar16 = bVar3 - 1;
          pbVar16[1] = bVar2 - 1;
          pbVar16 = pbVar16 + 4;
          param_5 = param_5 + 1;
        }
        uVar13 = param_6 & 0x21;
        if ((uVar13 == 0) && (iVar17 = iVar7 + param_2 * -2, *(short *)(iVar17 + 2) < 0)) {
          *(undefined2 *)(iVar17 + 2) = 0;
          pbVar16[2] = bVar1;
          *pbVar16 = bVar3 + 1;
          pbVar16[1] = bVar2 - 1;
          pbVar16 = pbVar16 + 4;
          param_5 = param_5 + 1;
        }
        uVar14 = param_6 & 0x12;
        if ((uVar14 == 0) && (*(short *)(iVar7 + -2 + param_2 * 2) < 0)) {
          *(undefined2 *)(iVar7 + -2 + param_2 * 2) = 0;
          pbVar16[2] = bVar1;
          *pbVar16 = bVar3 - 1;
          pbVar16[1] = bVar2 + 1;
          pbVar16 = pbVar16 + 4;
          param_5 = param_5 + 1;
        }
        uVar15 = param_6 & 3;
        if ((uVar15 == 0) && (*(short *)(iVar7 + 2 + param_2 * 2) < 0)) {
          *(undefined2 *)(iVar7 + 2 + param_2 * 2) = 0;
          pbVar16[2] = bVar1;
          *pbVar16 = bVar3 + 1;
          pbVar16[1] = bVar2 + 1;
          pbVar16 = pbVar16 + 4;
          param_5 = param_5 + 1;
        }
        if (bVar4) {
          iVar17 = iVar7 + local_8 * 2;
          if ((uVar8 == 0) && (*(short *)(iVar17 + -2) < 0)) {
            *(undefined2 *)(iVar17 + -2) = 0;
            pbVar16[1] = bVar2;
            *pbVar16 = bVar3 - 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
          if ((uVar9 == 0) && (*(short *)(iVar17 + 2) < 0)) {
            *(undefined2 *)(iVar17 + 2) = 0;
            pbVar16[1] = bVar2;
            *pbVar16 = bVar3 + 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
          if ((uVar11 == 0) && (*(short *)(iVar17 + param_2 * 2) < 0)) {
            *(undefined2 *)(iVar17 + param_2 * 2) = 0;
            *pbVar16 = bVar3;
            pbVar16[1] = bVar2 + 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
          if ((uVar10 == 0) && (psVar18 = (short *)(iVar17 + param_2 * -2), *psVar18 < 0)) {
            *psVar18 = 0;
            *pbVar16 = bVar3;
            pbVar16[1] = bVar2 - 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
        }
        if (bVar5) {
          iVar17 = iVar7 + local_8 * -2;
          if ((uVar8 == 0) && (*(short *)(iVar17 + -2) < 0)) {
            *(undefined2 *)(iVar17 + -2) = 0;
            pbVar16[1] = bVar2;
            *pbVar16 = bVar3 - 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
          if ((uVar9 == 0) && (*(short *)(iVar17 + 2) < 0)) {
            *(undefined2 *)(iVar17 + 2) = 0;
            pbVar16[1] = bVar2;
            *pbVar16 = bVar3 + 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
          if ((uVar10 == 0) && (psVar18 = (short *)(iVar17 + param_2 * -2), *psVar18 < 0)) {
            *psVar18 = 0;
            *pbVar16 = bVar3;
            pbVar16[1] = bVar2 - 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
          if ((uVar11 == 0) && (*(short *)(iVar17 + param_2 * 2) < 0)) {
            *(undefined2 *)(iVar17 + param_2 * 2) = 0;
            *pbVar16 = bVar3;
            pbVar16[1] = bVar2 + 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
        }
        if (bVar4) {
          iVar17 = iVar7 + local_8 * 2;
          if ((uVar12 == 0) && (psVar18 = (short *)(iVar17 - (param_2 * 2 + 2)), *psVar18 < 0)) {
            *psVar18 = 0;
            *pbVar16 = bVar3 - 1;
            pbVar16[1] = bVar2 - 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
          if ((uVar13 == 0) && (iVar19 = iVar17 + param_2 * -2, *(short *)(iVar19 + 2) < 0)) {
            *(undefined2 *)(iVar19 + 2) = 0;
            *pbVar16 = bVar3 + 1;
            pbVar16[1] = bVar2 - 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
          if ((uVar14 == 0) && (*(short *)(iVar17 + -2 + param_2 * 2) < 0)) {
            *(undefined2 *)(iVar17 + -2 + param_2 * 2) = 0;
            *pbVar16 = bVar3 - 1;
            pbVar16[1] = bVar2 + 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
          if ((uVar15 == 0) && (*(short *)(iVar17 + 2 + param_2 * 2) < 0)) {
            *(undefined2 *)(iVar17 + 2 + param_2 * 2) = 0;
            *pbVar16 = bVar3 + 1;
            pbVar16[1] = bVar2 + 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
        }
        if (bVar5) {
          iVar7 = iVar7 + local_8 * -2;
          if ((uVar12 == 0) && (psVar18 = (short *)(iVar7 - (param_2 * 2 + 2)), *psVar18 < 0)) {
            *psVar18 = 0;
            *pbVar16 = bVar3 - 1;
            pbVar16[1] = bVar2 - 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
          if ((uVar13 == 0) && (iVar17 = iVar7 + param_2 * -2, *(short *)(iVar17 + 2) < 0)) {
            *(undefined2 *)(iVar17 + 2) = 0;
            *pbVar16 = bVar3 + 1;
            pbVar16[1] = bVar2 - 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
          if ((uVar14 == 0) && (*(short *)(iVar7 + -2 + param_2 * 2) < 0)) {
            *(undefined2 *)(iVar7 + -2 + param_2 * 2) = 0;
            *pbVar16 = bVar3 - 1;
            pbVar16[1] = bVar2 + 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
          if ((uVar15 == 0) && (*(short *)(iVar7 + 2 + param_2 * 2) < 0)) {
            *(undefined2 *)(iVar7 + 2 + param_2 * 2) = 0;
            pbVar16[1] = bVar2 + 1;
            *pbVar16 = bVar3 + 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5 = param_5 + 1;
          }
        }
        local_48 = local_48 + 1;
      } while (local_48 < local_4c);
      local_4c = param_5;
      if (param_5 == 0) break;
      local_c = local_10;
      local_10 = pbVar6;
    }
  }
  FUN_006ab060(&local_18);
  return local_1c;
}

