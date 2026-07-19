
short * FUN_006a9190(int param_1,int param_2,int param_3,int param_4,short *param_5,short *param_6,
                    short *param_7,short *param_8,short *param_9,short *param_10,int param_11,
                    int *param_12,undefined4 *param_13,short *param_14,uint param_15)

{
  short *psVar1;
  ushort uVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  short *psVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  short *psVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  short *psVar24;
  short sVar25;
  short *psVar26;
  short sVar27;
  int iVar28;
  short *psVar29;
  int iVar30;
  undefined4 *puVar31;
  int local_94;
  int local_90;
  int local_80;
  int local_68;
  int local_60;
  int local_58;
  int local_54;
  int local_50;
  short *local_4c;
  int local_48;
  short *local_44;
  short *local_40;
  short *local_3c;
  short *local_38;
  short *local_34;
  short *local_30;
  short *local_2c;
  short *local_28;
  short *local_24;
  int local_20;
  short *local_1c;
  short *local_18;
  short *local_14;
  short *local_10;
  short *local_c;
  short *local_8;
  
  *param_12 = 0;
  if ((((((((int)param_5 < 0) || (param_2 <= (int)param_5)) || ((int)param_6 < 0)) ||
        ((param_3 <= (int)param_6 || ((int)param_7 < 0)))) || (param_4 <= (int)param_7)) ||
      (((int)param_8 < 0 || (param_2 <= (int)param_8)))) ||
     (((int)param_9 < 0 ||
      (((param_3 <= (int)param_9 || ((int)param_10 < 0)) || (param_4 <= (int)param_10)))))) {
    return (short *)0x0;
  }
  local_48 = param_2 * param_3;
  psVar6 = (short *)((int)param_8 - (int)param_5);
  uVar19 = (int)psVar6 >> 0x1f;
  iVar12 = ((uint)psVar6 ^ uVar19) - uVar19;
  psVar7 = (short *)((int)param_9 - (int)param_6);
  uVar20 = (int)psVar7 >> 0x1f;
  psVar8 = (short *)((int)param_10 - (int)param_7);
  iVar28 = ((uint)psVar7 ^ uVar20) - uVar20;
  uVar21 = (int)psVar8 >> 0x1f;
  iVar9 = ((uint)psVar8 ^ uVar21) - uVar21;
  iVar14 = iVar9;
  if (iVar12 < iVar28) {
    if (iVar9 <= iVar28) {
      iVar14 = iVar28;
    }
  }
  else if (iVar9 <= iVar12) {
    iVar14 = iVar12;
  }
  uVar13 = param_15 & 4;
  if (uVar13 != 0) {
    iVar14 = iVar14 * 2;
  }
  local_40 = (short *)(iVar14 + 8);
  uVar16 = (int)local_40 * 9;
  local_8 = (short *)FUN_006aac70((int)local_40 * 0x48);
  if (local_8 != (short *)0x0) {
    psVar29 = local_8;
    for (iVar14 = (uVar16 & 0x1fffffff) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
      psVar29[0] = -1;
      psVar29[1] = -1;
      psVar29 = psVar29 + 2;
    }
    local_1c = (short *)0x1;
    for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
      *(undefined1 *)psVar29 = 0xff;
      psVar29 = (short *)((int)psVar29 + 1);
    }
    local_94 = -1;
    sVar27 = (short)param_5;
    *local_8 = sVar27;
    sVar25 = (short)param_6;
    local_8[1] = sVar25;
    local_c = param_7;
    sVar5 = (short)param_7;
    local_8[2] = sVar5;
    local_54 = 0;
    local_60 = 0;
    bVar3 = false;
    iVar14 = FUN_006aadd0((int)param_5,(int)param_6,(int)param_7,(int)param_8,(int)param_9,
                          (int)param_10);
    if (param_11 < iVar14) {
      psVar26 = param_6;
      psVar29 = param_5;
      if ((param_13 != (undefined4 *)0x0) && (0 < (int)param_14)) {
        iVar14 = (int)param_14 * 2 + 1;
        local_3c = param_14;
        local_50 = iVar14 * iVar14;
        psVar1 = (short *)((int)param_13 + (local_50 + 1 + iVar14) * (int)param_14 * 2);
        if (((iVar12 <= (int)param_14) && ((iVar28 <= (int)param_14 && (iVar9 <= (int)param_14))))
           && (iVar14 = (((int)psVar8 * local_50 + (int)psVar7 * iVar14) - (int)param_5) +
                        (int)param_8, psVar1[iVar14] == -3)) {
          psVar1[iVar14] = 0;
        }
LAB_006a9383:
        if (uVar13 == 0) {
          local_60 = FUN_006a5f20((int)psVar29,(int)psVar26,(int)local_c,(int)param_8,(int)param_9,
                                  (int)param_10,&local_54);
        }
        else {
          local_60 = FUN_006a6100((int)psVar29,(int)psVar26,(int)local_c,(int)param_8,(int)param_9,
                                  (int)param_10,&local_54);
        }
        if (local_60 < 0x1a) {
          if ((-1 < local_94) && (local_94 != local_60)) {
            local_8[(int)local_1c * 0x24] = (short)psVar29;
            local_8[(int)local_1c * 0x24 + 1] = (short)psVar26;
            local_8[(int)local_1c * 0x24 + 2] = (short)local_c;
            local_1c = (short *)((int)local_1c + 1);
          }
          local_10 = (short *)(int)(short)(&DAT_007ed570)[local_60 * 4];
          local_44 = (short *)(int)(short)(&DAT_007ed572)[local_60 * 4];
          local_20 = (int)(short)(&DAT_007ed574)[local_60 * 4];
          local_94 = local_60;
          if (0 < local_54) {
            local_90 = (int)local_c * local_48;
            local_34 = (short *)((int)psVar26 * param_2);
            iVar22 = (int)((int)local_34 + local_90) + (int)psVar29;
            local_68 = (int)local_1c * 0x48;
            local_14 = (short *)((int)local_40 * 0x48);
            local_4c = (short *)((int)local_1c + 1);
            iVar14 = (int)param_14 * 2 + 1;
            iVar30 = local_50 * (int)param_7;
            local_28 = (short *)(local_50 * (int)local_c);
            local_18 = (short *)((int)local_44 * param_2);
            local_38 = (short *)(iVar14 * (int)local_44);
            local_24 = (short *)(local_20 * local_48);
            local_2c = (short *)(iVar14 * (int)psVar26);
            iVar23 = local_50 * local_20;
            do {
              local_58 = param_1 + iVar22 * 2;
              psVar26 = (short *)((int)psVar26 + (int)local_44);
              local_30 = psVar1 + (int)local_2c +
                                  (int)local_28 + ((-(int)param_5 - iVar30) - iVar14 * (int)param_6)
                                  + (int)psVar29;
              psVar29 = (short *)((int)psVar29 + (int)local_10);
              local_2c = (short *)((int)local_2c + (int)local_38);
              local_34 = (short *)((int)local_34 + (int)local_18);
              local_c = (short *)((int)local_c + local_20);
              local_28 = (short *)((int)local_28 + iVar23);
              local_90 = local_90 + (int)local_24;
              iVar22 = local_90 + (int)local_34 + (int)psVar29;
              if ((*(short *)(param_1 + iVar22 * 2) < 0) ||
                 (psVar1[(int)local_2c +
                         (int)local_28 + ((-(int)param_5 - iVar30) - iVar14 * (int)param_6) +
                         (int)psVar29] < 0)) {
LAB_006a9964:
                FUN_006ab060(&local_8);
                goto LAB_006a9970;
              }
              uVar2 = (&DAT_007ed576)[local_60 * 4];
              if ((uVar2 & 1) == 0) {
                if (((uVar2 & 0x6000) != 0) && ((uVar2 & 0x9fff) != 0xffe)) {
                  if (((*(ushort *)(local_58 + (int)local_24 * 2) & 0xc000) != 0xc000) &&
                     ((local_30[iVar23] & 0xc000U) != 0xc000)) {
                    if (local_44 == (short *)0x0) {
                      if ((*(ushort *)(local_58 + (int)local_10 * 2) & 0xc000) != 0xc000) {
                        uVar2 = local_30[(int)local_10];
joined_r0x006a9883:
                        if ((uVar2 & 0xc000) != 0xc000) goto LAB_006a9889;
                      }
                    }
                    else if ((*(ushort *)(local_58 + (int)local_18 * 2) & 0xc000) != 0xc000) {
                      uVar2 = local_30[(int)local_38];
                      goto joined_r0x006a9883;
                    }
                  }
                  goto LAB_006a9964;
                }
              }
              else if (((((((*(ushort *)(local_58 + (int)local_10 * 2) & 0xc000) == 0xc000) ||
                          ((*(ushort *)(local_58 + (int)local_18 * 2) & 0xc000) == 0xc000)) ||
                         ((local_30[(int)local_10] & 0xc000U) == 0xc000)) ||
                        ((local_30[(int)local_38] & 0xc000U) == 0xc000)) ||
                       (((uVar2 & 0x4000) != 0 &&
                        (((((*(ushort *)(local_58 + local_48 * -2) & 0xc000) == 0xc000 ||
                           ((*(ushort *)(local_58 + ((int)local_10 - local_48) * 2) & 0xc000) ==
                            0xc000)) ||
                          (((*(ushort *)(local_58 + ((int)local_18 - local_48) * 2) & 0xc000) ==
                            0xc000 ||
                           (((*(ushort *)(local_58 + ((int)local_18 + (int)local_10) * 2) & 0xc000)
                             == 0xc000 || ((local_30[-local_50] & 0xc000U) == 0xc000)))))) ||
                         (((local_30[(int)local_10 - local_50] & 0xc000U) == 0xc000 ||
                          (((local_30[(int)local_38 - local_50] & 0xc000U) == 0xc000 ||
                           ((local_30[(int)local_38 + (int)local_10] & 0xc000U) == 0xc000))))))))))
                      || (((uVar2 & 0x2000) != 0 &&
                          ((((((*(ushort *)(local_58 + local_48 * 2) & 0xc000) == 0xc000 ||
                              ((*(ushort *)(local_58 + ((int)local_10 + local_48) * 2) & 0xc000) ==
                               0xc000)) ||
                             ((*(ushort *)(local_58 + (local_48 + (int)local_18) * 2) & 0xc000) ==
                              0xc000)) ||
                            (((*(ushort *)(local_58 + ((int)local_18 + (int)local_10) * 2) & 0xc000)
                              == 0xc000 || ((local_30[local_50] & 0xc000U) == 0xc000)))) ||
                           (((local_30[local_50 + (int)local_10] & 0xc000U) == 0xc000 ||
                            (((local_30[local_50 + (int)local_38] & 0xc000U) == 0xc000 ||
                             ((local_30[(int)local_38 + (int)local_10] & 0xc000U) == 0xc000)))))))))
                      ) goto LAB_006a9964;
LAB_006a9889:
              if ((int)local_40 <= (int)local_4c) {
                local_8 = (short *)FUN_006acf50((undefined4 *)local_8,(uint)(local_14 + 0x168));
                if (local_8 == (short *)0x0) goto LAB_006aabfc;
                puVar31 = (undefined4 *)((int)local_8 + (int)local_14);
                for (iVar15 = 0xb4; iVar15 != 0; iVar15 = iVar15 + -1) {
                  *puVar31 = 0xffffffff;
                  puVar31 = puVar31 + 1;
                }
                local_40 = local_40 + 5;
                local_14 = local_14 + 0x168;
              }
              *(short *)(local_68 + (int)local_8) = (short)psVar29;
              local_1c = (short *)((int)local_1c + 1);
              *(short *)(local_68 + 2 + (int)local_8) = (short)psVar26;
              *(short *)(local_68 + 4 + (int)local_8) = (short)local_c;
              local_68 = local_68 + 0x48;
              local_4c = (short *)((int)local_4c + 1);
              iVar15 = FUN_006aadd0((int)psVar29,(int)psVar26,(int)local_c,(int)param_8,(int)param_9
                                    ,(int)param_10);
              bVar3 = iVar15 <= param_11;
              if (bVar3) goto LAB_006a9949;
              local_54 = local_54 + -1;
              local_3c = (short *)((int)local_3c + -1);
              if (((int)local_3c < 1) || (local_54 < 1)) goto LAB_006a9949;
            } while( true );
          }
          goto LAB_006a9954;
        }
LAB_006a9970:
        local_24 = param_14;
        if ((int)param_5 < (int)param_14) {
          local_24 = param_5;
        }
        local_24 = (short *)-(int)local_24;
        local_28 = param_14;
        if (param_2 <= (int)param_5 + (int)param_14) {
          local_28 = (short *)((param_2 - (int)param_5) - 1);
        }
        local_18 = param_14;
        if ((int)param_6 < (int)param_14) {
          local_18 = param_6;
        }
        local_18 = (short *)-(int)local_18;
        local_2c = param_14;
        if (param_3 <= (int)param_6 + (int)param_14) {
          local_2c = (short *)((param_3 - (int)param_6) - 1);
        }
        psVar29 = param_14;
        if ((int)param_7 < (int)param_14) {
          psVar29 = param_7;
        }
        psVar10 = (short *)-(int)psVar29;
        psVar26 = param_14;
        if (param_4 <= (int)param_7 + (int)param_14) {
          psVar26 = (short *)((param_4 - (int)param_7) - 1);
        }
        if ((int)psVar29 < (int)param_14) {
          FUN_006ce6c0(param_13,((int)psVar10 + (int)param_14) * local_50,0xffff);
        }
        if ((int)psVar26 < (int)param_14) {
          FUN_006ce6c0((undefined4 *)
                       ((int)param_13 + ((int)psVar26 + 1U + (int)param_14) * local_50 * 2),
                       ((int)param_14 - (int)psVar26) * local_50,0xffff);
        }
        iVar14 = local_48;
        if ((short *)-(int)psVar26 == psVar29 || (int)psVar10 < (int)psVar26) {
          iVar22 = -(int)local_18;
          local_34 = (short *)(local_50 * 2);
          local_4c = psVar1 + (int)psVar10 * local_50 + (int)local_18 * ((int)param_14 * 2 + 1);
          local_30 = (short *)((int)param_13 + ((int)psVar10 + (int)param_14) * local_50 * 2);
          iVar23 = (int)psVar26 + (int)psVar29 + 1;
          local_3c = (short *)(param_1 +
                              ((int)param_5 +
                              ((int)local_18 + (int)param_6) * param_2 +
                              ((int)psVar10 + (int)param_7) * local_48) * 2);
          do {
            if (iVar22 < (int)param_14) {
              FUN_006ce6c0((undefined4 *)local_30,
                           ((int)local_18 + (int)param_14) * ((int)param_14 * 2 + 1),0xffff);
            }
            if ((int)local_2c < (int)param_14) {
              iVar30 = (int)param_14 * 2 + 1;
              FUN_006ce6c0((undefined4 *)(local_30 + ((int)local_2c + 1U + (int)param_14) * iVar30),
                           ((int)param_14 - (int)local_2c) * iVar30,0xffff);
            }
            if ((int)local_18 <= (int)local_2c) {
              iVar30 = (int)local_2c + (1 - (int)local_18);
              psVar24 = local_4c;
              psVar29 = local_3c;
              do {
                if ((-(int)local_24 < (int)param_14) && (-(int)param_14 < (int)local_24)) {
                  psVar18 = psVar24 + -(int)param_14;
                  for (uVar16 = (uint)((int)local_24 + (int)param_14) >> 1; uVar16 != 0;
                      uVar16 = uVar16 - 1) {
                    psVar18[0] = -1;
                    psVar18[1] = -1;
                    psVar18 = psVar18 + 2;
                  }
                  for (uVar16 = (uint)(((int)local_24 + (int)param_14 & 1U) != 0); uVar16 != 0;
                      uVar16 = uVar16 - 1) {
                    *psVar18 = -1;
                    psVar18 = psVar18 + 1;
                  }
                }
                if (((int)local_28 < (int)param_14) &&
                   (iVar15 = (int)local_28 + 1, iVar15 <= (int)param_14)) {
                  uVar16 = (int)param_14 + (1 - iVar15);
                  psVar18 = psVar24 + iVar15;
                  for (uVar17 = uVar16 >> 1; uVar17 != 0; uVar17 = uVar17 - 1) {
                    psVar18[0] = -1;
                    psVar18[1] = -1;
                    psVar18 = psVar18 + 2;
                  }
                  for (uVar16 = (uint)((uVar16 & 1) != 0); uVar16 != 0; uVar16 = uVar16 - 1) {
                    *psVar18 = -1;
                    psVar18 = psVar18 + 1;
                  }
                }
                if ((int)local_24 <= (int)local_28) {
                  psVar18 = psVar24 + (int)local_24;
                  iVar15 = (int)local_28 + (1 - (int)local_24);
                  do {
                    if (*psVar18 == 0) {
                      *psVar18 = *(short *)(((int)psVar29 - (int)psVar24) + (int)psVar18);
                    }
                    psVar18 = psVar18 + 1;
                    iVar15 = iVar15 + -1;
                  } while (iVar15 != 0);
                }
                iVar30 = iVar30 + -1;
                psVar29 = psVar29 + param_2;
                psVar24 = psVar24 + (int)param_14 * 2 + 1;
              } while (iVar30 != 0);
            }
            local_3c = local_3c + iVar14;
            local_30 = (short *)((int)local_30 + (int)local_34);
            local_4c = (short *)((int)local_4c + (int)local_34);
            iVar23 = iVar23 + -1;
          } while (iVar23 != 0);
        }
        iVar14 = (int)param_14 * 2 + 1;
        iVar22 = FUN_006ab090((int)param_13,iVar14,iVar14,iVar14,(int)param_14,(int)param_14,
                              (int)param_14,-1,-1,-1);
        if (iVar22 != 0) {
          RaiseInternalException(-2,DAT_007ed77c,s_E__DKW_WAY_C__chkway3_cpp_007ed730,0x116);
          return (short *)0x0;
        }
        if ((((int)param_14 < (int)(((uint)psVar6 ^ uVar19) - uVar19)) ||
            ((int)param_14 < (int)(((uint)psVar7 ^ uVar20) - uVar20))) ||
           ((int)param_14 < (int)(((uint)psVar8 ^ uVar21) - uVar21))) {
          iVar22 = 32000;
          iVar14 = (int)psVar10 + (int)param_7;
          local_20 = 32000;
          local_44 = (short *)0x0;
          local_38 = (short *)0x0;
          local_10 = (short *)0x0;
          local_c = (short *)((int)psVar10 + 1);
          if (iVar14 < 1) {
            local_c = psVar10;
          }
          iVar23 = (int)psVar26 + (int)param_7;
          psVar6 = psVar26;
          if (iVar23 < param_4 + -1) {
            psVar6 = (short *)((int)psVar26 - 1);
          }
          if ((int)local_c <= (int)psVar6) {
            uVar20 = (int)local_18 >> 0x1f;
            uVar19 = (uint)local_18 ^ uVar20;
            local_14 = (short *)((int)local_c + (int)param_7);
            local_30 = (short *)(local_50 * (int)local_c);
            do {
              if (((short *)(uVar19 - uVar20) == param_14) && ((int)local_24 <= (int)local_28)) {
                local_3c = psVar1 + (int)((int)local_18 * ((int)param_14 * 2 + 1) + (int)local_30) +
                                    (int)local_24;
                psVar7 = local_24;
                do {
                  iVar30 = (int)*local_3c;
                  if (0 < iVar30) {
                    iVar15 = FUN_006aae60((int)psVar7 + (int)param_5,(int)local_18 + (int)param_6,
                                          (int)local_14,(int)param_8,(int)param_9,(int)param_10);
                    iVar15 = iVar15 + -1 + iVar30;
                    if ((iVar15 < iVar22) ||
                       ((iVar15 == iVar22 &&
                        ((iVar30 < local_20 ||
                         ((iVar30 == local_20 && ((int)local_10 < (int)local_c)))))))) {
                      local_38 = local_18;
                      local_10 = local_c;
                      iVar22 = iVar15;
                      local_44 = psVar7;
                      local_20 = iVar30;
                    }
                  }
                  psVar7 = (short *)((int)psVar7 + 1);
                  local_3c = local_3c + 1;
                } while ((int)psVar7 <= (int)local_28);
              }
              if ((short *)(((uint)local_24 ^ (int)local_24 >> 0x1f) - ((int)local_24 >> 0x1f)) ==
                  param_14) {
                psVar7 = (short *)((int)local_18 + 1);
                iVar30 = (int)param_14 * 2 + 1;
                if ((int)psVar7 < (int)local_2c) {
                  local_34 = (short *)(iVar30 * 2);
                  local_4c = (short *)((int)psVar7 + (int)param_6);
                  local_3c = psVar1 + (int)((int)psVar7 * iVar30 + (int)local_30) + (int)local_24;
                  do {
                    iVar30 = (int)*local_3c;
                    if (0 < iVar30) {
                      iVar15 = FUN_006aae60((int)local_24 + (int)param_5,(int)local_4c,(int)local_14
                                            ,(int)param_8,(int)param_9,(int)param_10);
                      iVar15 = iVar15 + -1 + iVar30;
                      if ((iVar15 < iVar22) ||
                         ((iVar15 == iVar22 &&
                          ((iVar30 < local_20 ||
                           ((iVar30 == local_20 && ((int)local_10 < (int)local_c)))))))) {
                        local_44 = local_24;
                        local_10 = local_c;
                        iVar22 = iVar15;
                        local_38 = psVar7;
                        local_20 = iVar30;
                      }
                    }
                    local_3c = (short *)((int)local_3c + (int)local_34);
                    psVar7 = (short *)((int)psVar7 + 1);
                    local_4c = (short *)((int)local_4c + 1);
                  } while ((int)psVar7 < (int)local_2c);
                }
              }
              if ((short *)(((uint)local_28 ^ (int)local_28 >> 0x1f) - ((int)local_28 >> 0x1f)) ==
                  param_14) {
                iVar30 = (int)param_14 * 2 + 1;
                psVar7 = (short *)((int)local_18 + 1);
                if ((int)psVar7 < (int)local_2c) {
                  local_34 = (short *)(iVar30 * 2);
                  local_4c = (short *)((int)psVar7 + (int)param_6);
                  local_3c = psVar1 + (int)((int)psVar7 * iVar30 + (int)local_30) + (int)local_28;
                  do {
                    iVar30 = (int)*local_3c;
                    if (0 < iVar30) {
                      iVar15 = FUN_006aae60((int)local_28 + (int)param_5,(int)local_4c,(int)local_14
                                            ,(int)param_8,(int)param_9,(int)param_10);
                      iVar15 = iVar15 + -1 + iVar30;
                      if ((iVar15 < iVar22) ||
                         ((iVar15 == iVar22 &&
                          ((iVar30 < local_20 ||
                           ((iVar30 == local_20 && ((int)local_10 < (int)local_c)))))))) {
                        local_44 = local_28;
                        local_10 = local_c;
                        iVar22 = iVar15;
                        local_38 = psVar7;
                        local_20 = iVar30;
                      }
                    }
                    local_3c = (short *)((int)local_3c + (int)local_34);
                    psVar7 = (short *)((int)psVar7 + 1);
                    local_4c = (short *)((int)local_4c + 1);
                  } while ((int)psVar7 < (int)local_2c);
                }
              }
              if (((short *)(((uint)local_2c ^ (int)local_2c >> 0x1f) - ((int)local_2c >> 0x1f)) ==
                   param_14) && ((int)local_24 <= (int)local_28)) {
                local_34 = psVar1 + (int)((int)local_2c * ((int)param_14 * 2 + 1) + (int)local_30) +
                                    (int)local_24;
                psVar7 = local_24;
                do {
                  iVar30 = (int)*local_34;
                  if (0 < iVar30) {
                    iVar15 = FUN_006aae60((int)psVar7 + (int)param_5,(int)local_2c + (int)param_6,
                                          (int)local_14,(int)param_8,(int)param_9,(int)param_10);
                    iVar15 = iVar15 + -1 + iVar30;
                    if ((iVar15 < iVar22) ||
                       ((iVar15 == iVar22 &&
                        ((iVar30 < local_20 ||
                         ((iVar30 == local_20 && ((int)local_10 < (int)local_c)))))))) {
                      local_38 = local_2c;
                      local_10 = local_c;
                      iVar22 = iVar15;
                      local_44 = psVar7;
                      local_20 = iVar30;
                    }
                  }
                  psVar7 = (short *)((int)psVar7 + 1);
                  local_34 = local_34 + 1;
                } while ((int)psVar7 <= (int)local_28);
              }
              local_30 = (short *)((int)local_30 + local_50);
              local_c = (short *)((int)local_c + 1);
              local_14 = (short *)((int)local_14 + 1);
            } while ((int)local_c <= (int)psVar6);
          }
          psVar6 = local_18;
          psVar7 = local_24;
          if (0 < iVar14) {
            local_14 = local_18;
            local_30 = psVar1 + (int)psVar10 * local_50 + (int)local_18 * ((int)param_14 * 2 + 1);
            psVar8 = local_24;
            psVar29 = local_28;
            if ((int)local_18 <= (int)local_2c) {
              do {
                psVar7 = psVar8;
                if ((int)psVar8 <= (int)psVar29) {
                  local_34 = local_30 + (int)psVar8;
                  do {
                    iVar30 = (int)*local_34;
                    if (0 < iVar30) {
                      iVar15 = FUN_006aae60((int)psVar8 + (int)param_5,(int)local_14 + (int)param_6,
                                            iVar14,(int)param_8,(int)param_9,(int)param_10);
                      iVar15 = iVar15 + -1 + iVar30;
                      if ((iVar15 < iVar22) ||
                         ((iVar15 == iVar22 &&
                          ((iVar30 < local_20 ||
                           ((iVar30 == local_20 && ((int)local_10 < (int)psVar10)))))))) {
                        local_38 = local_14;
                        iVar22 = iVar15;
                        local_44 = psVar8;
                        local_20 = iVar30;
                        local_10 = psVar10;
                      }
                    }
                    psVar8 = (short *)((int)psVar8 + 1);
                    local_34 = local_34 + 1;
                    psVar6 = local_18;
                    psVar7 = local_24;
                    psVar29 = local_28;
                  } while ((int)psVar8 <= (int)local_28);
                }
                local_30 = local_30 + (int)param_14 * 2 + 1;
                local_14 = (short *)((int)local_14 + 1);
                psVar8 = psVar7;
              } while ((int)local_14 <= (int)local_2c);
            }
          }
          if ((iVar23 < param_4 + -1) &&
             (local_30 = psVar1 + (int)psVar26 * local_50 + (int)psVar6 * ((int)param_14 * 2 + 1),
             psVar8 = local_28, local_14 = psVar6, (int)psVar6 <= (int)local_2c)) {
            do {
              psVar6 = psVar7;
              if ((int)psVar7 <= (int)psVar8) {
                local_34 = local_30 + (int)psVar7;
                do {
                  iVar14 = (int)*local_34;
                  if (0 < iVar14) {
                    iVar30 = FUN_006aae60((int)psVar7 + (int)param_5,(int)local_14 + (int)param_6,
                                          iVar23,(int)param_8,(int)param_9,(int)param_10);
                    iVar30 = iVar30 + -1 + iVar14;
                    if ((iVar30 < iVar22) ||
                       ((iVar30 == iVar22 &&
                        ((iVar14 < local_20 ||
                         ((iVar14 == local_20 && ((int)local_10 < (int)psVar26)))))))) {
                      local_38 = local_14;
                      iVar22 = iVar30;
                      local_44 = psVar7;
                      local_20 = iVar14;
                      local_10 = psVar26;
                    }
                  }
                  psVar7 = (short *)((int)psVar7 + 1);
                  local_34 = local_34 + 1;
                  psVar8 = local_28;
                  psVar6 = local_24;
                } while ((int)psVar7 <= (int)local_28);
              }
              local_30 = local_30 + (int)param_14 * 2 + 1;
              local_14 = (short *)((int)local_14 + 1);
              psVar7 = psVar6;
            } while ((int)local_14 <= (int)local_2c);
          }
          if (29999 < iVar22) goto LAB_006aa758;
LAB_006aa1e6:
          local_20 = iVar9;
          psVar6 = local_44;
          iVar14 = (int)local_40 +
                   (((int)psVar1[(int)local_44 +
                                 (int)local_38 * ((int)param_14 * 2 + 1) + (int)local_10 * local_50]
                    - (int)*psVar1) + 2) / 3;
          if (iVar12 < iVar28) {
            iVar12 = local_20;
            if (local_20 <= iVar28) {
              iVar12 = iVar28;
            }
          }
          else if (iVar12 < local_20) {
            iVar12 = local_20;
          }
          if (uVar13 != 0) {
            iVar12 = iVar12 * 2;
          }
          local_40 = (short *)(iVar14 + iVar14 / 2 + 8 + iVar12);
          uVar19 = (int)local_40 * 9;
          local_8 = (short *)FUN_006aac70((int)local_40 * 0x48);
          if (local_8 == (short *)0x0) goto LAB_006aabfc;
          psVar7 = local_8;
          for (iVar14 = (uVar19 & 0x1fffffff) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
            psVar7[0] = -1;
            psVar7[1] = -1;
            psVar7 = psVar7 + 2;
          }
          for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
            *(undefined1 *)psVar7 = 0xff;
            psVar7 = (short *)((int)psVar7 + 1);
          }
          iVar14 = (int)param_14 * 2 + 1;
          iVar14 = FUN_006a7d50((int)param_13,iVar14,iVar14,iVar14,(int)param_14,(int)param_14,
                                (int)param_14,(int)psVar6 + (int)param_14,
                                (int)local_38 + (int)param_14,(int)local_10 + (int)param_14,
                                (undefined4 *)local_8,(int)local_40,param_15);
          if (-1 < iVar14) {
            iVar12 = iVar14 + 1;
            iVar9 = 0;
            do {
              sVar4 = (short)param_14;
              *(short *)(iVar9 + (int)local_8) = *(short *)(iVar9 + (int)local_8) + (sVar27 - sVar4)
              ;
              psVar6 = (short *)(iVar9 + 2 + (int)local_8);
              *psVar6 = *psVar6 + (sVar25 - sVar4);
              psVar6 = (short *)(iVar9 + 4 + (int)local_8);
              *psVar6 = *psVar6 + (sVar5 - sVar4);
              iVar12 = iVar12 + -1;
              iVar9 = iVar9 + 0x48;
            } while (iVar12 != 0);
          }
          local_54 = 0;
          psVar29 = (short *)((int)local_44 + (int)param_5);
          psVar26 = (short *)((int)local_38 + (int)param_6);
          local_c = (short *)((int)local_10 + (int)param_7);
          local_1c = (short *)(iVar14 + 1);
          if (bVar3) goto LAB_006aa758;
          goto LAB_006aa329;
        }
        local_44 = psVar6;
        local_38 = psVar7;
        local_10 = psVar8;
        if (0 < psVar1[(int)psVar6 + (int)psVar7 * iVar14 + (int)psVar8 * local_50]) {
          iVar28 = 0;
          bVar3 = true;
          iVar12 = 0;
          local_20 = 0;
          iVar9 = local_20;
          goto LAB_006aa1e6;
        }
        goto LAB_006aa758;
      }
LAB_006aa329:
      do {
        psVar6 = local_c;
        if (local_54 < 1) {
          if (uVar13 == 0) {
            local_60 = FUN_006a5f20((int)psVar29,(int)psVar26,(int)local_c,(int)param_8,(int)param_9
                                    ,(int)param_10,&local_54);
          }
          else {
            local_60 = FUN_006a6100((int)psVar29,(int)psVar26,(int)local_c,(int)param_8,(int)param_9
                                    ,(int)param_10,&local_54);
          }
        }
        if (0x19 < local_60) {
          FUN_006ab060(&local_8);
          break;
        }
        if ((-1 < local_94) && (local_94 != local_60)) {
          local_8[(int)local_1c * 0x24] = (short)psVar29;
          local_8[(int)local_1c * 0x24 + 1] = (short)psVar26;
          local_8[(int)local_1c * 0x24 + 2] = (short)psVar6;
          local_1c = (short *)((int)local_1c + 1);
        }
        local_10 = (short *)(int)(short)(&DAT_007ed570)[local_60 * 4];
        local_44 = (short *)(int)(short)(&DAT_007ed572)[local_60 * 4];
        local_20 = (int)(short)(&DAT_007ed574)[local_60 * 4];
        local_54 = local_54 + -1;
        if (-1 < local_54) {
          param_7 = (short *)((int)psVar6 * local_48);
          param_14 = (short *)((int)psVar26 * param_2);
          iVar14 = (int)((int)param_14 + (int)param_7) + (int)psVar29;
          local_18 = (short *)((int)local_44 * param_2);
          param_5 = (short *)((int)local_40 * 0x48);
          local_24 = (short *)(local_20 * local_48);
          param_13 = (undefined4 *)((int)local_1c * 0x48);
          param_6 = local_1c;
          do {
            local_58 = param_1 + iVar14 * 2;
            param_6 = (short *)((int)param_6 + 1);
            psVar29 = (short *)((int)psVar29 + (int)local_10);
            psVar26 = (short *)((int)psVar26 + (int)local_44);
            param_14 = (short *)((int)param_14 + (int)local_18);
            local_c = (short *)((int)local_c + local_20);
            param_7 = (short *)((int)param_7 + (int)local_24);
            iVar14 = (int)param_7 + (int)param_14 + (int)psVar29;
            if (*(short *)(param_1 + iVar14 * 2) < 0) {
              if (((psVar29 != param_8) || (psVar26 != param_9)) || (local_c != param_10)) {
LAB_006aa71a:
                FUN_006ab060(&local_8);
              }
              goto LAB_006aa758;
            }
            uVar2 = (&DAT_007ed576)[local_60 * 4];
            if ((uVar2 & 1) == 0) {
              if (((uVar2 & 0x6000) != 0) && ((uVar2 & 0x9fff) != 0xffe)) {
                if ((*(ushort *)(local_58 + (int)local_24 * 2) & 0xc000) != 0xc000) {
                  if (local_44 == (short *)0x0) {
                    uVar2 = *(ushort *)(local_58 + (int)local_10 * 2);
                  }
                  else {
                    uVar2 = *(ushort *)(local_58 + (int)local_18 * 2);
                  }
                  if ((uVar2 & 0xc000) != 0xc000) goto LAB_006aa646;
                }
                goto LAB_006aa71a;
              }
            }
            else if (((((*(ushort *)(local_58 + (int)local_10 * 2) & 0xc000) == 0xc000) ||
                      ((*(ushort *)(local_58 + (int)local_18 * 2) & 0xc000) == 0xc000)) ||
                     (((uVar2 & 0x4000) != 0 &&
                      (((((*(ushort *)(local_58 + local_48 * -2) & 0xc000) == 0xc000 ||
                         ((*(ushort *)(local_58 + ((int)local_10 - local_48) * 2) & 0xc000) ==
                          0xc000)) ||
                        ((*(ushort *)(local_58 + ((int)local_18 - local_48) * 2) & 0xc000) == 0xc000
                        )) || ((*(ushort *)(local_58 + ((int)local_18 + (int)local_10) * 2) & 0xc000
                               ) == 0xc000)))))) ||
                    (((uVar2 & 0x2000) != 0 &&
                     ((((*(ushort *)(local_58 + local_48 * 2) & 0xc000) == 0xc000 ||
                       ((*(ushort *)(local_58 + ((int)local_10 + local_48) * 2) & 0xc000) == 0xc000)
                       ) || (((*(ushort *)(local_58 + (local_48 + (int)local_18) * 2) & 0xc000) ==
                              0xc000 ||
                             ((*(ushort *)(local_58 + ((int)local_18 + (int)local_10) * 2) & 0xc000)
                              == 0xc000)))))))) goto LAB_006aa71a;
LAB_006aa646:
            if ((int)local_40 <= (int)param_6) {
              local_8 = (short *)FUN_006acf50((undefined4 *)local_8,(uint)(param_5 + 0x168));
              if (local_8 == (short *)0x0) goto LAB_006aabfc;
              puVar31 = (undefined4 *)((int)local_8 + (int)param_5);
              for (iVar12 = 0xb4; iVar12 != 0; iVar12 = iVar12 + -1) {
                *puVar31 = 0xffffffff;
                puVar31 = puVar31 + 1;
              }
              local_40 = local_40 + 5;
              param_5 = param_5 + 0x168;
            }
            *(short *)((int)param_13 + (int)local_8) = (short)psVar29;
            *(short *)((int)param_13 + 2 + (int)local_8) = (short)psVar26;
            *(short *)((int)(param_13 + 1) + (int)local_8) = (short)local_c;
            local_1c = (short *)((int)local_1c + 1);
            iVar12 = FUN_006aadd0((int)psVar29,(int)psVar26,(int)local_c,(int)param_8,(int)param_9,
                                  (int)param_10);
            bVar3 = iVar12 <= param_11;
          } while ((!bVar3) && (local_54 = local_54 + -1, param_13 = param_13 + 0x12, -1 < local_54)
                  );
        }
        local_94 = local_60;
      } while (!bVar3);
    }
    else {
      local_1c = (short *)0x2;
      local_8[0x24] = sVar27;
      local_8[0x25] = sVar25;
      local_8[0x26] = sVar5;
    }
LAB_006aa758:
    if (local_8 != (short *)0x0) {
      if (local_1c == (short *)0x1) {
        local_8[0x24] = *local_8;
        local_8[0x25] = local_8[1];
        local_8[0x26] = local_8[2];
        local_1c = (short *)0x2;
      }
      psVar6 = (short *)((int)local_1c + -1);
      local_1c = psVar6;
      if ((0 < param_11) && (1 < (int)psVar6)) {
        iVar14 = (int)psVar6 * 0x48;
        do {
          local_1c = psVar6;
          iVar12 = FUN_006aadd0((int)*(short *)(iVar14 + -0x48 + (int)local_8),
                                (int)*(short *)(iVar14 + -0x46 + (int)local_8),
                                (int)*(short *)(iVar14 + -0x44 + (int)local_8),(int)param_8,
                                (int)param_9,(int)param_10);
          if (param_11 < iVar12) break;
          psVar6 = (short *)((int)psVar6 + -1);
          iVar14 = iVar14 + -0x48;
          local_1c = psVar6;
        } while (1 < (int)psVar6);
      }
      iVar14 = 0;
      local_40 = (short *)((int)local_1c + 1);
      local_8[(int)local_1c * 0x24 + 3] = 0;
      if (-1 < (int)local_1c + -1) {
        iVar12 = ((int)local_1c + -1) * 0x48;
        param_14 = local_1c;
        do {
          if (*(int *)(PTR_DAT_007ed56c +
                      ((((((int)*(short *)(iVar12 + 0x4c + (int)local_8) -
                          (int)*(short *)(iVar12 + 4 + (int)local_8)) * 3 -
                         (int)*(short *)(iVar12 + 2 + (int)local_8)) +
                        (int)*(short *)(iVar12 + 0x4a + (int)local_8)) * 3 +
                       (int)*(short *)(iVar12 + 0x48 + (int)local_8)) -
                      (int)*(short *)(iVar12 + (int)local_8)) * 4) < 0x1a) {
            iVar14 = iVar14 + (&DAT_007ed640)
                              [*(int *)(PTR_DAT_007ed56c +
                                       ((((((int)*(short *)(iVar12 + 0x4c + (int)local_8) -
                                           (int)*(short *)(iVar12 + 4 + (int)local_8)) * 3 -
                                          (int)*(short *)(iVar12 + 2 + (int)local_8)) +
                                         (int)*(short *)(iVar12 + 0x4a + (int)local_8)) * 3 +
                                        (int)*(short *)(iVar12 + 0x48 + (int)local_8)) -
                                       (int)*(short *)(iVar12 + (int)local_8)) * 4)];
          }
          *(short *)(iVar12 + 6 + (int)local_8) = (short)iVar14;
          iVar12 = iVar12 + -0x48;
          param_14 = (short *)((int)param_14 + -1);
        } while (param_14 != (short *)0x0);
      }
      if ((param_15 & 1) != 0) {
        sVar5 = local_8[(int)local_40 * 0x24 + -0x23];
        sVar25 = local_8[(int)local_40 * 0x24 + -0x22];
        psVar6 = local_40;
        if (5 < *(int *)(PTR_DAT_007ed56c +
                        ((((((int)sVar25 - (int)local_8[(int)local_40 * 0x24 + -0x46]) * 3 -
                           (int)local_8[(int)local_40 * 0x24 + -0x47]) + (int)sVar5) * 3 -
                         (int)local_8[((int)local_40 * 9 + -0x12) * 4]) +
                        (int)local_8[(int)local_40 * 0x24 + -0x24]) * 4)) {
          local_8[(int)local_40 * 0x24] = local_8[(int)local_40 * 0x24 + -0x24];
          psVar6 = local_1c + 1;
          local_8[(int)local_40 * 0x24 + 1] = sVar5;
          local_8[(int)local_40 * 0x24 + 2] = sVar25;
          local_8[(int)local_40 * 0x24 + 3] = 0;
          local_8[(int)local_40 * 0x24 + 7] = 0x7fff;
        }
        local_1c = (short *)0x1;
        local_40 = psVar6;
        if (1 < (int)psVar6 + -1) {
          param_13 = (undefined4 *)0x9;
          param_14 = (short *)0x48;
          do {
            psVar8 = (short *)(int)*(short *)((int)(param_14 + 1) + (int)local_8);
            iVar14 = (int)*(short *)((int)param_14 + (int)local_8);
            psVar7 = (short *)(int)*(short *)((int)(param_14 + 2) + (int)local_8);
            if ((((*(short *)((int)(param_14 + -0x24) + (int)local_8) == iVar14) &&
                 ((short *)(int)*(short *)((int)(param_14 + -0x23) + (int)local_8) == psVar8)) &&
                ((short *)(int)*(short *)((int)(param_14 + -0x22) + (int)local_8) == psVar7)) &&
               (0x8f < (int)param_14)) {
              sVar5 = *(short *)((int)(param_14 + -0x45) + (int)local_8);
            }
            else {
              sVar5 = *(short *)((int)(param_14 + -0x21) + (int)local_8);
            }
            param_8 = (short *)(int)*(short *)((int)(param_14 + 0x25) + (int)local_8);
            param_5 = (short *)(int)*(short *)((int)(param_14 + 0x26) + (int)local_8);
            param_11 = (int)*(short *)((int)(param_14 + 0x24) + (int)local_8);
            param_15 = (uint)*(short *)((int)(param_14 + 0x27) + (int)local_8);
            if (((param_11 == iVar14) && (param_8 == psVar8)) &&
               ((param_5 == psVar7 && ((int)local_1c < (int)(psVar6 + -1))))) {
              param_8 = (short *)(int)*(short *)((int)(param_14 + 0x49) + (int)local_8);
              param_11 = (int)*(short *)((int)(param_14 + 0x48) + (int)local_8);
              param_5 = (short *)(int)*(short *)((int)(param_14 + 0x4a) + (int)local_8);
              param_15 = (uint)*(short *)((int)(param_14 + 0x4b) + (int)local_8);
            }
            iVar12 = *(int *)(PTR_DAT_007ed56c +
                             ((((((int)psVar7 -
                                 (int)*(short *)((int)(param_14 + -0x22) + (int)local_8)) * 3 -
                                (int)*(short *)((int)(param_14 + -0x23) + (int)local_8)) +
                               (int)psVar8) * 3 -
                              (int)*(short *)((int)(param_14 + -0x24) + (int)local_8)) + iVar14) * 4
                             );
            if (0x19 < iVar12) {
              iVar12 = *(int *)(PTR_DAT_007ed56c +
                               ((((((int)param_5 - (int)psVar7) * 3 - (int)psVar8) + (int)param_8) *
                                 3 - iVar14) + param_11) * 4);
            }
            param_7 = (short *)0x1;
            piVar11 = (int *)(&DAT_007ecb40 + iVar12 * 0x60);
            local_80 = 0;
            do {
              if (*piVar11 == -2) break;
              iVar12 = *piVar11 + iVar14;
              if (((-1 < iVar12) && (iVar12 < param_2)) &&
                 (((iVar9 = piVar11[1] + (int)psVar8, -1 < iVar9 &&
                   (((iVar9 < param_3 && (iVar28 = piVar11[2] + (int)psVar7, -1 < iVar28)) &&
                    (iVar28 < param_4)))) &&
                  (-1 < *(short *)(param_1 + (iVar9 * param_2 + iVar12 + iVar28 * local_48) * 2)))))
              {
                iVar22 = param_11 - iVar12;
                if ((((iVar22 < -1) || (1 < iVar22)) ||
                    ((iVar23 = (int)param_8 - iVar9, iVar23 < -1 ||
                     ((1 < iVar23 || (iVar30 = (int)param_5 - iVar28, iVar30 < -1)))))) ||
                   (1 < iVar30)) {
                  uVar19 = (int)*(short *)((int)(param_14 + 3) + (int)local_8);
                  if (*(int *)(PTR_DAT_007ed56c +
                              ((((((int)psVar7 - iVar28) * 3 - iVar9) + (int)psVar8) * 3 - iVar12) +
                              iVar14) * 4) < 0x1a) {
                    uVar19 = (int)*(short *)((int)(param_14 + 3) + (int)local_8) +
                             (&DAT_007ed640)
                             [*(int *)(PTR_DAT_007ed56c +
                                      ((((((int)psVar7 - iVar28) * 3 - iVar9) + (int)psVar8) * 3 -
                                       iVar12) + iVar14) * 4)];
                  }
                }
                else {
                  uVar19 = param_15;
                  if (*(int *)(PTR_DAT_007ed56c + ((iVar23 + iVar30 * 3) * 3 + iVar22) * 4) < 0x1a)
                  {
                    uVar19 = (&DAT_007ed640)
                             [*(int *)(PTR_DAT_007ed56c + ((iVar23 + iVar30 * 3) * 3 + iVar22) * 4)]
                             + param_15;
                  }
                }
                if ((int)uVar19 <= (int)sVar5) {
                  iVar22 = (int)param_13 + (int)param_7;
                  param_9._0_2_ = (short)iVar12;
                  local_8[iVar22 * 4] = (short)param_9;
                  local_8[iVar22 * 4 + 1] = (short)iVar9;
                  local_8[iVar22 * 4 + 2] = (short)iVar28;
                  local_8[iVar22 * 4 + 3] = (short)uVar19;
                  param_7 = (short *)((int)param_7 + 1);
                }
              }
              piVar11 = piVar11 + 3;
              local_80 = local_80 + 1;
            } while (local_80 < 8);
            local_1c = (short *)((int)local_1c + 1);
            param_14 = param_14 + 0x24;
            param_13 = (undefined4 *)((int)param_13 + 9);
            if ((int)psVar6 + -1 <= (int)local_1c) {
              *param_12 = (int)psVar6;
              return local_8;
            }
          } while( true );
        }
      }
    }
  }
LAB_006aabfc:
  *param_12 = (int)local_40;
  return local_8;
LAB_006a9949:
  if (bVar3) goto LAB_006aa758;
LAB_006a9954:
  if ((int)local_3c < 1) goto LAB_006aa329;
  goto LAB_006a9383;
}

