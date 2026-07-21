
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 275 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __thiscall FUN_0040ae40(void *this,uint param_1,char param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  AnonShape_00497920_894F87D6 *pAVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  short *psVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short *psVar17;
  InternalExceptionFrame local_90;
  int local_4c;
  AnonShape_00497920_894F87D6 *local_48;
  uint local_44;
  short *local_40;
  int local_3c;
  short *local_38;
  int local_34;
  int local_30;
  short *local_2c;
  undefined4 *local_28;
  uint local_24;
  short *local_20;
  int local_1c;
  short *local_18;
  void *local_14;
  short *local_10;
  int local_c;
  int local_8;

  local_14 = this;
  pAVar8 = (AnonShape_00497920_894F87D6 *)thunk_FUN_00423e70(this,param_1);
  if (pAVar8 == (AnonShape_00497920_894F87D6 *)0x0) {
    return -4;
  }
  local_48 = pAVar8;
  FreeAndNull((void **)&pAVar8[1].field_0x3b);
  *(undefined4 *)&pAVar8[1].field_0x3f = 0;
  *(undefined4 *)&pAVar8[1].field_0x43 = 0;
  pAVar8[1].field_0047 = 0;
  pAVar8[1].field_0049 = 0;
  sVar1 = pAVar8->field_0047;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  local_28 = (undefined4 *)CONCAT22(extraout_var,sVar1);
  if (sVar1 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeX <= sVar1) {
    return -4;
  }
  sVar2 = pAVar8->field_0049;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  local_10 = (short *)CONCAT22(extraout_var,sVar2);
  if (sVar2 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeY <= sVar2) {
    return -4;
  }
  sVar3 = pAVar8->field_004B;
  if (sVar3 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeZ <= sVar3) {
    return -4;
  }
  iVar9 = *(int *)&pAVar8[1].field_0x57;
  if (iVar9 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeX <= iVar9) {
    return -4;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar14._0_2_ = pAVar8[1].field_005B;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar14._2_2_ = pAVar8[1].field_005D;
  if (iVar14 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeY <= iVar14) {
    return -4;
  }
  iVar15 = *(int *)&pAVar8[1].field_005F;
  if (iVar15 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeZ <= iVar15) {
    return -4;
  }
  local_3c = FUN_006aadd0((int)sVar1,(int)sVar2,(int)sVar3,iVar9,iVar14,iVar15);
  if (local_3c <= *(int *)&pAVar8[1].field_0x53) {
    return 0;
  }
  local_2c = (short *)0x0;
  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  iVar9 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
  pAVar8 = local_48;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_90.previous;
    FUN_006a5e90(local_2c);
    RaiseInternalException(iVar9,0,"E:\\__titans\\wlad\\Grpway3d.cpp",0x113);
    return iVar9;
  }
  local_40 = (short *)0x3;
  if (local_3c != 1) goto LAB_0040b56a;
  local_8 = *(int *)&local_48[1].field_005F;
  local_c = *(int *)&local_48[1].field_005B;
  iVar14 = local_8 * g_pathingGrid.planeStride;
  iVar9 = local_c * g_pathingGrid.sizeX;
  if (g_pathingGrid.cells[*(int *)&local_48[1].field_0x57 + iVar9 + iVar14] < 0) {
    puVar10 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x90);
    *(undefined4 **)&pAVar8[1].field_0x3b = puVar10;
    for (iVar9 = 0x24; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = 0xffffffff;
      puVar10 = puVar10 + 1;
    }
    **(short **)&pAVar8[1].field_0x3b = pAVar8->field_0047;
    *(short *)(*(int *)&pAVar8[1].field_0x3b + 2) = pAVar8->field_0049;
    *(short *)(*(int *)&pAVar8[1].field_0x3b + 4) = pAVar8->field_004B;
    *(undefined2 *)(*(int *)&pAVar8[1].field_0x3b + 6) = 0;
    *(short *)(*(int *)&pAVar8[1].field_0x3b + 0x48) = pAVar8->field_0047;
    *(short *)(*(int *)&pAVar8[1].field_0x3b + 0x4a) = pAVar8->field_0049;
    *(short *)(*(int *)&pAVar8[1].field_0x3b + 0x4c) = pAVar8->field_004B;
    *(undefined2 *)(*(int *)&pAVar8[1].field_0x3b + 0x4e) = 0;
  }
  else {
    iVar15 = (int)local_48->field_0047;
    psVar12 = (short *)0x0;
    local_10 = (short *)0x0;
    if (iVar15 == *(int *)&local_48[1].field_0x57) {
      if (local_48->field_0049 == local_c) {
        psVar12 = (short *)0x1;
      }
      else if (local_48->field_004B == local_8) {
        psVar12 = (short *)0x1;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      else if (((((g_pathingGrid.cells
                   [(int)local_48->field_0049 * (int)g_pathingGrid.sizeX + iVar15 + iVar14] &
                  0xc000U) != 0xc000) &&
                (iVar9 = thunk_FUN_00497920(local_48,iVar15,(int)local_48->field_0049,local_8),
                iVar9 != 0)) &&
               ((g_pathingGrid.cells
                 [(int)g_pathingGrid.sizeX * *(int *)&pAVar8[1].field_005B +
                  (int)pAVar8->field_0047 + (int)g_pathingGrid.planeStride * (int)pAVar8->field_004B
                 ] & 0xc000U) != 0xc000)) &&
              (uVar5._0_2_ = pAVar8[1].field_005B, uVar5._2_2_ = pAVar8[1].field_005D,
              iVar9 = thunk_FUN_00497920(pAVar8,(int)pAVar8->field_0047,uVar5,
                                         (int)pAVar8->field_004B), iVar9 != 0)) {
        psVar12 = (short *)0x1;
      }
    }
    else {
      iVar16 = (int)local_48->field_0049;
      if (iVar16 == local_c) {
        if (local_48->field_004B == local_8) {
          psVar12 = (short *)0x1;
          goto LAB_0040b481;
        }
        uVar4 = g_pathingGrid.cells[iVar16 * g_pathingGrid.sizeX + iVar15 + iVar14];
        iVar14 = local_8;
joined_r0x0040b258:
        if (((uVar4 & 0xc000) != 0xc000) &&
           (iVar9 = thunk_FUN_00497920(local_48,iVar15,iVar16,iVar14), iVar9 != 0)) {
          if (((g_pathingGrid.cells
                [(int)g_pathingGrid.sizeX * (int)pAVar8->field_0049 +
                 *(int *)&pAVar8[1].field_0x57 +
                 (int)g_pathingGrid.planeStride * (int)pAVar8->field_004B] & 0xc000U) != 0xc000) &&
             (iVar9 = thunk_FUN_00497920(pAVar8,*(undefined4 *)&pAVar8[1].field_0x57,
                                         (int)pAVar8->field_0049,(int)pAVar8->field_004B),
             iVar9 != 0)) {
            psVar12 = (short *)0x1;
            goto LAB_0040b481;
          }
        }
      }
      else {
        iVar14 = (int)local_48->field_004B;
        if (iVar14 == local_8) {
          uVar4 = g_pathingGrid.cells[iVar14 * g_pathingGrid.planeStride + iVar15 + iVar9];
          iVar16 = local_c;
          goto joined_r0x0040b258;
        }
        if (((((((g_pathingGrid.cells[iVar14 * g_pathingGrid.planeStride + iVar15 + iVar9] & 0xc000U
                 ) != 0xc000) &&
               (iVar9 = thunk_FUN_00497920(local_48,iVar15,local_c,iVar14), iVar9 != 0)) &&
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              ((g_pathingGrid.cells
                [(int)g_pathingGrid.sizeX * (int)pAVar8->field_0049 +
                 *(int *)&pAVar8[1].field_0x57 +
                 (int)g_pathingGrid.planeStride * (int)pAVar8->field_004B] & 0xc000U) != 0xc000)) &&
             (((iVar9 = thunk_FUN_00497920(pAVar8,*(undefined4 *)&pAVar8[1].field_0x57,
                                           (int)pAVar8->field_0049,(int)pAVar8->field_004B),
               iVar9 != 0 &&
               ((g_pathingGrid.cells
                 [(int)g_pathingGrid.sizeX * *(int *)&pAVar8[1].field_005B +
                  *(int *)&pAVar8[1].field_0x57 +
                  (int)g_pathingGrid.planeStride * (int)pAVar8->field_004B] & 0xc000U) != 0xc000))
              && ((uVar6._0_2_ = pAVar8[1].field_005B, uVar6._2_2_ = pAVar8[1].field_005D,
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  iVar9 = thunk_FUN_00497920(pAVar8,*(undefined4 *)&pAVar8[1].field_0x57,uVar6,
                                             (int)pAVar8->field_004B), iVar9 != 0 &&
                  (((g_pathingGrid.cells
                     [(int)g_pathingGrid.planeStride * *(int *)&pAVar8[1].field_005F +
                      (int)pAVar8->field_0047 +
                      (int)g_pathingGrid.sizeX * *(int *)&pAVar8[1].field_005B] & 0xc000U) != 0xc000
                   && (uVar7._0_2_ = pAVar8[1].field_005B, uVar7._2_2_ = pAVar8[1].field_005D,
                      iVar9 = thunk_FUN_00497920(pAVar8,(int)pAVar8->field_0047,uVar7,
                                                 *(int *)&pAVar8[1].field_005F), iVar9 != 0))))))))
            && ((g_pathingGrid.cells
                 [(int)g_pathingGrid.planeStride * *(int *)&pAVar8[1].field_005F +
                  *(int *)&pAVar8[1].field_0x57 + (int)g_pathingGrid.sizeX * (int)pAVar8->field_0049
                 ] & 0xc000U) != 0xc000)) &&
           ((iVar9 = thunk_FUN_00497920(pAVar8,*(undefined4 *)&pAVar8[1].field_0x57,
                                        (int)pAVar8->field_0049,*(undefined4 *)&pAVar8[1].field_005F
                                       ), iVar9 != 0 &&
            ((g_pathingGrid.cells
              [(int)g_pathingGrid.planeStride * *(int *)&pAVar8[1].field_005F +
               (int)pAVar8->field_0047 + (int)g_pathingGrid.sizeX * (int)pAVar8->field_0049] &
             0xc000U) != 0xc000)))) {
          iVar9 = thunk_FUN_00497920(pAVar8,(int)pAVar8->field_0047,(int)pAVar8->field_0049,
                                     *(undefined4 *)&pAVar8[1].field_005F);
          psVar12 = (short *)0x1;
          if (iVar9 != 0) goto LAB_0040b481;
        }
      }
      psVar12 = local_10;
    }
LAB_0040b481:
    if (psVar12 == (short *)0x0) goto LAB_0040b56a;
    puVar10 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x90);
    *(undefined4 **)&pAVar8[1].field_0x3b = puVar10;
    for (iVar9 = 0x24; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = 0xffffffff;
      puVar10 = puVar10 + 1;
    }
    if (*(int *)(PTR_DAT_007ed56c +
                (((((*(int *)&pAVar8[1].field_005F - (int)pAVar8->field_004B) * 3 -
                   (int)pAVar8->field_0049) + *(int *)&pAVar8[1].field_005B) * 3 -
                 (int)pAVar8->field_0047) + *(int *)&pAVar8[1].field_0x57) * 4) < 0x1a) {
      local_3c = (&DAT_007ed640)
                 [*(int *)(PTR_DAT_007ed56c +
                          (((((*(int *)&pAVar8[1].field_005F - (int)pAVar8->field_004B) * 3 -
                             (int)pAVar8->field_0049) + *(int *)&pAVar8[1].field_005B) * 3 -
                           (int)pAVar8->field_0047) + *(int *)&pAVar8[1].field_0x57) * 4)];
    }
    **(short **)&pAVar8[1].field_0x3b = pAVar8->field_0047;
    *(short *)(*(int *)&pAVar8[1].field_0x3b + 2) = pAVar8->field_0049;
    *(short *)(*(int *)&pAVar8[1].field_0x3b + 4) = pAVar8->field_004B;
    *(undefined2 *)(*(int *)&pAVar8[1].field_0x3b + 6) = (undefined2)local_3c;
    *(undefined2 *)(*(int *)&pAVar8[1].field_0x3b + 0x48) = *(undefined2 *)&pAVar8[1].field_0x57;
    *(short *)(*(int *)&pAVar8[1].field_0x3b + 0x4a) = pAVar8[1].field_005B;
    *(short *)(*(int *)&pAVar8[1].field_0x3b + 0x4c) = pAVar8[1].field_005F;
    *(undefined2 *)(*(int *)&pAVar8[1].field_0x3b + 0x4e) = 0;
  }
  *(undefined4 *)&pAVar8[1].field_0x3f = 2;
LAB_0040b56a:
  if (*(int *)&pAVar8[1].field_0x3b == 0) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar9._0_2_ = pAVar8[1].field_005B;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar9._2_2_ = pAVar8[1].field_005D;
    iVar9 = FUN_006a62e0((int)pAVar8->field_0047,(int)pAVar8->field_0049,(int)pAVar8->field_004B,
                         *(int *)&pAVar8[1].field_0x57,iVar9,*(int *)&pAVar8[1].field_005F);
    *(int *)&pAVar8[1].field_004B = iVar9;
    local_28 = Library::DKW::LIB::FUN_006aac10(0x2ae);
    sVar1 = pAVar8->field_0047;
    local_10 = (short *)((int)local_28 + 0x156);
    iVar9 = 2;
    if (sVar1 < 2) {
      iVar9 = (int)sVar1;
    }
    iVar9 = -iVar9;
    if (sVar1 + 2 < (int)g_pathingGrid.sizeX) {
      local_30 = 2;
    }
    else {
      local_30 = ((int)g_pathingGrid.sizeX - (int)sVar1) + -1;
    }
    sVar1 = pAVar8->field_0049;
    iVar14 = 2;
    if (sVar1 < 2) {
      iVar14 = (int)sVar1;
    }
    uVar11 = -iVar14;
    if (sVar1 + 2 < (int)g_pathingGrid.sizeY) {
      local_c = 2;
    }
    else {
      local_c = ((int)g_pathingGrid.sizeY - (int)sVar1) + -1;
    }
    sVar1 = pAVar8->field_004B;
    iVar14 = 2;
    if (sVar1 < 2) {
      iVar14 = (int)sVar1;
    }
    local_4c = -iVar14;
    if (sVar1 + 2 < (int)g_pathingGrid.sizeZ) {
      iVar15 = 2;
    }
    else {
      iVar15 = ((int)g_pathingGrid.sizeZ - (int)sVar1) + -1;
    }
    local_18 = (short *)0x0;
    local_44 = uVar11;
    local_34 = iVar15;
    local_1c = local_4c;
    local_8 = iVar9;
    if (-iVar15 == iVar14 || local_4c < iVar15) {
      local_20 = local_10 + (iVar14 * -7 + uVar11) * 7;
      do {
        local_38 = local_20;
        local_24 = uVar11;
        if ((int)uVar11 <= local_c) {
          do {
            if (iVar9 <= local_30) {
              psVar12 = local_38 + local_8;
              do {
                iVar14 = thunk_FUN_00497920(pAVar8,pAVar8->field_0047 + iVar9,
                                            (int)pAVar8->field_0049 + local_24,
                                            pAVar8->field_004B + local_1c);
                if (iVar14 == 0) {
                  *psVar12 = -3;
                  local_18 = (short *)0x1;
                }
                iVar9 = iVar9 + 1;
                psVar12 = psVar12 + 1;
              } while (iVar9 <= local_30);
            }
            local_38 = local_38 + 7;
            local_24 = local_24 + 1;
            iVar15 = local_34;
            uVar11 = local_44;
            iVar9 = local_8;
          } while ((int)local_24 <= local_c);
        }
        local_1c = local_1c + 1;
        local_20 = local_20 + 0x31;
      } while (local_1c <= iVar15);
    }
    psVar12 = local_40;
    if (local_18 == (short *)0x0) {
      FreeAndNull(&local_28);
      psVar12 = (short *)0x0;
    }
    local_24 = 0;
    if (param_2 != '\0') {
      local_24 = 4;
    }
    local_24 = local_24 | 1;
    psVar12 = Library::DKW::WAY::FUN_006a9190
                        ((int)g_pathingGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                         (int)g_pathingGrid.sizeZ,(short *)(int)pAVar8->field_0047,
                         (short *)(int)pAVar8->field_0049,(short *)(int)pAVar8->field_004B,
                         *(short **)&pAVar8[1].field_0x57,*(short **)&pAVar8[1].field_005B,
                         *(short **)&pAVar8[1].field_005F,*(int *)&pAVar8[1].field_0x53,
                         (int *)&pAVar8[1].field_0x3f,local_28,psVar12,local_24);
    *(short **)&pAVar8[1].field_0x3b = psVar12;
    if (psVar12 == (short *)0x0) {
      psVar17 = (short *)((int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX);
      local_40 = psVar17;
      local_2c = (short *)Library::DKW::LIB::FUN_006aac70
                                    ((int)g_pathingGrid.sizeZ * (int)psVar17 * 2);
      iVar9 = (int)g_pathingGrid.sizeZ;
      psVar12 = g_pathingGrid.cells;
      psVar13 = local_2c;
      for (uVar11 = (iVar9 * (int)psVar17 & 0x7fffffffU) >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)psVar13 = *(undefined4 *)psVar12;
        psVar12 = psVar12 + 2;
        psVar13 = psVar13 + 2;
      }
      for (uVar11 = iVar9 * (int)psVar17 * 2 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(char *)psVar13 = (char)*psVar12;
        psVar12 = (short *)((int)psVar12 + 1);
        psVar13 = (short *)((int)psVar13 + 1);
      }
      if ((local_18 != (short *)0x0) && (local_1c = local_4c, local_4c <= local_34)) {
        local_18 = local_10 + (local_4c * 7 + local_44) * 7;
        do {
          local_10 = local_2c +
                     ((int)pAVar8->field_0049 + local_44) * (int)g_pathingGrid.sizeX +
                     (pAVar8->field_004B + local_1c) * (int)local_40 + (int)pAVar8->field_0047;
          if ((int)local_44 <= local_c) {
            iVar9 = (local_c - local_44) + 1;
            psVar12 = local_18;
            do {
              if (local_8 <= local_30) {
                psVar13 = psVar12 + local_8;
                iVar14 = (local_30 - local_8) + 1;
                do {
                  if (*psVar13 < 0) {
                    *(short *)(((int)local_10 - (int)psVar12) + (int)psVar13) = *psVar13;
                  }
                  psVar13 = psVar13 + 1;
                  iVar14 = iVar14 + -1;
                } while (iVar14 != 0);
              }
              psVar12 = psVar12 + 7;
              iVar9 = iVar9 + -1;
              local_10 = local_10 + g_pathingGrid.sizeX;
            } while (iVar9 != 0);
            local_20 = (short *)0x0;
          }
          local_18 = local_18 + 0x31;
          local_1c = local_1c + 1;
        } while (local_1c <= local_34);
      }
      psVar12 = Library::DKW::WAY::FUN_006a8270
                          ((int)local_2c,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                           (undefined4 *)(int)g_pathingGrid.sizeZ,(short *)(int)pAVar8->field_0047,
                           (short *)(int)pAVar8->field_0049,(short *)(int)pAVar8->field_004B,
                           *(short **)&pAVar8[1].field_0x57,*(short **)&pAVar8[1].field_005B,
                           *(short **)&pAVar8[1].field_005F,*(int *)&pAVar8[1].field_0x53,
                           (int *)&pAVar8[1].field_0x3f,local_24);
      *(short **)&pAVar8[1].field_0x3b = psVar12;
    }
    FreeAndNull(&local_28);
  }
  g_currentExceptionFrame = local_90.previous;
  FUN_006a5e90(local_2c);
  if (*(int *)&pAVar8[1].field_0x3b == 0) {
    return -4;
  }
  return 0;
}

