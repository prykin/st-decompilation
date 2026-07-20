
int FUN_0040d540(void *param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  AnonShape_0040CE20_D3328A6B *pAVar5;
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
  AnonShape_0040CE20_D3328A6B *pAVar9;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined4 *puVar10;
  int iVar11;
  short *psVar12;
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
  pAVar5 = (AnonShape_0040CE20_D3328A6B *)thunk_FUN_00423e70(param_1,param_2);
  iVar6 = (int)pAVar5->field_0047;
  if (((iVar6 == *(int *)&pAVar5[1].field_0x7) &&
      ((int)pAVar5->field_0049 == *(int *)&pAVar5[1].field_0xb)) &&
     ((int)pAVar5->field_004B == *(int *)&pAVar5[1].field_0xf)) {
    return 0;
  }
  if (pAVar5->field_009F == 0) {
    iVar6 = FUN_006aadd0(iVar6,(int)pAVar5->field_0049,(int)pAVar5->field_004B,
                         *(int *)&pAVar5[1].field_0x7,*(int *)&pAVar5[1].field_0xb,
                         *(int *)&pAVar5[1].field_0xf);
    return ((*(int *)&pAVar5[1].field_0x3 < iVar6) - 1 & 6) - 6;
  }
  iVar11 = pAVar5->field_00A3;
  if (iVar11 + -1 <= pAVar5->field_00A7) {
    return 0;
  }
  iVar7 = pAVar5->field_009F + -0x48 + iVar11 * 0x48;
  if (((pAVar5->field_0047 == *(short *)(pAVar5->field_009F + -0x48 + iVar11 * 0x48)) &&
      (pAVar5->field_0049 == *(short *)(iVar7 + 2))) &&
     (pAVar5->field_004B == *(short *)(iVar7 + 4))) {
    return 0;
  }
  local_c = (int)SHORT_007fb27a * (int)SHORT_007fb278;
  local_14 = 30000;
  iVar6 = DAT_007fb280 +
          (pAVar5->field_004B * local_c + iVar6 + (int)pAVar5->field_0049 * (int)SHORT_007fb278) * 2
  ;
  local_38 = (int)*(short *)(pAVar5->field_009F + 6 +
                            (pAVar5->field_00A7 * 9 + *(int *)&pAVar5->field_0xab) * 8);
  local_28 = -1;
  local_2c = -1;
  local_30 = -1;
  local_1c = 1;
  while (local_1c < pAVar5->field_00A3 - pAVar5->field_00A7) {
    local_24 = 0;
    psVar12 = (short *)(pAVar5->field_009F + (pAVar5->field_00A7 + local_1c) * 0x48);
    do {
      if (*psVar12 == -1) break;
      local_10 = FUN_006a5eb0((int)pAVar5->field_0047,(int)pAVar5->field_0049,
                              (int)pAVar5->field_004B,(int)*psVar12,(int)psVar12[1],(int)psVar12[2])
      ;
      if ((local_10 != 0xffe) && (local_8 = (int)psVar12[3], local_8 < local_38)) {
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
           (((local_8 != local_14 || ((local_10 == pAVar5->field_00AF && (local_1c < 2)))) &&
            (bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,(int)*psVar12,
                                        (int)psVar12[1],(int)psVar12[2]),
            CONCAT31(extraout_var,bVar4) != 0)))) {
          iVar11 = (int)*psVar12 - (int)pAVar5->field_0047;
          local_18 = (int)psVar12[1] - (int)pAVar5->field_0049;
          if (local_34 == 0) {
            if ((local_44 == 0) || ((local_10 & 0xffff9fff) == 0xffe)) {
LAB_0040dc04:
              if (local_10 != pAVar5->field_00AF) {
                local_44 = *(uint *)(*(int *)((int)param_1 + 0x29) + 0xc);
                local_34 = 0;
                if (0 < (int)local_44) {
                  do {
                    iVar11 = *(int *)((int)param_1 + 0x29);
                    if ((*(uint *)(iVar11 + 0xc) <= local_34) ||
                       (psVar8 = (short *)(*(int *)(iVar11 + 8) * local_34 + *(int *)(iVar11 + 0x1c)
                                          ), psVar8 == (short *)0x0)) break;
                    if (((*psVar8 != -1) &&
                        ((((pAVar9 = (AnonShape_0040CE20_D3328A6B *)
                                     thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)psVar8 >>
                                                                                0x10),*psVar8)),
                           pAVar9 != (AnonShape_0040CE20_D3328A6B *)0x0 && (pAVar9 != pAVar5)) &&
                          (iVar11 = *(int *)&pAVar9->field_0x97, iVar11 != 0)) &&
                         (pAVar9->field_009F != 0)))) &&
                       ((((*(short *)(iVar11 + 8) == *psVar12 &&
                          (*(short *)(iVar11 + 10) == psVar12[1])) &&
                         (*(short *)(iVar11 + 0xc) == psVar12[2])) ||
                        ((((local_48 = FUN_006a5eb0((int)pAVar9->field_0047,(int)pAVar9->field_0049,
                                                    (int)pAVar9->field_004B,(int)*psVar12,
                                                    (int)psVar12[1],(int)psVar12[2]),
                           local_48 != 0xffe &&
                           ((local_48 != pAVar9->field_00AF ||
                            (*(short *)(pAVar9->field_009F + 6 +
                                       (pAVar9->field_00A7 * 9 + *(int *)&pAVar9->field_0xab) * 8) <
                             local_38)))) &&
                          (bVar4 = thunk_FUN_0040ce20(param_1,pAVar9,&local_4c,&local_50,&local_54,
                                                      &local_48),
                          CONCAT31(extraout_var_16,bVar4) != 0)) &&
                         (((local_4c == *psVar12 && (local_50 == psVar12[1])) &&
                          (local_54 == psVar12[2])))))))) goto LAB_0040dd8a;
                    local_34 = local_34 + 1;
                  } while ((int)local_34 < (int)local_44);
                }
              }
              local_28 = (int)*psVar12;
              local_2c = (int)psVar12[1];
              local_30 = (int)psVar12[2];
              local_3c = local_1c;
              local_20 = local_10;
              local_14 = local_8;
              local_40 = local_24;
              if ((local_24 == 0) && (*(int *)&pAVar5->field_0xab == 0)) goto LAB_0040dde1;
            }
            else if (((*(ushort *)
                        (iVar6 + ((int)psVar12[2] - (int)pAVar5->field_004B) * local_c * 2) & 0xc000
                      ) != 0xc000) &&
                    (bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,
                                                (int)pAVar5->field_0047,(int)pAVar5->field_0049,
                                                (int)psVar12[2]),
                    CONCAT31(extraout_var_13,bVar4) != 0)) {
              if (psVar12[1] == pAVar5->field_0049) {
                if ((*(ushort *)(iVar6 + iVar11 * 2) & 0xc000) != 0xc000) {
                  bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,(int)*psVar12,
                                             (int)pAVar5->field_0049,(int)pAVar5->field_004B);
                  iVar11 = CONCAT31(extraout_var_14,bVar4);
joined_r0x0040dbb9:
                  if (iVar11 != 0) goto LAB_0040dc04;
                }
              }
              else if ((*(ushort *)(iVar6 + SHORT_007fb278 * local_18 * 2) & 0xc000) != 0xc000) {
                bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,
                                           (int)pAVar5->field_0047,(int)psVar12[1],
                                           (int)pAVar5->field_004B);
                iVar11 = CONCAT31(extraout_var_15,bVar4);
                goto joined_r0x0040dbb9;
              }
            }
          }
          else if (((((*(ushort *)(iVar6 + iVar11 * 2) & 0xc000) != 0xc000) &&
                    ((*(ushort *)(iVar6 + SHORT_007fb278 * local_18 * 2) & 0xc000) != 0xc000)) &&
                   (bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,
                                               (int)pAVar5->field_0047,(int)psVar12[1],
                                               (int)pAVar5->field_004B),
                   CONCAT31(extraout_var_00,bVar4) != 0)) &&
                  (bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,(int)*psVar12,
                                              (int)pAVar5->field_0049,(int)pAVar5->field_004B),
                  CONCAT31(extraout_var_01,bVar4) != 0)) {
            if ((local_10 & 0x4000) == 0) {
              if ((local_10 & 0x2000) == 0) goto LAB_0040dc04;
              if (((((*(ushort *)(iVar6 + local_c * 2) & 0xc000) != 0xc000) &&
                   ((*(ushort *)(iVar6 + (iVar11 + local_c) * 2) & 0xc000) != 0xc000)) &&
                  ((iVar7 = SHORT_007fb278 * local_18,
                   (*(ushort *)(iVar6 + (iVar7 + local_c) * 2) & 0xc000) != 0xc000 &&
                   (((*(ushort *)(iVar6 + (iVar7 + iVar11) * 2) & 0xc000) != 0xc000 &&
                    ((*(ushort *)(iVar6 + iVar11 * 2) & 0xc000) != 0xc000)))))) &&
                 (((*(ushort *)(iVar6 + iVar7 * 2) & 0xc000) != 0xc000 &&
                  ((((bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,
                                                 (int)pAVar5->field_0047,(int)pAVar5->field_0049,
                                                 pAVar5->field_004B + 1),
                     CONCAT31(extraout_var_07,bVar4) != 0 &&
                     (bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,(int)*psVar12
                                                 ,(int)pAVar5->field_0049,pAVar5->field_004B + 1),
                     CONCAT31(extraout_var_08,bVar4) != 0)) &&
                    (bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,
                                                (int)pAVar5->field_0047,(int)psVar12[1],
                                                pAVar5->field_004B + 1),
                    CONCAT31(extraout_var_09,bVar4) != 0)) &&
                   ((bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,(int)*psVar12,
                                                (int)psVar12[1],(int)pAVar5->field_004B),
                    CONCAT31(extraout_var_10,bVar4) != 0 &&
                    (bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,
                                                (int)pAVar5->field_0047,(int)psVar12[1],
                                                (int)pAVar5->field_004B),
                    CONCAT31(extraout_var_11,bVar4) != 0)))))))) {
                sVar1 = pAVar5->field_004B;
                sVar2 = pAVar5->field_0049;
                sVar3 = *psVar12;
                goto LAB_0040db07;
              }
            }
            else if ((((((*(ushort *)(iVar6 + local_c * -2) & 0xc000) != 0xc000) &&
                       ((*(ushort *)(iVar6 + (iVar11 - local_c) * 2) & 0xc000) != 0xc000)) &&
                      ((iVar7 = SHORT_007fb278 * local_18,
                       (*(ushort *)(iVar6 + (iVar7 - local_c) * 2) & 0xc000) != 0xc000 &&
                       ((((*(ushort *)(iVar6 + (iVar7 + iVar11) * 2) & 0xc000) != 0xc000 &&
                         ((*(ushort *)(iVar6 + iVar11 * 2) & 0xc000) != 0xc000)) &&
                        ((*(ushort *)(iVar6 + iVar7 * 2) & 0xc000) != 0xc000)))))) &&
                     ((bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,
                                                  (int)pAVar5->field_0047,(int)pAVar5->field_0049,
                                                  pAVar5->field_004B + -1),
                      CONCAT31(extraout_var_02,bVar4) != 0 &&
                      (bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,
                                                  (int)*psVar12,(int)pAVar5->field_0049,
                                                  pAVar5->field_004B + -1),
                      CONCAT31(extraout_var_03,bVar4) != 0)))) &&
                    ((bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,
                                                 (int)pAVar5->field_0047,(int)psVar12[1],
                                                 pAVar5->field_004B + -1),
                     CONCAT31(extraout_var_04,bVar4) != 0 &&
                     ((bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,
                                                  (int)*psVar12,(int)psVar12[1],
                                                  (int)pAVar5->field_004B),
                      CONCAT31(extraout_var_05,bVar4) != 0 &&
                      (bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,
                                                  (int)pAVar5->field_0047,(int)psVar12[1],
                                                  (int)pAVar5->field_004B),
                      CONCAT31(extraout_var_06,bVar4) != 0)))))) {
              sVar1 = pAVar5->field_004B;
              sVar2 = pAVar5->field_0049;
              sVar3 = *psVar12;
LAB_0040db07:
              bVar4 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar5,(int)sVar3,(int)sVar2
                                         ,(int)sVar1);
              iVar11 = CONCAT31(extraout_var_12,bVar4);
              goto joined_r0x0040dbb9;
            }
          }
        }
      }
LAB_0040dd8a:
      psVar12 = psVar12 + 4;
      local_24 = local_24 + 1;
    } while (local_24 < 9);
    local_1c = local_1c + 1;
    if (2 < local_1c) break;
  }
  if (local_14 == 30000) {
    bVar4 = thunk_FUN_0040ce20(param_1,pAVar5,&local_28,&local_2c,&local_30,&local_20);
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
  FUN_006a5e90(*(short **)&pAVar5->field_0x97);
  pAVar5->field_00A7 = pAVar5->field_00A7 + local_3c;
  *(int *)&pAVar5->field_0xab = local_40;
  puVar10 = Library::DKW::LIB::FUN_006aac10(0x10);
  *(undefined4 **)&pAVar5->field_0x97 = puVar10;
  if (puVar10 != (undefined4 *)0x0) {
    *(undefined4 *)&pAVar5->field_0x9b = 2;
    *(undefined2 *)(puVar10 + 2) = (undefined2)local_28;
    *(undefined2 *)(*(int *)&pAVar5->field_0x97 + 10) = (undefined2)local_2c;
    *(undefined2 *)(*(int *)&pAVar5->field_0x97 + 0xc) = (undefined2)local_30;
    *(short *)(*(int *)&pAVar5->field_0x97 + 0xe) = (short)local_20;
    pAVar5->field_00AF = (int)(short)local_20;
    return 1;
  }
  return -2;
}

