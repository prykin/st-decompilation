
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 275 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STTypeFamilyApplier] CONTEXTUAL_GENERATED_RECORD.
   Evidence: one script-owned pointer shape is used only by functions with one unique class-owner
   context; promote its stable machine layout to a generated owner-qualified record name */

int __thiscall FUN_0040ae40(void *this,uint param_1,char param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  RecoveredRecord_STBoatC_0040AE40 *pRVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar6;
  AnonNested_AnonShape_00497920_894F87D6_009F_65AF98AA *pAVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  short *psVar14;
  InternalExceptionFrame local_90;
  int local_4c;
  RecoveredRecord_STBoatC_0040AE40 *local_48;
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
  pRVar5 = (RecoveredRecord_STBoatC_0040AE40 *)thunk_FUN_00423e70(this,param_1);
  if (pRVar5 == nullptr) {
    return -4;
  }
  local_48 = pRVar5;
  FreeAndNull(&pRVar5->field_009F);
  pRVar5->field_00A3 = 0;
  pRVar5->field_00A7 = 0;
  pRVar5->field_00AB = 0;
  pRVar5->field_00AD = 0;
  sVar1 = pRVar5->field_0047;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  local_28 = (undefined4 *)CONCAT22(extraout_var,sVar1);
  if (sVar1 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeX <= sVar1) {
    return -4;
  }
  sVar2 = pRVar5->field_0049;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  local_10 = (short *)CONCAT22(extraout_var,sVar2);
  if (sVar2 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeY <= sVar2) {
    return -4;
  }
  sVar3 = pRVar5->field_004B;
  if (sVar3 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeZ <= sVar3) {
    return -4;
  }
  iVar6 = pRVar5->field_00BB;
  if (iVar6 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeX <= iVar6) {
    return -4;
  }
  iVar10 = pRVar5->field_00BF;
  if (iVar10 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeY <= iVar10) {
    return -4;
  }
  iVar11 = pRVar5->field_00C3;
  if (iVar11 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeZ <= iVar11) {
    return -4;
  }
  local_3c = FUN_006aadd0((int)sVar1,(int)sVar2,(int)sVar3,iVar6,iVar10,iVar11);
  if (local_3c <= pRVar5->field_00B7) {
    return 0;
  }
  local_2c = nullptr;
  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  iVar6 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
  pRVar5 = local_48;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_90.previous;
    FUN_006a5e90(local_2c);
    RaiseInternalException(iVar6,0,"E:\\__titans\\wlad\\Grpway3d.cpp",0x113);
    return iVar6;
  }
  local_40 = (short *)0x3;
  if (local_3c != 1) goto LAB_0040b56a;
  local_8 = local_48->field_00C3;
  local_c = local_48->field_00BF;
  iVar10 = local_8 * g_pathingGrid.planeStride;
  iVar6 = local_c * g_pathingGrid.sizeX;
  if (g_pathingGrid.cells[local_48->field_00BB + iVar6 + iVar10] < 0) {
    pAVar7 = Library::DKW::LIB::MemAlloc(0x90);
    pRVar5->field_009F = pAVar7;
    for (iVar6 = 0x24; iVar6 != 0; iVar6 = iVar6 + -1) {
      pAVar7->field_0000 = -1;
      pAVar7->field_0002 = -1;
      pAVar7 = (AnonNested_AnonShape_00497920_894F87D6_009F_65AF98AA *)&pAVar7->field_0004;
    }
    pRVar5->field_009F->field_0000 = pRVar5->field_0047;
    pRVar5->field_009F->field_0002 = pRVar5->field_0049;
    pRVar5->field_009F->field_0004 = pRVar5->field_004B;
    pRVar5->field_009F->field_0006 = 0;
    pRVar5->field_009F->field_0048 = pRVar5->field_0047;
    pRVar5->field_009F->field_004A = pRVar5->field_0049;
    pRVar5->field_009F->field_004C = pRVar5->field_004B;
    pRVar5->field_009F->field_004E = 0;
  }
  else {
    iVar11 = (int)local_48->field_0047;
    psVar14 = nullptr;
    local_10 = nullptr;
    if (iVar11 == local_48->field_00BB) {
      if (local_48->field_0049 == local_c) {
        psVar14 = (short *)0x1;
      }
      else if (local_48->field_004B == local_8) {
        psVar14 = (short *)0x1;
      }
      else if (((((g_pathingGrid.cells
                   [(int)local_48->field_0049 * (int)g_pathingGrid.sizeX + iVar11 + iVar10] &
                  0xc000U) != 0xc000) &&
                (iVar6 = thunk_FUN_00497920(local_48,iVar11,(int)local_48->field_0049,local_8),
                iVar6 != 0)) &&
               ((g_pathingGrid.cells
                 [(int)g_pathingGrid.sizeX * pRVar5->field_00BF +
                  (int)pRVar5->field_0047 + (int)g_pathingGrid.planeStride * (int)pRVar5->field_004B
                 ] & 0xc000U) != 0xc000)) &&
              (iVar6 = thunk_FUN_00497920(pRVar5,(int)pRVar5->field_0047,pRVar5->field_00BF,
                                          (int)pRVar5->field_004B), iVar6 != 0)) {
        psVar14 = (short *)0x1;
      }
    }
    else {
      iVar12 = (int)local_48->field_0049;
      if (iVar12 == local_c) {
        if (local_48->field_004B == local_8) {
          psVar14 = (short *)0x1;
          goto LAB_0040b481;
        }
        uVar4 = g_pathingGrid.cells[iVar12 * g_pathingGrid.sizeX + iVar11 + iVar10];
        iVar10 = local_8;
joined_r0x0040b258:
        if (((uVar4 & 0xc000) != 0xc000) &&
           (iVar6 = thunk_FUN_00497920(local_48,iVar11,iVar12,iVar10), iVar6 != 0)) {
          if (((g_pathingGrid.cells
                [(int)g_pathingGrid.sizeX * (int)pRVar5->field_0049 +
                 pRVar5->field_00BB + (int)g_pathingGrid.planeStride * (int)pRVar5->field_004B] &
               0xc000U) != 0xc000) &&
             (iVar6 = thunk_FUN_00497920(pRVar5,pRVar5->field_00BB,(int)pRVar5->field_0049,
                                         (int)pRVar5->field_004B), iVar6 != 0)) {
            psVar14 = (short *)0x1;
            goto LAB_0040b481;
          }
        }
      }
      else {
        iVar10 = (int)local_48->field_004B;
        if (iVar10 == local_8) {
          uVar4 = g_pathingGrid.cells[iVar10 * g_pathingGrid.planeStride + iVar11 + iVar6];
          iVar12 = local_c;
          goto joined_r0x0040b258;
        }
        if (((((((g_pathingGrid.cells[iVar10 * g_pathingGrid.planeStride + iVar11 + iVar6] & 0xc000U
                 ) != 0xc000) &&
               (iVar6 = thunk_FUN_00497920(local_48,iVar11,local_c,iVar10), iVar6 != 0)) &&
              ((g_pathingGrid.cells
                [(int)g_pathingGrid.sizeX * (int)pRVar5->field_0049 +
                 pRVar5->field_00BB + (int)g_pathingGrid.planeStride * (int)pRVar5->field_004B] &
               0xc000U) != 0xc000)) &&
             (((iVar6 = thunk_FUN_00497920(pRVar5,pRVar5->field_00BB,(int)pRVar5->field_0049,
                                           (int)pRVar5->field_004B), iVar6 != 0 &&
               ((g_pathingGrid.cells
                 [(int)g_pathingGrid.sizeX * pRVar5->field_00BF +
                  pRVar5->field_00BB + (int)g_pathingGrid.planeStride * (int)pRVar5->field_004B] &
                0xc000U) != 0xc000)) &&
              ((iVar6 = thunk_FUN_00497920(pRVar5,pRVar5->field_00BB,pRVar5->field_00BF,
                                           (int)pRVar5->field_004B), iVar6 != 0 &&
               (((g_pathingGrid.cells
                  [(int)g_pathingGrid.planeStride * pRVar5->field_00C3 +
                   (int)pRVar5->field_0047 + (int)g_pathingGrid.sizeX * pRVar5->field_00BF] &
                 0xc000U) != 0xc000 &&
                (iVar6 = thunk_FUN_00497920(pRVar5,(int)pRVar5->field_0047,pRVar5->field_00BF,
                                            pRVar5->field_00C3), iVar6 != 0)))))))) &&
            ((g_pathingGrid.cells
              [(int)g_pathingGrid.planeStride * pRVar5->field_00C3 +
               pRVar5->field_00BB + (int)g_pathingGrid.sizeX * (int)pRVar5->field_0049] & 0xc000U)
             != 0xc000)) &&
           ((iVar6 = thunk_FUN_00497920(pRVar5,pRVar5->field_00BB,(int)pRVar5->field_0049,
                                        pRVar5->field_00C3), iVar6 != 0 &&
            ((g_pathingGrid.cells
              [(int)g_pathingGrid.planeStride * pRVar5->field_00C3 +
               (int)pRVar5->field_0047 + (int)g_pathingGrid.sizeX * (int)pRVar5->field_0049] &
             0xc000U) != 0xc000)))) {
          iVar6 = thunk_FUN_00497920(pRVar5,(int)pRVar5->field_0047,(int)pRVar5->field_0049,
                                     pRVar5->field_00C3);
          psVar14 = (short *)0x1;
          if (iVar6 != 0) goto LAB_0040b481;
        }
      }
      psVar14 = local_10;
    }
LAB_0040b481:
    if (psVar14 == nullptr) goto LAB_0040b56a;
    pAVar7 = Library::DKW::LIB::MemAlloc(0x90);
    pRVar5->field_009F = pAVar7;
    for (iVar6 = 0x24; iVar6 != 0; iVar6 = iVar6 + -1) {
      pAVar7->field_0000 = -1;
      pAVar7->field_0002 = -1;
      pAVar7 = (AnonNested_AnonShape_00497920_894F87D6_009F_65AF98AA *)&pAVar7->field_0004;
    }
    if (*(int *)(PTR_DAT_007ed56c +
                (((((pRVar5->field_00C3 - (int)pRVar5->field_004B) * 3 - (int)pRVar5->field_0049) +
                  pRVar5->field_00BF) * 3 - (int)pRVar5->field_0047) + pRVar5->field_00BB) * 4) <
        0x1a) {
      local_3c = (&DAT_007ed640)
                 [*(int *)(PTR_DAT_007ed56c +
                          (((((pRVar5->field_00C3 - (int)pRVar5->field_004B) * 3 -
                             (int)pRVar5->field_0049) + pRVar5->field_00BF) * 3 -
                           (int)pRVar5->field_0047) + pRVar5->field_00BB) * 4)];
    }
    pRVar5->field_009F->field_0000 = pRVar5->field_0047;
    pRVar5->field_009F->field_0002 = pRVar5->field_0049;
    pRVar5->field_009F->field_0004 = pRVar5->field_004B;
    pRVar5->field_009F->field_0006 = (undefined2)local_3c;
    pRVar5->field_009F->field_0048 = (short)pRVar5->field_00BB;
    pRVar5->field_009F->field_004A = (short)pRVar5->field_00BF;
    pRVar5->field_009F->field_004C = (short)pRVar5->field_00C3;
    pRVar5->field_009F->field_004E = 0;
  }
  pRVar5->field_00A3 = 2;
LAB_0040b56a:
  if (pRVar5->field_009F == nullptr) {
    iVar6 = FUN_006a62e0((int)pRVar5->field_0047,(int)pRVar5->field_0049,(int)pRVar5->field_004B,
                         pRVar5->field_00BB,pRVar5->field_00BF,pRVar5->field_00C3);
    pRVar5->field_00AF = iVar6;
    local_28 = Library::DKW::LIB::MemAllocClear(0x2ae);
    sVar1 = pRVar5->field_0047;
    local_10 = (short *)((int)local_28 + 0x156);
    iVar6 = 2;
    if (sVar1 < 2) {
      iVar6 = (int)sVar1;
    }
    iVar6 = -iVar6;
    if (sVar1 + 2 < (int)g_pathingGrid.sizeX) {
      local_30 = 2;
    }
    else {
      local_30 = ((int)g_pathingGrid.sizeX - (int)sVar1) + -1;
    }
    sVar1 = pRVar5->field_0049;
    iVar10 = 2;
    if (sVar1 < 2) {
      iVar10 = (int)sVar1;
    }
    uVar8 = -iVar10;
    if (sVar1 + 2 < (int)g_pathingGrid.sizeY) {
      local_c = 2;
    }
    else {
      local_c = ((int)g_pathingGrid.sizeY - (int)sVar1) + -1;
    }
    sVar1 = pRVar5->field_004B;
    iVar10 = 2;
    if (sVar1 < 2) {
      iVar10 = (int)sVar1;
    }
    local_4c = -iVar10;
    if (sVar1 + 2 < (int)g_pathingGrid.sizeZ) {
      iVar11 = 2;
    }
    else {
      iVar11 = ((int)g_pathingGrid.sizeZ - (int)sVar1) + -1;
    }
    local_18 = nullptr;
    local_44 = uVar8;
    local_34 = iVar11;
    local_1c = local_4c;
    local_8 = iVar6;
    if (-iVar11 == iVar10 || local_4c < iVar11) {
      local_20 = local_10 + (iVar10 * -7 + uVar8) * 7;
      do {
        local_38 = local_20;
        local_24 = uVar8;
        if ((int)uVar8 <= local_c) {
          do {
            if (iVar6 <= local_30) {
              psVar14 = local_38 + local_8;
              do {
                iVar10 = thunk_FUN_00497920(pRVar5,pRVar5->field_0047 + iVar6,
                                            (int)pRVar5->field_0049 + local_24,
                                            pRVar5->field_004B + local_1c);
                if (iVar10 == 0) {
                  *psVar14 = -3;
                  local_18 = (short *)0x1;
                }
                iVar6 = iVar6 + 1;
                psVar14 = psVar14 + 1;
              } while (iVar6 <= local_30);
            }
            local_38 = local_38 + 7;
            local_24 = local_24 + 1;
            iVar11 = local_34;
            uVar8 = local_44;
            iVar6 = local_8;
          } while ((int)local_24 <= local_c);
        }
        local_1c = local_1c + 1;
        local_20 = local_20 + 0x31;
      } while (local_1c <= iVar11);
    }
    psVar14 = local_40;
    if (local_18 == nullptr) {
      FreeAndNull(&local_28);
      psVar14 = nullptr;
    }
    local_24 = 0;
    if (param_2 != '\0') {
      local_24 = 4;
    }
    local_24 = local_24 | 1;
    pAVar7 = (AnonNested_AnonShape_00497920_894F87D6_009F_65AF98AA *)
             Library::DKW::WAY::FUN_006a9190
                       ((int)g_pathingGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                        (int)g_pathingGrid.sizeZ,(short *)(int)pRVar5->field_0047,
                        (short *)(int)pRVar5->field_0049,(short *)(int)pRVar5->field_004B,
                        (short *)pRVar5->field_00BB,(short *)pRVar5->field_00BF,
                        (short *)pRVar5->field_00C3,pRVar5->field_00B7,&pRVar5->field_00A3,local_28,
                        psVar14,local_24);
    pRVar5->field_009F = pAVar7;
    if (pAVar7 == nullptr) {
      psVar13 = (short *)((int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX);
      local_40 = psVar13;
      local_2c = Library::DKW::LIB::MemAlloc((int)g_pathingGrid.sizeZ * (int)psVar13 * 2);
      iVar6 = (int)g_pathingGrid.sizeZ;
      psVar14 = g_pathingGrid.cells;
      psVar9 = local_2c;
      for (uVar8 = (iVar6 * (int)psVar13 & 0x7fffffffU) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)psVar9 = *(undefined4 *)psVar14;
        psVar14 = psVar14 + 2;
        psVar9 = psVar9 + 2;
      }
      for (uVar8 = iVar6 * (int)psVar13 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(char *)psVar9 = (char)*psVar14;
        psVar14 = (short *)((int)psVar14 + 1);
        psVar9 = (short *)((int)psVar9 + 1);
      }
      if ((local_18 != nullptr) && (local_1c = local_4c, local_4c <= local_34)) {
        local_18 = local_10 + (local_4c * 7 + local_44) * 7;
        do {
          local_10 = local_2c +
                     ((int)pRVar5->field_0049 + local_44) * (int)g_pathingGrid.sizeX +
                     (pRVar5->field_004B + local_1c) * (int)local_40 + (int)pRVar5->field_0047;
          if ((int)local_44 <= local_c) {
            iVar6 = (local_c - local_44) + 1;
            psVar14 = local_18;
            do {
              if (local_8 <= local_30) {
                psVar9 = psVar14 + local_8;
                iVar10 = (local_30 - local_8) + 1;
                do {
                  if (*psVar9 < 0) {
                    *(short *)(((int)local_10 - (int)psVar14) + (int)psVar9) = *psVar9;
                  }
                  psVar9 = psVar9 + 1;
                  iVar10 = iVar10 + -1;
                } while (iVar10 != 0);
              }
              psVar14 = psVar14 + 7;
              iVar6 = iVar6 + -1;
              local_10 = local_10 + g_pathingGrid.sizeX;
            } while (iVar6 != 0);
            local_20 = nullptr;
          }
          local_18 = local_18 + 0x31;
          local_1c = local_1c + 1;
        } while (local_1c <= local_34);
      }
      pAVar7 = (AnonNested_AnonShape_00497920_894F87D6_009F_65AF98AA *)
               Library::DKW::WAY::FUN_006a8270
                         ((int)local_2c,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                          (undefined4 *)(int)g_pathingGrid.sizeZ,(short *)(int)pRVar5->field_0047,
                          (short *)(int)pRVar5->field_0049,(short *)(int)pRVar5->field_004B,
                          (short *)pRVar5->field_00BB,(short *)pRVar5->field_00BF,
                          (short *)pRVar5->field_00C3,pRVar5->field_00B7,&pRVar5->field_00A3,
                          local_24);
      pRVar5->field_009F = pAVar7;
    }
    FreeAndNull(&local_28);
  }
  g_currentExceptionFrame = local_90.previous;
  FUN_006a5e90(local_2c);
  if (pRVar5->field_009F == nullptr) {
    return -4;
  }
  return 0;
}

