
undefined4 FUN_007521b0(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  short *local_40;
  int local_34;
  int local_30;
  uint local_28;
  int local_24;
  int local_1c;
  byte *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  *param_1 = 0;
  if (param_3 == 0) {
    param_3 = FUN_006b4fa0(param_2);
  }
  uVar2 = *(uint *)(param_2 + 4);
  uVar3 = *(uint *)(param_2 + 8);
  uVar11 = *(ushort *)(param_2 + 0xe) * uVar2 + 0x1f >> 3 & 0x1ffffffc;
  puVar5 = (uint *)Library::DKW::LIB::FUN_006aac70((int)((uVar2 + 1) * uVar3 * 3) / 2 + 0x16);
  if (puVar5 == (uint *)0x0) {
    return 0xfffffffe;
  }
  pbVar10 = (byte *)((int)puVar5 + 0x16);
  local_1c = -1;
  pbVar6 = (byte *)((uVar3 - 1) * uVar11 + param_3);
  param_2 = 0;
  local_30 = 0;
  local_14 = 0;
  uVar12 = 0;
  local_28 = uVar2;
  if (0 < (int)uVar3) {
    do {
      uVar12 = 0;
      while( true ) {
        bVar1 = *pbVar6;
        while (bVar1 == (byte)param_6) {
          if ((int)uVar2 <= (int)uVar12) goto LAB_007522a2;
          pbVar6 = pbVar6 + 1;
          uVar12 = uVar12 + 1;
          bVar1 = *pbVar6;
        }
        if ((int)uVar2 <= (int)uVar12) break;
        if (local_1c == -1) {
          local_1c = local_14;
        }
        local_30 = local_14;
        if ((int)uVar12 < (int)local_28) {
          local_28 = uVar12;
        }
        bVar1 = *pbVar6;
        for (; (bVar1 != (byte)param_6 && ((int)uVar12 < (int)uVar2)); uVar12 = uVar12 + 1) {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
        }
        if ((int)param_2 < (int)uVar12) {
          param_2 = uVar12;
        }
      }
LAB_007522a2:
      pbVar6 = pbVar6 + -(uVar2 + uVar11);
      local_14 = local_14 + 1;
      uVar12 = param_2;
    } while ((int)local_14 < (int)uVar3);
  }
  local_c = uVar12 - local_28;
  if (local_1c == -1) {
    local_1c = 0;
    local_c = 0;
    local_24 = 0;
  }
  else {
    local_30 = local_30 + 1;
    iVar8 = local_30 - local_1c;
    local_24 = (int)(iVar8 + (iVar8 >> 0x1f & 0xfU)) >> 4;
    if (7 < local_24) {
      local_24 = 7;
    }
    if (0xffff < (local_24 * local_c * 3) / 2) {
      local_24 = (int)(0x1fffe / (longlong)(local_c * 3));
    }
    local_40 = (short *)((int)puVar5 + 0x16);
    local_34 = 0;
    local_14 = 0;
    pbVar10 = (byte *)(local_40 + local_24);
    pbVar10[-0xffffffff00000002] = 0;
    pbVar10[-0xffffffff00000001] = 0;
    pbVar6 = (byte *)(((uVar3 - local_1c) + -1) * uVar11 + local_28 + param_3);
    if (0 < iVar8) {
      do {
        iVar14 = 0;
        if (local_14 != 0) {
          uVar12 = local_14 & 0x8000000f;
          if ((int)uVar12 < 0) {
            uVar12 = (uVar12 - 1 | 0xfffffff0) + 1;
          }
          if ((uVar12 == 0) && (local_34 < local_24)) {
            local_34 = local_34 + 1;
            *local_40 = (short)pbVar10 - ((short)puVar5 + 0x16);
            local_40 = local_40 + 1;
          }
        }
        do {
          iVar7 = 0;
          local_18 = pbVar6;
          if (*pbVar6 == (byte)param_6) {
            do {
              if (local_c <= iVar14) break;
              pbVar13 = pbVar6 + 1;
              iVar7 = iVar7 + 1;
              pbVar6 = pbVar6 + 1;
              iVar14 = iVar14 + 1;
            } while (*pbVar13 == (byte)param_6);
            if (0x7f < iVar7) {
              uVar12 = (iVar7 - 1U) / 0x7f;
              pbVar13 = pbVar10;
              for (uVar9 = (iVar7 - 1U) / 0x1fc; uVar9 != 0; uVar9 = uVar9 - 1) {
                pbVar13[0] = 0x7f;
                pbVar13[1] = 0x7f;
                pbVar13[2] = 0x7f;
                pbVar13[3] = 0x7f;
                pbVar13 = pbVar13 + 4;
              }
              for (uVar9 = uVar12 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *pbVar13 = 0x7f;
                pbVar13 = pbVar13 + 1;
              }
              pbVar10 = pbVar10 + uVar12;
              iVar7 = iVar7 + uVar12 * -0x7f;
            }
            local_18 = pbVar6;
            if (0 < iVar7) {
              *pbVar10 = (byte)iVar7;
              pbVar10 = pbVar10 + 1;
            }
          }
          pbVar6 = local_18;
          if (local_c <= iVar14) break;
          bVar4 = false;
          param_3 = 0;
          local_10 = param_6 & 0xff;
          do {
            if ((*pbVar6 == (byte)param_6) ||
               ((uVar12 = (uint)*pbVar6, param_4 <= (int)uVar12 && ((int)uVar12 < param_4 + param_5)
                ))) break;
            if ((uVar12 == local_10) && ((iVar14 < local_c + -1 && (pbVar6[1] == local_10)))) {
              bVar4 = true;
              break;
            }
            param_3 = param_3 + 1;
            pbVar6 = pbVar6 + 1;
            iVar14 = iVar14 + 1;
            local_10 = uVar12;
          } while (iVar14 < local_c);
          if (param_3 == 0) {
            param_3 = 1;
            if (param_5 == 1) {
              bVar1 = *pbVar6;
              pbVar6 = pbVar6 + 1;
              iVar14 = iVar14 + 1;
              if (iVar14 < local_c) {
                do {
                  if (*pbVar6 != bVar1) break;
                  param_3 = param_3 + 1;
                  pbVar6 = pbVar6 + 1;
                  iVar14 = iVar14 + 1;
                } while (iVar14 < local_c);
                if (0x3f < (int)param_3) {
                  uVar12 = (param_3 - 1) / 0x3f;
                  param_3 = param_3 + uVar12 * -0x3f;
                  do {
                    *pbVar10 = 0xff;
                    pbVar10[1] = bVar1;
                    pbVar10 = pbVar10 + 2;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                if ((int)param_3 < 1) goto LAB_007525e9;
              }
              *pbVar10 = (byte)param_3 | 0xc0;
              pbVar10[1] = bVar1;
              pbVar10 = pbVar10 + 2;
            }
            else {
              param_3 = 0;
              pbVar13 = pbVar6;
              if (local_c <= iVar14) break;
              do {
                if (((int)(uint)*pbVar13 < param_4) || (param_4 + param_5 <= (int)(uint)*pbVar13))
                break;
                param_3 = param_3 + 1;
                pbVar13 = pbVar13 + 1;
                iVar14 = iVar14 + 1;
              } while (iVar14 < local_c);
              local_18 = pbVar6;
              if (0x3f < (int)param_3) {
                uVar12 = (param_3 - 1) / 0x3f;
                param_3 = param_3 + uVar12 * -0x3f;
                do {
                  *pbVar10 = 0xbf;
                  pbVar6 = local_18;
                  pbVar15 = pbVar10 + 1;
                  for (iVar7 = 0xf; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *(undefined4 *)pbVar15 = *(undefined4 *)pbVar6;
                    pbVar6 = pbVar6 + 4;
                    pbVar15 = pbVar15 + 4;
                  }
                  *(undefined2 *)pbVar15 = *(undefined2 *)pbVar6;
                  pbVar10 = pbVar10 + 0x40;
                  local_18 = local_18 + 0x3f;
                  uVar12 = uVar12 - 1;
                  pbVar15[2] = pbVar6[2];
                } while (uVar12 != 0);
              }
              pbVar6 = pbVar13;
              if (0 < (int)param_3) {
                *pbVar10 = (byte)param_3 | 0x80;
                pbVar13 = pbVar10 + 1;
                for (uVar12 = param_3 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined4 *)pbVar13 = *(undefined4 *)local_18;
                  local_18 = local_18 + 4;
                  pbVar13 = pbVar13 + 4;
                }
                pbVar10 = pbVar10 + 1 + param_3;
                for (uVar12 = param_3 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *pbVar13 = *local_18;
                  local_18 = local_18 + 1;
                  pbVar13 = pbVar13 + 1;
                }
              }
            }
          }
          else {
            if (bVar4) {
              param_3 = param_3 - 1;
            }
            if (0x3f < (int)param_3) {
              uVar12 = (param_3 - 1) / 0x3f;
              param_3 = param_3 + uVar12 * -0x3f;
              do {
                *pbVar10 = 0xbf;
                pbVar13 = local_18;
                pbVar15 = pbVar10 + 1;
                for (iVar7 = 0xf; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(undefined4 *)pbVar15 = *(undefined4 *)pbVar13;
                  pbVar13 = pbVar13 + 4;
                  pbVar15 = pbVar15 + 4;
                }
                *(undefined2 *)pbVar15 = *(undefined2 *)pbVar13;
                pbVar10 = pbVar10 + 0x40;
                local_18 = local_18 + 0x3f;
                uVar12 = uVar12 - 1;
                pbVar15[2] = pbVar13[2];
              } while (uVar12 != 0);
            }
            if (0 < (int)param_3) {
              *pbVar10 = (byte)param_3 | 0x80;
              pbVar13 = pbVar10 + 1;
              for (uVar12 = param_3 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pbVar13 = *(undefined4 *)local_18;
                local_18 = local_18 + 4;
                pbVar13 = pbVar13 + 4;
              }
              pbVar10 = pbVar10 + 1 + param_3;
              for (uVar12 = param_3 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *pbVar13 = *local_18;
                local_18 = local_18 + 1;
                pbVar13 = pbVar13 + 1;
              }
            }
            if (bVar4) {
              iVar14 = iVar14 + 2;
              iVar7 = 3;
              pbVar6 = pbVar6 + 2;
              if (iVar14 < local_c) {
                do {
                  if (*pbVar6 != local_10) break;
                  iVar7 = iVar7 + 1;
                  pbVar6 = pbVar6 + 1;
                  iVar14 = iVar14 + 1;
                } while (iVar14 < local_c);
                if (0x3f < iVar7) {
                  uVar12 = (iVar7 - 1U) / 0x3f;
                  iVar7 = iVar7 + uVar12 * -0x3f;
                  do {
                    *pbVar10 = 0xff;
                    pbVar10[1] = (byte)local_10;
                    pbVar10 = pbVar10 + 2;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                if (iVar7 < 1) goto LAB_007525e9;
              }
              *pbVar10 = (byte)iVar7 | 0xc0;
              pbVar10[1] = (byte)local_10;
              pbVar10 = pbVar10 + 2;
            }
          }
LAB_007525e9:
        } while (iVar14 < local_c);
        pbVar6 = pbVar6 + -(local_c + uVar11);
        local_14 = local_14 + 1;
      } while ((int)local_14 < iVar8);
    }
  }
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  *(byte *)((int)puVar5 + 0xd) = (param_5 == 1) + 1U | (char)local_24 << 2;
  *(undefined2 *)((int)puVar5 + 0x12) = (undefined2)local_c;
  *puVar5 = (int)pbVar10 - (int)puVar5;
  *(undefined1 *)(puVar5 + 3) = 0x80;
  *(undefined2 *)((int)puVar5 + 0xe) = (undefined2)local_28;
  *(short *)(puVar5 + 4) = (short)local_1c;
  *(short *)(puVar5 + 5) = (short)local_30 - (short)local_1c;
  iVar8 = FUN_006bfb50(puVar5,(int)pbVar10 - (int)puVar5);
  *param_1 = iVar8;
  if (iVar8 == 0) {
    *param_1 = (int)puVar5;
  }
  return 0;
}

