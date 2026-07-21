
int FUN_0040d540(AnonShape_0040D540_1BB7A4CF *param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  AnonNested_0040D540_0029_4E1A5CA3 *pAVar4;
  short *psVar5;
  bool bVar6;
  AnonShape_0040CE20_D3328A6B *pAVar7;
  int iVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar9;
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
  short *psVar10;
  AnonShape_0040CE20_D3328A6B *pAVar11;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined4 *puVar12;
  int iVar13;
  short *psVar14;
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
  pAVar7 = (AnonShape_0040CE20_D3328A6B *)thunk_FUN_00423e70(param_1,param_2);
  psVar5 = g_pathingGrid.cells;
  iVar8 = (int)pAVar7->field_0047;
  if (((iVar8 == *(int *)&pAVar7[1].field_0x7) &&
      ((int)pAVar7->field_0049 == *(int *)&pAVar7[1].field_0xb)) &&
     ((int)pAVar7->field_004B == *(int *)&pAVar7[1].field_0xf)) {
    return 0;
  }
  if (pAVar7->field_009F == 0) {
    iVar8 = FUN_006aadd0(iVar8,(int)pAVar7->field_0049,(int)pAVar7->field_004B,
                         *(int *)&pAVar7[1].field_0x7,*(int *)&pAVar7[1].field_0xb,
                         *(int *)&pAVar7[1].field_0xf);
    return ((*(int *)&pAVar7[1].field_0x3 < iVar8) - 1 & 6) - 6;
  }
  iVar13 = pAVar7->field_00A3;
  if (iVar13 + -1 <= pAVar7->field_00A7) {
    return 0;
  }
  iVar9 = pAVar7->field_009F + -0x48 + iVar13 * 0x48;
  if (((pAVar7->field_0047 == *(short *)(pAVar7->field_009F + -0x48 + iVar13 * 0x48)) &&
      (pAVar7->field_0049 == *(short *)(iVar9 + 2))) &&
     (pAVar7->field_004B == *(short *)(iVar9 + 4))) {
    return 0;
  }
  local_c = (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
  iVar8 = pAVar7->field_004B * local_c + iVar8 + (int)pAVar7->field_0049 * (int)g_pathingGrid.sizeX;
  local_14 = 30000;
  local_38 = (int)*(short *)(pAVar7->field_009F + 6 +
                            (pAVar7->field_00A7 * 9 + *(int *)&pAVar7->field_0xab) * 8);
  local_28 = -1;
  local_2c = -1;
  local_30 = -1;
  local_1c = 1;
  while (local_1c < pAVar7->field_00A3 - pAVar7->field_00A7) {
    local_24 = 0;
    psVar14 = (short *)(pAVar7->field_009F + (pAVar7->field_00A7 + local_1c) * 0x48);
    do {
      if (*psVar14 == -1) break;
      local_10 = FUN_006a5eb0((int)pAVar7->field_0047,(int)pAVar7->field_0049,
                              (int)pAVar7->field_004B,(int)*psVar14,(int)psVar14[1],(int)psVar14[2])
      ;
      if ((local_10 != 0xffe) && (local_8 = (int)psVar14[3], local_8 < local_38)) {
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
           (((local_8 != local_14 || ((local_10 == pAVar7->field_00AF && (local_1c < 2)))) &&
            (bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,(int)*psVar14,
                                        (int)psVar14[1],(int)psVar14[2]),
            CONCAT31(extraout_var,bVar6) != 0)))) {
          iVar13 = (int)*psVar14 - (int)pAVar7->field_0047;
          local_18 = (int)psVar14[1] - (int)pAVar7->field_0049;
          if (local_34 == 0) {
            if ((local_44 == 0) || ((local_10 & 0xffff9fff) == 0xffe)) {
LAB_0040dc04:
              if (local_10 != pAVar7->field_00AF) {
                local_44 = *(uint *)&param_1->field_0029->field_0xc;
                local_34 = 0;
                if (0 < (int)local_44) {
                  do {
                    pAVar4 = param_1->field_0029;
                    if ((*(uint *)&pAVar4->field_0xc <= local_34) ||
                       (psVar10 = (short *)(*(int *)&pAVar4->field_0x8 * local_34 +
                                           pAVar4->field_001C), psVar10 == (short *)0x0)) break;
                    if (((*psVar10 != -1) &&
                        ((((pAVar11 = (AnonShape_0040CE20_D3328A6B *)
                                      thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)psVar10 >>
                                                                                 0x10),*psVar10)),
                           pAVar11 != (AnonShape_0040CE20_D3328A6B *)0x0 && (pAVar11 != pAVar7)) &&
                          (iVar13 = *(int *)&pAVar11->field_0x97, iVar13 != 0)) &&
                         (pAVar11->field_009F != 0)))) &&
                       ((((*(short *)(iVar13 + 8) == *psVar14 &&
                          (*(short *)(iVar13 + 10) == psVar14[1])) &&
                         (*(short *)(iVar13 + 0xc) == psVar14[2])) ||
                        ((((local_48 = FUN_006a5eb0((int)pAVar11->field_0047,
                                                    (int)pAVar11->field_0049,
                                                    (int)pAVar11->field_004B,(int)*psVar14,
                                                    (int)psVar14[1],(int)psVar14[2]),
                           local_48 != 0xffe &&
                           ((local_48 != pAVar11->field_00AF ||
                            (*(short *)(pAVar11->field_009F + 6 +
                                       (pAVar11->field_00A7 * 9 + *(int *)&pAVar11->field_0xab) * 8)
                             < local_38)))) &&
                          (bVar6 = thunk_FUN_0040ce20(param_1,pAVar11,&local_4c,&local_50,&local_54,
                                                      &local_48),
                          CONCAT31(extraout_var_16,bVar6) != 0)) &&
                         (((local_4c == *psVar14 && (local_50 == psVar14[1])) &&
                          (local_54 == psVar14[2])))))))) goto LAB_0040dd8a;
                    local_34 = local_34 + 1;
                  } while ((int)local_34 < (int)local_44);
                }
              }
              local_28 = (int)*psVar14;
              local_2c = (int)psVar14[1];
              local_30 = (int)psVar14[2];
              local_3c = local_1c;
              local_20 = local_10;
              local_14 = local_8;
              local_40 = local_24;
              if ((local_24 == 0) && (*(int *)&pAVar7->field_0xab == 0)) goto LAB_0040dde1;
            }
            else if (((psVar5[iVar8 + ((int)psVar14[2] - (int)pAVar7->field_004B) * local_c] &
                      0xc000U) != 0xc000) &&
                    (bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,
                                                (int)pAVar7->field_0047,(int)pAVar7->field_0049,
                                                (int)psVar14[2]),
                    CONCAT31(extraout_var_13,bVar6) != 0)) {
              if (psVar14[1] == pAVar7->field_0049) {
                if ((psVar5[iVar8 + iVar13] & 0xc000U) != 0xc000) {
                  bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,(int)*psVar14,
                                             (int)pAVar7->field_0049,(int)pAVar7->field_004B);
                  iVar13 = CONCAT31(extraout_var_14,bVar6);
joined_r0x0040dbb9:
                  if (iVar13 != 0) goto LAB_0040dc04;
                }
              }
              else if ((psVar5[iVar8 + g_pathingGrid.sizeX * local_18] & 0xc000U) != 0xc000) {
                bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,
                                           (int)pAVar7->field_0047,(int)psVar14[1],
                                           (int)pAVar7->field_004B);
                iVar13 = CONCAT31(extraout_var_15,bVar6);
                goto joined_r0x0040dbb9;
              }
            }
          }
          else if (((((psVar5[iVar8 + iVar13] & 0xc000U) != 0xc000) &&
                    ((psVar5[iVar8 + g_pathingGrid.sizeX * local_18] & 0xc000U) != 0xc000)) &&
                   (bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,
                                               (int)pAVar7->field_0047,(int)psVar14[1],
                                               (int)pAVar7->field_004B),
                   CONCAT31(extraout_var_00,bVar6) != 0)) &&
                  (bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,(int)*psVar14,
                                              (int)pAVar7->field_0049,(int)pAVar7->field_004B),
                  CONCAT31(extraout_var_01,bVar6) != 0)) {
            if ((local_10 & 0x4000) == 0) {
              if ((local_10 & 0x2000) == 0) goto LAB_0040dc04;
              if (((((psVar5[iVar8 + local_c] & 0xc000U) != 0xc000) &&
                   ((psVar5[iVar8 + iVar13 + local_c] & 0xc000U) != 0xc000)) &&
                  ((iVar9 = g_pathingGrid.sizeX * local_18,
                   (psVar5[iVar8 + iVar9 + local_c] & 0xc000U) != 0xc000 &&
                   (((psVar5[iVar8 + iVar9 + iVar13] & 0xc000U) != 0xc000 &&
                    ((psVar5[iVar8 + iVar13] & 0xc000U) != 0xc000)))))) &&
                 (((psVar5[iVar8 + iVar9] & 0xc000U) != 0xc000 &&
                  ((((bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,
                                                 (int)pAVar7->field_0047,(int)pAVar7->field_0049,
                                                 pAVar7->field_004B + 1),
                     CONCAT31(extraout_var_07,bVar6) != 0 &&
                     (bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,(int)*psVar14
                                                 ,(int)pAVar7->field_0049,pAVar7->field_004B + 1),
                     CONCAT31(extraout_var_08,bVar6) != 0)) &&
                    (bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,
                                                (int)pAVar7->field_0047,(int)psVar14[1],
                                                pAVar7->field_004B + 1),
                    CONCAT31(extraout_var_09,bVar6) != 0)) &&
                   ((bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,(int)*psVar14,
                                                (int)psVar14[1],(int)pAVar7->field_004B),
                    CONCAT31(extraout_var_10,bVar6) != 0 &&
                    (bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,
                                                (int)pAVar7->field_0047,(int)psVar14[1],
                                                (int)pAVar7->field_004B),
                    CONCAT31(extraout_var_11,bVar6) != 0)))))))) {
                sVar1 = pAVar7->field_004B;
                sVar2 = pAVar7->field_0049;
                sVar3 = *psVar14;
                goto LAB_0040db07;
              }
            }
            else if ((((((psVar5[iVar8 - local_c] & 0xc000U) != 0xc000) &&
                       ((psVar5[iVar8 + (iVar13 - local_c)] & 0xc000U) != 0xc000)) &&
                      ((iVar9 = g_pathingGrid.sizeX * local_18,
                       (psVar5[iVar8 + (iVar9 - local_c)] & 0xc000U) != 0xc000 &&
                       ((((psVar5[iVar8 + iVar9 + iVar13] & 0xc000U) != 0xc000 &&
                         ((psVar5[iVar8 + iVar13] & 0xc000U) != 0xc000)) &&
                        ((psVar5[iVar8 + iVar9] & 0xc000U) != 0xc000)))))) &&
                     ((bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,
                                                  (int)pAVar7->field_0047,(int)pAVar7->field_0049,
                                                  pAVar7->field_004B + -1),
                      CONCAT31(extraout_var_02,bVar6) != 0 &&
                      (bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,
                                                  (int)*psVar14,(int)pAVar7->field_0049,
                                                  pAVar7->field_004B + -1),
                      CONCAT31(extraout_var_03,bVar6) != 0)))) &&
                    ((bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,
                                                 (int)pAVar7->field_0047,(int)psVar14[1],
                                                 pAVar7->field_004B + -1),
                     CONCAT31(extraout_var_04,bVar6) != 0 &&
                     ((bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,
                                                  (int)*psVar14,(int)psVar14[1],
                                                  (int)pAVar7->field_004B),
                      CONCAT31(extraout_var_05,bVar6) != 0 &&
                      (bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,
                                                  (int)pAVar7->field_0047,(int)psVar14[1],
                                                  (int)pAVar7->field_004B),
                      CONCAT31(extraout_var_06,bVar6) != 0)))))) {
              sVar1 = pAVar7->field_004B;
              sVar2 = pAVar7->field_0049;
              sVar3 = *psVar14;
LAB_0040db07:
              bVar6 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar7,(int)sVar3,(int)sVar2
                                         ,(int)sVar1);
              iVar13 = CONCAT31(extraout_var_12,bVar6);
              goto joined_r0x0040dbb9;
            }
          }
        }
      }
LAB_0040dd8a:
      psVar14 = psVar14 + 4;
      local_24 = local_24 + 1;
    } while (local_24 < 9);
    local_1c = local_1c + 1;
    if (2 < local_1c) break;
  }
  if (local_14 == 30000) {
    bVar6 = thunk_FUN_0040ce20(param_1,pAVar7,&local_28,&local_2c,&local_30,&local_20);
    if (CONCAT31(extraout_var_17,bVar6) == 0) {
      return 2;
    }
  }
  else {
LAB_0040dde1:
    if (29999 < local_14) {
      return 2;
    }
  }
  FUN_006a5e90(*(short **)&pAVar7->field_0x97);
  pAVar7->field_00A7 = pAVar7->field_00A7 + local_3c;
  *(int *)&pAVar7->field_0xab = local_40;
  puVar12 = Library::DKW::LIB::FUN_006aac10(0x10);
  *(undefined4 **)&pAVar7->field_0x97 = puVar12;
  if (puVar12 != (undefined4 *)0x0) {
    *(undefined4 *)&pAVar7->field_0x9b = 2;
    *(undefined2 *)(puVar12 + 2) = (undefined2)local_28;
    *(undefined2 *)(*(int *)&pAVar7->field_0x97 + 10) = (undefined2)local_2c;
    *(undefined2 *)(*(int *)&pAVar7->field_0x97 + 0xc) = (undefined2)local_30;
    *(short *)(*(int *)&pAVar7->field_0x97 + 0xe) = (short)local_20;
    pAVar7->field_00AF = (int)(short)local_20;
    return 1;
  }
  return -2;
}

