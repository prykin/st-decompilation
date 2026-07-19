
short * FUN_006ae7d0(int param_1,int param_2,short *param_3,short *param_4,short *param_5,
                    short *param_6,short *param_7,short *param_8,short *param_9,short *param_10,
                    int *param_11,undefined4 *param_12,short *param_13)

{
  short *psVar1;
  ushort uVar2;
  short sVar3;
  bool bVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  short *psVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  short *psVar22;
  short *psVar23;
  int iVar24;
  short *psVar25;
  int iVar26;
  int local_90;
  int local_6c;
  int local_5c;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  short *local_40;
  short *local_3c;
  int local_38;
  short *local_34;
  short *local_30;
  short *local_2c;
  short *local_28;
  short *local_24;
  short *local_20;
  short *local_1c;
  int local_18;
  short *local_14;
  short *local_10;
  short *local_c;
  short *local_8;
  
  *param_11 = 0;
  if ((((((-1 < (int)param_5) && ((int)param_5 < param_2)) && (-1 < (int)param_6)) &&
       (((int)param_6 < (int)param_3 && (-1 < (int)param_7)))) && ((int)param_7 < (int)param_4)) &&
     (((-1 < (int)param_8 && ((int)param_8 < param_2)) &&
      ((-1 < (int)param_9 &&
       ((((int)param_9 < (int)param_3 && (-1 < (int)param_10)) && ((int)param_10 < (int)param_4)))))
      ))) {
    local_44 = param_2 * (int)param_3;
    psVar5 = (short *)((int)param_8 - (int)param_5);
    uVar17 = (int)psVar5 >> 0x1f;
    psVar12 = (short *)(((uint)psVar5 ^ uVar17) - uVar17);
    psVar6 = (short *)((int)param_9 - (int)param_6);
    uVar18 = (int)psVar6 >> 0x1f;
    psVar7 = (short *)((int)param_10 - (int)param_7);
    iVar24 = ((uint)psVar6 ^ uVar18) - uVar18;
    uVar19 = (int)psVar7 >> 0x1f;
    iVar8 = ((uint)psVar7 ^ uVar19) - uVar19;
    local_8 = (short *)iVar24;
    if (iVar24 <= (int)psVar12) {
      local_8 = psVar12;
    }
    if ((int)local_8 < iVar8) {
      local_8 = (short *)iVar8;
    }
    local_8 = (short *)((int)local_8 + 2);
    local_14 = (short *)FUN_006aac70((int)local_8 * 8);
    if (local_14 != (short *)0x0) {
      *local_14 = (short)param_5;
      local_54 = 1;
      local_14[1] = (short)param_6;
      local_c = param_6;
      local_10 = param_7;
      local_14[2] = (short)param_7;
      local_5c = 0;
      local_14[3] = 0;
      local_48 = 0;
      if (((param_5 != param_8) || (param_6 != param_9)) || (param_7 != param_10)) {
        iVar20 = local_5c;
        psVar23 = param_5;
        if ((param_12 != (undefined4 *)0x0) && (0 < (int)param_13)) {
          local_1c = param_13;
          iVar20 = (int)param_13 * 2 + 1;
          local_38 = iVar20 * iVar20;
          psVar1 = (short *)((int)param_12 + (local_38 + 1 + iVar20) * (int)param_13 * 2);
          psVar25 = param_13;
          if (((int)psVar12 <= (int)param_13) &&
             (((iVar24 <= (int)param_13 && (iVar8 <= (int)param_13)) &&
              (iVar20 = (((int)psVar7 * local_38 + (int)psVar6 * iVar20) - (int)param_5) +
                        (int)param_8, psVar1[iVar20] == -3)))) {
            psVar1[iVar20] = 0;
          }
          do {
            local_5c = FUN_006a5f20((int)psVar23,(int)local_c,(int)local_10,(int)param_8,
                                    (int)param_9,(int)param_10,&local_48);
            local_2c = (short *)(int)(short)(&DAT_007ed570)[local_5c * 4];
            local_18 = (int)(short)(&DAT_007ed572)[local_5c * 4];
            local_20 = (short *)(int)(short)(&DAT_007ed574)[local_5c * 4];
            iVar20 = local_5c;
            if (0 < local_48) {
              local_90 = (int)local_10 * local_44;
              local_50 = (int)local_c * param_2;
              iVar26 = (int)param_13 * 2 + 1;
              local_34 = (short *)(param_1 + (local_50 + local_90 + (int)psVar23) * 2);
              local_28 = (short *)(local_38 * (int)local_10);
              iVar13 = local_38 * (int)param_7;
              local_40 = (short *)(local_18 * param_2);
              local_30 = (short *)(iVar26 * local_18);
              local_24 = (short *)((int)local_20 * local_44);
              iVar21 = iVar26 * (int)local_c;
              iVar9 = local_38 * (int)local_20;
              local_3c = (short *)((int)local_8 * 8 + 0x50);
LAB_006aea95:
              bVar4 = false;
              iVar10 = (int)local_28 + (iVar21 - iVar26 * (int)param_6) + (-(int)param_5 - iVar13) +
                       (int)psVar23;
              psVar23 = (short *)((int)psVar23 + (int)local_2c);
              local_c = (short *)((int)local_c + local_18);
              iVar21 = iVar21 + (int)local_30;
              local_50 = local_50 + (int)local_40;
              local_10 = (short *)((int)local_10 + (int)local_20);
              local_28 = (short *)((int)local_28 + iVar9);
              local_90 = local_90 + (int)local_24;
              iVar11 = local_90 + local_50 + (int)psVar23;
              psVar25 = (short *)(param_1 + iVar11 * 2);
              if ((*(short *)(param_1 + iVar11 * 2) < 0) ||
                 (psVar1[(int)local_28 + (iVar21 - iVar26 * (int)param_6) + (-(int)param_5 - iVar13)
                         + (int)psVar23] < 0)) {
LAB_006aeee7:
                local_34 = psVar25;
                FUN_006ab060(&local_14);
                local_24 = param_13;
                if ((int)param_5 < (int)param_13) {
                  local_24 = param_5;
                }
                local_24 = (short *)-(int)local_24;
                if ((int)param_5 + (int)param_13 < param_2) {
                  local_8 = param_13;
                }
                else {
                  local_8 = (short *)((param_2 - (int)param_5) - 1);
                }
                local_20 = param_13;
                if ((int)param_6 < (int)param_13) {
                  local_20 = param_6;
                }
                local_20 = (short *)-(int)local_20;
                if ((int)param_6 + (int)param_13 < (int)param_3) {
                  local_28 = param_13;
                }
                else {
                  local_28 = (short *)((int)param_3 + (-1 - (int)param_6));
                }
                psVar23 = param_13;
                if ((int)param_7 < (int)param_13) {
                  psVar23 = param_7;
                }
                psVar22 = (short *)-(int)psVar23;
                psVar25 = param_13;
                if ((int)param_4 <= (int)param_7 + (int)param_13) {
                  psVar25 = (short *)((int)param_4 + (-1 - (int)param_7));
                }
                local_40 = psVar25;
                if ((int)psVar23 < (int)param_13) {
                  FUN_006ce6c0(param_12,((int)psVar22 + (int)param_13) * local_38,0xffff);
                }
                if ((int)psVar25 < (int)param_13) {
                  FUN_006ce6c0((undefined4 *)
                               ((int)param_12 + ((int)psVar25 + 1 + (int)param_13) * local_38 * 2),
                               ((int)param_13 - (int)psVar25) * local_38,0xffff);
                }
                iVar26 = local_44;
                if ((short *)-(int)psVar25 == psVar23 || (int)psVar22 < (int)psVar25) {
                  iVar9 = -(int)local_20;
                  local_3c = psVar1 + (int)psVar22 * local_38 +
                                      (int)local_20 * ((int)param_13 * 2 + 1);
                  param_3 = (short *)((int)param_12 + ((int)psVar22 + (int)param_13) * local_38 * 2)
                  ;
                  iVar13 = (int)local_40 + (int)psVar23 + 1;
                  local_1c = (short *)(param_1 +
                                      ((int)param_5 +
                                      ((int)local_20 + (int)param_6) * param_2 +
                                      ((int)psVar22 + (int)param_7) * local_44) * 2);
                  do {
                    psVar23 = local_28;
                    if (iVar9 < (int)param_13) {
                      FUN_006ce6c0((undefined4 *)param_3,
                                   ((int)local_20 + (int)param_13) * ((int)param_13 * 2 + 1),0xffff)
                      ;
                    }
                    if ((int)psVar23 < (int)param_13) {
                      iVar21 = (int)param_13 * 2 + 1;
                      FUN_006ce6c0((undefined4 *)
                                   (param_3 + ((int)psVar23 + 1 + (int)param_13) * iVar21),
                                   ((int)param_13 - (int)psVar23) * iVar21,0xffff);
                    }
                    if ((int)local_20 <= (int)local_28) {
                      local_6c = (int)local_28 + (1 - (int)local_20);
                      psVar23 = local_3c;
                      psVar25 = local_1c;
                      do {
                        if ((-(int)local_24 < (int)param_13) && (-(int)param_13 < (int)local_24)) {
                          psVar16 = psVar23 + -(int)param_13;
                          for (uVar14 = (uint)((int)local_24 + (int)param_13) >> 1; uVar14 != 0;
                              uVar14 = uVar14 - 1) {
                            psVar16[0] = -1;
                            psVar16[1] = -1;
                            psVar16 = psVar16 + 2;
                          }
                          for (uVar14 = (uint)(((int)local_24 + (int)param_13 & 1U) != 0);
                              uVar14 != 0; uVar14 = uVar14 - 1) {
                            *psVar16 = -1;
                            psVar16 = psVar16 + 1;
                          }
                        }
                        if (((int)local_8 < (int)param_13) &&
                           (iVar21 = (int)local_8 + 1, iVar21 <= (int)param_13)) {
                          uVar14 = (int)param_13 + (1 - iVar21);
                          psVar16 = psVar23 + iVar21;
                          for (uVar15 = uVar14 >> 1; uVar15 != 0; uVar15 = uVar15 - 1) {
                            psVar16[0] = -1;
                            psVar16[1] = -1;
                            psVar16 = psVar16 + 2;
                          }
                          for (uVar14 = (uint)((uVar14 & 1) != 0); uVar14 != 0; uVar14 = uVar14 - 1)
                          {
                            *psVar16 = -1;
                            psVar16 = psVar16 + 1;
                          }
                        }
                        if ((int)local_24 <= (int)local_8) {
                          psVar16 = psVar23 + (int)local_24;
                          iVar21 = (int)local_8 + (1 - (int)local_24);
                          do {
                            if (*psVar16 == 0) {
                              *psVar16 = *(short *)(((int)psVar25 - (int)psVar23) + (int)psVar16);
                            }
                            psVar16 = psVar16 + 1;
                            iVar21 = iVar21 + -1;
                          } while (iVar21 != 0);
                        }
                        psVar23 = psVar23 + (int)param_13 * 2 + 1;
                        psVar25 = psVar25 + param_2;
                        local_6c = local_6c + -1;
                      } while (local_6c != 0);
                    }
                    local_1c = local_1c + iVar26;
                    param_3 = param_3 + local_38;
                    local_3c = local_3c + local_38;
                    iVar13 = iVar13 + -1;
                  } while (iVar13 != 0);
                }
                iVar26 = (int)param_13 * 2 + 1;
                iVar9 = FUN_006ab090((int)param_12,iVar26,iVar26,iVar26,(int)param_13,(int)param_13,
                                     (int)param_13,-1,-1,-1);
                if (iVar9 != 0) {
                  RaiseInternalException(-2,DAT_007ed77c,s_E__DKW_WAY_C_sway3d_cpp_007eda5c,0x187);
                  return (short *)0x0;
                }
                if ((((int)param_13 < (int)(((uint)psVar5 ^ uVar17) - uVar17)) ||
                    ((int)param_13 < (int)(((uint)psVar6 ^ uVar18) - uVar18))) ||
                   ((int)param_13 < (int)(((uint)psVar7 ^ uVar19) - uVar19))) {
                  iVar9 = 32000;
                  local_2c = (short *)0x0;
                  iVar26 = (int)psVar22 + (int)param_7;
                  local_18 = 32000;
                  local_30 = (short *)0x0;
                  param_3 = (short *)0x0;
                  local_10 = psVar22;
                  if (0 < iVar26) {
                    local_10 = (short *)((int)psVar22 + 1);
                  }
                  iVar13 = (int)local_40 + (int)param_7;
                  iVar21 = (int)param_4 + -1;
                  psVar5 = local_40;
                  if (iVar13 < iVar21) {
                    psVar5 = (short *)((int)local_40 + -1);
                  }
                  if ((int)local_10 <= (int)psVar5) {
                    uVar18 = (int)local_20 >> 0x1f;
                    uVar17 = (uint)local_20 ^ uVar18;
                    local_c = (short *)((int)param_7 + (int)local_10);
                    param_4 = (short *)(local_38 * (int)local_10);
                    do {
                      if (((short *)(uVar17 - uVar18) == param_13) &&
                         ((int)local_24 <= (int)local_8)) {
                        local_1c = psVar1 + (int)((int)local_20 * ((int)param_13 * 2 + 1) +
                                                 (int)param_4) + (int)local_24;
                        psVar6 = local_24;
                        do {
                          iVar10 = (int)*local_1c;
                          if (0 < iVar10) {
                            iVar11 = FUN_006aae60((int)psVar6 + (int)param_5,
                                                  (int)local_20 + (int)param_6,(int)local_c,
                                                  (int)param_8,(int)param_9,(int)param_10);
                            iVar11 = iVar11 + -1 + iVar10;
                            if ((iVar11 < iVar9) ||
                               ((iVar11 == iVar9 &&
                                ((iVar10 < local_18 ||
                                 ((iVar10 == local_18 && ((int)param_3 < (int)local_10)))))))) {
                              local_30 = local_20;
                              param_3 = local_10;
                              iVar9 = iVar11;
                              local_2c = psVar6;
                              local_18 = iVar10;
                            }
                          }
                          psVar6 = (short *)((int)psVar6 + 1);
                          local_1c = local_1c + 1;
                        } while ((int)psVar6 <= (int)local_8);
                      }
                      if ((short *)(((uint)local_24 ^ (int)local_24 >> 0x1f) -
                                   ((int)local_24 >> 0x1f)) == param_13) {
                        psVar6 = (short *)((int)local_20 + 1);
                        iVar10 = (int)param_13 * 2 + 1;
                        local_1c = psVar6;
                        if ((int)psVar6 < (int)local_28) {
                          local_34 = (short *)(iVar10 * 2);
                          local_3c = (short *)((int)psVar6 + (int)param_6);
                          local_1c = psVar1 + (int)((int)psVar6 * iVar10 + (int)param_4) +
                                              (int)local_24;
                          do {
                            iVar10 = (int)*local_1c;
                            if (0 < iVar10) {
                              iVar11 = FUN_006aae60((int)local_24 + (int)param_5,(int)local_3c,
                                                    (int)local_c,(int)param_8,(int)param_9,
                                                    (int)param_10);
                              iVar11 = iVar11 + -1 + iVar10;
                              if ((iVar11 < iVar9) ||
                                 ((iVar11 == iVar9 &&
                                  ((iVar10 < local_18 ||
                                   ((iVar10 == local_18 && ((int)param_3 < (int)local_10)))))))) {
                                local_2c = local_24;
                                param_3 = local_10;
                                iVar9 = iVar11;
                                local_30 = psVar6;
                                local_18 = iVar10;
                              }
                            }
                            local_1c = (short *)((int)local_1c + (int)local_34);
                            psVar6 = (short *)((int)psVar6 + 1);
                            local_3c = (short *)((int)local_3c + 1);
                          } while ((int)psVar6 < (int)local_28);
                        }
                      }
                      if ((short *)(((uint)local_8 ^ (int)local_8 >> 0x1f) - ((int)local_8 >> 0x1f))
                          == param_13) {
                        psVar6 = (short *)((int)local_20 + 1);
                        iVar10 = (int)param_13 * 2 + 1;
                        local_1c = psVar6;
                        if ((int)psVar6 < (int)local_28) {
                          local_34 = (short *)(iVar10 * 2);
                          local_3c = (short *)((int)psVar6 + (int)param_6);
                          local_1c = psVar1 + (int)((int)psVar6 * iVar10 + (int)param_4) +
                                              (int)local_8;
                          do {
                            iVar10 = (int)*local_1c;
                            if (0 < iVar10) {
                              iVar11 = FUN_006aae60((int)local_8 + (int)param_5,(int)local_3c,
                                                    (int)local_c,(int)param_8,(int)param_9,
                                                    (int)param_10);
                              iVar11 = iVar11 + -1 + iVar10;
                              if ((iVar11 < iVar9) ||
                                 ((iVar11 == iVar9 &&
                                  ((iVar10 < local_18 ||
                                   ((iVar10 == local_18 && ((int)param_3 < (int)local_10)))))))) {
                                local_2c = local_8;
                                param_3 = local_10;
                                iVar9 = iVar11;
                                local_30 = psVar6;
                                local_18 = iVar10;
                              }
                            }
                            local_1c = (short *)((int)local_1c + (int)local_34);
                            psVar6 = (short *)((int)psVar6 + 1);
                            local_3c = (short *)((int)local_3c + 1);
                          } while ((int)psVar6 < (int)local_28);
                        }
                      }
                      if (((short *)(((uint)local_28 ^ (int)local_28 >> 0x1f) -
                                    ((int)local_28 >> 0x1f)) == param_13) &&
                         ((int)local_24 <= (int)local_8)) {
                        local_34 = psVar1 + (int)((int)local_28 * ((int)param_13 * 2 + 1) +
                                                 (int)param_4) + (int)local_24;
                        psVar6 = local_24;
                        do {
                          iVar10 = (int)*local_34;
                          if (0 < iVar10) {
                            iVar11 = FUN_006aae60((int)psVar6 + (int)param_5,
                                                  (int)local_28 + (int)param_6,(int)local_c,
                                                  (int)param_8,(int)param_9,(int)param_10);
                            iVar11 = iVar11 + -1 + iVar10;
                            if ((iVar11 < iVar9) ||
                               ((iVar11 == iVar9 &&
                                ((iVar10 < local_18 ||
                                 ((iVar10 == local_18 && ((int)param_3 < (int)local_10)))))))) {
                              local_30 = local_28;
                              param_3 = local_10;
                              iVar9 = iVar11;
                              local_2c = psVar6;
                              local_18 = iVar10;
                            }
                          }
                          psVar6 = (short *)((int)psVar6 + 1);
                          local_34 = local_34 + 1;
                        } while ((int)psVar6 <= (int)local_8);
                      }
                      param_4 = (short *)((int)param_4 + local_38);
                      local_10 = (short *)((int)local_10 + 1);
                      local_c = (short *)((int)local_c + 1);
                    } while ((int)local_10 <= (int)psVar5);
                  }
                  if (0 < iVar26) {
                    local_c = local_20;
                    param_4 = psVar1 + (int)psVar22 * local_38 +
                                       (int)local_20 * ((int)param_13 * 2 + 1);
                    if ((int)local_20 <= (int)local_28) {
                      do {
                        if ((int)local_24 <= (int)local_8) {
                          local_34 = param_4 + (int)local_24;
                          psVar5 = local_24;
                          do {
                            iVar10 = (int)*local_34;
                            if (0 < iVar10) {
                              iVar11 = FUN_006aae60((int)psVar5 + (int)param_5,
                                                    (int)local_c + (int)param_6,iVar26,(int)param_8,
                                                    (int)param_9,(int)param_10);
                              iVar11 = iVar11 + -1 + iVar10;
                              if ((iVar11 < iVar9) ||
                                 ((iVar11 == iVar9 &&
                                  ((iVar10 < local_18 ||
                                   ((iVar10 == local_18 && ((int)param_3 < (int)psVar22)))))))) {
                                local_30 = local_c;
                                iVar9 = iVar11;
                                param_3 = psVar22;
                                local_2c = psVar5;
                                local_18 = iVar10;
                              }
                            }
                            psVar5 = (short *)((int)psVar5 + 1);
                            local_34 = local_34 + 1;
                          } while ((int)psVar5 <= (int)local_8);
                        }
                        param_4 = param_4 + (int)param_13 * 2 + 1;
                        local_c = (short *)((int)local_c + 1);
                      } while ((int)local_c <= (int)local_28);
                    }
                  }
                  if (iVar13 < iVar21) {
                    local_c = local_20;
                    param_4 = psVar1 + (int)local_40 * local_38 +
                                       (int)local_20 * ((int)param_13 * 2 + 1);
                    if ((int)local_20 <= (int)local_28) {
                      do {
                        if ((int)local_24 <= (int)local_8) {
                          local_34 = param_4 + (int)local_24;
                          psVar5 = local_24;
                          do {
                            iVar26 = (int)*local_34;
                            if (0 < iVar26) {
                              iVar21 = FUN_006aae60((int)psVar5 + (int)param_5,
                                                    (int)local_c + (int)param_6,iVar13,(int)param_8,
                                                    (int)param_9,(int)param_10);
                              iVar21 = iVar21 + -1 + iVar26;
                              if ((iVar21 < iVar9) ||
                                 ((iVar21 == iVar9 &&
                                  ((iVar26 < local_18 ||
                                   ((iVar26 == local_18 && ((int)param_3 < (int)local_40)))))))) {
                                local_30 = local_c;
                                param_3 = local_40;
                                iVar9 = iVar21;
                                local_2c = psVar5;
                                local_18 = iVar26;
                              }
                            }
                            psVar5 = (short *)((int)psVar5 + 1);
                            local_34 = local_34 + 1;
                          } while ((int)psVar5 <= (int)local_8);
                        }
                        param_4 = param_4 + (int)param_13 * 2 + 1;
                        local_c = (short *)((int)local_c + 1);
                      } while ((int)local_c <= (int)local_28);
                    }
                  }
                  local_20 = (short *)iVar8;
                  local_18 = iVar24;
                  if (29999 < iVar9) goto LAB_006afb77;
LAB_006af759:
                  iVar8 = (int)param_13 * 2 + 1;
                  iVar24 = (((int)psVar1[(int)local_2c +
                                         (int)local_30 * iVar8 + (int)param_3 * local_38] -
                            (int)*psVar1) + 2) / 3;
                  if ((int)psVar12 < local_18) {
                    psVar5 = (short *)local_18;
                    psVar12 = local_20;
                    if ((int)local_20 <= local_18) goto LAB_006af7b6;
                  }
                  else {
                    psVar5 = local_20;
                    if ((int)psVar12 < (int)local_20) {
LAB_006af7b6:
                      psVar12 = psVar5;
                    }
                  }
                  iVar24 = iVar24 + iVar24 / 2 + 2 + (int)psVar12;
                  local_8 = (short *)iVar24;
                  local_14 = (short *)FUN_006aac70(iVar24 * 8);
                  if (local_14 == (short *)0x0) {
                    return (short *)0x0;
                  }
                  local_54 = FUN_006ae3b0((int)param_12,iVar8,iVar8,iVar8,(int)param_13,
                                          (int)param_13,(int)param_13,(int)local_2c + (int)param_13,
                                          (int)local_30 + (int)param_13,(int)param_3 + (int)param_13
                                          ,(undefined4 *)local_14,iVar24);
                  iVar8 = 0;
                  if (-1 < local_54) {
                    do {
                      sVar3 = (short)param_13;
                      local_14[iVar8 * 4] = local_14[iVar8 * 4] + ((short)param_5 - sVar3);
                      local_14[iVar8 * 4 + 1] = local_14[iVar8 * 4 + 1] + ((short)param_6 - sVar3);
                      local_14[iVar8 * 4 + 2] = local_14[iVar8 * 4 + 2] + ((short)param_7 - sVar3);
                      iVar8 = iVar8 + 1;
                    } while (iVar8 <= local_54);
                  }
                  local_48 = 0;
                  psVar23 = (short *)((int)local_2c + (int)param_5);
                  local_c = (short *)((int)local_30 + (int)param_6);
                  local_10 = (short *)((int)param_3 + (int)param_7);
                  local_54 = local_54 + 1;
                  if (bVar4) goto LAB_006afb77;
                  break;
                }
                if (0 < psVar1[(int)psVar5 + (int)psVar6 * iVar26 + (int)psVar7 * local_38]) {
                  psVar12 = (short *)0x0;
                  bVar4 = true;
                  local_18 = 0;
                  local_20 = (short *)0x0;
                  param_3 = psVar7;
                  local_30 = psVar6;
                  local_2c = psVar5;
                  goto LAB_006af759;
                }
                goto LAB_006afb77;
              }
              uVar2 = (&DAT_007ed576)[local_5c * 4];
              if ((uVar2 & 1) != 0) {
                if (((((local_34[(int)local_2c] & 0xc000U) != 0xc000) &&
                     ((local_34[(int)local_40] & 0xc000U) != 0xc000)) &&
                    (((psVar1[iVar10 + (int)local_2c] & 0xc000U) != 0xc000 &&
                     ((psVar1[iVar10 + (int)local_30] & 0xc000U) != 0xc000)))) &&
                   (((uVar2 & 0x4000) == 0 ||
                    ((((((local_34[-local_44] & 0xc000U) != 0xc000 &&
                        ((local_34[(int)local_2c - local_44] & 0xc000U) != 0xc000)) &&
                       ((local_34[(int)local_40 - local_44] & 0xc000U) != 0xc000)) &&
                      (((local_34[(int)local_40 + (int)local_2c] & 0xc000U) != 0xc000 &&
                       ((psVar1[iVar10 - local_38] & 0xc000U) != 0xc000)))) &&
                     (((psVar1[(int)local_2c + (iVar10 - local_38)] & 0xc000U) != 0xc000 &&
                      (((psVar1[(int)local_30 + (iVar10 - local_38)] & 0xc000U) != 0xc000 &&
                       ((psVar1[iVar10 + (int)local_30 + (int)local_2c] & 0xc000U) != 0xc000))))))))
                   )) {
                  if ((uVar2 & 0x2000) == 0) goto LAB_006aee39;
                  if (((((local_34[local_44] & 0xc000U) != 0xc000) &&
                       ((local_34[(int)local_2c + local_44] & 0xc000U) != 0xc000)) &&
                      ((local_34[local_44 + (int)local_40] & 0xc000U) != 0xc000)) &&
                     ((((local_34[(int)local_40 + (int)local_2c] & 0xc000U) != 0xc000 &&
                       ((psVar1[iVar10 + local_38] & 0xc000U) != 0xc000)) &&
                      (((psVar1[(int)local_2c + iVar10 + local_38] & 0xc000U) != 0xc000 &&
                       ((psVar1[(int)local_30 + iVar10 + local_38] & 0xc000U) != 0xc000)))))) {
                    uVar2 = psVar1[iVar10 + (int)local_30 + (int)local_2c];
                    goto joined_r0x006aee33;
                  }
                }
                goto LAB_006aeee7;
              }
              if (((uVar2 & 0x6000) != 0) && ((uVar2 & 0x9fff) != 0xffe)) {
                if (((local_34[(int)local_24] & 0xc000U) != 0xc000) &&
                   ((psVar1[iVar10 + iVar9] & 0xc000U) != 0xc000)) {
                  if (local_18 == 0) {
                    if ((local_34[(int)local_2c] & 0xc000U) != 0xc000) {
                      uVar2 = psVar1[iVar10 + (int)local_2c];
joined_r0x006aee33:
                      if ((uVar2 & 0xc000) != 0xc000) goto LAB_006aee39;
                    }
                  }
                  else if ((local_34[(int)local_40] & 0xc000U) != 0xc000) {
                    uVar2 = psVar1[iVar10 + (int)local_30];
                    goto joined_r0x006aee33;
                  }
                }
                goto LAB_006aeee7;
              }
LAB_006aee39:
              local_34 = psVar25;
              if ((int)local_8 <= local_54) {
                local_14 = (short *)FUN_006acf50((undefined4 *)local_14,(uint)local_3c);
                if (local_14 == (short *)0x0) {
                  return (short *)0x0;
                }
                local_8 = (short *)((int)local_8 + 10);
                local_3c = local_3c + 0x28;
              }
              local_14[local_54 * 4] = (short)psVar23;
              local_14[local_54 * 4 + 1] = (short)local_c;
              local_14[local_54 * 4 + 2] = (short)local_10;
              local_54 = local_54 + 1;
              local_14[local_54 * 4 + -1] = (&DAT_007ed576)[local_5c * 4];
              if (((psVar23 != param_8) || (local_c != param_9)) || (local_10 != param_10)) {
                local_48 = local_48 + -1;
                psVar25 = (short *)((int)local_1c + -1);
                local_1c = psVar25;
                if (0 < (int)psVar25) goto code_r0x006aeed0;
                break;
              }
              goto LAB_006afb77;
            }
LAB_006aeeda:
          } while (0 < (int)psVar25);
        }
        do {
          do {
            if (local_48 < 1) {
              iVar20 = FUN_006a5f20((int)psVar23,(int)local_c,(int)local_10,(int)param_8,
                                    (int)param_9,(int)param_10,&local_48);
              local_5c = iVar20;
            }
            local_2c = (short *)(int)(short)(&DAT_007ed570)[iVar20 * 4];
            local_18 = (int)(short)(&DAT_007ed572)[iVar20 * 4];
            local_20 = (short *)(int)(short)(&DAT_007ed574)[iVar20 * 4];
            local_48 = local_48 + -1;
          } while (local_48 < 0);
          param_5 = (short *)((int)local_10 * local_44);
          iVar8 = (int)local_c * param_2;
          iVar24 = local_18 * param_2;
          local_24 = (short *)((int)local_20 * local_44);
          param_13 = (short *)((int)local_8 * 8 + 0x50);
          psVar12 = (short *)(param_1 + ((int)(iVar8 + (int)param_5) + (int)psVar23) * 2);
          do {
            psVar23 = (short *)((int)psVar23 + (int)local_2c);
            local_c = (short *)((int)local_c + local_18);
            local_10 = (short *)((int)local_10 + (int)local_20);
            param_5 = (short *)((int)param_5 + (int)local_24);
            iVar8 = iVar8 + iVar24;
            iVar20 = (int)param_5 + iVar8 + (int)psVar23;
            psVar5 = (short *)(param_1 + iVar20 * 2);
            local_34 = psVar5;
            if (*(short *)(param_1 + iVar20 * 2) < 0) {
LAB_006afb6e:
              FUN_006ab060(&local_14);
              goto LAB_006afb77;
            }
            uVar2 = (&DAT_007ed576)[local_5c * 4];
            if ((uVar2 & 1) != 0) {
              if ((((psVar12[(int)local_2c] & 0xc000U) != 0xc000) &&
                  ((psVar12[iVar24] & 0xc000U) != 0xc000)) &&
                 (((uVar2 & 0x4000) == 0 ||
                  ((((psVar12[-local_44] & 0xc000U) != 0xc000 &&
                    ((psVar12[(int)local_2c - local_44] & 0xc000U) != 0xc000)) &&
                   (((psVar12[iVar24 - local_44] & 0xc000U) != 0xc000 &&
                    ((psVar12[(int)((int)local_2c + iVar24)] & 0xc000U) != 0xc000)))))))) {
                if ((uVar2 & 0x2000) == 0) goto LAB_006afabf;
                if ((((psVar12[local_44] & 0xc000U) != 0xc000) &&
                    ((psVar12[local_44 + (int)local_2c] & 0xc000U) != 0xc000)) &&
                   ((psVar12[local_44 + iVar24] & 0xc000U) != 0xc000)) {
                  psVar6 = (short *)((int)local_2c + iVar24);
                  goto LAB_006afa93;
                }
              }
              goto LAB_006afb6e;
            }
            if (((uVar2 & 0x6000) != 0) && ((uVar2 & 0x9fff) != 0xffe)) {
              if ((psVar12[(int)local_24] & 0xc000U) != 0xc000) {
                psVar6 = local_2c;
                if (local_18 == 0) {
LAB_006afa93:
                  uVar2 = psVar12[(int)psVar6];
                }
                else {
                  uVar2 = psVar12[iVar24];
                }
                if ((uVar2 & 0xc000) != 0xc000) goto LAB_006afabf;
              }
              goto LAB_006afb6e;
            }
LAB_006afabf:
            if ((int)local_8 <= local_54) {
              local_14 = (short *)FUN_006acf50((undefined4 *)local_14,(uint)param_13);
              if (local_14 == (short *)0x0) {
                return (short *)0x0;
              }
              local_8 = (short *)((int)local_8 + 10);
              param_13 = param_13 + 0x28;
            }
            local_14[local_54 * 4] = (short)psVar23;
            local_14[local_54 * 4 + 1] = (short)local_c;
            local_14[local_54 * 4 + 2] = (short)local_10;
            local_54 = local_54 + 1;
            local_14[local_54 * 4 + -1] = (&DAT_007ed576)[local_5c * 4];
            if (((psVar23 == param_8) && (local_c == param_9)) && (local_10 == param_10))
            goto LAB_006afb77;
            local_48 = local_48 + -1;
            iVar20 = local_5c;
            psVar12 = psVar5;
          } while (-1 < local_48);
        } while( true );
      }
      local_54 = 2;
      local_14[4] = (short)param_8;
      local_14[5] = (short)param_9;
      local_14[6] = (short)param_10;
      local_14[7] = 0;
LAB_006afb77:
      if (local_14 != (short *)0x0) {
        *param_11 = local_54;
        return local_14;
      }
    }
  }
  return (short *)0x0;
code_r0x006aeed0:
  if (local_48 < 1) goto LAB_006aeeda;
  goto LAB_006aea95;
}

