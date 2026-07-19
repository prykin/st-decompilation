
int thunk_FUN_0040d540(void *param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar7;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  short *psVar8;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined4 *puVar9;
  int iVar10;
  short *psVar11;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  
  uStack_20 = 0;
  iStack_3c = 0;
  iStack_40 = 0;
  iVar5 = thunk_FUN_00423e70(param_1,param_2);
  iVar6 = (int)*(short *)(iVar5 + 0x47);
  if (((iVar6 == *(int *)(iVar5 + 0xbb)) &&
      ((int)*(short *)(iVar5 + 0x49) == *(int *)(iVar5 + 0xbf))) &&
     ((int)*(short *)(iVar5 + 0x4b) == *(int *)(iVar5 + 0xc3))) {
    return 0;
  }
  if (*(int *)(iVar5 + 0x9f) == 0) {
    iVar6 = FUN_006aadd0(iVar6,(int)*(short *)(iVar5 + 0x49),(int)*(short *)(iVar5 + 0x4b),
                         *(int *)(iVar5 + 0xbb),*(int *)(iVar5 + 0xbf),*(int *)(iVar5 + 0xc3));
    return ((*(int *)(iVar5 + 0xb7) < iVar6) - 1 & 6) - 6;
  }
  iVar10 = *(int *)(iVar5 + 0xa3);
  if (iVar10 + -1 <= *(int *)(iVar5 + 0xa7)) {
    return 0;
  }
  iVar7 = *(int *)(iVar5 + 0x9f) + -0x48 + iVar10 * 0x48;
  if (((*(short *)(iVar5 + 0x47) == *(short *)(*(int *)(iVar5 + 0x9f) + -0x48 + iVar10 * 0x48)) &&
      (*(short *)(iVar5 + 0x49) == *(short *)(iVar7 + 2))) &&
     (*(short *)(iVar5 + 0x4b) == *(short *)(iVar7 + 4))) {
    return 0;
  }
  iStack_c = (int)DAT_007fb27a * (int)DAT_007fb278;
  iStack_14 = 30000;
  iVar6 = DAT_007fb280 +
          (*(short *)(iVar5 + 0x4b) * iStack_c +
          iVar6 + (int)*(short *)(iVar5 + 0x49) * (int)DAT_007fb278) * 2;
  iStack_38 = (int)*(short *)(*(int *)(iVar5 + 0x9f) + 6 +
                             (*(int *)(iVar5 + 0xa7) * 9 + *(int *)(iVar5 + 0xab)) * 8);
  iStack_28 = -1;
  iStack_2c = -1;
  iStack_30 = -1;
  iStack_1c = 1;
  while (iStack_1c < *(int *)(iVar5 + 0xa3) - *(int *)(iVar5 + 0xa7)) {
    iStack_24 = 0;
    psVar11 = (short *)(*(int *)(iVar5 + 0x9f) + (*(int *)(iVar5 + 0xa7) + iStack_1c) * 0x48);
    do {
      if (*psVar11 == -1) break;
      uStack_10 = FUN_006a5eb0((int)*(short *)(iVar5 + 0x47),(int)*(short *)(iVar5 + 0x49),
                               (int)*(short *)(iVar5 + 0x4b),(int)*psVar11,(int)psVar11[1],
                               (int)psVar11[2]);
      if ((uStack_10 != 0xffe) && (iStack_8 = (int)psVar11[3], iStack_8 < iStack_38)) {
        uStack_44 = uStack_10 & 0x6000;
        if (uStack_44 == 0) {
          if ((uStack_10 & 1) == 0) {
LAB_0040d750:
            iStack_8 = iStack_8 + 3;
          }
          else {
            iStack_8 = iStack_8 + 4;
          }
        }
        else if ((uStack_10 & 1) == 0) {
          if ((uStack_10 & 0xffff9fff) == 0xffe) goto LAB_0040d750;
          iStack_8 = iStack_8 + 4;
        }
        else {
          iStack_8 = iStack_8 + 5;
        }
        uStack_34 = uStack_10 & 1;
        if ((iStack_8 <= iStack_14) &&
           (((iStack_8 != iStack_14 || ((uStack_10 == *(uint *)(iVar5 + 0xaf) && (iStack_1c < 2))))
            && (bVar4 = thunk_FUN_00497920(iVar5,(int)*psVar11,(int)psVar11[1],(int)psVar11[2]),
               CONCAT31(extraout_var,bVar4) != 0)))) {
          iVar10 = (int)*psVar11 - (int)*(short *)(iVar5 + 0x47);
          iStack_18 = (int)psVar11[1] - (int)*(short *)(iVar5 + 0x49);
          if (uStack_34 == 0) {
            if ((uStack_44 == 0) || ((uStack_10 & 0xffff9fff) == 0xffe)) {
LAB_0040dc04:
              if (uStack_10 != *(uint *)(iVar5 + 0xaf)) {
                uStack_44 = *(uint *)(*(int *)((int)param_1 + 0x29) + 0xc);
                uStack_34 = 0;
                if (0 < (int)uStack_44) {
                  do {
                    iVar10 = *(int *)((int)param_1 + 0x29);
                    if ((*(uint *)(iVar10 + 0xc) <= uStack_34) ||
                       (psVar8 = (short *)(*(int *)(iVar10 + 8) * uStack_34 +
                                          *(int *)(iVar10 + 0x1c)), psVar8 == (short *)0x0)) break;
                    if (((*psVar8 != -1) &&
                        ((((iVar10 = thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)psVar8 >>
                                                                                0x10),*psVar8)),
                           iVar10 != 0 && (iVar10 != iVar5)) &&
                          (iVar7 = *(int *)(iVar10 + 0x97), iVar7 != 0)) &&
                         (*(int *)(iVar10 + 0x9f) != 0)))) &&
                       ((((*(short *)(iVar7 + 8) == *psVar11 &&
                          (*(short *)(iVar7 + 10) == psVar11[1])) &&
                         (*(short *)(iVar7 + 0xc) == psVar11[2])) ||
                        ((((uStack_48 = FUN_006a5eb0((int)*(short *)(iVar10 + 0x47),
                                                     (int)*(short *)(iVar10 + 0x49),
                                                     (int)*(short *)(iVar10 + 0x4b),(int)*psVar11,
                                                     (int)psVar11[1],(int)psVar11[2]),
                           uStack_48 != 0xffe &&
                           ((uStack_48 != *(uint *)(iVar10 + 0xaf) ||
                            (*(short *)(*(int *)(iVar10 + 0x9f) + 6 +
                                       (*(int *)(iVar10 + 0xa7) * 9 + *(int *)(iVar10 + 0xab)) * 8)
                             < iStack_38)))) &&
                          (bVar4 = thunk_FUN_0040ce20(param_1,iVar10,&iStack_4c,&iStack_50,
                                                      &iStack_54,&uStack_48),
                          CONCAT31(extraout_var_16,bVar4) != 0)) &&
                         (((iStack_4c == *psVar11 && (iStack_50 == psVar11[1])) &&
                          (iStack_54 == psVar11[2])))))))) goto LAB_0040dd8a;
                    uStack_34 = uStack_34 + 1;
                  } while ((int)uStack_34 < (int)uStack_44);
                }
              }
              iStack_28 = (int)*psVar11;
              iStack_2c = (int)psVar11[1];
              iStack_30 = (int)psVar11[2];
              iStack_3c = iStack_1c;
              uStack_20 = uStack_10;
              iStack_14 = iStack_8;
              iStack_40 = iStack_24;
              if ((iStack_24 == 0) && (*(int *)(iVar5 + 0xab) == 0)) goto LAB_0040dde1;
            }
            else if (((*(ushort *)
                        (iVar6 + ((int)psVar11[2] - (int)*(short *)(iVar5 + 0x4b)) * iStack_c * 2) &
                      0xc000) != 0xc000) &&
                    (bVar4 = thunk_FUN_00497920(iVar5,(int)*(short *)(iVar5 + 0x47),
                                                (int)*(short *)(iVar5 + 0x49),(int)psVar11[2]),
                    CONCAT31(extraout_var_13,bVar4) != 0)) {
              if (psVar11[1] == *(short *)(iVar5 + 0x49)) {
                if ((*(ushort *)(iVar6 + iVar10 * 2) & 0xc000) != 0xc000) {
                  bVar4 = thunk_FUN_00497920(iVar5,(int)*psVar11,(int)*(short *)(iVar5 + 0x49),
                                             (int)*(short *)(iVar5 + 0x4b));
                  iVar10 = CONCAT31(extraout_var_14,bVar4);
joined_r0x0040dbb9:
                  if (iVar10 != 0) goto LAB_0040dc04;
                }
              }
              else if ((*(ushort *)(iVar6 + DAT_007fb278 * iStack_18 * 2) & 0xc000) != 0xc000) {
                bVar4 = thunk_FUN_00497920(iVar5,(int)*(short *)(iVar5 + 0x47),(int)psVar11[1],
                                           (int)*(short *)(iVar5 + 0x4b));
                iVar10 = CONCAT31(extraout_var_15,bVar4);
                goto joined_r0x0040dbb9;
              }
            }
          }
          else if (((((*(ushort *)(iVar6 + iVar10 * 2) & 0xc000) != 0xc000) &&
                    ((*(ushort *)(iVar6 + DAT_007fb278 * iStack_18 * 2) & 0xc000) != 0xc000)) &&
                   (bVar4 = thunk_FUN_00497920(iVar5,(int)*(short *)(iVar5 + 0x47),(int)psVar11[1],
                                               (int)*(short *)(iVar5 + 0x4b)),
                   CONCAT31(extraout_var_00,bVar4) != 0)) &&
                  (bVar4 = thunk_FUN_00497920(iVar5,(int)*psVar11,(int)*(short *)(iVar5 + 0x49),
                                              (int)*(short *)(iVar5 + 0x4b)),
                  CONCAT31(extraout_var_01,bVar4) != 0)) {
            if ((uStack_10 & 0x4000) == 0) {
              if ((uStack_10 & 0x2000) == 0) goto LAB_0040dc04;
              if (((((*(ushort *)(iVar6 + iStack_c * 2) & 0xc000) != 0xc000) &&
                   ((*(ushort *)(iVar6 + (iVar10 + iStack_c) * 2) & 0xc000) != 0xc000)) &&
                  ((iVar7 = DAT_007fb278 * iStack_18,
                   (*(ushort *)(iVar6 + (iVar7 + iStack_c) * 2) & 0xc000) != 0xc000 &&
                   (((*(ushort *)(iVar6 + (iVar7 + iVar10) * 2) & 0xc000) != 0xc000 &&
                    ((*(ushort *)(iVar6 + iVar10 * 2) & 0xc000) != 0xc000)))))) &&
                 (((*(ushort *)(iVar6 + iVar7 * 2) & 0xc000) != 0xc000 &&
                  ((((bVar4 = thunk_FUN_00497920(iVar5,(int)*(short *)(iVar5 + 0x47),
                                                 (int)*(short *)(iVar5 + 0x49),
                                                 *(short *)(iVar5 + 0x4b) + 1),
                     CONCAT31(extraout_var_07,bVar4) != 0 &&
                     (bVar4 = thunk_FUN_00497920(iVar5,(int)*psVar11,(int)*(short *)(iVar5 + 0x49),
                                                 *(short *)(iVar5 + 0x4b) + 1),
                     CONCAT31(extraout_var_08,bVar4) != 0)) &&
                    (bVar4 = thunk_FUN_00497920(iVar5,(int)*(short *)(iVar5 + 0x47),(int)psVar11[1],
                                                *(short *)(iVar5 + 0x4b) + 1),
                    CONCAT31(extraout_var_09,bVar4) != 0)) &&
                   ((bVar4 = thunk_FUN_00497920(iVar5,(int)*psVar11,(int)psVar11[1],
                                                (int)*(short *)(iVar5 + 0x4b)),
                    CONCAT31(extraout_var_10,bVar4) != 0 &&
                    (bVar4 = thunk_FUN_00497920(iVar5,(int)*(short *)(iVar5 + 0x47),(int)psVar11[1],
                                                (int)*(short *)(iVar5 + 0x4b)),
                    CONCAT31(extraout_var_11,bVar4) != 0)))))))) {
                sVar1 = *(short *)(iVar5 + 0x4b);
                sVar2 = *(short *)(iVar5 + 0x49);
                sVar3 = *psVar11;
                goto LAB_0040db07;
              }
            }
            else if ((((((*(ushort *)(iVar6 + iStack_c * -2) & 0xc000) != 0xc000) &&
                       ((*(ushort *)(iVar6 + (iVar10 - iStack_c) * 2) & 0xc000) != 0xc000)) &&
                      ((iVar7 = DAT_007fb278 * iStack_18,
                       (*(ushort *)(iVar6 + (iVar7 - iStack_c) * 2) & 0xc000) != 0xc000 &&
                       ((((*(ushort *)(iVar6 + (iVar7 + iVar10) * 2) & 0xc000) != 0xc000 &&
                         ((*(ushort *)(iVar6 + iVar10 * 2) & 0xc000) != 0xc000)) &&
                        ((*(ushort *)(iVar6 + iVar7 * 2) & 0xc000) != 0xc000)))))) &&
                     ((bVar4 = thunk_FUN_00497920(iVar5,(int)*(short *)(iVar5 + 0x47),
                                                  (int)*(short *)(iVar5 + 0x49),
                                                  *(short *)(iVar5 + 0x4b) + -1),
                      CONCAT31(extraout_var_02,bVar4) != 0 &&
                      (bVar4 = thunk_FUN_00497920(iVar5,(int)*psVar11,(int)*(short *)(iVar5 + 0x49),
                                                  *(short *)(iVar5 + 0x4b) + -1),
                      CONCAT31(extraout_var_03,bVar4) != 0)))) &&
                    ((bVar4 = thunk_FUN_00497920(iVar5,(int)*(short *)(iVar5 + 0x47),(int)psVar11[1]
                                                 ,*(short *)(iVar5 + 0x4b) + -1),
                     CONCAT31(extraout_var_04,bVar4) != 0 &&
                     ((bVar4 = thunk_FUN_00497920(iVar5,(int)*psVar11,(int)psVar11[1],
                                                  (int)*(short *)(iVar5 + 0x4b)),
                      CONCAT31(extraout_var_05,bVar4) != 0 &&
                      (bVar4 = thunk_FUN_00497920(iVar5,(int)*(short *)(iVar5 + 0x47),
                                                  (int)psVar11[1],(int)*(short *)(iVar5 + 0x4b)),
                      CONCAT31(extraout_var_06,bVar4) != 0)))))) {
              sVar1 = *(short *)(iVar5 + 0x4b);
              sVar2 = *(short *)(iVar5 + 0x49);
              sVar3 = *psVar11;
LAB_0040db07:
              bVar4 = thunk_FUN_00497920(iVar5,(int)sVar3,(int)sVar2,(int)sVar1);
              iVar10 = CONCAT31(extraout_var_12,bVar4);
              goto joined_r0x0040dbb9;
            }
          }
        }
      }
LAB_0040dd8a:
      psVar11 = psVar11 + 4;
      iStack_24 = iStack_24 + 1;
    } while (iStack_24 < 9);
    iStack_1c = iStack_1c + 1;
    if (2 < iStack_1c) break;
  }
  if (iStack_14 == 30000) {
    bVar4 = thunk_FUN_0040ce20(param_1,iVar5,&iStack_28,&iStack_2c,&iStack_30,&uStack_20);
    if (CONCAT31(extraout_var_17,bVar4) == 0) {
      return 2;
    }
  }
  else {
LAB_0040dde1:
    if (29999 < iStack_14) {
      return 2;
    }
  }
  FUN_006a5e90(*(undefined4 **)(iVar5 + 0x97));
  *(int *)(iVar5 + 0xa7) = *(int *)(iVar5 + 0xa7) + iStack_3c;
  *(int *)(iVar5 + 0xab) = iStack_40;
  puVar9 = Library::DKW::LIB::FUN_006aac10(0x10);
  *(undefined4 **)(iVar5 + 0x97) = puVar9;
  if (puVar9 != (undefined4 *)0x0) {
    *(undefined4 *)(iVar5 + 0x9b) = 2;
    *(undefined2 *)(puVar9 + 2) = (undefined2)iStack_28;
    *(undefined2 *)(*(int *)(iVar5 + 0x97) + 10) = (undefined2)iStack_2c;
    *(undefined2 *)(*(int *)(iVar5 + 0x97) + 0xc) = (undefined2)iStack_30;
    *(short *)(*(int *)(iVar5 + 0x97) + 0xe) = (short)uStack_20;
    *(int *)(iVar5 + 0xaf) = (int)(short)uStack_20;
    return 1;
  }
  return -2;
}

