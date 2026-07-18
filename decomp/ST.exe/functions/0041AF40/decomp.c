
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::GetMessage */

undefined4 __thiscall STGameObjC::GetMessage(STGameObjC *this,int param_1)

{
  byte *pbVar1;
  code *pcVar2;
  STGameObjC *pSVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
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
  undefined4 uVar7;
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
  int iVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  char *pcVar10;
  STGameObjC *pSVar11;
  char *pcVar12;
  int *piVar13;
  short *psVar14;
  short *psVar15;
  STGameObjC *pSVar16;
  char *pcVar17;
  void *unaff_EDI;
  undefined4 *puVar18;
  STGameObjC *pSVar19;
  short *psVar20;
  short *psVar21;
  int *piVar22;
  char *pcVar23;
  bool bVar24;
  undefined1 uVar25;
  undefined4 local_58;
  undefined4 local_54 [16];
  STGameObjC *local_14;
  STGameObjC *local_10;
  STGameObjC *local_c;
  char *local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  local_10 = this;
  iVar5 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_10;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    iVar8 = FUN_006ad4d0(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7eb,0,iVar5,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    }
    FUN_006a5e40(iVar5,0,0x7a4e0c,0x7ec);
    return 0xffff;
  }
  FUN_006e5fd0();
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_1 + 0x10) != 2) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    piVar13 = *(int **)(param_1 + 0x14);
    if (piVar13 == (int *)0x0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7a4e0c,0x678);
    }
    *(int *)(pSVar3 + 0x20) = *piVar13;
    *(int *)(pSVar3 + 0x24) = piVar13[1];
    *(int *)(pSVar3 + 0x2c) = piVar13[4];
    *(int *)(pSVar3 + 0x28) = piVar13[2];
    iVar5 = *(int *)(pSVar3 + 0x18) * DAT_00808754;
    *(int *)(pSVar3 + 0x1c) = iVar5;
    uVar6 = iVar5 * 0x41c64e6d + 0x3039;
    *(uint *)(pSVar3 + 0x1c) = uVar6;
    *(short *)(pSVar3 + 0xf8) = (short)((ulonglong)(uVar6 >> 0x10) % 0x1f) + 0x1e;
    (**(code **)(*(int *)pSVar3 + 0xcc))();
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  if (-1 < *(int *)(pSVar3 + 0x8f)) {
    *(int *)(pSVar3 + 0x8f) = *(int *)(pSVar3 + 0x8f) + 1;
  }
  (**(code **)(*(int *)pSVar3 + 0xd0))();
  if (*(int *)(pSVar3 + 0x1cd) != 1) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  uVar6 = *(uint *)(pSVar3 + 0x20);
  if (uVar6 < 0x1af) {
    if (uVar6 == 0x1ae) {
      if (DAT_00801688 == (void *)0x0) {
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      bVar4 = thunk_FUN_004fab10(DAT_00801688,1);
      if (CONCAT31(extraout_var_05,bVar4) != 0) {
        (**(code **)(*(int *)pSVar3 + 0x30))(*(undefined4 *)(pSVar3 + 0x121));
        iVar5 = 0x1b;
        bVar4 = true;
        psVar15 = *(short **)(pSVar3 + 0x121);
        psVar21 = *(short **)(pSVar3 + 0x11d);
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar4 = *psVar15 == *psVar21;
          psVar15 = psVar15 + 1;
          psVar21 = psVar21 + 1;
        } while (bVar4);
        if (!bVar4) {
          psVar15 = *(short **)(pSVar3 + 0x121);
          psVar21 = *(short **)(pSVar3 + 0x11d);
          for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)psVar21 = *(undefined4 *)psVar15;
            psVar15 = psVar15 + 2;
            psVar21 = psVar21 + 2;
          }
          *psVar21 = *psVar15;
          thunk_FUN_0043fc50(1,0);
        }
      }
      if (DAT_00801688 == (void *)0x0) {
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      bVar4 = thunk_FUN_004fab10(DAT_00801688,2);
      if (CONCAT31(extraout_var_06,bVar4) != 0) {
        (**(code **)(*(int *)pSVar3 + 0x34))(*(undefined4 *)(pSVar3 + 0x129));
        iVar5 = 0x17;
        bVar4 = true;
        piVar13 = *(int **)(pSVar3 + 0x129);
        piVar22 = *(int **)(pSVar3 + 0x125);
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar4 = *piVar13 == *piVar22;
          piVar13 = piVar13 + 1;
          piVar22 = piVar22 + 1;
        } while (bVar4);
        if (!bVar4) {
          piVar13 = *(int **)(pSVar3 + 0x129);
          piVar22 = *(int **)(pSVar3 + 0x125);
          for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar22 = *piVar13;
            piVar13 = piVar13 + 1;
            piVar22 = piVar22 + 1;
          }
          thunk_FUN_0043fc50(2,0);
        }
      }
      if (DAT_00801688 == (void *)0x0) {
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      bVar4 = thunk_FUN_004fab10(DAT_00801688,0xe);
      if (CONCAT31(extraout_var_07,bVar4) != 0) {
        (**(code **)(*(int *)pSVar3 + 0x58))(*(undefined4 *)(pSVar3 + 0x1b1));
        pcVar10 = *(char **)(pSVar3 + 0x1ad);
        local_8 = *(char **)(pSVar3 + 0x1b1);
        iVar5 = 0xb;
        bVar4 = true;
        pcVar12 = local_8;
        pcVar17 = pcVar10;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar4 = *pcVar12 == *pcVar17;
          pcVar12 = pcVar12 + 1;
          pcVar17 = pcVar17 + 1;
        } while (bVar4);
        if (!bVar4) {
          *(undefined4 *)pcVar10 = *(undefined4 *)local_8;
          *(undefined4 *)(pcVar10 + 4) = *(undefined4 *)(local_8 + 4);
          *(undefined2 *)(pcVar10 + 8) = *(undefined2 *)(local_8 + 8);
          pcVar10[10] = local_8[10];
          thunk_FUN_0043fc50(0xe,0);
        }
      }
      if (DAT_00801688 == (void *)0x0) {
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      bVar4 = thunk_FUN_004fab10(DAT_00801688,0x12);
      if (CONCAT31(extraout_var_08,bVar4) == 0) {
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      (**(code **)(*(int *)pSVar3 + 100))(*(undefined4 *)(pSVar3 + 0x1c9));
      psVar15 = *(short **)(pSVar3 + 0x1c5);
      psVar21 = *(short **)(pSVar3 + 0x1c9);
      iVar5 = 3;
      bVar4 = true;
      psVar14 = psVar21;
      psVar20 = psVar15;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar4 = *psVar14 == *psVar20;
        psVar14 = psVar14 + 1;
        psVar20 = psVar20 + 1;
      } while (bVar4);
      if (bVar4) {
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      *(undefined4 *)psVar15 = *(undefined4 *)psVar21;
      psVar15[2] = psVar21[2];
      uVar25 = 0x12;
      goto LAB_0041be5f;
    }
    if (uVar6 < 0x173) {
      if (uVar6 != 0x172) {
        if (uVar6 == 0x14) {
          if ((DAT_00801688 != (void *)0x0) &&
             (bVar4 = thunk_FUN_004fab10(DAT_00801688,1), CONCAT31(extraout_var,bVar4) != 0)) {
            (**(code **)(*(int *)pSVar3 + 0x30))(*(undefined4 *)(pSVar3 + 0x121));
            iVar5 = 0x1b;
            bVar4 = true;
            psVar15 = *(short **)(pSVar3 + 0x121);
            psVar21 = *(short **)(pSVar3 + 0x11d);
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar4 = *psVar15 == *psVar21;
              psVar15 = psVar15 + 1;
              psVar21 = psVar21 + 1;
            } while (bVar4);
            if (!bVar4) {
              uVar6 = STAllPlayersC::GetNInTmp(0,0);
              if ((short)uVar6 == 1) {
                puVar9 = *(undefined4 **)(pSVar3 + 0x121);
              }
              else {
                puVar9 = *(undefined4 **)(pSVar3 + 0x121);
                if (*(char *)((int)puVar9 + 0x1b) == *(char *)(*(int *)(pSVar3 + 0x11d) + 0x1b)) {
                  iVar5 = 5;
                  bVar4 = true;
                  pcVar10 = (char *)((int)puVar9 + 0x2a);
                  pcVar12 = (char *)(*(int *)(pSVar3 + 0x11d) + 0x2a);
                  do {
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    bVar4 = *pcVar10 == *pcVar12;
                    pcVar10 = pcVar10 + 1;
                    pcVar12 = pcVar12 + 1;
                  } while (bVar4);
                  if (bVar4) goto LAB_0041b128;
                }
              }
              puVar18 = *(undefined4 **)(pSVar3 + 0x11d);
              for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar18 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar18 = puVar18 + 1;
              }
              *(undefined2 *)puVar18 = *(undefined2 *)puVar9;
              thunk_FUN_0043fc50(1,0);
            }
          }
LAB_0041b128:
          if ((DAT_00801688 != (void *)0x0) &&
             (bVar4 = thunk_FUN_004fab10(DAT_00801688,2), CONCAT31(extraout_var_00,bVar4) != 0)) {
            (**(code **)(*(int *)pSVar3 + 0x34))(*(undefined4 *)(pSVar3 + 0x129));
            iVar5 = 0x17;
            bVar4 = true;
            piVar13 = *(int **)(pSVar3 + 0x129);
            piVar22 = *(int **)(pSVar3 + 0x125);
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar4 = *piVar13 == *piVar22;
              piVar13 = piVar13 + 1;
              piVar22 = piVar22 + 1;
            } while (bVar4);
            if (!bVar4) {
              piVar13 = *(int **)(pSVar3 + 0x129);
              piVar22 = *(int **)(pSVar3 + 0x125);
              for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
                *piVar22 = *piVar13;
                piVar13 = piVar13 + 1;
                piVar22 = piVar22 + 1;
              }
              thunk_FUN_0043fc50(2,0);
            }
          }
          if ((DAT_00801688 != (void *)0x0) &&
             (bVar4 = thunk_FUN_004fab10(DAT_00801688,8), CONCAT31(extraout_var_01,bVar4) != 0)) {
            pSVar16 = pSVar3 + 0x171;
            if (*(byte **)(pSVar3 + 0x171) != (byte *)0x0) {
              FUN_006ae110(*(byte **)(pSVar3 + 0x171));
            }
            if (*(byte **)(pSVar3 + 0x175) != (byte *)0x0) {
              FUN_006ae110(*(byte **)(pSVar3 + 0x175));
            }
            if (*(byte **)(pSVar3 + 0x179) != (byte *)0x0) {
              FUN_006ae110(*(byte **)(pSVar3 + 0x179));
            }
            if (*(byte **)(pSVar3 + 0x17d) != (byte *)0x0) {
              FUN_006ae110(*(byte **)(pSVar3 + 0x17d));
            }
            if (*(byte **)(pSVar3 + 0x181) != (byte *)0x0) {
              FUN_006ae110(*(byte **)(pSVar3 + 0x181));
            }
            *(int *)pSVar16 = 0;
            *(undefined4 *)(pSVar3 + 0x175) = 0;
            *(undefined4 *)(pSVar3 + 0x179) = 0;
            *(undefined4 *)(pSVar3 + 0x17d) = 0;
            *(undefined4 *)(pSVar3 + 0x181) = 0;
            (**(code **)(*(int *)pSVar3 + 0x40))(pSVar16);
            local_c = *(STGameObjC **)(pSVar3 + 0x15d);
            bVar4 = false;
            iVar5 = *(int *)(*(int *)pSVar16 + 0xc);
            if (iVar5 == *(int *)(local_c + 0xc)) {
              iVar5 = iVar5 * 0x30;
              bVar24 = true;
              pcVar10 = *(char **)(*(int *)pSVar16 + 0x1c);
              pcVar12 = *(char **)(local_c + 0x1c);
              do {
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                bVar24 = *pcVar10 == *pcVar12;
                pcVar10 = pcVar10 + 1;
                pcVar12 = pcVar12 + 1;
              } while (bVar24);
              if (!bVar24) goto LAB_0041b237;
            }
            else {
LAB_0041b237:
              bVar4 = true;
            }
            if (!bVar4) {
              iVar5 = *(int *)(*(int *)(pSVar3 + 0x175) + 0xc);
              if (iVar5 == *(int *)(*(int *)(pSVar3 + 0x161) + 0xc)) {
                iVar5 = iVar5 * 0x30;
                bVar24 = true;
                pcVar10 = *(char **)(*(int *)(pSVar3 + 0x175) + 0x1c);
                pcVar12 = *(char **)(*(int *)(pSVar3 + 0x161) + 0x1c);
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar24 = *pcVar10 == *pcVar12;
                  pcVar10 = pcVar10 + 1;
                  pcVar12 = pcVar12 + 1;
                } while (bVar24);
                if (!bVar24) goto LAB_0041b26c;
              }
              else {
LAB_0041b26c:
                bVar4 = true;
              }
              if (!bVar4) {
                iVar5 = *(int *)(*(int *)(pSVar3 + 0x179) + 0xc);
                if (iVar5 == *(int *)(*(int *)(pSVar3 + 0x165) + 0xc)) {
                  iVar5 = iVar5 * 0x30;
                  bVar24 = true;
                  pcVar10 = *(char **)(*(int *)(pSVar3 + 0x179) + 0x1c);
                  pcVar12 = *(char **)(*(int *)(pSVar3 + 0x165) + 0x1c);
                  do {
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    bVar24 = *pcVar10 == *pcVar12;
                    pcVar10 = pcVar10 + 1;
                    pcVar12 = pcVar12 + 1;
                  } while (bVar24);
                  if (!bVar24) goto LAB_0041b2a1;
                }
                else {
LAB_0041b2a1:
                  bVar4 = true;
                }
                if (!bVar4) {
                  iVar5 = *(int *)(*(int *)(pSVar3 + 0x17d) + 0xc);
                  if (iVar5 == *(int *)(*(int *)(pSVar3 + 0x169) + 0xc)) {
                    iVar5 = iVar5 * 0x30;
                    bVar24 = true;
                    pcVar10 = *(char **)(*(int *)(pSVar3 + 0x17d) + 0x1c);
                    pcVar12 = *(char **)(*(int *)(pSVar3 + 0x169) + 0x1c);
                    do {
                      if (iVar5 == 0) break;
                      iVar5 = iVar5 + -1;
                      bVar24 = *pcVar10 == *pcVar12;
                      pcVar10 = pcVar10 + 1;
                      pcVar12 = pcVar12 + 1;
                    } while (bVar24);
                    if (!bVar24) goto LAB_0041b2d2;
                  }
                  else {
LAB_0041b2d2:
                    bVar4 = true;
                  }
                  if (!bVar4) {
                    iVar5 = *(int *)(*(int *)(pSVar3 + 0x181) + 0xc);
                    if (iVar5 == *(int *)(*(int *)(pSVar3 + 0x16d) + 0xc)) {
                      iVar5 = iVar5 * 0x30;
                      bVar24 = true;
                      pcVar10 = *(char **)(*(int *)(pSVar3 + 0x181) + 0x1c);
                      pcVar12 = *(char **)(*(int *)(pSVar3 + 0x16d) + 0x1c);
                      do {
                        if (iVar5 == 0) break;
                        iVar5 = iVar5 + -1;
                        bVar24 = *pcVar10 == *pcVar12;
                        pcVar10 = pcVar10 + 1;
                        pcVar12 = pcVar12 + 1;
                      } while (bVar24);
                      if (bVar24) goto LAB_0041b308;
                    }
                    bVar4 = true;
                  }
                }
              }
            }
LAB_0041b308:
            if (bVar4) {
              if (local_c != (STGameObjC *)0x0) {
                FUN_006ae110((byte *)local_c);
              }
              if (*(byte **)(pSVar3 + 0x161) != (byte *)0x0) {
                FUN_006ae110(*(byte **)(pSVar3 + 0x161));
              }
              if (*(byte **)(pSVar3 + 0x165) != (byte *)0x0) {
                FUN_006ae110(*(byte **)(pSVar3 + 0x165));
              }
              if (*(byte **)(pSVar3 + 0x169) != (byte *)0x0) {
                FUN_006ae110(*(byte **)(pSVar3 + 0x169));
              }
              if (*(byte **)(pSVar3 + 0x16d) != (byte *)0x0) {
                FUN_006ae110(*(byte **)(pSVar3 + 0x16d));
              }
              *(int *)(pSVar3 + 0x15d) = 0;
              *(undefined4 *)(pSVar3 + 0x161) = 0;
              *(undefined4 *)(pSVar3 + 0x165) = 0;
              *(undefined4 *)(pSVar3 + 0x169) = 0;
              *(undefined4 *)(pSVar3 + 0x16d) = 0;
              FUN_006afe40((int *)(pSVar3 + 0x15d),*(uint **)(pSVar3 + 0x171));
              FUN_006afe40((int *)(pSVar3 + 0x161),*(uint **)(pSVar3 + 0x175));
              FUN_006afe40((int *)(pSVar3 + 0x165),*(uint **)(pSVar3 + 0x179));
              FUN_006afe40((int *)(pSVar3 + 0x169),*(uint **)(pSVar3 + 0x17d));
              FUN_006afe40((int *)(pSVar3 + 0x16d),*(uint **)(pSVar3 + 0x181));
              thunk_FUN_0043fc50(8,0);
            }
          }
          if ((DAT_00801688 != (void *)0x0) &&
             (bVar4 = thunk_FUN_004fab10(DAT_00801688,0xb), CONCAT31(extraout_var_02,bVar4) != 0)) {
            (**(code **)(*(int *)pSVar3 + 0x4c))(*(undefined4 *)(pSVar3 + 0x199));
            pSVar16 = *(STGameObjC **)(pSVar3 + 0x195);
            local_c = *(STGameObjC **)(pSVar3 + 0x199);
            iVar5 = 0x13;
            bVar4 = true;
            pSVar11 = local_c;
            pSVar19 = pSVar16;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar4 = *pSVar11 == *pSVar19;
              pSVar11 = pSVar11 + 1;
              pSVar19 = pSVar19 + 1;
            } while (bVar4);
            if (!bVar4) {
              *(int *)pSVar16 = *(int *)local_c;
              *(int *)(pSVar16 + 4) = *(int *)(local_c + 4);
              *(int *)(pSVar16 + 8) = *(int *)(local_c + 8);
              *(int *)(pSVar16 + 0xc) = *(int *)(local_c + 0xc);
              *(undefined2 *)(pSVar16 + 0x10) = *(undefined2 *)(local_c + 0x10);
              pSVar16[0x12] = local_c[0x12];
              thunk_FUN_0043fc50(0xb,0);
            }
          }
          if ((DAT_00801688 != (void *)0x0) &&
             (bVar4 = thunk_FUN_004fab10(DAT_00801688,0xe), CONCAT31(extraout_var_03,bVar4) != 0)) {
            (**(code **)(*(int *)pSVar3 + 0x58))(*(undefined4 *)(pSVar3 + 0x1b1));
            pcVar10 = *(char **)(pSVar3 + 0x1ad);
            local_8 = *(char **)(pSVar3 + 0x1b1);
            iVar5 = 0xb;
            bVar4 = true;
            pcVar12 = local_8;
            pcVar17 = pcVar10;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar4 = *pcVar12 == *pcVar17;
              pcVar12 = pcVar12 + 1;
              pcVar17 = pcVar17 + 1;
            } while (bVar4);
            if (!bVar4) {
              *(undefined4 *)pcVar10 = *(undefined4 *)local_8;
              *(undefined4 *)(pcVar10 + 4) = *(undefined4 *)(local_8 + 4);
              *(undefined2 *)(pcVar10 + 8) = *(undefined2 *)(local_8 + 8);
              pcVar10[10] = local_8[10];
              thunk_FUN_0043fc50(0xe,0);
            }
          }
          if (DAT_00801688 == (void *)0x0) {
            DAT_00858df8 = (undefined4 *)local_58;
            return 0;
          }
          bVar4 = thunk_FUN_004fab10(DAT_00801688,0x10);
          if (CONCAT31(extraout_var_04,bVar4) == 0) {
            DAT_00858df8 = (undefined4 *)local_58;
            return 0;
          }
          (**(code **)(*(int *)pSVar3 + 0x60))(*(undefined4 *)(pSVar3 + 0x1c1));
          iVar5 = 0x90;
          bVar4 = true;
          piVar13 = *(int **)(pSVar3 + 0x1c1);
          piVar22 = *(int **)(pSVar3 + 0x1bd);
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar4 = *piVar13 == *piVar22;
            piVar13 = piVar13 + 1;
            piVar22 = piVar22 + 1;
          } while (bVar4);
          if (bVar4) {
            DAT_00858df8 = (undefined4 *)local_58;
            return 0;
          }
          piVar13 = *(int **)(pSVar3 + 0x1c1);
          piVar22 = *(int **)(pSVar3 + 0x1bd);
          for (iVar5 = 0x90; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar22 = *piVar13;
            piVar13 = piVar13 + 1;
            piVar22 = piVar22 + 1;
          }
          uVar25 = 0x10;
          goto LAB_0041be5f;
        }
        if (uVar6 != 0x5a) goto LAB_0041b6c6;
      }
    }
    else if (uVar6 != 0x1a4) {
LAB_0041b6c6:
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7e4,0,0,&DAT_007a4ccc);
      if (iVar5 == 0) {
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    }
LAB_0041bdb3:
    if (DAT_00801688 == (void *)0x0) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    bVar4 = thunk_FUN_004fab10(DAT_00801688,5);
    if (CONCAT31(extraout_var_20,bVar4) != 0) {
      (**(code **)(*(int *)pSVar3 + 0x30))(*(undefined4 *)(pSVar3 + 0x121));
      iVar5 = 0x1b;
      bVar4 = true;
      psVar15 = *(short **)(pSVar3 + 0x121);
      psVar21 = *(short **)(pSVar3 + 0x11d);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar4 = *psVar15 == *psVar21;
        psVar15 = psVar15 + 1;
        psVar21 = psVar21 + 1;
      } while (bVar4);
      if (!bVar4) {
        psVar15 = *(short **)(pSVar3 + 0x121);
        psVar21 = *(short **)(pSVar3 + 0x11d);
        for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)psVar21 = *(undefined4 *)psVar15;
          psVar15 = psVar15 + 2;
          psVar21 = psVar21 + 2;
        }
        *psVar21 = *psVar15;
        thunk_FUN_0043fc50(5,0);
      }
    }
    if (DAT_00801688 == (void *)0x0) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    bVar4 = thunk_FUN_004fab10(DAT_00801688,4);
    if (CONCAT31(extraout_var_21,bVar4) == 0) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    (**(code **)(*(int *)pSVar3 + 0x34))(*(undefined4 *)(pSVar3 + 0x129));
    iVar5 = 0x17;
    bVar4 = true;
    piVar13 = *(int **)(pSVar3 + 0x129);
    piVar22 = *(int **)(pSVar3 + 0x125);
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar4 = *piVar13 == *piVar22;
      piVar13 = piVar13 + 1;
      piVar22 = piVar22 + 1;
    } while (bVar4);
    if (bVar4) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    piVar13 = *(int **)(pSVar3 + 0x129);
    piVar22 = *(int **)(pSVar3 + 0x125);
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar22 = *piVar13;
      piVar13 = piVar13 + 1;
      piVar22 = piVar22 + 1;
    }
    uVar25 = 4;
    goto LAB_0041be5f;
  }
  if (uVar6 == 0x1b8) goto LAB_0041bdb3;
  if (uVar6 != 1000) {
    if (uVar6 != 0x3e9) goto LAB_0041b6c6;
    if (DAT_00801688 == (void *)0x0) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    bVar4 = thunk_FUN_004fab10(DAT_00801688,4);
    if (CONCAT31(extraout_var_09,bVar4) != 0) {
      (**(code **)(*(int *)pSVar3 + 0x34))(*(undefined4 *)(pSVar3 + 0x129));
      iVar5 = 0x17;
      bVar4 = true;
      piVar13 = *(int **)(pSVar3 + 0x129);
      piVar22 = *(int **)(pSVar3 + 0x125);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar4 = *piVar13 == *piVar22;
        piVar13 = piVar13 + 1;
        piVar22 = piVar22 + 1;
      } while (bVar4);
      if (!bVar4) {
        piVar13 = *(int **)(pSVar3 + 0x129);
        piVar22 = *(int **)(pSVar3 + 0x125);
        for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar22 = *piVar13;
          piVar13 = piVar13 + 1;
          piVar22 = piVar22 + 1;
        }
        thunk_FUN_0043fc50(4,0);
      }
    }
    if (DAT_00801688 == (void *)0x0) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    bVar4 = thunk_FUN_004fab10(DAT_00801688,5);
    if (CONCAT31(extraout_var_10,bVar4) == 0) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    (**(code **)(*(int *)pSVar3 + 0x30))(*(undefined4 *)(pSVar3 + 0x121));
    iVar5 = 0x1b;
    bVar4 = true;
    psVar15 = *(short **)(pSVar3 + 0x121);
    psVar21 = *(short **)(pSVar3 + 0x11d);
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar4 = *psVar15 == *psVar21;
      psVar15 = psVar15 + 1;
      psVar21 = psVar21 + 1;
    } while (bVar4);
    if (bVar4) {
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    psVar15 = *(short **)(pSVar3 + 0x121);
    psVar21 = *(short **)(pSVar3 + 0x11d);
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)psVar21 = *(undefined4 *)psVar15;
      psVar15 = psVar15 + 2;
      psVar21 = psVar21 + 2;
    }
    *psVar21 = *psVar15;
    uVar25 = 5;
    goto LAB_0041be5f;
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar4 = thunk_FUN_004fab10(DAT_00801688,4);
  if (CONCAT31(extraout_var_11,bVar4) != 0) {
    (**(code **)(*(int *)pSVar3 + 0x34))(*(undefined4 *)(pSVar3 + 0x129));
    iVar5 = 0x17;
    bVar4 = true;
    piVar13 = *(int **)(pSVar3 + 0x129);
    piVar22 = *(int **)(pSVar3 + 0x125);
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar4 = *piVar13 == *piVar22;
      piVar13 = piVar13 + 1;
      piVar22 = piVar22 + 1;
    } while (bVar4);
    if (!bVar4) {
      piVar13 = *(int **)(pSVar3 + 0x129);
      piVar22 = *(int **)(pSVar3 + 0x125);
      for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar22 = *piVar13;
        piVar13 = piVar13 + 1;
        piVar22 = piVar22 + 1;
      }
      thunk_FUN_0043fc50(4,0);
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar4 = thunk_FUN_004fab10(DAT_00801688,5);
  if (CONCAT31(extraout_var_12,bVar4) != 0) {
    (**(code **)(*(int *)pSVar3 + 0x30))(*(undefined4 *)(pSVar3 + 0x121));
    iVar5 = 0x1b;
    bVar4 = true;
    psVar15 = *(short **)(pSVar3 + 0x121);
    psVar21 = *(short **)(pSVar3 + 0x11d);
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar4 = *psVar15 == *psVar21;
      psVar15 = psVar15 + 1;
      psVar21 = psVar21 + 1;
    } while (bVar4);
    if (!bVar4) {
      psVar15 = *(short **)(pSVar3 + 0x121);
      psVar21 = *(short **)(pSVar3 + 0x11d);
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)psVar21 = *(undefined4 *)psVar15;
        psVar15 = psVar15 + 2;
        psVar21 = psVar21 + 2;
      }
      *psVar21 = *psVar15;
      thunk_FUN_0043fc50(5,0);
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar4 = thunk_FUN_004fab10(DAT_00801688,6);
  if (CONCAT31(extraout_var_13,bVar4) != 0) {
    pSVar16 = pSVar3 + 0x135;
    if (*(byte **)(pSVar3 + 0x135) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pSVar3 + 0x135));
    }
    if (*(byte **)(pSVar3 + 0x139) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pSVar3 + 0x139));
    }
    *(int *)pSVar16 = 0;
    *(undefined4 *)(pSVar3 + 0x139) = 0;
    (**(code **)(*(int *)pSVar3 + 0x38))(pSVar16);
    bVar4 = false;
    iVar5 = *(int *)(*(int *)pSVar16 + 0xc);
    if (iVar5 == *(int *)(*(int *)(pSVar3 + 0x12d) + 0xc)) {
      iVar5 = iVar5 * 0x30;
      bVar24 = true;
      pcVar10 = *(char **)(*(int *)pSVar16 + 0x1c);
      pcVar12 = *(char **)(*(int *)(pSVar3 + 0x12d) + 0x1c);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar24 = *pcVar10 == *pcVar12;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      } while (bVar24);
      if (!bVar24) goto LAB_0041b8f6;
    }
    else {
LAB_0041b8f6:
      bVar4 = true;
    }
    if (!bVar4) {
      iVar5 = *(int *)(*(int *)(pSVar3 + 0x139) + 0xc);
      if (iVar5 == *(int *)(*(int *)(pSVar3 + 0x131) + 0xc)) {
        iVar5 = iVar5 * 0x30;
        bVar24 = true;
        pcVar10 = *(char **)(*(int *)(pSVar3 + 0x139) + 0x1c);
        pcVar12 = *(char **)(*(int *)(pSVar3 + 0x131) + 0x1c);
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar24 = *pcVar10 == *pcVar12;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        } while (bVar24);
        if (bVar24) goto LAB_0041b92c;
      }
      bVar4 = true;
    }
LAB_0041b92c:
    if (bVar4) {
      if (*(byte **)(pSVar3 + 0x12d) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(pSVar3 + 0x12d));
      }
      if (*(byte **)(pSVar3 + 0x131) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(pSVar3 + 0x131));
      }
      *(int *)(pSVar3 + 0x12d) = 0;
      *(undefined4 *)(pSVar3 + 0x131) = 0;
      FUN_006afe40((int *)(pSVar3 + 0x12d),*(uint **)(pSVar3 + 0x135));
      FUN_006afe40((int *)(pSVar3 + 0x131),*(uint **)(pSVar3 + 0x139));
      uVar25 = 6;
      goto LAB_0041be5f;
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar4 = thunk_FUN_004fab10(DAT_00801688,7);
  if (CONCAT31(extraout_var_14,bVar4) != 0) {
    pSVar16 = pSVar3 + 0x14d;
    if (*(byte **)(pSVar3 + 0x14d) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pSVar3 + 0x14d));
    }
    if (*(byte **)(pSVar3 + 0x151) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pSVar3 + 0x151));
    }
    if (*(byte **)(pSVar3 + 0x155) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pSVar3 + 0x155));
    }
    if (*(byte **)(pSVar3 + 0x159) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pSVar3 + 0x159));
    }
    *(int *)pSVar16 = 0;
    *(undefined4 *)(pSVar3 + 0x151) = 0;
    *(undefined4 *)(pSVar3 + 0x155) = 0;
    *(undefined4 *)(pSVar3 + 0x159) = 0;
    (**(code **)(*(int *)pSVar3 + 0x3c))(pSVar16);
    local_c = *(STGameObjC **)(pSVar3 + 0x13d);
    bVar4 = false;
    iVar5 = *(int *)(*(int *)pSVar16 + 0xc);
    if (iVar5 == *(int *)(local_c + 0xc)) {
      iVar5 = iVar5 * 0x30;
      bVar24 = true;
      pcVar10 = *(char **)(*(int *)pSVar16 + 0x1c);
      pcVar12 = *(char **)(local_c + 0x1c);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar24 = *pcVar10 == *pcVar12;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      } while (bVar24);
      if (!bVar24) goto LAB_0041ba2a;
    }
    else {
LAB_0041ba2a:
      bVar4 = true;
    }
    if (!bVar4) {
      iVar5 = *(int *)(*(int *)(pSVar3 + 0x151) + 0xc);
      if (iVar5 == *(int *)(*(int *)(pSVar3 + 0x141) + 0xc)) {
        iVar5 = iVar5 * 0x30;
        bVar24 = true;
        pcVar10 = *(char **)(*(int *)(pSVar3 + 0x151) + 0x1c);
        pcVar12 = *(char **)(*(int *)(pSVar3 + 0x141) + 0x1c);
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar24 = *pcVar10 == *pcVar12;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        } while (bVar24);
        if (!bVar24) goto LAB_0041ba5f;
      }
      else {
LAB_0041ba5f:
        bVar4 = true;
      }
      if (!bVar4) {
        iVar5 = *(int *)(*(int *)(pSVar3 + 0x155) + 0xc);
        if (iVar5 == *(int *)(*(int *)(pSVar3 + 0x145) + 0xc)) {
          iVar5 = iVar5 * 0x30;
          bVar24 = true;
          pcVar10 = *(char **)(*(int *)(pSVar3 + 0x155) + 0x1c);
          pcVar12 = *(char **)(*(int *)(pSVar3 + 0x145) + 0x1c);
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar24 = *pcVar10 == *pcVar12;
            pcVar10 = pcVar10 + 1;
            pcVar12 = pcVar12 + 1;
          } while (bVar24);
          if (!bVar24) goto LAB_0041ba90;
        }
        else {
LAB_0041ba90:
          bVar4 = true;
        }
        if (!bVar4) {
          iVar5 = *(int *)(*(int *)(pSVar3 + 0x159) + 0xc);
          if (iVar5 == *(int *)(*(int *)(pSVar3 + 0x149) + 0xc)) {
            iVar5 = iVar5 * 0x30;
            bVar24 = true;
            pcVar10 = *(char **)(*(int *)(pSVar3 + 0x159) + 0x1c);
            pcVar12 = *(char **)(*(int *)(pSVar3 + 0x149) + 0x1c);
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar24 = *pcVar10 == *pcVar12;
              pcVar10 = pcVar10 + 1;
              pcVar12 = pcVar12 + 1;
            } while (bVar24);
            if (bVar24) goto LAB_0041bac6;
          }
          bVar4 = true;
        }
      }
    }
LAB_0041bac6:
    if (bVar4) {
      if (local_c != (STGameObjC *)0x0) {
        FUN_006ae110((byte *)local_c);
      }
      if (*(byte **)(pSVar3 + 0x141) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(pSVar3 + 0x141));
      }
      if (*(byte **)(pSVar3 + 0x145) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(pSVar3 + 0x145));
      }
      if (*(byte **)(pSVar3 + 0x149) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(pSVar3 + 0x149));
      }
      *(int *)(pSVar3 + 0x13d) = 0;
      *(undefined4 *)(pSVar3 + 0x141) = 0;
      *(undefined4 *)(pSVar3 + 0x145) = 0;
      *(undefined4 *)(pSVar3 + 0x149) = 0;
      FUN_006afe40((int *)(pSVar3 + 0x13d),*(uint **)(pSVar3 + 0x14d));
      FUN_006afe40((int *)(pSVar3 + 0x141),*(uint **)(pSVar3 + 0x151));
      FUN_006afe40((int *)(pSVar3 + 0x145),*(uint **)(pSVar3 + 0x155));
      FUN_006afe40((int *)(pSVar3 + 0x149),*(uint **)(pSVar3 + 0x159));
      uVar25 = 7;
      goto LAB_0041be5f;
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar4 = thunk_FUN_004fab10(DAT_00801688,9);
  if (CONCAT31(extraout_var_15,bVar4) != 0) {
    (**(code **)(*(int *)pSVar3 + 0x44))(*(undefined4 *)(pSVar3 + 0x189));
    iVar5 = 0x129;
    bVar4 = true;
    pcVar10 = *(char **)(pSVar3 + 0x189);
    pcVar12 = *(char **)(pSVar3 + 0x185);
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar4 = *pcVar10 == *pcVar12;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    } while (bVar4);
    if (!bVar4) {
      pcVar10 = *(char **)(pSVar3 + 0x189);
      pcVar12 = *(char **)(pSVar3 + 0x185);
      for (iVar5 = 0x4a; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      *pcVar12 = *pcVar10;
      thunk_FUN_0043fc50(9,0);
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar4 = thunk_FUN_004fab10(DAT_00801688,10);
  if (CONCAT31(extraout_var_16,bVar4) != 0) {
    (**(code **)(*(int *)pSVar3 + 0x48))(*(undefined4 *)(pSVar3 + 0x191));
    piVar13 = *(int **)(pSVar3 + 0x18d);
    local_c = *(STGameObjC **)(pSVar3 + 0x191);
    iVar5 = 4;
    bVar4 = true;
    pSVar16 = local_c;
    piVar22 = piVar13;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar4 = *(int *)pSVar16 == *piVar22;
      pSVar16 = pSVar16 + 4;
      piVar22 = piVar22 + 1;
    } while (bVar4);
    if (!bVar4) {
      *piVar13 = *(int *)local_c;
      piVar13[1] = *(int *)(local_c + 4);
      piVar13[2] = *(int *)(local_c + 8);
      piVar13[3] = *(int *)(local_c + 0xc);
      thunk_FUN_0043fc50(10,0);
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar4 = thunk_FUN_004fab10(DAT_00801688,0xc);
  if (CONCAT31(extraout_var_17,bVar4) != 0) {
    pSVar16 = pSVar3 + 0x1a1;
    local_14 = pSVar16;
    if (*(byte **)(pSVar3 + 0x1a1) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pSVar3 + 0x1a1));
      *(int *)pSVar16 = 0;
    }
    (**(code **)(*(int *)pSVar3 + 0x50))(pSVar16);
    pbVar1 = *(byte **)(pSVar3 + 0x19d);
    local_c = pSVar3 + 0x19d;
    local_8 = (char *)0x0;
    iVar5 = *(int *)(*(int *)pSVar16 + 0xc);
    if (iVar5 == *(int *)(pbVar1 + 0xc)) {
      iVar5 = iVar5 * 0x30;
      bVar4 = true;
      pcVar10 = *(char **)(*(int *)pSVar16 + 0x1c);
      pcVar12 = *(char **)(pbVar1 + 0x1c);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar4 = *pcVar10 == *pcVar12;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      } while (bVar4);
      if (!bVar4) goto LAB_0041bcad;
    }
    else {
LAB_0041bcad:
      local_8 = (char *)0x1;
    }
    if (local_8 == (char *)0x1) {
      if (pbVar1 != (byte *)0x0) {
        FUN_006ae110(pbVar1);
        *(int *)local_c = 0;
      }
      FUN_006afe40((int *)local_c,*(uint **)local_14);
      uVar25 = 0xc;
      goto LAB_0041be5f;
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar4 = thunk_FUN_004fab10(DAT_00801688,0xd);
  if (CONCAT31(extraout_var_18,bVar4) != 0) {
    (**(code **)(*(int *)pSVar3 + 0x54))(*(undefined4 *)(pSVar3 + 0x1a9));
    piVar13 = *(int **)(pSVar3 + 0x1a5);
    local_14 = *(STGameObjC **)(pSVar3 + 0x1a9);
    iVar5 = 3;
    bVar4 = true;
    pSVar16 = local_14;
    piVar22 = piVar13;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar4 = *(int *)pSVar16 == *piVar22;
      pSVar16 = pSVar16 + 4;
      piVar22 = piVar22 + 1;
    } while (bVar4);
    if (!bVar4) {
      *piVar13 = *(int *)local_14;
      piVar13[1] = *(int *)(local_14 + 4);
      piVar13[2] = *(int *)(local_14 + 8);
      thunk_FUN_0043fc50(0xd,0);
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  bVar4 = thunk_FUN_004fab10(DAT_00801688,0xf);
  if (CONCAT31(extraout_var_19,bVar4) == 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  (**(code **)(*(int *)pSVar3 + 0x5c))(*(undefined4 *)(pSVar3 + 0x1b9));
  pcVar10 = *(char **)(pSVar3 + 0x1b5);
  pcVar12 = *(char **)(pSVar3 + 0x1b9);
  iVar5 = 0xb;
  bVar4 = true;
  pcVar17 = pcVar12;
  pcVar23 = pcVar10;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar4 = *pcVar17 == *pcVar23;
    pcVar17 = pcVar17 + 1;
    pcVar23 = pcVar23 + 1;
  } while (bVar4);
  if (bVar4) {
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
  *(undefined4 *)(pcVar10 + 4) = *(undefined4 *)(pcVar12 + 4);
  *(undefined2 *)(pcVar10 + 8) = *(undefined2 *)(pcVar12 + 8);
  pcVar10[10] = pcVar12[10];
  uVar25 = 0xf;
LAB_0041be5f:
  thunk_FUN_0043fc50(uVar25,0);
  DAT_00858df8 = (undefined4 *)local_58;
  return 0;
}

