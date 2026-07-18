
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006f31d0(void *this,uint param_1,int param_2,uint param_3,uint param_4)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  uint *puVar15;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  ushort *local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  byte *local_34;
  byte *local_30;
  uint *local_2c;
  uint local_28;
  void *local_24;
  uint local_20;
  byte *local_1c;
  ushort *local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint *local_8;
  
  local_40 = 0;
  local_20 = 0;
  local_30 = (byte *)0x0;
  local_3c = 0;
  local_5c = param_1 * 0x68;
  puVar15 = *(uint **)(local_5c + 100 + *(int *)((int)this + 0x330));
  puVar15[0xf] = puVar15[0x19];
  puVar15[0x10] = puVar15[0x1a];
  puVar15[0x11] = puVar15[0x1b];
  puVar15[0x12] = puVar15[0x1c];
  local_2c = puVar15;
  local_24 = this;
  if ((*(int *)this != 0) && (param_4 == 0)) {
    FUN_006b5f80(*(int **)this,*(int *)((int)this + 0x20) + puVar15[0x19],
                 *(int *)((int)this + 0x24) + puVar15[0x1a],puVar15[0x1b],puVar15[0x1c]);
  }
  uVar6 = puVar15[4];
  if (((puVar15[1] & 0x80) == 0) && (((puVar15[1] & 0x20) == 0 || (puVar15[7] != 0xffffffff)))) {
LAB_006f32f9:
    local_38 = 1;
    iVar12 = (int)(puVar15[0x19] - *(int *)((int)this + 0x2c8)) / *(int *)((int)this + 0x2c0);
    iVar3 = (int)((puVar15[0x19] - *(int *)((int)this + 0x2c8)) + -1 + puVar15[0x1b]) /
            *(int *)((int)this + 0x2c0);
    iVar4 = (int)(puVar15[0x1a] - *(int *)((int)this + 0x2cc)) / *(int *)((int)this + 0x2c4);
    iVar5 = (int)((puVar15[0x1c] - *(int *)((int)this + 0x2cc)) + -1 + puVar15[0x1a]) /
            *(int *)((int)this + 0x2c4);
    iVar11 = *(int *)((int)this + 0x2b0) + *(int *)((int)this + 0x2b8) * iVar4 * 2;
    if (iVar4 <= iVar5) {
      local_38 = 1;
      local_44 = (iVar5 - iVar4) + 1;
      do {
        if (iVar12 <= iVar3) {
          local_54 = (ushort *)(iVar11 + iVar12 * 2);
          iVar4 = (iVar3 - iVar12) + 1;
          do {
            if ((int)(uint)*local_54 < (int)uVar6) {
              local_38 = 0;
            }
            local_54 = local_54 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        iVar11 = iVar11 + *(int *)((int)this + 0x2b8) * 2;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      local_44 = 0;
      if (local_38 == 0) {
        if (param_2 < 1) {
          local_38 = (-(uint)(param_4 != 0) & 0x180000) + 0x80000 & *puVar15;
        }
        else {
          local_38 = (-(uint)(param_4 != 0) & 0x300000) + 0x100000 & *puVar15;
        }
      }
    }
  }
  else {
    local_38 = 1;
    if ((-1 < (int)puVar15[9]) && (-1 < (int)puVar15[10])) {
      iVar11 = (int)(*(int *)((int)this + 0x2f0) * puVar15[9]) / 100 + puVar15[0x15];
      iVar12 = (int)(*(int *)((int)this + 0x2f4) * puVar15[10]) / 100 + puVar15[0x16];
      if ((((iVar11 < 0) || (iVar12 < 0)) || (*(int *)((int)this + 0x28) <= iVar11)) ||
         ((*(int *)((int)this + 0x2c) <= iVar12 ||
          ((int)(uint)*(ushort *)
                       (*(int *)((int)this + 0x14) +
                       (*(int *)((int)this + 0x28) * iVar12 + iVar11) * 2) < (int)uVar6))))
      goto LAB_006f32f9;
    }
  }
  local_28 = 0;
  if ((local_38 == 0) && ((puVar15[1] & 0x10000) != 0)) {
    local_28 = puVar15[0x2e];
  }
  uVar14 = puVar15[0xe];
  local_48 = 0;
  param_1 = uVar6;
  if ((int)param_3 < 0) {
    local_50 = (int)uVar14 >> 2;
    if (param_2 == 0) {
      param_1 = uVar6 + puVar15[0xb];
      uVar14 = uVar14 - local_50;
    }
    else if (param_2 == 1) {
      local_48 = uVar14 - local_50;
      uVar14 = puVar15[0xc];
      goto LAB_006f34a4;
    }
  }
  else if (param_2 == 0) {
    local_50 = param_3;
    uVar14 = puVar15[0xb];
LAB_006f34a4:
    param_1 = uVar6 + uVar14;
    uVar14 = local_50;
  }
  else if (param_2 == 1) {
    local_48 = param_3;
    param_1 = uVar6 + puVar15[0xc];
    uVar14 = uVar14 - param_3;
  }
  local_50 = uVar14;
  if (param_4 == 0) {
    if ((*(int *)((int)this + 0x144) == 0) || (*(int *)((int)this + 0x158) == 0)) {
      local_20 = puVar15[0x2d];
    }
    else if (*(int *)((int)this + 0x16c) < (int)uVar6) {
      local_20 = (uVar6 & 0x7f00) + *(int *)((int)this + 0x158);
    }
  }
  else if ((*(int *)((int)this + 0x144) == 0) || (*(int *)((int)this + 0x158) == 0)) {
    local_40 = *(int *)((int)this + 0x27c);
  }
  else {
    iVar12 = *(int *)((int)this + 0x278);
    iVar11 = (int)((uVar6 - *(int *)((int)this + 0x16c)) * iVar12) /
             (*(int *)((int)this + 0x170) - *(int *)((int)this + 0x16c));
    if (iVar11 < 0) {
      local_40 = *(int *)((int)this + 0x27c);
    }
    else {
      if (iVar12 <= iVar11) {
        iVar11 = iVar12 + -1;
      }
      local_40 = *(int *)((int)this + 0x27c) + iVar11 * 0x100;
    }
  }
  local_60 = *(uint *)(local_5c + *(int *)((int)this + 0x330)) & 2;
  local_4c = puVar15[0x25] - 1;
  if (-1 < (int)local_4c) {
LAB_006f3562:
    psVar1 = (short *)(puVar15[0x29] + local_4c * 4);
    uVar2 = psVar1[1];
    if (((uVar2 & 0xc000) == 0xc000) && ((local_60 != 0 || ((uVar2 & 0x80) != 0)))) {
      if ((uVar2 & 1) == 0) {
        iVar11 = *(int *)(puVar15[0x28] + 4 + local_4c * 8);
        if (((iVar11 != 0) && (param_4 == (uVar2 & 4) >> 2)) &&
           (local_54 = (ushort *)(*(int *)((int)this + 0x330) + local_5c),
           *(int *)(local_54 + 0xc) != 0)) {
          local_34 = *(byte **)(iVar11 + *psVar1 * 4);
          local_64 = (int)*(short *)(local_34 + 0x14);
          uVar6 = (uint)*(short *)(local_34 + 0x12);
          if (((DAT_00857030 == 0) || ((puVar15[1] & 4) != 0)) ||
             ((*(byte *)(puVar15[0x29] + 2 + local_4c * 4) & 2) != 0)) {
            if (((int)local_48 < (int)*(short *)(local_34 + 0x14) + (int)*(short *)(local_34 + 0x10)
                ) && (iVar11 = local_50 + local_48, *(short *)(local_34 + 0x10) <= iVar11)) {
              local_70 = puVar15[0x13] + (int)*(short *)(local_34 + 0xe);
              local_68 = (int)*(short *)(local_34 + 0x12);
              if (param_2 < 0) {
                local_6c = puVar15[0x14] + (int)*(short *)(local_34 + 0x10);
                local_64 = (int)*(short *)(local_34 + 0x14);
              }
              else {
                uVar7 = (uint)*(short *)(local_34 + 0x10);
                uVar14 = local_48;
                if ((int)local_48 <= (int)uVar7) {
                  uVar14 = uVar7;
                }
                if ((int)((int)*(short *)(local_34 + 0x14) + uVar7) <= iVar11) {
                  iVar11 = (int)*(short *)(local_34 + 0x14) + uVar7;
                }
                local_6c = puVar15[0x14] + uVar14;
                local_64 = iVar11 - uVar14;
              }
              goto LAB_006f397a;
            }
          }
          else {
            uVar7 = (uint)*(short *)(local_34 + 0x10);
            uVar14 = (int)*(short *)(local_34 + 0x14) + uVar7;
            if (((int)local_48 < (int)uVar14) &&
               (uVar10 = local_50 + local_48, (int)uVar7 <= (int)uVar10)) {
              if (param_2 < 0) {
                uVar10 = (int)*(short *)(local_34 + 0x10) + (int)*(short *)(local_34 + 0x14);
                local_58 = uVar7;
                local_c = (int)*(short *)(local_34 + 0x10);
                uVar14 = (int)*(short *)(local_34 + 0x14) + (int)*(short *)(local_34 + 0x10);
              }
              else {
                local_58 = local_48;
                if ((int)local_48 <= (int)uVar7) {
                  local_58 = uVar7;
                }
                if ((int)uVar14 <= (int)uVar10) {
                  uVar10 = uVar14;
                }
                local_44 = uVar10;
                local_c = local_58;
                uVar14 = uVar10;
                if ((int)uVar10 < (int)uVar7) {
                  uVar10 = uVar7;
                  local_44 = uVar7;
                  uVar14 = uVar7;
                }
              }
              local_c = (int)local_c % DAT_00857008;
              local_64 = ((int)uVar14 / DAT_00857008) * 2;
              iVar11 = (int)uVar10 % DAT_00857008;
              local_10 = (int)*(short *)(local_34 + 0xe) % DAT_00857008;
              iVar12 = ((int)*(short *)(local_34 + 0x12) + (int)*(short *)(local_34 + 0xe)) %
                       DAT_00857008;
              uVar14 = local_c;
              uVar7 = local_10;
              if (DAT_00857008 != 5) {
                iVar12 = iVar12 + 1;
                iVar11 = iVar11 + 1;
                uVar14 = local_c + 1;
                uVar7 = local_10 + 1;
              }
              local_64 = local_64 + (iVar11 >> 1);
              local_68 = (((int)*(short *)(local_34 + 0x12) + (int)*(short *)(local_34 + 0xe)) /
                         DAT_00857008) * 2 + (iVar12 >> 1);
              local_70 = ((int)*(short *)(local_34 + 0xe) / DAT_00857008) * 2 + ((int)uVar7 >> 1);
              local_6c = ((int)local_58 / DAT_00857008) * 2 + ((int)uVar14 >> 1);
              local_68 = local_68 - local_70;
              local_64 = local_64 - local_6c;
              local_70 = local_70 + puVar15[0x15];
              local_6c = local_6c + puVar15[0x16];
LAB_006f397a:
              local_58 = *(uint *)(local_54 + 0xc);
              if ((int)local_58 < 5) {
                if ((*(byte *)(puVar15[0x29] + 2 + local_4c * 4) & 0xc0) == 0xc0) {
                  puVar9 = (uint *)(local_54 + 4);
                  local_60 = 1;
                }
                else {
                  local_58 = 0;
                  puVar9 = (uint *)(local_54 + 0x10);
                }
              }
              else {
                puVar9 = puVar15 + 0x19;
              }
              if (local_4c == puVar15[0x23]) {
                DAT_00856fe8 = local_70;
                _DAT_00856ff0 = local_68;
                _DAT_00856ff4 = local_64;
                DAT_00856fe4 = local_34;
                _DAT_00856fec = local_6c;
                DAT_0085700c = uVar6;
              }
              if (((*(byte *)(puVar15[0x29] + 3 + local_4c * 4) & 0x20) == 0) ||
                 (local_54 = (ushort *)0x1, (int)puVar15[0x23] <= (int)local_4c)) {
                local_54 = (ushort *)0x0;
              }
              _DAT_00857000 = local_30;
              do {
                iVar11 = FUN_006b0460(&DAT_00856fd0,&local_70,(int *)puVar9);
                if (iVar11 == 1) {
                  if (local_54 != (ushort *)0x0) {
                    iVar11 = FUN_006b0460(&DAT_00856fd0,&DAT_00856fd0,&DAT_00856fe8);
                    goto LAB_006f3a58;
                  }
LAB_006f3a60:
                  pbVar13 = (byte *)((*(int *)((int)this + 0x24) + DAT_00856fd4) * DAT_00857028 +
                                     *(int *)((int)this + 0x20) + DAT_00856fd0 + DAT_00857004);
                  iVar11 = *(int *)((int)this + 0x28) * DAT_00856fd4;
                  local_30 = (byte *)(*(int *)((int)this + 0xc) + iVar11 + DAT_00856fd0);
                  local_8 = (uint *)(*(int *)((int)this + 0x14) + (iVar11 + DAT_00856fd0) * 2);
                  if (((DAT_00857030 == 0) || ((puVar15[1] & 4) != 0)) ||
                     ((*(byte *)(puVar15[0x29] + 2 + local_4c * 4) & 2) != 0)) {
                    local_1c = (byte *)(DAT_00856fd0 - local_70);
                    local_18 = (ushort *)
                               ((DAT_00856fd4 - *(short *)(local_34 + 0x10)) - puVar15[0x14]);
                    local_44 = puVar15[0x30];
                    if (local_44 != 0) {
                      local_3c = (DAT_00856fd4 - puVar15[0x14]) * puVar15[0x2f] + local_44;
                    }
                    if ((int)local_18 < 1) {
                      pbVar8 = local_34 + (local_34[0xd] >> 1 & 0xe) + 0x16;
                    }
                    else {
                      pbVar8 = FUN_006cfe10(local_34,(int)local_18);
                    }
                    uVar2 = *(ushort *)(local_2c[0x29] + 2 + local_4c * 4);
                    local_44 = CONCAT22((short)(local_4c >> 0x10),uVar2);
                    if ((uVar2 & 0x100) == 0) {
                      if ((uVar2 & 0x10) == 0) {
                        if ((local_3c == 0) || ((uVar2 & 8) != 0)) {
                          if (local_54 == (ushort *)0x0) {
                            if ((uVar2 & 4) == 0) {
                              if (DAT_00856fd8 == uVar6) {
                                if (local_38 == 0) {
                                  if (local_20 == 0) {
                                    if (local_28 == 0) {
                                      FUN_006f4e70(pbVar13,DAT_00857028,local_8,
                                                   *(int *)((int)this + 0x28) << 1,param_1,pbVar8,
                                                   DAT_00856fd8,DAT_00856fdc);
                                    }
                                    else {
                                      FUN_006f4fe0(pbVar13,DAT_00857028,local_8,
                                                   *(int *)((int)this + 0x28) * 2,param_1,pbVar8,
                                                   DAT_00856fd8,DAT_00856fdc,local_30,
                                                   *(int *)((int)this + 0x28),local_28);
                                    }
                                  }
                                  else if (local_28 == 0) {
                                    FUN_006f5760(pbVar13,DAT_00857028,local_8,
                                                 *(int *)((int)this + 0x28) << 1,param_1,pbVar8,
                                                 DAT_00856fd8,DAT_00856fdc,local_20);
                                  }
                                  else {
                                    FUN_006f5920(pbVar13,DAT_00857028,local_8,
                                                 *(int *)((int)this + 0x28) * 2,param_1,pbVar8,
                                                 DAT_00856fd8,DAT_00856fdc,local_20,local_30,
                                                 *(int *)((int)this + 0x28),local_28);
                                  }
                                }
                                else if (local_20 == 0) {
                                  FUN_006d25e0(pbVar13,DAT_00857028,pbVar8,DAT_00856fd8,DAT_00856fdc
                                              );
                                }
                                else {
                                  FUN_006f5bd0(pbVar13,DAT_00857028,pbVar8,DAT_00856fd8,DAT_00856fdc
                                               ,local_20);
                                }
                              }
                              else if (local_38 == 0) {
                                if (local_20 == 0) {
                                  if (local_28 == 0) {
                                    FUN_006f5240(pbVar13,DAT_00857028,local_8,
                                                 *(int *)((int)this + 0x28) << 1,param_1,pbVar8,
                                                 uVar6,(int)local_1c,DAT_00856fd8,DAT_00856fdc);
                                  }
                                  else {
                                    FUN_006f5430(pbVar13,DAT_00857028,local_8,
                                                 *(int *)((int)this + 0x28) * 2,param_1,pbVar8,uVar6
                                                 ,(int)local_1c,DAT_00856fd8,DAT_00856fdc,local_30,
                                                 *(int *)((int)this + 0x28),local_28);
                                  }
                                }
                                else if (local_28 == 0) {
                                  FUN_006f5d80(pbVar13,DAT_00857028,(ushort *)local_8,
                                               *(int *)((int)this + 0x28) << 1,param_1,pbVar8,uVar6,
                                               (int)local_1c,DAT_00856fd8,DAT_00856fdc,local_20);
                                }
                                else {
                                  FUN_006f6020(pbVar13,DAT_00857028,(ushort *)local_8,
                                               *(int *)((int)this + 0x28) * 2,param_1,pbVar8,uVar6,
                                               (int)local_1c,DAT_00856fd8,DAT_00856fdc,local_20,
                                               local_30,*(int *)((int)this + 0x28),local_28);
                                }
                              }
                              else if (local_20 == 0) {
                                FUN_006d26d0(pbVar13,DAT_00857028,pbVar8,uVar6,(int)local_1c,
                                             DAT_00856fd8,DAT_00856fdc);
                              }
                              else {
                                FUN_006f8660((undefined4 *)pbVar13,DAT_00857028,pbVar8,uVar6,
                                             (int)local_1c,DAT_00856fd8,DAT_00856fdc,local_20);
                              }
                            }
                            else if (local_40 != 0) {
                              if (DAT_00856fd8 == uVar6) {
                                if (local_38 == 0) {
                                  FUN_006f5c60(pbVar13,DAT_00857028,local_30,
                                               *(int *)((int)this + 0x28),(ushort *)local_8,
                                               *(int *)((int)this + 0x28) * 2,param_1,pbVar8,
                                               DAT_00856fd8,DAT_00856fdc,local_40);
                                }
                                else {
                                  FUN_006f85a0(pbVar13,DAT_00857028,local_30,
                                               *(int *)((int)this + 0x28),pbVar8,DAT_00856fd8,
                                               DAT_00856fdc,local_40);
                                }
                              }
                              else if (local_38 == 0) {
                                FUN_006f7d10(pbVar13,DAT_00857028,local_30,
                                             *(int *)((int)this + 0x28),(ushort *)local_8,
                                             *(int *)((int)this + 0x28) * 2,param_1,pbVar8,uVar6,
                                             (int)local_1c,DAT_00856fd8,DAT_00856fdc,local_40);
                              }
                              else {
                                FUN_006f88a0(pbVar13,DAT_00857028,local_30,
                                             *(int *)((int)this + 0x28),pbVar8,uVar6,(int)local_1c,
                                             DAT_00856fd8,DAT_00856fdc,local_40);
                              }
                            }
                          }
                          else {
                            local_44 = DAT_00856fd0 - DAT_00856fe8;
                            iVar11 = (DAT_00856fd4 - *(short *)(DAT_00856fe4 + 0x10)) -
                                     local_2c[0x14];
                            if (iVar11 < 1) {
                              local_30 = DAT_00856fe4 + (DAT_00856fe4[0xd] >> 1 & 0xe) + 0x16;
                            }
                            else {
                              local_30 = FUN_006cfe10(DAT_00856fe4,iVar11);
                            }
                            if (local_38 != 0) {
                              param_1 = 0;
                            }
                            if (DAT_00856fd8 == uVar6) {
                              local_1c = (byte *)0x0;
                            }
                            if (DAT_00856fd8 == DAT_0085700c) {
                              local_44 = 0;
                            }
                            if (local_20 == 0) {
                              FUN_006f72f0(pbVar13,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)this + 0x28) << 1,param_1,pbVar8,uVar6,
                                           (int)local_1c,DAT_00856fd8,DAT_00856fdc,local_30,
                                           DAT_0085700c,local_44);
                            }
                            else {
                              FUN_006f77e0(pbVar13,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)this + 0x28) << 1,param_1,pbVar8,uVar6,
                                           (int)local_1c,DAT_00856fd8,DAT_00856fdc,local_30,
                                           DAT_0085700c,local_44,local_20);
                            }
                          }
                        }
                        else {
                          if (local_38 != 0) {
                            param_1 = 0;
                          }
                          if (DAT_00856fd8 == uVar6) {
                            local_1c = (byte *)0x0;
                          }
                          if ((uVar2 & 4) == 0) {
                            if (local_20 == 0) {
                              if (local_28 == 0) {
                                FUN_006f6330(pbVar13,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)this + 0x28) << 1,param_1,pbVar8,uVar6,
                                             (int)local_1c,DAT_00856fd8,DAT_00856fdc,local_3c,
                                             local_2c[0x2f],(byte *)(int)*(short *)(local_34 + 0xe))
                                ;
                              }
                              else {
                                FUN_006f66c0(pbVar13,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)this + 0x28) * 2,param_1,pbVar8,uVar6,
                                             (int)local_1c,DAT_00856fd8,DAT_00856fdc,local_3c,
                                             local_2c[0x2f],(byte *)(int)*(short *)(local_34 + 0xe),
                                             local_30,*(int *)((int)this + 0x28),local_28);
                              }
                            }
                            else if (local_28 == 0) {
                              FUN_006f6ae0(pbVar13,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)this + 0x28) << 1,param_1,pbVar8,uVar6,
                                           (int)local_1c,DAT_00856fd8,DAT_00856fdc,local_3c,
                                           local_2c[0x2f],(byte *)(int)*(short *)(local_34 + 0xe),
                                           local_20);
                            }
                            else {
                              FUN_006f6ea0(pbVar13,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)this + 0x28) * 2,param_1,pbVar8,uVar6,
                                           (int)local_1c,DAT_00856fd8,DAT_00856fdc,local_3c,
                                           local_2c[0x2f],(byte *)(int)*(short *)(local_34 + 0xe),
                                           local_20,local_30,*(int *)((int)this + 0x28),local_28);
                            }
                          }
                          else if (local_40 != 0) {
                            FUN_006f81d0(pbVar13,DAT_00857028,local_30,*(int *)((int)this + 0x28),
                                         (ushort *)local_8,*(int *)((int)this + 0x28) * 2,param_1,
                                         pbVar8,uVar6,(int)local_1c,DAT_00856fd8,DAT_00856fdc,
                                         local_40,local_3c,local_2c[0x2f],
                                         (byte *)(int)*(short *)(local_34 + 0xe));
                          }
                        }
                      }
                      else {
                        local_44 = local_2c[0x2c];
                        if (local_44 != 0) {
                          if (local_38 != 0) {
                            param_1 = 0;
                          }
                          if (DAT_00856fd8 == uVar6) {
                            local_1c = (byte *)0x0;
                          }
                          FUN_006f7fc0(pbVar13,DAT_00857028,(ushort *)local_8,
                                       *(int *)((int)this + 0x28) << 1,param_1,pbVar8,uVar6,
                                       (int)local_1c,DAT_00856fd8,DAT_00856fdc,local_44);
                        }
                      }
                    }
                    else {
                      if (local_38 != 0) {
                        param_1 = 0;
                      }
                      if (DAT_00856fd8 == uVar6) {
                        local_1c = (byte *)0x0;
                      }
                      FUN_007068d0(pbVar13,DAT_00857028,(ushort *)local_8,
                                   *(int *)((int)this + 0x28) << 1,param_1,pbVar8,uVar6,
                                   (int)local_1c,local_2c[0x26],local_2c[0x27],DAT_00856fd8,
                                   DAT_00856fdc);
                    }
                  }
                  else {
                    uVar14 = (DAT_00856fd8 - puVar15[0x15]) + DAT_00856fd0;
                    if (DAT_00857008 == 3) {
                      uVar7 = uVar14 & 1;
                    }
                    else {
                      uVar7 = (-(uint)((uVar14 & 1) != 0) & 3) - 1;
                    }
                    local_44 = DAT_00856fd0 - puVar15[0x15];
                    iVar11 = ((int)uVar14 / 2) * DAT_00857008 +
                             (uVar7 - (int)*(short *)(local_34 + 0xe));
                    if (DAT_00857008 == 3) {
                      local_10 = (local_44 & 1) << 1;
                    }
                    else {
                      local_10 = (local_44 & 1) << 1 | 1;
                    }
                    iVar12 = ((int)local_44 / 2) * DAT_00857008 +
                             (local_10 - (int)*(short *)(local_34 + 0xe));
                    uVar14 = (DAT_00856fdc - local_2c[0x16]) + DAT_00856fd4;
                    if (DAT_00857008 == 3) {
                      uVar7 = uVar14 & 1;
                    }
                    else {
                      uVar7 = (-(uint)((uVar14 & 1) != 0) & 3) - 1;
                    }
                    iVar3 = ((int)uVar14 / 2) * DAT_00857008 +
                            (uVar7 - (int)*(short *)(local_34 + 0x10));
                    local_18 = (ushort *)(DAT_00856fd4 - local_2c[0x16]);
                    if (DAT_00857008 == 3) {
                      local_c = ((uint)local_18 & 1) << 1;
                    }
                    else {
                      local_c = ((uint)local_18 & 1) << 1 | 1;
                    }
                    local_14 = ((int)local_18 / 2) * DAT_00857008 +
                               (local_c - (int)*(short *)(local_34 + 0x10));
                    if (local_2c[0x30] != 0) {
                      local_3c = local_2c[0x2f] * (int)local_18 + local_2c[0x30];
                    }
                    local_1c = pbVar13;
                    if (local_14 < 1) {
                      local_18 = (ushort *)(local_34 + (local_34[0xd] >> 1 & 0xe) + 0x16);
                    }
                    else {
                      local_18 = (ushort *)FUN_006cfe10(local_34,local_14);
                    }
                    uVar2 = *(ushort *)(local_2c[0x29] + 2 + local_4c * 4);
                    if ((uVar2 & 0x100) == 0) {
                      if ((uVar2 & 0x10) == 0) {
                        if ((local_3c == 0) || ((uVar2 & 8) != 0)) {
                          if (local_54 == (ushort *)0x0) {
                            if ((uVar2 & 4) == 0) {
                              if (local_38 == 0) {
                                if (local_20 == 0) {
                                  if (DAT_00857008 == 3) {
                                    if (local_28 == 0) {
                                      FUN_006f8ab0(local_1c,DAT_00857028,(ushort *)local_8,
                                                   *(int *)((int)local_24 + 0x28) << 1,param_1,
                                                   (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                                   iVar3 - local_14,local_10,local_c);
                                    }
                                    else {
                                      FUN_006f8f00(local_1c,DAT_00857028,(ushort *)local_8,
                                                   *(int *)((int)local_24 + 0x28) * 2,param_1,
                                                   (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                                   iVar3 - local_14,local_10,local_c,local_30,
                                                   *(int *)((int)local_24 + 0x28),local_28);
                                    }
                                  }
                                  else if (local_28 == 0) {
                                    FUN_006f94d0(local_1c,DAT_00857028,(ushort *)local_8,
                                                 *(int *)((int)local_24 + 0x28) << 1,param_1,
                                                 (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                                 iVar3 - local_14,local_10,local_c);
                                  }
                                  else {
                                    FUN_006f9ad0(local_1c,DAT_00857028,(ushort *)local_8,
                                                 *(int *)((int)local_24 + 0x28) * 2,param_1,local_18
                                                 ,uVar6,iVar12,iVar11 - iVar12,iVar3 - local_14,
                                                 local_10,local_c,local_30,
                                                 *(int *)((int)local_24 + 0x28),local_28);
                                  }
                                }
                                else if (DAT_00857008 == 3) {
                                  if (local_28 == 0) {
                                    FUN_006fa280(local_1c,DAT_00857028,(ushort *)local_8,
                                                 *(int *)((int)local_24 + 0x28) << 1,param_1,
                                                 (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                                 iVar3 - local_14,local_10,local_c,local_20);
                                  }
                                  else {
                                    FUN_006fa7a0(local_1c,DAT_00857028,(ushort *)local_8,
                                                 *(int *)((int)local_24 + 0x28) * 2,param_1,
                                                 (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                                 iVar3 - local_14,local_10,local_c,local_20,local_30
                                                 ,*(int *)((int)local_24 + 0x28),local_28);
                                  }
                                }
                                else if (local_28 == 0) {
                                  FUN_006fadc0(local_1c,DAT_00857028,(ushort *)local_8,
                                               *(int *)((int)local_24 + 0x28) << 1,param_1,local_18,
                                               uVar6,iVar12,iVar11 - iVar12,iVar3 - local_14,
                                               local_10,local_c,local_20);
                                }
                                else {
                                  FUN_006fb4a0(local_1c,DAT_00857028,(ushort *)local_8,
                                               *(int *)((int)local_24 + 0x28) * 2,param_1,
                                               (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                               iVar3 - local_14,local_10,local_c,local_20,local_30,
                                               *(int *)((int)local_24 + 0x28),local_28);
                                }
                              }
                              else if (local_20 == 0) {
                                if (DAT_00857008 == 3) {
                                  FUN_00704e70(local_1c,DAT_00857028,(byte *)local_18,uVar6,iVar12,
                                               iVar11 - iVar12,iVar3 - local_14,local_10,local_c);
                                }
                                else {
                                  FUN_00705180(local_1c,DAT_00857028,(byte *)local_18,uVar6,iVar12,
                                               iVar11 - iVar12,iVar3 - local_14,local_10,local_c);
                                }
                              }
                              else if (DAT_00857008 == 3) {
                                FUN_007055d0(local_1c,DAT_00857028,(byte *)local_18,uVar6,iVar12,
                                             iVar11 - iVar12,iVar3 - local_14,local_10,local_c,
                                             local_20);
                              }
                              else {
                                FUN_007059a0(local_1c,DAT_00857028,(byte *)local_18,uVar6,iVar12,
                                             iVar11 - iVar12,iVar3 - local_14,local_10,local_c,
                                             local_20);
                              }
                            }
                            else if (local_40 != 0) {
                              if (local_38 == 0) {
                                iVar4 = *(int *)((int)local_24 + 0x28);
                                if (DAT_00857008 == 3) {
                                  FUN_00702510(local_1c,DAT_00857028,local_30,iVar4,
                                               (ushort *)local_8,iVar4 * 2,param_1,(byte *)local_18,
                                               uVar6,iVar12,iVar11 - iVar12,iVar3 - local_14,
                                               local_10,local_c,local_40);
                                }
                                else {
                                  FUN_00702a30(local_1c,DAT_00857028,local_30,iVar4,
                                               (ushort *)local_8,iVar4 * 2,param_1,(byte *)local_18,
                                               uVar6,iVar12,iVar11 - iVar12,iVar3 - local_14,
                                               local_10,local_c,local_40);
                                }
                              }
                              else if (DAT_00857008 == 3) {
                                FUN_00705ed0(local_1c,DAT_00857028,local_30,
                                             *(int *)((int)local_24 + 0x28),(byte *)local_18,uVar6,
                                             iVar12,iVar11 - iVar12,iVar3 - local_14,local_10,
                                             local_c,local_40);
                              }
                              else {
                                FUN_00706340(local_1c,DAT_00857028,local_30,
                                             *(int *)((int)local_24 + 0x28),(byte *)local_18,uVar6,
                                             iVar12,iVar11 - iVar12,iVar3 - local_14,local_10,
                                             local_c,local_40);
                              }
                            }
                          }
                          else {
                            local_44 = ((int)*(short *)(local_34 + 0xe) -
                                       (int)*(short *)(DAT_00856fe4 + 0xe)) + iVar12;
                            iVar4 = ((int)*(short *)(local_34 + 0x10) -
                                    (int)*(short *)(DAT_00856fe4 + 0x10)) + local_14;
                            if (iVar4 < 1) {
                              pbVar13 = DAT_00856fe4 + (DAT_00856fe4[0xd] >> 1 & 0xe) + 0x16;
                            }
                            else {
                              pbVar13 = FUN_006cfe10(DAT_00856fe4,iVar4);
                            }
                            if (local_38 != 0) {
                              param_1 = 0;
                            }
                            if (local_20 == 0) {
                              if (DAT_00857008 == 3) {
                                FUN_00700190(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)local_24 + 0x28) << 1,param_1,
                                             (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                             iVar3 - local_14,local_10,local_c,pbVar13,DAT_0085700c,
                                             local_44);
                              }
                              else {
                                FUN_00700920(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)local_24 + 0x28) << 1,param_1,
                                             (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                             iVar3 - local_14,local_10,local_c,pbVar13,DAT_0085700c,
                                             local_44);
                              }
                            }
                            else if (DAT_00857008 == 3) {
                              FUN_007012f0(local_1c,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)local_24 + 0x28) << 1,param_1,
                                           (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                           iVar3 - local_14,local_10,local_c,pbVar13,DAT_0085700c,
                                           local_44,local_20);
                            }
                            else {
                              FUN_00701ad0(local_1c,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)local_24 + 0x28) << 1,param_1,
                                           (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                           iVar3 - local_14,local_10,local_c,pbVar13,DAT_0085700c,
                                           local_44,local_20);
                            }
                          }
                        }
                        else {
                          if (local_38 != 0) {
                            param_1 = 0;
                          }
                          if ((uVar2 & 4) == 0) {
                            if (local_20 == 0) {
                              if (DAT_00857008 == 3) {
                                if (local_28 == 0) {
                                  FUN_006fbd40(local_1c,DAT_00857028,(ushort *)local_8,
                                               *(int *)((int)local_24 + 0x28) << 1,param_1,
                                               (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                               iVar3 - local_14,local_10,local_c,local_3c,
                                               local_2c[0x2f],local_44);
                                }
                                else {
                                  FUN_006fc3e0(local_1c,DAT_00857028,(ushort *)local_8,
                                               *(int *)((int)local_24 + 0x28) * 2,param_1,
                                               (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                               iVar3 - local_14,local_10,local_c,local_3c,
                                               local_2c[0x2f],local_44,local_30,
                                               *(int *)((int)local_24 + 0x28),local_28);
                                }
                              }
                              else if (local_28 == 0) {
                                FUN_006fcb30(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)local_24 + 0x28) << 1,param_1,
                                             (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                             iVar3 - local_14,local_10,local_c,local_3c,
                                             local_2c[0x2f],local_44);
                              }
                              else {
                                FUN_006fd430(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)local_24 + 0x28) * 2,param_1,
                                             (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                             iVar3 - local_14,local_10,local_c,local_3c,
                                             local_2c[0x2f],local_44,local_30,
                                             *(int *)((int)local_24 + 0x28),local_28);
                              }
                            }
                            else if (DAT_00857008 == 3) {
                              if (local_28 == 0) {
                                FUN_006fdea0(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)local_24 + 0x28) << 1,param_1,
                                             (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                             iVar3 - local_14,local_10,local_c,local_3c,
                                             local_2c[0x2f],local_44,local_20);
                              }
                              else {
                                FUN_006fe570(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)local_24 + 0x28) * 2,param_1,
                                             (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                             iVar3 - local_14,local_10,local_c,local_3c,
                                             local_2c[0x2f],local_44,local_20,local_30,
                                             *(int *)((int)local_24 + 0x28),local_28);
                              }
                            }
                            else if (local_28 == 0) {
                              FUN_006fed50(local_1c,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)local_24 + 0x28) << 1,param_1,
                                           (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                           iVar3 - local_14,local_10,local_c,local_3c,local_2c[0x2f]
                                           ,local_44,local_20);
                            }
                            else {
                              FUN_006ff690(local_1c,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)local_24 + 0x28) * 2,param_1,
                                           (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                           iVar3 - local_14,local_10,local_c,local_3c,local_2c[0x2f]
                                           ,local_44,local_20,local_30,
                                           *(int *)((int)local_24 + 0x28),local_28);
                            }
                          }
                          else if (local_40 != 0) {
                            iVar4 = *(int *)((int)local_24 + 0x28);
                            if (DAT_00857008 == 3) {
                              FUN_00703d40(local_1c,DAT_00857028,local_30,iVar4,(ushort *)local_8,
                                           iVar4 * 2,param_1,(byte *)local_18,uVar6,iVar12,
                                           iVar11 - iVar12,iVar3 - local_14,local_10,local_c,
                                           local_40,local_3c,local_2c[0x2f],local_44);
                            }
                            else {
                              FUN_00704460(local_1c,DAT_00857028,local_30,iVar4,(ushort *)local_8,
                                           iVar4 * 2,param_1,(byte *)local_18,uVar6,iVar12,
                                           iVar11 - iVar12,iVar3 - local_14,local_10,local_c,
                                           local_40,local_3c,local_2c[0x2f],local_44);
                            }
                          }
                        }
                      }
                      else {
                        uVar14 = local_2c[0x2c];
                        if (uVar14 != 0) {
                          if (local_38 != 0) {
                            param_1 = 0;
                          }
                          if (DAT_00857008 == 3) {
                            FUN_00703160(local_1c,DAT_00857028,(ushort *)local_8,
                                         *(int *)((int)local_24 + 0x28) << 1,param_1,
                                         (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                         iVar3 - local_14,local_10,local_c,uVar14);
                          }
                          else {
                            FUN_00703650(local_1c,DAT_00857028,(ushort *)local_8,
                                         *(int *)((int)local_24 + 0x28) << 1,param_1,
                                         (byte *)local_18,uVar6,iVar12,iVar11 - iVar12,
                                         iVar3 - local_14,local_10,local_c,uVar14);
                          }
                        }
                      }
                    }
                    else {
                      if (local_38 != 0) {
                        param_1 = 0;
                      }
                      if (DAT_00857008 == 3) {
                        FUN_00706e30(local_1c,DAT_00857028,(ushort *)local_8,
                                     *(int *)((int)local_24 + 0x28) << 1,param_1,(byte *)local_18,
                                     uVar6,iVar12,local_2c[0x26],local_2c[0x27],iVar11 - iVar12,
                                     iVar3 - local_14,local_10,local_c,DAT_00856fd8,DAT_00856fdc);
                      }
                      else {
                        FUN_00707810(local_1c,DAT_00857028,(ushort *)local_8,
                                     *(int *)((int)local_24 + 0x28) << 1,param_1,(byte *)local_18,
                                     uVar6,iVar12,local_2c[0x26],local_2c[0x27],iVar11 - iVar12,
                                     iVar3 - local_14,local_10,local_c,DAT_00856fd8,DAT_00856fdc);
                      }
                    }
                  }
                }
                else {
LAB_006f3a58:
                  if (iVar11 != 0) goto LAB_006f3a60;
                }
                puVar15 = local_2c;
                this = local_24;
                if (*(int *)(*(int *)((int)local_24 + 0x330) + 0x18 + local_5c) <=
                    (int)(local_58 + 1)) goto LAB_006f4dec;
                puVar9 = (uint *)((local_58 + 3) * 0x10 + *(int *)((int)local_24 + 0x330) + local_5c
                                 );
                local_58 = local_58 + 1;
              } while( true );
            }
          }
        }
      }
      else {
        uVar6 = (uint)*psVar1;
        iVar11 = uVar6 * 0x68;
        pbVar13 = (byte *)(*(int *)((int)this + 0x330) + iVar11);
        local_58 = *(uint *)(pbVar13 + 100);
        if ((((*(int *)(local_58 + 8) == 0) && ((*(byte *)(local_58 + 2) & 1) != 0)) &&
            ((param_4 == 0 || (*(int *)(local_58 + 0x90) != 0)))) &&
           (((*(uint *)(pbVar13 + 4) & 0x8040) == 0x40 && ((*pbVar13 & 3) != 0)))) {
          if (param_2 < 0) {
LAB_006f3635:
            uVar14 = 0xffffffff;
            iVar12 = -1;
LAB_006f363d:
            FUN_006f31d0(this,uVar6,iVar12,uVar14,param_4);
            if (param_4 != 0) {
              puVar9 = *(uint **)(iVar11 + 100 + *(int *)((int)this + 0x330));
              *puVar9 = *puVar9 & 0xffffff7f;
            }
            puVar9 = *(uint **)(iVar11 + 100 + *(int *)((int)this + 0x330));
            *puVar9 = *puVar9 & 0xffffff7d | 1;
          }
          else {
            local_18 = (ushort *)(*(int *)(local_58 + 0x50) - puVar15[0x14]);
            if (param_2 == 0) {
              uVar14 = local_50 - (int)local_18;
              if ((int)local_18 < (int)local_50) {
                if (*(int *)(local_58 + 0x38) + (int)local_18 <= (int)local_50) goto LAB_006f3635;
                iVar12 = 0;
                goto LAB_006f363d;
              }
            }
            else if ((param_2 == 1) &&
                    (uVar14 = local_48 - (int)local_18,
                    (int)local_48 < *(int *)(local_58 + 0x38) + (int)local_18)) {
              if ((int)local_18 < (int)local_48) {
                iVar12 = 1;
              }
              else {
                uVar14 = 0xffffffff;
                iVar12 = -1;
              }
              FUN_006f31d0(this,uVar6,iVar12,uVar14,param_4);
              if (param_4 != 0) {
                puVar9 = *(uint **)(iVar11 + 100 + *(int *)((int)this + 0x330));
                *puVar9 = *puVar9 & 0xffffff7f;
              }
              puVar9 = *(uint **)(iVar11 + 100 + *(int *)((int)this + 0x330));
              *puVar9 = *puVar9 & 0xffffff7d | 1;
            }
          }
        }
      }
    }
    goto LAB_006f4df8;
  }
LAB_006f4e0c:
  if (4 < *(int *)(local_5c + 0x18 + *(int *)((int)this + 0x330))) {
    if (param_4 != 0) {
      *puVar15 = *puVar15 | ((0 < param_2) - 1 & 0xffe00000) + 0x400000;
      return;
    }
    *puVar15 = *puVar15 | ((0 < param_2) - 1 & 0xfff80000) + 0x100000;
  }
  return;
LAB_006f4dec:
  local_30 = _DAT_00857000;
LAB_006f4df8:
  local_4c = local_4c - 1;
  if ((int)local_4c < 0) goto code_r0x006f4e05;
  goto LAB_006f3562;
code_r0x006f4e05:
  if (local_30 != (byte *)0x0) {
    return;
  }
  goto LAB_006f4e0c;
}

