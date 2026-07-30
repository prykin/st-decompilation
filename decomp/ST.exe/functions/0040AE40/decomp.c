
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
  int iVar5;
  AnonShape_00497920_894F87D6 *pAVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  short *psVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short *psVar15;
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
  pAVar6 = (AnonShape_00497920_894F87D6 *)thunk_FUN_00423e70(this,param_1);
  if (pAVar6 == (AnonShape_00497920_894F87D6 *)0x0) {
    return -4;
  }
  local_48 = pAVar6;
  FreeAndNull((void **)&pAVar6[1].field_0x3b);
  *(undefined4 *)&pAVar6[1].field_0x3f = 0;
  *(undefined4 *)&pAVar6[1].field_0x43 = 0;
  pAVar6[1].field_0047 = 0;
  pAVar6[1].field_0049 = 0;
  sVar1 = pAVar6->field_0047;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  local_28 = (undefined4 *)CONCAT22(extraout_var,sVar1);
  if (sVar1 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeX <= sVar1) {
    return -4;
  }
  sVar2 = pAVar6->field_0049;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  local_10 = (short *)CONCAT22(extraout_var,sVar2);
  if (sVar2 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeY <= sVar2) {
    return -4;
  }
  sVar3 = pAVar6->field_004B;
  if (sVar3 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeZ <= sVar3) {
    return -4;
  }
  iVar7 = *(int *)&pAVar6[1].field_0x57;
  if (iVar7 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeX <= iVar7) {
    return -4;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar12._0_2_ = pAVar6[1].field_005B;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar12._2_2_ = pAVar6[1].field_005D;
  if (iVar12 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeY <= iVar12) {
    return -4;
  }
  iVar13 = *(int *)&pAVar6[1].field_005F;
  if (iVar13 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeZ <= iVar13) {
    return -4;
  }
  local_3c = FUN_006aadd0((int)sVar1,(int)sVar2,(int)sVar3,iVar7,iVar12,iVar13);
  if (local_3c <= *(int *)&pAVar6[1].field_0x53) {
    return 0;
  }
  local_2c = (short *)0x0;
  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  iVar7 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
  pAVar6 = local_48;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_90.previous;
    FUN_006a5e90(local_2c);
    RaiseInternalException(iVar7,0,"E:\\__titans\\wlad\\Grpway3d.cpp",0x113);
    return iVar7;
  }
  local_40 = (short *)0x3;
  if (local_3c != 1) goto LAB_0040b56a;
  local_8 = *(int *)&local_48[1].field_005F;
  local_c = *(int *)&local_48[1].field_005B;
  iVar12 = local_8 * g_pathingGrid.planeStride;
  iVar7 = local_c * g_pathingGrid.sizeX;
  if (g_pathingGrid.cells[*(int *)&local_48[1].field_0x57 + iVar7 + iVar12] < 0) {
    puVar8 = Library::DKW::LIB::MemAlloc(0x90);
    *(undefined4 **)&pAVar6[1].field_0x3b = puVar8;
    for (iVar7 = 0x24; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    **(short **)&pAVar6[1].field_0x3b = pAVar6->field_0047;
    *(short *)(*(int *)&pAVar6[1].field_0x3b + 2) = pAVar6->field_0049;
    *(short *)(*(int *)&pAVar6[1].field_0x3b + 4) = pAVar6->field_004B;
    *(undefined2 *)(*(int *)&pAVar6[1].field_0x3b + 6) = 0;
    *(short *)(*(int *)&pAVar6[1].field_0x3b + 0x48) = pAVar6->field_0047;
    *(short *)(*(int *)&pAVar6[1].field_0x3b + 0x4a) = pAVar6->field_0049;
    *(short *)(*(int *)&pAVar6[1].field_0x3b + 0x4c) = pAVar6->field_004B;
    *(undefined2 *)(*(int *)&pAVar6[1].field_0x3b + 0x4e) = 0;
  }
  else {
    iVar13 = (int)local_48->field_0047;
    psVar10 = (short *)0x0;
    local_10 = (short *)0x0;
    if (iVar13 == *(int *)&local_48[1].field_0x57) {
      if (local_48->field_0049 == local_c) {
        psVar10 = (short *)0x1;
      }
      else if (local_48->field_004B == local_8) {
        psVar10 = (short *)0x1;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      else if (((((g_pathingGrid.cells
                   [(int)local_48->field_0049 * (int)g_pathingGrid.sizeX + iVar13 + iVar12] &
                  0xc000U) != 0xc000) &&
                (iVar7 = thunk_FUN_00497920(local_48,iVar13,(int)local_48->field_0049,local_8),
                iVar7 != 0)) &&
               ((g_pathingGrid.cells
                 [(int)g_pathingGrid.sizeX * *(int *)&pAVar6[1].field_005B +
                  (int)pAVar6->field_0047 + (int)g_pathingGrid.planeStride * (int)pAVar6->field_004B
                 ] & 0xc000U) != 0xc000)) &&
              (iVar14._0_2_ = pAVar6[1].field_005B, iVar14._2_2_ = pAVar6[1].field_005D,
              iVar7 = thunk_FUN_00497920(pAVar6,(int)pAVar6->field_0047,iVar14,
                                         (int)pAVar6->field_004B), iVar7 != 0)) {
        psVar10 = (short *)0x1;
      }
    }
    else {
      iVar14 = (int)local_48->field_0049;
      if (iVar14 == local_c) {
        if (local_48->field_004B == local_8) {
          psVar10 = (short *)0x1;
          goto LAB_0040b481;
        }
        uVar4 = g_pathingGrid.cells[iVar14 * g_pathingGrid.sizeX + iVar13 + iVar12];
        iVar12 = local_8;
joined_r0x0040b258:
        if (((uVar4 & 0xc000) != 0xc000) &&
           (iVar7 = thunk_FUN_00497920(local_48,iVar13,iVar14,iVar12), iVar7 != 0)) {
          if (((g_pathingGrid.cells
                [(int)g_pathingGrid.sizeX * (int)pAVar6->field_0049 +
                 *(int *)&pAVar6[1].field_0x57 +
                 (int)g_pathingGrid.planeStride * (int)pAVar6->field_004B] & 0xc000U) != 0xc000) &&
             (iVar7 = thunk_FUN_00497920(pAVar6,*(int *)&pAVar6[1].field_0x57,
                                         (int)pAVar6->field_0049,(int)pAVar6->field_004B),
             iVar7 != 0)) {
            psVar10 = (short *)0x1;
            goto LAB_0040b481;
          }
        }
      }
      else {
        iVar12 = (int)local_48->field_004B;
        if (iVar12 == local_8) {
          uVar4 = g_pathingGrid.cells[iVar12 * g_pathingGrid.planeStride + iVar13 + iVar7];
          iVar14 = local_c;
          goto joined_r0x0040b258;
        }
        if (((((((g_pathingGrid.cells[iVar12 * g_pathingGrid.planeStride + iVar13 + iVar7] & 0xc000U
                 ) != 0xc000) &&
               (iVar7 = thunk_FUN_00497920(local_48,iVar13,local_c,iVar12), iVar7 != 0)) &&
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              ((g_pathingGrid.cells
                [(int)g_pathingGrid.sizeX * (int)pAVar6->field_0049 +
                 *(int *)&pAVar6[1].field_0x57 +
                 (int)g_pathingGrid.planeStride * (int)pAVar6->field_004B] & 0xc000U) != 0xc000)) &&
             (((iVar7 = thunk_FUN_00497920(pAVar6,*(int *)&pAVar6[1].field_0x57,
                                           (int)pAVar6->field_0049,(int)pAVar6->field_004B),
               iVar7 != 0 &&
               ((g_pathingGrid.cells
                 [(int)g_pathingGrid.sizeX * *(int *)&pAVar6[1].field_005B +
                  *(int *)&pAVar6[1].field_0x57 +
                  (int)g_pathingGrid.planeStride * (int)pAVar6->field_004B] & 0xc000U) != 0xc000))
              && ((iVar7._0_2_ = pAVar6[1].field_005B, iVar7._2_2_ = pAVar6[1].field_005D,
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  iVar7 = thunk_FUN_00497920(pAVar6,*(int *)&pAVar6[1].field_0x57,iVar7,
                                             (int)pAVar6->field_004B), iVar7 != 0 &&
                  (((g_pathingGrid.cells
                     [(int)g_pathingGrid.planeStride * *(int *)&pAVar6[1].field_005F +
                      (int)pAVar6->field_0047 +
                      (int)g_pathingGrid.sizeX * *(int *)&pAVar6[1].field_005B] & 0xc000U) != 0xc000
                   && (iVar13._0_2_ = pAVar6[1].field_005B, iVar13._2_2_ = pAVar6[1].field_005D,
                      iVar7 = thunk_FUN_00497920(pAVar6,(int)pAVar6->field_0047,iVar13,
                                                 *(int *)&pAVar6[1].field_005F), iVar7 != 0))))))))
            && ((g_pathingGrid.cells
                 [(int)g_pathingGrid.planeStride * *(int *)&pAVar6[1].field_005F +
                  *(int *)&pAVar6[1].field_0x57 + (int)g_pathingGrid.sizeX * (int)pAVar6->field_0049
                 ] & 0xc000U) != 0xc000)) &&
           ((iVar7 = thunk_FUN_00497920(pAVar6,*(int *)&pAVar6[1].field_0x57,(int)pAVar6->field_0049
                                        ,*(undefined4 *)&pAVar6[1].field_005F), iVar7 != 0 &&
            ((g_pathingGrid.cells
              [(int)g_pathingGrid.planeStride * *(int *)&pAVar6[1].field_005F +
               (int)pAVar6->field_0047 + (int)g_pathingGrid.sizeX * (int)pAVar6->field_0049] &
             0xc000U) != 0xc000)))) {
          iVar7 = thunk_FUN_00497920(pAVar6,(int)pAVar6->field_0047,(int)pAVar6->field_0049,
                                     *(undefined4 *)&pAVar6[1].field_005F);
          psVar10 = (short *)0x1;
          if (iVar7 != 0) goto LAB_0040b481;
        }
      }
      psVar10 = local_10;
    }
LAB_0040b481:
    if (psVar10 == (short *)0x0) goto LAB_0040b56a;
    puVar8 = Library::DKW::LIB::MemAlloc(0x90);
    *(undefined4 **)&pAVar6[1].field_0x3b = puVar8;
    for (iVar7 = 0x24; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    if (*(int *)(PTR_DAT_007ed56c +
                (((((*(int *)&pAVar6[1].field_005F - (int)pAVar6->field_004B) * 3 -
                   (int)pAVar6->field_0049) + *(int *)&pAVar6[1].field_005B) * 3 -
                 (int)pAVar6->field_0047) + *(int *)&pAVar6[1].field_0x57) * 4) < 0x1a) {
      local_3c = (&DAT_007ed640)
                 [*(int *)(PTR_DAT_007ed56c +
                          (((((*(int *)&pAVar6[1].field_005F - (int)pAVar6->field_004B) * 3 -
                             (int)pAVar6->field_0049) + *(int *)&pAVar6[1].field_005B) * 3 -
                           (int)pAVar6->field_0047) + *(int *)&pAVar6[1].field_0x57) * 4)];
    }
    **(short **)&pAVar6[1].field_0x3b = pAVar6->field_0047;
    *(short *)(*(int *)&pAVar6[1].field_0x3b + 2) = pAVar6->field_0049;
    *(short *)(*(int *)&pAVar6[1].field_0x3b + 4) = pAVar6->field_004B;
    *(undefined2 *)(*(int *)&pAVar6[1].field_0x3b + 6) = (undefined2)local_3c;
    *(undefined2 *)(*(int *)&pAVar6[1].field_0x3b + 0x48) = *(undefined2 *)&pAVar6[1].field_0x57;
    *(short *)(*(int *)&pAVar6[1].field_0x3b + 0x4a) = pAVar6[1].field_005B;
    *(short *)(*(int *)&pAVar6[1].field_0x3b + 0x4c) = pAVar6[1].field_005F;
    *(undefined2 *)(*(int *)&pAVar6[1].field_0x3b + 0x4e) = 0;
  }
  *(undefined4 *)&pAVar6[1].field_0x3f = 2;
LAB_0040b56a:
  if (*(int *)&pAVar6[1].field_0x3b == 0) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar5._0_2_ = pAVar6[1].field_005B;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar5._2_2_ = pAVar6[1].field_005D;
    iVar7 = FUN_006a62e0((int)pAVar6->field_0047,(int)pAVar6->field_0049,(int)pAVar6->field_004B,
                         *(int *)&pAVar6[1].field_0x57,iVar5,*(int *)&pAVar6[1].field_005F);
    *(int *)&pAVar6[1].field_004B = iVar7;
    local_28 = Library::DKW::LIB::FUN_006aac10(0x2ae);
    sVar1 = pAVar6->field_0047;
    local_10 = (short *)((int)local_28 + 0x156);
    iVar7 = 2;
    if (sVar1 < 2) {
      iVar7 = (int)sVar1;
    }
    iVar7 = -iVar7;
    if (sVar1 + 2 < (int)g_pathingGrid.sizeX) {
      local_30 = 2;
    }
    else {
      local_30 = ((int)g_pathingGrid.sizeX - (int)sVar1) + -1;
    }
    sVar1 = pAVar6->field_0049;
    iVar12 = 2;
    if (sVar1 < 2) {
      iVar12 = (int)sVar1;
    }
    uVar9 = -iVar12;
    if (sVar1 + 2 < (int)g_pathingGrid.sizeY) {
      local_c = 2;
    }
    else {
      local_c = ((int)g_pathingGrid.sizeY - (int)sVar1) + -1;
    }
    sVar1 = pAVar6->field_004B;
    iVar12 = 2;
    if (sVar1 < 2) {
      iVar12 = (int)sVar1;
    }
    local_4c = -iVar12;
    if (sVar1 + 2 < (int)g_pathingGrid.sizeZ) {
      iVar13 = 2;
    }
    else {
      iVar13 = ((int)g_pathingGrid.sizeZ - (int)sVar1) + -1;
    }
    local_18 = (short *)0x0;
    local_44 = uVar9;
    local_34 = iVar13;
    local_1c = local_4c;
    local_8 = iVar7;
    if (-iVar13 == iVar12 || local_4c < iVar13) {
      local_20 = local_10 + (iVar12 * -7 + uVar9) * 7;
      do {
        local_38 = local_20;
        local_24 = uVar9;
        if ((int)uVar9 <= local_c) {
          do {
            if (iVar7 <= local_30) {
              psVar10 = local_38 + local_8;
              do {
                iVar12 = thunk_FUN_00497920(pAVar6,pAVar6->field_0047 + iVar7,
                                            (int)pAVar6->field_0049 + local_24,
                                            pAVar6->field_004B + local_1c);
                if (iVar12 == 0) {
                  *psVar10 = -3;
                  local_18 = (short *)0x1;
                }
                iVar7 = iVar7 + 1;
                psVar10 = psVar10 + 1;
              } while (iVar7 <= local_30);
            }
            local_38 = local_38 + 7;
            local_24 = local_24 + 1;
            iVar13 = local_34;
            uVar9 = local_44;
            iVar7 = local_8;
          } while ((int)local_24 <= local_c);
        }
        local_1c = local_1c + 1;
        local_20 = local_20 + 0x31;
      } while (local_1c <= iVar13);
    }
    psVar10 = local_40;
    if (local_18 == (short *)0x0) {
      FreeAndNull(&local_28);
      psVar10 = (short *)0x0;
    }
    local_24 = 0;
    if (param_2 != '\0') {
      local_24 = 4;
    }
    local_24 = local_24 | 1;
    psVar10 = Library::DKW::WAY::FUN_006a9190
                        ((int)g_pathingGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                         (int)g_pathingGrid.sizeZ,(short *)(int)pAVar6->field_0047,
                         (short *)(int)pAVar6->field_0049,(short *)(int)pAVar6->field_004B,
                         *(short **)&pAVar6[1].field_0x57,*(short **)&pAVar6[1].field_005B,
                         *(short **)&pAVar6[1].field_005F,*(int *)&pAVar6[1].field_0x53,
                         (int *)&pAVar6[1].field_0x3f,local_28,psVar10,local_24);
    *(short **)&pAVar6[1].field_0x3b = psVar10;
    if (psVar10 == (short *)0x0) {
      psVar15 = (short *)((int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX);
      local_40 = psVar15;
      local_2c = Library::DKW::LIB::MemAlloc((int)g_pathingGrid.sizeZ * (int)psVar15 * 2);
      iVar7 = (int)g_pathingGrid.sizeZ;
      psVar10 = g_pathingGrid.cells;
      psVar11 = local_2c;
      for (uVar9 = (iVar7 * (int)psVar15 & 0x7fffffffU) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)psVar11 = *(undefined4 *)psVar10;
        psVar10 = psVar10 + 2;
        psVar11 = psVar11 + 2;
      }
      for (uVar9 = iVar7 * (int)psVar15 * 2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)psVar11 = (char)*psVar10;
        psVar10 = (short *)((int)psVar10 + 1);
        psVar11 = (short *)((int)psVar11 + 1);
      }
      if ((local_18 != (short *)0x0) && (local_1c = local_4c, local_4c <= local_34)) {
        local_18 = local_10 + (local_4c * 7 + local_44) * 7;
        do {
          local_10 = local_2c +
                     ((int)pAVar6->field_0049 + local_44) * (int)g_pathingGrid.sizeX +
                     (pAVar6->field_004B + local_1c) * (int)local_40 + (int)pAVar6->field_0047;
          if ((int)local_44 <= local_c) {
            iVar7 = (local_c - local_44) + 1;
            psVar10 = local_18;
            do {
              if (local_8 <= local_30) {
                psVar11 = psVar10 + local_8;
                iVar12 = (local_30 - local_8) + 1;
                do {
                  if (*psVar11 < 0) {
                    *(short *)(((int)local_10 - (int)psVar10) + (int)psVar11) = *psVar11;
                  }
                  psVar11 = psVar11 + 1;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
              }
              psVar10 = psVar10 + 7;
              iVar7 = iVar7 + -1;
              local_10 = local_10 + g_pathingGrid.sizeX;
            } while (iVar7 != 0);
            local_20 = (short *)0x0;
          }
          local_18 = local_18 + 0x31;
          local_1c = local_1c + 1;
        } while (local_1c <= local_34);
      }
      psVar10 = Library::DKW::WAY::FUN_006a8270
                          ((int)local_2c,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                           (undefined4 *)(int)g_pathingGrid.sizeZ,(short *)(int)pAVar6->field_0047,
                           (short *)(int)pAVar6->field_0049,(short *)(int)pAVar6->field_004B,
                           *(short **)&pAVar6[1].field_0x57,*(short **)&pAVar6[1].field_005B,
                           *(short **)&pAVar6[1].field_005F,*(int *)&pAVar6[1].field_0x53,
                           (int *)&pAVar6[1].field_0x3f,local_24);
      *(short **)&pAVar6[1].field_0x3b = psVar10;
    }
    FreeAndNull(&local_28);
  }
  g_currentExceptionFrame = local_90.previous;
  FUN_006a5e90(local_2c);
  if (*(int *)&pAVar6[1].field_0x3b == 0) {
    return -4;
  }
  return 0;
}

