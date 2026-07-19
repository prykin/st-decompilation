
int FUN_0040d540(void *param_1,uint param_2)

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
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_20 = 0;
  local_3c = 0;
  local_40 = 0;
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
  local_c = (int)DAT_007fb27a * (int)DAT_007fb278;
  local_14 = 30000;
  iVar6 = DAT_007fb280 +
          (*(short *)(iVar5 + 0x4b) * local_c +
          iVar6 + (int)*(short *)(iVar5 + 0x49) * (int)DAT_007fb278) * 2;
  local_38 = (int)*(short *)(*(int *)(iVar5 + 0x9f) + 6 +
                            (*(int *)(iVar5 + 0xa7) * 9 + *(int *)(iVar5 + 0xab)) * 8);
  local_28 = -1;
  local_2c = -1;
  local_30 = -1;
  local_1c = 1;
  while (local_1c < *(int *)(iVar5 + 0xa3) - *(int *)(iVar5 + 0xa7)) {
    local_24 = 0;
    psVar11 = (short *)(*(int *)(iVar5 + 0x9f) + (*(int *)(iVar5 + 0xa7) + local_1c) * 0x48);
    do {
      if (*psVar11 == -1) break;
      local_10 = FUN_006a5eb0((int)*(short *)(iVar5 + 0x47),(int)*(short *)(iVar5 + 0x49),
                              (int)*(short *)(iVar5 + 0x4b),(int)*psVar11,(int)psVar11[1],
                              (int)psVar11[2]);
      if ((local_10 != 0xffe) && (local_8 = (int)psVar11[3], local_8 < local_38)) {
        local_44 = local_10 & 0x6000;
        if (local_44 == 0) {
          if ((local_10 & 1) == 0) {
LAB_0040d750:
            local_8 = local_8 + 3;
          }
          else {
            local_8 = local_8 + 4;
          }
        }
        else if ((local_10 & 1) == 0) {
          if ((local_10 & 0xffff9fff) == 0xffe) goto LAB_0040d750;
          local_8 = local_8 + 4;
        }
        else {
          local_8 = local_8 + 5;
        }
        local_34 = local_10 & 1;
        if ((local_8 <= local_14) &&
           (((local_8 != local_14 || ((local_10 == *(uint *)(iVar5 + 0xaf) && (local_1c < 2)))) &&
            (bVar4 = thunk_FUN_00497920(iVar5,(int)*psVar11,(int)psVar11[1],(int)psVar11[2]),
            CONCAT31(extraout_var,bVar4) != 0)))) {
          iVar10 = (int)*psVar11 - (int)*(short *)(iVar5 + 0x47);
          local_18 = (int)psVar11[1] - (int)*(short *)(iVar5 + 0x49);
          if (local_34 == 0) {
            if ((local_44 == 0) || ((local_10 & 0xffff9fff) == 0xffe)) {
LAB_0040dc04:
              if (local_10 != *(uint *)(iVar5 + 0xaf)) {
                local_44 = *(uint *)(*(int *)((int)param_1 + 0x29) + 0xc);
                local_34 = 0;
                if (0 < (int)local_44) {
                  do {
                    iVar10 = *(int *)((int)param_1 + 0x29);
                    if ((*(uint *)(iVar10 + 0xc) <= local_34) ||
                       (psVar8 = (short *)(*(int *)(iVar10 + 8) * local_34 + *(int *)(iVar10 + 0x1c)
                                          ), psVar8 == (short *)0x0)) break;
                    if (((*psVar8 != -1) &&
                        ((((iVar10 = thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)psVar8 >>
                                                                                0x10),*psVar8)),
                           iVar10 != 0 && (iVar10 != iVar5)) &&
                          (iVar7 = *(int *)(iVar10 + 0x97), iVar7 != 0)) &&
                         (*(int *)(iVar10 + 0x9f) != 0)))) &&
                       ((((*(short *)(iVar7 + 8) == *psVar11 &&
                          (*(short *)(iVar7 + 10) == psVar11[1])) &&
                         (*(short *)(iVar7 + 0xc) == psVar11[2])) ||
                        ((((local_48 = FUN_006a5eb0((int)*(short *)(iVar10 + 0x47),
                                                    (int)*(short *)(iVar10 + 0x49),
                                                    (int)*(short *)(iVar10 + 0x4b),(int)*psVar11,
                                                    (int)psVar11[1],(int)psVar11[2]),
                           local_48 != 0xffe &&
                           ((local_48 != *(uint *)(iVar10 + 0xaf) ||
                            (*(short *)(*(int *)(iVar10 + 0x9f) + 6 +
                                       (*(int *)(iVar10 + 0xa7) * 9 + *(int *)(iVar10 + 0xab)) * 8)
                             < local_38)))) &&
                          (bVar4 = thunk_FUN_0040ce20(param_1,iVar10,&local_4c,&local_50,&local_54,
                                                      &local_48),
                          CONCAT31(extraout_var_16,bVar4) != 0)) &&
                         (((local_4c == *psVar11 && (local_50 == psVar11[1])) &&
                          (local_54 == psVar11[2])))))))) goto LAB_0040dd8a;
                    local_34 = local_34 + 1;
                  } while ((int)local_34 < (int)local_44);
                }
              }
              local_28 = (int)*psVar11;
              local_2c = (int)psVar11[1];
              local_30 = (int)psVar11[2];
              local_3c = local_1c;
              local_20 = local_10;
              local_14 = local_8;
              local_40 = local_24;
              if ((local_24 == 0) && (*(int *)(iVar5 + 0xab) == 0)) goto LAB_0040dde1;
            }
            else if (((*(ushort *)
                        (iVar6 + ((int)psVar11[2] - (int)*(short *)(iVar5 + 0x4b)) * local_c * 2) &
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
              else if ((*(ushort *)(iVar6 + DAT_007fb278 * local_18 * 2) & 0xc000) != 0xc000) {
                bVar4 = thunk_FUN_00497920(iVar5,(int)*(short *)(iVar5 + 0x47),(int)psVar11[1],
                                           (int)*(short *)(iVar5 + 0x4b));
                iVar10 = CONCAT31(extraout_var_15,bVar4);
                goto joined_r0x0040dbb9;
              }
            }
          }
          else if (((((*(ushort *)(iVar6 + iVar10 * 2) & 0xc000) != 0xc000) &&
                    ((*(ushort *)(iVar6 + DAT_007fb278 * local_18 * 2) & 0xc000) != 0xc000)) &&
                   (bVar4 = thunk_FUN_00497920(iVar5,(int)*(short *)(iVar5 + 0x47),(int)psVar11[1],
                                               (int)*(short *)(iVar5 + 0x4b)),
                   CONCAT31(extraout_var_00,bVar4) != 0)) &&
                  (bVar4 = thunk_FUN_00497920(iVar5,(int)*psVar11,(int)*(short *)(iVar5 + 0x49),
                                              (int)*(short *)(iVar5 + 0x4b)),
                  CONCAT31(extraout_var_01,bVar4) != 0)) {
            if ((local_10 & 0x4000) == 0) {
              if ((local_10 & 0x2000) == 0) goto LAB_0040dc04;
              if (((((*(ushort *)(iVar6 + local_c * 2) & 0xc000) != 0xc000) &&
                   ((*(ushort *)(iVar6 + (iVar10 + local_c) * 2) & 0xc000) != 0xc000)) &&
                  ((iVar7 = DAT_007fb278 * local_18,
                   (*(ushort *)(iVar6 + (iVar7 + local_c) * 2) & 0xc000) != 0xc000 &&
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
            else if ((((((*(ushort *)(iVar6 + local_c * -2) & 0xc000) != 0xc000) &&
                       ((*(ushort *)(iVar6 + (iVar10 - local_c) * 2) & 0xc000) != 0xc000)) &&
                      ((iVar7 = DAT_007fb278 * local_18,
                       (*(ushort *)(iVar6 + (iVar7 - local_c) * 2) & 0xc000) != 0xc000 &&
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
      local_24 = local_24 + 1;
    } while (local_24 < 9);
    local_1c = local_1c + 1;
    if (2 < local_1c) break;
  }
  if (local_14 == 30000) {
    bVar4 = thunk_FUN_0040ce20(param_1,iVar5,&local_28,&local_2c,&local_30,&local_20);
    if (CONCAT31(extraout_var_17,bVar4) == 0) {
      return 2;
    }
  }
  else {
LAB_0040dde1:
    if (29999 < local_14) {
      return 2;
    }
  }
  FUN_006a5e90(*(undefined4 **)(iVar5 + 0x97));
  *(int *)(iVar5 + 0xa7) = *(int *)(iVar5 + 0xa7) + local_3c;
  *(int *)(iVar5 + 0xab) = local_40;
  puVar9 = Library::DKW::LIB::FUN_006aac10(0x10);
  *(undefined4 **)(iVar5 + 0x97) = puVar9;
  if (puVar9 != (undefined4 *)0x0) {
    *(undefined4 *)(iVar5 + 0x9b) = 2;
    *(undefined2 *)(puVar9 + 2) = (undefined2)local_28;
    *(undefined2 *)(*(int *)(iVar5 + 0x97) + 10) = (undefined2)local_2c;
    *(undefined2 *)(*(int *)(iVar5 + 0x97) + 0xc) = (undefined2)local_30;
    *(short *)(*(int *)(iVar5 + 0x97) + 0xe) = (short)local_20;
    *(int *)(iVar5 + 0xaf) = (int)(short)local_20;
    return 1;
  }
  return -2;
}

