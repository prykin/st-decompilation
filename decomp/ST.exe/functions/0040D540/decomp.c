
int FUN_0040d540(AnonShape_0040D540_1BB7A4CF *param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short *psVar4;
  AnonNested_0040D540_0029_4E1A5CA3 *pAVar5;
  short *psVar6;
  STGameObjC *pSVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  STGameObjC *pSVar12;
  ushort *puVar13;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  ushort *local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  ushort *local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;

  local_20 = 0;
  local_3c = 0;
  local_40 = nullptr;
  pSVar7 = thunk_FUN_00423e70(param_1,(ushort)param_2);
  psVar6 = g_pathingGrid.cells;
  iVar8 = (int)pSVar7->field_0047;
  if (((iVar8 == pSVar7->field_00BB) && ((int)pSVar7->field_0049 == pSVar7->field_00BF)) &&
     ((int)pSVar7->field_004B == pSVar7->field_00C3)) {
    return 0;
  }
  if (pSVar7->field_009F == nullptr) {
    iVar8 = FUN_006aadd0(iVar8,(int)pSVar7->field_0049,(int)pSVar7->field_004B,pSVar7->field_00BB,
                         pSVar7->field_00BF,pSVar7->field_00C3);
    return ((pSVar7->field_00B7 < iVar8) - 1 & 6) - 6;
  }
  iVar9 = pSVar7->field_00A3;
  if (iVar9 + -1 <= pSVar7->field_00A7) {
    return 0;
  }
  psVar4 = pSVar7->field_009F;
  if (((pSVar7->field_0047 == psVar4[iVar9 * 0x24 + -0x24]) &&
      (pSVar7->field_0049 == psVar4[iVar9 * 0x24 + -0x23])) &&
     (pSVar7->field_004B == psVar4[iVar9 * 0x24 + -0x22])) {
    return 0;
  }
  local_c = (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
  iVar8 = pSVar7->field_004B * local_c + iVar8 + (int)pSVar7->field_0049 * (int)g_pathingGrid.sizeX;
  local_14 = 30000;
  local_38 = (int)pSVar7->field_009F[(pSVar7->field_00A7 * 9 + (int)pSVar7->field_00AB) * 4 + 3];
  local_28 = -1;
  local_2c = -1;
  local_30 = -1;
  local_1c = 1;
  while (local_1c < pSVar7->field_00A3 - pSVar7->field_00A7) {
    local_24 = nullptr;
    puVar13 = (ushort *)(pSVar7->field_009F + (pSVar7->field_00A7 + local_1c) * 0x24);
    do {
      if (*puVar13 == 0xffff) break;
      local_10 = FUN_006a5eb0((int)pSVar7->field_0047,(int)pSVar7->field_0049,
                              (int)pSVar7->field_004B,(int)(short)*puVar13,(int)(short)puVar13[1],
                              (int)(short)puVar13[2]);
      if ((local_10 != 0xffe) && (local_8 = (int)(short)puVar13[3], local_8 < local_38)) {
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
           (((local_8 != local_14 || ((local_10 == pSVar7->field_00AF && (local_1c < 2)))) &&
            (iVar9 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                        (int)(short)*puVar13,(int)(short)puVar13[1],
                                        (int)(short)puVar13[2]), iVar9 != 0)))) {
          iVar9 = (int)(short)*puVar13 - (int)pSVar7->field_0047;
          local_18 = (int)(short)puVar13[1] - (int)pSVar7->field_0049;
          if (local_34 == 0) {
            if ((local_44 == 0) || ((local_10 & 0xffff9fff) == 0xffe)) {
LAB_0040dc04:
              if (local_10 != pSVar7->field_00AF) {
                local_44 = *(uint *)&param_1->field_0029->field_0xc;
                local_34 = 0;
                if (0 < (int)local_44) {
                  do {
                    pAVar5 = param_1->field_0029;
                    if ((*(uint *)&pAVar5->field_0xc <= local_34) ||
                       (puVar11 = (ushort *)
                                  (*(int *)&pAVar5->field_0x8 * local_34 + pAVar5->field_001C),
                       puVar11 == nullptr)) break;
                    uVar3 = *puVar11;
                    if (((uVar3 != 0xffff) &&
                        ((((pSVar12 = thunk_FUN_00423e70(param_1,uVar3),
                           pSVar12 != nullptr && (pSVar12 != pSVar7)) &&
                          (puVar11 = pSVar12->field_0097, puVar11 != nullptr)) &&
                         (pSVar12->field_009F != nullptr)))) &&
                       ((((puVar11[4] == *puVar13 && (puVar11[5] == puVar13[1])) &&
                         (puVar11[6] == puVar13[2])) ||
                        ((((local_48 = FUN_006a5eb0((int)pSVar12->field_0047,
                                                    (int)pSVar12->field_0049,
                                                    (int)pSVar12->field_004B,(int)(short)*puVar13,
                                                    (int)(short)puVar13[1],(int)(short)puVar13[2]),
                           local_48 != 0xffe &&
                           ((local_48 != pSVar12->field_00AF ||
                            (pSVar12->field_009F
                             [(pSVar12->field_00A7 * 9 + (int)pSVar12->field_00AB) * 4 + 3] <
                             local_38)))) &&
                          (iVar9 = thunk_FUN_0040ce20(param_1,(AnonShape_0040CE20_D3328A6B *)pSVar12
                                                      ,&local_4c,&local_50,&local_54,&local_48),
                          iVar9 != 0)) &&
                         (((local_4c == (short)*puVar13 && (local_50 == (short)puVar13[1])) &&
                          (local_54 == (short)puVar13[2])))))))) goto LAB_0040dd8a;
                    local_34 = local_34 + 1;
                  } while ((int)local_34 < (int)local_44);
                }
              }
              local_28 = (int)(short)*puVar13;
              local_2c = (int)(short)puVar13[1];
              local_30 = (int)(short)puVar13[2];
              local_3c = local_1c;
              local_20 = local_10;
              local_14 = local_8;
              local_40 = local_24;
              if ((local_24 == nullptr) && (pSVar7->field_00AB == nullptr))
              goto LAB_0040dde1;
            }
            else if (((psVar6[iVar8 + ((int)(short)puVar13[2] - (int)pSVar7->field_004B) * local_c]
                      & 0xc000U) != 0xc000) &&
                    (iVar10 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                                 (int)pSVar7->field_0047,(int)pSVar7->field_0049,
                                                 (int)(short)puVar13[2]), iVar10 != 0)) {
              if (puVar13[1] == pSVar7->field_0049) {
                if ((psVar6[iVar8 + iVar9] & 0xc000U) != 0xc000) {
                  iVar9 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                             (int)(short)*puVar13,(int)pSVar7->field_0049,
                                             (int)pSVar7->field_004B);
joined_r0x0040dbb9:
                  if (iVar9 != 0) goto LAB_0040dc04;
                }
              }
              else if ((psVar6[iVar8 + g_pathingGrid.sizeX * local_18] & 0xc000U) != 0xc000) {
                iVar9 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                           (int)pSVar7->field_0047,(int)(short)puVar13[1],
                                           (int)pSVar7->field_004B);
                goto joined_r0x0040dbb9;
              }
            }
          }
          else if (((((psVar6[iVar8 + iVar9] & 0xc000U) != 0xc000) &&
                    ((psVar6[iVar8 + g_pathingGrid.sizeX * local_18] & 0xc000U) != 0xc000)) &&
                   (iVar10 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                                (int)pSVar7->field_0047,(int)(short)puVar13[1],
                                                (int)pSVar7->field_004B), iVar10 != 0)) &&
                  (iVar10 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                               (int)(short)*puVar13,(int)pSVar7->field_0049,
                                               (int)pSVar7->field_004B), iVar10 != 0)) {
            if ((local_10 & 0x4000) == 0) {
              if ((local_10 & 0x2000) == 0) goto LAB_0040dc04;
              if (((((psVar6[iVar8 + local_c] & 0xc000U) != 0xc000) &&
                   ((psVar6[iVar8 + iVar9 + local_c] & 0xc000U) != 0xc000)) &&
                  ((iVar10 = g_pathingGrid.sizeX * local_18,
                   (psVar6[iVar8 + iVar10 + local_c] & 0xc000U) != 0xc000 &&
                   (((psVar6[iVar8 + iVar10 + iVar9] & 0xc000U) != 0xc000 &&
                    ((psVar6[iVar8 + iVar9] & 0xc000U) != 0xc000)))))) &&
                 (((psVar6[iVar8 + iVar10] & 0xc000U) != 0xc000 &&
                  ((((iVar9 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                                 (int)pSVar7->field_0047,(int)pSVar7->field_0049,
                                                 pSVar7->field_004B + 1), iVar9 != 0 &&
                     (iVar9 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                                 (int)(short)*puVar13,(int)pSVar7->field_0049,
                                                 pSVar7->field_004B + 1), iVar9 != 0)) &&
                    (iVar9 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                                (int)pSVar7->field_0047,(int)(short)puVar13[1],
                                                pSVar7->field_004B + 1), iVar9 != 0)) &&
                   ((iVar9 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                                (int)(short)*puVar13,(int)(short)puVar13[1],
                                                (int)pSVar7->field_004B), iVar9 != 0 &&
                    (iVar9 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                                (int)pSVar7->field_0047,(int)(short)puVar13[1],
                                                (int)pSVar7->field_004B), iVar9 != 0)))))))) {
                sVar1 = pSVar7->field_004B;
                sVar2 = pSVar7->field_0049;
                uVar3 = *puVar13;
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
                     ((iVar9 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                                  (int)pSVar7->field_0047,(int)pSVar7->field_0049,
                                                  pSVar7->field_004B + -1), iVar9 != 0 &&
                      (iVar9 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                                  (int)(short)*puVar13,(int)pSVar7->field_0049,
                                                  pSVar7->field_004B + -1), iVar9 != 0)))) &&
                    ((iVar9 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                                 (int)pSVar7->field_0047,(int)(short)puVar13[1],
                                                 pSVar7->field_004B + -1), iVar9 != 0 &&
                     ((iVar9 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                                  (int)(short)*puVar13,(int)(short)puVar13[1],
                                                  (int)pSVar7->field_004B), iVar9 != 0 &&
                      (iVar9 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                                  (int)pSVar7->field_0047,(int)(short)puVar13[1],
                                                  (int)pSVar7->field_004B), iVar9 != 0)))))) {
              sVar1 = pSVar7->field_004B;
              sVar2 = pSVar7->field_0049;
              uVar3 = *puVar13;
LAB_0040db07:
              iVar9 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar7,
                                         (int)(short)uVar3,(int)sVar2,(int)sVar1);
              goto joined_r0x0040dbb9;
            }
          }
        }
      }
LAB_0040dd8a:
      puVar13 = puVar13 + 4;
      local_24 = (ushort *)((int)local_24 + 1);
    } while ((int)local_24 < 9);
    local_1c = local_1c + 1;
    if (2 < local_1c) break;
  }
  if (local_14 == 30000) {
    iVar8 = thunk_FUN_0040ce20(param_1,(AnonShape_0040CE20_D3328A6B *)pSVar7,&local_28,&local_2c,
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
  FUN_006a5e90((short *)pSVar7->field_0097);
  pSVar7->field_00A7 = pSVar7->field_00A7 + local_3c;
  pSVar7->field_00AB = local_40;
  puVar13 = Library::DKW::LIB::MemAllocClear(0x10);
  pSVar7->field_0097 = puVar13;
  if (puVar13 != nullptr) {
    pSVar7->field_009B = 2;
    puVar13[4] = (ushort)local_28;
    pSVar7->field_0097[5] = (ushort)local_2c;
    pSVar7->field_0097[6] = (ushort)local_30;
    pSVar7->field_0097[7] = (ushort)local_20;
    pSVar7->field_00AF = (int)(short)(ushort)local_20;
    return 1;
  }
  return -2;
}

