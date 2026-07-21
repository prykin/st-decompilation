
void FUN_0055dee0(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  short *psVar8;
  int iVar9;
  short sVar10;
  uint uVar11;
  ushort *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  ushort *puVar15;
  int iVar16;
  byte *pbVar17;
  int iVar18;
  undefined1 *local_44;
  ushort *local_40;
  ushort *local_3c;
  int local_38;
  undefined1 *local_34;
  int local_30;
  int local_2c;
  short *local_28;
  int local_24;
  int local_20;
  ushort *local_1c;
  byte *local_18;
  short *local_14;
  ushort *local_10;
  int local_c;
  ushort *local_8;

  local_8 = (ushort *)0x0;
  local_18 = (byte *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_14 = (short *)Library::DKW::LIB::FUN_006aac10(DAT_008033a8 * DAT_008033a4 * 2);
  iVar4 = FUN_0055ee70(param_1,DAT_00803390,1);
  iVar9 = DAT_00803324 * DAT_00803358;
  iVar5 = DAT_008033a4;
  if (0 < iVar4) {
    local_44 = (undefined1 *)(iVar4 + 1U >> 1);
    pbVar13 = param_1;
    do {
      puVar15 = (ushort *)(DAT_00803304 + (char)*pbVar13);
      pbVar17 = (byte *)(DAT_00803308 + (char)pbVar13[1]);
      if (((((int)puVar15 < 0) || (iVar5 <= (int)puVar15)) || ((int)pbVar17 < 0)) ||
         ((DAT_008033a8 <= (int)pbVar17 ||
          (*(short *)(DAT_008033b4 + (int)(iVar5 * (int)pbVar17 + (int)puVar15) * 2) < 1)))) {
        iVar16 = (int)puVar15 * 0x10000;
        iVar18 = (int)pbVar17 * 0x10000;
        iVar4 = DAT_00803390;
        do {
          iVar16 = iVar16 - ((int)(char)*pbVar13 << 0x10) / DAT_00803390;
          iVar18 = iVar18 - ((int)(char)pbVar13[1] << 0x10) / DAT_00803390;
          puVar15 = (ushort *)(iVar16 >> 0x10);
          pbVar17 = (byte *)(iVar18 >> 0x10);
          iVar4 = iVar4 + -1;
          if (iVar4 < DAT_0080335c) goto cf_continue_loop_0055E2E9;
        } while ((((int)puVar15 < 0) || (iVar5 <= (int)puVar15)) ||
                (((int)pbVar17 < 0 ||
                 ((DAT_008033a8 <= (int)pbVar17 ||
                  (*(short *)(DAT_008033b4 + (int)(iVar5 * (int)pbVar17 + (int)puVar15) * 2) < 1))))
                ));
        if (DAT_0080335c <= iVar4) goto LAB_0055e02a;
      }
      else {
LAB_0055e02a:
        local_3c = (ushort *)FUN_006ad0b0((int)puVar15,(int)pbVar17,DAT_00803304,DAT_00803308);
        param_1 = pbVar17;
        local_1c = puVar15;
LAB_0055e048:
        local_2c = 30000;
        local_c = 1;
        local_28 = &DAT_007edcab;
        do {
          local_10 = (ushort *)((int)local_28[-1] + (int)local_1c);
          if ((((-1 < (int)local_10) && ((int)local_10 < DAT_008033a4)) &&
              (pbVar14 = param_1 + *local_28, -1 < (int)pbVar14)) &&
             (((int)pbVar14 < DAT_008033a8 &&
              (local_20 = (int)*(short *)(DAT_008033b4 +
                                         (int)(DAT_008033a4 * (int)pbVar14 + (int)local_10) * 2),
              0 < local_20)))) {
            if (local_20 <= iVar9) break;
            iVar5 = local_20 + (DAT_00803324 - DAT_00803320);
            if (iVar5 < local_2c) {
              local_24 = local_c;
              local_2c = iVar5;
              local_18 = pbVar14;
              local_8 = local_10;
            }
            else if ((iVar5 == local_2c) &&
                    ((uVar6 = ((int)local_10 - (int)puVar15) * (DAT_00803308 - (int)pbVar17) -
                              ((int)pbVar14 - (int)pbVar17) * (DAT_00803304 - (int)puVar15),
                     uVar11 = (int)uVar6 >> 0x1f, iVar4 = (uVar6 ^ uVar11) - uVar11,
                     uVar6 = ((int)local_8 - (int)puVar15) * (DAT_00803308 - (int)pbVar17) -
                             ((int)local_18 - (int)pbVar17) * (DAT_00803304 - (int)puVar15),
                     uVar11 = (int)uVar6 >> 0x1f, iVar5 = (uVar6 ^ uVar11) - uVar11, iVar4 < iVar5
                     || ((iVar4 == iVar5 && ((ushort *)local_c == local_3c)))))) {
              local_24 = local_c;
              local_18 = pbVar14;
              local_8 = local_10;
            }
          }
          local_28 = local_28 + 5;
          local_c = local_c + 2;
        } while ((int)local_28 < 0x7edcce);
        iVar5 = DAT_008033a4;
        if ((local_20 < 1) || (iVar9 < local_20)) {
          local_c = 0;
          local_28 = &DAT_007edca6;
          do {
            local_10 = (ushort *)((int)local_28[-1] + (int)local_1c);
            if ((((-1 < (int)local_10) && ((int)local_10 < DAT_008033a4)) &&
                (pbVar14 = param_1 + *local_28, -1 < (int)pbVar14)) &&
               (((int)pbVar14 < DAT_008033a8 &&
                (local_20 = (int)*(short *)(DAT_008033b4 +
                                           (int)(DAT_008033a4 * (int)pbVar14 + (int)local_10) * 2),
                0 < local_20)))) {
              if (local_20 <= iVar9) break;
              if (local_20 < local_2c) {
                local_24 = local_c;
                local_2c = local_20;
                local_18 = pbVar14;
                local_8 = local_10;
              }
              else if ((local_20 == local_2c) &&
                      ((uVar6 = ((int)local_10 - (int)puVar15) * (DAT_00803308 - (int)pbVar17) -
                                ((int)pbVar14 - (int)pbVar17) * (DAT_00803304 - (int)puVar15),
                       uVar11 = (int)uVar6 >> 0x1f, iVar16 = (uVar6 ^ uVar11) - uVar11,
                       uVar6 = ((int)local_8 - (int)puVar15) * (DAT_00803308 - (int)pbVar17) -
                               ((int)local_18 - (int)pbVar17) * (DAT_00803304 - (int)puVar15),
                       uVar11 = (int)uVar6 >> 0x1f, iVar4 = (uVar6 ^ uVar11) - uVar11,
                       iVar16 < iVar4 || ((iVar16 == iVar4 && ((ushort *)local_c == local_3c)))))) {
                local_24 = local_c;
                local_18 = pbVar14;
                local_8 = local_10;
              }
            }
            local_28 = local_28 + 5;
            local_c = local_c + 2;
          } while ((int)local_28 < 0x7edcce);
          if ((0 < local_20) && (local_20 <= iVar9)) goto cf_continue_loop_0055E2E9;
          param_1 = local_18;
          local_3c = (ushort *)local_24;
          local_1c = local_8;
          puVar12 = (ushort *)(DAT_008033a4 * (int)local_18 + (int)local_8);
          if ((ushort)local_14[(int)puVar12] < 0xff) {
            local_14[(int)puVar12] = local_14[(int)puVar12] + 1;
          }
          goto LAB_0055e048;
        }
      }
cf_continue_loop_0055E2E9:
      pbVar13 = pbVar13 + 4;
      local_44 = (undefined1 *)((int)local_44 - 1);
    } while (local_44 != (undefined1 *)0x0);
  }
  iVar4 = 0;
  if (0 < DAT_008033a8) {
    do {
      psVar8 = local_14 + iVar5 * iVar4;
      iVar9 = 0;
      if (0 < iVar5) {
        puVar7 = (undefined1 *)(iVar5 * iVar4 * 2 + 1 + DAT_00803380);
        do {
          iVar9 = iVar9 + 1;
          *puVar7 = (char)*psVar8;
          puVar7 = puVar7 + 2;
          psVar8 = psVar8 + 1;
          iVar5 = DAT_008033a4;
        } while (iVar9 < DAT_008033a4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_008033a8);
  }
  if ((iVar5 < 5) || (DAT_008033a8 < 5)) {
    iVar4 = 0;
    if (0 < DAT_008033a8) {
      do {
        puVar15 = (ushort *)(local_14 + iVar5 * iVar4);
        iVar9 = 0;
        if (0 < iVar5) {
          pbVar13 = (byte *)(iVar5 * iVar4 * 2 + 1 + DAT_00803380);
          do {
            *puVar15 = (ushort)*pbVar13;
            iVar9 = iVar9 + 1;
            pbVar13 = pbVar13 + 2;
            puVar15 = puVar15 + 1;
            iVar5 = DAT_008033a4;
          } while (iVar9 < DAT_008033a4);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_008033a8);
      if (0 < DAT_008033a8) {
        local_38 = 2;
        do {
          if (0 < iVar5) {
            local_44 = (undefined1 *)(DAT_00803380 + (local_38 + -2) * iVar5 * 2 + 1);
            iVar5 = 2;
            do {
              iVar4 = local_38 + -4;
              local_3c = (ushort *)0x0;
              param_1 = (byte *)0x0;
              if (local_38 < iVar4) {
LAB_0055eb08:
                uVar3 = 0;
              }
              else {
                local_40 = (ushort *)(local_14 + iVar4 * DAT_008033a4);
                do {
                  if ((-1 < iVar4) && (iVar4 < DAT_008033a8)) {
                    puVar15 = local_40;
                    for (iVar9 = iVar5 + -4; iVar9 <= iVar5; iVar9 = iVar9 + 1) {
                      if ((-1 < iVar9) && (iVar9 < DAT_008033a4)) {
                        param_1 = param_1 + 1;
                        local_3c = (ushort *)((int)local_3c + (uint)*puVar15);
                      }
                      puVar15 = puVar15 + 1;
                    }
                  }
                  iVar4 = iVar4 + 1;
                  local_40 = local_40 + DAT_008033a4;
                } while (iVar4 <= local_38);
                if ((int)param_1 < 1) goto LAB_0055eb08;
                uVar3 = (undefined1)((int)local_3c / (int)param_1);
              }
              *local_44 = uVar3;
              local_44 = local_44 + 2;
              iVar4 = iVar5 + -1;
              iVar5 = iVar5 + 1;
            } while (iVar4 < DAT_008033a4);
          }
          iVar4 = local_38 + -1;
          iVar5 = DAT_008033a4;
          local_38 = local_38 + 1;
        } while (iVar4 < DAT_008033a8);
      }
    }
  }
  else {
    local_1c = (ushort *)0x0;
    local_8 = (ushort *)local_14;
    if (0 < iVar5) {
      pbVar13 = (byte *)(DAT_00803380 + 1);
      do {
        sVar10 = 0;
        iVar4 = 3;
        pbVar17 = pbVar13;
        do {
          bVar1 = *pbVar17;
          pbVar17 = pbVar17 + iVar5 * 2;
          sVar10 = sVar10 + (ushort)bVar1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        local_1c = (ushort *)((int)local_1c + 1);
        pbVar13 = pbVar13 + 2;
        *local_8 = sVar10;
        local_8 = local_8 + 1;
        iVar5 = DAT_008033a4;
      } while ((int)local_1c < DAT_008033a4);
    }
    iVar4 = 1;
    do {
      iVar9 = iVar4;
      iVar4 = 0;
      if (0 < iVar5) {
        pbVar13 = (byte *)(DAT_00803380 + (iVar9 + 2) * iVar5 * 2 + 1);
        psVar8 = local_14 + iVar5 * iVar9;
        do {
          bVar1 = *pbVar13;
          pbVar13 = pbVar13 + 2;
          iVar4 = iVar4 + 1;
          *psVar8 = psVar8[-iVar5] + (ushort)bVar1;
          psVar8 = psVar8 + 1;
          iVar5 = DAT_008033a4;
        } while (iVar4 < DAT_008033a4);
      }
      iVar4 = iVar9 + 1;
    } while (iVar4 < 3);
    if (iVar4 < DAT_008033a8 + -2) {
      iVar9 = iVar9 + 3;
      do {
        iVar16 = 0;
        if (0 < iVar5) {
          param_1 = (byte *)(DAT_00803380 + iVar9 * iVar5 * 2 + 1);
          pbVar13 = (byte *)(DAT_00803380 + (iVar9 + -5) * iVar5 * 2 + 1);
          psVar8 = local_14 + iVar5 * iVar4;
          do {
            bVar1 = *pbVar13;
            pbVar13 = pbVar13 + 2;
            iVar16 = iVar16 + 1;
            *psVar8 = (psVar8[-iVar5] - (ushort)bVar1) + (ushort)*param_1;
            param_1 = param_1 + 2;
            psVar8 = psVar8 + 1;
            iVar5 = DAT_008033a4;
          } while (iVar16 < DAT_008033a4);
        }
        iVar4 = iVar4 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar4 < DAT_008033a8 + -2);
    }
    if (iVar4 < DAT_008033a8) {
      param_1 = (byte *)(iVar4 + -3);
      do {
        iVar9 = 0;
        if (0 < iVar5) {
          pbVar13 = (byte *)(DAT_00803380 + (int)param_1 * iVar5 * 2 + 1);
          psVar8 = local_14 + iVar5 * iVar4;
          do {
            bVar1 = *pbVar13;
            pbVar13 = pbVar13 + 2;
            iVar9 = iVar9 + 1;
            *psVar8 = psVar8[-iVar5] - (ushort)bVar1;
            psVar8 = psVar8 + 1;
            iVar5 = DAT_008033a4;
          } while (iVar9 < DAT_008033a4);
        }
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 1;
      } while (iVar4 < DAT_008033a8);
    }
    param_1 = (byte *)0x0;
    local_30 = 0xf;
    local_34 = &DAT_0000000c;
    local_38 = 9;
    do {
      iVar9 = 0;
      local_8 = (ushort *)(local_14 + iVar5 * (int)param_1);
      local_10 = (ushort *)(DAT_00803380 + iVar5 * (int)param_1 * 2);
      iVar4 = 3;
      puVar15 = local_8;
      do {
        uVar2 = *puVar15;
        puVar15 = puVar15 + 1;
        iVar9 = iVar9 + (uint)uVar2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if ((*local_10 & 7) != 0) {
        *(byte *)((int)local_10 + 1) =
             (byte)((int)(iVar9 + (uint)*(byte *)((int)local_10 + 1) * 4) / local_38);
        iVar5 = DAT_008033a4;
      }
      local_40 = (ushort *)local_34;
      local_3c = local_8 + 3;
      pbVar13 = (byte *)((int)local_10 + 3);
      local_44 = (undefined1 *)0x2;
      local_c = 3;
      do {
        iVar9 = iVar9 + (uint)*local_3c;
        if ((pbVar13[-1] & 7) != 0) {
          *pbVar13 = (byte)((int)(iVar9 + (uint)*pbVar13 * 4) / (int)local_40);
          iVar5 = DAT_008033a4;
        }
        pbVar13 = pbVar13 + 2;
        local_40 = (ushort *)((int)local_40 + (int)(param_1 + 3));
        local_3c = local_3c + 1;
        local_44 = (undefined1 *)((int)local_44 + -1);
      } while (local_44 != (undefined1 *)0x0);
      if (3 < iVar5 + -2) {
        puVar15 = local_8 + 5;
        pbVar13 = (byte *)((int)local_10 + 7);
        do {
          iVar9 = iVar9 + ((uint)*puVar15 - (uint)puVar15[-5]);
          if ((pbVar13[-1] & 7) != 0) {
            *pbVar13 = (byte)((int)(iVar9 + (uint)*pbVar13 * 4) / local_30);
            iVar5 = DAT_008033a4;
          }
          local_c = local_c + 1;
          puVar15 = puVar15 + 1;
          pbVar13 = pbVar13 + 2;
        } while (local_c < iVar5 + -2);
      }
      if (local_c < iVar5) {
        pbVar13 = (byte *)((int)local_10 + local_c * 2 + 1);
        local_40 = local_8 + local_c + -3;
        iVar4 = local_c;
        do {
          iVar9 = iVar9 - (uint)*local_40;
          if ((pbVar13[-1] & 7) != 0) {
            *pbVar13 = (byte)((int)(iVar9 + (uint)*pbVar13 * 4) /
                             (((iVar5 - iVar4) + 2) * (int)(param_1 + 3)));
            iVar5 = DAT_008033a4;
          }
          iVar4 = iVar4 + 1;
          local_40 = local_40 + 1;
          pbVar13 = pbVar13 + 2;
        } while (iVar4 < iVar5);
      }
      param_1 = param_1 + 1;
      local_38 = local_38 + 3;
      local_34 = local_34 + 4;
      local_30 = local_30 + 5;
    } while (local_38 < 0x10);
    if ((int)param_1 < DAT_008033a8 + -2) {
      do {
        iVar9 = 0;
        local_8 = (ushort *)(local_14 + iVar5 * (int)param_1);
        local_10 = (ushort *)(DAT_00803380 + iVar5 * (int)param_1 * 2);
        iVar4 = 3;
        puVar15 = local_8;
        do {
          uVar2 = *puVar15;
          puVar15 = puVar15 + 1;
          iVar9 = iVar9 + (uint)uVar2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if ((*local_10 & 7) != 0) {
          iVar5 = iVar9 + (uint)*(byte *)((int)local_10 + 1) * 4;
          *(char *)((int)local_10 + 1) =
               ((char)(iVar5 / 0xf) + (char)(iVar5 >> 0x1f)) -
               (char)((longlong)iVar5 * 0x88888889 >> 0x3f);
          iVar5 = DAT_008033a4;
        }
        local_3c = local_8 + 3;
        local_40 = (ushort *)0x14;
        pbVar13 = (byte *)((int)local_10 + 3);
        local_c = 3;
        do {
          iVar9 = iVar9 + (uint)*local_3c;
          if ((pbVar13[-1] & 7) != 0) {
            *pbVar13 = (byte)((int)(iVar9 + (uint)*pbVar13 * 4) / (int)local_40);
            iVar5 = DAT_008033a4;
          }
          local_40 = (ushort *)((int)local_40 + 5);
          local_3c = local_3c + 1;
          pbVar13 = pbVar13 + 2;
        } while ((int)local_40 < 0x1a);
        if (3 < iVar5 + -2) {
          pbVar13 = (byte *)((int)local_10 + 7);
          puVar15 = local_8 + 5;
          do {
            iVar9 = iVar9 + ((uint)*puVar15 - (uint)puVar15[-5]);
            if ((pbVar13[-1] & 7) != 0) {
              iVar5 = iVar9 + (uint)*pbVar13 * 4;
              *pbVar13 = ((char)(iVar5 / 0x19) + (char)(iVar5 >> 0x1f)) -
                         (char)((longlong)iVar5 * 0x51eb851f >> 0x3f);
              iVar5 = DAT_008033a4;
            }
            local_c = local_c + 1;
            puVar15 = puVar15 + 1;
            pbVar13 = pbVar13 + 2;
          } while (local_c < iVar5 + -2);
        }
        if (local_c < iVar5) {
          pbVar13 = (byte *)((int)local_10 + local_c * 2 + 1);
          local_40 = local_8 + local_c + -3;
          iVar4 = local_c;
          do {
            iVar9 = iVar9 - (uint)*local_40;
            if ((pbVar13[-1] & 7) != 0) {
              *pbVar13 = (byte)((int)(iVar9 + (uint)*pbVar13 * 4) / (((iVar5 - iVar4) + 2) * 5));
              iVar5 = DAT_008033a4;
            }
            iVar4 = iVar4 + 1;
            local_40 = local_40 + 1;
            pbVar13 = pbVar13 + 2;
          } while (iVar4 < iVar5);
        }
        param_1 = param_1 + 1;
      } while ((int)param_1 < DAT_008033a8 + -2);
    }
    if ((int)param_1 < DAT_008033a8) {
      do {
        iVar9 = (DAT_008033a8 - (int)param_1) + 2;
        iVar16 = 0;
        local_8 = (ushort *)(local_14 + iVar5 * (int)param_1);
        local_10 = (ushort *)(iVar5 * (int)param_1 * 2 + DAT_00803380);
        iVar4 = 3;
        puVar15 = local_8;
        do {
          uVar2 = *puVar15;
          puVar15 = puVar15 + 1;
          iVar16 = iVar16 + (uint)uVar2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if ((*local_10 & 7) != 0) {
          *(byte *)((int)local_10 + 1) =
               (byte)((int)(iVar16 + (uint)*(byte *)((int)local_10 + 1) * 4) / (iVar9 * 3));
          iVar5 = DAT_008033a4;
        }
        local_40 = (ushort *)(iVar9 * 4);
        local_3c = local_8 + 3;
        pbVar13 = (byte *)((int)local_10 + 3);
        local_44 = (undefined1 *)0x2;
        local_c = 3;
        do {
          iVar16 = iVar16 + (uint)*local_3c;
          if ((pbVar13[-1] & 7) != 0) {
            *pbVar13 = (byte)((int)(iVar16 + (uint)*pbVar13 * 4) / (int)local_40);
            iVar5 = DAT_008033a4;
          }
          local_3c = local_3c + 1;
          local_40 = (ushort *)((int)local_40 + iVar9);
          pbVar13 = pbVar13 + 2;
          local_44 = (undefined1 *)((int)local_44 + -1);
        } while (local_44 != (undefined1 *)0x0);
        if (3 < iVar5 + -2) {
          local_40 = (ushort *)((int)local_10 + 7);
          puVar15 = local_8 + 5;
          do {
            iVar16 = iVar16 + ((uint)*puVar15 - (uint)puVar15[-5]);
            if ((*(byte *)((int)local_40 + -1) & 7) != 0) {
              *(byte *)local_40 = (byte)((int)(iVar16 + (uint)(byte)*local_40 * 4) / (iVar9 * 5));
              iVar5 = DAT_008033a4;
            }
            local_40 = (ushort *)((int)local_40 + 2);
            local_c = local_c + 1;
            puVar15 = puVar15 + 1;
          } while (local_c < iVar5 + -2);
        }
        if (local_c < iVar5) {
          pbVar13 = (byte *)((int)local_10 + local_c * 2 + 1);
          local_40 = local_8 + local_c + -3;
          do {
            iVar16 = iVar16 - (uint)*local_40;
            if ((pbVar13[-1] & 7) != 0) {
              *pbVar13 = (byte)((int)(iVar16 + (uint)*pbVar13 * 4) /
                               (((iVar5 - local_c) + 2) * iVar9));
              iVar5 = DAT_008033a4;
            }
            local_c = local_c + 1;
            local_40 = local_40 + 1;
            pbVar13 = pbVar13 + 2;
          } while (local_c < iVar5);
        }
        param_1 = param_1 + 1;
      } while ((int)param_1 < DAT_008033a8);
    }
  }
  FreeAndNull(&local_14);
  return;
}

