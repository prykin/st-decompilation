
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_006ed100(undefined4 *param_1)

{
  uint *puVar1;
  short *psVar2;
  byte *pbVar3;
  ushort *puVar4;
  ushort uVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar17;
  longlong lVar18;
  undefined4 local_120;
  undefined4 local_11c [16];
  double local_dc;
  double local_d4;
  int local_cc;
  undefined4 *local_c8;
  double local_c4;
  int local_bc;
  int local_b8;
  uint local_b4;
  int local_ac;
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  float local_70;
  float local_6c;
  float local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  undefined8 local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined8 local_3c;
  int *local_34;
  uint local_30;
  uint *local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_18 = 0;
  uVar15 = param_1[0xaa];
  iVar11 = param_1[0xab] - param_1[0xa8];
  param_1[0xab] = iVar11;
  while (iVar11 < 0) {
    param_1[0xaa] = param_1[0xaa] + 1;
    iVar11 = param_1[0xab] + param_1[0xa9];
    param_1[0xab] = iVar11;
  }
  local_c8 = param_1;
  local_64 = uVar15;
  if (((*(uint *)(param_1[1] + 0xc) & 0x1100) == 0x100) ||
     ((param_1[0xb7] != 0 && (param_1[0xb6] == 0)))) goto LAB_006ef118;
  if (param_1[0x4d] != 0) {
    FUN_006e1050(param_1);
  }
  if (param_1[0xb6] == 0) {
LAB_006ed215:
    if ((*(int *)((int)param_1 + 0x466) != 0) && (*(int *)((int)param_1 + 0x46a) != 0)) {
      FUN_00717970(param_1);
    }
  }
  else {
    if ((param_1[0x51] != 0) && (param_1[7] != 0)) {
      FUN_006ebe40((int)param_1);
    }
    if ((param_1[0xb6] == 0) || (param_1[6] == 0)) goto LAB_006ed215;
    if (*(int *)((int)param_1 + 0x466) != 0) {
      iVar11 = *(int *)((int)param_1 + 0x4c2) * *(int *)((int)param_1 + 0x4be) + 7;
      uVar12 = (int)(iVar11 + (iVar11 >> 0x1f & 7U)) >> 3;
      puVar7 = *(undefined4 **)((int)param_1 + 0x46e);
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar7 = 0xff;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined4 *)((int)param_1 + 0x46a) = 1;
      goto LAB_006ed215;
    }
  }
  if ((DAT_00856db8 != 0) && ((uVar15 & 1) != 0)) goto LAB_006ef118;
  local_a0 = param_1[0xc];
  local_9c = param_1[0xd];
  local_98 = param_1[0xe] - local_a0;
  local_94 = param_1[0xf] - local_9c;
  if ((param_1[0xbc] == 100) && (param_1[0xbd] == 100)) {
    local_90 = 0;
  }
  else {
    local_90 = 1;
  }
  puVar17 = (uint *)param_1[199];
  param_1[0xb5] = 0;
  local_ac = 0;
  local_c = 0;
  if (0 < (int)param_1[0xc4]) {
LAB_006ed2c1:
    if ((((*puVar17 & 0x8200) == 0x8200) && ((puVar17[1] & 0x100) != 0)) && (puVar17[0x28] != 0)) {
      puVar1 = (uint *)(param_1[199] + puVar17[7] * 0x114);
      if ((*puVar1 & 0x8000) == 0) {
        puVar17[1] = puVar17[1] & 0xfffffeff;
      }
      else {
        local_ac = 1;
        puVar17[0x1d] = puVar1[0x1d];
        puVar17[0x1e] = puVar1[0x1e];
        puVar17[0x1f] = puVar1[0x1f];
        *puVar17 = *puVar17 | *puVar1 & 0x10000 | 0xc;
      }
    }
    local_2c = puVar17;
    if (((*puVar17 & 0x10000) == 0) || (puVar17[2] != 0)) {
      if ((*puVar17 & 0x40) != 0) {
        iVar11 = 0;
        puVar17[0x40] = puVar17[0x3b];
        puVar17[0x3f] = puVar17[0x3a];
        puVar17[0x3b] = 0;
        puVar17[0x3a] = 0;
        if (0 < (int)puVar17[0x38]) {
          local_8 = (undefined4 *)(puVar17[0x39] + 8);
          do {
            FUN_006a5e90((undefined4 *)*local_8);
            local_8 = local_8 + 3;
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)puVar17[0x38]);
        }
        FUN_006ab060(puVar17 + 0x39);
        iVar11 = 0;
        if (0 < (int)puVar17[0x38]) {
          local_8 = (undefined4 *)(puVar17[0x3c] + 0xc);
          do {
            FUN_006a5e90((undefined4 *)*local_8);
            local_8 = local_8 + 4;
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)puVar17[0x38]);
        }
        FUN_006ab060(puVar17 + 0x3c);
        puVar17[0x38] = 0;
      }
    }
    else {
      if ((puVar17[1] & 0x70) != 0) {
        param_1[0xb5] = 1;
      }
      puVar17[3] = param_1[0xc4] + local_c;
      if ((((*puVar17 & 0x101) == 0x101) && (param_1[0xb4] != 0)) &&
         (local_40 = 0, 0 < (int)puVar17[0x25])) {
        do {
          iVar11 = local_40;
          if (((*(byte *)(puVar17[0x29] + 2 + local_40 * 4) & 0x20) != 0) &&
             (uVar15 = param_1[0xaa], uVar15 != local_64 && -1 < (int)(uVar15 - local_64))) {
            uVar13 = (uint)*(short *)(puVar17[0x29] + local_40 * 4);
            local_34 = (int *)0x0;
            local_28 = local_64;
            if ((int)local_64 < (int)uVar15) {
              do {
                if ((int)local_28 % (int)*(short *)(puVar17[0x2a] + 4 + local_40 * 8) == 0) {
                  local_34 = (int *)0x1;
                  uVar13 = uVar13 + 1;
                }
                local_28 = local_28 + 1;
              } while ((int)local_28 < (int)param_1[0xaa]);
            }
            if ((local_34 != (int *)0x0) && (puVar17[0x28] != 0)) {
              iVar16 = *(int *)(puVar17[0x28] + local_40 * 8);
              psVar2 = (short *)(puVar17[0x2a] + local_40 * 8);
              local_3c = (double)CONCAT44(psVar2,(undefined4)local_3c);
              iVar9 = (int)psVar2[1];
              if (iVar16 < psVar2[1]) {
                iVar9 = iVar16;
              }
              if (iVar9 <= (int)uVar13) {
                uVar15 = (uint)*psVar2;
                local_3c = (double)CONCAT44(uVar15,(undefined4)local_3c);
                uVar13 = (uVar15 - uVar13) + iVar9;
                if (iVar9 <= (int)uVar13) {
                  uVar13 = uVar15;
                }
              }
              FUN_006e9a10(puVar17,local_40,uVar13);
            }
          }
          local_40 = iVar11 + 1;
        } while (local_40 < (int)puVar17[0x25]);
      }
      uVar15 = *puVar17;
      if (((uVar15 & 8) == 0) && (param_1[0xb6] == 0)) {
        if (((byte)uVar15 & 5) == 5) {
          *puVar17 = uVar15 | 0x82;
        }
      }
      else {
        uVar15 = puVar17[1];
        if ((uVar15 & 0x4000) == 0) {
          if ((uVar15 & 0x2000) == 0) {
            if ((uVar15 & 0x1000) == 0) {
              if (puVar17[0x28] != 0) {
                local_70 = (float)puVar17[0x1d];
                local_6c = (float)puVar17[0x1e];
                local_68 = (float)puVar17[0x1f];
                FUN_006e25d0(param_1,&local_bc);
                local_5c = local_b4;
                if ((int)local_b4 < 0) {
                  local_5c = 0;
                }
                if ((((param_1[0xb6] == 0) && ((*puVar17 & 4) == 0)) &&
                    (puVar17[0x13] == (local_bc >> 0x10) - puVar17[0x21])) &&
                   (puVar17[0x14] == (local_b8 >> 0x10) - puVar17[0x22])) {
                  *puVar17 = *puVar17 & 0xffffffb7;
                }
                else {
                  puVar1 = puVar17 + 0x15;
                  *puVar1 = local_bc >> 0x10;
                  puVar17[0x16] = local_b8 >> 0x10;
                  puVar17[4] = local_5c;
                  if ((*puVar17 & 0x40000) != 0) {
                    puVar17[4] = puVar17[0xb] + local_5c;
                  }
                  *puVar17 = *puVar17 | 4;
                  puVar17[0x13] = *puVar1 - puVar17[0x21];
                  puVar17[0x14] = puVar17[0x16] - puVar17[0x22];
                  if ((local_90 == 0) || ((puVar17[1] & 4) != 0)) {
                    *puVar1 = puVar17[0x13];
                    puVar17[0x16] = puVar17[0x14];
                    puVar17[0x17] = puVar17[0xd];
                    puVar17[0x18] = puVar17[0xe];
                  }
                  else {
                    iVar11 = (int)((ulonglong)
                                   ((longlong)(int)(param_1[0xbc] * puVar17[0x21]) * -0x51eb851f) >>
                                  0x20);
                    *puVar1 = *puVar1 + ((iVar11 >> 5) - (iVar11 >> 0x1f));
                    iVar11 = (int)((ulonglong)
                                   ((longlong)(int)(param_1[0xbd] * puVar17[0x22]) * -0x51eb851f) >>
                                  0x20);
                    puVar17[0x16] = puVar17[0x16] + ((iVar11 >> 5) - (iVar11 >> 0x1f));
                    puVar17[0x17] = (int)(puVar17[0xd] * param_1[0xbc]) / 100;
                    puVar17[0x18] = (int)(puVar17[0xe] * param_1[0xbd]) / 100;
                  }
                  iVar11 = FUN_006b0460((int *)&local_80,(int *)puVar1,&local_a0);
                  if (iVar11 != 0) {
                    local_30 = *puVar1;
                    local_10 = puVar17[0x17] + local_30;
                    local_24 = puVar17[0x16];
                    local_1c = puVar17[0x18] + local_24;
                    local_40 = 0;
                    if (0 < (int)puVar17[0x25]) {
                      do {
                        iVar16 = local_40;
                        iVar11 = *(int *)(puVar17[0x28] + 4 + local_40 * 8);
                        if (iVar11 != 0) {
                          iVar11 = *(int *)(iVar11 + *(short *)(puVar17[0x29] + local_40 * 4) * 4);
                          if (((local_90 == 0) || ((puVar17[1] & 4) != 0)) ||
                             ((*(byte *)(puVar17[0x29] + local_40 * 4 + 2) & 2) != 0)) {
                            local_50 = (int)*(short *)(iVar11 + 0xe) + puVar17[0x13];
                            local_4c = (int)*(short *)(iVar11 + 0x10) + puVar17[0x14];
                            local_48 = (int)*(short *)(iVar11 + 0x12);
                            local_44 = (int)*(short *)(iVar11 + 0x14);
                          }
                          else {
                            local_8 = *(undefined4 **)(iVar11 + 4);
                            local_20 = *(int *)(iVar11 + 8);
                            local_60 = (param_1[0xbc] * (int)local_8) / 100;
                            iVar9 = (param_1[0xbd] * local_20) / 100;
                            local_58 = (double)CONCAT44(iVar9,(undefined4)local_58);
                            local_14 = *(short *)(iVar11 + 0xe) * local_60;
                            local_50 = (int)((int)local_8 / 2 + local_14) / (int)local_8 +
                                       puVar17[0x15];
                            local_4c = (local_20 / 2 + *(short *)(iVar11 + 0x10) * iVar9) / local_20
                                       + puVar17[0x16];
                            local_48 = (*(short *)(iVar11 + 0x12) * local_60) / (int)local_8;
                            local_44 = (*(short *)(iVar11 + 0x14) * iVar9) / local_20;
                          }
                          iVar11 = FUN_006b0460((int *)&local_80,&local_50,&local_a0);
                          if (iVar11 != 0) {
                            if ((int)local_80 < (int)local_10) {
                              local_10 = local_80;
                            }
                            if ((int)local_7c < (int)local_1c) {
                              local_1c = local_7c;
                            }
                            if ((int)local_30 < (int)(local_80 + local_78)) {
                              local_30 = local_80 + local_78;
                            }
                            if ((int)local_24 < (int)(local_74 + local_7c)) {
                              local_24 = local_74 + local_7c;
                            }
                          }
                        }
                        local_40 = iVar16 + 1;
                      } while (local_40 < (int)puVar17[0x25]);
                    }
                    if (((int)local_10 < (int)local_30) && ((int)local_1c < (int)local_24)) {
                      if (((*puVar17 & 0x200) == 0) || ((short)puVar17[0x2a] < 1)) {
                        *puVar17 = *puVar17 | 0x82;
                      }
                      puVar17[0x19] = local_10;
                      puVar17[0x1a] = local_1c;
                      puVar17[0x1b] = local_30 - local_10;
                      puVar17[0x1c] = local_24 - local_1c;
                    }
                  }
                  puVar17[5] = puVar17[4];
                }
              }
            }
            else {
              local_70 = (float)puVar17[0x1d];
              local_6c = (float)puVar17[0x1e];
              local_68 = (float)puVar17[0x1f];
              FUN_006e25d0(param_1,&local_bc);
              local_1c = local_b8 >> 0x10;
              iVar11 = local_bc >> 0x10;
              local_14 = -param_1[0x42];
              lVar18 = __ftol();
              uVar15 = (int)lVar18 + local_b4;
              if ((int)uVar15 < 0) {
                uVar15 = 0;
              }
              *puVar17 = *puVar17 | 4;
              puVar17[0x13] = iVar11 - puVar17[0x21];
              puVar17[0x14] = local_1c - puVar17[0x22];
              puVar17[0x15] = puVar17[0x13];
              puVar17[0x16] = puVar17[0x14];
              puVar17[4] = uVar15;
              puVar17[0x17] = puVar17[0xd];
              puVar17[0x18] = puVar17[0xe];
              iVar11 = FUN_006b0460((int *)&local_80,(int *)(puVar17 + 0x15),&local_a0);
              if (iVar11 != 0) {
                *puVar17 = *puVar17 | 2;
                puVar17[0x19] = local_80;
                puVar17[0x1a] = local_7c;
                puVar17[0x1b] = local_78;
                puVar17[0x1c] = local_74;
              }
              puVar17[5] = puVar17[4];
            }
          }
          else {
            uVar15 = puVar17[0x28];
            local_14 = *(uint *)(uVar15 + 0x14);
            local_c4 = (double)*(int *)(uVar15 + 0x1d) / (double)*(int *)(uVar15 + 0x21);
            iVar11 = (int)(local_14 - 1) / 2;
            local_cc = iVar11;
            iVar16 = FUN_006db640(*(int *)(uVar15 + 0x19));
            local_3c = (double)CONCAT44(iVar16,(undefined4)local_3c);
            local_dc = (double)iVar16 * _DAT_0079b148 * local_c4;
            iVar16 = FUN_006db6d0(*(int *)(puVar17[0x28] + 0x19));
            local_3c = (double)CONCAT44(iVar16,(undefined4)local_3c);
            local_10 = 32000;
            local_1c = 32000;
            local_30 = 0xffff8300;
            local_24 = 0xffff8300;
            piVar14 = (int *)puVar17[0x28];
            local_5c = 30000;
            local_d4 = (double)iVar16 * _DAT_0079b148 * local_c4;
            local_88 = 0;
            local_84 = 0;
            if (0 < piVar14[1]) {
              local_3c = (double)(float)piVar14[4];
              local_34 = (int *)0x0;
              local_a8 = (double)(float)piVar14[3];
              local_8 = (undefined4 *)0x0;
              local_58 = (double)(float)piVar14[2];
              do {
                puVar7 = local_8;
                local_70 = *(float *)(*piVar14 + (int)local_34) * (float)local_d4 -
                           *(float *)(*piVar14 + 4 + (int)local_34) * (float)local_dc;
                local_6c = *(float *)(*(int *)puVar17[0x28] + (int)local_34) * (float)local_dc +
                           *(float *)(*(int *)puVar17[0x28] + 4 + (int)local_34) * (float)local_d4;
                local_68 = *(float *)(*(int *)puVar17[0x28] + 8 + (int)local_34) * (float)local_c4;
                FUN_006e25d0(param_1,(int *)((int)local_8 + puVar17[0x28] + 0x25));
                uVar15 = puVar17[0x28];
                uVar13 = *(int *)((int)puVar7 + uVar15 + 0x25) >> 0x10;
                uVar12 = *(int *)((int)puVar7 + uVar15 + 0x29) >> 0x10;
                if (((puVar17[1] & 0x80) == 0) &&
                   (((puVar17[1] & 0x20) == 0 || (puVar17[7] != 0xffffffff)))) {
                  piVar14 = (int *)((int)puVar7 + uVar15 + 0x2d);
                  *piVar14 = *piVar14 - param_1[0xb9];
                  uVar15 = *(int *)((int)local_8 + puVar17[0x28] + 0x2d) >> 0x10;
                }
                else {
                  *(undefined4 *)((int)puVar7 + uVar15 + 0x2d) = 0;
                  uVar15 = 0;
                }
                if ((int)uVar13 < (int)local_10) {
                  local_10 = uVar13;
                }
                if ((int)local_30 < (int)uVar13) {
                  local_30 = uVar13;
                }
                if ((int)uVar12 < (int)local_1c) {
                  local_1c = uVar12;
                }
                if ((int)local_24 < (int)uVar12) {
                  local_24 = uVar12;
                }
                if ((int)uVar15 < (int)local_5c) {
                  local_5c = uVar15;
                }
                if ((int)local_88 < (int)uVar15) {
                  local_88 = uVar15;
                }
                piVar14 = (int *)puVar17[0x28];
                local_84 = local_84 + 1;
                local_34 = local_34 + 3;
                local_8 = local_8 + 4;
                iVar11 = local_cc;
              } while (local_84 < piVar14[1]);
            }
            local_50 = local_10 - iVar11;
            local_48 = ((local_14 - iVar11) - local_10) + local_30;
            local_4c = local_1c - iVar11;
            local_44 = (local_24 - local_1c) + (local_14 - iVar11);
            puVar17[5] = (int)(local_5c + local_88) / 2;
            iVar11 = FUN_006b0460((int *)&local_80,&local_50,&local_a0);
            if (iVar11 != 0) {
              *puVar17 = *puVar17 | 0x82;
              puVar17[0x19] = local_80;
              puVar17[0x1a] = local_7c;
              puVar17[0x1b] = local_78;
              puVar17[0x1c] = local_74;
            }
          }
        }
        else {
          local_70 = *(float *)puVar17[0x28];
          local_6c = *(float *)(puVar17[0x28] + 4);
          local_68 = *(float *)(puVar17[0x28] + 8);
          FUN_006e25d0(param_1,(int *)(puVar17[0x28] + 0x29));
          *(uint *)(puVar17[0x28] + 0x29) = *(int *)(puVar17[0x28] + 0x29) + 0x8000U & 0xffff0000;
          uVar15 = puVar17[0x28];
          *(uint *)(uVar15 + 0x2d) = *(int *)(uVar15 + 0x2d) + 0x8000U & 0xffff0000;
          uVar13 = puVar17[0x28];
          iVar11 = *(int *)(uVar15 + 0x29) >> 0x10;
          local_1c = *(int *)(uVar13 + 0x2d) >> 0x10;
          *(int *)(uVar13 + 0x31) = *(int *)(uVar13 + 0x31) - param_1[0xb9];
          local_70 = *(float *)(puVar17[0x28] + 0xc);
          local_5c = *(int *)(puVar17[0x28] + 0x31) >> 0x10;
          local_6c = *(float *)(puVar17[0x28] + 0x10);
          local_68 = *(float *)(puVar17[0x28] + 0x14);
          FUN_006e25d0(param_1,(int *)(puVar17[0x28] + 0x39));
          *(uint *)(puVar17[0x28] + 0x39) = *(int *)(puVar17[0x28] + 0x39) + 0x8000U & 0xffff0000;
          uVar15 = puVar17[0x28];
          local_50 = *(int *)(uVar15 + 0x39) >> 0x10;
          *(uint *)(uVar15 + 0x3d) = *(int *)(uVar15 + 0x3d) + 0x8000U & 0xffff0000;
          local_24 = *(int *)(puVar17[0x28] + 0x3d) >> 0x10;
          piVar14 = (int *)(puVar17[0x28] + 0x41);
          *piVar14 = *piVar14 - param_1[0xb9];
          uVar15 = puVar17[0x28];
          local_88 = *(int *)(uVar15 + 0x41) >> 0x10;
          local_28 = *(int *)(uVar15 + 0x18) + *(int *)(uVar15 + 0x1d) * 2;
          local_4c = (int)(local_28 - 1) / 2;
          if (iVar11 < local_50) {
            local_48 = local_50 - iVar11;
            local_50 = iVar11 - local_4c;
          }
          else {
            local_48 = iVar11 - local_50;
            local_50 = local_50 - local_4c;
          }
          local_48 = local_48 + local_28;
          if ((int)local_1c < (int)local_24) {
            local_44 = local_24 - local_1c;
            local_4c = local_1c - local_4c;
          }
          else {
            local_44 = local_1c - local_24;
            local_4c = local_24 - local_4c;
          }
          local_44 = local_44 + local_28;
          puVar17[5] = (int)(local_5c + local_88) / 2;
          iVar11 = FUN_006b0460((int *)&local_80,&local_50,&local_a0);
          if (iVar11 != 0) {
            *puVar17 = *puVar17 | 0x82;
            puVar17[0x19] = local_80;
            puVar17[0x1a] = local_7c;
            puVar17[0x1b] = local_78;
            puVar17[0x1c] = local_74;
          }
        }
      }
      if ((puVar17[1] >> 8 & 0x80) == 0) {
        if ((*puVar17 & 0x40) != 0) {
          puVar17[0x40] = puVar17[0x3b];
          puVar17[0x3f] = puVar17[0x3a];
          puVar17[0x3b] = 0;
          puVar17[0x3a] = 0;
        }
        goto LAB_006ee174;
      }
      if (((*puVar17 & 0x40) == 0) && (param_1[0xb6] == 0)) goto LAB_006ee184;
      local_8c = puVar17[0x38];
      if (param_1[0xb6] != 0) {
        iVar11 = 0;
        if (0 < (int)local_8c) {
          puVar7 = (undefined4 *)(puVar17[0x39] + 8);
          do {
            FUN_006a5e90((undefined4 *)*puVar7);
            puVar7 = puVar7 + 3;
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)puVar17[0x38]);
        }
        FUN_006ab060(puVar17 + 0x39);
        puVar17[0x38] = 0;
      }
      local_120 = DAT_00858df8;
      DAT_00858df8 = &local_120;
      iVar11 = __setjmp3(local_11c,0,unaff_EDI,unaff_ESI);
      puVar17 = local_2c;
      param_1 = local_c8;
      if (iVar11 == 0) {
        iVar11 = (*(code *)local_2c[0x3d])(local_c8,local_c,local_2c + 0x31,local_2c[0x3e]);
        if (iVar11 < 0) {
          if (iVar11 == -4) {
            iVar11 = 0;
            if (0 < (int)puVar17[0x38]) {
              local_8 = (undefined4 *)(puVar17[0x39] + 8);
              do {
                FUN_006a5e90((undefined4 *)*local_8);
                local_8 = local_8 + 3;
                iVar11 = iVar11 + 1;
              } while (iVar11 < (int)puVar17[0x38]);
            }
            FUN_006ab060(puVar17 + 0x39);
            iVar11 = 0;
            puVar17[0x38] = 0;
          }
          if (local_18 == 0) {
            local_18 = iVar11;
          }
        }
      }
      else if (local_18 == 0) {
        local_18 = iVar11;
      }
      DAT_00858df8 = (undefined4 *)local_120;
      if (iVar11 == 2) {
        *puVar17 = *puVar17 & 0xffffffbf;
      }
      else {
        puVar17[0x40] = puVar17[0x3b];
        puVar17[0x3f] = puVar17[0x3a];
        puVar17[0x3b] = 0;
        puVar17[0x3a] = 0;
        if ((puVar17[0x38] != 0) && (puVar17[0x39] != 0)) {
          if (local_8c != puVar17[0x38]) {
            if (0 < (int)local_8c) {
              puVar7 = (undefined4 *)(puVar17[0x3c] + 0xc);
              local_34 = (int *)local_8c;
              do {
                FUN_006a5e90((undefined4 *)*puVar7);
                puVar7 = puVar7 + 4;
                local_34 = (int *)((int)local_34 - 1);
              } while (local_34 != (int *)0x0);
              local_34 = (int *)0x0;
            }
            FUN_006a5e90((undefined4 *)puVar17[0x3c]);
            puVar7 = FUN_006b04d0(puVar17[0x38] << 4);
            puVar17[0x3c] = (uint)puVar7;
            if (puVar7 == (undefined4 *)0x0) {
LAB_006ee1dd:
              local_18 = -2;
              goto LAB_006ef0d0;
            }
            local_8c = puVar17[0x38];
          }
          uVar15 = puVar17[0x3c];
          local_3c = (double)((ulonglong)local_3c & 0xffffffff);
          if (0 < (int)local_8c) {
            local_34 = (int *)(puVar17[0x39] + 4);
            do {
              if (*(int *)(uVar15 + 8) != *local_34) {
                iVar11 = FUN_006bfb50(*(undefined4 **)(uVar15 + 0xc),*local_34 * 8);
                *(int *)(uVar15 + 0xc) = iVar11;
                if (iVar11 == 0) {
                  *(undefined4 *)(uVar15 + 8) = 0;
                  goto LAB_006ee1dd;
                }
              }
              local_34 = local_34 + 3;
              uVar15 = uVar15 + 0x10;
              iVar11 = local_3c._4_4_ + 1;
              local_3c = (double)CONCAT44(iVar11,(undefined4)local_3c);
            } while (iVar11 < (int)local_8c);
          }
          FUN_006ecc70(param_1,&local_a0,puVar17);
          goto LAB_006ee174;
        }
        if (0 < (int)local_8c) {
          puVar7 = (undefined4 *)(puVar17[0x3c] + 0xc);
          local_3c = (double)CONCAT44(local_8c,(undefined4)local_3c);
          do {
            FUN_006a5e90((undefined4 *)*puVar7);
            puVar7 = puVar7 + 4;
            iVar11 = local_3c._4_4_ + -1;
            local_3c = (double)CONCAT44(iVar11,(undefined4)local_3c);
          } while (iVar11 != 0);
        }
        FUN_006a5e90((undefined4 *)puVar17[0x3c]);
        puVar17[0x38] = 0;
        puVar17[0x39] = 0;
        puVar17[0x3c] = 0;
      }
    }
LAB_006ee174:
    if (param_1[0xb6] != 0) {
      *puVar17 = *puVar17 & 0xff87ffee;
    }
LAB_006ee184:
    local_c = local_c + 1;
    puVar17 = puVar17 + 0x45;
    if ((int)param_1[0xc4] <= (int)local_c) goto LAB_006ee1a8;
    goto LAB_006ed2c1;
  }
LAB_006ee1a8:
  if (param_1[0xb6] == 0) {
    puVar7 = (undefined4 *)param_1[199];
    local_c = 0;
    if (0 < (int)param_1[0xc4]) {
      do {
        local_2c = puVar7;
        if (((byte)*puVar7 & 5) == 5) {
          iVar11 = FUN_006d1ad0((int *)param_1[0xd4],100,puVar7[0xf],puVar7[0x10],puVar7[0x11],
                                puVar7[0x12],local_98,local_94,1);
          param_1[0xb6] = (uint)(iVar11 < 0);
          if (iVar11 < 0 != 0) break;
        }
        if (((byte)*puVar7 & 0x50) == 0x50) {
          piVar14 = (int *)puVar7[0x40];
          local_84 = 0;
          if (0 < (int)puVar7[0x3f]) {
            do {
              if (-1 < *piVar14) {
                iVar11 = FUN_006d1ad0((int *)param_1[0xd4],100,*piVar14,piVar14[1],piVar14[2],
                                      piVar14[3],local_98,local_94,1);
                param_1[0xb6] = (uint)(iVar11 < 0);
                if (iVar11 < 0 != 0) break;
              }
              piVar14 = piVar14 + 4;
              local_84 = local_84 + 1;
            } while (local_84 < (int)puVar7[0x3f]);
          }
          if (param_1[0xb6] != 0) break;
        }
        local_c = local_c + 1;
        puVar7 = puVar7 + 0x45;
      } while ((int)local_c < (int)param_1[0xc4]);
    }
  }
  if (param_1[0xb5] != 0) {
    pbVar8 = (byte *)param_1[199];
    local_c = 0;
    if (0 < (int)param_1[0xc4]) {
      do {
        if (((*pbVar8 & 3) != 0) && (uVar15 = *(uint *)(pbVar8 + 4), (uVar15 & 0x70) != 0)) {
          if ((uVar15 & 0x10) == 0) {
            local_14 = uVar15 & 0x20;
            if ((local_14 == 0) || (*(int *)(pbVar8 + 0x1c) != -1)) {
              pbVar3 = (byte *)(param_1[199] + *(int *)(pbVar8 + 0x1c) * 0x114);
              if ((*pbVar3 & 3) != 0) {
                iVar11 = *(int *)(pbVar3 + 0x14);
                if ((pbVar3[4] & 2) != 0) {
                  iVar11 = iVar11 + *(int *)(pbVar3 + 0x30);
                }
                if (local_14 == 0) {
                  if ((uVar15 & 0x40) != 0) {
                    *(int *)(pbVar8 + 0x14) = iVar11;
                    iVar16 = *(int *)(pbVar3 + 0xc);
LAB_006ee40b:
                    iVar16 = iVar16 + -1;
                    goto LAB_006ee40c;
                  }
                }
                else if ((iVar11 < *(int *)(pbVar8 + 0x14)) ||
                        ((*(int *)(pbVar8 + 0x14) == iVar11 &&
                         (*(int *)(pbVar3 + 0xc) <= *(int *)(pbVar8 + 0xc))))) {
                  *(int *)(pbVar8 + 0x14) = iVar11;
                  iVar16 = *(int *)(pbVar3 + 0xc);
                  if (0 < iVar16) goto LAB_006ee40b;
                  if (iVar11 < 1) {
                    pbVar8[0xc] = 0;
                    pbVar8[0xd] = 0;
                    pbVar8[0xe] = 0;
                    pbVar8[0xf] = 0;
                  }
                  else {
                    *(int *)(pbVar8 + 0x14) = iVar11 + -1;
                  }
                }
              }
            }
            else {
              pbVar8[0x14] = 0;
              pbVar8[0x15] = 0;
              pbVar8[0x16] = 0;
              pbVar8[0x17] = 0;
            }
          }
          else if (*(int *)(pbVar8 + 0x1c) == -1) {
            *(int *)(pbVar8 + 0x14) = *(int *)(pbVar8 + 0x10) + 0x10000;
          }
          else {
            pbVar3 = (byte *)(param_1[199] + *(int *)(pbVar8 + 0x1c) * 0x114);
            if ((*pbVar3 & 3) != 0) {
              iVar11 = *(int *)(pbVar3 + 0x14);
              if ((pbVar3[4] & 2) != 0) {
                iVar11 = iVar11 + *(int *)(pbVar3 + 0x2c);
              }
              if ((*(int *)(pbVar8 + 0x14) < iVar11) ||
                 ((*(int *)(pbVar8 + 0x14) == iVar11 &&
                  (*(int *)(pbVar8 + 0xc) <= *(int *)(pbVar3 + 0xc))))) {
                *(int *)(pbVar8 + 0x14) = iVar11;
                iVar16 = *(int *)(pbVar3 + 0xc) + 1;
LAB_006ee40c:
                *(int *)(pbVar8 + 0xc) = iVar16;
              }
            }
          }
        }
        local_c = local_c + 1;
        pbVar8 = pbVar8 + 0x114;
      } while ((int)local_c < (int)param_1[0xc4]);
    }
  }
  if (local_ac != 0) {
    iVar11 = 0;
    if (0 < (int)param_1[0xc4]) {
      piVar14 = (int *)(param_1[199] + 0x14);
      do {
        if (((piVar14[-4] & 0x100U) != 0) &&
           (pbVar8 = (byte *)(param_1[199] + piVar14[2] * 0x114), (*pbVar8 & 3) != 0)) {
          iVar16 = *(int *)(pbVar8 + 0x14);
          if ((pbVar8[4] & 2) != 0) {
            iVar16 = iVar16 + *(int *)(pbVar8 + 0x30);
          }
          if ((iVar16 < *piVar14) ||
             ((*piVar14 == iVar16 && (*(int *)(pbVar8 + 0xc) <= piVar14[-2])))) {
            *piVar14 = iVar16;
            if (*(int *)(pbVar8 + 0xc) < 1) {
              if (iVar16 < 1) {
                piVar14[-2] = 0;
              }
              else {
                *piVar14 = iVar16 + -1;
              }
            }
            else {
              piVar14[-2] = *(int *)(pbVar8 + 0xc) + -1;
            }
          }
        }
        iVar11 = iVar11 + 1;
        piVar14 = piVar14 + 0x45;
      } while (iVar11 < (int)param_1[0xc4]);
    }
  }
  puVar17 = (uint *)param_1[199];
  param_1[0xca] = 0;
  local_c = 0;
  local_2c = puVar17;
  if (0 < (int)param_1[0xc4]) {
    do {
      uVar15 = *puVar17;
      if ((((byte)uVar15 & 5) == 1) || ((uVar15 & 2) != 0)) {
        local_2c = puVar17;
        if ((int)param_1[0xcb] <= param_1[0xca] + 1) {
          iVar11 = FUN_006bfb50((undefined4 *)param_1[0xcc],(param_1[0xcb] * 0xd + 0x28a) * 8);
          param_1[0xcc] = iVar11;
          if (iVar11 == 0) goto LAB_006eeada;
          param_1[0xcb] = param_1[0xcb] + 0x32;
        }
        *(uint *)(param_1[0xcc] + param_1[0xca] * 0x68) = *puVar17 & 0xffffffdf;
        *(uint *)(param_1[0xcc] + 4 + param_1[0xca] * 0x68) = puVar17[1] & 0xffff7fff;
        *(undefined4 *)(param_1[0xcc] + 0x60 + param_1[0xca] * 0x68) = 0xffffffff;
        *(uint **)(param_1[0xcc] + 100 + param_1[0xca] * 0x68) = puVar17;
        *(undefined4 *)(param_1[0xcc] + 0x1c + param_1[0xca] * 0x68) = 0;
        *(undefined4 *)(param_1[0xcc] + 0x18 + param_1[0xca] * 0x68) = 0;
        if (((*puVar17 & 2) == 0) && ((puVar17[1] & 0x1000) == 0)) {
          if ((*puVar17 & 0x800) != 0) {
            local_30 = puVar17[0x15];
            local_24 = puVar17[0x16];
            local_10 = puVar17[0x17] + local_30;
            uVar15 = puVar17[0x18] + local_24;
            local_40 = 0;
            local_1c = uVar15;
            if (0 < (int)puVar17[0x25]) {
              do {
                iVar11 = *(int *)(puVar17[0x28] + 4 + local_40 * 8);
                if (iVar11 != 0) {
                  psVar2 = (short *)(puVar17[0x29] + local_40 * 4);
                  uVar5 = psVar2[1];
                  local_14 = CONCAT22((short)(puVar17[0x29] >> 0x10),uVar5);
                  if (((byte)uVar5 & 0xc0) == 0xc0) {
                    iVar11 = *(int *)(iVar11 + *psVar2 * 4);
                    if (((local_90 == 0) || ((puVar17[1] & 4) != 0)) || ((uVar5 & 2) != 0)) {
                      local_50 = (int)*(short *)(iVar11 + 0xe) + puVar17[0x13];
                      local_4c = (int)*(short *)(iVar11 + 0x10) + puVar17[0x14];
                      local_48 = (int)*(short *)(iVar11 + 0x12);
                      local_44 = (int)*(short *)(iVar11 + 0x14);
                    }
                    else {
                      local_8 = *(undefined4 **)(iVar11 + 4);
                      local_20 = *(int *)(iVar11 + 8);
                      local_60 = (param_1[0xbc] * (int)local_8) / 100;
                      iVar16 = (param_1[0xbd] * local_20) / 100;
                      local_58 = (double)CONCAT44(iVar16,(undefined4)local_58);
                      local_14 = *(short *)(iVar11 + 0xe) * local_60;
                      local_50 = (int)((int)local_8 / 2 + local_14) / (int)local_8 + puVar17[0x15];
                      local_4c = (local_20 / 2 + *(short *)(iVar11 + 0x10) * iVar16) / local_20 +
                                 puVar17[0x16];
                      local_48 = (*(short *)(iVar11 + 0x12) * local_60) / (int)local_8;
                      local_44 = (*(short *)(iVar11 + 0x14) * iVar16) / local_20;
                      uVar15 = local_1c;
                    }
                    iVar11 = FUN_006b0460((int *)&local_80,&local_50,&local_a0);
                    if (iVar11 != 0) {
                      if ((int)local_80 < (int)local_10) {
                        local_10 = local_80;
                      }
                      if ((int)local_7c < (int)uVar15) {
                        local_1c = local_7c;
                        uVar15 = local_7c;
                      }
                      if ((int)local_30 < (int)(local_80 + local_78)) {
                        local_30 = local_80 + local_78;
                      }
                      if ((int)local_24 < (int)(local_74 + local_7c)) {
                        local_24 = local_74 + local_7c;
                      }
                    }
                  }
                }
                local_40 = local_40 + 1;
              } while (local_40 < (int)puVar17[0x25]);
            }
            if (((int)local_10 < (int)local_30) && ((int)uVar15 < (int)local_24)) {
              *(uint *)(param_1[0xcc] + 8 + param_1[0xca] * 0x68) = local_10;
              *(uint *)(param_1[0xcc] + 0xc + param_1[0xca] * 0x68) = uVar15;
              local_14 = local_30 - local_10;
              *(uint *)(param_1[0xcc] + 0x10 + param_1[0xca] * 0x68) = local_14;
              iVar11 = local_24 - uVar15;
              *(int *)(param_1[0xcc] + 0x14 + param_1[0xca] * 0x68) = iVar11;
              *(undefined4 *)(param_1[0xcc] + 0x18 + param_1[0xca] * 0x68) = 1;
              *(uint *)(param_1[0xcc] + 0x20 + param_1[0xca] * 0x68) = local_10;
              *(uint *)(param_1[0xcc] + 0x24 + param_1[0xca] * 0x68) = local_1c;
              *(uint *)(param_1[0xcc] + 0x28 + param_1[0xca] * 0x68) = local_14;
              *(int *)(param_1[0xcc] + 0x2c + param_1[0xca] * 0x68) = iVar11;
              *(uint *)(param_1[0xcc] + 0x1c + param_1[0xca] * 0x68) = iVar11 * local_14;
            }
          }
        }
        else {
          *(undefined4 *)(param_1[0xcc] + 0x18 + param_1[0xca] * 0x68) = 5;
        }
        param_1[0xca] = param_1[0xca] + 1;
      }
      else {
        *puVar17 = uVar15 & 0xfffff7f2;
        if ((uVar15 & 0x4400) == 0x400) {
          uVar15 = puVar17[0x25];
          while (uVar15 = uVar15 - 1, -1 < (int)uVar15) {
            puVar4 = (ushort *)(puVar17[0x29] + 2 + uVar15 * 4);
            *puVar4 = *puVar4 & 0xff7f;
          }
        }
      }
      local_c = local_c + 1;
      puVar17 = puVar17 + 0x45;
      local_2c = puVar17;
    } while ((int)local_c < (int)param_1[0xc4]);
  }
  local_3c = (double)CONCAT44((undefined4 *)param_1[0xca],(undefined4)local_3c);
  FUN_006accd0((undefined4 *)param_1[0xcc],(undefined4 *)param_1[0xca],0x68,FUN_006ecfc0);
  puVar17 = (uint *)param_1[199];
  param_1[0xc9] = 0;
  local_c = 0;
  if (0 < (int)param_1[0xc4]) {
    do {
      if ((0 < (int)puVar17[0x24]) && ((((byte)*puVar17 & 5) == 1 || ((*puVar17 & 2) != 0)))) {
        if ((int)param_1[0xcb] <= param_1[0xca] + 1) {
          local_2c = puVar17;
          iVar11 = FUN_006bfb50((undefined4 *)param_1[0xcc],(param_1[0xcb] * 0xd + 0x28a) * 8);
          param_1[0xcc] = iVar11;
          if (iVar11 == 0) goto LAB_006eeada;
          param_1[0xcb] = param_1[0xcb] + 0x32;
        }
        *(uint *)(param_1[0xcc] + param_1[0xca] * 0x68) = *puVar17 & 0xffffffdf;
        *(uint *)(param_1[0xcc] + 4 + param_1[0xca] * 0x68) = puVar17[1] & 0xffff7fff;
        *(undefined4 *)(param_1[0xcc] + 0x60 + param_1[0xca] * 0x68) = 0xffffffff;
        *(uint **)(param_1[0xcc] + 100 + param_1[0xca] * 0x68) = puVar17;
        *(uint *)(param_1[0xcc] + 0x18 + param_1[0xca] * 0x68) = -(uint)((*puVar17 & 2) != 0) & 5;
        *(undefined4 *)(param_1[0xcc] + 0x1c + param_1[0xca] * 0x68) = 0;
        param_1[0xca] = param_1[0xca] + 1;
        param_1[0xc9] = param_1[0xc9] + 1;
      }
      local_c = local_c + 1;
      puVar17 = puVar17 + 0x45;
    } while ((int)local_c < (int)param_1[0xc4]);
  }
  puVar17 = (uint *)param_1[199];
  param_1[200] = 0;
  local_c = 0;
  local_2c = puVar17;
  if (0 < (int)param_1[0xc4]) {
    do {
      uVar15 = *puVar17;
      local_2c = puVar17;
      if ((((byte)uVar15 & 0x50) == 0x10) || ((uVar15 & 0x20) != 0)) {
        if ((int)param_1[0xcb] <= (int)(param_1[0xca] + puVar17[0x38])) {
          iVar11 = FUN_006bfb50((undefined4 *)param_1[0xcc],
                                (param_1[0xcb] + 0x32 + puVar17[0x38]) * 0x68);
          param_1[0xcc] = iVar11;
          if (iVar11 == 0) goto LAB_006eeada;
          param_1[0xcb] = param_1[0xcb] + puVar17[0x38] + 0x32;
        }
        iVar11 = 0;
        local_a8 = (double)CONCAT44(puVar17[0x3c],(undefined4)local_a8);
        if (0 < (int)puVar17[0x38]) {
          do {
            if ((*local_a8._4_4_ & 2) == 0) {
              *(uint *)(param_1[0xcc] + param_1[0xca] * 0x68) = *puVar17 & 0xffffff7c;
              *(uint *)(param_1[0xcc] + 4 + param_1[0xca] * 0x68) = puVar17[1];
              if ((*puVar17 & 0x20) != 0) {
                puVar1 = (uint *)(param_1[0xcc] + param_1[0xca] * 0x68);
                *puVar1 = *puVar1 | 2;
              }
              if ((*puVar17 & 0x10) != 0) {
                puVar1 = (uint *)(param_1[0xcc] + param_1[0xca] * 0x68);
                *puVar1 = *puVar1 | 1;
              }
              if ((*puVar17 & 0x40) == 0) {
                puVar1 = (uint *)(param_1[0xcc] + param_1[0xca] * 0x68);
                *puVar1 = *puVar1 & 0xfffffffb;
              }
              *(int *)(param_1[0xcc] + 0x60 + param_1[0xca] * 0x68) = iVar11;
              *(uint **)(param_1[0xcc] + 100 + param_1[0xca] * 0x68) = puVar17;
              *(undefined4 *)(param_1[0xcc] + 0x18 + param_1[0xca] * 0x68) = 0;
              *(undefined4 *)(param_1[0xcc] + 0x1c + param_1[0xca] * 0x68) = 0;
              param_1[0xca] = param_1[0xca] + 1;
              param_1[200] = param_1[200] + 1;
            }
            iVar11 = iVar11 + 1;
            local_a8 = (double)CONCAT44(local_a8._4_4_ + 0x10,(undefined4)local_a8);
          } while (iVar11 < (int)puVar17[0x38]);
        }
      }
      else {
        *puVar17 = uVar15 & 0xffffdfaf;
      }
      if (puVar17[0x40] != 0) {
        FUN_006ab060(puVar17 + 0x40);
      }
      puVar17[0x3f] = 0;
      local_c = local_c + 1;
      puVar17 = puVar17 + 0x45;
      local_2c = puVar17;
    } while ((int)local_c < (int)param_1[0xc4]);
  }
  iVar11 = local_18;
  local_58 = (double)((ulonglong)local_58 & 0xffffffff);
  if (0 < local_3c._4_4_) {
    iVar16 = 0;
    do {
      iVar9 = param_1[0xcc] + iVar16;
      local_14 = *(uint *)(param_1[0xcc] + 4 + iVar16);
      if ((local_14 & 0x40) != 0) {
        iVar6 = *(int *)(iVar9 + 100);
        pbVar8 = (byte *)(param_1[199] + *(int *)(iVar6 + 0x1c) * 0x114);
        if ((*pbVar8 & 3) == 0) {
          *(uint *)(iVar9 + 4) = local_14 & 0xffffffbf;
        }
        else {
          puVar4 = (ushort *)(*(int *)(pbVar8 + 0xa4) + 2 + *(int *)(iVar6 + 0x20) * 4);
          *puVar4 = *puVar4 | 0xc001;
          *(undefined2 *)
           (*(int *)(pbVar8 + 0xa4) + *(int *)(*(int *)(param_1[0xcc] + 100 + iVar16) + 0x20) * 4) =
               local_58._4_2_;
        }
      }
      piVar14 = (int *)(param_1[0xcc] + 100 + iVar16);
      iVar16 = iVar16 + 0x68;
      *(int *)(*piVar14 + 0xc) = local_58._4_4_;
      iVar9 = local_58._4_4_ + 1;
      local_58 = (double)CONCAT44(iVar9,(undefined4)local_58);
    } while (iVar9 < local_3c._4_4_);
  }
  iVar16 = FUN_006ec010(param_1);
  if (iVar11 == 0) {
    iVar11 = iVar16;
    local_18 = iVar16;
  }
  iVar16 = FUN_007295f0(param_1);
  if (iVar11 == 0) {
    iVar11 = iVar16;
    local_18 = iVar16;
  }
  iVar16 = FUN_00708650(param_1);
  if (iVar11 == 0) {
    local_18 = iVar16;
  }
  local_58 = (double)((ulonglong)local_58 & 0xffffffff);
  if (0 < (int)param_1[0xca]) {
    iVar11 = 0;
    do {
      if ((*(byte *)(param_1[0xcc] + iVar11 + 4) & 0x40) != 0) {
        iVar9 = *(int *)(param_1[0xcc] + iVar11 + 100);
        iVar16 = param_1[199] + *(int *)(iVar9 + 0x1c) * 0x114;
        puVar4 = (ushort *)(*(int *)(iVar16 + 0xa4) + 2 + *(int *)(iVar9 + 0x20) * 4);
        *puVar4 = *puVar4 & 0x3ffe;
        *(undefined2 *)
         (*(int *)(iVar16 + 0xa4) + *(int *)(*(int *)(param_1[0xcc] + 100 + iVar11) + 0x20) * 4) = 0
        ;
      }
      iVar16 = local_58._4_4_ + 1;
      iVar11 = iVar11 + 0x68;
      local_58 = (double)CONCAT44(iVar16,(undefined4)local_58);
    } while (iVar16 < (int)param_1[0xca]);
  }
  param_1[0xb6] = 0;
  if ((local_18 == 0) &&
     (((param_1[0xcd] != 0 || (param_1[0xce] != 0)) &&
      (local_18 = FUN_006bb8b0(param_1[1]), local_18 == 0)))) {
    iVar11 = *(int *)(param_1[1] + 0x478);
    local_14 = iVar11 * param_1[9] + *(int *)(param_1[1] + 0x474) + param_1[8];
    if (param_1[0xcd] != 0) {
      puVar10 = (undefined1 *)(local_14 + param_1[0xd] * iVar11 + param_1[0xc]);
      FUN_00750590(puVar10,iVar11,puVar10,iVar11,param_1[0xe] - param_1[0xc],
                   param_1[0xf] - param_1[0xd],param_1[0xcd]);
      param_1[0xb6] = 1;
      FUN_006b5f80((int *)*param_1,param_1[0xc] + param_1[8],param_1[0xd] + param_1[9],
                   param_1[0xe] - param_1[0xc],param_1[0xf] - param_1[0xd]);
    }
    pbVar8 = (byte *)param_1[0xce];
    if (pbVar8 != (byte *)0x0) {
      local_70 = (float)param_1[0xd1];
      local_6c = (float)param_1[0xd2];
      local_68 = (float)param_1[0xd3];
      FUN_006e25d0(param_1,&local_bc);
      if (param_1[0xbc] == 100) {
        uVar15 = (local_b8 >> 0x10) - param_1[0xd0];
        local_10 = (local_bc >> 0x10) - param_1[0xcf];
        local_50 = (int)*(short *)(pbVar8 + 0xe) + local_10;
        local_4c = (int)*(short *)(pbVar8 + 0x10) + uVar15;
        local_48 = (int)*(short *)(pbVar8 + 0x12);
        local_44 = (int)*(short *)(pbVar8 + 0x14);
      }
      else {
        local_20 = *(int *)(pbVar8 + 8);
        local_48 = *(int *)(pbVar8 + 4);
        local_60 = (param_1[0xbc] * local_48) / 100;
        iVar11 = (param_1[0xbd] * local_20) / 100;
        local_58 = (double)CONCAT44(iVar11,(undefined4)local_58);
        iVar16 = (int)((ulonglong)((longlong)(int)(param_1[0xcf] * param_1[0xbc]) * -0x51eb851f) >>
                      0x20);
        local_10 = (local_bc >> 0x10) + ((iVar16 >> 5) - (iVar16 >> 0x1f));
        iVar16 = (int)((ulonglong)((longlong)(int)(param_1[0xd0] * param_1[0xbd]) * -0x51eb851f) >>
                      0x20);
        uVar15 = (local_b8 >> 0x10) + ((iVar16 >> 5) - (iVar16 >> 0x1f));
        local_50 = (local_48 / 2 + *(short *)(pbVar8 + 0xe) * local_60) / local_48 + local_10;
        local_4c = (local_20 / 2 + *(short *)(pbVar8 + 0x10) * iVar11) / local_20 + uVar15;
        local_48 = (*(short *)(pbVar8 + 0x12) * local_60) / local_48;
        local_44 = (*(short *)(pbVar8 + 0x14) * iVar11) / local_20;
        local_1c = uVar15;
      }
      iVar11 = FUN_006b0460((int *)&local_80,&local_50,&local_a0);
      if (iVar11 != 0) {
        FUN_00708d10(param_1,local_14,*(int *)(param_1[1] + 0x478),pbVar8,local_10,uVar15,0,0,0);
        param_1[0xb6] = 1;
        FUN_006b5f80((int *)*param_1,param_1[8] + local_80,local_7c + param_1[9],local_78,local_74);
      }
    }
    FUN_006bb980(param_1[1]);
    *(undefined4 *)(param_1[1] + 0x50c) = 1;
  }
LAB_006ef0d0:
  iVar11 = local_18;
  if (local_18 != 0) {
    FUN_006a5e40(local_18,DAT_007ed77c,0x7eef4c,0x1069);
    return iVar11;
  }
  uVar15 = local_64;
  if (param_1[0xb7] != 0) {
    param_1[0xb7] = 0;
    FUN_00725760(param_1,1,param_1[0xb8]);
    uVar15 = local_64;
  }
LAB_006ef118:
  puVar17 = (uint *)param_1[199];
  local_3c = (double)((ulonglong)local_3c & 0xffffffff);
  local_c = 0;
  if (0 < (int)param_1[0xc4]) {
    do {
      if ((*puVar17 & 0x4000) != 0) {
        *puVar17 = 0;
        puVar17[2] = 0;
        if (param_1[0xbb] == 0) {
          param_1[0xba] = puVar17;
        }
        else {
          *(uint **)(param_1[0xbb] + 8) = puVar17;
        }
        param_1[0xbb] = puVar17;
        if (local_c == param_1[0xc4] - 1) {
          local_3c = (double)CONCAT44(1,(undefined4)local_3c);
        }
      }
      if ((((*puVar17 & 0x8200) == 0x8200) && (puVar17[0x28] != 0)) &&
         ((*(short *)(puVar17 + 0x2a) =
                (short)puVar17[0x2a] + ((short)uVar15 - *(short *)(param_1 + 0xaa)),
          (short)puVar17[0x2a] < 1 &&
          (uVar13 = param_1[0xaa], uVar13 != uVar15 && -1 < (int)(uVar13 - uVar15))))) {
        local_8 = (undefined4 *)0x0;
        uVar12 = uVar15;
        if ((int)uVar15 < (int)uVar13) {
          do {
            if ((int)uVar15 % (int)*(short *)((int)puVar17 + 0xaa) == 0) {
              local_8 = (undefined4 *)((int)local_8 + 1);
            }
            uVar15 = uVar15 + 1;
            uVar12 = local_64;
          } while ((int)uVar15 < (int)param_1[0xaa]);
        }
        uVar15 = uVar12;
        if (0 < (int)local_8) {
          iVar11 = 0;
          local_28 = 0;
          local_2c = puVar17;
          if (0 < (int)puVar17[0x25]) {
            do {
              piVar14 = (int *)(puVar17[0x28] + iVar11 * 8);
              if (*(int *)(puVar17[0x28] + 4 + iVar11 * 8) == 0) {
                local_28 = local_28 + 1;
              }
              else {
                uVar15 = (int)*(short *)(puVar17[0x29] + iVar11 * 4) + (int)local_8;
                if ((int)uVar15 < *piVar14) {
                  FUN_006e9a10(puVar17,iVar11,uVar15);
                }
                else {
                  piVar14[1] = 0;
                  local_28 = local_28 + 1;
                  *(undefined4 *)(puVar17[0x28] + iVar11 * 8) = 0;
                }
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)puVar17[0x25]);
          }
          uVar15 = local_64;
          if ((int)puVar17[0x25] <= (int)local_28) {
            FUN_006e8ba0(param_1,local_c);
            uVar15 = local_64;
          }
        }
      }
      local_c = local_c + 1;
      puVar17 = puVar17 + 0x45;
    } while ((int)local_c < (int)param_1[0xc4]);
  }
  if (local_3c._4_4_ != 0) {
    iVar11 = param_1[0xc4];
    for (piVar14 = (int *)(param_1[199] + -0x114 + iVar11 * 0x114); (0 < iVar11 && (*piVar14 == 0));
        piVar14 = piVar14 + -0x45) {
      iVar11 = param_1[0xc4] + -1;
      param_1[0xc4] = iVar11;
    }
  }
  return 0;
LAB_006eeada:
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  local_18 = -2;
  goto LAB_006ef0d0;
}

