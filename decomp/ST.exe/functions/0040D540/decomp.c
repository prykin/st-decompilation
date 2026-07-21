
int FUN_0040d540(AnonShape_0040D540_1BB7A4CF *param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  AnonNested_0040D540_0029_4E1A5CA3 *pAVar4;
  short *psVar5;
  AnonShape_0040CE20_D3328A6B *pAVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  AnonShape_0040CE20_D3328A6B *pAVar11;
  undefined4 *puVar12;
  short *psVar13;
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
  pAVar6 = (AnonShape_0040CE20_D3328A6B *)thunk_FUN_00423e70(param_1,param_2);
  psVar5 = g_pathingGrid.cells;
  iVar7 = (int)pAVar6->field_0047;
  if (((iVar7 == *(int *)&pAVar6[1].field_0x7) &&
      ((int)pAVar6->field_0049 == *(int *)&pAVar6[1].field_0xb)) &&
     ((int)pAVar6->field_004B == *(int *)&pAVar6[1].field_0xf)) {
    return 0;
  }
  if (pAVar6->field_009F == 0) {
    iVar7 = FUN_006aadd0(iVar7,(int)pAVar6->field_0049,(int)pAVar6->field_004B,
                         *(int *)&pAVar6[1].field_0x7,*(int *)&pAVar6[1].field_0xb,
                         *(int *)&pAVar6[1].field_0xf);
    return ((*(int *)&pAVar6[1].field_0x3 < iVar7) - 1 & 6) - 6;
  }
  iVar8 = pAVar6->field_00A3;
  if (iVar8 + -1 <= pAVar6->field_00A7) {
    return 0;
  }
  iVar9 = pAVar6->field_009F + -0x48 + iVar8 * 0x48;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((pAVar6->field_0047 == *(short *)(pAVar6->field_009F + -0x48 + iVar8 * 0x48)) &&
      (pAVar6->field_0049 == *(short *)(iVar9 + 2))) &&
     (pAVar6->field_004B == *(short *)(iVar9 + 4))) {
    return 0;
  }
  local_c = (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
  iVar7 = pAVar6->field_004B * local_c + iVar7 + (int)pAVar6->field_0049 * (int)g_pathingGrid.sizeX;
  local_14 = 30000;
  local_38 = (int)*(short *)(pAVar6->field_009F + 6 +
                            (pAVar6->field_00A7 * 9 + *(int *)&pAVar6->field_0xab) * 8);
  local_28 = -1;
  local_2c = -1;
  local_30 = -1;
  local_1c = 1;
  while (local_1c < pAVar6->field_00A3 - pAVar6->field_00A7) {
    local_24 = 0;
    psVar13 = (short *)(pAVar6->field_009F + (pAVar6->field_00A7 + local_1c) * 0x48);
    do {
      if (*psVar13 == -1) break;
      local_10 = FUN_006a5eb0((int)pAVar6->field_0047,(int)pAVar6->field_0049,
                              (int)pAVar6->field_004B,(int)*psVar13,(int)psVar13[1],(int)psVar13[2])
      ;
      if ((local_10 != 0xffe) && (local_8 = (int)psVar13[3], local_8 < local_38)) {
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
           (((local_8 != local_14 || ((local_10 == pAVar6->field_00AF && (local_1c < 2)))) &&
            (iVar8 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,(int)*psVar13,
                                        (int)psVar13[1],(int)psVar13[2]), iVar8 != 0)))) {
          iVar8 = (int)*psVar13 - (int)pAVar6->field_0047;
          local_18 = (int)psVar13[1] - (int)pAVar6->field_0049;
          if (local_34 == 0) {
            if ((local_44 == 0) || ((local_10 & 0xffff9fff) == 0xffe)) {
LAB_0040dc04:
              if (local_10 != pAVar6->field_00AF) {
                local_44 = *(uint *)&param_1->field_0029->field_0xc;
                local_34 = 0;
                if (0 < (int)local_44) {
                  do {
                    pAVar4 = param_1->field_0029;
                    if ((*(uint *)&pAVar4->field_0xc <= local_34) ||
                       (psVar10 = (short *)(*(int *)&pAVar4->field_0x8 * local_34 +
                                           pAVar4->field_001C), psVar10 == (short *)0x0)) break;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    if (((*psVar10 != -1) &&
                        ((((pAVar11 = (AnonShape_0040CE20_D3328A6B *)
                                      thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)psVar10 >>
                                                                                 0x10),*psVar10)),
                           pAVar11 != (AnonShape_0040CE20_D3328A6B *)0x0 && (pAVar11 != pAVar6)) &&
                          (iVar8 = *(int *)&pAVar11->field_0x97, iVar8 != 0)) &&
                         (pAVar11->field_009F != 0)))) &&
                       ((((*(short *)(iVar8 + 8) == *psVar13 &&
                          (*(short *)(iVar8 + 10) == psVar13[1])) &&
                         (*(short *)(iVar8 + 0xc) == psVar13[2])) ||
                        ((((local_48 = FUN_006a5eb0((int)pAVar11->field_0047,
                                                    (int)pAVar11->field_0049,
                                                    (int)pAVar11->field_004B,(int)*psVar13,
                                                    (int)psVar13[1],(int)psVar13[2]),
                           local_48 != 0xffe &&
                           ((local_48 != pAVar11->field_00AF ||
                            (*(short *)(pAVar11->field_009F + 6 +
                                       (pAVar11->field_00A7 * 9 + *(int *)&pAVar11->field_0xab) * 8)
                             < local_38)))) &&
                          (iVar8 = thunk_FUN_0040ce20(param_1,pAVar11,&local_4c,&local_50,&local_54,
                                                      &local_48), iVar8 != 0)) &&
                         (((local_4c == *psVar13 && (local_50 == psVar13[1])) &&
                          (local_54 == psVar13[2])))))))) goto LAB_0040dd8a;
                    local_34 = local_34 + 1;
                  } while ((int)local_34 < (int)local_44);
                }
              }
              local_28 = (int)*psVar13;
              local_2c = (int)psVar13[1];
              local_30 = (int)psVar13[2];
              local_3c = local_1c;
              local_20 = local_10;
              local_14 = local_8;
              local_40 = local_24;
              if ((local_24 == 0) && (*(int *)&pAVar6->field_0xab == 0)) goto LAB_0040dde1;
            }
            else if (((psVar5[iVar7 + ((int)psVar13[2] - (int)pAVar6->field_004B) * local_c] &
                      0xc000U) != 0xc000) &&
                    (iVar9 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                (int)pAVar6->field_0047,(int)pAVar6->field_0049,
                                                (int)psVar13[2]), iVar9 != 0)) {
              if (psVar13[1] == pAVar6->field_0049) {
                if ((psVar5[iVar7 + iVar8] & 0xc000U) != 0xc000) {
                  iVar8 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,(int)*psVar13,
                                             (int)pAVar6->field_0049,(int)pAVar6->field_004B);
joined_r0x0040dbb9:
                  if (iVar8 != 0) goto LAB_0040dc04;
                }
              }
              else if ((psVar5[iVar7 + g_pathingGrid.sizeX * local_18] & 0xc000U) != 0xc000) {
                iVar8 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                           (int)pAVar6->field_0047,(int)psVar13[1],
                                           (int)pAVar6->field_004B);
                goto joined_r0x0040dbb9;
              }
            }
          }
          else if (((((psVar5[iVar7 + iVar8] & 0xc000U) != 0xc000) &&
                    ((psVar5[iVar7 + g_pathingGrid.sizeX * local_18] & 0xc000U) != 0xc000)) &&
                   (iVar9 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                               (int)pAVar6->field_0047,(int)psVar13[1],
                                               (int)pAVar6->field_004B), iVar9 != 0)) &&
                  (iVar9 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,(int)*psVar13,
                                              (int)pAVar6->field_0049,(int)pAVar6->field_004B),
                  iVar9 != 0)) {
            if ((local_10 & 0x4000) == 0) {
              if ((local_10 & 0x2000) == 0) goto LAB_0040dc04;
              if (((((psVar5[iVar7 + local_c] & 0xc000U) != 0xc000) &&
                   ((psVar5[iVar7 + iVar8 + local_c] & 0xc000U) != 0xc000)) &&
                  ((iVar9 = g_pathingGrid.sizeX * local_18,
                   (psVar5[iVar7 + iVar9 + local_c] & 0xc000U) != 0xc000 &&
                   (((psVar5[iVar7 + iVar9 + iVar8] & 0xc000U) != 0xc000 &&
                    ((psVar5[iVar7 + iVar8] & 0xc000U) != 0xc000)))))) &&
                 (((psVar5[iVar7 + iVar9] & 0xc000U) != 0xc000 &&
                  ((((iVar8 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                 (int)pAVar6->field_0047,(int)pAVar6->field_0049,
                                                 pAVar6->field_004B + 1), iVar8 != 0 &&
                     (iVar8 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,(int)*psVar13
                                                 ,(int)pAVar6->field_0049,pAVar6->field_004B + 1),
                     iVar8 != 0)) &&
                    (iVar8 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                (int)pAVar6->field_0047,(int)psVar13[1],
                                                pAVar6->field_004B + 1), iVar8 != 0)) &&
                   ((iVar8 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,(int)*psVar13,
                                                (int)psVar13[1],(int)pAVar6->field_004B), iVar8 != 0
                    && (iVar8 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                   (int)pAVar6->field_0047,(int)psVar13[1],
                                                   (int)pAVar6->field_004B), iVar8 != 0)))))))) {
                sVar1 = pAVar6->field_004B;
                sVar2 = pAVar6->field_0049;
                sVar3 = *psVar13;
                goto LAB_0040db07;
              }
            }
            else if ((((((psVar5[iVar7 - local_c] & 0xc000U) != 0xc000) &&
                       ((psVar5[iVar7 + (iVar8 - local_c)] & 0xc000U) != 0xc000)) &&
                      ((iVar9 = g_pathingGrid.sizeX * local_18,
                       (psVar5[iVar7 + (iVar9 - local_c)] & 0xc000U) != 0xc000 &&
                       ((((psVar5[iVar7 + iVar9 + iVar8] & 0xc000U) != 0xc000 &&
                         ((psVar5[iVar7 + iVar8] & 0xc000U) != 0xc000)) &&
                        ((psVar5[iVar7 + iVar9] & 0xc000U) != 0xc000)))))) &&
                     ((iVar8 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                  (int)pAVar6->field_0047,(int)pAVar6->field_0049,
                                                  pAVar6->field_004B + -1), iVar8 != 0 &&
                      (iVar8 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                  (int)*psVar13,(int)pAVar6->field_0049,
                                                  pAVar6->field_004B + -1), iVar8 != 0)))) &&
                    ((iVar8 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                 (int)pAVar6->field_0047,(int)psVar13[1],
                                                 pAVar6->field_004B + -1), iVar8 != 0 &&
                     ((iVar8 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                  (int)*psVar13,(int)psVar13[1],
                                                  (int)pAVar6->field_004B), iVar8 != 0 &&
                      (iVar8 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,
                                                  (int)pAVar6->field_0047,(int)psVar13[1],
                                                  (int)pAVar6->field_004B), iVar8 != 0)))))) {
              sVar1 = pAVar6->field_004B;
              sVar2 = pAVar6->field_0049;
              sVar3 = *psVar13;
LAB_0040db07:
              iVar8 = thunk_FUN_00497920((AnonShape_00497920_894F87D6 *)pAVar6,(int)sVar3,(int)sVar2
                                         ,(int)sVar1);
              goto joined_r0x0040dbb9;
            }
          }
        }
      }
LAB_0040dd8a:
      psVar13 = psVar13 + 4;
      local_24 = local_24 + 1;
    } while (local_24 < 9);
    local_1c = local_1c + 1;
    if (2 < local_1c) break;
  }
  if (local_14 == 30000) {
    iVar7 = thunk_FUN_0040ce20(param_1,pAVar6,&local_28,&local_2c,&local_30,&local_20);
    if (iVar7 == 0) {
      return 2;
    }
  }
  else {
LAB_0040dde1:
    if (29999 < local_14) {
      return 2;
    }
  }
  FUN_006a5e90(*(short **)&pAVar6->field_0x97);
  pAVar6->field_00A7 = pAVar6->field_00A7 + local_3c;
  *(int *)&pAVar6->field_0xab = local_40;
  puVar12 = Library::DKW::LIB::FUN_006aac10(0x10);
  *(undefined4 **)&pAVar6->field_0x97 = puVar12;
  if (puVar12 != (undefined4 *)0x0) {
    *(undefined4 *)&pAVar6->field_0x9b = 2;
    *(undefined2 *)(puVar12 + 2) = (undefined2)local_28;
    *(undefined2 *)(*(int *)&pAVar6->field_0x97 + 10) = (undefined2)local_2c;
    *(undefined2 *)(*(int *)&pAVar6->field_0x97 + 0xc) = (undefined2)local_30;
    *(short *)(*(int *)&pAVar6->field_0x97 + 0xe) = (short)local_20;
    pAVar6->field_00AF = (int)(short)local_20;
    return 1;
  }
  return -2;
}

