
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006f31d0(void *this,uint param_1,int param_2,uint param_3,uint param_4)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  uint *puVar14;
  byte *pbVar15;
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
  puVar14 = *(uint **)(local_5c + 100 + *(int *)((int)this + 0x330));
  puVar14[0xf] = puVar14[0x19];
  puVar14[0x10] = puVar14[0x1a];
  puVar14[0x11] = puVar14[0x1b];
  puVar14[0x12] = puVar14[0x1c];
  local_2c = puVar14;
  local_24 = this;
  if ((*(int *)this != 0) && (param_4 == 0)) {
    FUN_006b5f80(*(int **)this,*(int *)((int)this + 0x20) + puVar14[0x19],
                 *(int *)((int)this + 0x24) + puVar14[0x1a],puVar14[0x1b],puVar14[0x1c]);
  }
  uVar6 = puVar14[4];
  if (((puVar14[1] & 0x80) == 0) && (((puVar14[1] & 0x20) == 0 || (puVar14[7] != 0xffffffff)))) {
LAB_006f32f9:
    local_38 = 1;
    iVar10 = (int)(puVar14[0x19] - *(int *)((int)this + 0x2c8)) / *(int *)((int)this + 0x2c0);
    iVar3 = (int)((puVar14[0x19] - *(int *)((int)this + 0x2c8)) + -1 + puVar14[0x1b]) /
            *(int *)((int)this + 0x2c0);
    iVar4 = (int)(puVar14[0x1a] - *(int *)((int)this + 0x2cc)) / *(int *)((int)this + 0x2c4);
    iVar5 = (int)((puVar14[0x1c] - *(int *)((int)this + 0x2cc)) + -1 + puVar14[0x1a]) /
            *(int *)((int)this + 0x2c4);
    iVar9 = *(int *)((int)this + 0x2b0) + *(int *)((int)this + 0x2b8) * iVar4 * 2;
    if (iVar4 <= iVar5) {
      local_38 = 1;
      local_44 = (iVar5 - iVar4) + 1;
      do {
        if (iVar10 <= iVar3) {
          local_54 = (ushort *)(iVar9 + iVar10 * 2);
          iVar4 = (iVar3 - iVar10) + 1;
          do {
            if ((int)(uint)*local_54 < (int)uVar6) {
              local_38 = 0;
            }
            local_54 = local_54 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        iVar9 = iVar9 + *(int *)((int)this + 0x2b8) * 2;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      local_44 = 0;
      if (local_38 == 0) {
        if (param_2 < 1) {
          local_38 = (-(uint)(param_4 != 0) & 0x180000) + 0x80000 & *puVar14;
        }
        else {
          local_38 = (-(uint)(param_4 != 0) & 0x300000) + 0x100000 & *puVar14;
        }
      }
    }
  }
  else {
    local_38 = 1;
    if ((-1 < (int)puVar14[9]) && (-1 < (int)puVar14[10])) {
      iVar9 = (int)(*(int *)((int)this + 0x2f0) * puVar14[9]) / 100 + puVar14[0x15];
      iVar10 = (int)(*(int *)((int)this + 0x2f4) * puVar14[10]) / 100 + puVar14[0x16];
      if ((((iVar9 < 0) || (iVar10 < 0)) || (*(int *)((int)this + 0x28) <= iVar9)) ||
         ((*(int *)((int)this + 0x2c) <= iVar10 ||
          ((int)(uint)*(ushort *)
                       (*(int *)((int)this + 0x14) +
                       (*(int *)((int)this + 0x28) * iVar10 + iVar9) * 2) < (int)uVar6))))
      goto LAB_006f32f9;
    }
  }
  local_28 = 0;
  if ((local_38 == 0) && ((puVar14[1] & 0x10000) != 0)) {
    local_28 = puVar14[0x2e];
  }
  uVar12 = puVar14[0xe];
  local_48 = 0;
  param_1 = uVar6;
  if ((int)param_3 < 0) {
    local_50 = (int)uVar12 >> 2;
    if (param_2 == 0) {
      param_1 = uVar6 + puVar14[0xb];
      uVar12 = uVar12 - local_50;
    }
    else if (param_2 == 1) {
      local_48 = uVar12 - local_50;
      uVar12 = puVar14[0xc];
      goto LAB_006f34a4;
    }
  }
  else if (param_2 == 0) {
    local_50 = param_3;
    uVar12 = puVar14[0xb];
LAB_006f34a4:
    param_1 = uVar6 + uVar12;
    uVar12 = local_50;
  }
  else if (param_2 == 1) {
    local_48 = param_3;
    param_1 = uVar6 + puVar14[0xc];
    uVar12 = uVar12 - param_3;
  }
  local_50 = uVar12;
  if (param_4 == 0) {
    if ((*(int *)((int)this + 0x144) == 0) || (*(int *)((int)this + 0x158) == 0)) {
      local_20 = puVar14[0x2d];
    }
    else if (*(int *)((int)this + 0x16c) < (int)uVar6) {
      local_20 = (uVar6 & 0x7f00) + *(int *)((int)this + 0x158);
    }
  }
  else if ((*(int *)((int)this + 0x144) == 0) || (*(int *)((int)this + 0x158) == 0)) {
    local_40 = *(int *)((int)this + 0x27c);
  }
  else {
    iVar10 = *(int *)((int)this + 0x278);
    iVar9 = (int)((uVar6 - *(int *)((int)this + 0x16c)) * iVar10) /
            (*(int *)((int)this + 0x170) - *(int *)((int)this + 0x16c));
    if (iVar9 < 0) {
      local_40 = *(int *)((int)this + 0x27c);
    }
    else {
      if (iVar10 <= iVar9) {
        iVar9 = iVar10 + -1;
      }
      local_40 = *(int *)((int)this + 0x27c) + iVar9 * 0x100;
    }
  }
  local_60 = *(uint *)(local_5c + *(int *)((int)this + 0x330)) & 2;
  local_4c = puVar14[0x25] - 1;
  if (-1 < (int)local_4c) {
LAB_006f3562:
    psVar1 = (short *)(puVar14[0x29] + local_4c * 4);
    uVar2 = psVar1[1];
    if (((uVar2 & 0xc000) == 0xc000) && ((local_60 != 0 || ((uVar2 & 0x80) != 0)))) {
      if ((uVar2 & 1) == 0) {
        iVar9 = *(int *)(puVar14[0x28] + 4 + local_4c * 8);
        if (((iVar9 != 0) && (param_4 == (uVar2 & 4) >> 2)) &&
           (local_54 = (ushort *)(*(int *)((int)this + 0x330) + local_5c),
           *(int *)(local_54 + 0xc) != 0)) {
          local_34 = *(byte **)(iVar9 + *psVar1 * 4);
          local_64 = (int)*(short *)(local_34 + 0x14);
          pbVar11 = (byte *)(int)*(short *)(local_34 + 0x12);
          if (((DAT_00857030 == 0) || ((puVar14[1] & 4) != 0)) ||
             ((*(byte *)(puVar14[0x29] + 2 + local_4c * 4) & 2) != 0)) {
            if (((int)local_48 < (int)*(short *)(local_34 + 0x14) + (int)*(short *)(local_34 + 0x10)
                ) && (iVar9 = local_50 + local_48, *(short *)(local_34 + 0x10) <= iVar9)) {
              local_70 = puVar14[0x13] + (int)*(short *)(local_34 + 0xe);
              local_68 = (int)*(short *)(local_34 + 0x12);
              if (param_2 < 0) {
                local_6c = puVar14[0x14] + (int)*(short *)(local_34 + 0x10);
                local_64 = (int)*(short *)(local_34 + 0x14);
              }
              else {
                uVar12 = (uint)*(short *)(local_34 + 0x10);
                uVar6 = local_48;
                if ((int)local_48 <= (int)uVar12) {
                  uVar6 = uVar12;
                }
                if ((int)((int)*(short *)(local_34 + 0x14) + uVar12) <= iVar9) {
                  iVar9 = (int)*(short *)(local_34 + 0x14) + uVar12;
                }
                local_6c = puVar14[0x14] + uVar6;
                local_64 = iVar9 - uVar6;
              }
              goto LAB_006f397a;
            }
          }
          else {
            uVar12 = (uint)*(short *)(local_34 + 0x10);
            uVar6 = (int)*(short *)(local_34 + 0x14) + uVar12;
            if (((int)local_48 < (int)uVar6) &&
               (uVar8 = local_50 + local_48, (int)uVar12 <= (int)uVar8)) {
              if (param_2 < 0) {
                uVar8 = (int)*(short *)(local_34 + 0x10) + (int)*(short *)(local_34 + 0x14);
                local_58 = uVar12;
                local_c = (int)*(short *)(local_34 + 0x10);
                uVar6 = (int)*(short *)(local_34 + 0x14) + (int)*(short *)(local_34 + 0x10);
              }
              else {
                local_58 = local_48;
                if ((int)local_48 <= (int)uVar12) {
                  local_58 = uVar12;
                }
                if ((int)uVar6 <= (int)uVar8) {
                  uVar8 = uVar6;
                }
                local_44 = uVar8;
                local_c = local_58;
                uVar6 = uVar8;
                if ((int)uVar8 < (int)uVar12) {
                  uVar8 = uVar12;
                  local_44 = uVar12;
                  uVar6 = uVar12;
                }
              }
              local_c = (int)local_c % DAT_00857008;
              local_64 = ((int)uVar6 / DAT_00857008) * 2;
              iVar9 = (int)uVar8 % DAT_00857008;
              local_10 = (int)*(short *)(local_34 + 0xe) % DAT_00857008;
              iVar10 = ((int)*(short *)(local_34 + 0x12) + (int)*(short *)(local_34 + 0xe)) %
                       DAT_00857008;
              uVar6 = local_c;
              uVar12 = local_10;
              if (DAT_00857008 != 5) {
                iVar10 = iVar10 + 1;
                iVar9 = iVar9 + 1;
                uVar6 = local_c + 1;
                uVar12 = local_10 + 1;
              }
              local_64 = local_64 + (iVar9 >> 1);
              local_68 = (((int)*(short *)(local_34 + 0x12) + (int)*(short *)(local_34 + 0xe)) /
                         DAT_00857008) * 2 + (iVar10 >> 1);
              local_70 = ((int)*(short *)(local_34 + 0xe) / DAT_00857008) * 2 + ((int)uVar12 >> 1);
              local_6c = ((int)local_58 / DAT_00857008) * 2 + ((int)uVar6 >> 1);
              local_68 = local_68 - local_70;
              local_64 = local_64 - local_6c;
              local_70 = local_70 + puVar14[0x15];
              local_6c = local_6c + puVar14[0x16];
LAB_006f397a:
              local_58 = *(uint *)(local_54 + 0xc);
              if ((int)local_58 < 5) {
                if ((*(byte *)(puVar14[0x29] + 2 + local_4c * 4) & 0xc0) == 0xc0) {
                  puVar7 = (uint *)(local_54 + 4);
                  local_60 = 1;
                }
                else {
                  local_58 = 0;
                  puVar7 = (uint *)(local_54 + 0x10);
                }
              }
              else {
                puVar7 = puVar14 + 0x19;
              }
              if (local_4c == puVar14[0x23]) {
                DAT_00856fe8 = local_70;
                _DAT_00856ff0 = local_68;
                _DAT_00856ff4 = local_64;
                DAT_00856fe4 = local_34;
                _DAT_00856fec = local_6c;
                DAT_0085700c = pbVar11;
              }
              if (((*(byte *)(puVar14[0x29] + 3 + local_4c * 4) & 0x20) == 0) ||
                 (local_54 = (ushort *)0x1, (int)puVar14[0x23] <= (int)local_4c)) {
                local_54 = (ushort *)0x0;
              }
              _DAT_00857000 = local_30;
              do {
                iVar9 = FUN_006b0460(&DAT_00856fd0,&local_70,(int *)puVar7);
                if (iVar9 == 1) {
                  if (local_54 != (ushort *)0x0) {
                    iVar9 = FUN_006b0460(&DAT_00856fd0,&DAT_00856fd0,&DAT_00856fe8);
                    goto LAB_006f3a58;
                  }
LAB_006f3a60:
                  pbVar15 = (byte *)((*(int *)((int)this + 0x24) + DAT_00856fd4) * DAT_00857028 +
                                     *(int *)((int)this + 0x20) + DAT_00856fd0 + DAT_00857004);
                  iVar9 = *(int *)((int)this + 0x28) * DAT_00856fd4;
                  local_30 = (byte *)(*(int *)((int)this + 0xc) + iVar9 + DAT_00856fd0);
                  local_8 = (uint *)(*(int *)((int)this + 0x14) + (iVar9 + DAT_00856fd0) * 2);
                  if (((DAT_00857030 == 0) || ((puVar14[1] & 4) != 0)) ||
                     ((*(byte *)(puVar14[0x29] + 2 + local_4c * 4) & 2) != 0)) {
                    local_1c = (byte *)(DAT_00856fd0 - local_70);
                    local_18 = (ushort *)
                               ((DAT_00856fd4 - *(short *)(local_34 + 0x10)) - puVar14[0x14]);
                    local_44 = puVar14[0x30];
                    if (local_44 != 0) {
                      local_3c = (DAT_00856fd4 - puVar14[0x14]) * puVar14[0x2f] + local_44;
                    }
                    if ((int)local_18 < 1) {
                      pbVar13 = local_34 + (local_34[0xd] >> 1 & 0xe) + 0x16;
                    }
                    else {
                      pbVar13 = FUN_006cfe10(local_34,(int)local_18);
                    }
                    uVar2 = *(ushort *)(local_2c[0x29] + 2 + local_4c * 4);
                    local_44 = CONCAT22((short)(local_4c >> 0x10),uVar2);
                    if ((uVar2 & 0x100) == 0) {
                      if ((uVar2 & 0x10) == 0) {
                        if ((local_3c == 0) || ((uVar2 & 8) != 0)) {
                          if (local_54 == (ushort *)0x0) {
                            if ((uVar2 & 4) == 0) {
                              if (DAT_00856fd8 == pbVar11) {
                                if (local_38 == 0) {
                                  if (local_20 == 0) {
                                    if (local_28 == 0) {
                                      FUN_006f4e70(pbVar15,DAT_00857028,local_8,
                                                   *(int *)((int)this + 0x28) << 1,param_1,pbVar13,
                                                   DAT_00856fd8,DAT_00856fdc);
                                    }
                                    else {
                                      FUN_006f4fe0(pbVar15,DAT_00857028,local_8,
                                                   *(int *)((int)this + 0x28) * 2,param_1,pbVar13,
                                                   (int)DAT_00856fd8,DAT_00856fdc,local_30,
                                                   *(int *)((int)this + 0x28),local_28);
                                    }
                                  }
                                  else if (local_28 == 0) {
                                    FUN_006f5760(pbVar15,DAT_00857028,local_8,
                                                 *(int *)((int)this + 0x28) << 1,param_1,pbVar13,
                                                 (int)DAT_00856fd8,DAT_00856fdc,local_20);
                                  }
                                  else {
                                    FUN_006f5920(pbVar15,DAT_00857028,local_8,
                                                 *(int *)((int)this + 0x28) * 2,param_1,pbVar13,
                                                 (int)DAT_00856fd8,DAT_00856fdc,local_20,local_30,
                                                 *(int *)((int)this + 0x28),local_28);
                                  }
                                }
                                else if (local_20 == 0) {
                                  FUN_006d25e0(pbVar15,DAT_00857028,pbVar13,(int)DAT_00856fd8,
                                               DAT_00856fdc);
                                }
                                else {
                                  FUN_006f5bd0(pbVar15,DAT_00857028,pbVar13,(int)DAT_00856fd8,
                                               DAT_00856fdc,local_20);
                                }
                              }
                              else if (local_38 == 0) {
                                if (local_20 == 0) {
                                  if (local_28 == 0) {
                                    FUN_006f5240(pbVar15,DAT_00857028,local_8,
                                                 *(int *)((int)this + 0x28) << 1,param_1,pbVar13,
                                                 (int)pbVar11,(int)local_1c,DAT_00856fd8,
                                                 DAT_00856fdc);
                                  }
                                  else {
                                    FUN_006f5430(pbVar15,DAT_00857028,local_8,
                                                 *(int *)((int)this + 0x28) * 2,param_1,pbVar13,
                                                 (int)pbVar11,(int)local_1c,(uint)DAT_00856fd8,
                                                 DAT_00856fdc,local_30,*(int *)((int)this + 0x28),
                                                 local_28);
                                  }
                                }
                                else if (local_28 == 0) {
                                  FUN_006f5d80(pbVar15,DAT_00857028,(ushort *)local_8,
                                               *(int *)((int)this + 0x28) << 1,param_1,pbVar13,
                                               (int)pbVar11,(int)local_1c,(int)DAT_00856fd8,
                                               DAT_00856fdc,local_20);
                                }
                                else {
                                  FUN_006f6020(pbVar15,DAT_00857028,(ushort *)local_8,
                                               *(int *)((int)this + 0x28) * 2,param_1,pbVar13,
                                               (int)pbVar11,(int)local_1c,(int)DAT_00856fd8,
                                               DAT_00856fdc,local_20,local_30,
                                               *(int *)((int)this + 0x28),local_28);
                                }
                              }
                              else if (local_20 == 0) {
                                FUN_006d26d0(pbVar15,DAT_00857028,pbVar13,(int)pbVar11,(int)local_1c
                                             ,(uint)DAT_00856fd8,DAT_00856fdc);
                              }
                              else {
                                FUN_006f8660((undefined4 *)pbVar15,DAT_00857028,pbVar13,(int)pbVar11
                                             ,(int)local_1c,(uint)DAT_00856fd8,DAT_00856fdc,local_20
                                            );
                              }
                            }
                            else if (local_40 != 0) {
                              if (DAT_00856fd8 == pbVar11) {
                                if (local_38 == 0) {
                                  FUN_006f5c60(pbVar15,DAT_00857028,local_30,
                                               *(int *)((int)this + 0x28),(ushort *)local_8,
                                               *(int *)((int)this + 0x28) * 2,param_1,pbVar13,
                                               (int)DAT_00856fd8,DAT_00856fdc,local_40);
                                }
                                else {
                                  FUN_006f85a0(pbVar15,DAT_00857028,local_30,
                                               *(int *)((int)this + 0x28),pbVar13,(int)DAT_00856fd8,
                                               DAT_00856fdc,local_40);
                                }
                              }
                              else if (local_38 == 0) {
                                FUN_006f7d10(pbVar15,DAT_00857028,local_30,
                                             *(int *)((int)this + 0x28),(ushort *)local_8,
                                             *(int *)((int)this + 0x28) * 2,param_1,pbVar13,
                                             (int)pbVar11,(int)local_1c,(int)DAT_00856fd8,
                                             DAT_00856fdc,local_40);
                              }
                              else {
                                FUN_006f88a0(pbVar15,DAT_00857028,local_30,
                                             *(int *)((int)this + 0x28),pbVar13,(int)pbVar11,
                                             (int)local_1c,(int)DAT_00856fd8,DAT_00856fdc,local_40);
                              }
                            }
                          }
                          else {
                            local_44 = DAT_00856fd0 - DAT_00856fe8;
                            iVar9 = (DAT_00856fd4 - *(short *)(DAT_00856fe4 + 0x10)) -
                                    local_2c[0x14];
                            if (iVar9 < 1) {
                              local_30 = DAT_00856fe4 + (DAT_00856fe4[0xd] >> 1 & 0xe) + 0x16;
                            }
                            else {
                              local_30 = FUN_006cfe10(DAT_00856fe4,iVar9);
                            }
                            if (local_38 != 0) {
                              param_1 = 0;
                            }
                            if (DAT_00856fd8 == pbVar11) {
                              local_1c = (byte *)0x0;
                            }
                            if (DAT_00856fd8 == DAT_0085700c) {
                              local_44 = 0;
                            }
                            if (local_20 == 0) {
                              FUN_006f72f0(pbVar15,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)this + 0x28) << 1,param_1,pbVar13,
                                           (int)pbVar11,(int)local_1c,(int)DAT_00856fd8,DAT_00856fdc
                                           ,local_30,(uint)DAT_0085700c,local_44);
                            }
                            else {
                              FUN_006f77e0(pbVar15,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)this + 0x28) << 1,param_1,pbVar13,
                                           (int)pbVar11,(int)local_1c,(int)DAT_00856fd8,DAT_00856fdc
                                           ,local_30,(uint)DAT_0085700c,local_44,local_20);
                            }
                          }
                        }
                        else {
                          if (local_38 != 0) {
                            param_1 = 0;
                          }
                          if (DAT_00856fd8 == pbVar11) {
                            local_1c = (byte *)0x0;
                          }
                          if ((uVar2 & 4) == 0) {
                            if (local_20 == 0) {
                              if (local_28 == 0) {
                                FUN_006f6330(pbVar15,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)this + 0x28) << 1,param_1,pbVar13,
                                             (int)pbVar11,(int)local_1c,(int)DAT_00856fd8,
                                             DAT_00856fdc,local_3c,local_2c[0x2f],
                                             (byte *)(int)*(short *)(local_34 + 0xe));
                              }
                              else {
                                FUN_006f66c0(pbVar15,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)this + 0x28) * 2,param_1,pbVar13,
                                             (int)pbVar11,(int)local_1c,(int)DAT_00856fd8,
                                             DAT_00856fdc,local_3c,local_2c[0x2f],
                                             (byte *)(int)*(short *)(local_34 + 0xe),local_30,
                                             *(int *)((int)this + 0x28),local_28);
                              }
                            }
                            else if (local_28 == 0) {
                              FUN_006f6ae0(pbVar15,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)this + 0x28) << 1,param_1,pbVar13,
                                           (int)pbVar11,(int)local_1c,(int)DAT_00856fd8,DAT_00856fdc
                                           ,local_3c,local_2c[0x2f],
                                           (byte *)(int)*(short *)(local_34 + 0xe),local_20);
                            }
                            else {
                              FUN_006f6ea0(pbVar15,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)this + 0x28) * 2,param_1,pbVar13,
                                           (int)pbVar11,(int)local_1c,(int)DAT_00856fd8,DAT_00856fdc
                                           ,local_3c,local_2c[0x2f],
                                           (byte *)(int)*(short *)(local_34 + 0xe),local_20,local_30
                                           ,*(int *)((int)this + 0x28),local_28);
                            }
                          }
                          else if (local_40 != 0) {
                            FUN_006f81d0(pbVar15,DAT_00857028,local_30,*(int *)((int)this + 0x28),
                                         (ushort *)local_8,*(int *)((int)this + 0x28) * 2,param_1,
                                         pbVar13,(int)pbVar11,(int)local_1c,(int)DAT_00856fd8,
                                         DAT_00856fdc,local_40,local_3c,local_2c[0x2f],
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
                          if (DAT_00856fd8 == pbVar11) {
                            local_1c = (byte *)0x0;
                          }
                          FUN_006f7fc0(pbVar15,DAT_00857028,(ushort *)local_8,
                                       *(int *)((int)this + 0x28) << 1,param_1,pbVar13,(int)pbVar11,
                                       (int)local_1c,(int)DAT_00856fd8,DAT_00856fdc,local_44);
                        }
                      }
                    }
                    else {
                      if (local_38 != 0) {
                        param_1 = 0;
                      }
                      if (DAT_00856fd8 == pbVar11) {
                        local_1c = (byte *)0x0;
                      }
                      FUN_007068d0(pbVar15,DAT_00857028,(ushort *)local_8,
                                   *(int *)((int)this + 0x28) << 1,param_1,pbVar13,(int)pbVar11,
                                   (int)local_1c,local_2c[0x26],local_2c[0x27],(int)DAT_00856fd8,
                                   DAT_00856fdc);
                    }
                  }
                  else {
                    pbVar13 = DAT_00856fd8 + (DAT_00856fd0 - puVar14[0x15]);
                    if (DAT_00857008 == 3) {
                      uVar6 = (uint)pbVar13 & 1;
                    }
                    else {
                      uVar6 = (-(uint)(((uint)pbVar13 & 1) != 0) & 3) - 1;
                    }
                    local_44 = DAT_00856fd0 - puVar14[0x15];
                    iVar9 = ((int)pbVar13 / 2) * DAT_00857008 +
                            (uVar6 - (int)*(short *)(local_34 + 0xe));
                    if (DAT_00857008 == 3) {
                      local_10 = (local_44 & 1) << 1;
                    }
                    else {
                      local_10 = (local_44 & 1) << 1 | 1;
                    }
                    iVar10 = ((int)local_44 / 2) * DAT_00857008 +
                             (local_10 - (int)*(short *)(local_34 + 0xe));
                    uVar6 = (DAT_00856fdc - local_2c[0x16]) + DAT_00856fd4;
                    if (DAT_00857008 == 3) {
                      uVar12 = uVar6 & 1;
                    }
                    else {
                      uVar12 = (-(uint)((uVar6 & 1) != 0) & 3) - 1;
                    }
                    iVar3 = ((int)uVar6 / 2) * DAT_00857008 +
                            (uVar12 - (int)*(short *)(local_34 + 0x10));
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
                    local_1c = pbVar15;
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
                                                   (byte *)local_18,(int)pbVar11,iVar10,
                                                   iVar9 - iVar10,iVar3 - local_14,local_10,local_c)
                                      ;
                                    }
                                    else {
                                      FUN_006f8f00(local_1c,DAT_00857028,(ushort *)local_8,
                                                   *(int *)((int)local_24 + 0x28) * 2,param_1,
                                                   (byte *)local_18,(int)pbVar11,iVar10,
                                                   iVar9 - iVar10,iVar3 - local_14,local_10,local_c,
                                                   local_30,*(int *)((int)local_24 + 0x28),local_28)
                                      ;
                                    }
                                  }
                                  else if (local_28 == 0) {
                                    FUN_006f94d0(local_1c,DAT_00857028,(ushort *)local_8,
                                                 *(int *)((int)local_24 + 0x28) << 1,param_1,
                                                 (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10
                                                 ,iVar3 - local_14,local_10,local_c);
                                  }
                                  else {
                                    FUN_006f9ad0(local_1c,DAT_00857028,(ushort *)local_8,
                                                 *(int *)((int)local_24 + 0x28) * 2,param_1,local_18
                                                 ,(int)pbVar11,iVar10,iVar9 - iVar10,
                                                 iVar3 - local_14,local_10,local_c,local_30,
                                                 *(int *)((int)local_24 + 0x28),local_28);
                                  }
                                }
                                else if (DAT_00857008 == 3) {
                                  if (local_28 == 0) {
                                    FUN_006fa280(local_1c,DAT_00857028,(ushort *)local_8,
                                                 *(int *)((int)local_24 + 0x28) << 1,param_1,
                                                 (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10
                                                 ,iVar3 - local_14,local_10,local_c,local_20);
                                  }
                                  else {
                                    FUN_006fa7a0(local_1c,DAT_00857028,(ushort *)local_8,
                                                 *(int *)((int)local_24 + 0x28) * 2,param_1,
                                                 (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10
                                                 ,iVar3 - local_14,local_10,local_c,local_20,
                                                 local_30,*(int *)((int)local_24 + 0x28),local_28);
                                  }
                                }
                                else if (local_28 == 0) {
                                  FUN_006fadc0(local_1c,DAT_00857028,(ushort *)local_8,
                                               *(int *)((int)local_24 + 0x28) << 1,param_1,local_18,
                                               (int)pbVar11,iVar10,iVar9 - iVar10,iVar3 - local_14,
                                               local_10,local_c,local_20);
                                }
                                else {
                                  FUN_006fb4a0(local_1c,DAT_00857028,(ushort *)local_8,
                                               *(int *)((int)local_24 + 0x28) * 2,param_1,
                                               (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10,
                                               iVar3 - local_14,local_10,local_c,local_20,local_30,
                                               *(int *)((int)local_24 + 0x28),local_28);
                                }
                              }
                              else if (local_20 == 0) {
                                if (DAT_00857008 == 3) {
                                  FUN_00704e70(local_1c,DAT_00857028,(byte *)local_18,(int)pbVar11,
                                               iVar10,iVar9 - iVar10,iVar3 - local_14,local_10,
                                               local_c);
                                }
                                else {
                                  FUN_00705180(local_1c,DAT_00857028,(byte *)local_18,(int)pbVar11,
                                               iVar10,iVar9 - iVar10,iVar3 - local_14,local_10,
                                               local_c);
                                }
                              }
                              else if (DAT_00857008 == 3) {
                                FUN_007055d0(local_1c,DAT_00857028,(byte *)local_18,(int)pbVar11,
                                             iVar10,iVar9 - iVar10,iVar3 - local_14,local_10,local_c
                                             ,local_20);
                              }
                              else {
                                FUN_007059a0(local_1c,DAT_00857028,(byte *)local_18,(int)pbVar11,
                                             iVar10,iVar9 - iVar10,iVar3 - local_14,local_10,local_c
                                             ,local_20);
                              }
                            }
                            else if (local_40 != 0) {
                              if (local_38 == 0) {
                                iVar4 = *(int *)((int)local_24 + 0x28);
                                if (DAT_00857008 == 3) {
                                  FUN_00702510(local_1c,DAT_00857028,local_30,iVar4,
                                               (ushort *)local_8,iVar4 * 2,param_1,(byte *)local_18,
                                               (int)pbVar11,iVar10,iVar9 - iVar10,iVar3 - local_14,
                                               local_10,local_c,local_40);
                                }
                                else {
                                  FUN_00702a30(local_1c,DAT_00857028,local_30,iVar4,
                                               (ushort *)local_8,iVar4 * 2,param_1,(byte *)local_18,
                                               (int)pbVar11,iVar10,iVar9 - iVar10,iVar3 - local_14,
                                               local_10,local_c,local_40);
                                }
                              }
                              else if (DAT_00857008 == 3) {
                                FUN_00705ed0(local_1c,DAT_00857028,local_30,
                                             *(int *)((int)local_24 + 0x28),(byte *)local_18,
                                             (int)pbVar11,iVar10,iVar9 - iVar10,iVar3 - local_14,
                                             local_10,local_c,local_40);
                              }
                              else {
                                FUN_00706340(local_1c,DAT_00857028,local_30,
                                             *(int *)((int)local_24 + 0x28),(byte *)local_18,
                                             (int)pbVar11,iVar10,iVar9 - iVar10,iVar3 - local_14,
                                             local_10,local_c,local_40);
                              }
                            }
                          }
                          else {
                            local_44 = ((int)*(short *)(local_34 + 0xe) -
                                       (int)*(short *)(DAT_00856fe4 + 0xe)) + iVar10;
                            iVar4 = ((int)*(short *)(local_34 + 0x10) -
                                    (int)*(short *)(DAT_00856fe4 + 0x10)) + local_14;
                            if (iVar4 < 1) {
                              pbVar15 = DAT_00856fe4 + (DAT_00856fe4[0xd] >> 1 & 0xe) + 0x16;
                            }
                            else {
                              pbVar15 = FUN_006cfe10(DAT_00856fe4,iVar4);
                            }
                            if (local_38 != 0) {
                              param_1 = 0;
                            }
                            if (local_20 == 0) {
                              if (DAT_00857008 == 3) {
                                FUN_00700190(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)local_24 + 0x28) << 1,param_1,
                                             (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10,
                                             iVar3 - local_14,local_10,local_c,pbVar15,
                                             (int)DAT_0085700c,local_44);
                              }
                              else {
                                FUN_00700920(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)local_24 + 0x28) << 1,param_1,
                                             (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10,
                                             iVar3 - local_14,local_10,local_c,pbVar15,
                                             (int)DAT_0085700c,local_44);
                              }
                            }
                            else if (DAT_00857008 == 3) {
                              FUN_007012f0(local_1c,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)local_24 + 0x28) << 1,param_1,
                                           (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10,
                                           iVar3 - local_14,local_10,local_c,pbVar15,
                                           (int)DAT_0085700c,local_44,local_20);
                            }
                            else {
                              FUN_00701ad0(local_1c,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)local_24 + 0x28) << 1,param_1,
                                           (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10,
                                           iVar3 - local_14,local_10,local_c,pbVar15,
                                           (int)DAT_0085700c,local_44,local_20);
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
                                               (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10,
                                               iVar3 - local_14,local_10,local_c,local_3c,
                                               local_2c[0x2f],local_44);
                                }
                                else {
                                  FUN_006fc3e0(local_1c,DAT_00857028,(ushort *)local_8,
                                               *(int *)((int)local_24 + 0x28) * 2,param_1,
                                               (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10,
                                               iVar3 - local_14,local_10,local_c,local_3c,
                                               local_2c[0x2f],local_44,local_30,
                                               *(int *)((int)local_24 + 0x28),local_28);
                                }
                              }
                              else if (local_28 == 0) {
                                FUN_006fcb30(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)local_24 + 0x28) << 1,param_1,
                                             (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10,
                                             iVar3 - local_14,local_10,local_c,local_3c,
                                             local_2c[0x2f],local_44);
                              }
                              else {
                                FUN_006fd430(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)local_24 + 0x28) * 2,param_1,
                                             (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10,
                                             iVar3 - local_14,local_10,local_c,local_3c,
                                             local_2c[0x2f],local_44,local_30,
                                             *(int *)((int)local_24 + 0x28),local_28);
                              }
                            }
                            else if (DAT_00857008 == 3) {
                              if (local_28 == 0) {
                                FUN_006fdea0(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)local_24 + 0x28) << 1,param_1,
                                             (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10,
                                             iVar3 - local_14,local_10,local_c,local_3c,
                                             local_2c[0x2f],local_44,local_20);
                              }
                              else {
                                FUN_006fe570(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)((int)local_24 + 0x28) * 2,param_1,
                                             (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10,
                                             iVar3 - local_14,local_10,local_c,local_3c,
                                             local_2c[0x2f],local_44,local_20,local_30,
                                             *(int *)((int)local_24 + 0x28),local_28);
                              }
                            }
                            else if (local_28 == 0) {
                              FUN_006fed50(local_1c,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)local_24 + 0x28) << 1,param_1,
                                           (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10,
                                           iVar3 - local_14,local_10,local_c,local_3c,local_2c[0x2f]
                                           ,local_44,local_20);
                            }
                            else {
                              FUN_006ff690(local_1c,DAT_00857028,(ushort *)local_8,
                                           *(int *)((int)local_24 + 0x28) * 2,param_1,
                                           (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10,
                                           iVar3 - local_14,local_10,local_c,local_3c,local_2c[0x2f]
                                           ,local_44,local_20,local_30,
                                           *(int *)((int)local_24 + 0x28),local_28);
                            }
                          }
                          else if (local_40 != 0) {
                            iVar4 = *(int *)((int)local_24 + 0x28);
                            if (DAT_00857008 == 3) {
                              FUN_00703d40(local_1c,DAT_00857028,local_30,iVar4,(ushort *)local_8,
                                           iVar4 * 2,param_1,(byte *)local_18,(int)pbVar11,iVar10,
                                           iVar9 - iVar10,iVar3 - local_14,local_10,local_c,local_40
                                           ,local_3c,local_2c[0x2f],local_44);
                            }
                            else {
                              FUN_00704460(local_1c,DAT_00857028,local_30,iVar4,(ushort *)local_8,
                                           iVar4 * 2,param_1,(byte *)local_18,(int)pbVar11,iVar10,
                                           iVar9 - iVar10,iVar3 - local_14,local_10,local_c,local_40
                                           ,local_3c,local_2c[0x2f],local_44);
                            }
                          }
                        }
                      }
                      else {
                        uVar6 = local_2c[0x2c];
                        if (uVar6 != 0) {
                          if (local_38 != 0) {
                            param_1 = 0;
                          }
                          if (DAT_00857008 == 3) {
                            FUN_00703160(local_1c,DAT_00857028,(ushort *)local_8,
                                         *(int *)((int)local_24 + 0x28) << 1,param_1,
                                         (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10,
                                         iVar3 - local_14,local_10,local_c,uVar6);
                          }
                          else {
                            FUN_00703650(local_1c,DAT_00857028,(ushort *)local_8,
                                         *(int *)((int)local_24 + 0x28) << 1,param_1,
                                         (byte *)local_18,(int)pbVar11,iVar10,iVar9 - iVar10,
                                         iVar3 - local_14,local_10,local_c,uVar6);
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
                                     (int)pbVar11,iVar10,local_2c[0x26],local_2c[0x27],
                                     iVar9 - iVar10,iVar3 - local_14,local_10,local_c,
                                     (int)DAT_00856fd8,DAT_00856fdc);
                      }
                      else {
                        FUN_00707810(local_1c,DAT_00857028,(ushort *)local_8,
                                     *(int *)((int)local_24 + 0x28) << 1,param_1,(byte *)local_18,
                                     (int)pbVar11,iVar10,local_2c[0x26],local_2c[0x27],
                                     iVar9 - iVar10,iVar3 - local_14,local_10,local_c,
                                     (int)DAT_00856fd8,DAT_00856fdc);
                      }
                    }
                  }
                }
                else {
LAB_006f3a58:
                  if (iVar9 != 0) goto LAB_006f3a60;
                }
                puVar14 = local_2c;
                this = local_24;
                if (*(int *)(*(int *)((int)local_24 + 0x330) + 0x18 + local_5c) <=
                    (int)(local_58 + 1)) goto LAB_006f4dec;
                puVar7 = (uint *)((local_58 + 3) * 0x10 + *(int *)((int)local_24 + 0x330) + local_5c
                                 );
                local_58 = local_58 + 1;
              } while( true );
            }
          }
        }
      }
      else {
        uVar6 = (uint)*psVar1;
        iVar9 = uVar6 * 0x68;
        pbVar11 = (byte *)(*(int *)((int)this + 0x330) + iVar9);
        local_58 = *(uint *)(pbVar11 + 100);
        if ((((*(int *)(local_58 + 8) == 0) && ((*(byte *)(local_58 + 2) & 1) != 0)) &&
            ((param_4 == 0 || (*(int *)(local_58 + 0x90) != 0)))) &&
           (((*(uint *)(pbVar11 + 4) & 0x8040) == 0x40 && ((*pbVar11 & 3) != 0)))) {
          if (param_2 < 0) {
LAB_006f3635:
            uVar12 = 0xffffffff;
            iVar10 = -1;
LAB_006f363d:
            FUN_006f31d0(this,uVar6,iVar10,uVar12,param_4);
            if (param_4 != 0) {
              puVar7 = *(uint **)(iVar9 + 100 + *(int *)((int)this + 0x330));
              *puVar7 = *puVar7 & 0xffffff7f;
            }
            puVar7 = *(uint **)(iVar9 + 100 + *(int *)((int)this + 0x330));
            *puVar7 = *puVar7 & 0xffffff7d | 1;
          }
          else {
            local_18 = (ushort *)(*(int *)(local_58 + 0x50) - puVar14[0x14]);
            if (param_2 == 0) {
              uVar12 = local_50 - (int)local_18;
              if ((int)local_18 < (int)local_50) {
                if (*(int *)(local_58 + 0x38) + (int)local_18 <= (int)local_50) goto LAB_006f3635;
                iVar10 = 0;
                goto LAB_006f363d;
              }
            }
            else if ((param_2 == 1) &&
                    (uVar12 = local_48 - (int)local_18,
                    (int)local_48 < *(int *)(local_58 + 0x38) + (int)local_18)) {
              if ((int)local_18 < (int)local_48) {
                iVar10 = 1;
              }
              else {
                uVar12 = 0xffffffff;
                iVar10 = -1;
              }
              FUN_006f31d0(this,uVar6,iVar10,uVar12,param_4);
              if (param_4 != 0) {
                puVar7 = *(uint **)(iVar9 + 100 + *(int *)((int)this + 0x330));
                *puVar7 = *puVar7 & 0xffffff7f;
              }
              puVar7 = *(uint **)(iVar9 + 100 + *(int *)((int)this + 0x330));
              *puVar7 = *puVar7 & 0xffffff7d | 1;
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
      *puVar14 = *puVar14 | ((0 < param_2) - 1 & 0xffe00000) + 0x400000;
      return;
    }
    *puVar14 = *puVar14 | ((0 < param_2) - 1 & 0xfff80000) + 0x100000;
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

