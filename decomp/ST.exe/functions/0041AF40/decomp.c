
undefined4 FUN_0041af40(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined4 uVar5;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined3 extraout_var_18;
  undefined3 extraout_var_19;
  undefined3 extraout_var_20;
  undefined3 extraout_var_21;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  int *piVar11;
  short *psVar12;
  short *psVar13;
  byte *pbVar14;
  int *piVar15;
  char *pcVar16;
  void *unaff_EDI;
  undefined4 *puVar17;
  byte *pbVar18;
  short *psVar19;
  short *psVar20;
  int *piVar21;
  char *pcVar22;
  bool bVar23;
  undefined1 uVar24;
  undefined4 local_58;
  undefined4 local_54 [16];
  int *local_14;
  int *local_10;
  byte *local_c;
  char *local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar3 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    iVar6 = FUN_006ad4d0(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7eb,0,iVar3,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar3,0,0x7a4e0c,0x7ec);
    return 0xffff;
  }
  FUN_006e5fd0();
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_1 + 0x10) != 2) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    piVar11 = *(int **)(param_1 + 0x14);
    if (piVar11 == (int *)0x0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7a4e0c,0x678);
    }
    local_10[8] = *piVar11;
    local_10[9] = piVar11[1];
    local_10[0xb] = piVar11[4];
    local_10[10] = piVar11[2];
    iVar3 = local_10[6] * DAT_00808754;
    local_10[7] = iVar3;
    uVar4 = iVar3 * 0x41c64e6d + 0x3039;
    local_10[7] = uVar4;
    *(short *)(local_10 + 0x3e) = (short)((ulonglong)(uVar4 >> 0x10) % 0x1f) + 0x1e;
    (**(code **)(*local_10 + 0xcc))();
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  if (-1 < *(int *)((int)local_10 + 0x8f)) {
    *(int *)((int)local_10 + 0x8f) = *(int *)((int)local_10 + 0x8f) + 1;
  }
  (**(code **)(*local_10 + 0xd0))();
  if (*(int *)((int)local_10 + 0x1cd) != 1) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  uVar4 = local_10[8];
  if (uVar4 < 0x1af) {
    if (uVar4 == 0x1ae) {
      if (DAT_00801688 == (void *)0x0) {
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      bVar2 = thunk_FUN_004fab10(DAT_00801688,1);
      if (CONCAT31(extraout_var_05,bVar2) != 0) {
        (**(code **)(*local_10 + 0x30))(*(undefined4 *)((int)local_10 + 0x121));
        iVar3 = 0x1b;
        bVar2 = true;
        psVar13 = *(short **)((int)local_10 + 0x121);
        psVar20 = *(short **)((int)local_10 + 0x11d);
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar2 = *psVar13 == *psVar20;
          psVar13 = psVar13 + 1;
          psVar20 = psVar20 + 1;
        } while (bVar2);
        if (!bVar2) {
          psVar13 = *(short **)((int)local_10 + 0x121);
          psVar20 = *(short **)((int)local_10 + 0x11d);
          for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)psVar20 = *(undefined4 *)psVar13;
            psVar13 = psVar13 + 2;
            psVar20 = psVar20 + 2;
          }
          *psVar20 = *psVar13;
          thunk_FUN_0043fc50(1,0);
        }
      }
      if (DAT_00801688 == (void *)0x0) {
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      bVar2 = thunk_FUN_004fab10(DAT_00801688,2);
      if (CONCAT31(extraout_var_06,bVar2) != 0) {
        (**(code **)(*local_10 + 0x34))(*(undefined4 *)((int)local_10 + 0x129));
        iVar3 = 0x17;
        bVar2 = true;
        piVar11 = *(int **)((int)local_10 + 0x129);
        piVar15 = *(int **)((int)local_10 + 0x125);
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar2 = *piVar11 == *piVar15;
          piVar11 = piVar11 + 1;
          piVar15 = piVar15 + 1;
        } while (bVar2);
        if (!bVar2) {
          piVar11 = *(int **)((int)local_10 + 0x129);
          piVar15 = *(int **)((int)local_10 + 0x125);
          for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar15 = *piVar11;
            piVar11 = piVar11 + 1;
            piVar15 = piVar15 + 1;
          }
          thunk_FUN_0043fc50(2,0);
        }
      }
      if (DAT_00801688 == (void *)0x0) {
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      bVar2 = thunk_FUN_004fab10(DAT_00801688,0xe);
      if (CONCAT31(extraout_var_07,bVar2) != 0) {
        (**(code **)(*local_10 + 0x58))(*(undefined4 *)((int)local_10 + 0x1b1));
        pcVar8 = *(char **)((int)local_10 + 0x1ad);
        local_8 = *(char **)((int)local_10 + 0x1b1);
        iVar3 = 0xb;
        bVar2 = true;
        pcVar10 = local_8;
        pcVar16 = pcVar8;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar2 = *pcVar10 == *pcVar16;
          pcVar10 = pcVar10 + 1;
          pcVar16 = pcVar16 + 1;
        } while (bVar2);
        if (!bVar2) {
          *(undefined4 *)pcVar8 = *(undefined4 *)local_8;
          *(undefined4 *)(pcVar8 + 4) = *(undefined4 *)(local_8 + 4);
          *(undefined2 *)(pcVar8 + 8) = *(undefined2 *)(local_8 + 8);
          pcVar8[10] = local_8[10];
          thunk_FUN_0043fc50(0xe,0);
        }
      }
      if (DAT_00801688 == (void *)0x0) {
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      bVar2 = thunk_FUN_004fab10(DAT_00801688,0x12);
      if (CONCAT31(extraout_var_08,bVar2) == 0) {
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      (**(code **)(*local_10 + 100))(*(undefined4 *)((int)local_10 + 0x1c9));
      psVar13 = *(short **)((int)local_10 + 0x1c5);
      psVar20 = *(short **)((int)local_10 + 0x1c9);
      iVar3 = 3;
      bVar2 = true;
      psVar12 = psVar20;
      psVar19 = psVar13;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar2 = *psVar12 == *psVar19;
        psVar12 = psVar12 + 1;
        psVar19 = psVar19 + 1;
      } while (bVar2);
      if (bVar2) {
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      *(undefined4 *)psVar13 = *(undefined4 *)psVar20;
      psVar13[2] = psVar20[2];
      uVar24 = 0x12;
      goto LAB_0041be5f;
    }
    if (uVar4 < 0x173) {
      if (uVar4 != 0x172) {
        if (uVar4 == 0x14) {
          if ((DAT_00801688 != (void *)0x0) &&
             (bVar2 = thunk_FUN_004fab10(DAT_00801688,1), CONCAT31(extraout_var,bVar2) != 0)) {
            (**(code **)(*local_10 + 0x30))(*(undefined4 *)((int)local_10 + 0x121));
            iVar3 = 0x1b;
            bVar2 = true;
            psVar13 = *(short **)((int)local_10 + 0x121);
            psVar20 = *(short **)((int)local_10 + 0x11d);
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar2 = *psVar13 == *psVar20;
              psVar13 = psVar13 + 1;
              psVar20 = psVar20 + 1;
            } while (bVar2);
            if (!bVar2) {
              uVar4 = thunk_FUN_00440600(0,0);
              if ((short)uVar4 == 1) {
                puVar7 = *(undefined4 **)((int)local_10 + 0x121);
              }
              else {
                puVar7 = *(undefined4 **)((int)local_10 + 0x121);
                if (*(char *)((int)puVar7 + 0x1b) ==
                    *(char *)(*(int *)((int)local_10 + 0x11d) + 0x1b)) {
                  iVar3 = 5;
                  bVar2 = true;
                  pcVar8 = (char *)((int)puVar7 + 0x2a);
                  pcVar10 = (char *)(*(int *)((int)local_10 + 0x11d) + 0x2a);
                  do {
                    if (iVar3 == 0) break;
                    iVar3 = iVar3 + -1;
                    bVar2 = *pcVar8 == *pcVar10;
                    pcVar8 = pcVar8 + 1;
                    pcVar10 = pcVar10 + 1;
                  } while (bVar2);
                  if (bVar2) goto LAB_0041b128;
                }
              }
              puVar17 = *(undefined4 **)((int)local_10 + 0x11d);
              for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar17 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar17 = puVar17 + 1;
              }
              *(undefined2 *)puVar17 = *(undefined2 *)puVar7;
              thunk_FUN_0043fc50(1,0);
            }
          }
LAB_0041b128:
          if ((DAT_00801688 != (void *)0x0) &&
             (bVar2 = thunk_FUN_004fab10(DAT_00801688,2), CONCAT31(extraout_var_00,bVar2) != 0)) {
            (**(code **)(*local_10 + 0x34))(*(undefined4 *)((int)local_10 + 0x129));
            iVar3 = 0x17;
            bVar2 = true;
            piVar11 = *(int **)((int)local_10 + 0x129);
            piVar15 = *(int **)((int)local_10 + 0x125);
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar2 = *piVar11 == *piVar15;
              piVar11 = piVar11 + 1;
              piVar15 = piVar15 + 1;
            } while (bVar2);
            if (!bVar2) {
              piVar11 = *(int **)((int)local_10 + 0x129);
              piVar15 = *(int **)((int)local_10 + 0x125);
              for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
                *piVar15 = *piVar11;
                piVar11 = piVar11 + 1;
                piVar15 = piVar15 + 1;
              }
              thunk_FUN_0043fc50(2,0);
            }
          }
          if ((DAT_00801688 != (void *)0x0) &&
             (bVar2 = thunk_FUN_004fab10(DAT_00801688,8), CONCAT31(extraout_var_01,bVar2) != 0)) {
            piVar11 = (int *)((int)local_10 + 0x171);
            if (*(byte **)((int)local_10 + 0x171) != (byte *)0x0) {
              FUN_006ae110(*(byte **)((int)local_10 + 0x171));
            }
            if (*(byte **)((int)local_10 + 0x175) != (byte *)0x0) {
              FUN_006ae110(*(byte **)((int)local_10 + 0x175));
            }
            if (*(byte **)((int)local_10 + 0x179) != (byte *)0x0) {
              FUN_006ae110(*(byte **)((int)local_10 + 0x179));
            }
            if (*(byte **)((int)local_10 + 0x17d) != (byte *)0x0) {
              FUN_006ae110(*(byte **)((int)local_10 + 0x17d));
            }
            if (*(byte **)((int)local_10 + 0x181) != (byte *)0x0) {
              FUN_006ae110(*(byte **)((int)local_10 + 0x181));
            }
            *piVar11 = 0;
            *(undefined4 *)((int)local_10 + 0x175) = 0;
            *(undefined4 *)((int)local_10 + 0x179) = 0;
            *(undefined4 *)((int)local_10 + 0x17d) = 0;
            *(undefined4 *)((int)local_10 + 0x181) = 0;
            (**(code **)(*local_10 + 0x40))(piVar11);
            local_c = *(byte **)((int)local_10 + 0x15d);
            bVar2 = false;
            iVar3 = *(int *)(*piVar11 + 0xc);
            if (iVar3 == *(int *)(local_c + 0xc)) {
              iVar3 = iVar3 * 0x30;
              bVar23 = true;
              pcVar8 = *(char **)(*piVar11 + 0x1c);
              pcVar10 = *(char **)(local_c + 0x1c);
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar23 = *pcVar8 == *pcVar10;
                pcVar8 = pcVar8 + 1;
                pcVar10 = pcVar10 + 1;
              } while (bVar23);
              if (!bVar23) goto LAB_0041b237;
            }
            else {
LAB_0041b237:
              bVar2 = true;
            }
            if (!bVar2) {
              iVar3 = *(int *)(*(int *)((int)local_10 + 0x175) + 0xc);
              if (iVar3 == *(int *)(*(int *)((int)local_10 + 0x161) + 0xc)) {
                iVar3 = iVar3 * 0x30;
                bVar23 = true;
                pcVar8 = *(char **)(*(int *)((int)local_10 + 0x175) + 0x1c);
                pcVar10 = *(char **)(*(int *)((int)local_10 + 0x161) + 0x1c);
                do {
                  if (iVar3 == 0) break;
                  iVar3 = iVar3 + -1;
                  bVar23 = *pcVar8 == *pcVar10;
                  pcVar8 = pcVar8 + 1;
                  pcVar10 = pcVar10 + 1;
                } while (bVar23);
                if (!bVar23) goto LAB_0041b26c;
              }
              else {
LAB_0041b26c:
                bVar2 = true;
              }
              if (!bVar2) {
                iVar3 = *(int *)(*(int *)((int)local_10 + 0x179) + 0xc);
                if (iVar3 == *(int *)(*(int *)((int)local_10 + 0x165) + 0xc)) {
                  iVar3 = iVar3 * 0x30;
                  bVar23 = true;
                  pcVar8 = *(char **)(*(int *)((int)local_10 + 0x179) + 0x1c);
                  pcVar10 = *(char **)(*(int *)((int)local_10 + 0x165) + 0x1c);
                  do {
                    if (iVar3 == 0) break;
                    iVar3 = iVar3 + -1;
                    bVar23 = *pcVar8 == *pcVar10;
                    pcVar8 = pcVar8 + 1;
                    pcVar10 = pcVar10 + 1;
                  } while (bVar23);
                  if (!bVar23) goto LAB_0041b2a1;
                }
                else {
LAB_0041b2a1:
                  bVar2 = true;
                }
                if (!bVar2) {
                  iVar3 = *(int *)(*(int *)((int)local_10 + 0x17d) + 0xc);
                  if (iVar3 == *(int *)(*(int *)((int)local_10 + 0x169) + 0xc)) {
                    iVar3 = iVar3 * 0x30;
                    bVar23 = true;
                    pcVar8 = *(char **)(*(int *)((int)local_10 + 0x17d) + 0x1c);
                    pcVar10 = *(char **)(*(int *)((int)local_10 + 0x169) + 0x1c);
                    do {
                      if (iVar3 == 0) break;
                      iVar3 = iVar3 + -1;
                      bVar23 = *pcVar8 == *pcVar10;
                      pcVar8 = pcVar8 + 1;
                      pcVar10 = pcVar10 + 1;
                    } while (bVar23);
                    if (!bVar23) goto LAB_0041b2d2;
                  }
                  else {
LAB_0041b2d2:
                    bVar2 = true;
                  }
                  if (!bVar2) {
                    iVar3 = *(int *)(*(int *)((int)local_10 + 0x181) + 0xc);
                    if (iVar3 == *(int *)(*(int *)((int)local_10 + 0x16d) + 0xc)) {
                      iVar3 = iVar3 * 0x30;
                      bVar23 = true;
                      pcVar8 = *(char **)(*(int *)((int)local_10 + 0x181) + 0x1c);
                      pcVar10 = *(char **)(*(int *)((int)local_10 + 0x16d) + 0x1c);
                      do {
                        if (iVar3 == 0) break;
                        iVar3 = iVar3 + -1;
                        bVar23 = *pcVar8 == *pcVar10;
                        pcVar8 = pcVar8 + 1;
                        pcVar10 = pcVar10 + 1;
                      } while (bVar23);
                      if (bVar23) goto LAB_0041b308;
                    }
                    bVar2 = true;
                  }
                }
              }
            }
LAB_0041b308:
            if (bVar2) {
              if (local_c != (byte *)0x0) {
                FUN_006ae110(local_c);
              }
              if (*(byte **)((int)local_10 + 0x161) != (byte *)0x0) {
                FUN_006ae110(*(byte **)((int)local_10 + 0x161));
              }
              if (*(byte **)((int)local_10 + 0x165) != (byte *)0x0) {
                FUN_006ae110(*(byte **)((int)local_10 + 0x165));
              }
              if (*(byte **)((int)local_10 + 0x169) != (byte *)0x0) {
                FUN_006ae110(*(byte **)((int)local_10 + 0x169));
              }
              if (*(byte **)((int)local_10 + 0x16d) != (byte *)0x0) {
                FUN_006ae110(*(byte **)((int)local_10 + 0x16d));
              }
              *(int *)((int)local_10 + 0x15d) = 0;
              *(undefined4 *)((int)local_10 + 0x161) = 0;
              *(undefined4 *)((int)local_10 + 0x165) = 0;
              *(undefined4 *)((int)local_10 + 0x169) = 0;
              *(undefined4 *)((int)local_10 + 0x16d) = 0;
              FUN_006afe40((int *)((int)local_10 + 0x15d),*(uint **)((int)local_10 + 0x171));
              FUN_006afe40((int *)((int)local_10 + 0x161),*(uint **)((int)local_10 + 0x175));
              FUN_006afe40((int *)((int)local_10 + 0x165),*(uint **)((int)local_10 + 0x179));
              FUN_006afe40((int *)((int)local_10 + 0x169),*(uint **)((int)local_10 + 0x17d));
              FUN_006afe40((int *)((int)local_10 + 0x16d),*(uint **)((int)local_10 + 0x181));
              thunk_FUN_0043fc50(8,0);
            }
          }
          if ((DAT_00801688 != (void *)0x0) &&
             (bVar2 = thunk_FUN_004fab10(DAT_00801688,0xb), CONCAT31(extraout_var_02,bVar2) != 0)) {
            (**(code **)(*local_10 + 0x4c))(*(undefined4 *)((int)local_10 + 0x199));
            pbVar14 = *(byte **)((int)local_10 + 0x195);
            local_c = *(byte **)((int)local_10 + 0x199);
            iVar3 = 0x13;
            bVar2 = true;
            pbVar9 = local_c;
            pbVar18 = pbVar14;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar2 = *pbVar9 == *pbVar18;
              pbVar9 = pbVar9 + 1;
              pbVar18 = pbVar18 + 1;
            } while (bVar2);
            if (!bVar2) {
              *(int *)pbVar14 = *(int *)local_c;
              *(int *)(pbVar14 + 4) = *(int *)(local_c + 4);
              *(int *)(pbVar14 + 8) = *(int *)(local_c + 8);
              *(int *)(pbVar14 + 0xc) = *(int *)(local_c + 0xc);
              *(undefined2 *)(pbVar14 + 0x10) = *(undefined2 *)(local_c + 0x10);
              pbVar14[0x12] = local_c[0x12];
              thunk_FUN_0043fc50(0xb,0);
            }
          }
          if ((DAT_00801688 != (void *)0x0) &&
             (bVar2 = thunk_FUN_004fab10(DAT_00801688,0xe), CONCAT31(extraout_var_03,bVar2) != 0)) {
            (**(code **)(*local_10 + 0x58))(*(undefined4 *)((int)local_10 + 0x1b1));
            pcVar8 = *(char **)((int)local_10 + 0x1ad);
            local_8 = *(char **)((int)local_10 + 0x1b1);
            iVar3 = 0xb;
            bVar2 = true;
            pcVar10 = local_8;
            pcVar16 = pcVar8;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar2 = *pcVar10 == *pcVar16;
              pcVar10 = pcVar10 + 1;
              pcVar16 = pcVar16 + 1;
            } while (bVar2);
            if (!bVar2) {
              *(undefined4 *)pcVar8 = *(undefined4 *)local_8;
              *(undefined4 *)(pcVar8 + 4) = *(undefined4 *)(local_8 + 4);
              *(undefined2 *)(pcVar8 + 8) = *(undefined2 *)(local_8 + 8);
              pcVar8[10] = local_8[10];
              thunk_FUN_0043fc50(0xe,0);
            }
          }
          if (DAT_00801688 == (void *)0x0) {
            DAT_00858df8 = (undefined4 *)local_58;
            return 0;
          }
          bVar2 = thunk_FUN_004fab10(DAT_00801688,0x10);
          if (CONCAT31(extraout_var_04,bVar2) == 0) {
            DAT_00858df8 = (undefined4 *)local_58;
            return 0;
          }
          (**(code **)(*local_10 + 0x60))(*(undefined4 *)((int)local_10 + 0x1c1));
          iVar3 = 0x90;
          bVar2 = true;
          piVar11 = *(int **)((int)local_10 + 0x1c1);
          piVar15 = *(int **)((int)local_10 + 0x1bd);
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar2 = *piVar11 == *piVar15;
            piVar11 = piVar11 + 1;
            piVar15 = piVar15 + 1;
          } while (bVar2);
          if (bVar2) {
            DAT_00858df8 = (undefined4 *)local_58;
            return 0;
          }
          piVar11 = *(int **)((int)local_10 + 0x1c1);
          piVar15 = *(int **)((int)local_10 + 0x1bd);
          for (iVar3 = 0x90; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar15 = *piVar11;
            piVar11 = piVar11 + 1;
            piVar15 = piVar15 + 1;
          }
          uVar24 = 0x10;
          goto LAB_0041be5f;
        }
        if (uVar4 != 0x5a) goto LAB_0041b6c6;
      }
    }
    else if (uVar4 != 0x1a4) {
LAB_0041b6c6:
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7e4,0,0,&DAT_007a4ccc);
      if (iVar3 == 0) {
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
LAB_0041bdb3:
    if (DAT_00801688 == (void *)0x0) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    bVar2 = thunk_FUN_004fab10(DAT_00801688,5);
    if (CONCAT31(extraout_var_20,bVar2) != 0) {
      (**(code **)(*local_10 + 0x30))(*(undefined4 *)((int)local_10 + 0x121));
      iVar3 = 0x1b;
      bVar2 = true;
      psVar13 = *(short **)((int)local_10 + 0x121);
      psVar20 = *(short **)((int)local_10 + 0x11d);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar2 = *psVar13 == *psVar20;
        psVar13 = psVar13 + 1;
        psVar20 = psVar20 + 1;
      } while (bVar2);
      if (!bVar2) {
        psVar13 = *(short **)((int)local_10 + 0x121);
        psVar20 = *(short **)((int)local_10 + 0x11d);
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)psVar20 = *(undefined4 *)psVar13;
          psVar13 = psVar13 + 2;
          psVar20 = psVar20 + 2;
        }
        *psVar20 = *psVar13;
        thunk_FUN_0043fc50(5,0);
      }
    }
    if (DAT_00801688 == (void *)0x0) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    bVar2 = thunk_FUN_004fab10(DAT_00801688,4);
    if (CONCAT31(extraout_var_21,bVar2) == 0) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    (**(code **)(*local_10 + 0x34))(*(undefined4 *)((int)local_10 + 0x129));
    iVar3 = 0x17;
    bVar2 = true;
    piVar11 = *(int **)((int)local_10 + 0x129);
    piVar15 = *(int **)((int)local_10 + 0x125);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar2 = *piVar11 == *piVar15;
      piVar11 = piVar11 + 1;
      piVar15 = piVar15 + 1;
    } while (bVar2);
    if (bVar2) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    piVar11 = *(int **)((int)local_10 + 0x129);
    piVar15 = *(int **)((int)local_10 + 0x125);
    for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar15 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar15 = piVar15 + 1;
    }
    uVar24 = 4;
    goto LAB_0041be5f;
  }
  if (uVar4 == 0x1b8) goto LAB_0041bdb3;
  if (uVar4 != 1000) {
    if (uVar4 != 0x3e9) goto LAB_0041b6c6;
    if (DAT_00801688 == (void *)0x0) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    bVar2 = thunk_FUN_004fab10(DAT_00801688,4);
    if (CONCAT31(extraout_var_09,bVar2) != 0) {
      (**(code **)(*local_10 + 0x34))(*(undefined4 *)((int)local_10 + 0x129));
      iVar3 = 0x17;
      bVar2 = true;
      piVar11 = *(int **)((int)local_10 + 0x129);
      piVar15 = *(int **)((int)local_10 + 0x125);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar2 = *piVar11 == *piVar15;
        piVar11 = piVar11 + 1;
        piVar15 = piVar15 + 1;
      } while (bVar2);
      if (!bVar2) {
        piVar11 = *(int **)((int)local_10 + 0x129);
        piVar15 = *(int **)((int)local_10 + 0x125);
        for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar15 = *piVar11;
          piVar11 = piVar11 + 1;
          piVar15 = piVar15 + 1;
        }
        thunk_FUN_0043fc50(4,0);
      }
    }
    if (DAT_00801688 == (void *)0x0) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    bVar2 = thunk_FUN_004fab10(DAT_00801688,5);
    if (CONCAT31(extraout_var_10,bVar2) == 0) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    (**(code **)(*local_10 + 0x30))(*(undefined4 *)((int)local_10 + 0x121));
    iVar3 = 0x1b;
    bVar2 = true;
    psVar13 = *(short **)((int)local_10 + 0x121);
    psVar20 = *(short **)((int)local_10 + 0x11d);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar2 = *psVar13 == *psVar20;
      psVar13 = psVar13 + 1;
      psVar20 = psVar20 + 1;
    } while (bVar2);
    if (bVar2) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    psVar13 = *(short **)((int)local_10 + 0x121);
    psVar20 = *(short **)((int)local_10 + 0x11d);
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)psVar20 = *(undefined4 *)psVar13;
      psVar13 = psVar13 + 2;
      psVar20 = psVar20 + 2;
    }
    *psVar20 = *psVar13;
    uVar24 = 5;
    goto LAB_0041be5f;
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar2 = thunk_FUN_004fab10(DAT_00801688,4);
  if (CONCAT31(extraout_var_11,bVar2) != 0) {
    (**(code **)(*local_10 + 0x34))(*(undefined4 *)((int)local_10 + 0x129));
    iVar3 = 0x17;
    bVar2 = true;
    piVar11 = *(int **)((int)local_10 + 0x129);
    piVar15 = *(int **)((int)local_10 + 0x125);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar2 = *piVar11 == *piVar15;
      piVar11 = piVar11 + 1;
      piVar15 = piVar15 + 1;
    } while (bVar2);
    if (!bVar2) {
      piVar11 = *(int **)((int)local_10 + 0x129);
      piVar15 = *(int **)((int)local_10 + 0x125);
      for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar15 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar15 = piVar15 + 1;
      }
      thunk_FUN_0043fc50(4,0);
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar2 = thunk_FUN_004fab10(DAT_00801688,5);
  if (CONCAT31(extraout_var_12,bVar2) != 0) {
    (**(code **)(*local_10 + 0x30))(*(undefined4 *)((int)local_10 + 0x121));
    iVar3 = 0x1b;
    bVar2 = true;
    psVar13 = *(short **)((int)local_10 + 0x121);
    psVar20 = *(short **)((int)local_10 + 0x11d);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar2 = *psVar13 == *psVar20;
      psVar13 = psVar13 + 1;
      psVar20 = psVar20 + 1;
    } while (bVar2);
    if (!bVar2) {
      psVar13 = *(short **)((int)local_10 + 0x121);
      psVar20 = *(short **)((int)local_10 + 0x11d);
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)psVar20 = *(undefined4 *)psVar13;
        psVar13 = psVar13 + 2;
        psVar20 = psVar20 + 2;
      }
      *psVar20 = *psVar13;
      thunk_FUN_0043fc50(5,0);
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar2 = thunk_FUN_004fab10(DAT_00801688,6);
  if (CONCAT31(extraout_var_13,bVar2) != 0) {
    piVar11 = (int *)((int)local_10 + 0x135);
    if (*(byte **)((int)local_10 + 0x135) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x135));
    }
    if (*(byte **)((int)local_10 + 0x139) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x139));
    }
    *piVar11 = 0;
    *(undefined4 *)((int)local_10 + 0x139) = 0;
    (**(code **)(*local_10 + 0x38))(piVar11);
    bVar2 = false;
    iVar3 = *(int *)(*piVar11 + 0xc);
    if (iVar3 == *(int *)(*(int *)((int)local_10 + 0x12d) + 0xc)) {
      iVar3 = iVar3 * 0x30;
      bVar23 = true;
      pcVar8 = *(char **)(*piVar11 + 0x1c);
      pcVar10 = *(char **)(*(int *)((int)local_10 + 0x12d) + 0x1c);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar23 = *pcVar8 == *pcVar10;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      } while (bVar23);
      if (!bVar23) goto LAB_0041b8f6;
    }
    else {
LAB_0041b8f6:
      bVar2 = true;
    }
    if (!bVar2) {
      iVar3 = *(int *)(*(int *)((int)local_10 + 0x139) + 0xc);
      if (iVar3 == *(int *)(*(int *)((int)local_10 + 0x131) + 0xc)) {
        iVar3 = iVar3 * 0x30;
        bVar23 = true;
        pcVar8 = *(char **)(*(int *)((int)local_10 + 0x139) + 0x1c);
        pcVar10 = *(char **)(*(int *)((int)local_10 + 0x131) + 0x1c);
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar23 = *pcVar8 == *pcVar10;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
        } while (bVar23);
        if (bVar23) goto LAB_0041b92c;
      }
      bVar2 = true;
    }
LAB_0041b92c:
    if (bVar2) {
      if (*(byte **)((int)local_10 + 0x12d) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x12d));
      }
      if (*(byte **)((int)local_10 + 0x131) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x131));
      }
      *(int *)((int)local_10 + 0x12d) = 0;
      *(undefined4 *)((int)local_10 + 0x131) = 0;
      FUN_006afe40((int *)((int)local_10 + 0x12d),*(uint **)((int)local_10 + 0x135));
      FUN_006afe40((int *)((int)local_10 + 0x131),*(uint **)((int)local_10 + 0x139));
      uVar24 = 6;
      goto LAB_0041be5f;
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar2 = thunk_FUN_004fab10(DAT_00801688,7);
  if (CONCAT31(extraout_var_14,bVar2) != 0) {
    piVar11 = (int *)((int)local_10 + 0x14d);
    if (*(byte **)((int)local_10 + 0x14d) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x14d));
    }
    if (*(byte **)((int)local_10 + 0x151) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x151));
    }
    if (*(byte **)((int)local_10 + 0x155) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x155));
    }
    if (*(byte **)((int)local_10 + 0x159) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x159));
    }
    *piVar11 = 0;
    *(undefined4 *)((int)local_10 + 0x151) = 0;
    *(undefined4 *)((int)local_10 + 0x155) = 0;
    *(undefined4 *)((int)local_10 + 0x159) = 0;
    (**(code **)(*local_10 + 0x3c))(piVar11);
    local_c = *(byte **)((int)local_10 + 0x13d);
    bVar2 = false;
    iVar3 = *(int *)(*piVar11 + 0xc);
    if (iVar3 == *(int *)(local_c + 0xc)) {
      iVar3 = iVar3 * 0x30;
      bVar23 = true;
      pcVar8 = *(char **)(*piVar11 + 0x1c);
      pcVar10 = *(char **)(local_c + 0x1c);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar23 = *pcVar8 == *pcVar10;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      } while (bVar23);
      if (!bVar23) goto LAB_0041ba2a;
    }
    else {
LAB_0041ba2a:
      bVar2 = true;
    }
    if (!bVar2) {
      iVar3 = *(int *)(*(int *)((int)local_10 + 0x151) + 0xc);
      if (iVar3 == *(int *)(*(int *)((int)local_10 + 0x141) + 0xc)) {
        iVar3 = iVar3 * 0x30;
        bVar23 = true;
        pcVar8 = *(char **)(*(int *)((int)local_10 + 0x151) + 0x1c);
        pcVar10 = *(char **)(*(int *)((int)local_10 + 0x141) + 0x1c);
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar23 = *pcVar8 == *pcVar10;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
        } while (bVar23);
        if (!bVar23) goto LAB_0041ba5f;
      }
      else {
LAB_0041ba5f:
        bVar2 = true;
      }
      if (!bVar2) {
        iVar3 = *(int *)(*(int *)((int)local_10 + 0x155) + 0xc);
        if (iVar3 == *(int *)(*(int *)((int)local_10 + 0x145) + 0xc)) {
          iVar3 = iVar3 * 0x30;
          bVar23 = true;
          pcVar8 = *(char **)(*(int *)((int)local_10 + 0x155) + 0x1c);
          pcVar10 = *(char **)(*(int *)((int)local_10 + 0x145) + 0x1c);
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar23 = *pcVar8 == *pcVar10;
            pcVar8 = pcVar8 + 1;
            pcVar10 = pcVar10 + 1;
          } while (bVar23);
          if (!bVar23) goto LAB_0041ba90;
        }
        else {
LAB_0041ba90:
          bVar2 = true;
        }
        if (!bVar2) {
          iVar3 = *(int *)(*(int *)((int)local_10 + 0x159) + 0xc);
          if (iVar3 == *(int *)(*(int *)((int)local_10 + 0x149) + 0xc)) {
            iVar3 = iVar3 * 0x30;
            bVar23 = true;
            pcVar8 = *(char **)(*(int *)((int)local_10 + 0x159) + 0x1c);
            pcVar10 = *(char **)(*(int *)((int)local_10 + 0x149) + 0x1c);
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar23 = *pcVar8 == *pcVar10;
              pcVar8 = pcVar8 + 1;
              pcVar10 = pcVar10 + 1;
            } while (bVar23);
            if (bVar23) goto LAB_0041bac6;
          }
          bVar2 = true;
        }
      }
    }
LAB_0041bac6:
    if (bVar2) {
      if (local_c != (byte *)0x0) {
        FUN_006ae110(local_c);
      }
      if (*(byte **)((int)local_10 + 0x141) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x141));
      }
      if (*(byte **)((int)local_10 + 0x145) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x145));
      }
      if (*(byte **)((int)local_10 + 0x149) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x149));
      }
      *(int *)((int)local_10 + 0x13d) = 0;
      *(undefined4 *)((int)local_10 + 0x141) = 0;
      *(undefined4 *)((int)local_10 + 0x145) = 0;
      *(undefined4 *)((int)local_10 + 0x149) = 0;
      FUN_006afe40((int *)((int)local_10 + 0x13d),*(uint **)((int)local_10 + 0x14d));
      FUN_006afe40((int *)((int)local_10 + 0x141),*(uint **)((int)local_10 + 0x151));
      FUN_006afe40((int *)((int)local_10 + 0x145),*(uint **)((int)local_10 + 0x155));
      FUN_006afe40((int *)((int)local_10 + 0x149),*(uint **)((int)local_10 + 0x159));
      uVar24 = 7;
      goto LAB_0041be5f;
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar2 = thunk_FUN_004fab10(DAT_00801688,9);
  if (CONCAT31(extraout_var_15,bVar2) != 0) {
    (**(code **)(*local_10 + 0x44))(*(undefined4 *)((int)local_10 + 0x189));
    iVar3 = 0x129;
    bVar2 = true;
    pcVar8 = *(char **)((int)local_10 + 0x189);
    pcVar10 = *(char **)((int)local_10 + 0x185);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar2 = *pcVar8 == *pcVar10;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    } while (bVar2);
    if (!bVar2) {
      pcVar8 = *(char **)((int)local_10 + 0x189);
      pcVar10 = *(char **)((int)local_10 + 0x185);
      for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      *pcVar10 = *pcVar8;
      thunk_FUN_0043fc50(9,0);
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar2 = thunk_FUN_004fab10(DAT_00801688,10);
  if (CONCAT31(extraout_var_16,bVar2) != 0) {
    (**(code **)(*local_10 + 0x48))(*(undefined4 *)((int)local_10 + 0x191));
    piVar11 = *(int **)((int)local_10 + 0x18d);
    local_c = *(byte **)((int)local_10 + 0x191);
    iVar3 = 4;
    bVar2 = true;
    pbVar14 = local_c;
    piVar15 = piVar11;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar2 = *(int *)pbVar14 == *piVar15;
      pbVar14 = pbVar14 + 4;
      piVar15 = piVar15 + 1;
    } while (bVar2);
    if (!bVar2) {
      *piVar11 = *(int *)local_c;
      piVar11[1] = *(int *)(local_c + 4);
      piVar11[2] = *(int *)(local_c + 8);
      piVar11[3] = *(int *)(local_c + 0xc);
      thunk_FUN_0043fc50(10,0);
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar2 = thunk_FUN_004fab10(DAT_00801688,0xc);
  if (CONCAT31(extraout_var_17,bVar2) != 0) {
    piVar11 = (int *)((int)local_10 + 0x1a1);
    local_14 = piVar11;
    if (*(byte **)((int)local_10 + 0x1a1) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x1a1));
      *piVar11 = 0;
    }
    (**(code **)(*local_10 + 0x50))(piVar11);
    pbVar14 = *(byte **)((int)local_10 + 0x19d);
    local_c = (byte *)((int)local_10 + 0x19d);
    local_8 = (char *)0x0;
    iVar3 = *(int *)(*piVar11 + 0xc);
    if (iVar3 == *(int *)(pbVar14 + 0xc)) {
      iVar3 = iVar3 * 0x30;
      bVar2 = true;
      pcVar8 = *(char **)(*piVar11 + 0x1c);
      pcVar10 = *(char **)(pbVar14 + 0x1c);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar2 = *pcVar8 == *pcVar10;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      } while (bVar2);
      if (!bVar2) goto LAB_0041bcad;
    }
    else {
LAB_0041bcad:
      local_8 = (char *)0x1;
    }
    if (local_8 == (char *)0x1) {
      if (pbVar14 != (byte *)0x0) {
        FUN_006ae110(pbVar14);
        local_c[0] = 0;
        local_c[1] = 0;
        local_c[2] = 0;
        local_c[3] = 0;
      }
      FUN_006afe40((int *)local_c,(uint *)*local_14);
      uVar24 = 0xc;
      goto LAB_0041be5f;
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar2 = thunk_FUN_004fab10(DAT_00801688,0xd);
  if (CONCAT31(extraout_var_18,bVar2) != 0) {
    (**(code **)(*local_10 + 0x54))(*(undefined4 *)((int)local_10 + 0x1a9));
    piVar11 = *(int **)((int)local_10 + 0x1a5);
    local_14 = *(int **)((int)local_10 + 0x1a9);
    iVar3 = 3;
    bVar2 = true;
    piVar15 = local_14;
    piVar21 = piVar11;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar2 = *piVar15 == *piVar21;
      piVar15 = piVar15 + 1;
      piVar21 = piVar21 + 1;
    } while (bVar2);
    if (!bVar2) {
      *piVar11 = *local_14;
      piVar11[1] = local_14[1];
      piVar11[2] = local_14[2];
      thunk_FUN_0043fc50(0xd,0);
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar2 = thunk_FUN_004fab10(DAT_00801688,0xf);
  if (CONCAT31(extraout_var_19,bVar2) == 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  (**(code **)(*local_10 + 0x5c))(*(undefined4 *)((int)local_10 + 0x1b9));
  pcVar8 = *(char **)((int)local_10 + 0x1b5);
  pcVar10 = *(char **)((int)local_10 + 0x1b9);
  iVar3 = 0xb;
  bVar2 = true;
  pcVar16 = pcVar10;
  pcVar22 = pcVar8;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar2 = *pcVar16 == *pcVar22;
    pcVar16 = pcVar16 + 1;
    pcVar22 = pcVar22 + 1;
  } while (bVar2);
  if (bVar2) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  *(undefined4 *)pcVar8 = *(undefined4 *)pcVar10;
  *(undefined4 *)(pcVar8 + 4) = *(undefined4 *)(pcVar10 + 4);
  *(undefined2 *)(pcVar8 + 8) = *(undefined2 *)(pcVar10 + 8);
  pcVar8[10] = pcVar10[10];
  uVar24 = 0xf;
LAB_0041be5f:
  thunk_FUN_0043fc50(uVar24,0);
  DAT_00858df8 = (undefined4 *)local_58;
  return 0;
}

