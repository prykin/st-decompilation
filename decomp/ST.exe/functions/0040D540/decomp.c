
int FUN_0040d540(AnonShape_0040D540_1BB7A4CF *param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  AnonNested_AnonShape_00497920_894F87D6_009F_65AF98AA *pAVar4;
  AnonNested_0040D540_0029_4E1A5CA3 *pAVar5;
  short *psVar6;
  RecoveredRecord_STBoatC_0040AE40 *pRVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  RecoveredRecord_STBoatC_0040AE40 *pRVar12;
  void *pvVar13;
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
  pRVar7 = (RecoveredRecord_STBoatC_0040AE40 *)thunk_FUN_00423e70(param_1,param_2);
  psVar6 = g_pathingGrid.cells;
  iVar8 = (int)pRVar7->field_0047;
  if (((iVar8 == pRVar7->field_00BB) && ((int)pRVar7->field_0049 == pRVar7->field_00BF)) &&
     ((int)pRVar7->field_004B == pRVar7->field_00C3)) {
    return 0;
  }
  if (pRVar7->field_009F == nullptr) {
    iVar8 = FUN_006aadd0(iVar8,(int)pRVar7->field_0049,(int)pRVar7->field_004B,pRVar7->field_00BB,
                         pRVar7->field_00BF,pRVar7->field_00C3);
    return ((pRVar7->field_00B7 < iVar8) - 1 & 6) - 6;
  }
  iVar9 = pRVar7->field_00A3;
  if (iVar9 + -1 <= (int)pRVar7->field_00A7) {
    return 0;
  }
  pAVar4 = pRVar7->field_009F;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((pRVar7->field_0047 == *(short *)((int)pAVar4 + iVar9 * 0x48 + -0x48)) &&
      (pRVar7->field_0049 == *(short *)((int)pAVar4 + iVar9 * 0x48 + -0x46))) &&
     (pRVar7->field_004B == *(short *)((int)pAVar4 + iVar9 * 0x48 + -0x44))) {
    return 0;
  }
  local_c = (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
  iVar8 = pRVar7->field_004B * local_c + iVar8 + (int)pRVar7->field_0049 * (int)g_pathingGrid.sizeX;
  local_14 = 30000;
  local_38 = (int)(short)(&pRVar7->field_009F->field_0006)
                         [(pRVar7->field_00A7 * 9 + *(int *)&pRVar7->field_00AB) * 4];
  local_28 = -1;
  local_2c = -1;
  local_30 = -1;
  local_1c = 1;
  while (local_1c < (int)(pRVar7->field_00A3 - pRVar7->field_00A7)) {
    local_24 = 0;
    psVar14 = &pRVar7->field_009F->field_0000 + (pRVar7->field_00A7 + local_1c) * 0x24;
    do {
      if (*psVar14 == -1) break;
      local_10 = FUN_006a5eb0((int)pRVar7->field_0047,(int)pRVar7->field_0049,
                              (int)pRVar7->field_004B,(int)*psVar14,(int)psVar14[1],(int)psVar14[2]);
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
           (((local_8 != local_14 || ((local_10 == pRVar7->field_00AF && (local_1c < 2)))) &&
            (iVar9 = thunk_FUN_00497920(pRVar7,(int)*psVar14,(int)psVar14[1],(int)psVar14[2]),
            iVar9 != 0)))) {
          iVar9 = (int)*psVar14 - (int)pRVar7->field_0047;
          local_18 = (int)psVar14[1] - (int)pRVar7->field_0049;
          if (local_34 == 0) {
            if ((local_44 == 0) || ((local_10 & 0xffff9fff) == 0xffe)) {
LAB_0040dc04:
              if (local_10 != pRVar7->field_00AF) {
                local_44 = *(uint *)&param_1->field_0029->field_0xc;
                local_34 = 0;
                if (0 < (int)local_44) {
                  do {
                    pAVar5 = param_1->field_0029;
                    if ((*(uint *)&pAVar5->field_0xc <= local_34) ||
                       (psVar11 = (short *)(*(int *)&pAVar5->field_0x8 * local_34 +
                                           pAVar5->field_001C), psVar11 == nullptr)) break;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    if (((*psVar11 != -1) &&
                        ((((pRVar12 = (RecoveredRecord_STBoatC_0040AE40 *)
                                      thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)psVar11 >>
                                                                                 0x10),*psVar11)),
                           pRVar12 != nullptr && (pRVar12 != pRVar7)
                           ) && (iVar9 = *(int *)&pRVar12->field_0x97, iVar9 != 0)) &&
                         (pRVar12->field_009F !=
                          nullptr)))) &&
                       ((((*(short *)(iVar9 + 8) == *psVar14 &&
                          (*(short *)(iVar9 + 10) == psVar14[1])) &&
                         (*(short *)(iVar9 + 0xc) == psVar14[2])) ||
                        ((((local_48 = FUN_006a5eb0((int)pRVar12->field_0047,
                                                    (int)pRVar12->field_0049,
                                                    (int)pRVar12->field_004B,(int)*psVar14,
                                                    (int)psVar14[1],(int)psVar14[2]),
                           local_48 != 0xffe &&
                           ((local_48 != pRVar12->field_00AF ||
                            ((short)(&pRVar12->field_009F->field_0006)
                                    [(pRVar12->field_00A7 * 9 + *(int *)&pRVar12->field_00AB) * 4] <
                             local_38)))) &&
                          (iVar9 = thunk_FUN_0040ce20(param_1,(AnonShape_0040CE20_D3328A6B *)pRVar12
                                                      ,&local_4c,&local_50,&local_54,&local_48),
                          iVar9 != 0)) &&
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
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if ((local_24 == 0) &&
                 (iVar9._0_2_ = pRVar7->field_00AB, iVar9._2_2_ = pRVar7->field_00AD, iVar9 == 0))
              goto LAB_0040dde1;
            }
            else if (((psVar6[iVar8 + ((int)psVar14[2] - (int)pRVar7->field_004B) * local_c] &
                      0xc000U) != 0xc000) &&
                    (iVar10 = thunk_FUN_00497920(pRVar7,(int)pRVar7->field_0047,
                                                 (int)pRVar7->field_0049,(int)psVar14[2]),
                    iVar10 != 0)) {
              if (psVar14[1] == pRVar7->field_0049) {
                if ((psVar6[iVar8 + iVar9] & 0xc000U) != 0xc000) {
                  iVar9 = thunk_FUN_00497920(pRVar7,(int)*psVar14,(int)pRVar7->field_0049,
                                             (int)pRVar7->field_004B);
joined_r0x0040dbb9:
                  if (iVar9 != 0) goto LAB_0040dc04;
                }
              }
              else if ((psVar6[iVar8 + g_pathingGrid.sizeX * local_18] & 0xc000U) != 0xc000) {
                iVar9 = thunk_FUN_00497920(pRVar7,(int)pRVar7->field_0047,(int)psVar14[1],
                                           (int)pRVar7->field_004B);
                goto joined_r0x0040dbb9;
              }
            }
          }
          else if (((((psVar6[iVar8 + iVar9] & 0xc000U) != 0xc000) &&
                    ((psVar6[iVar8 + g_pathingGrid.sizeX * local_18] & 0xc000U) != 0xc000)) &&
                   (iVar10 = thunk_FUN_00497920(pRVar7,(int)pRVar7->field_0047,(int)psVar14[1],
                                                (int)pRVar7->field_004B), iVar10 != 0)) &&
                  (iVar10 = thunk_FUN_00497920(pRVar7,(int)*psVar14,(int)pRVar7->field_0049,
                                               (int)pRVar7->field_004B), iVar10 != 0)) {
            if ((local_10 & 0x4000) == 0) {
              if ((local_10 & 0x2000) == 0) goto LAB_0040dc04;
              if (((((psVar6[iVar8 + local_c] & 0xc000U) != 0xc000) &&
                   ((psVar6[iVar8 + iVar9 + local_c] & 0xc000U) != 0xc000)) &&
                  ((iVar10 = g_pathingGrid.sizeX * local_18,
                   (psVar6[iVar8 + iVar10 + local_c] & 0xc000U) != 0xc000 &&
                   (((psVar6[iVar8 + iVar10 + iVar9] & 0xc000U) != 0xc000 &&
                    ((psVar6[iVar8 + iVar9] & 0xc000U) != 0xc000)))))) &&
                 (((psVar6[iVar8 + iVar10] & 0xc000U) != 0xc000 &&
                  ((((iVar9 = thunk_FUN_00497920(pRVar7,(int)pRVar7->field_0047,
                                                 (int)pRVar7->field_0049,pRVar7->field_004B + 1),
                     iVar9 != 0 &&
                     (iVar9 = thunk_FUN_00497920(pRVar7,(int)*psVar14,(int)pRVar7->field_0049,
                                                 pRVar7->field_004B + 1), iVar9 != 0)) &&
                    (iVar9 = thunk_FUN_00497920(pRVar7,(int)pRVar7->field_0047,(int)psVar14[1],
                                                pRVar7->field_004B + 1), iVar9 != 0)) &&
                   ((iVar9 = thunk_FUN_00497920(pRVar7,(int)*psVar14,(int)psVar14[1],
                                                (int)pRVar7->field_004B), iVar9 != 0 &&
                    (iVar9 = thunk_FUN_00497920(pRVar7,(int)pRVar7->field_0047,(int)psVar14[1],
                                                (int)pRVar7->field_004B), iVar9 != 0)))))))) {
                sVar1 = pRVar7->field_004B;
                sVar2 = pRVar7->field_0049;
                sVar3 = *psVar14;
                goto LAB_0040db07;
              }
            }
            else if ((((((psVar6[iVar8 - local_c] & 0xc000U) != 0xc000) &&
                       ((psVar6[iVar8 + (iVar9 - local_c)] & 0xc000U) != 0xc000)) &&
                      ((iVar10 = g_pathingGrid.sizeX * local_18,
                       (psVar6[iVar8 + (iVar10 - local_c)] & 0xc000U) != 0xc000 &&
                       ((((psVar6[iVar8 + iVar10 + iVar9] & 0xc000U) != 0xc000 &&
                         ((psVar6[iVar8 + iVar9] & 0xc000U) != 0xc000)) &&
                        ((psVar6[iVar8 + iVar10] & 0xc000U) != 0xc000)))))) &&
                     ((iVar9 = thunk_FUN_00497920(pRVar7,(int)pRVar7->field_0047,
                                                  (int)pRVar7->field_0049,pRVar7->field_004B + -1),
                      iVar9 != 0 &&
                      (iVar9 = thunk_FUN_00497920(pRVar7,(int)*psVar14,(int)pRVar7->field_0049,
                                                  pRVar7->field_004B + -1), iVar9 != 0)))) &&
                    ((iVar9 = thunk_FUN_00497920(pRVar7,(int)pRVar7->field_0047,(int)psVar14[1],
                                                 pRVar7->field_004B + -1), iVar9 != 0 &&
                     ((iVar9 = thunk_FUN_00497920(pRVar7,(int)*psVar14,(int)psVar14[1],
                                                  (int)pRVar7->field_004B), iVar9 != 0 &&
                      (iVar9 = thunk_FUN_00497920(pRVar7,(int)pRVar7->field_0047,(int)psVar14[1],
                                                  (int)pRVar7->field_004B), iVar9 != 0)))))) {
              sVar1 = pRVar7->field_004B;
              sVar2 = pRVar7->field_0049;
              sVar3 = *psVar14;
LAB_0040db07:
              iVar9 = thunk_FUN_00497920(pRVar7,(int)sVar3,(int)sVar2,(int)sVar1);
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
    iVar8 = thunk_FUN_0040ce20(param_1,(AnonShape_0040CE20_D3328A6B *)pRVar7,&local_28,&local_2c,
                               &local_30,&local_20);
    if (iVar8 == 0) {
      return 2;
    }
  }
  else {
LAB_0040dde1:
    if (29999 < local_14) {
      return 2;
    }
  }
  FUN_006a5e90(*(short **)&pRVar7->field_0x97);
  pRVar7->field_00A7 = pRVar7->field_00A7 + local_3c;
  pRVar7->field_00AB = (undefined2)local_40;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  pRVar7->field_00AD = local_40._2_2_;
  pvVar13 = Library::DKW::LIB::MemAllocClear(0x10);
  *(void **)&pRVar7->field_0x97 = pvVar13;
  if (pvVar13 != nullptr) {
    *(undefined4 *)&pRVar7->field_0x9b = 2;
    *(undefined2 *)((int)pvVar13 + 8) = (undefined2)local_28;
    *(undefined2 *)(*(int *)&pRVar7->field_0x97 + 10) = (undefined2)local_2c;
    *(undefined2 *)(*(int *)&pRVar7->field_0x97 + 0xc) = (undefined2)local_30;
    *(short *)(*(int *)&pRVar7->field_0x97 + 0xe) = (short)local_20;
    pRVar7->field_00AF = (int)(short)local_20;
    return 1;
  }
  return -2;
}

