
void FUN_0055dee0(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  short *psVar9;
  int iVar10;
  short sVar11;
  uint uVar12;
  ushort *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  ushort *puVar16;
  int iVar17;
  byte *pbVar18;
  int iVar19;
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
  local_14 = (short *)FUN_006aac10(DAT_008033a8 * DAT_008033a4 * 2);
  iVar5 = FUN_0055ee70(param_1,DAT_00803390,1);
  iVar10 = DAT_00803324 * DAT_00803358;
  iVar6 = DAT_008033a4;
  if (0 < iVar5) {
    local_44 = (undefined1 *)(iVar5 + 1U >> 1);
    pbVar14 = param_1;
    do {
      puVar16 = (ushort *)(DAT_00803304 + (char)*pbVar14);
      pbVar18 = (byte *)(DAT_00803308 + (char)pbVar14[1]);
      if (((((int)puVar16 < 0) || (iVar6 <= (int)puVar16)) || ((int)pbVar18 < 0)) ||
         ((DAT_008033a8 <= (int)pbVar18 ||
          (*(short *)(DAT_008033b4 + (int)(iVar6 * (int)pbVar18 + (int)puVar16) * 2) < 1)))) {
        iVar17 = (int)puVar16 * 0x10000;
        iVar19 = (int)pbVar18 * 0x10000;
        iVar5 = DAT_00803390;
        do {
          iVar17 = iVar17 - ((int)(char)*pbVar14 << 0x10) / DAT_00803390;
          iVar19 = iVar19 - ((int)(char)pbVar14[1] << 0x10) / DAT_00803390;
          puVar16 = (ushort *)(iVar17 >> 0x10);
          pbVar18 = (byte *)(iVar19 >> 0x10);
          iVar5 = iVar5 + -1;
          if (iVar5 < DAT_0080335c) goto LAB_0055e2e9;
        } while ((((int)puVar16 < 0) || (iVar6 <= (int)puVar16)) ||
                (((int)pbVar18 < 0 ||
                 ((DAT_008033a8 <= (int)pbVar18 ||
                  (*(short *)(DAT_008033b4 + (int)(iVar6 * (int)pbVar18 + (int)puVar16) * 2) < 1))))
                ));
        if (DAT_0080335c <= iVar5) goto LAB_0055e02a;
      }
      else {
LAB_0055e02a:
        cVar3 = FUN_006ad0b0((int)puVar16,(int)pbVar18,DAT_00803304,DAT_00803308);
        local_3c = (ushort *)CONCAT31(extraout_var,cVar3);
        param_1 = pbVar18;
        local_1c = puVar16;
LAB_0055e048:
        local_2c = 30000;
        local_c = 1;
        local_28 = &DAT_007edcab;
        do {
          local_10 = (ushort *)((int)local_28[-1] + (int)local_1c);
          if ((((-1 < (int)local_10) && ((int)local_10 < DAT_008033a4)) &&
              (pbVar15 = param_1 + *local_28, -1 < (int)pbVar15)) &&
             (((int)pbVar15 < DAT_008033a8 &&
              (local_20 = (int)*(short *)(DAT_008033b4 +
                                         (int)(DAT_008033a4 * (int)pbVar15 + (int)local_10) * 2),
              0 < local_20)))) {
            if (local_20 <= iVar10) break;
            iVar6 = local_20 + (DAT_00803324 - DAT_00803320);
            if (iVar6 < local_2c) {
              local_24 = local_c;
              local_2c = iVar6;
              local_18 = pbVar15;
              local_8 = local_10;
            }
            else if ((iVar6 == local_2c) &&
                    ((uVar7 = ((int)local_10 - (int)puVar16) * (DAT_00803308 - (int)pbVar18) -
                              ((int)pbVar15 - (int)pbVar18) * (DAT_00803304 - (int)puVar16),
                     uVar12 = (int)uVar7 >> 0x1f, iVar5 = (uVar7 ^ uVar12) - uVar12,
                     uVar7 = ((int)local_8 - (int)puVar16) * (DAT_00803308 - (int)pbVar18) -
                             ((int)local_18 - (int)pbVar18) * (DAT_00803304 - (int)puVar16),
                     uVar12 = (int)uVar7 >> 0x1f, iVar6 = (uVar7 ^ uVar12) - uVar12, iVar5 < iVar6
                     || ((iVar5 == iVar6 && ((ushort *)local_c == local_3c)))))) {
              local_24 = local_c;
              local_18 = pbVar15;
              local_8 = local_10;
            }
          }
          local_28 = local_28 + 5;
          local_c = local_c + 2;
        } while ((int)local_28 < 0x7edcce);
        iVar6 = DAT_008033a4;
        if ((local_20 < 1) || (iVar10 < local_20)) {
          local_c = 0;
          local_28 = &DAT_007edca6;
          do {
            local_10 = (ushort *)((int)local_28[-1] + (int)local_1c);
            if ((((-1 < (int)local_10) && ((int)local_10 < DAT_008033a4)) &&
                (pbVar15 = param_1 + *local_28, -1 < (int)pbVar15)) &&
               (((int)pbVar15 < DAT_008033a8 &&
                (local_20 = (int)*(short *)(DAT_008033b4 +
                                           (int)(DAT_008033a4 * (int)pbVar15 + (int)local_10) * 2),
                0 < local_20)))) {
              if (local_20 <= iVar10) break;
              if (local_20 < local_2c) {
                local_24 = local_c;
                local_2c = local_20;
                local_18 = pbVar15;
                local_8 = local_10;
              }
              else if ((local_20 == local_2c) &&
                      ((uVar7 = ((int)local_10 - (int)puVar16) * (DAT_00803308 - (int)pbVar18) -
                                ((int)pbVar15 - (int)pbVar18) * (DAT_00803304 - (int)puVar16),
                       uVar12 = (int)uVar7 >> 0x1f, iVar17 = (uVar7 ^ uVar12) - uVar12,
                       uVar7 = ((int)local_8 - (int)puVar16) * (DAT_00803308 - (int)pbVar18) -
                               ((int)local_18 - (int)pbVar18) * (DAT_00803304 - (int)puVar16),
                       uVar12 = (int)uVar7 >> 0x1f, iVar5 = (uVar7 ^ uVar12) - uVar12,
                       iVar17 < iVar5 || ((iVar17 == iVar5 && ((ushort *)local_c == local_3c)))))) {
                local_24 = local_c;
                local_18 = pbVar15;
                local_8 = local_10;
              }
            }
            local_28 = local_28 + 5;
            local_c = local_c + 2;
          } while ((int)local_28 < 0x7edcce);
          if ((0 < local_20) && (local_20 <= iVar10)) goto LAB_0055e2e9;
          param_1 = local_18;
          local_3c = (ushort *)local_24;
          local_1c = local_8;
          puVar13 = (ushort *)(DAT_008033a4 * (int)local_18 + (int)local_8);
          if ((ushort)local_14[(int)puVar13] < 0xff) {
            local_14[(int)puVar13] = local_14[(int)puVar13] + 1;
          }
          goto LAB_0055e048;
        }
      }
LAB_0055e2e9:
      pbVar14 = pbVar14 + 4;
      local_44 = (undefined1 *)((int)local_44 - 1);
    } while (local_44 != (undefined1 *)0x0);
  }
  iVar5 = 0;
  if (0 < DAT_008033a8) {
    do {
      psVar9 = local_14 + iVar6 * iVar5;
      iVar10 = 0;
      if (0 < iVar6) {
        puVar8 = (undefined1 *)(iVar6 * iVar5 * 2 + 1 + DAT_00803380);
        do {
          iVar10 = iVar10 + 1;
          *puVar8 = (char)*psVar9;
          puVar8 = puVar8 + 2;
          psVar9 = psVar9 + 1;
          iVar6 = DAT_008033a4;
        } while (iVar10 < DAT_008033a4);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_008033a8);
  }
  if ((iVar6 < 5) || (DAT_008033a8 < 5)) {
    iVar5 = 0;
    if (0 < DAT_008033a8) {
      do {
        puVar16 = (ushort *)(local_14 + iVar6 * iVar5);
        iVar10 = 0;
        if (0 < iVar6) {
          pbVar14 = (byte *)(iVar6 * iVar5 * 2 + 1 + DAT_00803380);
          do {
            *puVar16 = (ushort)*pbVar14;
            iVar10 = iVar10 + 1;
            pbVar14 = pbVar14 + 2;
            puVar16 = puVar16 + 1;
            iVar6 = DAT_008033a4;
          } while (iVar10 < DAT_008033a4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_008033a8);
      if (0 < DAT_008033a8) {
        local_38 = 2;
        do {
          if (0 < iVar6) {
            local_44 = (undefined1 *)(DAT_00803380 + (local_38 + -2) * iVar6 * 2 + 1);
            iVar6 = 2;
            do {
              iVar5 = local_38 + -4;
              local_3c = (ushort *)0x0;
              param_1 = (byte *)0x0;
              if (local_38 < iVar5) {
LAB_0055eb08:
                uVar4 = 0;
              }
              else {
                local_40 = (ushort *)(local_14 + iVar5 * DAT_008033a4);
                do {
                  if ((-1 < iVar5) && (iVar5 < DAT_008033a8)) {
                    puVar16 = local_40;
                    for (iVar10 = iVar6 + -4; iVar10 <= iVar6; iVar10 = iVar10 + 1) {
                      if ((-1 < iVar10) && (iVar10 < DAT_008033a4)) {
                        param_1 = param_1 + 1;
                        local_3c = (ushort *)((int)local_3c + (uint)*puVar16);
                      }
                      puVar16 = puVar16 + 1;
                    }
                  }
                  iVar5 = iVar5 + 1;
                  local_40 = local_40 + DAT_008033a4;
                } while (iVar5 <= local_38);
                if ((int)param_1 < 1) goto LAB_0055eb08;
                uVar4 = (undefined1)((int)local_3c / (int)param_1);
              }
              *local_44 = uVar4;
              local_44 = local_44 + 2;
              iVar5 = iVar6 + -1;
              iVar6 = iVar6 + 1;
            } while (iVar5 < DAT_008033a4);
          }
          iVar5 = local_38 + -1;
          iVar6 = DAT_008033a4;
          local_38 = local_38 + 1;
        } while (iVar5 < DAT_008033a8);
      }
    }
  }
  else {
    local_1c = (ushort *)0x0;
    local_8 = (ushort *)local_14;
    if (0 < iVar6) {
      pbVar14 = (byte *)(DAT_00803380 + 1);
      do {
        sVar11 = 0;
        iVar5 = 3;
        pbVar18 = pbVar14;
        do {
          bVar1 = *pbVar18;
          pbVar18 = pbVar18 + iVar6 * 2;
          sVar11 = sVar11 + (ushort)bVar1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        local_1c = (ushort *)((int)local_1c + 1);
        pbVar14 = pbVar14 + 2;
        *local_8 = sVar11;
        local_8 = local_8 + 1;
        iVar6 = DAT_008033a4;
      } while ((int)local_1c < DAT_008033a4);
    }
    iVar5 = 1;
    do {
      iVar10 = iVar5;
      iVar5 = 0;
      if (0 < iVar6) {
        pbVar14 = (byte *)(DAT_00803380 + (iVar10 + 2) * iVar6 * 2 + 1);
        psVar9 = local_14 + iVar6 * iVar10;
        do {
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + 2;
          iVar5 = iVar5 + 1;
          *psVar9 = psVar9[-iVar6] + (ushort)bVar1;
          psVar9 = psVar9 + 1;
          iVar6 = DAT_008033a4;
        } while (iVar5 < DAT_008033a4);
      }
      iVar5 = iVar10 + 1;
    } while (iVar5 < 3);
    if (iVar5 < DAT_008033a8 + -2) {
      iVar10 = iVar10 + 3;
      do {
        iVar17 = 0;
        if (0 < iVar6) {
          param_1 = (byte *)(DAT_00803380 + iVar10 * iVar6 * 2 + 1);
          pbVar14 = (byte *)(DAT_00803380 + (iVar10 + -5) * iVar6 * 2 + 1);
          psVar9 = local_14 + iVar6 * iVar5;
          do {
            bVar1 = *pbVar14;
            pbVar14 = pbVar14 + 2;
            iVar17 = iVar17 + 1;
            *psVar9 = (psVar9[-iVar6] - (ushort)bVar1) + (ushort)*param_1;
            param_1 = param_1 + 2;
            psVar9 = psVar9 + 1;
            iVar6 = DAT_008033a4;
          } while (iVar17 < DAT_008033a4);
        }
        iVar5 = iVar5 + 1;
        iVar10 = iVar10 + 1;
      } while (iVar5 < DAT_008033a8 + -2);
    }
    if (iVar5 < DAT_008033a8) {
      param_1 = (byte *)(iVar5 + -3);
      do {
        iVar10 = 0;
        if (0 < iVar6) {
          pbVar14 = (byte *)(DAT_00803380 + (int)param_1 * iVar6 * 2 + 1);
          psVar9 = local_14 + iVar6 * iVar5;
          do {
            bVar1 = *pbVar14;
            pbVar14 = pbVar14 + 2;
            iVar10 = iVar10 + 1;
            *psVar9 = psVar9[-iVar6] - (ushort)bVar1;
            psVar9 = psVar9 + 1;
            iVar6 = DAT_008033a4;
          } while (iVar10 < DAT_008033a4);
        }
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 1;
      } while (iVar5 < DAT_008033a8);
    }
    param_1 = (byte *)0x0;
    local_30 = 0xf;
    local_34 = &DAT_0000000c;
    local_38 = 9;
    do {
      iVar10 = 0;
      local_8 = (ushort *)(local_14 + iVar6 * (int)param_1);
      local_10 = (ushort *)(DAT_00803380 + iVar6 * (int)param_1 * 2);
      iVar5 = 3;
      puVar16 = local_8;
      do {
        uVar2 = *puVar16;
        puVar16 = puVar16 + 1;
        iVar10 = iVar10 + (uint)uVar2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if ((*local_10 & 7) != 0) {
        *(byte *)((int)local_10 + 1) =
             (byte)((int)(iVar10 + (uint)*(byte *)((int)local_10 + 1) * 4) / local_38);
        iVar6 = DAT_008033a4;
      }
      local_40 = (ushort *)local_34;
      local_3c = local_8 + 3;
      pbVar14 = (byte *)((int)local_10 + 3);
      local_44 = (undefined1 *)0x2;
      local_c = 3;
      do {
        iVar10 = iVar10 + (uint)*local_3c;
        if ((pbVar14[-1] & 7) != 0) {
          *pbVar14 = (byte)((int)(iVar10 + (uint)*pbVar14 * 4) / (int)local_40);
          iVar6 = DAT_008033a4;
        }
        pbVar14 = pbVar14 + 2;
        local_40 = (ushort *)((int)local_40 + (int)(param_1 + 3));
        local_3c = local_3c + 1;
        local_44 = (undefined1 *)((int)local_44 + -1);
      } while (local_44 != (undefined1 *)0x0);
      if (3 < iVar6 + -2) {
        puVar16 = local_8 + 5;
        pbVar14 = (byte *)((int)local_10 + 7);
        do {
          iVar10 = iVar10 + ((uint)*puVar16 - (uint)puVar16[-5]);
          if ((pbVar14[-1] & 7) != 0) {
            *pbVar14 = (byte)((int)(iVar10 + (uint)*pbVar14 * 4) / local_30);
            iVar6 = DAT_008033a4;
          }
          local_c = local_c + 1;
          puVar16 = puVar16 + 1;
          pbVar14 = pbVar14 + 2;
        } while (local_c < iVar6 + -2);
      }
      if (local_c < iVar6) {
        pbVar14 = (byte *)((int)local_10 + local_c * 2 + 1);
        local_40 = local_8 + local_c + -3;
        iVar5 = local_c;
        do {
          iVar10 = iVar10 - (uint)*local_40;
          if ((pbVar14[-1] & 7) != 0) {
            *pbVar14 = (byte)((int)(iVar10 + (uint)*pbVar14 * 4) /
                             (((iVar6 - iVar5) + 2) * (int)(param_1 + 3)));
            iVar6 = DAT_008033a4;
          }
          iVar5 = iVar5 + 1;
          local_40 = local_40 + 1;
          pbVar14 = pbVar14 + 2;
        } while (iVar5 < iVar6);
      }
      param_1 = param_1 + 1;
      local_38 = local_38 + 3;
      local_34 = local_34 + 4;
      local_30 = local_30 + 5;
    } while (local_38 < 0x10);
    if ((int)param_1 < DAT_008033a8 + -2) {
      do {
        iVar10 = 0;
        local_8 = (ushort *)(local_14 + iVar6 * (int)param_1);
        local_10 = (ushort *)(DAT_00803380 + iVar6 * (int)param_1 * 2);
        iVar5 = 3;
        puVar16 = local_8;
        do {
          uVar2 = *puVar16;
          puVar16 = puVar16 + 1;
          iVar10 = iVar10 + (uint)uVar2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if ((*local_10 & 7) != 0) {
          iVar6 = iVar10 + (uint)*(byte *)((int)local_10 + 1) * 4;
          *(char *)((int)local_10 + 1) =
               ((char)(iVar6 / 0xf) + (char)(iVar6 >> 0x1f)) -
               (char)((longlong)iVar6 * 0x88888889 >> 0x3f);
          iVar6 = DAT_008033a4;
        }
        local_3c = local_8 + 3;
        local_40 = (ushort *)0x14;
        pbVar14 = (byte *)((int)local_10 + 3);
        local_c = 3;
        do {
          iVar10 = iVar10 + (uint)*local_3c;
          if ((pbVar14[-1] & 7) != 0) {
            *pbVar14 = (byte)((int)(iVar10 + (uint)*pbVar14 * 4) / (int)local_40);
            iVar6 = DAT_008033a4;
          }
          local_40 = (ushort *)((int)local_40 + 5);
          local_3c = local_3c + 1;
          pbVar14 = pbVar14 + 2;
        } while ((int)local_40 < 0x1a);
        if (3 < iVar6 + -2) {
          pbVar14 = (byte *)((int)local_10 + 7);
          puVar16 = local_8 + 5;
          do {
            iVar10 = iVar10 + ((uint)*puVar16 - (uint)puVar16[-5]);
            if ((pbVar14[-1] & 7) != 0) {
              iVar6 = iVar10 + (uint)*pbVar14 * 4;
              *pbVar14 = ((char)(iVar6 / 0x19) + (char)(iVar6 >> 0x1f)) -
                         (char)((longlong)iVar6 * 0x51eb851f >> 0x3f);
              iVar6 = DAT_008033a4;
            }
            local_c = local_c + 1;
            puVar16 = puVar16 + 1;
            pbVar14 = pbVar14 + 2;
          } while (local_c < iVar6 + -2);
        }
        if (local_c < iVar6) {
          pbVar14 = (byte *)((int)local_10 + local_c * 2 + 1);
          local_40 = local_8 + local_c + -3;
          iVar5 = local_c;
          do {
            iVar10 = iVar10 - (uint)*local_40;
            if ((pbVar14[-1] & 7) != 0) {
              *pbVar14 = (byte)((int)(iVar10 + (uint)*pbVar14 * 4) / (((iVar6 - iVar5) + 2) * 5));
              iVar6 = DAT_008033a4;
            }
            iVar5 = iVar5 + 1;
            local_40 = local_40 + 1;
            pbVar14 = pbVar14 + 2;
          } while (iVar5 < iVar6);
        }
        param_1 = param_1 + 1;
      } while ((int)param_1 < DAT_008033a8 + -2);
    }
    if ((int)param_1 < DAT_008033a8) {
      do {
        iVar10 = (DAT_008033a8 - (int)param_1) + 2;
        iVar17 = 0;
        local_8 = (ushort *)(local_14 + iVar6 * (int)param_1);
        local_10 = (ushort *)(iVar6 * (int)param_1 * 2 + DAT_00803380);
        iVar5 = 3;
        puVar16 = local_8;
        do {
          uVar2 = *puVar16;
          puVar16 = puVar16 + 1;
          iVar17 = iVar17 + (uint)uVar2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if ((*local_10 & 7) != 0) {
          *(byte *)((int)local_10 + 1) =
               (byte)((int)(iVar17 + (uint)*(byte *)((int)local_10 + 1) * 4) / (iVar10 * 3));
          iVar6 = DAT_008033a4;
        }
        local_40 = (ushort *)(iVar10 * 4);
        local_3c = local_8 + 3;
        pbVar14 = (byte *)((int)local_10 + 3);
        local_44 = (undefined1 *)0x2;
        local_c = 3;
        do {
          iVar17 = iVar17 + (uint)*local_3c;
          if ((pbVar14[-1] & 7) != 0) {
            *pbVar14 = (byte)((int)(iVar17 + (uint)*pbVar14 * 4) / (int)local_40);
            iVar6 = DAT_008033a4;
          }
          local_3c = local_3c + 1;
          local_40 = (ushort *)((int)local_40 + iVar10);
          pbVar14 = pbVar14 + 2;
          local_44 = (undefined1 *)((int)local_44 + -1);
        } while (local_44 != (undefined1 *)0x0);
        if (3 < iVar6 + -2) {
          local_40 = (ushort *)((int)local_10 + 7);
          puVar16 = local_8 + 5;
          do {
            iVar17 = iVar17 + ((uint)*puVar16 - (uint)puVar16[-5]);
            if ((*(byte *)((int)local_40 + -1) & 7) != 0) {
              *(byte *)local_40 = (byte)((int)(iVar17 + (uint)(byte)*local_40 * 4) / (iVar10 * 5));
              iVar6 = DAT_008033a4;
            }
            local_40 = (ushort *)((int)local_40 + 2);
            local_c = local_c + 1;
            puVar16 = puVar16 + 1;
          } while (local_c < iVar6 + -2);
        }
        if (local_c < iVar6) {
          pbVar14 = (byte *)((int)local_10 + local_c * 2 + 1);
          local_40 = local_8 + local_c + -3;
          do {
            iVar17 = iVar17 - (uint)*local_40;
            if ((pbVar14[-1] & 7) != 0) {
              *pbVar14 = (byte)((int)(iVar17 + (uint)*pbVar14 * 4) /
                               (((iVar6 - local_c) + 2) * iVar10));
              iVar6 = DAT_008033a4;
            }
            local_c = local_c + 1;
            local_40 = local_40 + 1;
            pbVar14 = pbVar14 + 2;
          } while (local_c < iVar6);
        }
        param_1 = param_1 + 1;
      } while ((int)param_1 < DAT_008033a8);
    }
  }
  FUN_006ab060(&local_14);
  return;
}

