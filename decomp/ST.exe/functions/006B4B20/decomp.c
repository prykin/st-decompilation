
undefined4 FUN_006b4b20(int *param_1,AnonShape_006B4B20_3D4F4412 *param_2,int param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  AnonShape_006B4B20_3D4F4412 *pAVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  AnonShape_006B4B20_3D4F4412 *pAVar15;
  byte *pbVar16;
  int iVar17;
  byte *pbVar18;
  bool bVar19;
  short *local_3c;
  int local_34;
  byte *local_30;
  AnonShape_006B4B20_3D4F4412 *local_2c;
  int local_20;
  int local_1c;
  uint local_14;
  int local_10;
  int local_c;
  
  *param_1 = 0;
  if (param_3 == 0) {
    param_3 = FUN_006b4fa0((int)param_2);
  }
  pAVar3 = (AnonShape_006B4B20_3D4F4412 *)param_2->field_0004;
  uVar4 = param_2->field_0008;
  uVar14 = (uint)param_2->field_000E * (int)pAVar3 + 0x1f >> 3 & 0x1ffffffc;
  puVar5 = (uint *)Library::DKW::LIB::FUN_006aac70
                             ((int)((int)&pAVar3->field_0x1 * uVar4 * 3) / 2 + 0x16);
  if (puVar5 == (uint *)0x0) {
    return 0xfffffffe;
  }
  pbVar6 = (byte *)((uVar4 - 1) * uVar14 + param_3);
  pbVar13 = (byte *)((int)puVar5 + 0x16);
  local_1c = -1;
  param_2 = (AnonShape_006B4B20_3D4F4412 *)0x0;
  local_20 = 0;
  local_14 = 0;
  iVar11 = 0;
  pAVar15 = (AnonShape_006B4B20_3D4F4412 *)0x0;
  local_2c = pAVar3;
  if (0 < (int)uVar4) {
    do {
      pAVar15 = (AnonShape_006B4B20_3D4F4412 *)0x0;
      while( true ) {
        bVar1 = *pbVar6;
        while (bVar1 == param_4) {
          if ((int)pAVar3 <= (int)pAVar15) goto LAB_006b4c1b;
          pbVar6 = pbVar6 + 1;
          pAVar15 = (AnonShape_006B4B20_3D4F4412 *)&pAVar15->field_0x1;
          bVar1 = *pbVar6;
        }
        if ((int)pAVar3 <= (int)pAVar15) break;
        if (local_1c == -1) {
          local_1c = local_14;
        }
        local_20 = local_14;
        if ((int)pAVar15 < (int)local_2c) {
          local_2c = pAVar15;
        }
        bVar1 = *pbVar6;
        for (; (bVar1 != param_4 && ((int)pAVar15 < (int)pAVar3));
            pAVar15 = (AnonShape_006B4B20_3D4F4412 *)&pAVar15->field_0x1) {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
        }
        if ((int)param_2 < (int)pAVar15) {
          param_2 = pAVar15;
        }
      }
LAB_006b4c1b:
      pbVar6 = pbVar6 + -(int)(&pAVar3->field_0x0 + uVar14);
      local_14 = local_14 + 1;
      iVar11 = local_20;
      pAVar15 = param_2;
    } while ((int)local_14 < (int)uVar4);
  }
  local_c = (int)pAVar15 - (int)local_2c;
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
    pbVar13 = (byte *)(local_3c + local_10);
    local_34 = 0;
    pbVar13[-0xffffffff00000002] = 0;
    pbVar13[-0xffffffff00000001] = 0;
    pbVar6 = &local_2c->field_0x0 + param_3 + ((uVar4 - local_1c) + -1) * uVar14;
    local_14 = 0;
    if (0 < iVar7) {
      do {
        iVar17 = 0;
        if (local_14 != 0) {
          uVar12 = local_14 & 0x8000000f;
          bVar19 = uVar12 == 0;
          if ((int)uVar12 < 0) {
            bVar19 = (uVar12 - 1 | 0xfffffff0) == 0xffffffff;
          }
          if ((bVar19) && (local_34 < local_10)) {
            *local_3c = (short)pbVar13 - ((short)puVar5 + 0x16);
            local_34 = local_34 + 1;
            local_3c = local_3c + 1;
          }
        }
        do {
          iVar9 = 0;
          local_30 = pbVar6;
          if (*pbVar6 == param_4) {
            do {
              if (local_c <= iVar17) break;
              pbVar16 = pbVar6 + 1;
              iVar9 = iVar9 + 1;
              pbVar6 = pbVar6 + 1;
              iVar17 = iVar17 + 1;
            } while (*pbVar16 == param_4);
            if (0x7f < iVar9) {
              uVar12 = (iVar9 - 1U) / 0x7f;
              pbVar16 = pbVar13;
              for (uVar10 = (iVar9 - 1U) / 0x1fc; uVar10 != 0; uVar10 = uVar10 - 1) {
                pbVar16[0] = 0x7f;
                pbVar16[1] = 0x7f;
                pbVar16[2] = 0x7f;
                pbVar16[3] = 0x7f;
                pbVar16 = pbVar16 + 4;
              }
              for (uVar10 = uVar12 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                *pbVar16 = 0x7f;
                pbVar16 = pbVar16 + 1;
              }
              pbVar13 = pbVar13 + uVar12;
              iVar9 = iVar9 + uVar12 * -0x7f;
            }
            local_30 = pbVar6;
            if (0 < iVar9) {
              *pbVar13 = (byte)iVar9;
              pbVar13 = pbVar13 + 1;
            }
          }
          uVar12 = 0;
          bVar19 = false;
          pbVar6 = local_30;
          bVar1 = param_4;
          if (local_c <= iVar17) break;
          do {
            bVar2 = *pbVar6;
            if (bVar2 == param_4) break;
            if (((bVar2 == bVar1) && (iVar17 < local_c + -1)) && (pbVar6[1] == bVar1)) {
              bVar19 = true;
              uVar12 = uVar12 - 1;
              break;
            }
            uVar12 = uVar12 + 1;
            pbVar6 = pbVar6 + 1;
            iVar17 = iVar17 + 1;
            bVar1 = bVar2;
          } while (iVar17 < local_c);
          if (0x3f < (int)uVar12) {
            uVar10 = (uVar12 - 1) / 0x3f;
            uVar12 = uVar12 + uVar10 * -0x3f;
            do {
              *pbVar13 = 0xbf;
              pbVar16 = local_30;
              pbVar18 = pbVar13 + 1;
              for (iVar9 = 0xf; iVar9 != 0; iVar9 = iVar9 + -1) {
                *(undefined4 *)pbVar18 = *(undefined4 *)pbVar16;
                pbVar16 = pbVar16 + 4;
                pbVar18 = pbVar18 + 4;
              }
              *(undefined2 *)pbVar18 = *(undefined2 *)pbVar16;
              pbVar13 = pbVar13 + 0x40;
              local_30 = local_30 + 0x3f;
              uVar10 = uVar10 - 1;
              pbVar18[2] = pbVar16[2];
            } while (uVar10 != 0);
          }
          if (0 < (int)uVar12) {
            *pbVar13 = (byte)uVar12 | 0x80;
            pbVar16 = pbVar13 + 1;
            for (uVar10 = uVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pbVar16 = *(undefined4 *)local_30;
              local_30 = local_30 + 4;
              pbVar16 = pbVar16 + 4;
            }
            pbVar13 = pbVar13 + 1 + uVar12;
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pbVar16 = *local_30;
              local_30 = local_30 + 1;
              pbVar16 = pbVar16 + 1;
            }
          }
          if (bVar19) {
            iVar17 = iVar17 + 2;
            iVar9 = 3;
            pbVar6 = pbVar6 + 2;
            if (iVar17 < local_c) {
              do {
                if (*pbVar6 != bVar1) break;
                iVar9 = iVar9 + 1;
                pbVar6 = pbVar6 + 1;
                iVar17 = iVar17 + 1;
              } while (iVar17 < local_c);
              if (0x3f < iVar9) {
                uVar12 = (iVar9 - 1U) / 0x3f;
                iVar9 = iVar9 + uVar12 * -0x3f;
                do {
                  *pbVar13 = 0xff;
                  pbVar13[1] = bVar1;
                  pbVar13 = pbVar13 + 2;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              if (iVar9 < 1) goto LAB_006b4ef4;
            }
            *pbVar13 = (byte)iVar9 | 0xc0;
            pbVar13[1] = bVar1;
            pbVar13 = pbVar13 + 2;
          }
LAB_006b4ef4:
        } while (iVar17 < local_c);
        pbVar6 = pbVar6 + -(local_c + uVar14);
        local_14 = local_14 + 1;
      } while ((int)local_14 < iVar7);
    }
    cVar8 = (char)local_10;
  }
  puVar5[1] = (uint)pAVar3;
  *(char *)((int)puVar5 + 0xd) = cVar8 << 2;
  puVar5[2] = uVar4;
  *(undefined2 *)((int)puVar5 + 0xe) = local_2c._0_2_;
  *puVar5 = (int)pbVar13 - (int)puVar5;
  *(undefined1 *)(puVar5 + 3) = 0x80;
  *(short *)(puVar5 + 4) = (short)local_1c;
  *(undefined2 *)((int)puVar5 + 0x12) = (undefined2)local_c;
  *(short *)(puVar5 + 5) = (short)iVar11 - (short)local_1c;
  iVar11 = FUN_006bfb50(puVar5,(int)pbVar13 - (int)puVar5);
  *param_1 = iVar11;
  if (iVar11 == 0) {
    *param_1 = (int)puVar5;
  }
  return 0;
}

