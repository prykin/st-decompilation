
int __thiscall thunk_FUN_0040ae40(void *this,uint param_1,char param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  undefined2 extraout_var_10;
  int iVar7;
  undefined4 *puVar8;
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
  uint uVar9;
  undefined3 extraout_var_09;
  short *psVar10;
  int iVar11;
  int iVar12;
  undefined4 unaff_ESI;
  int iVar13;
  undefined2 *puVar14;
  void *unaff_EDI;
  undefined4 *puVar15;
  undefined1 *puVar16;
  InternalExceptionFrame IStack_90;
  int iStack_4c;
  int iStack_48;
  uint uStack_44;
  short *psStack_40;
  int iStack_3c;
  undefined1 *puStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined1 *puStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int iStack_c;
  int iStack_8;
  
  pvStack_14 = this;
  iVar6 = thunk_FUN_00423e70(this,param_1);
  if (iVar6 == 0) {
    return -4;
  }
  iStack_48 = iVar6;
  FUN_006ab060((undefined4 *)(iVar6 + 0x9f));
  *(undefined4 *)(iVar6 + 0xa3) = 0;
  *(undefined4 *)(iVar6 + 0xa7) = 0;
  *(undefined4 *)(iVar6 + 0xab) = 0;
  sVar1 = *(short *)(iVar6 + 0x47);
  puStack_28 = (undefined4 *)CONCAT22(extraout_var_10,sVar1);
  if (sVar1 < 0) {
    return -4;
  }
  if (DAT_007fb278 <= sVar1) {
    return -4;
  }
  sVar2 = *(short *)(iVar6 + 0x49);
  puStack_10 = (undefined1 *)CONCAT22(extraout_var_10,sVar2);
  if (sVar2 < 0) {
    return -4;
  }
  if (DAT_007fb27a <= sVar2) {
    return -4;
  }
  sVar3 = *(short *)(iVar6 + 0x4b);
  if (sVar3 < 0) {
    return -4;
  }
  if (DAT_007fb27c <= sVar3) {
    return -4;
  }
  iVar7 = *(int *)(iVar6 + 0xbb);
  if (iVar7 < 0) {
    return -4;
  }
  if (DAT_007fb278 <= iVar7) {
    return -4;
  }
  iVar11 = *(int *)(iVar6 + 0xbf);
  if (iVar11 < 0) {
    return -4;
  }
  if (DAT_007fb27a <= iVar11) {
    return -4;
  }
  iVar12 = *(int *)(iVar6 + 0xc3);
  if (iVar12 < 0) {
    return -4;
  }
  if (DAT_007fb27c <= iVar12) {
    return -4;
  }
  iStack_3c = FUN_006aadd0((int)sVar1,(int)sVar2,(int)sVar3,iVar7,iVar11,iVar12);
  if (iStack_3c <= *(int *)(iVar6 + 0xb7)) {
    return 0;
  }
  puStack_2c = (undefined4 *)0x0;
  IStack_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_90;
  iVar7 = __setjmp3(IStack_90.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar6 = iStack_48;
  if (iVar7 != 0) {
    g_currentExceptionFrame = IStack_90.previous;
    FUN_006a5e90(puStack_2c);
    RaiseInternalException(iVar7,0,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0x113);
    return iVar7;
  }
  psStack_40 = (short *)0x3;
  if (iStack_3c != 1) goto LAB_0040b56a;
  iStack_8 = *(int *)(iStack_48 + 0xc3);
  iStack_c = *(int *)(iStack_48 + 0xbf);
  iVar11 = iStack_8 * DAT_007fb27e;
  iVar7 = iStack_c * DAT_007fb278;
  if (*(short *)((int)DAT_007fb280 + (*(int *)(iStack_48 + 0xbb) + iVar7 + iVar11) * 2) < 0) {
    puVar8 = (undefined4 *)FUN_006aac70(0x90);
    *(undefined4 **)(iVar6 + 0x9f) = puVar8;
    for (iVar7 = 0x24; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    **(undefined2 **)(iVar6 + 0x9f) = *(undefined2 *)(iVar6 + 0x47);
    *(undefined2 *)(*(int *)(iVar6 + 0x9f) + 2) = *(undefined2 *)(iVar6 + 0x49);
    *(undefined2 *)(*(int *)(iVar6 + 0x9f) + 4) = *(undefined2 *)(iVar6 + 0x4b);
    *(undefined2 *)(*(int *)(iVar6 + 0x9f) + 6) = 0;
    *(undefined2 *)(*(int *)(iVar6 + 0x9f) + 0x48) = *(undefined2 *)(iVar6 + 0x47);
    *(undefined2 *)(*(int *)(iVar6 + 0x9f) + 0x4a) = *(undefined2 *)(iVar6 + 0x49);
    *(undefined2 *)(*(int *)(iVar6 + 0x9f) + 0x4c) = *(undefined2 *)(iVar6 + 0x4b);
    *(undefined2 *)(*(int *)(iVar6 + 0x9f) + 0x4e) = 0;
  }
  else {
    iVar12 = (int)*(short *)(iStack_48 + 0x47);
    puVar16 = (undefined1 *)0x0;
    puStack_10 = (undefined1 *)0x0;
    if (iVar12 == *(int *)(iStack_48 + 0xbb)) {
      if (*(short *)(iStack_48 + 0x49) == iStack_c) {
        puVar16 = (undefined1 *)0x1;
      }
      else if (*(short *)(iStack_48 + 0x4b) == iStack_8) {
        puVar16 = (undefined1 *)0x1;
      }
      else if (((((*(ushort *)
                    ((int)DAT_007fb280 +
                    ((int)*(short *)(iStack_48 + 0x49) * (int)DAT_007fb278 + iVar12 + iVar11) * 2) &
                  0xc000) != 0xc000) &&
                (bVar5 = thunk_FUN_00497920(iStack_48,iVar12,(int)*(short *)(iStack_48 + 0x49),
                                            iStack_8), CONCAT31(extraout_var,bVar5) != 0)) &&
               ((*(ushort *)
                  ((int)DAT_007fb280 +
                  ((int)DAT_007fb278 * *(int *)(iVar6 + 0xbf) +
                  (int)*(short *)(iVar6 + 0x47) + (int)DAT_007fb27e * (int)*(short *)(iVar6 + 0x4b))
                  * 2) & 0xc000) != 0xc000)) &&
              (bVar5 = thunk_FUN_00497920(iVar6,(int)*(short *)(iVar6 + 0x47),
                                          *(undefined4 *)(iVar6 + 0xbf),
                                          (int)*(short *)(iVar6 + 0x4b)),
              CONCAT31(extraout_var_00,bVar5) != 0)) {
        puVar16 = (undefined1 *)0x1;
      }
    }
    else {
      iVar13 = (int)*(short *)(iStack_48 + 0x49);
      if (iVar13 == iStack_c) {
        if (*(short *)(iStack_48 + 0x4b) == iStack_8) {
          puVar16 = (undefined1 *)0x1;
          goto LAB_0040b481;
        }
        uVar4 = *(ushort *)((int)DAT_007fb280 + (iVar13 * DAT_007fb278 + iVar12 + iVar11) * 2);
        iVar11 = iStack_8;
joined_r0x0040b258:
        if (((uVar4 & 0xc000) != 0xc000) &&
           (bVar5 = thunk_FUN_00497920(iStack_48,iVar12,iVar13,iVar11),
           CONCAT31(extraout_var_01,bVar5) != 0)) {
          if (((*(ushort *)
                 ((int)DAT_007fb280 +
                 ((int)DAT_007fb278 * (int)*(short *)(iVar6 + 0x49) +
                 *(int *)(iVar6 + 0xbb) + (int)DAT_007fb27e * (int)*(short *)(iVar6 + 0x4b)) * 2) &
               0xc000) != 0xc000) &&
             (bVar5 = thunk_FUN_00497920(iVar6,*(undefined4 *)(iVar6 + 0xbb),
                                         (int)*(short *)(iVar6 + 0x49),(int)*(short *)(iVar6 + 0x4b)
                                        ), CONCAT31(extraout_var_02,bVar5) != 0)) {
            puVar16 = (undefined1 *)0x1;
            goto LAB_0040b481;
          }
        }
      }
      else {
        iVar11 = (int)*(short *)(iStack_48 + 0x4b);
        if (iVar11 == iStack_8) {
          uVar4 = *(ushort *)((int)DAT_007fb280 + (iVar11 * DAT_007fb27e + iVar12 + iVar7) * 2);
          iVar13 = iStack_c;
          goto joined_r0x0040b258;
        }
        if (((((((*(ushort *)((int)DAT_007fb280 + (iVar11 * DAT_007fb27e + iVar12 + iVar7) * 2) &
                 0xc000) != 0xc000) &&
               (bVar5 = thunk_FUN_00497920(iStack_48,iVar12,iStack_c,iVar11),
               CONCAT31(extraout_var_03,bVar5) != 0)) &&
              ((*(ushort *)
                 ((int)DAT_007fb280 +
                 ((int)DAT_007fb278 * (int)*(short *)(iVar6 + 0x49) +
                 *(int *)(iVar6 + 0xbb) + (int)DAT_007fb27e * (int)*(short *)(iVar6 + 0x4b)) * 2) &
               0xc000) != 0xc000)) &&
             (((bVar5 = thunk_FUN_00497920(iVar6,*(undefined4 *)(iVar6 + 0xbb),
                                           (int)*(short *)(iVar6 + 0x49),
                                           (int)*(short *)(iVar6 + 0x4b)),
               CONCAT31(extraout_var_04,bVar5) != 0 &&
               ((*(ushort *)
                  ((int)DAT_007fb280 +
                  ((int)DAT_007fb278 * *(int *)(iVar6 + 0xbf) +
                  *(int *)(iVar6 + 0xbb) + (int)DAT_007fb27e * (int)*(short *)(iVar6 + 0x4b)) * 2) &
                0xc000) != 0xc000)) &&
              ((bVar5 = thunk_FUN_00497920(iVar6,*(undefined4 *)(iVar6 + 0xbb),
                                           *(undefined4 *)(iVar6 + 0xbf),
                                           (int)*(short *)(iVar6 + 0x4b)),
               CONCAT31(extraout_var_05,bVar5) != 0 &&
               (((*(ushort *)
                   ((int)DAT_007fb280 +
                   ((int)DAT_007fb27e * *(int *)(iVar6 + 0xc3) +
                   (int)*(short *)(iVar6 + 0x47) + (int)DAT_007fb278 * *(int *)(iVar6 + 0xbf)) * 2)
                 & 0xc000) != 0xc000 &&
                (bVar5 = thunk_FUN_00497920(iVar6,(int)*(short *)(iVar6 + 0x47),
                                            *(undefined4 *)(iVar6 + 0xbf),*(int *)(iVar6 + 0xc3)),
                CONCAT31(extraout_var_06,bVar5) != 0)))))))) &&
            ((*(ushort *)
               ((int)DAT_007fb280 +
               ((int)DAT_007fb27e * *(int *)(iVar6 + 0xc3) +
               *(int *)(iVar6 + 0xbb) + (int)DAT_007fb278 * (int)*(short *)(iVar6 + 0x49)) * 2) &
             0xc000) != 0xc000)) &&
           ((bVar5 = thunk_FUN_00497920(iVar6,*(undefined4 *)(iVar6 + 0xbb),
                                        (int)*(short *)(iVar6 + 0x49),*(undefined4 *)(iVar6 + 0xc3))
            , CONCAT31(extraout_var_07,bVar5) != 0 &&
            ((*(ushort *)
               ((int)DAT_007fb280 +
               ((int)DAT_007fb27e * *(int *)(iVar6 + 0xc3) +
               (int)*(short *)(iVar6 + 0x47) + (int)DAT_007fb278 * (int)*(short *)(iVar6 + 0x49)) *
               2) & 0xc000) != 0xc000)))) {
          bVar5 = thunk_FUN_00497920(iVar6,(int)*(short *)(iVar6 + 0x47),
                                     (int)*(short *)(iVar6 + 0x49),*(undefined4 *)(iVar6 + 0xc3));
          puVar16 = (undefined1 *)0x1;
          if (CONCAT31(extraout_var_08,bVar5) != 0) goto LAB_0040b481;
        }
      }
      puVar16 = puStack_10;
    }
LAB_0040b481:
    if (puVar16 == (undefined1 *)0x0) goto LAB_0040b56a;
    puVar8 = (undefined4 *)FUN_006aac70(0x90);
    *(undefined4 **)(iVar6 + 0x9f) = puVar8;
    for (iVar7 = 0x24; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    if (*(int *)(PTR_DAT_007ed56c +
                (((((*(int *)(iVar6 + 0xc3) - (int)*(short *)(iVar6 + 0x4b)) * 3 -
                   (int)*(short *)(iVar6 + 0x49)) + *(int *)(iVar6 + 0xbf)) * 3 -
                 (int)*(short *)(iVar6 + 0x47)) + *(int *)(iVar6 + 0xbb)) * 4) < 0x1a) {
      iStack_3c = (&DAT_007ed640)
                  [*(int *)(PTR_DAT_007ed56c +
                           (((((*(int *)(iVar6 + 0xc3) - (int)*(short *)(iVar6 + 0x4b)) * 3 -
                              (int)*(short *)(iVar6 + 0x49)) + *(int *)(iVar6 + 0xbf)) * 3 -
                            (int)*(short *)(iVar6 + 0x47)) + *(int *)(iVar6 + 0xbb)) * 4)];
    }
    **(short **)(iVar6 + 0x9f) = *(short *)(iVar6 + 0x47);
    *(undefined2 *)(*(int *)(iVar6 + 0x9f) + 2) = *(undefined2 *)(iVar6 + 0x49);
    *(undefined2 *)(*(int *)(iVar6 + 0x9f) + 4) = *(undefined2 *)(iVar6 + 0x4b);
    *(undefined2 *)(*(int *)(iVar6 + 0x9f) + 6) = (undefined2)iStack_3c;
    *(undefined2 *)(*(int *)(iVar6 + 0x9f) + 0x48) = *(undefined2 *)(iVar6 + 0xbb);
    *(undefined2 *)(*(int *)(iVar6 + 0x9f) + 0x4a) = *(undefined2 *)(iVar6 + 0xbf);
    *(undefined2 *)(*(int *)(iVar6 + 0x9f) + 0x4c) = *(undefined2 *)(iVar6 + 0xc3);
    *(undefined2 *)(*(int *)(iVar6 + 0x9f) + 0x4e) = 0;
  }
  *(undefined4 *)(iVar6 + 0xa3) = 2;
LAB_0040b56a:
  if (*(int *)(iVar6 + 0x9f) == 0) {
    iVar7 = FUN_006a62e0((int)*(short *)(iVar6 + 0x47),(int)*(short *)(iVar6 + 0x49),
                         (int)*(short *)(iVar6 + 0x4b),*(int *)(iVar6 + 0xbb),*(int *)(iVar6 + 0xbf)
                         ,*(int *)(iVar6 + 0xc3));
    *(int *)(iVar6 + 0xaf) = iVar7;
    puStack_28 = FUN_006aac10(0x2ae);
    sVar1 = *(short *)(iVar6 + 0x47);
    puStack_10 = (undefined1 *)((int)puStack_28 + 0x156);
    iVar7 = 2;
    if (sVar1 < 2) {
      iVar7 = (int)sVar1;
    }
    iVar7 = -iVar7;
    if (sVar1 + 2 < (int)DAT_007fb278) {
      iStack_30 = 2;
    }
    else {
      iStack_30 = ((int)DAT_007fb278 - (int)sVar1) + -1;
    }
    sVar1 = *(short *)(iVar6 + 0x49);
    iVar11 = 2;
    if (sVar1 < 2) {
      iVar11 = (int)sVar1;
    }
    uVar9 = -iVar11;
    if (sVar1 + 2 < (int)DAT_007fb27a) {
      iStack_c = 2;
    }
    else {
      iStack_c = ((int)DAT_007fb27a - (int)sVar1) + -1;
    }
    sVar1 = *(short *)(iVar6 + 0x4b);
    iVar11 = 2;
    if (sVar1 < 2) {
      iVar11 = (int)sVar1;
    }
    iStack_4c = -iVar11;
    if (sVar1 + 2 < (int)DAT_007fb27c) {
      iVar12 = 2;
    }
    else {
      iVar12 = ((int)DAT_007fb27c - (int)sVar1) + -1;
    }
    puStack_18 = (undefined1 *)0x0;
    uStack_44 = uVar9;
    iStack_34 = iVar12;
    iStack_1c = iStack_4c;
    iStack_8 = iVar7;
    if (-iVar12 == iVar11 || iStack_4c < iVar12) {
      puStack_20 = puStack_10 + (iVar11 * -7 + uVar9) * 0xe;
      do {
        puStack_38 = puStack_20;
        uStack_24 = uVar9;
        if ((int)uVar9 <= iStack_c) {
          do {
            if (iVar7 <= iStack_30) {
              puVar14 = (undefined2 *)(puStack_38 + iStack_8 * 2);
              do {
                bVar5 = thunk_FUN_00497920(iVar6,*(short *)(iVar6 + 0x47) + iVar7,
                                           (int)*(short *)(iVar6 + 0x49) + uStack_24,
                                           *(short *)(iVar6 + 0x4b) + iStack_1c);
                if (CONCAT31(extraout_var_09,bVar5) == 0) {
                  *puVar14 = 0xfffd;
                  puStack_18 = (undefined1 *)0x1;
                }
                iVar7 = iVar7 + 1;
                puVar14 = puVar14 + 1;
              } while (iVar7 <= iStack_30);
            }
            puStack_38 = puStack_38 + 0xe;
            uStack_24 = uStack_24 + 1;
            iVar12 = iStack_34;
            uVar9 = uStack_44;
            iVar7 = iStack_8;
          } while ((int)uStack_24 <= iStack_c);
        }
        iStack_1c = iStack_1c + 1;
        puStack_20 = puStack_20 + 0x62;
      } while (iStack_1c <= iVar12);
    }
    psVar10 = psStack_40;
    if (puStack_18 == (undefined1 *)0x0) {
      FUN_006ab060(&puStack_28);
      psVar10 = (short *)0x0;
    }
    uStack_24 = 0;
    if (param_2 != '\0') {
      uStack_24 = 4;
    }
    uStack_24 = uStack_24 | 1;
    psVar10 = FUN_006a9190((int)DAT_007fb280,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                           (short *)(int)*(short *)(iVar6 + 0x47),
                           (short *)(int)*(short *)(iVar6 + 0x49),
                           (short *)(int)*(short *)(iVar6 + 0x4b),*(short **)(iVar6 + 0xbb),
                           *(short **)(iVar6 + 0xbf),*(short **)(iVar6 + 0xc3),
                           *(int *)(iVar6 + 0xb7),(int *)(iVar6 + 0xa3),puStack_28,psVar10,uStack_24
                          );
    *(short **)(iVar6 + 0x9f) = psVar10;
    if (psVar10 == (short *)0x0) {
      psVar10 = (short *)((int)DAT_007fb27a * (int)DAT_007fb278);
      psStack_40 = psVar10;
      puStack_2c = (undefined4 *)FUN_006aac70((int)DAT_007fb27c * (int)psVar10 * 2);
      iVar7 = (int)DAT_007fb27c;
      puVar8 = DAT_007fb280;
      puVar15 = puStack_2c;
      for (uVar9 = (iVar7 * (int)psVar10 & 0x7fffffffU) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar15 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar15 = puVar15 + 1;
      }
      for (uVar9 = iVar7 * (int)psVar10 * 2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      if ((puStack_18 != (undefined1 *)0x0) && (iStack_1c = iStack_4c, iStack_4c <= iStack_34)) {
        puStack_18 = puStack_10 + (iStack_4c * 7 + uStack_44) * 0xe;
        do {
          puStack_10 = (undefined1 *)
                       ((int)puStack_2c +
                       (((int)*(short *)(iVar6 + 0x49) + uStack_44) * (int)DAT_007fb278 +
                        (*(short *)(iVar6 + 0x4b) + iStack_1c) * (int)psStack_40 +
                       (int)*(short *)(iVar6 + 0x47)) * 2);
          if ((int)uStack_44 <= iStack_c) {
            iVar7 = (iStack_c - uStack_44) + 1;
            puVar16 = puStack_18;
            do {
              if (iStack_8 <= iStack_30) {
                psVar10 = (short *)(puVar16 + iStack_8 * 2);
                iVar11 = (iStack_30 - iStack_8) + 1;
                do {
                  if (*psVar10 < 0) {
                    *(short *)(((int)puStack_10 - (int)puVar16) + (int)psVar10) = *psVar10;
                  }
                  psVar10 = psVar10 + 1;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
              puVar16 = puVar16 + 0xe;
              iVar7 = iVar7 + -1;
              puStack_10 = puStack_10 + DAT_007fb278 * 2;
            } while (iVar7 != 0);
            puStack_20 = (undefined1 *)0x0;
          }
          puStack_18 = puStack_18 + 0x62;
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c <= iStack_34);
      }
      psVar10 = FUN_006a8270((int)puStack_2c,(int)DAT_007fb278,(int)DAT_007fb27a,
                             (undefined4 *)(int)DAT_007fb27c,(short *)(int)*(short *)(iVar6 + 0x47),
                             (short *)(int)*(short *)(iVar6 + 0x49),
                             (short *)(int)*(short *)(iVar6 + 0x4b),*(short **)(iVar6 + 0xbb),
                             *(short **)(iVar6 + 0xbf),*(short **)(iVar6 + 0xc3),
                             *(int *)(iVar6 + 0xb7),(int *)(iVar6 + 0xa3),uStack_24);
      *(short **)(iVar6 + 0x9f) = psVar10;
    }
    FUN_006ab060(&puStack_28);
  }
  g_currentExceptionFrame = IStack_90.previous;
  FUN_006a5e90(puStack_2c);
  if (*(int *)(iVar6 + 0x9f) == 0) {
    return -4;
  }
  return 0;
}

