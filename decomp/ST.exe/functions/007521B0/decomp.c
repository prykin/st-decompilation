
undefined4
FUN_007521b0(int *param_1,AnonShape_007521B0_4642B53E *param_2,uint param_3,int param_4,int param_5,
            uint param_6)

{
  byte bVar1;
  AnonShape_007521B0_4642B53E *pAVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  AnonShape_007521B0_4642B53E *pAVar13;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  short *local_40;
  int local_34;
  int local_30;
  AnonShape_007521B0_4642B53E *local_28;
  int local_24;
  int local_1c;
  byte *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  *param_1 = 0;
  if (param_3 == 0) {
    param_3 = FUN_006b4fa0((int)param_2);
  }
  pAVar2 = (AnonShape_007521B0_4642B53E *)param_2->field_0004;
  uVar3 = param_2->field_0008;
  uVar12 = (uint)param_2->field_000E * (int)pAVar2 + 0x1f >> 3 & 0x1ffffffc;
  puVar5 = (uint *)Library::DKW::LIB::FUN_006aac70
                             ((int)((int)&pAVar2->field_0x1 * uVar3 * 3) / 2 + 0x16);
  if (puVar5 == (uint *)0x0) {
    return 0xfffffffe;
  }
  pbVar11 = (byte *)((int)puVar5 + 0x16);
  local_1c = -1;
  pbVar6 = (byte *)((uVar3 - 1) * uVar12 + param_3);
  param_2 = (AnonShape_007521B0_4642B53E *)0x0;
  local_30 = 0;
  local_14 = 0;
  pAVar13 = (AnonShape_007521B0_4642B53E *)0x0;
  local_28 = pAVar2;
  if (0 < (int)uVar3) {
    do {
      pAVar13 = (AnonShape_007521B0_4642B53E *)0x0;
      while( true ) {
        bVar1 = *pbVar6;
        while (bVar1 == (byte)param_6) {
          if ((int)pAVar2 <= (int)pAVar13) goto LAB_007522a2;
          pbVar6 = pbVar6 + 1;
          pAVar13 = (AnonShape_007521B0_4642B53E *)&pAVar13->field_0x1;
          bVar1 = *pbVar6;
        }
        if ((int)pAVar2 <= (int)pAVar13) break;
        if (local_1c == -1) {
          local_1c = local_14;
        }
        local_30 = local_14;
        if ((int)pAVar13 < (int)local_28) {
          local_28 = pAVar13;
        }
        bVar1 = *pbVar6;
        for (; (bVar1 != (byte)param_6 && ((int)pAVar13 < (int)pAVar2));
            pAVar13 = (AnonShape_007521B0_4642B53E *)&pAVar13->field_0x1) {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
        }
        if ((int)param_2 < (int)pAVar13) {
          param_2 = pAVar13;
        }
      }
LAB_007522a2:
      pbVar6 = pbVar6 + -(int)(&pAVar2->field_0x0 + uVar12);
      local_14 = local_14 + 1;
      pAVar13 = param_2;
    } while ((int)local_14 < (int)uVar3);
  }
  local_c = (int)pAVar13 - (int)local_28;
  if (local_1c == -1) {
    local_1c = 0;
    local_c = 0;
    local_24 = 0;
  }
  else {
    local_30 = local_30 + 1;
    iVar9 = local_30 - local_1c;
    local_24 = (int)(iVar9 + (iVar9 >> 0x1f & 0xfU)) >> 4;
    if (7 < local_24) {
      local_24 = 7;
    }
    if (0xffff < (local_24 * local_c * 3) / 2) {
      local_24 = (int)(0x1fffe / (longlong)(local_c * 3));
    }
    local_40 = (short *)((int)puVar5 + 0x16);
    local_34 = 0;
    local_14 = 0;
    pbVar11 = (byte *)(local_40 + local_24);
    pbVar11[-0xffffffff00000002] = 0;
    pbVar11[-0xffffffff00000001] = 0;
    pbVar6 = &local_28->field_0x0 + param_3 + ((uVar3 - local_1c) + -1) * uVar12;
    if (0 < iVar9) {
      do {
        iVar15 = 0;
        if (local_14 != 0) {
          uVar7 = local_14 & 0x8000000f;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
          }
          if ((uVar7 == 0) && (local_34 < local_24)) {
            local_34 = local_34 + 1;
            *local_40 = (short)pbVar11 - ((short)puVar5 + 0x16);
            local_40 = local_40 + 1;
          }
        }
        do {
          iVar8 = 0;
          local_18 = pbVar6;
          if (*pbVar6 == (byte)param_6) {
            do {
              if (local_c <= iVar15) break;
              pbVar14 = pbVar6 + 1;
              iVar8 = iVar8 + 1;
              pbVar6 = pbVar6 + 1;
              iVar15 = iVar15 + 1;
            } while (*pbVar14 == (byte)param_6);
            if (0x7f < iVar8) {
              uVar7 = (iVar8 - 1U) / 0x7f;
              pbVar14 = pbVar11;
              for (uVar10 = (iVar8 - 1U) / 0x1fc; uVar10 != 0; uVar10 = uVar10 - 1) {
                pbVar14[0] = 0x7f;
                pbVar14[1] = 0x7f;
                pbVar14[2] = 0x7f;
                pbVar14[3] = 0x7f;
                pbVar14 = pbVar14 + 4;
              }
              for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                *pbVar14 = 0x7f;
                pbVar14 = pbVar14 + 1;
              }
              pbVar11 = pbVar11 + uVar7;
              iVar8 = iVar8 + uVar7 * -0x7f;
            }
            local_18 = pbVar6;
            if (0 < iVar8) {
              *pbVar11 = (byte)iVar8;
              pbVar11 = pbVar11 + 1;
            }
          }
          pbVar6 = local_18;
          if (local_c <= iVar15) break;
          bVar4 = false;
          param_3 = 0;
          local_10 = param_6 & 0xff;
          do {
            if ((*pbVar6 == (byte)param_6) ||
               ((uVar7 = (uint)*pbVar6, param_4 <= (int)uVar7 && ((int)uVar7 < param_4 + param_5))))
            break;
            if ((uVar7 == local_10) && ((iVar15 < local_c + -1 && (pbVar6[1] == local_10)))) {
              bVar4 = true;
              break;
            }
            param_3 = param_3 + 1;
            pbVar6 = pbVar6 + 1;
            iVar15 = iVar15 + 1;
            local_10 = uVar7;
          } while (iVar15 < local_c);
          if (param_3 == 0) {
            param_3 = 1;
            if (param_5 == 1) {
              bVar1 = *pbVar6;
              pbVar6 = pbVar6 + 1;
              iVar15 = iVar15 + 1;
              if (iVar15 < local_c) {
                do {
                  if (*pbVar6 != bVar1) break;
                  param_3 = param_3 + 1;
                  pbVar6 = pbVar6 + 1;
                  iVar15 = iVar15 + 1;
                } while (iVar15 < local_c);
                if (0x3f < (int)param_3) {
                  uVar7 = (param_3 - 1) / 0x3f;
                  param_3 = param_3 + uVar7 * -0x3f;
                  do {
                    *pbVar11 = 0xff;
                    pbVar11[1] = bVar1;
                    pbVar11 = pbVar11 + 2;
                    uVar7 = uVar7 - 1;
                  } while (uVar7 != 0);
                }
                if ((int)param_3 < 1) goto cf_continue_loop_007525E9;
              }
              *pbVar11 = (byte)param_3 | 0xc0;
              pbVar11[1] = bVar1;
              pbVar11 = pbVar11 + 2;
            }
            else {
              param_3 = 0;
              pbVar14 = pbVar6;
              if (local_c <= iVar15) break;
              do {
                if (((int)(uint)*pbVar14 < param_4) || (param_4 + param_5 <= (int)(uint)*pbVar14))
                break;
                param_3 = param_3 + 1;
                pbVar14 = pbVar14 + 1;
                iVar15 = iVar15 + 1;
              } while (iVar15 < local_c);
              local_18 = pbVar6;
              if (0x3f < (int)param_3) {
                uVar7 = (param_3 - 1) / 0x3f;
                param_3 = param_3 + uVar7 * -0x3f;
                do {
                  *pbVar11 = 0xbf;
                  pbVar6 = local_18;
                  pbVar16 = pbVar11 + 1;
                  for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
                    *(undefined4 *)pbVar16 = *(undefined4 *)pbVar6;
                    pbVar6 = pbVar6 + 4;
                    pbVar16 = pbVar16 + 4;
                  }
                  *(undefined2 *)pbVar16 = *(undefined2 *)pbVar6;
                  pbVar11 = pbVar11 + 0x40;
                  local_18 = local_18 + 0x3f;
                  uVar7 = uVar7 - 1;
                  pbVar16[2] = pbVar6[2];
                } while (uVar7 != 0);
              }
              pbVar6 = pbVar14;
              if (0 < (int)param_3) {
                *pbVar11 = (byte)param_3 | 0x80;
                pbVar14 = pbVar11 + 1;
                for (uVar7 = param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pbVar14 = *(undefined4 *)local_18;
                  local_18 = local_18 + 4;
                  pbVar14 = pbVar14 + 4;
                }
                pbVar11 = pbVar11 + 1 + param_3;
                for (uVar7 = param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *pbVar14 = *local_18;
                  local_18 = local_18 + 1;
                  pbVar14 = pbVar14 + 1;
                }
              }
            }
          }
          else {
            if (bVar4) {
              param_3 = param_3 - 1;
            }
            if (0x3f < (int)param_3) {
              uVar7 = (param_3 - 1) / 0x3f;
              param_3 = param_3 + uVar7 * -0x3f;
              do {
                *pbVar11 = 0xbf;
                pbVar14 = local_18;
                pbVar16 = pbVar11 + 1;
                for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *(undefined4 *)pbVar16 = *(undefined4 *)pbVar14;
                  pbVar14 = pbVar14 + 4;
                  pbVar16 = pbVar16 + 4;
                }
                *(undefined2 *)pbVar16 = *(undefined2 *)pbVar14;
                pbVar11 = pbVar11 + 0x40;
                local_18 = local_18 + 0x3f;
                uVar7 = uVar7 - 1;
                pbVar16[2] = pbVar14[2];
              } while (uVar7 != 0);
            }
            if (0 < (int)param_3) {
              *pbVar11 = (byte)param_3 | 0x80;
              pbVar14 = pbVar11 + 1;
              for (uVar7 = param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined4 *)pbVar14 = *(undefined4 *)local_18;
                local_18 = local_18 + 4;
                pbVar14 = pbVar14 + 4;
              }
              pbVar11 = pbVar11 + 1 + param_3;
              for (uVar7 = param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pbVar14 = *local_18;
                local_18 = local_18 + 1;
                pbVar14 = pbVar14 + 1;
              }
            }
            if (bVar4) {
              iVar15 = iVar15 + 2;
              iVar8 = 3;
              pbVar6 = pbVar6 + 2;
              if (iVar15 < local_c) {
                do {
                  if (*pbVar6 != local_10) break;
                  iVar8 = iVar8 + 1;
                  pbVar6 = pbVar6 + 1;
                  iVar15 = iVar15 + 1;
                } while (iVar15 < local_c);
                if (0x3f < iVar8) {
                  uVar7 = (iVar8 - 1U) / 0x3f;
                  iVar8 = iVar8 + uVar7 * -0x3f;
                  do {
                    *pbVar11 = 0xff;
                    pbVar11[1] = (byte)local_10;
                    pbVar11 = pbVar11 + 2;
                    uVar7 = uVar7 - 1;
                  } while (uVar7 != 0);
                }
                if (iVar8 < 1) goto cf_continue_loop_007525E9;
              }
              *pbVar11 = (byte)iVar8 | 0xc0;
              pbVar11[1] = (byte)local_10;
              pbVar11 = pbVar11 + 2;
            }
          }
cf_continue_loop_007525E9:
        } while (iVar15 < local_c);
        pbVar6 = pbVar6 + -(local_c + uVar12);
        local_14 = local_14 + 1;
      } while ((int)local_14 < iVar9);
    }
  }
  puVar5[1] = (uint)pAVar2;
  puVar5[2] = uVar3;
  *(byte *)((int)puVar5 + 0xd) = (param_5 == 1) + 1U | (char)local_24 << 2;
  *(undefined2 *)((int)puVar5 + 0x12) = (undefined2)local_c;
  *puVar5 = (int)pbVar11 - (int)puVar5;
  *(undefined1 *)(puVar5 + 3) = 0x80;
  *(undefined2 *)((int)puVar5 + 0xe) = local_28._0_2_;
  *(short *)(puVar5 + 4) = (short)local_1c;
  *(short *)(puVar5 + 5) = (short)local_30 - (short)local_1c;
  iVar9 = FUN_006bfb50(puVar5,(int)pbVar11 - (int)puVar5);
  *param_1 = iVar9;
  if (iVar9 == 0) {
    *param_1 = (int)puVar5;
  }
  return 0;
}

