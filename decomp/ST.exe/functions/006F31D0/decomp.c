
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_006F31D0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=72; incoming_edx_uses=0; calls=7;
   ecx_pointer_setup=7; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=1; adopt_untyped_existing_thiscall */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006F31D0::FUN_006f31d0
          (AnonReceiver_006F31D0 *this,uint param_1,int param_2,uint param_3,uint param_4)

{
  short *psVar1;
  ushort uVar2;
  AnonShape_006F31D0_0BFF23DC *pAVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  AnonShape_006F31D0_0BFF23DC *pAVar8;
  AnonShape_006F31D0_0BFF23DC *pAVar9;
  undefined1 *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  AnonShape_006F31D0_0BFF23DC *pAVar16;
  byte *pbVar17;
  uint *puVar18;
  byte *pbVar19;
  int local_70;
  undefined1 *local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  AnonShape_006F31D0_0BFF23DC *local_58;
  ushort *local_54;
  uint local_50;
  uint local_4c;
  AnonShape_006F31D0_0BFF23DC *local_48;
  AnonShape_006F31D0_0BFF23DC *local_44;
  int local_40;
  int local_3c;
  uint local_38;
  byte *local_34;
  byte *local_30;
  uint *local_2c;
  uint local_28;
  AnonReceiver_006F31D0 *local_24;
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
  puVar18 = *(uint **)(local_5c + 100 + *(int *)&this->field_0x330);
  puVar18[0xf] = puVar18[0x19];
  puVar18[0x10] = puVar18[0x1a];
  puVar18[0x11] = puVar18[0x1b];
  puVar18[0x12] = puVar18[0x1c];
  local_2c = puVar18;
  local_24 = this;
  if ((*(int *)this != 0) && (param_4 == 0)) {
    FUN_006b5f80(*(int **)this,*(int *)&this->field_0x20 + puVar18[0x19],
                 *(int *)&this->field_0x24 + puVar18[0x1a],puVar18[0x1b],puVar18[0x1c]);
  }
  uVar7 = puVar18[4];
  if (((puVar18[1] & 0x80) == 0) && (((puVar18[1] & 0x20) == 0 || (puVar18[7] != 0xffffffff)))) {
LAB_006f32f9:
    local_38 = 1;
    iVar13 = (int)(puVar18[0x19] - *(int *)&this->field_0x2c8) / *(int *)&this->field_0x2c0;
    iVar4 = (int)((puVar18[0x19] - *(int *)&this->field_0x2c8) + -1 + puVar18[0x1b]) /
            *(int *)&this->field_0x2c0;
    iVar5 = (int)(puVar18[0x1a] - *(int *)&this->field_0x2cc) / *(int *)&this->field_0x2c4;
    iVar6 = (int)((puVar18[0x1c] - *(int *)&this->field_0x2cc) + -1 + puVar18[0x1a]) /
            *(int *)&this->field_0x2c4;
    iVar12 = *(int *)&this->field_0x2b0 + *(int *)&this->field_0x2b8 * iVar5 * 2;
    if (iVar5 <= iVar6) {
      local_38 = 1;
      local_44 = (AnonShape_006F31D0_0BFF23DC *)((iVar6 - iVar5) + 1);
      do {
        if (iVar13 <= iVar4) {
          local_54 = (ushort *)(iVar12 + iVar13 * 2);
          iVar5 = (iVar4 - iVar13) + 1;
          do {
            if ((int)(uint)*local_54 < (int)uVar7) {
              local_38 = 0;
            }
            local_54 = local_54 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar12 = iVar12 + *(int *)&this->field_0x2b8 * 2;
        local_44 = (AnonShape_006F31D0_0BFF23DC *)((int)local_44 + -1);
      } while (local_44 != (AnonShape_006F31D0_0BFF23DC *)0x0);
      local_44 = (AnonShape_006F31D0_0BFF23DC *)0x0;
      if (local_38 == 0) {
        if (param_2 < 1) {
          local_38 = (-(uint)(param_4 != 0) & 0x180000) + 0x80000 & *puVar18;
        }
        else {
          local_38 = (-(uint)(param_4 != 0) & 0x300000) + 0x100000 & *puVar18;
        }
      }
    }
  }
  else {
    local_38 = 1;
    if ((-1 < (int)puVar18[9]) && (-1 < (int)puVar18[10])) {
      iVar12 = (int)(*(int *)&this->field_0x2f0 * puVar18[9]) / 100 + puVar18[0x15];
      iVar13 = (int)(*(int *)&this->field_0x2f4 * puVar18[10]) / 100 + puVar18[0x16];
      if ((((iVar12 < 0) || (iVar13 < 0)) || (*(int *)&this->field_0x28 <= iVar12)) ||
         ((*(int *)&this->field_0x2c <= iVar13 ||
          ((int)(uint)*(ushort *)
                       (*(int *)&this->field_0x14 +
                       (*(int *)&this->field_0x28 * iVar13 + iVar12) * 2) < (int)uVar7))))
      goto LAB_006f32f9;
    }
  }
  local_28 = 0;
  if ((local_38 == 0) && ((puVar18[1] & 0x10000) != 0)) {
    local_28 = puVar18[0x2e];
  }
  uVar15 = puVar18[0xe];
  local_48 = (AnonShape_006F31D0_0BFF23DC *)0x0;
  param_1 = uVar7;
  if ((int)param_3 < 0) {
    local_50 = (int)uVar15 >> 2;
    if (param_2 == 0) {
      param_1 = uVar7 + puVar18[0xb];
      uVar15 = uVar15 - local_50;
    }
    else if (param_2 == 1) {
      local_48 = (AnonShape_006F31D0_0BFF23DC *)(uVar15 - local_50);
      uVar15 = puVar18[0xc];
      goto LAB_006f34a4;
    }
  }
  else if (param_2 == 0) {
    local_50 = param_3;
    uVar15 = puVar18[0xb];
LAB_006f34a4:
    param_1 = uVar7 + uVar15;
    uVar15 = local_50;
  }
  else if (param_2 == 1) {
    local_48 = (AnonShape_006F31D0_0BFF23DC *)param_3;
    param_1 = uVar7 + puVar18[0xc];
    uVar15 = uVar15 - param_3;
  }
  local_50 = uVar15;
  if (param_4 == 0) {
    if ((*(int *)&this->field_0x144 == 0) || (*(int *)&this->field_0x158 == 0)) {
      local_20 = puVar18[0x2d];
    }
    else if (*(int *)&this->field_0x16c < (int)uVar7) {
      local_20 = (uVar7 & 0x7f00) + *(int *)&this->field_0x158;
    }
  }
  else if ((*(int *)&this->field_0x144 == 0) || (*(int *)&this->field_0x158 == 0)) {
    local_40 = *(int *)&this->field_0x27c;
  }
  else {
    iVar13 = *(int *)&this->field_0x278;
    iVar12 = (int)((uVar7 - *(int *)&this->field_0x16c) * iVar13) /
             (*(int *)&this->field_0x170 - *(int *)&this->field_0x16c);
    if (iVar12 < 0) {
      local_40 = *(int *)&this->field_0x27c;
    }
    else {
      if (iVar13 <= iVar12) {
        iVar12 = iVar13 + -1;
      }
      local_40 = *(int *)&this->field_0x27c + iVar12 * 0x100;
    }
  }
  local_60 = *(uint *)(local_5c + *(int *)&this->field_0x330) & 2;
  local_4c = puVar18[0x25] - 1;
  if (-1 < (int)local_4c) {
LAB_006f3562:
    psVar1 = (short *)(puVar18[0x29] + local_4c * 4);
    uVar2 = psVar1[1];
    if (((uVar2 & 0xc000) == 0xc000) && ((local_60 != 0 || ((uVar2 & 0x80) != 0)))) {
      if ((uVar2 & 1) == 0) {
        iVar12 = *(int *)(puVar18[0x28] + 4 + local_4c * 8);
        if (((iVar12 != 0) && (param_4 == (uVar2 & 4) >> 2)) &&
           (local_54 = (ushort *)(*(int *)&this->field_0x330 + local_5c),
           *(int *)(local_54 + 0xc) != 0)) {
          local_34 = *(byte **)(iVar12 + *psVar1 * 4);
          local_64 = (int)*(short *)(local_34 + 0x14);
          pbVar14 = (byte *)(int)*(short *)(local_34 + 0x12);
          if (((DAT_00857030 == 0) || ((puVar18[1] & 4) != 0)) ||
             ((*(byte *)(puVar18[0x29] + 2 + local_4c * 4) & 2) != 0)) {
            if (((int)local_48 < (int)*(short *)(local_34 + 0x14) + (int)*(short *)(local_34 + 0x10)
                ) && (puVar10 = &local_48->field_0x0 + local_50,
                     (int)*(short *)(local_34 + 0x10) <= (int)puVar10)) {
              local_70 = puVar18[0x13] + (int)*(short *)(local_34 + 0xe);
              local_68 = (int)*(short *)(local_34 + 0x12);
              if (param_2 < 0) {
                local_6c = (undefined1 *)(puVar18[0x14] + (int)*(short *)(local_34 + 0x10));
                local_64 = (int)*(short *)(local_34 + 0x14);
              }
              else {
                pAVar8 = (AnonShape_006F31D0_0BFF23DC *)(int)*(short *)(local_34 + 0x10);
                pAVar16 = local_48;
                if ((int)local_48 <= (int)pAVar8) {
                  pAVar16 = pAVar8;
                }
                if ((int)(&pAVar8->field_0x0 + *(short *)(local_34 + 0x14)) <= (int)puVar10) {
                  puVar10 = &pAVar8->field_0x0 + *(short *)(local_34 + 0x14);
                }
                local_6c = &pAVar16->field_0x0 + puVar18[0x14];
                local_64 = (int)puVar10 - (int)pAVar16;
              }
              goto LAB_006f397a;
            }
          }
          else {
            pAVar8 = (AnonShape_006F31D0_0BFF23DC *)(int)*(short *)(local_34 + 0x10);
            pAVar16 = (AnonShape_006F31D0_0BFF23DC *)
                      (&pAVar8->field_0x0 + *(short *)(local_34 + 0x14));
            if (((int)local_48 < (int)pAVar16) &&
               (pAVar9 = (AnonShape_006F31D0_0BFF23DC *)(&local_48->field_0x0 + local_50),
               (int)pAVar8 <= (int)pAVar9)) {
              if (param_2 < 0) {
                pAVar9 = (AnonShape_006F31D0_0BFF23DC *)
                         ((int)*(short *)(local_34 + 0x10) + (int)*(short *)(local_34 + 0x14));
                local_58 = pAVar8;
                pAVar16 = (AnonShape_006F31D0_0BFF23DC *)(int)*(short *)(local_34 + 0x10);
                pAVar3 = (AnonShape_006F31D0_0BFF23DC *)
                         ((int)*(short *)(local_34 + 0x14) + (int)*(short *)(local_34 + 0x10));
              }
              else {
                local_58 = local_48;
                if ((int)local_48 <= (int)pAVar8) {
                  local_58 = pAVar8;
                }
                if ((int)pAVar16 <= (int)pAVar9) {
                  pAVar9 = pAVar16;
                }
                local_44 = pAVar9;
                pAVar16 = local_58;
                pAVar3 = pAVar9;
                if ((int)pAVar9 < (int)pAVar8) {
                  pAVar9 = pAVar8;
                  local_44 = pAVar8;
                  pAVar3 = pAVar8;
                }
              }
              local_c = (int)pAVar16 % DAT_00857008;
              local_64 = ((int)pAVar3 / DAT_00857008) * 2;
              iVar12 = (int)pAVar9 % DAT_00857008;
              local_10 = (int)*(short *)(local_34 + 0xe) % DAT_00857008;
              iVar13 = ((int)*(short *)(local_34 + 0x12) + (int)*(short *)(local_34 + 0xe)) %
                       DAT_00857008;
              uVar7 = local_c;
              uVar15 = local_10;
              if (DAT_00857008 != 5) {
                iVar13 = iVar13 + 1;
                iVar12 = iVar12 + 1;
                uVar7 = local_c + 1;
                uVar15 = local_10 + 1;
              }
              local_64 = local_64 + (iVar12 >> 1);
              local_68 = (((int)*(short *)(local_34 + 0x12) + (int)*(short *)(local_34 + 0xe)) /
                         DAT_00857008) * 2 + (iVar13 >> 1);
              local_70 = ((int)*(short *)(local_34 + 0xe) / DAT_00857008) * 2 + ((int)uVar15 >> 1);
              iVar12 = ((int)local_58 / DAT_00857008) * 2 + ((int)uVar7 >> 1);
              local_68 = local_68 - local_70;
              local_64 = local_64 - iVar12;
              local_70 = local_70 + puVar18[0x15];
              local_6c = (undefined1 *)(iVar12 + puVar18[0x16]);
LAB_006f397a:
              local_58 = *(AnonShape_006F31D0_0BFF23DC **)(local_54 + 0xc);
              if ((int)local_58 < 5) {
                if ((*(byte *)(puVar18[0x29] + 2 + local_4c * 4) & 0xc0) == 0xc0) {
                  puVar11 = (uint *)(local_54 + 4);
                  local_60 = 1;
                }
                else {
                  local_58 = (AnonShape_006F31D0_0BFF23DC *)0x0;
                  puVar11 = (uint *)(local_54 + 0x10);
                }
              }
              else {
                puVar11 = puVar18 + 0x19;
              }
              if (local_4c == puVar18[0x23]) {
                DAT_00856fe8 = local_70;
                _DAT_00856ff0 = local_68;
                _DAT_00856ff4 = local_64;
                DAT_00856fe4 = local_34;
                _DAT_00856fec = local_6c;
                DAT_0085700c = pbVar14;
              }
              if (((*(byte *)(puVar18[0x29] + 3 + local_4c * 4) & 0x20) == 0) ||
                 (local_54 = (ushort *)0x1, (int)puVar18[0x23] <= (int)local_4c)) {
                local_54 = (ushort *)0x0;
              }
              _DAT_00857000 = local_30;
              do {
                iVar12 = FUN_006b0460(&DAT_00856fd0,&local_70,(int *)puVar11);
                if (iVar12 == 1) {
                  if (local_54 != (ushort *)0x0) {
                    iVar12 = FUN_006b0460(&DAT_00856fd0,&DAT_00856fd0,&DAT_00856fe8);
                    goto LAB_006f3a58;
                  }
LAB_006f3a60:
                  pbVar19 = (byte *)((*(int *)&this->field_0x24 + DAT_00856fd4) * DAT_00857028 +
                                     *(int *)&this->field_0x20 + DAT_00856fd0 + DAT_00857004);
                  iVar12 = *(int *)&this->field_0x28 * DAT_00856fd4;
                  local_30 = (byte *)(*(int *)&this->field_0xc + iVar12 + DAT_00856fd0);
                  local_8 = (uint *)(*(int *)&this->field_0x14 + (iVar12 + DAT_00856fd0) * 2);
                  if (((DAT_00857030 == 0) || ((puVar18[1] & 4) != 0)) ||
                     ((*(byte *)(puVar18[0x29] + 2 + local_4c * 4) & 2) != 0)) {
                    local_1c = (byte *)(DAT_00856fd0 - local_70);
                    local_18 = (ushort *)
                               ((DAT_00856fd4 - *(short *)(local_34 + 0x10)) - puVar18[0x14]);
                    local_44 = (AnonShape_006F31D0_0BFF23DC *)puVar18[0x30];
                    if (local_44 != (AnonShape_006F31D0_0BFF23DC *)0x0) {
                      local_3c = (DAT_00856fd4 - puVar18[0x14]) * puVar18[0x2f] + (int)local_44;
                    }
                    if ((int)local_18 < 1) {
                      pbVar17 = local_34 + (local_34[0xd] >> 1 & 0xe) + 0x16;
                    }
                    else {
                      pbVar17 = FUN_006cfe10(local_34,(int)local_18);
                    }
                    uVar2 = *(ushort *)(local_2c[0x29] + 2 + local_4c * 4);
                    local_44 = (AnonShape_006F31D0_0BFF23DC *)
                               CONCAT22((short)(local_4c >> 0x10),uVar2);
                    if ((uVar2 & 0x100) == 0) {
                      if ((uVar2 & 0x10) == 0) {
                        if ((local_3c == 0) || ((uVar2 & 8) != 0)) {
                          if (local_54 == (ushort *)0x0) {
                            if ((uVar2 & 4) == 0) {
                              if (DAT_00856fd8 == pbVar14) {
                                if (local_38 == 0) {
                                  if (local_20 == 0) {
                                    if (local_28 == 0) {
                                      FUN_006f4e70(pbVar19,DAT_00857028,local_8,
                                                   *(int *)&this->field_0x28 << 1,param_1,pbVar17,
                                                   DAT_00856fd8,DAT_00856fdc);
                                    }
                                    else {
                                      FUN_006f4fe0(pbVar19,DAT_00857028,local_8,
                                                   *(int *)&this->field_0x28 * 2,param_1,pbVar17,
                                                   (int)DAT_00856fd8,DAT_00856fdc,local_30,
                                                   *(int *)&this->field_0x28,local_28);
                                    }
                                  }
                                  else if (local_28 == 0) {
                                    FUN_006f5760(pbVar19,DAT_00857028,local_8,
                                                 *(int *)&this->field_0x28 << 1,param_1,pbVar17,
                                                 (int)DAT_00856fd8,DAT_00856fdc,local_20);
                                  }
                                  else {
                                    FUN_006f5920(pbVar19,DAT_00857028,local_8,
                                                 *(int *)&this->field_0x28 * 2,param_1,pbVar17,
                                                 (int)DAT_00856fd8,DAT_00856fdc,local_20,local_30,
                                                 *(int *)&this->field_0x28,local_28);
                                  }
                                }
                                else if (local_20 == 0) {
                                  FUN_006d25e0(pbVar19,DAT_00857028,pbVar17,(int)DAT_00856fd8,
                                               DAT_00856fdc);
                                }
                                else {
                                  FUN_006f5bd0(pbVar19,DAT_00857028,pbVar17,(int)DAT_00856fd8,
                                               DAT_00856fdc,local_20);
                                }
                              }
                              else if (local_38 == 0) {
                                if (local_20 == 0) {
                                  if (local_28 == 0) {
                                    FUN_006f5240(pbVar19,DAT_00857028,local_8,
                                                 *(int *)&this->field_0x28 << 1,param_1,pbVar17,
                                                 (int)pbVar14,(int)local_1c,DAT_00856fd8,
                                                 DAT_00856fdc);
                                  }
                                  else {
                                    FUN_006f5430(pbVar19,DAT_00857028,local_8,
                                                 *(int *)&this->field_0x28 * 2,param_1,pbVar17,
                                                 (int)pbVar14,(int)local_1c,(uint)DAT_00856fd8,
                                                 DAT_00856fdc,local_30,*(int *)&this->field_0x28,
                                                 local_28);
                                  }
                                }
                                else if (local_28 == 0) {
                                  FUN_006f5d80(pbVar19,DAT_00857028,(ushort *)local_8,
                                               *(int *)&this->field_0x28 << 1,param_1,pbVar17,
                                               (int)pbVar14,(int)local_1c,(int)DAT_00856fd8,
                                               DAT_00856fdc,local_20);
                                }
                                else {
                                  FUN_006f6020(pbVar19,DAT_00857028,(ushort *)local_8,
                                               *(int *)&this->field_0x28 * 2,param_1,pbVar17,
                                               (int)pbVar14,(int)local_1c,(int)DAT_00856fd8,
                                               DAT_00856fdc,local_20,local_30,
                                               *(int *)&this->field_0x28,local_28);
                                }
                              }
                              else if (local_20 == 0) {
                                FUN_006d26d0(pbVar19,DAT_00857028,pbVar17,(int)pbVar14,(int)local_1c
                                             ,(uint)DAT_00856fd8,DAT_00856fdc);
                              }
                              else {
                                FUN_006f8660((undefined4 *)pbVar19,DAT_00857028,pbVar17,(int)pbVar14
                                             ,(int)local_1c,(uint)DAT_00856fd8,DAT_00856fdc,local_20
                                            );
                              }
                            }
                            else if (local_40 != 0) {
                              if (DAT_00856fd8 == pbVar14) {
                                if (local_38 == 0) {
                                  FUN_006f5c60(pbVar19,DAT_00857028,local_30,
                                               *(int *)&this->field_0x28,(ushort *)local_8,
                                               *(int *)&this->field_0x28 * 2,param_1,pbVar17,
                                               (int)DAT_00856fd8,DAT_00856fdc,local_40);
                                }
                                else {
                                  FUN_006f85a0(pbVar19,DAT_00857028,local_30,
                                               *(int *)&this->field_0x28,pbVar17,(int)DAT_00856fd8,
                                               DAT_00856fdc,local_40);
                                }
                              }
                              else if (local_38 == 0) {
                                FUN_006f7d10(pbVar19,DAT_00857028,local_30,*(int *)&this->field_0x28
                                             ,(ushort *)local_8,*(int *)&this->field_0x28 * 2,
                                             param_1,pbVar17,(int)pbVar14,(int)local_1c,
                                             (int)DAT_00856fd8,DAT_00856fdc,local_40);
                              }
                              else {
                                FUN_006f88a0(pbVar19,DAT_00857028,local_30,*(int *)&this->field_0x28
                                             ,pbVar17,(int)pbVar14,(int)local_1c,(int)DAT_00856fd8,
                                             DAT_00856fdc,local_40);
                              }
                            }
                          }
                          else {
                            local_44 = (AnonShape_006F31D0_0BFF23DC *)(DAT_00856fd0 - DAT_00856fe8);
                            iVar12 = (DAT_00856fd4 - *(short *)(DAT_00856fe4 + 0x10)) -
                                     local_2c[0x14];
                            if (iVar12 < 1) {
                              local_30 = DAT_00856fe4 + (DAT_00856fe4[0xd] >> 1 & 0xe) + 0x16;
                            }
                            else {
                              local_30 = FUN_006cfe10(DAT_00856fe4,iVar12);
                            }
                            if (local_38 != 0) {
                              param_1 = 0;
                            }
                            if (DAT_00856fd8 == pbVar14) {
                              local_1c = (byte *)0x0;
                            }
                            if (DAT_00856fd8 == DAT_0085700c) {
                              local_44 = (AnonShape_006F31D0_0BFF23DC *)0x0;
                            }
                            if (local_20 == 0) {
                              FUN_006f72f0(pbVar19,DAT_00857028,(ushort *)local_8,
                                           *(int *)&this->field_0x28 << 1,param_1,pbVar17,
                                           (int)pbVar14,(int)local_1c,(int)DAT_00856fd8,DAT_00856fdc
                                           ,local_30,(uint)DAT_0085700c,(int)local_44);
                            }
                            else {
                              FUN_006f77e0(pbVar19,DAT_00857028,(ushort *)local_8,
                                           *(int *)&this->field_0x28 << 1,param_1,pbVar17,
                                           (int)pbVar14,(int)local_1c,(int)DAT_00856fd8,DAT_00856fdc
                                           ,local_30,(uint)DAT_0085700c,(int)local_44,local_20);
                            }
                          }
                        }
                        else {
                          if (local_38 != 0) {
                            param_1 = 0;
                          }
                          if (DAT_00856fd8 == pbVar14) {
                            local_1c = (byte *)0x0;
                          }
                          if ((uVar2 & 4) == 0) {
                            if (local_20 == 0) {
                              if (local_28 == 0) {
                                FUN_006f6330(pbVar19,DAT_00857028,(ushort *)local_8,
                                             *(int *)&this->field_0x28 << 1,param_1,pbVar17,
                                             (int)pbVar14,(int)local_1c,(int)DAT_00856fd8,
                                             DAT_00856fdc,local_3c,local_2c[0x2f],
                                             (byte *)(int)*(short *)(local_34 + 0xe));
                              }
                              else {
                                FUN_006f66c0(pbVar19,DAT_00857028,(ushort *)local_8,
                                             *(int *)&this->field_0x28 * 2,param_1,pbVar17,
                                             (int)pbVar14,(int)local_1c,(int)DAT_00856fd8,
                                             DAT_00856fdc,local_3c,local_2c[0x2f],
                                             (byte *)(int)*(short *)(local_34 + 0xe),local_30,
                                             *(int *)&this->field_0x28,local_28);
                              }
                            }
                            else if (local_28 == 0) {
                              FUN_006f6ae0(pbVar19,DAT_00857028,(ushort *)local_8,
                                           *(int *)&this->field_0x28 << 1,param_1,pbVar17,
                                           (int)pbVar14,(int)local_1c,(int)DAT_00856fd8,DAT_00856fdc
                                           ,local_3c,local_2c[0x2f],
                                           (byte *)(int)*(short *)(local_34 + 0xe),local_20);
                            }
                            else {
                              FUN_006f6ea0(pbVar19,DAT_00857028,(ushort *)local_8,
                                           *(int *)&this->field_0x28 * 2,param_1,pbVar17,
                                           (int)pbVar14,(int)local_1c,(int)DAT_00856fd8,DAT_00856fdc
                                           ,local_3c,local_2c[0x2f],
                                           (byte *)(int)*(short *)(local_34 + 0xe),local_20,local_30
                                           ,*(int *)&this->field_0x28,local_28);
                            }
                          }
                          else if (local_40 != 0) {
                            FUN_006f81d0(pbVar19,DAT_00857028,local_30,*(int *)&this->field_0x28,
                                         (ushort *)local_8,*(int *)&this->field_0x28 * 2,param_1,
                                         pbVar17,(int)pbVar14,(int)local_1c,(int)DAT_00856fd8,
                                         DAT_00856fdc,local_40,local_3c,local_2c[0x2f],
                                         (byte *)(int)*(short *)(local_34 + 0xe));
                          }
                        }
                      }
                      else {
                        local_44 = (AnonShape_006F31D0_0BFF23DC *)local_2c[0x2c];
                        if (local_44 != (AnonShape_006F31D0_0BFF23DC *)0x0) {
                          if (local_38 != 0) {
                            param_1 = 0;
                          }
                          if (DAT_00856fd8 == pbVar14) {
                            local_1c = (byte *)0x0;
                          }
                          FUN_006f7fc0(pbVar19,DAT_00857028,(ushort *)local_8,
                                       *(int *)&this->field_0x28 << 1,param_1,pbVar17,(int)pbVar14,
                                       (int)local_1c,(int)DAT_00856fd8,DAT_00856fdc,(int)local_44);
                        }
                      }
                    }
                    else {
                      if (local_38 != 0) {
                        param_1 = 0;
                      }
                      if (DAT_00856fd8 == pbVar14) {
                        local_1c = (byte *)0x0;
                      }
                      FUN_007068d0(pbVar19,DAT_00857028,(ushort *)local_8,
                                   *(int *)&this->field_0x28 << 1,param_1,pbVar17,(int)pbVar14,
                                   (int)local_1c,local_2c[0x26],local_2c[0x27],(int)DAT_00856fd8,
                                   DAT_00856fdc);
                    }
                  }
                  else {
                    pbVar17 = DAT_00856fd8 + (DAT_00856fd0 - puVar18[0x15]);
                    if (DAT_00857008 == 3) {
                      uVar7 = (uint)pbVar17 & 1;
                    }
                    else {
                      uVar7 = (-(uint)(((uint)pbVar17 & 1) != 0) & 3) - 1;
                    }
                    local_44 = (AnonShape_006F31D0_0BFF23DC *)(DAT_00856fd0 - puVar18[0x15]);
                    iVar12 = ((int)pbVar17 / 2) * DAT_00857008 +
                             (uVar7 - (int)*(short *)(local_34 + 0xe));
                    if (DAT_00857008 == 3) {
                      local_10 = ((uint)local_44 & 1) << 1;
                    }
                    else {
                      local_10 = ((uint)local_44 & 1) << 1 | 1;
                    }
                    iVar13 = ((int)local_44 / 2) * DAT_00857008 +
                             (local_10 - (int)*(short *)(local_34 + 0xe));
                    uVar7 = (DAT_00856fdc - local_2c[0x16]) + DAT_00856fd4;
                    if (DAT_00857008 == 3) {
                      uVar15 = uVar7 & 1;
                    }
                    else {
                      uVar15 = (-(uint)((uVar7 & 1) != 0) & 3) - 1;
                    }
                    iVar4 = ((int)uVar7 / 2) * DAT_00857008 +
                            (uVar15 - (int)*(short *)(local_34 + 0x10));
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
                    local_1c = pbVar19;
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
                                                   *(int *)&local_24->field_0x28 << 1,param_1,
                                                   (byte *)local_18,(int)pbVar14,iVar13,
                                                   iVar12 - iVar13,iVar4 - local_14,local_10,local_c
                                                  );
                                    }
                                    else {
                                      FUN_006f8f00(local_1c,DAT_00857028,(ushort *)local_8,
                                                   *(int *)&local_24->field_0x28 * 2,param_1,
                                                   (byte *)local_18,(int)pbVar14,iVar13,
                                                   iVar12 - iVar13,iVar4 - local_14,local_10,local_c
                                                   ,local_30,*(int *)&local_24->field_0x28,local_28)
                                      ;
                                    }
                                  }
                                  else if (local_28 == 0) {
                                    FUN_006f94d0(local_1c,DAT_00857028,(ushort *)local_8,
                                                 *(int *)&local_24->field_0x28 << 1,param_1,
                                                 (byte *)local_18,(int)pbVar14,iVar13,
                                                 iVar12 - iVar13,iVar4 - local_14,local_10,local_c);
                                  }
                                  else {
                                    FUN_006f9ad0(local_1c,DAT_00857028,(ushort *)local_8,
                                                 *(int *)&local_24->field_0x28 * 2,param_1,local_18,
                                                 (int)pbVar14,iVar13,iVar12 - iVar13,
                                                 iVar4 - local_14,local_10,local_c,local_30,
                                                 *(int *)&local_24->field_0x28,local_28);
                                  }
                                }
                                else if (DAT_00857008 == 3) {
                                  if (local_28 == 0) {
                                    FUN_006fa280(local_1c,DAT_00857028,(ushort *)local_8,
                                                 *(int *)&local_24->field_0x28 << 1,param_1,
                                                 (byte *)local_18,(int)pbVar14,iVar13,
                                                 iVar12 - iVar13,iVar4 - local_14,local_10,local_c,
                                                 local_20);
                                  }
                                  else {
                                    FUN_006fa7a0(local_1c,DAT_00857028,(ushort *)local_8,
                                                 *(int *)&local_24->field_0x28 * 2,param_1,
                                                 (byte *)local_18,(int)pbVar14,iVar13,
                                                 iVar12 - iVar13,iVar4 - local_14,local_10,local_c,
                                                 local_20,local_30,*(int *)&local_24->field_0x28,
                                                 local_28);
                                  }
                                }
                                else if (local_28 == 0) {
                                  FUN_006fadc0(local_1c,DAT_00857028,(ushort *)local_8,
                                               *(int *)&local_24->field_0x28 << 1,param_1,local_18,
                                               (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                               local_10,local_c,local_20);
                                }
                                else {
                                  FUN_006fb4a0(local_1c,DAT_00857028,(ushort *)local_8,
                                               *(int *)&local_24->field_0x28 * 2,param_1,
                                               (byte *)local_18,(int)pbVar14,iVar13,iVar12 - iVar13,
                                               iVar4 - local_14,local_10,local_c,local_20,local_30,
                                               *(int *)&local_24->field_0x28,local_28);
                                }
                              }
                              else if (local_20 == 0) {
                                if (DAT_00857008 == 3) {
                                  FUN_00704e70(local_1c,DAT_00857028,(byte *)local_18,(int)pbVar14,
                                               iVar13,iVar12 - iVar13,iVar4 - local_14,local_10,
                                               local_c);
                                }
                                else {
                                  FUN_00705180(local_1c,DAT_00857028,(byte *)local_18,(int)pbVar14,
                                               iVar13,iVar12 - iVar13,iVar4 - local_14,local_10,
                                               local_c);
                                }
                              }
                              else if (DAT_00857008 == 3) {
                                FUN_007055d0(local_1c,DAT_00857028,(byte *)local_18,(int)pbVar14,
                                             iVar13,iVar12 - iVar13,iVar4 - local_14,local_10,
                                             local_c,local_20);
                              }
                              else {
                                FUN_007059a0(local_1c,DAT_00857028,(byte *)local_18,(int)pbVar14,
                                             iVar13,iVar12 - iVar13,iVar4 - local_14,local_10,
                                             local_c,local_20);
                              }
                            }
                            else if (local_40 != 0) {
                              if (local_38 == 0) {
                                iVar5 = *(int *)&local_24->field_0x28;
                                if (DAT_00857008 == 3) {
                                  FUN_00702510(local_1c,DAT_00857028,local_30,iVar5,
                                               (ushort *)local_8,iVar5 * 2,param_1,(byte *)local_18,
                                               (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                               local_10,local_c,local_40);
                                }
                                else {
                                  FUN_00702a30(local_1c,DAT_00857028,local_30,iVar5,
                                               (ushort *)local_8,iVar5 * 2,param_1,(byte *)local_18,
                                               (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                               local_10,local_c,local_40);
                                }
                              }
                              else if (DAT_00857008 == 3) {
                                FUN_00705ed0(local_1c,DAT_00857028,local_30,
                                             *(int *)&local_24->field_0x28,(byte *)local_18,
                                             (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                             local_10,local_c,local_40);
                              }
                              else {
                                FUN_00706340(local_1c,DAT_00857028,local_30,
                                             *(int *)&local_24->field_0x28,(byte *)local_18,
                                             (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                             local_10,local_c,local_40);
                              }
                            }
                          }
                          else {
                            local_44 = (AnonShape_006F31D0_0BFF23DC *)
                                       (((int)*(short *)(local_34 + 0xe) -
                                        (int)*(short *)(DAT_00856fe4 + 0xe)) + iVar13);
                            iVar5 = ((int)*(short *)(local_34 + 0x10) -
                                    (int)*(short *)(DAT_00856fe4 + 0x10)) + local_14;
                            if (iVar5 < 1) {
                              pbVar19 = DAT_00856fe4 + (DAT_00856fe4[0xd] >> 1 & 0xe) + 0x16;
                            }
                            else {
                              pbVar19 = FUN_006cfe10(DAT_00856fe4,iVar5);
                            }
                            if (local_38 != 0) {
                              param_1 = 0;
                            }
                            if (local_20 == 0) {
                              if (DAT_00857008 == 3) {
                                FUN_00700190(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)&local_24->field_0x28 << 1,param_1,
                                             (byte *)local_18,(int)pbVar14,iVar13,iVar12 - iVar13,
                                             iVar4 - local_14,local_10,local_c,pbVar19,
                                             (int)DAT_0085700c,(int)local_44);
                              }
                              else {
                                FUN_00700920(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)&local_24->field_0x28 << 1,param_1,
                                             (byte *)local_18,(int)pbVar14,iVar13,iVar12 - iVar13,
                                             iVar4 - local_14,local_10,local_c,pbVar19,
                                             (int)DAT_0085700c,(int)local_44);
                              }
                            }
                            else if (DAT_00857008 == 3) {
                              FUN_007012f0(local_1c,DAT_00857028,(ushort *)local_8,
                                           *(int *)&local_24->field_0x28 << 1,param_1,
                                           (byte *)local_18,(int)pbVar14,iVar13,iVar12 - iVar13,
                                           iVar4 - local_14,local_10,local_c,pbVar19,
                                           (int)DAT_0085700c,(int)local_44,local_20);
                            }
                            else {
                              FUN_00701ad0(local_1c,DAT_00857028,(ushort *)local_8,
                                           *(int *)&local_24->field_0x28 << 1,param_1,
                                           (byte *)local_18,(int)pbVar14,iVar13,iVar12 - iVar13,
                                           iVar4 - local_14,local_10,local_c,pbVar19,
                                           (int)DAT_0085700c,(int)local_44,local_20);
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
                                               *(int *)&local_24->field_0x28 << 1,param_1,
                                               (byte *)local_18,(int)pbVar14,iVar13,iVar12 - iVar13,
                                               iVar4 - local_14,local_10,local_c,local_3c,
                                               local_2c[0x2f],(int)local_44);
                                }
                                else {
                                  FUN_006fc3e0(local_1c,DAT_00857028,(ushort *)local_8,
                                               *(int *)&local_24->field_0x28 * 2,param_1,
                                               (byte *)local_18,(int)pbVar14,iVar13,iVar12 - iVar13,
                                               iVar4 - local_14,local_10,local_c,local_3c,
                                               local_2c[0x2f],(int)local_44,local_30,
                                               *(int *)&local_24->field_0x28,local_28);
                                }
                              }
                              else if (local_28 == 0) {
                                FUN_006fcb30(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)&local_24->field_0x28 << 1,param_1,
                                             (byte *)local_18,(int)pbVar14,iVar13,iVar12 - iVar13,
                                             iVar4 - local_14,local_10,local_c,local_3c,
                                             local_2c[0x2f],(int)local_44);
                              }
                              else {
                                FUN_006fd430(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)&local_24->field_0x28 * 2,param_1,
                                             (byte *)local_18,(int)pbVar14,iVar13,iVar12 - iVar13,
                                             iVar4 - local_14,local_10,local_c,local_3c,
                                             local_2c[0x2f],(int)local_44,local_30,
                                             *(int *)&local_24->field_0x28,local_28);
                              }
                            }
                            else if (DAT_00857008 == 3) {
                              if (local_28 == 0) {
                                FUN_006fdea0(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)&local_24->field_0x28 << 1,param_1,
                                             (byte *)local_18,(int)pbVar14,iVar13,iVar12 - iVar13,
                                             iVar4 - local_14,local_10,local_c,local_3c,
                                             local_2c[0x2f],(int)local_44,local_20);
                              }
                              else {
                                FUN_006fe570(local_1c,DAT_00857028,(ushort *)local_8,
                                             *(int *)&local_24->field_0x28 * 2,param_1,
                                             (byte *)local_18,(int)pbVar14,iVar13,iVar12 - iVar13,
                                             iVar4 - local_14,local_10,local_c,local_3c,
                                             local_2c[0x2f],(int)local_44,local_20,local_30,
                                             *(int *)&local_24->field_0x28,local_28);
                              }
                            }
                            else if (local_28 == 0) {
                              FUN_006fed50(local_1c,DAT_00857028,(ushort *)local_8,
                                           *(int *)&local_24->field_0x28 << 1,param_1,
                                           (byte *)local_18,(int)pbVar14,iVar13,iVar12 - iVar13,
                                           iVar4 - local_14,local_10,local_c,local_3c,local_2c[0x2f]
                                           ,(int)local_44,local_20);
                            }
                            else {
                              FUN_006ff690(local_1c,DAT_00857028,(ushort *)local_8,
                                           *(int *)&local_24->field_0x28 * 2,param_1,
                                           (byte *)local_18,(int)pbVar14,iVar13,iVar12 - iVar13,
                                           iVar4 - local_14,local_10,local_c,local_3c,local_2c[0x2f]
                                           ,(int)local_44,local_20,local_30,
                                           *(int *)&local_24->field_0x28,local_28);
                            }
                          }
                          else if (local_40 != 0) {
                            iVar5 = *(int *)&local_24->field_0x28;
                            if (DAT_00857008 == 3) {
                              FUN_00703d40(local_1c,DAT_00857028,local_30,iVar5,(ushort *)local_8,
                                           iVar5 * 2,param_1,(byte *)local_18,(int)pbVar14,iVar13,
                                           iVar12 - iVar13,iVar4 - local_14,local_10,local_c,
                                           local_40,local_3c,local_2c[0x2f],(int)local_44);
                            }
                            else {
                              FUN_00704460(local_1c,DAT_00857028,local_30,iVar5,(ushort *)local_8,
                                           iVar5 * 2,param_1,(byte *)local_18,(int)pbVar14,iVar13,
                                           iVar12 - iVar13,iVar4 - local_14,local_10,local_c,
                                           local_40,local_3c,local_2c[0x2f],(int)local_44);
                            }
                          }
                        }
                      }
                      else {
                        uVar7 = local_2c[0x2c];
                        if (uVar7 != 0) {
                          if (local_38 != 0) {
                            param_1 = 0;
                          }
                          if (DAT_00857008 == 3) {
                            FUN_00703160(local_1c,DAT_00857028,(ushort *)local_8,
                                         *(int *)&local_24->field_0x28 << 1,param_1,(byte *)local_18
                                         ,(int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                         local_10,local_c,uVar7);
                          }
                          else {
                            FUN_00703650(local_1c,DAT_00857028,(ushort *)local_8,
                                         *(int *)&local_24->field_0x28 << 1,param_1,(byte *)local_18
                                         ,(int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                         local_10,local_c,uVar7);
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
                                     *(int *)&local_24->field_0x28 << 1,param_1,(byte *)local_18,
                                     (int)pbVar14,iVar13,local_2c[0x26],local_2c[0x27],
                                     iVar12 - iVar13,iVar4 - local_14,local_10,local_c,
                                     (int)DAT_00856fd8,DAT_00856fdc);
                      }
                      else {
                        FUN_00707810(local_1c,DAT_00857028,(ushort *)local_8,
                                     *(int *)&local_24->field_0x28 << 1,param_1,(byte *)local_18,
                                     (int)pbVar14,iVar13,local_2c[0x26],local_2c[0x27],
                                     iVar12 - iVar13,iVar4 - local_14,local_10,local_c,
                                     (int)DAT_00856fd8,DAT_00856fdc);
                      }
                    }
                  }
                }
                else {
LAB_006f3a58:
                  if (iVar12 != 0) goto LAB_006f3a60;
                }
                puVar18 = local_2c;
                this = local_24;
                if (*(int *)(*(int *)&local_24->field_0x330 + 0x18 + local_5c) <=
                    (int)&local_58->field_0x1) goto LAB_006f4dec;
                puVar11 = (uint *)((int)&local_58->field_0x3 * 0x10 + *(int *)&local_24->field_0x330
                                  + local_5c);
                local_58 = (AnonShape_006F31D0_0BFF23DC *)&local_58->field_0x1;
              } while( true );
            }
          }
        }
      }
      else {
        uVar7 = (uint)*psVar1;
        iVar12 = uVar7 * 0x68;
        pbVar14 = (byte *)(*(int *)&this->field_0x330 + iVar12);
        local_58 = *(AnonShape_006F31D0_0BFF23DC **)(pbVar14 + 100);
        if ((((local_58->field_0008 == 0) && ((local_58->field_0002 & 1) != 0)) &&
            ((param_4 == 0 || (local_58->field_0090 != 0)))) &&
           (((*(uint *)(pbVar14 + 4) & 0x8040) == 0x40 && ((*pbVar14 & 3) != 0)))) {
          if (param_2 < 0) {
LAB_006f3635:
            uVar15 = 0xffffffff;
            iVar13 = -1;
LAB_006f363d:
            FUN_006f31d0(this,uVar7,iVar13,uVar15,param_4);
            if (param_4 != 0) {
              puVar11 = *(uint **)(iVar12 + 100 + *(int *)&this->field_0x330);
              *puVar11 = *puVar11 & 0xffffff7f;
            }
            puVar11 = *(uint **)(iVar12 + 100 + *(int *)&this->field_0x330);
            *puVar11 = *puVar11 & 0xffffff7d | 1;
          }
          else {
            local_18 = (ushort *)(local_58->field_0050 - puVar18[0x14]);
            if (param_2 == 0) {
              uVar15 = local_50 - (int)local_18;
              if ((int)local_18 < (int)local_50) {
                if (local_58->field_0038 + (int)local_18 <= (int)local_50) goto LAB_006f3635;
                iVar13 = 0;
                goto LAB_006f363d;
              }
            }
            else if ((param_2 == 1) &&
                    (uVar15 = (int)local_48 - (int)local_18,
                    (int)local_48 < local_58->field_0038 + (int)local_18)) {
              if ((int)local_18 < (int)local_48) {
                iVar13 = 1;
              }
              else {
                uVar15 = 0xffffffff;
                iVar13 = -1;
              }
              FUN_006f31d0(this,uVar7,iVar13,uVar15,param_4);
              if (param_4 != 0) {
                puVar11 = *(uint **)(iVar12 + 100 + *(int *)&this->field_0x330);
                *puVar11 = *puVar11 & 0xffffff7f;
              }
              puVar11 = *(uint **)(iVar12 + 100 + *(int *)&this->field_0x330);
              *puVar11 = *puVar11 & 0xffffff7d | 1;
            }
          }
        }
      }
    }
    goto LAB_006f4df8;
  }
LAB_006f4e0c:
  if (4 < *(int *)(local_5c + 0x18 + *(int *)&this->field_0x330)) {
    if (param_4 != 0) {
      *puVar18 = *puVar18 | ((0 < param_2) - 1 & 0xffe00000) + 0x400000;
      return;
    }
    *puVar18 = *puVar18 | ((0 < param_2) - 1 & 0xfff80000) + 0x100000;
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

