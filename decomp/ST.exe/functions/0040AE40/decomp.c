
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
  bool bVar8;
  AnonShape_00497920_894F87D6 *pAVar9;
  undefined2 extraout_var_10;
  int iVar10;
  undefined4 *puVar11;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  uint uVar12;
  undefined3 extraout_var_09;
  short *psVar13;
  short *psVar14;
  int iVar15;
  int iVar16;
  undefined4 unaff_ESI;
  int iVar17;
  short *psVar18;
  void *unaff_EDI;
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
  pAVar9 = (AnonShape_00497920_894F87D6 *)thunk_FUN_00423e70(this,param_1);
  if (pAVar9 == (AnonShape_00497920_894F87D6 *)0x0) {
    return -4;
  }
  local_48 = pAVar9;
  FreeAndNull((void **)&pAVar9[1].field_0x3b);
  *(undefined4 *)&pAVar9[1].field_0x3f = 0;
  *(undefined4 *)&pAVar9[1].field_0x43 = 0;
  pAVar9[1].field_0047 = 0;
  pAVar9[1].field_0049 = 0;
  sVar1 = pAVar9->field_0047;
  local_28 = (undefined4 *)CONCAT22(extraout_var_10,sVar1);
  if (sVar1 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeX <= sVar1) {
    return -4;
  }
  sVar2 = pAVar9->field_0049;
  local_10 = (short *)CONCAT22(extraout_var_10,sVar2);
  if (sVar2 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeY <= sVar2) {
    return -4;
  }
  sVar3 = pAVar9->field_004B;
  if (sVar3 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeZ <= sVar3) {
    return -4;
  }
  iVar10 = *(int *)&pAVar9[1].field_0x57;
  if (iVar10 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeX <= iVar10) {
    return -4;
  }
  iVar15._0_2_ = pAVar9[1].field_005B;
  iVar15._2_2_ = pAVar9[1].field_005D;
  if (iVar15 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeY <= iVar15) {
    return -4;
  }
  iVar16 = *(int *)&pAVar9[1].field_005F;
  if (iVar16 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeZ <= iVar16) {
    return -4;
  }
  local_3c = FUN_006aadd0((int)sVar1,(int)sVar2,(int)sVar3,iVar10,iVar15,iVar16);
  if (local_3c <= *(int *)&pAVar9[1].field_0x53) {
    return 0;
  }
  local_2c = (short *)0x0;
  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  iVar10 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar9 = local_48;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_90.previous;
    FUN_006a5e90(local_2c);
    RaiseInternalException(iVar10,0,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0x113);
    return iVar10;
  }
  local_40 = (short *)0x3;
  if (local_3c != 1) goto LAB_0040b56a;
  local_8 = *(int *)&local_48[1].field_005F;
  local_c = *(int *)&local_48[1].field_005B;
  iVar15 = local_8 * g_pathingGrid.planeStride;
  iVar10 = local_c * g_pathingGrid.sizeX;
  if (g_pathingGrid.cells[*(int *)&local_48[1].field_0x57 + iVar10 + iVar15] < 0) {
    puVar11 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x90);
    *(undefined4 **)&pAVar9[1].field_0x3b = puVar11;
    for (iVar10 = 0x24; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
    }
    **(short **)&pAVar9[1].field_0x3b = pAVar9->field_0047;
    *(short *)(*(int *)&pAVar9[1].field_0x3b + 2) = pAVar9->field_0049;
    *(short *)(*(int *)&pAVar9[1].field_0x3b + 4) = pAVar9->field_004B;
    *(undefined2 *)(*(int *)&pAVar9[1].field_0x3b + 6) = 0;
    *(short *)(*(int *)&pAVar9[1].field_0x3b + 0x48) = pAVar9->field_0047;
    *(short *)(*(int *)&pAVar9[1].field_0x3b + 0x4a) = pAVar9->field_0049;
    *(short *)(*(int *)&pAVar9[1].field_0x3b + 0x4c) = pAVar9->field_004B;
    *(undefined2 *)(*(int *)&pAVar9[1].field_0x3b + 0x4e) = 0;
  }
  else {
    iVar16 = (int)local_48->field_0047;
    psVar13 = (short *)0x0;
    local_10 = (short *)0x0;
    if (iVar16 == *(int *)&local_48[1].field_0x57) {
      if (local_48->field_0049 == local_c) {
        psVar13 = (short *)0x1;
      }
      else if (local_48->field_004B == local_8) {
        psVar13 = (short *)0x1;
      }
      else if (((((g_pathingGrid.cells
                   [(int)local_48->field_0049 * (int)g_pathingGrid.sizeX + iVar16 + iVar15] &
                  0xc000U) != 0xc000) &&
                (bVar8 = thunk_FUN_00497920(local_48,iVar16,(int)local_48->field_0049,local_8),
                CONCAT31(extraout_var,bVar8) != 0)) &&
               ((g_pathingGrid.cells
                 [(int)g_pathingGrid.sizeX * *(int *)&pAVar9[1].field_005B +
                  (int)pAVar9->field_0047 + (int)g_pathingGrid.planeStride * (int)pAVar9->field_004B
                 ] & 0xc000U) != 0xc000)) &&
              (uVar5._0_2_ = pAVar9[1].field_005B, uVar5._2_2_ = pAVar9[1].field_005D,
              bVar8 = thunk_FUN_00497920(pAVar9,(int)pAVar9->field_0047,uVar5,
                                         (int)pAVar9->field_004B),
              CONCAT31(extraout_var_00,bVar8) != 0)) {
        psVar13 = (short *)0x1;
      }
    }
    else {
      iVar17 = (int)local_48->field_0049;
      if (iVar17 == local_c) {
        if (local_48->field_004B == local_8) {
          psVar13 = (short *)0x1;
          goto LAB_0040b481;
        }
        uVar4 = g_pathingGrid.cells[iVar17 * g_pathingGrid.sizeX + iVar16 + iVar15];
        iVar15 = local_8;
joined_r0x0040b258:
        if (((uVar4 & 0xc000) != 0xc000) &&
           (bVar8 = thunk_FUN_00497920(local_48,iVar16,iVar17,iVar15),
           CONCAT31(extraout_var_01,bVar8) != 0)) {
          if (((g_pathingGrid.cells
                [(int)g_pathingGrid.sizeX * (int)pAVar9->field_0049 +
                 *(int *)&pAVar9[1].field_0x57 +
                 (int)g_pathingGrid.planeStride * (int)pAVar9->field_004B] & 0xc000U) != 0xc000) &&
             (bVar8 = thunk_FUN_00497920(pAVar9,*(undefined4 *)&pAVar9[1].field_0x57,
                                         (int)pAVar9->field_0049,(int)pAVar9->field_004B),
             CONCAT31(extraout_var_02,bVar8) != 0)) {
            psVar13 = (short *)0x1;
            goto LAB_0040b481;
          }
        }
      }
      else {
        iVar15 = (int)local_48->field_004B;
        if (iVar15 == local_8) {
          uVar4 = g_pathingGrid.cells[iVar15 * g_pathingGrid.planeStride + iVar16 + iVar10];
          iVar17 = local_c;
          goto joined_r0x0040b258;
        }
        if (((((((g_pathingGrid.cells[iVar15 * g_pathingGrid.planeStride + iVar16 + iVar10] &
                 0xc000U) != 0xc000) &&
               (bVar8 = thunk_FUN_00497920(local_48,iVar16,local_c,iVar15),
               CONCAT31(extraout_var_03,bVar8) != 0)) &&
              ((g_pathingGrid.cells
                [(int)g_pathingGrid.sizeX * (int)pAVar9->field_0049 +
                 *(int *)&pAVar9[1].field_0x57 +
                 (int)g_pathingGrid.planeStride * (int)pAVar9->field_004B] & 0xc000U) != 0xc000)) &&
             (((bVar8 = thunk_FUN_00497920(pAVar9,*(undefined4 *)&pAVar9[1].field_0x57,
                                           (int)pAVar9->field_0049,(int)pAVar9->field_004B),
               CONCAT31(extraout_var_04,bVar8) != 0 &&
               ((g_pathingGrid.cells
                 [(int)g_pathingGrid.sizeX * *(int *)&pAVar9[1].field_005B +
                  *(int *)&pAVar9[1].field_0x57 +
                  (int)g_pathingGrid.planeStride * (int)pAVar9->field_004B] & 0xc000U) != 0xc000))
              && ((uVar6._0_2_ = pAVar9[1].field_005B, uVar6._2_2_ = pAVar9[1].field_005D,
                  bVar8 = thunk_FUN_00497920(pAVar9,*(undefined4 *)&pAVar9[1].field_0x57,uVar6,
                                             (int)pAVar9->field_004B),
                  CONCAT31(extraout_var_05,bVar8) != 0 &&
                  (((g_pathingGrid.cells
                     [(int)g_pathingGrid.planeStride * *(int *)&pAVar9[1].field_005F +
                      (int)pAVar9->field_0047 +
                      (int)g_pathingGrid.sizeX * *(int *)&pAVar9[1].field_005B] & 0xc000U) != 0xc000
                   && (uVar7._0_2_ = pAVar9[1].field_005B, uVar7._2_2_ = pAVar9[1].field_005D,
                      bVar8 = thunk_FUN_00497920(pAVar9,(int)pAVar9->field_0047,uVar7,
                                                 *(int *)&pAVar9[1].field_005F),
                      CONCAT31(extraout_var_06,bVar8) != 0)))))))) &&
            ((g_pathingGrid.cells
              [(int)g_pathingGrid.planeStride * *(int *)&pAVar9[1].field_005F +
               *(int *)&pAVar9[1].field_0x57 + (int)g_pathingGrid.sizeX * (int)pAVar9->field_0049] &
             0xc000U) != 0xc000)) &&
           ((bVar8 = thunk_FUN_00497920(pAVar9,*(undefined4 *)&pAVar9[1].field_0x57,
                                        (int)pAVar9->field_0049,*(undefined4 *)&pAVar9[1].field_005F
                                       ), CONCAT31(extraout_var_07,bVar8) != 0 &&
            ((g_pathingGrid.cells
              [(int)g_pathingGrid.planeStride * *(int *)&pAVar9[1].field_005F +
               (int)pAVar9->field_0047 + (int)g_pathingGrid.sizeX * (int)pAVar9->field_0049] &
             0xc000U) != 0xc000)))) {
          bVar8 = thunk_FUN_00497920(pAVar9,(int)pAVar9->field_0047,(int)pAVar9->field_0049,
                                     *(undefined4 *)&pAVar9[1].field_005F);
          psVar13 = (short *)0x1;
          if (CONCAT31(extraout_var_08,bVar8) != 0) goto LAB_0040b481;
        }
      }
      psVar13 = local_10;
    }
LAB_0040b481:
    if (psVar13 == (short *)0x0) goto LAB_0040b56a;
    puVar11 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x90);
    *(undefined4 **)&pAVar9[1].field_0x3b = puVar11;
    for (iVar10 = 0x24; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
    }
    if (*(int *)(PTR_DAT_007ed56c +
                (((((*(int *)&pAVar9[1].field_005F - (int)pAVar9->field_004B) * 3 -
                   (int)pAVar9->field_0049) + *(int *)&pAVar9[1].field_005B) * 3 -
                 (int)pAVar9->field_0047) + *(int *)&pAVar9[1].field_0x57) * 4) < 0x1a) {
      local_3c = (&DAT_007ed640)
                 [*(int *)(PTR_DAT_007ed56c +
                          (((((*(int *)&pAVar9[1].field_005F - (int)pAVar9->field_004B) * 3 -
                             (int)pAVar9->field_0049) + *(int *)&pAVar9[1].field_005B) * 3 -
                           (int)pAVar9->field_0047) + *(int *)&pAVar9[1].field_0x57) * 4)];
    }
    **(short **)&pAVar9[1].field_0x3b = pAVar9->field_0047;
    *(short *)(*(int *)&pAVar9[1].field_0x3b + 2) = pAVar9->field_0049;
    *(short *)(*(int *)&pAVar9[1].field_0x3b + 4) = pAVar9->field_004B;
    *(undefined2 *)(*(int *)&pAVar9[1].field_0x3b + 6) = (undefined2)local_3c;
    *(undefined2 *)(*(int *)&pAVar9[1].field_0x3b + 0x48) = *(undefined2 *)&pAVar9[1].field_0x57;
    *(short *)(*(int *)&pAVar9[1].field_0x3b + 0x4a) = pAVar9[1].field_005B;
    *(short *)(*(int *)&pAVar9[1].field_0x3b + 0x4c) = pAVar9[1].field_005F;
    *(undefined2 *)(*(int *)&pAVar9[1].field_0x3b + 0x4e) = 0;
  }
  *(undefined4 *)&pAVar9[1].field_0x3f = 2;
LAB_0040b56a:
  if (*(int *)&pAVar9[1].field_0x3b == 0) {
    iVar10._0_2_ = pAVar9[1].field_005B;
    iVar10._2_2_ = pAVar9[1].field_005D;
    iVar10 = FUN_006a62e0((int)pAVar9->field_0047,(int)pAVar9->field_0049,(int)pAVar9->field_004B,
                          *(int *)&pAVar9[1].field_0x57,iVar10,*(int *)&pAVar9[1].field_005F);
    *(int *)&pAVar9[1].field_004B = iVar10;
    local_28 = Library::DKW::LIB::FUN_006aac10(0x2ae);
    sVar1 = pAVar9->field_0047;
    local_10 = (short *)((int)local_28 + 0x156);
    iVar10 = 2;
    if (sVar1 < 2) {
      iVar10 = (int)sVar1;
    }
    iVar10 = -iVar10;
    if (sVar1 + 2 < (int)g_pathingGrid.sizeX) {
      local_30 = 2;
    }
    else {
      local_30 = ((int)g_pathingGrid.sizeX - (int)sVar1) + -1;
    }
    sVar1 = pAVar9->field_0049;
    iVar15 = 2;
    if (sVar1 < 2) {
      iVar15 = (int)sVar1;
    }
    uVar12 = -iVar15;
    if (sVar1 + 2 < (int)g_pathingGrid.sizeY) {
      local_c = 2;
    }
    else {
      local_c = ((int)g_pathingGrid.sizeY - (int)sVar1) + -1;
    }
    sVar1 = pAVar9->field_004B;
    iVar15 = 2;
    if (sVar1 < 2) {
      iVar15 = (int)sVar1;
    }
    local_4c = -iVar15;
    if (sVar1 + 2 < (int)g_pathingGrid.sizeZ) {
      iVar16 = 2;
    }
    else {
      iVar16 = ((int)g_pathingGrid.sizeZ - (int)sVar1) + -1;
    }
    local_18 = (short *)0x0;
    local_44 = uVar12;
    local_34 = iVar16;
    local_1c = local_4c;
    local_8 = iVar10;
    if (-iVar16 == iVar15 || local_4c < iVar16) {
      local_20 = local_10 + (iVar15 * -7 + uVar12) * 7;
      do {
        local_38 = local_20;
        local_24 = uVar12;
        if ((int)uVar12 <= local_c) {
          do {
            if (iVar10 <= local_30) {
              psVar13 = local_38 + local_8;
              do {
                bVar8 = thunk_FUN_00497920(pAVar9,pAVar9->field_0047 + iVar10,
                                           (int)pAVar9->field_0049 + local_24,
                                           pAVar9->field_004B + local_1c);
                if (CONCAT31(extraout_var_09,bVar8) == 0) {
                  *psVar13 = -3;
                  local_18 = (short *)0x1;
                }
                iVar10 = iVar10 + 1;
                psVar13 = psVar13 + 1;
              } while (iVar10 <= local_30);
            }
            local_38 = local_38 + 7;
            local_24 = local_24 + 1;
            iVar16 = local_34;
            uVar12 = local_44;
            iVar10 = local_8;
          } while ((int)local_24 <= local_c);
        }
        local_1c = local_1c + 1;
        local_20 = local_20 + 0x31;
      } while (local_1c <= iVar16);
    }
    psVar13 = local_40;
    if (local_18 == (short *)0x0) {
      FreeAndNull(&local_28);
      psVar13 = (short *)0x0;
    }
    local_24 = 0;
    if (param_2 != '\0') {
      local_24 = 4;
    }
    local_24 = local_24 | 1;
    psVar13 = Library::DKW::WAY::FUN_006a9190
                        ((int)g_pathingGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                         (int)g_pathingGrid.sizeZ,(short *)(int)pAVar9->field_0047,
                         (short *)(int)pAVar9->field_0049,(short *)(int)pAVar9->field_004B,
                         *(short **)&pAVar9[1].field_0x57,*(short **)&pAVar9[1].field_005B,
                         *(short **)&pAVar9[1].field_005F,*(int *)&pAVar9[1].field_0x53,
                         (int *)&pAVar9[1].field_0x3f,local_28,psVar13,local_24);
    *(short **)&pAVar9[1].field_0x3b = psVar13;
    if (psVar13 == (short *)0x0) {
      psVar18 = (short *)((int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX);
      local_40 = psVar18;
      local_2c = (short *)Library::DKW::LIB::FUN_006aac70
                                    ((int)g_pathingGrid.sizeZ * (int)psVar18 * 2);
      iVar10 = (int)g_pathingGrid.sizeZ;
      psVar13 = g_pathingGrid.cells;
      psVar14 = local_2c;
      for (uVar12 = (iVar10 * (int)psVar18 & 0x7fffffffU) >> 1; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)psVar14 = *(undefined4 *)psVar13;
        psVar13 = psVar13 + 2;
        psVar14 = psVar14 + 2;
      }
      for (uVar12 = iVar10 * (int)psVar18 * 2 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(char *)psVar14 = (char)*psVar13;
        psVar13 = (short *)((int)psVar13 + 1);
        psVar14 = (short *)((int)psVar14 + 1);
      }
      if ((local_18 != (short *)0x0) && (local_1c = local_4c, local_4c <= local_34)) {
        local_18 = local_10 + (local_4c * 7 + local_44) * 7;
        do {
          local_10 = local_2c +
                     ((int)pAVar9->field_0049 + local_44) * (int)g_pathingGrid.sizeX +
                     (pAVar9->field_004B + local_1c) * (int)local_40 + (int)pAVar9->field_0047;
          if ((int)local_44 <= local_c) {
            iVar10 = (local_c - local_44) + 1;
            psVar13 = local_18;
            do {
              if (local_8 <= local_30) {
                psVar14 = psVar13 + local_8;
                iVar15 = (local_30 - local_8) + 1;
                do {
                  if (*psVar14 < 0) {
                    *(short *)(((int)local_10 - (int)psVar13) + (int)psVar14) = *psVar14;
                  }
                  psVar14 = psVar14 + 1;
                  iVar15 = iVar15 + -1;
                } while (iVar15 != 0);
              }
              psVar13 = psVar13 + 7;
              iVar10 = iVar10 + -1;
              local_10 = local_10 + g_pathingGrid.sizeX;
            } while (iVar10 != 0);
            local_20 = (short *)0x0;
          }
          local_18 = local_18 + 0x31;
          local_1c = local_1c + 1;
        } while (local_1c <= local_34);
      }
      psVar13 = Library::DKW::WAY::FUN_006a8270
                          ((int)local_2c,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                           (undefined4 *)(int)g_pathingGrid.sizeZ,(short *)(int)pAVar9->field_0047,
                           (short *)(int)pAVar9->field_0049,(short *)(int)pAVar9->field_004B,
                           *(short **)&pAVar9[1].field_0x57,*(short **)&pAVar9[1].field_005B,
                           *(short **)&pAVar9[1].field_005F,*(int *)&pAVar9[1].field_0x53,
                           (int *)&pAVar9[1].field_0x3f,local_24);
      *(short **)&pAVar9[1].field_0x3b = psVar13;
    }
    FreeAndNull(&local_28);
  }
  g_currentExceptionFrame = local_90.previous;
  FUN_006a5e90(local_2c);
  if (*(int *)&pAVar9[1].field_0x3b == 0) {
    return -4;
  }
  return 0;
}

