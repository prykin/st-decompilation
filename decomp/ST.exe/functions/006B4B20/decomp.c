
undefined4 FUN_006b4b20(int *param_1,uint param_2,int param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  bool bVar18;
  short *local_3c;
  int local_34;
  byte *local_30;
  uint local_2c;
  int local_20;
  int local_1c;
  uint local_14;
  int local_10;
  int local_c;
  
  *param_1 = 0;
  if (param_3 == 0) {
    param_3 = FUN_006b4fa0(param_2);
  }
  uVar3 = *(uint *)(param_2 + 4);
  uVar4 = *(uint *)(param_2 + 8);
  uVar13 = *(ushort *)(param_2 + 0xe) * uVar3 + 0x1f >> 3 & 0x1ffffffc;
  puVar5 = (uint *)FUN_006aac70((int)((uVar3 + 1) * uVar4 * 3) / 2 + 0x16);
  if (puVar5 == (uint *)0x0) {
    return 0xfffffffe;
  }
  pbVar6 = (byte *)((uVar4 - 1) * uVar13 + param_3);
  pbVar12 = (byte *)((int)puVar5 + 0x16);
  local_1c = -1;
  param_2 = 0;
  local_20 = 0;
  local_14 = 0;
  iVar11 = 0;
  uVar14 = 0;
  local_2c = uVar3;
  if (0 < (int)uVar4) {
    do {
      uVar14 = 0;
      while( true ) {
        bVar1 = *pbVar6;
        while (bVar1 == param_4) {
          if ((int)uVar3 <= (int)uVar14) goto LAB_006b4c1b;
          pbVar6 = pbVar6 + 1;
          uVar14 = uVar14 + 1;
          bVar1 = *pbVar6;
        }
        if ((int)uVar3 <= (int)uVar14) break;
        if (local_1c == -1) {
          local_1c = local_14;
        }
        local_20 = local_14;
        if ((int)uVar14 < (int)local_2c) {
          local_2c = uVar14;
        }
        bVar1 = *pbVar6;
        for (; (bVar1 != param_4 && ((int)uVar14 < (int)uVar3)); uVar14 = uVar14 + 1) {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
        }
        if ((int)param_2 < (int)uVar14) {
          param_2 = uVar14;
        }
      }
LAB_006b4c1b:
      pbVar6 = pbVar6 + -(uVar3 + uVar13);
      local_14 = local_14 + 1;
      iVar11 = local_20;
      uVar14 = param_2;
    } while ((int)local_14 < (int)uVar4);
  }
  local_c = uVar14 - local_2c;
  if (local_1c == -1) {
    local_1c = 0;
    local_c = 0;
    cVar8 = '\0';
  }
  else {
    iVar11 = iVar11 + 1;
    iVar7 = iVar11 - local_1c;
    local_10 = (int)(iVar7 + (iVar7 >> 0x1f & 0xfU)) >> 4;
    if (7 < local_10) {
      local_10 = 7;
    }
    if (0xffff < (local_10 * local_c * 3) / 2) {
      local_10 = (int)(0x1fffe / (longlong)(local_c * 3));
    }
    local_3c = (short *)((int)puVar5 + 0x16);
    pbVar12 = (byte *)(local_3c + local_10);
    local_34 = 0;
    pbVar12[-0xffffffff00000002] = 0;
    pbVar12[-0xffffffff00000001] = 0;
    pbVar6 = (byte *)(((uVar4 - local_1c) + -1) * uVar13 + local_2c + param_3);
    local_14 = 0;
    if (0 < iVar7) {
      do {
        iVar16 = 0;
        if (local_14 != 0) {
          uVar14 = local_14 & 0x8000000f;
          bVar18 = uVar14 == 0;
          if ((int)uVar14 < 0) {
            bVar18 = (uVar14 - 1 | 0xfffffff0) == 0xffffffff;
          }
          if ((bVar18) && (local_34 < local_10)) {
            *local_3c = (short)pbVar12 - ((short)puVar5 + 0x16);
            local_34 = local_34 + 1;
            local_3c = local_3c + 1;
          }
        }
        do {
          iVar9 = 0;
          local_30 = pbVar6;
          if (*pbVar6 == param_4) {
            do {
              if (local_c <= iVar16) break;
              pbVar15 = pbVar6 + 1;
              iVar9 = iVar9 + 1;
              pbVar6 = pbVar6 + 1;
              iVar16 = iVar16 + 1;
            } while (*pbVar15 == param_4);
            if (0x7f < iVar9) {
              uVar14 = (iVar9 - 1U) / 0x7f;
              pbVar15 = pbVar12;
              for (uVar10 = (iVar9 - 1U) / 0x1fc; uVar10 != 0; uVar10 = uVar10 - 1) {
                pbVar15[0] = 0x7f;
                pbVar15[1] = 0x7f;
                pbVar15[2] = 0x7f;
                pbVar15[3] = 0x7f;
                pbVar15 = pbVar15 + 4;
              }
              for (uVar10 = uVar14 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                *pbVar15 = 0x7f;
                pbVar15 = pbVar15 + 1;
              }
              pbVar12 = pbVar12 + uVar14;
              iVar9 = iVar9 + uVar14 * -0x7f;
            }
            local_30 = pbVar6;
            if (0 < iVar9) {
              *pbVar12 = (byte)iVar9;
              pbVar12 = pbVar12 + 1;
            }
          }
          uVar14 = 0;
          bVar18 = false;
          pbVar6 = local_30;
          bVar1 = param_4;
          if (local_c <= iVar16) break;
          do {
            bVar2 = *pbVar6;
            if (bVar2 == param_4) break;
            if (((bVar2 == bVar1) && (iVar16 < local_c + -1)) && (pbVar6[1] == bVar1)) {
              bVar18 = true;
              uVar14 = uVar14 - 1;
              break;
            }
            uVar14 = uVar14 + 1;
            pbVar6 = pbVar6 + 1;
            iVar16 = iVar16 + 1;
            bVar1 = bVar2;
          } while (iVar16 < local_c);
          if (0x3f < (int)uVar14) {
            uVar10 = (uVar14 - 1) / 0x3f;
            uVar14 = uVar14 + uVar10 * -0x3f;
            do {
              *pbVar12 = 0xbf;
              pbVar15 = local_30;
              pbVar17 = pbVar12 + 1;
              for (iVar9 = 0xf; iVar9 != 0; iVar9 = iVar9 + -1) {
                *(undefined4 *)pbVar17 = *(undefined4 *)pbVar15;
                pbVar15 = pbVar15 + 4;
                pbVar17 = pbVar17 + 4;
              }
              *(undefined2 *)pbVar17 = *(undefined2 *)pbVar15;
              pbVar12 = pbVar12 + 0x40;
              local_30 = local_30 + 0x3f;
              uVar10 = uVar10 - 1;
              pbVar17[2] = pbVar15[2];
            } while (uVar10 != 0);
          }
          if (0 < (int)uVar14) {
            *pbVar12 = (byte)uVar14 | 0x80;
            pbVar15 = pbVar12 + 1;
            for (uVar10 = uVar14 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pbVar15 = *(undefined4 *)local_30;
              local_30 = local_30 + 4;
              pbVar15 = pbVar15 + 4;
            }
            pbVar12 = pbVar12 + 1 + uVar14;
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pbVar15 = *local_30;
              local_30 = local_30 + 1;
              pbVar15 = pbVar15 + 1;
            }
          }
          if (bVar18) {
            iVar16 = iVar16 + 2;
            iVar9 = 3;
            pbVar6 = pbVar6 + 2;
            if (iVar16 < local_c) {
              do {
                if (*pbVar6 != bVar1) break;
                iVar9 = iVar9 + 1;
                pbVar6 = pbVar6 + 1;
                iVar16 = iVar16 + 1;
              } while (iVar16 < local_c);
              if (0x3f < iVar9) {
                uVar14 = (iVar9 - 1U) / 0x3f;
                iVar9 = iVar9 + uVar14 * -0x3f;
                do {
                  *pbVar12 = 0xff;
                  pbVar12[1] = bVar1;
                  pbVar12 = pbVar12 + 2;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              if (iVar9 < 1) goto LAB_006b4ef4;
            }
            *pbVar12 = (byte)iVar9 | 0xc0;
            pbVar12[1] = bVar1;
            pbVar12 = pbVar12 + 2;
          }
LAB_006b4ef4:
        } while (iVar16 < local_c);
        pbVar6 = pbVar6 + -(local_c + uVar13);
        local_14 = local_14 + 1;
      } while ((int)local_14 < iVar7);
    }
    cVar8 = (char)local_10;
  }
  puVar5[1] = uVar3;
  *(char *)((int)puVar5 + 0xd) = cVar8 << 2;
  puVar5[2] = uVar4;
  *(undefined2 *)((int)puVar5 + 0xe) = (undefined2)local_2c;
  *puVar5 = (int)pbVar12 - (int)puVar5;
  *(undefined1 *)(puVar5 + 3) = 0x80;
  *(short *)(puVar5 + 4) = (short)local_1c;
  *(undefined2 *)((int)puVar5 + 0x12) = (undefined2)local_c;
  *(short *)(puVar5 + 5) = (short)iVar11 - (short)local_1c;
  iVar11 = FUN_006bfb50(puVar5,(int)pbVar12 - (int)puVar5);
  *param_1 = iVar11;
  if (iVar11 == 0) {
    *param_1 = (int)puVar5;
  }
  return 0;
}

