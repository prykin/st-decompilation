#include "st/generated.hpp"
// Generated translation unit: source/original/wlad/Grpway3d.cpp

// 0040AE40 FUN_0040ae40
#line 4 "decomp/ST.exe/functions/0040AE40/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 275 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STTypeFamilyApplier] CONTEXTUAL_GENERATED_RECORD.
   Evidence: one script-owned pointer shape is used only by functions with one unique class-owner
   context; promote its stable machine layout to a generated owner-qualified record name

   [STTypeFamilyApplier] RETURN_TO_LOCAL_FAMILY.
   Evidence: direct call return copied through registers into this script-owned anonymous stack
   local */

int __thiscall st::fn_0040AE40(void *this,uint param_1,char param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  STGameObjC *pSVar5;
  STGameObjC *pSVar5_mg0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int local_EAX_318;
  short *psVar6;
  int local_EAX_679;
  int local_EAX_775;
  int local_EAX_884;
  int local_EAX_976;
  int iVar6;
  int local_EAX_1206;
  int local_EAX_1305;
  int local_EAX_1402;
  int local_EAX_1497;
  int local_EAX_1584;
  int local_EAX_1884;
  uint uVar7;
  int iVar10;
  short *psVar7;
  short *local_EAX_2797;
  int iVar8;
  int iVar9;
  int iVar11;
  int iVar12;
  short *psVar13;
  InternalExceptionFrame local_90;
  int local_4c;
  STGameObjC *local_48;
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
  short *temp_103f0adf3284;

  local_14 = this;
  pSVar5_mg0 = st::fn_0040286F(this,(ushort)param_1);
  if (pSVar5_mg0 == nullptr) {
    return -4;
  }
  local_48 = pSVar5_mg0;
  st::fn_006AB060(&pSVar5_mg0->field_009F);
  pSVar5_mg0->field_00A3 = 0;
  pSVar5_mg0->field_00A7 = 0;
  pSVar5_mg0->field_00AB = nullptr;
  sVar1 = pSVar5_mg0->field_0047;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  local_28 = (undefined4 *)CONCAT22(extraout_var,sVar1);
  if (sVar1 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeX <= sVar1) {
    return -4;
  }
  sVar2 = pSVar5_mg0->field_0049;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  local_10 = (short *)CONCAT22(extraout_var,sVar2);
  if (sVar2 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeY <= sVar2) {
    return -4;
  }
  sVar3 = pSVar5_mg0->field_004B;
  if (sVar3 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeZ <= sVar3) {
    return -4;
  }
  iVar8 = pSVar5_mg0->field_00BB;
  if (iVar8 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeX <= iVar8) {
    return -4;
  }
  iVar9 = pSVar5_mg0->field_00BF;
  if (iVar9 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeY <= iVar9) {
    return -4;
  }
  iVar11 = pSVar5_mg0->field_00C3;
  if (iVar11 < 0) {
    return -4;
  }
  if (g_pathingGrid.sizeZ <= iVar11) {
    return -4;
  }
  local_3c = st::fn_006AADD0((int)sVar1,(int)sVar2,(int)sVar3,iVar8,iVar9,iVar11);
  if (local_3c <= pSVar5_mg0->field_00B7) {
    return 0;
  }
  local_2c = nullptr;
  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  local_EAX_318 = st::fn_0072D7F0(local_90.jumpBuffer,0);
  pSVar5 = local_48;
  if (local_EAX_318 != 0) {
    g_currentExceptionFrame = local_90.previous;
    st::fn_006A5E90(local_2c);
    st::fn_006A5E40(local_EAX_318,0,st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0x113);
    return local_EAX_318;
  }
  local_40 = (short *)0x3;
  if (local_3c != 1) goto LAB_0040b56a;
  local_8 = local_48->field_00C3;
  local_c = local_48->field_00BF;
  iVar9 = local_8 * g_pathingGrid.planeStride;
  iVar8 = local_c * g_pathingGrid.sizeX;
  if (g_pathingGrid.cells[local_48->field_00BB + iVar8 + iVar9] < 0) {
    psVar6 = st::pointer_boundary_cast<short *>(st::fn_006AAC70(0x90));
    pSVar5->field_009F = psVar6;
    for (iVar8 = 0x24; iVar8 != 0; iVar8 = iVar8 + -1) {
      psVar6[0] = -1;
      psVar6[1] = -1;
      psVar6 = psVar6 + 2;
    }
    *pSVar5->field_009F = pSVar5->field_0047;
    pSVar5->field_009F[1] = pSVar5->field_0049;
    pSVar5->field_009F[2] = pSVar5->field_004B;
    pSVar5->field_009F[3] = 0;
    pSVar5->field_009F[0x24] = pSVar5->field_0047;
    pSVar5->field_009F[0x25] = pSVar5->field_0049;
    pSVar5->field_009F[0x26] = pSVar5->field_004B;
    pSVar5->field_009F[0x27] = 0;
  }
  else {
    iVar11 = (int)local_48->field_0047;
    psVar6 = nullptr;
    local_10 = nullptr;
    if (iVar11 == local_48->field_00BB) {
      if (local_48->field_0049 == local_c) {
        psVar6 = (short *)0x1;
      }
      else if (local_48->field_004B == local_8) {
        psVar6 = (short *)0x1;
      }
      else if (((((g_pathingGrid.cells
                   [(int)local_48->field_0049 * (int)g_pathingGrid.sizeX + iVar11 + iVar9] & 0xc000U
                  ) != 0xc000) &&
                (local_EAX_679 =
                      st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)local_48,iVar11,
                                         (int)local_48->field_0049,local_8), local_EAX_679 != 0)) &&
               ((STGridAt3D(g_pathingGrid, pSVar5->field_0047, pSVar5->field_00BF, pSVar5->field_004B) & 0xc000U) != 0xc000)) &&
              (local_EAX_775 =
                    st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,
                                       (int)pSVar5->field_0047,pSVar5->field_00BF,
                                       (int)pSVar5->field_004B), local_EAX_775 != 0)) {
        psVar6 = (short *)0x1;
      }
    }
    else {
      iVar12 = (int)local_48->field_0049;
      if (iVar12 == local_c) {
        if (local_48->field_004B == local_8) {
          psVar6 = (short *)0x1;
          goto LAB_0040b481;
        }
        uVar4 = g_pathingGrid.cells[iVar12 * g_pathingGrid.sizeX + iVar11 + iVar9];
        iVar9 = local_8;
joined_r0x0040b258:
        if (((uVar4 & 0xc000) != 0xc000) &&
           (local_EAX_884 =
                 st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)local_48,iVar11,iVar12,iVar9
                                   ), local_EAX_884 != 0)) {
          if (((STGridAt3D(g_pathingGrid, pSVar5->field_00BB, pSVar5->field_0049, pSVar5->field_004B) &
               0xc000U) != 0xc000) &&
             (local_EAX_976 =
                   st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,pSVar5->field_00BB,
                                      (int)pSVar5->field_0049,(int)pSVar5->field_004B),
             local_EAX_976 != 0)) {
            psVar6 = (short *)0x1;
            goto LAB_0040b481;
          }
        }
      }
      else {
        iVar9 = (int)local_48->field_004B;
        if (iVar9 == local_8) {
          uVar4 = g_pathingGrid.cells[iVar9 * g_pathingGrid.planeStride + iVar11 + iVar8];
          iVar12 = local_c;
          goto joined_r0x0040b258;
        }
        if (((((((g_pathingGrid.cells[iVar9 * g_pathingGrid.planeStride + iVar11 + iVar8] & 0xc000U)
                 != 0xc000) &&
               (iVar6 = st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)local_48,iVar11,
                                           local_c,iVar9), iVar6 != 0)) &&
              ((STGridAt3D(g_pathingGrid, pSVar5->field_00BB, pSVar5->field_0049, pSVar5->field_004B) &
               0xc000U) != 0xc000)) &&
             (((local_EAX_1206 =
                     st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,
                                        pSVar5->field_00BB,(int)pSVar5->field_0049,
                                        (int)pSVar5->field_004B), local_EAX_1206 != 0 &&
               ((STGridAt3D(g_pathingGrid, pSVar5->field_00BB, pSVar5->field_00BF, pSVar5->field_004B) &
                0xc000U) != 0xc000)) &&
              ((local_EAX_1305 =
                     st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,
                                        pSVar5->field_00BB,pSVar5->field_00BF,
                                        (int)pSVar5->field_004B), local_EAX_1305 != 0 &&
               (((STGridAt3D(g_pathingGrid, pSVar5->field_0047, pSVar5->field_00BF, pSVar5->field_00C3) &
                 0xc000U) != 0xc000 &&
                (local_EAX_1402 =
                      st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,
                                         (int)pSVar5->field_0047,pSVar5->field_00BF,
                                         pSVar5->field_00C3), local_EAX_1402 != 0)))))))) &&
            ((STGridAt3D(g_pathingGrid, pSVar5->field_00BB, pSVar5->field_0049, pSVar5->field_00C3) & 0xc000U)
             != 0xc000)) &&
           ((local_EAX_1497 =
                  st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,pSVar5->field_00BB,
                                     (int)pSVar5->field_0049,pSVar5->field_00C3),
            local_EAX_1497 != 0 &&
            ((STGridAt3D(g_pathingGrid, pSVar5->field_0047, pSVar5->field_0049, pSVar5->field_00C3) &
             0xc000U) != 0xc000)))) {
          local_EAX_1584 =
               st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,(int)pSVar5->field_0047
                                  ,(int)pSVar5->field_0049,pSVar5->field_00C3);
          psVar6 = (short *)0x1;
          if (local_EAX_1584 != 0) goto LAB_0040b481;
        }
      }
      psVar6 = local_10;
    }
LAB_0040b481:
    if (psVar6 == nullptr) goto LAB_0040b56a;
    psVar6 = st::pointer_boundary_cast<short *>(st::fn_006AAC70(0x90));
    pSVar5->field_009F = psVar6;
    for (iVar8 = 0x24; iVar8 != 0; iVar8 = iVar8 + -1) {
      psVar6[0] = -1;
      psVar6[1] = -1;
      psVar6 = psVar6 + 2;
    }
    if (*(int *)(PTR_DAT_007ed56c +
                (((((pSVar5->field_00C3 - (int)pSVar5->field_004B) * 3 - (int)pSVar5->field_0049) +
                  pSVar5->field_00BF) * 3 - (int)pSVar5->field_0047) + pSVar5->field_00BB) * 4) <
        0x1a) {
      local_3c = (&DAT_007ed640)
                 [*(int *)(PTR_DAT_007ed56c +
                          (((((pSVar5->field_00C3 - (int)pSVar5->field_004B) * 3 -
                             (int)pSVar5->field_0049) + pSVar5->field_00BF) * 3 -
                           (int)pSVar5->field_0047) + pSVar5->field_00BB) * 4)];
    }
    *pSVar5->field_009F = pSVar5->field_0047;
    pSVar5->field_009F[1] = pSVar5->field_0049;
    pSVar5->field_009F[2] = pSVar5->field_004B;
    pSVar5->field_009F[3] = (short)local_3c;
    pSVar5->field_009F[0x24] = *(short *)&pSVar5->field_00BB;
    pSVar5->field_009F[0x25] = (short)pSVar5->field_00BF;
    pSVar5->field_009F[0x26] = (short)pSVar5->field_00C3;
    pSVar5->field_009F[0x27] = 0;
  }
  pSVar5->field_00A3 = 2;
LAB_0040b56a:
  if (pSVar5->field_009F == nullptr) {
    local_EAX_1884 =
         st::fn_006A62E0((int)pSVar5->field_0047,(int)pSVar5->field_0049,(int)pSVar5->field_004B,
                      pSVar5->field_00BB,pSVar5->field_00BF,pSVar5->field_00C3);
    pSVar5->field_00AF = local_EAX_1884;
    local_28 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC10(0x2ae));
    sVar1 = pSVar5->field_0047;
    local_10 = (short *)((int)local_28 + 0x156);
    iVar8 = 2;
    if (sVar1 < 2) {
      iVar8 = (int)sVar1;
    }
    iVar8 = -iVar8;
    if (sVar1 + 2 < (int)g_pathingGrid.sizeX) {
      local_30 = 2;
    }
    else {
      local_30 = ((int)g_pathingGrid.sizeX - (int)sVar1) + -1;
    }
    sVar1 = pSVar5->field_0049;
    iVar9 = 2;
    if (sVar1 < 2) {
      iVar9 = (int)sVar1;
    }
    uVar7 = -iVar9;
    if (sVar1 + 2 < (int)g_pathingGrid.sizeY) {
      local_c = 2;
    }
    else {
      local_c = ((int)g_pathingGrid.sizeY - (int)sVar1) + -1;
    }
    sVar1 = pSVar5->field_004B;
    iVar9 = 2;
    if (sVar1 < 2) {
      iVar9 = (int)sVar1;
    }
    local_4c = -iVar9;
    if (sVar1 + 2 < (int)g_pathingGrid.sizeZ) {
      iVar11 = 2;
    }
    else {
      iVar11 = ((int)g_pathingGrid.sizeZ - (int)sVar1) + -1;
    }
    local_18 = nullptr;
    local_44 = uVar7;
    local_34 = iVar11;
    local_1c = local_4c;
    local_8 = iVar8;
    if (-iVar11 == iVar9 || local_4c < iVar11) {
      local_20 = local_10 + (iVar9 * -7 + uVar7) * 7;
      do {
        local_38 = local_20;
        local_24 = uVar7;
        if ((int)uVar7 <= local_c) {
          do {
            if (iVar8 <= local_30) {
              psVar6 = local_38 + local_8;
              do {
                iVar10 = st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,
                                            st::machine_word_boundary_cast<int>(pSVar5->field_0047 + iVar8),
                                            (int)pSVar5->field_0049 + local_24,
                                            st::machine_word_boundary_cast<int>(pSVar5->field_004B + local_1c));
                if (iVar10 == 0) {
                  *psVar6 = -3;
                  local_18 = (short *)0x1;
                }
                iVar8 = iVar8 + 1;
                psVar6 = psVar6 + 1;
              } while (iVar8 <= local_30);
            }
            local_38 = local_38 + 7;
            local_24 = local_24 + 1;
            iVar11 = local_34;
            uVar7 = local_44;
            iVar8 = local_8;
          } while ((int)local_24 <= local_c);
        }
        local_1c = local_1c + 1;
        local_20 = local_20 + 0x31;
      } while (local_1c <= iVar11);
    }
    psVar6 = local_40;
    if (local_18 == nullptr) {
      st::fn_006AB060(&local_28);
      psVar6 = nullptr;
    }
    local_24 = 0;
    if (param_2 != '\0') {
      local_24 = 4;
    }
    local_24 = local_24 | 1;
    psVar7 = st::fn_006A9190
                       ((int)g_pathingGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                        (int)g_pathingGrid.sizeZ,(short *)(int)pSVar5->field_0047,
                        (short *)(int)pSVar5->field_0049,(short *)(int)pSVar5->field_004B,
                        (short *)pSVar5->field_00BB,(short *)pSVar5->field_00BF,
                        (short *)pSVar5->field_00C3,pSVar5->field_00B7,st::pointer_boundary_cast<int *>(&pSVar5->field_00A3),local_28,
                        psVar6,local_24);
    pSVar5->field_009F = psVar7;
    if (psVar7 == nullptr) {
      int scalar_psVar13 = (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX; /* split integer lifetime from pointer-typed SSA storage */
      int scalar_local_40 = scalar_psVar13;
      local_2c = st::pointer_boundary_cast<short *>(st::fn_006AAC70((int)g_pathingGrid.sizeZ * scalar_psVar13 * 2));
      iVar8 = (int)g_pathingGrid.sizeZ;
      temp_103f0adf3284 = g_pathingGrid.cells;
      psVar6 = local_2c;
      for (uVar7 = (iVar8 * scalar_psVar13 & 0x7fffffffU) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)psVar6 = *(undefined4 *)temp_103f0adf3284;
        temp_103f0adf3284 = temp_103f0adf3284 + 2;
        psVar6 = psVar6 + 2;
      }
      for (uVar7 = iVar8 * scalar_psVar13 * 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(char *)psVar6 = (char)*temp_103f0adf3284;
        temp_103f0adf3284 = (short *)((int)temp_103f0adf3284 + 1);
        psVar6 = (short *)((int)psVar6 + 1);
      }
      if ((local_18 != nullptr) && (local_1c = local_4c, local_4c <= local_34)) {
        local_18 = local_10 + (local_4c * 7 + local_44) * 7;
        do {
          local_10 = st::pointer_boundary_cast<short *>(local_2c +
                     ((int)pSVar5->field_0049 + local_44) * (int)g_pathingGrid.sizeX +
                     (pSVar5->field_004B + local_1c) * scalar_local_40 + (int)pSVar5->field_0047);
          if ((int)local_44 <= local_c) {
            iVar8 = (local_c - local_44) + 1;
            psVar6 = local_18;
            do {
              if (local_8 <= local_30) {
                psVar13 = psVar6 + local_8;
                iVar9 = (local_30 - local_8) + 1;
                do {
                  if (*psVar13 < 0) {
                    *(short *)(((int)local_10 - (int)psVar6) + (int)psVar13) = *psVar13;
                  }
                  psVar13 = psVar13 + 1;
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
              }
              psVar6 = psVar6 + 7;
              iVar8 = iVar8 + -1;
              local_10 = local_10 + g_pathingGrid.sizeX;
            } while (iVar8 != 0);
            local_20 = nullptr;
          }
          local_18 = local_18 + 0x31;
          local_1c = local_1c + 1;
        } while (local_1c <= local_34);
      }
      local_EAX_2797 =
           st::fn_006A8270
                     ((int)local_2c,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                      (undefined4 *)(int)g_pathingGrid.sizeZ,(short *)(int)pSVar5->field_0047,
                      (short *)(int)pSVar5->field_0049,(short *)(int)pSVar5->field_004B,
                      (short *)pSVar5->field_00BB,(short *)pSVar5->field_00BF,
                      (short *)pSVar5->field_00C3,pSVar5->field_00B7,st::pointer_boundary_cast<int *>(&pSVar5->field_00A3),local_24);
      pSVar5->field_009F = local_EAX_2797;
    }
    st::fn_006AB060(&local_28);
  }
  g_currentExceptionFrame = local_90.previous;
  st::fn_006A5E90(local_2c);
  if (pSVar5->field_009F == nullptr) {
    return -4;
  }
  return 0;
}

// 0040BC90 FUN_0040bc90
#line 4 "decomp/ST.exe/functions/0040BC90/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 371 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __thiscall
st::fn_0040BC90(void *this,uint param_1,short *param_2,short *param_3,short *param_4,char param_5)

{
  STGameObjC *pSVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  short *psVar7;
  int iVar7;
  int iVar8;
  short *psVar9;
  int local_2c;
  void *local_28;
  int local_24;
  int local_20;
  int local_1c;
  short *local_18;
  int local_14;
  int local_10;
  int local_c;
  short *local_8;

  local_28 = this;
  pSVar1 = st::fn_0040286F(this,(ushort)param_1);
  if (pSVar1 != nullptr) {
    local_8 = st::pointer_boundary_cast<short *>(st::fn_006AAC70
                        ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY *
                         (int)g_pathingGrid.sizeX * 2));
    uVar4 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
    psVar7 = g_pathingGrid.cells;
    psVar9 = local_8;
    for (uVar5 = (uVar4 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)psVar9 = *(undefined4 *)psVar7;
      psVar7 = psVar7 + 2;
      psVar9 = psVar9 + 2;
    }
    for (uVar4 = uVar4 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)psVar9 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      psVar9 = (short *)((int)psVar9 + 1);
    }
    local_24 = st::machine_word_boundary_cast<int>(pSVar1->field_0047 + -2);
    if (local_24 < 0) {
      local_24 = 0;
    }
    local_20 = st::machine_word_boundary_cast<int>(pSVar1->field_0049 + -2);
    if (local_20 < 0) {
      local_20 = 0;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (int)pSVar1->field_004B - 2;
    if ((int)param_1 < 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = 0;
    }
    iVar2 = (int)g_pathingGrid.sizeX;
    local_10 = st::machine_word_boundary_cast<int>(pSVar1->field_0047 + 2);
    if (iVar2 <= local_10) {
      local_10 = iVar2 + -1;
    }
    iVar8 = st::machine_word_boundary_cast<int>(pSVar1->field_0049 + 2);
    if (g_pathingGrid.sizeY <= iVar8) {
      iVar8 = g_pathingGrid.sizeY + -1;
    }
    local_c = st::machine_word_boundary_cast<int>(pSVar1->field_004B + 2);
    if (g_pathingGrid.sizeZ <= local_c) {
      local_c = g_pathingGrid.sizeZ + -1;
    }
    iVar7 = local_20;
    local_14 = iVar8;
    if ((int)param_1 <= local_c) {
      do {
        local_18 = local_8 + ((int)g_pathingGrid.sizeY * param_1 + iVar7) * iVar2;
        local_1c = iVar7;
        if (iVar7 <= iVar8) {
          do {
            if (local_24 <= local_10) {
              psVar9 = local_18 + local_24;
              iVar2 = local_24;
              do {
                if ((*psVar9 == 0) &&
                   (iVar8 = st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar1,iVar2,
                                               local_1c,param_1), iVar8 == 0)) {
                  *psVar9 = -3;
                }
                iVar2 = iVar2 + 1;
                psVar9 = psVar9 + 1;
                iVar8 = local_14;
              } while (iVar2 <= local_10);
            }
            iVar2 = (int)g_pathingGrid.sizeX;
            local_18 = local_18 + iVar2;
            local_1c = local_1c + 1;
            iVar7 = local_20;
          } while (local_1c <= iVar8);
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
      } while ((int)param_1 <= local_c);
    }
    local_8[(int)pSVar1->field_004B * (int)g_pathingGrid.planeStride +
            (int)pSVar1->field_0049 * (int)g_pathingGrid.sizeX + (int)pSVar1->field_0047] = 0;
    iVar2 = (int)param_2 +
            (int)g_pathingGrid.sizeX * (int)param_3 + (int)g_pathingGrid.planeStride * (int)param_4;
    if (local_8[iVar2] == -3) {
      local_8[iVar2] = 0;
    }
    uVar4 = 0;
    if (param_5 != '\0') {
      uVar4 = 4;
    }
    psVar3 = st::fn_006A9190
                       ((int)local_8,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                        (int)g_pathingGrid.sizeZ,(short *)(int)pSVar1->field_0047,
                        (short *)(int)pSVar1->field_0049,(short *)(int)pSVar1->field_004B,param_2,
                        param_3,param_4,0,&local_2c,nullptr,nullptr,uVar4);
    psVar9 = local_8;
    if (psVar3 == nullptr) {
      iVar2 = st::fn_006AB090((int)local_8,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                           (int)g_pathingGrid.sizeZ,(int)param_2,(int)param_3,(int)param_4,
                           (int)pSVar1->field_0047,(int)pSVar1->field_0049,(int)pSVar1->field_004B);
      if (iVar2 != 0) {
        st::fn_006A5E90(psVar9);
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0x173);
        return -2;
      }
      sVar6 = psVar9[((int)pSVar1->field_004B * (int)g_pathingGrid.sizeY + (int)pSVar1->field_0049)
                     * (int)g_pathingGrid.sizeX + (int)pSVar1->field_0047];
    }
    else {
      sVar6 = psVar3[3] + 1;
      st::fn_006A5E90(psVar3);
      psVar9 = local_8;
    }
    st::fn_006A5E90(psVar9);
    if (0 < sVar6) {
      return (sVar6 + -1) / 3;
    }
  }
  return -4;
}

// 0040C080 FUN_0040c080
#line 4 "decomp/ST.exe/functions/0040C080/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 563 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0040C080 -> 006ACC70 @ 0040C16C */

undefined4 * __thiscall st::fn_0040C080(void *this,uint param_1,DArrayTy *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  short *psVar4;
  STGameObjC *pSVar5;
  int iVar6;
  int iVar8;
  int iVar7;
  dword dVar8;
  int iVar9;
  uint index;
  short *psVar10;
  short *psVar11;
  int local_b8;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_9c;
  int local_94;
  STFishC *local_90;
  int local_8c;
  int local_88;
  int local_84;
  dword local_80;
  int local_7c;
  short local_78 [2];
  int local_74;
  Global_sub_006C8EC0_param_3Enum local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  short *local_54;
  int local_50;
  short local_4c [6];
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  short local_24 [2];
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_00790020);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff34);
  dVar8 = param_2->count;
  local_80 = dVar8;
  if (dVar8 == 0) {
    ExceptionList = &local_14;
    local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff34);
    psVar4 = st::pointer_boundary_cast<short *>(st::fn_006AAC70(4));
    psVar4[0] = -4;
    psVar4[1] = -1;
  }
  else {
    ExceptionList = &local_14;
    psVar4 = st::pointer_boundary_cast<short *>(st::fn_006AAC70(dVar8 * 4));
    if (psVar4 != nullptr) {
      pSVar5 = st::fn_0040286F(this,(ushort)param_1);
      if (pSVar5 == nullptr) {
        psVar11 = psVar4;
        if (0 < (int)dVar8) {
          for (; dVar8 != 0; dVar8 = dVar8 - 1) {
            psVar11[0] = -4;
            psVar11[1] = -1;
            psVar11 = psVar11 + 2;
          }
        }
      }
      else {
        local_8 = 0;
        st::fn_0072DA40();
        local_8 = 0xffffffff;
        iVar9 = (int)pSVar5->field_0047;
        local_a8 = (int)pSVar5->field_0049;
        local_20 = (int)pSVar5->field_004B;
        index = 0;
        local_9c = local_a8;
        local_74 = iVar9;
        local_30 = local_20;
        local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff34);
        puVar3 = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff34);
        if (0 < (int)local_80) {
          do {
            st::fn_006ACC70(param_2,index,&local_90);
            st::fn_00405F0B(local_90,st::pointer_boundary_cast<undefined2 *>(local_24),st::pointer_boundary_cast<undefined2 *>(local_4c),st::pointer_boundary_cast<undefined2 *>(local_78));
            iVar7 = (int)local_24[0];
            if (iVar7 < local_74) {
              local_74 = iVar7;
            }
            if (iVar9 < iVar7) {
              iVar9 = iVar7;
            }
            iVar6 = (int)local_4c[0];
            if (iVar6 < local_9c) {
              local_9c = iVar6;
            }
            if (local_a8 < iVar6) {
              local_a8 = iVar6;
            }
            iVar6 = (int)local_78[0];
            if (iVar6 < local_20) {
              local_20 = iVar6;
            }
            if (local_30 < iVar6) {
              local_30 = iVar6;
            }
            iVar6 = index * 0xc;
            *(int *)(&stack0xffffff34 + iVar6) = iVar7;
            *(int *)(&stack0xffffff38 + iVar6) = (int)local_4c[0];
            *(int *)(&stack0xffffff3c + iVar6) = (int)local_78[0];
            index = index + 1;
            puVar3 = local_1c;
          } while ((int)index < (int)local_80);
        }
        local_1c = puVar3;
        local_74 = local_74 + -2;
        if (local_74 < 0) {
          local_74 = 0;
        }
        local_9c = local_9c + -2;
        if (local_9c < 0) {
          local_9c = 0;
        }
        local_20 = local_20 + -2;
        if (local_20 < 0) {
          local_20 = 0;
        }
        iVar7 = local_20;
        iVar9 = iVar9 + 2;
        if (g_pathingGrid.sizeX <= iVar9) {
          iVar9 = g_pathingGrid.sizeX + -1;
        }
        local_a8 = local_a8 + 2;
        if (g_pathingGrid.sizeY <= local_a8) {
          local_a8 = g_pathingGrid.sizeY + -1;
        }
        local_30 = local_30 + 2;
        if (g_pathingGrid.sizeZ <= local_30) {
          local_30 = g_pathingGrid.sizeZ + -1;
        }
        local_ac = st::machine_word_boundary_cast<int>(pSVar5->field_0047 + -2);
        if (local_ac < 0) {
          local_ac = 0;
        }
        local_38 = st::machine_word_boundary_cast<int>(pSVar5->field_0049 + -2);
        if (local_38 < 0) {
          local_38 = 0;
        }
        local_5c = st::machine_word_boundary_cast<int>(pSVar5->field_004B + -2);
        if (local_5c < 0) {
          local_5c = 0;
        }
        local_b8 = st::machine_word_boundary_cast<int>(pSVar5->field_0047 + 2);
        if (g_pathingGrid.sizeX <= local_b8) {
          local_b8 = g_pathingGrid.sizeX + -1;
        }
        local_40 = st::machine_word_boundary_cast<int>(pSVar5->field_0049 + 2);
        if (g_pathingGrid.sizeY <= local_40) {
          local_40 = g_pathingGrid.sizeY + -1;
        }
        local_6c = st::machine_word_boundary_cast<int>(pSVar5->field_004B + 2);
        if (g_pathingGrid.sizeZ <= local_6c) {
          local_6c = g_pathingGrid.sizeZ + -1;
        }
        local_2c = (iVar9 - local_74) + 1;
        local_70 = (local_a8 - local_9c) + CASE_1;
        local_68 = (local_30 - local_20) + 1;
        local_64 = local_70 * local_2c;
        local_84 = iVar9;
        local_54 = st::pointer_boundary_cast<short *>(st::fn_006AAC70(local_64 * local_68 * 2));
        for (local_8c = iVar7; local_8c < local_5c; local_8c = local_8c + 1) {
          psVar11 = g_pathingGrid.cells +
                    g_pathingGrid.planeStride * local_8c + g_pathingGrid.sizeX * local_9c;
          psVar10 = local_54 + (local_8c - local_20) * local_64;
          for (local_88 = local_9c; iVar7 = local_74, local_88 <= local_a8; local_88 = local_88 + 1)
          {
            for (; iVar7 <= iVar9; iVar7 = iVar7 + 1) {
              psVar10[iVar7 - local_74] = psVar11[iVar7];
            }
            psVar11 = psVar11 + g_pathingGrid.sizeX;
            psVar10 = psVar10 + local_2c;
          }
        }
        if (local_8c <= local_6c) {
          do {
            psVar11 = g_pathingGrid.cells +
                      g_pathingGrid.planeStride * local_8c + g_pathingGrid.sizeX * local_9c;
            psVar10 = local_54 + (local_8c - local_20) * local_64;
            for (local_88 = local_9c; iVar7 = local_74, local_88 < local_38; local_88 = local_88 + 1
                ) {
              for (; iVar7 <= iVar9; iVar7 = iVar7 + 1) {
                psVar10[iVar7 - local_74] = psVar11[iVar7];
              }
              psVar11 = psVar11 + g_pathingGrid.sizeX;
              psVar10 = psVar10 + local_2c;
            }
            if (local_88 <= local_40) {
              do {
                for (; iVar7 < local_ac; iVar7 = iVar7 + 1) {
                  psVar10[iVar7 - local_74] = psVar11[iVar7];
                }
                for (; iVar7 <= local_b8; iVar7 = iVar7 + 1) {
                  if ((psVar11[iVar7] == 0) &&
                     (iVar8 = st::fn_004044AD((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,iVar7,
                                                 local_88,local_8c), iVar8 == 0)) {
                    psVar10[iVar7 - local_74] = -3;
                  }
                  else {
                    psVar10[iVar7 - local_74] = psVar11[iVar7];
                  }
                }
                for (; iVar7 <= local_84; iVar7 = iVar7 + 1) {
                  psVar10[iVar7 - local_74] = psVar11[iVar7];
                }
                psVar11 = psVar11 + g_pathingGrid.sizeX;
                psVar10 = psVar10 + local_2c;
                local_88 = local_88 + 1;
                iVar7 = local_74;
                iVar9 = local_84;
              } while (local_88 <= local_40);
            }
            for (; iVar7 = local_74, local_88 <= local_a8; local_88 = local_88 + 1) {
              for (; iVar7 <= iVar9; iVar7 = iVar7 + 1) {
                psVar10[iVar7 - local_74] = psVar11[iVar7];
              }
              psVar11 = psVar11 + g_pathingGrid.sizeX;
              psVar10 = psVar10 + local_2c;
            }
            local_8c = local_8c + 1;
          } while (local_8c <= local_6c);
        }
        for (; psVar11 = local_54, local_8c <= local_30; local_8c = local_8c + 1) {
          psVar11 = g_pathingGrid.cells +
                    g_pathingGrid.planeStride * local_8c + g_pathingGrid.sizeX * local_9c;
          psVar10 = local_54 + (local_8c - local_20) * local_64;
          for (local_88 = local_9c; iVar7 = local_74, local_88 <= local_a8; local_88 = local_88 + 1)
          {
            for (; iVar7 <= iVar9; iVar7 = iVar7 + 1) {
              psVar10[iVar7 - local_74] = psVar11[iVar7];
            }
            psVar11 = psVar11 + g_pathingGrid.sizeX;
            psVar10 = psVar10 + local_2c;
          }
        }
        iVar9 = st::fn_006AB090((int)local_54,local_2c,local_70,local_68,st::machine_word_boundary_cast<int>(pSVar5->field_0047 - local_74),
                             st::machine_word_boundary_cast<int>(pSVar5->field_0049 - local_9c),st::machine_word_boundary_cast<int>(pSVar5->field_004B - local_20),-1,-1,-1);
        if (iVar9 == 0) {
          local_34 = 0;
          if (0 < (int)local_80) {
            do {
              iVar9 = local_34 * 0xc;
              local_8c = *(int *)(&stack0xffffff3c + iVar9) - local_20;
              local_88 = *(int *)(&stack0xffffff38 + iVar9) - local_9c;
              local_7c = *(int *)(&stack0xffffff34 + iVar9) - local_74;
              psVar11 = local_54 + local_8c * local_64 + local_7c + local_88 * local_2c;
              local_94 = (int)*psVar11;
              if (local_94 < 0) {
                local_94 = 30000;
                local_a4 = 0;
                do {
                  local_50 = (&SHORT_007ed570)[local_a4 * 4] + local_7c;
                  if ((-1 < local_50) && (local_50 < local_2c)) {
                    iVar7 = (int)(&SHORT_007ed572)[local_a4 * 4];
                    iVar9 = iVar7 + local_88;
                    if ((-1 < iVar9) && (iVar9 < (int)local_70)) {
                      local_60 = (&SHORT_007ed574)[local_a4 * 4] + local_8c;
                      if ((-1 < local_60) && (local_60 < local_68)) {
                        uVar1 = (&SHORT_007ed576)[local_a4 * 4];
                        if ((uVar1 & 1) == 0) {
                          if (((uVar1 & 0x6000) == 0) || ((uVar1 & 0x9fff) == 0xffe)) {
LAB_0040c90d:
                            if ((0 < local_54[iVar9 * local_2c + local_50 + local_60 * local_64]) &&
                               (iVar9 = (int)local_54[iVar9 * local_2c +
                                                      local_50 + local_60 * local_64] +
                                        (&DAT_007ed640)[local_a4], iVar9 < local_94)) {
                              local_94 = iVar9;
                            }
                          }
                          else if ((psVar11[(&SHORT_007ed574)[local_a4 * 4] * local_64] & 0xc000U)
                                   != 0xc000) {
                            if (iVar7 == 0) {
                              uVar1 = psVar11[(&SHORT_007ed570)[local_a4 * 4]];
                            }
                            else {
                              uVar1 = psVar11[iVar7 * local_2c];
                            }
joined_r0x0040c8f3:
                            if ((uVar1 & 0xc000) != 0xc000) goto LAB_0040c90d;
                          }
                        }
                        else {
                          iVar6 = (int)(&SHORT_007ed570)[local_a4 * 4];
                          if (((psVar11[iVar6] & 0xc000U) != 0xc000) &&
                             (iVar7 = iVar7 * local_2c, (psVar11[iVar7] & 0xc000U) != 0xc000)) {
                            if ((uVar1 & 0x4000) == 0) {
                              if ((uVar1 & 0x2000) == 0) goto LAB_0040c90d;
                              if (((psVar11[local_64] & 0xc000U) != 0xc000) &&
                                 (iVar2 = local_64, (psVar11[local_64 + iVar6] & 0xc000U) != 0xc000)
                                 ) goto LAB_0040c875;
                            }
                            else if (((psVar11[-local_64] & 0xc000U) != 0xc000) &&
                                    ((psVar11[iVar6 - local_64] & 0xc000U) != 0xc000)) {
                              iVar2 = -local_64;
LAB_0040c875:
                              if ((psVar11[iVar7 + iVar2] & 0xc000U) != 0xc000) {
                                uVar1 = psVar11[iVar6 + iVar7];
                                goto joined_r0x0040c8f3;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  local_a4 = local_a4 + 1;
                } while (local_a4 < 0x1a);
              }
              if ((local_94 < 1) || (29999 < local_94)) {
                iVar9 = -4;
              }
              else {
                iVar9 = (local_94 + -1) / 3;
              }
              *(int *)(psVar4 + local_34 * 2) = iVar9;
              local_34 = local_34 + 1;
              psVar11 = local_54;
            } while (local_34 < (int)local_80);
          }
          st::fn_006A5E90(psVar11);
        }
        else {
          st::fn_006A5E90(psVar11);
          st::fn_006A5E90(psVar4);
          st::fn_006A5E40
                    (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0x233);
          psVar4 = nullptr;
        }
      }
    }
  }
  ExceptionList = local_14;
  return (undefined4 *)psVar4;
}

// 0040E0F0 FUN_0040e0f0
#line 4 "decomp/ST.exe/functions/0040E0F0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 2357 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int st::fn_0040E0F0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  int iVar8;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int local_bc;
  int local_b8;
  uint local_b4;
  int local_a8;
  int local_74;
  int local_70;
  int local_60;
  int local_5c;
  int local_54 [2];
  int local_4c;
  int local_48 [2];
  int local_40;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  uint local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_00790030);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff34);
  local_38 = 0;
  if (((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
      ((-1 < param_2 && (param_2 < DAT_007f4d30)))) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))
  {
    local_34 = DAT_007f4d30 * DAT_007f4d2c;
    local_30 = (uint)(0 < DAT_007f4d24);
    local_24 = nullptr;
    if (0 < param_4) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
    }
    local_2c = 0;
    local_28 = DAT_007f4d20;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 * 4 + 2;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = param_2 * 4 + 2;
    local_54[0] = param_3;
    uVar7 = *(uint *)(&DAT_007a4b60 + param_5 * 4);
    local_40 = (int)(uVar7 + ((int)uVar7 >> 0x1f & 7U)) >> 3;
    if (local_40 == 0) {
      local_40 = 1;
    }
    uVar6 = DAT_007f4d28 * 4;
    uVar1 = DAT_007f4d38 * 4;
    iVar5 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    iVar4 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
    local_20 = uVar7;
    if (iVar4 < iVar5) {
      ExceptionList = &local_14;
      local_74 = st::fn_006DB610(uVar6,iVar5);
      local_74 = local_74 << 2;
      local_60 = (((int)uVar1 < 1) - 1 & 0x80000) - 0x40000;
    }
    else {
      ExceptionList = &local_14;
      local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff34);
      local_60 = st::fn_006DB610(uVar1,iVar4);
      local_60 = local_60 << 2;
      local_74 = (((int)uVar6 < 1) - 1 & 0x80000) - 0x40000;
    }
    iVar5 = -((int)uVar7 / 2) * local_74;
    iVar4 = -((int)uVar7 / 2) * local_60;
    local_70 = 0;
    while( true ) {
      local_5c = 0;
      if ((local_28 < (int)uVar7) && (local_30 != 0)) {
        if (local_24 == nullptr) {
          local_8 = 0;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          local_24 = st::pointer_boundary_cast<byte *>(&stack0xffffff34);
          local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff34);
        }
        pbVar10 = local_24;
        memset(pbVar10, 0, uVar7); /* compiler bulk-zero initialization */
        uVar6 = 0;
        iVar11 = 0;
        if (0 < (int)uVar7) {
          local_a8 = iVar4 + 0x8000;
          iVar9 = iVar5 + 0x8000;
          do {
            local_48[0] = (iVar9 >> 0x10) + param_1 >> 2;
            local_4c = (local_a8 >> 0x10) + param_2 >> 2;
            if ((((-1 < local_48[0]) && (local_48[0] < DAT_007f4d2c)) && (-1 < local_4c)) &&
               ((local_4c < DAT_007f4d30 &&
                (uVar6 = st::machine_word_boundary_cast<uint>(local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c ^ 7),
                (*(byte *)(DAT_007f4cfc + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) != 0)))) {
              local_5c = local_5c + 1;
              local_24[iVar11] = 1;
            }
            iVar9 = iVar9 + local_74;
            local_a8 = local_a8 + local_60;
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)uVar7);
        }
      }
      pbVar10 = local_24;
      if (local_5c < (int)uVar7) {
        if (local_5c + local_28 < (int)uVar7) {
          if (local_5c < 1) {
            iVar9 = iVar5 - local_74;
            iVar11 = iVar4 - local_60;
            local_74 = (int)((uVar7 + 1) * local_74) / (local_28 + 1);
            local_60 = (int)((local_20 + 1) * local_60) / (local_28 + 1);
            uVar7 = local_20;
            if (0 < local_28) {
              iVar12 = local_2c * 0x14;
              iVar11 = iVar11 + 0x8000;
              iVar9 = iVar9 + 0x8000;
              local_bc = local_28;
              local_2c = local_2c + local_28;
              do {
                iVar9 = iVar9 + local_74;
                iVar11 = iVar11 + local_60;
                local_48[0] = (iVar9 >> 0x10) + param_1 >> 2;
                local_4c = (iVar11 >> 0x10) + param_2 >> 2;
                *(int *)(iVar12 + DAT_007f4d3c) = local_48[0];
                *(int *)(iVar12 + 4 + DAT_007f4d3c) = local_4c;
                *(int *)(iVar12 + 8 + DAT_007f4d3c) = local_54[0];
                iVar12 = iVar12 + 0x14;
                if (((-1 < local_48[0]) && (local_48[0] < DAT_007f4d2c)) &&
                   ((-1 < local_4c && (local_4c < DAT_007f4d30)))) {
                  uVar7 = st::machine_word_boundary_cast<uint>(local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c ^ 7);
                  pbVar10 = (byte *)(DAT_007f4cfc + ((int)uVar7 >> 3));
                  *pbVar10 = *pbVar10 | '\x01' << (uVar7 & 7);
                }
                local_bc = local_bc + -1;
                uVar7 = local_20;
              } while (local_bc != 0);
            }
          }
          else {
            st::fn_0040F4D0((undefined4 *)local_24,uVar7,local_40,0);
            if (0 < local_28) {
              iVar11 = local_2c * 0x14;
              local_b8 = local_28;
              local_2c = local_2c + local_28;
              do {
                iVar8 = st::fn_0040F840(pbVar10,uVar7,local_40,0);
                local_48[0] = (iVar8 * local_74 + 0x8000 + iVar5 >> 0x10) + param_1 >> 2;
                local_4c = (iVar8 * local_60 + 0x8000 + iVar4 >> 0x10) + param_2 >> 2;
                *(int *)(iVar11 + DAT_007f4d3c) = local_48[0];
                *(int *)(iVar11 + 4 + DAT_007f4d3c) = local_4c;
                *(int *)(iVar11 + 8 + DAT_007f4d3c) = local_54[0];
                iVar11 = iVar11 + 0x14;
                if ((((-1 < local_48[0]) && (local_48[0] < DAT_007f4d2c)) && (-1 < local_4c)) &&
                   (local_4c < DAT_007f4d30)) {
                  uVar6 = st::machine_word_boundary_cast<uint>(local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c ^ 7);
                  pbVar2 = (byte *)(DAT_007f4cfc + ((int)uVar6 >> 3));
                  *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
                }
                local_b8 = local_b8 + -1;
              } while (local_b8 != 0);
            }
          }
          local_28 = 0;
        }
        else if (0 < (int)uVar7) {
          iVar12 = local_2c * 0x14;
          iVar11 = iVar4 + 0x8000;
          iVar9 = iVar5 + 0x8000;
          local_b4 = uVar7;
          do {
            local_48[0] = (iVar9 >> 0x10) + param_1 >> 2;
            local_4c = (iVar11 >> 0x10) + param_2 >> 2;
            if (((local_48[0] < 0) || (DAT_007f4d2c <= local_48[0])) ||
               ((local_4c < 0 || (DAT_007f4d30 <= local_4c)))) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((!bVar3) ||
               (uVar7 = st::machine_word_boundary_cast<uint>(local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c ^ 7),
               (*(byte *)(DAT_007f4cfc + ((int)uVar7 >> 3)) >> (uVar7 & 7) & 1) == 0)) {
              *(int *)(iVar12 + DAT_007f4d3c) = local_48[0];
              *(int *)(iVar12 + 4 + DAT_007f4d3c) = local_4c;
              *(int *)(iVar12 + 8 + DAT_007f4d3c) = local_54[0];
              local_2c = local_2c + 1;
              iVar12 = iVar12 + 0x14;
              local_28 = local_28 + -1;
              if (bVar3) {
                uVar7 = st::machine_word_boundary_cast<uint>(local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c ^ 7);
                pbVar10 = (byte *)(DAT_007f4cfc + ((int)uVar7 >> 3));
                *pbVar10 = *pbVar10 | '\x01' << (uVar7 & 7);
              }
            }
            iVar9 = iVar9 + local_74;
            iVar11 = iVar11 + local_60;
            local_b4 = local_b4 - 1;
            uVar7 = local_20;
          } while (local_b4 != 0);
        }
      }
      if (local_28 < 1) break;
      do {
        local_70 = local_70 + 1;
        if (8 < local_70) {
          local_70 = 0;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = param_1 - ((DAT_007f4d38 << 2) >> 0x10);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = param_2 + ((DAT_007f4d28 << 2) >> 0x10);
          local_30 = 1;
          local_54[0] = param_3;
        }
        switch(local_70) {
        case 1:
          local_54[0] = st::machine_word_boundary_cast<int>(local_54[0] + 1);
          break;
        case 2:
          local_54[0] = st::machine_word_boundary_cast<int>(local_54[0] + -2);
          break;
        case 3:
          local_54[0] = st::machine_word_boundary_cast<int>(local_54[0] + 3);
          break;
        case 4:
          local_54[0] = st::machine_word_boundary_cast<int>(local_54[0] + -4);
          break;
        case 5:
          local_54[0] = st::machine_word_boundary_cast<int>(local_54[0] + 5);
          break;
        case 6:
          local_54[0] = st::machine_word_boundary_cast<int>(local_54[0] + -6);
          break;
        case 7:
          local_54[0] = st::machine_word_boundary_cast<int>(local_54[0] + 7);
          break;
        case 8:
          local_54[0] = st::machine_word_boundary_cast<int>(local_54[0] + -8);
        }
      } while ((local_54[0] < 0) || (DAT_007f4d34 <= local_54[0]));
    }
    local_2c = 0;
    if (0 < DAT_007f4d20) {
      iVar11 = 0;
      iVar4 = local_34;
      iVar5 = DAT_007f4d3c;
      do {
        local_48[0] = *(int *)(iVar11 + iVar5);
        local_4c = *(int *)(iVar11 + 4 + iVar5);
        local_54[0] = *(int *)(iVar11 + 8 + iVar5);
        if ((((local_48[0] < 0) || (DAT_007f4d2c <= local_48[0])) || (local_4c < 0)) ||
           ((DAT_007f4d30 <= local_4c ||
            (iVar4 = local_34,
            *(short *)(DAT_007f4cf0 +
                      (local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c) * 2) != 0))))
        {
          iVar5 = st::fn_0040F270(local_48,&local_4c,local_54,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                               DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
          if (iVar5 != 0) {
            iVar4 = -4;
            goto LAB_0040e872;
          }
          uVar7 = st::machine_word_boundary_cast<uint>(local_54[0] * iVar4 + local_48[0] + DAT_007f4d2c * local_4c ^ 7);
          pbVar10 = (byte *)(DAT_007f4cfc + ((int)uVar7 >> 3));
          *pbVar10 = *pbVar10 | '\x01' << (uVar7 & 7);
          *(int *)(iVar11 + DAT_007f4d3c) = local_48[0];
          *(int *)(iVar11 + 4 + DAT_007f4d3c) = local_4c;
          *(int *)(iVar11 + 8 + DAT_007f4d3c) = local_54[0];
          iVar5 = DAT_007f4d3c;
        }
        local_2c = local_2c + 1;
        iVar11 = iVar11 + 0x14;
      } while (local_2c < DAT_007f4d20);
    }
    st::fn_0040EB90();
    iVar4 = local_38;
LAB_0040e872:
    if (iVar4 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    if (iVar4 != -4) {
      st::fn_006A5E40
                (iVar4,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0x935);
      ExceptionList = local_14;
      return iVar4;
    }
  }
  ExceptionList = local_14;
  return -4;
}

// 0040FC40 FUN_0040fc40
#line 4 "decomp/ST.exe/functions/0040FC40/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 2635 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int st::fn_0040FC40(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar18;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar19;
  int local_12c;
  int local_114;
  int *local_108;
  int local_104;
  uint local_100;
  int local_fc;
  int local_f8;
  int local_ac;
  uint local_9c;
  uint local_94;
  int local_8c;
  int local_88;
  int local_84;
  uint local_78;
  int local_74;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44 [8];
  undefined4 *local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_00790060);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xfffffec8);
  local_50 = 0;
  if (param_6 == 0) {
    if (200 < DAT_007f4d20) {
      return -4;
    }
    if (param_1 < 0) {
      return -4;
    }
    if (DAT_007f4d2c <= param_1) {
      return -4;
    }
    if (param_2 < 0) {
      return -4;
    }
    if (DAT_007f4d30 <= param_2) {
      return -4;
    }
    if (param_3 < 0) {
      return -4;
    }
    if (DAT_007f4d34 <= param_3) {
      return -4;
    }
    DAT_007f4d14 = 0;
    local_44[6] = DAT_007f4d20;
  }
  else {
    local_44[6] = param_6;
  }
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_48 = DAT_007f4d30 * DAT_007f4d2c;
  local_44[5] = (int)(0 < DAT_007f4d24);
  local_24 = nullptr;
  if (0 < param_4) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
  }
  uVar15 = *(uint *)(&DAT_007a4b88 + param_5 * 8);
  local_20 = *(int *)(&DAT_007a4b8c + param_5 * 8);
  if ((int)(local_20 * uVar15) < DAT_007f4d20) {
    local_20 = 5;
  }
  iVar11 = local_20 * uVar15;
  iVar3 = local_20 / 2;
  if (4 < iVar3 + param_3) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 4 - iVar3;
  }
  if (param_3 - iVar3 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = iVar3;
  }
  iVar3 = param_3 - iVar3;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = param_1 * 4 + 2;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_2 = param_2 * 4 + 2;
  local_5c = (int)(uVar15 + ((int)uVar15 >> 0x1f & 7U)) >> 3;
  if (local_5c == 0) {
    local_5c = 1;
  }
  uVar9 = DAT_007f4d28 * 4;
  uVar16 = DAT_007f4d38 * 4;
  iVar8 = (uVar16 ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f);
  iVar4 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
  if (iVar4 < iVar8) {
    ExceptionList = &local_14;
    local_ac = st::fn_006DB610(uVar9,iVar8);
    local_ac = local_ac << 2;
    local_8c = (((int)uVar16 < 1) - 1 & 0x80000) - 0x40000;
  }
  else {
    ExceptionList = &local_14;
    local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xfffffec8);
    local_8c = st::fn_006DB610(uVar16,iVar4);
    local_8c = local_8c << 2;
    local_ac = (((int)uVar9 < 1) - 1 & 0x80000) - 0x40000;
  }
  iVar12 = -((int)uVar15 / 2) * local_ac;
  iVar8 = -((int)uVar15 / 2) * local_8c;
  iVar4 = DAT_007f4d2c;
  do {
    local_84 = 0;
    if ((local_44[6] < iVar11) && (local_44[5] != 0)) {
      if (local_24 == nullptr) {
        local_8 = 0;
        st::fn_0072DA40();
        local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xfffffec8);
        local_24 = (undefined4 *)&stack0xfffffec8;
        local_8 = 0xffffffff;
      }
      puVar17 = local_24;
      for (uVar9 = uVar15 * 5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
      for (uVar9 = uVar15 * 5 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar17 = 0;
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      local_78 = 0;
      iVar4 = DAT_007f4d2c;
      if (0 < local_20) {
        do {
          local_74 = local_78 * uVar15;
          iVar19 = 0;
          if (0 < (int)uVar15) {
            iVar10 = iVar8 + 0x8000;
            iVar5 = iVar12 + 0x8000;
            do {
              local_68 = (iVar5 >> 0x10) + param_1 >> 2;
              local_6c = (iVar10 >> 0x10) + param_2 >> 2;
              if ((((-1 < local_68) && (local_68 < iVar4)) && (-1 < local_6c)) &&
                 ((local_6c < DAT_007f4d30 &&
                  (uVar9 = iVar4 * local_6c + local_68 + (local_78 + iVar3) * local_48 ^ 7,
                  iVar4 = DAT_007f4d2c,
                  (*(byte *)(DAT_007f4cfc + ((int)uVar9 >> 3)) >> (uVar9 & 7) & 1) != 0)))) {
                local_84 = local_84 + 1;
                local_44[local_78 + iVar3] = st::machine_word_boundary_cast<int>(local_44[local_78 + iVar3] + 1);
                *(undefined1 *)(iVar19 + local_74 + (int)local_24) = 1;
                iVar4 = DAT_007f4d2c;
              }
              iVar5 = iVar5 + local_ac;
              iVar10 = iVar10 + local_8c;
              iVar19 = iVar19 + 1;
            } while (iVar19 < (int)uVar15);
          }
          local_78 = local_78 + 1;
        } while ((int)local_78 < local_20);
      }
    }
    local_104 = local_44[6];
    if (local_84 < iVar11) {
      if (local_84 + local_44[6] < iVar11) {
        if (local_84 < 1) {
          if ((int)uVar15 / 2 < local_44[6]) {
            if ((int)uVar15 < local_44[6]) {
              local_78 = 0;
              if (0 < local_20) {
                do {
                  local_4c = ((int)(local_20 - local_78) / 2 + local_44[6]) /
                             (int)(local_20 - local_78);
                  iVar19 = iVar8 - local_8c;
                  iVar10 = iVar12 - local_ac;
                  if ((local_78 & 1) == 0) {
                    iVar10 = (iVar12 - local_ac) - ((int)(local_ac + (local_ac >> 0x1f & 3U)) >> 2);
                    iVar19 = (iVar8 - local_8c) - ((int)(local_8c + (local_8c >> 0x1f & 3U)) >> 2);
                  }
                  local_64 = (int)((uVar15 + 1) * local_ac) / (local_4c + 1);
                  local_58 = (int)((uVar15 + 1) * local_8c) / (local_4c + 1);
                  local_12c = local_4c;
                  if (0 < local_4c) {
                    do {
                      iVar10 = iVar10 + local_64;
                      iVar19 = iVar19 + local_58;
                      local_68 = (iVar10 + 0x8000 >> 0x10) + param_1 >> 2;
                      local_6c = (iVar19 + 0x8000 >> 0x10) + param_2 >> 2;
                      *(int *)(DAT_007f4d3c + DAT_007f4d14 * 0x14) = local_68;
                      *(int *)(DAT_007f4d3c + 4 + DAT_007f4d14 * 0x14) = local_6c;
                      *(uint *)(DAT_007f4d3c + 8 + DAT_007f4d14 * 0x14) = local_78 + iVar3;
                      DAT_007f4d14 = DAT_007f4d14 + 1;
                      if (((-1 < local_68) && (local_68 < DAT_007f4d2c)) &&
                         ((-1 < local_6c && (local_6c < DAT_007f4d30)))) {
                        uVar9 = DAT_007f4d2c * local_6c + local_68 + (local_78 + iVar3) * local_48 ^
                                7;
                        pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar9 >> 3));
                        *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
                      }
                      local_12c = local_12c + -1;
                      iVar4 = DAT_007f4d2c;
                    } while (local_12c != 0);
                  }
                  local_44[6] = st::machine_word_boundary_cast<int>(local_44[6] - local_4c);
                  local_78 = local_78 + 1;
                } while ((int)local_78 < local_20);
              }
            }
            else {
              iVar19 = iVar12 - local_ac;
              local_60 = iVar8 - local_8c;
              local_ac = (int)((uVar15 + 1) * local_ac) / (local_44[6] + 1);
              local_8c = (int)((uVar15 + 1) * local_8c) / (local_44[6] + 1);
              local_94 = 0;
              if (0 < local_44[6]) {
                iVar10 = local_60 + 0x8000;
                iVar19 = iVar19 + 0x8000;
                do {
                  local_78 = *(uint *)(&DAT_007a4bd8 + (local_94 & 7) * 4);
                  iVar19 = iVar19 + local_ac;
                  iVar10 = iVar10 + local_8c;
                  local_68 = (iVar19 >> 0x10) + param_1 >> 2;
                  local_6c = (iVar10 >> 0x10) + param_2 >> 2;
                  *(int *)(DAT_007f4d3c + DAT_007f4d14 * 0x14) = local_68;
                  *(int *)(DAT_007f4d3c + 4 + DAT_007f4d14 * 0x14) = local_6c;
                  *(uint *)(DAT_007f4d3c + 8 + DAT_007f4d14 * 0x14) = param_3 + local_78;
                  DAT_007f4d14 = DAT_007f4d14 + 1;
                  if ((((-1 < local_68) && (local_68 < DAT_007f4d2c)) && (-1 < local_6c)) &&
                     (local_6c < DAT_007f4d30)) {
                    uVar9 = DAT_007f4d2c * local_6c + local_68 + (local_78 + param_3) * local_48 ^ 7
                    ;
                    pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar9 >> 3));
                    *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
                  }
                  local_94 = local_94 + 1;
                  iVar4 = DAT_007f4d2c;
                } while ((int)local_94 < local_44[6]);
              }
            }
          }
          else {
            iVar19 = iVar12 - local_ac;
            local_60 = iVar8 - local_8c;
            local_ac = (int)((uVar15 + 1) * local_ac) / (local_44[6] + 1);
            local_8c = (int)((uVar15 + 1) * local_8c) / (local_44[6] + 1);
            if (0 < local_44[6]) {
              iVar10 = local_60 + 0x8000;
              iVar19 = iVar19 + 0x8000;
              local_114 = local_44[6];
              do {
                iVar19 = iVar19 + local_ac;
                iVar10 = iVar10 + local_8c;
                local_68 = (iVar19 >> 0x10) + param_1 >> 2;
                local_6c = (iVar10 >> 0x10) + param_2 >> 2;
                *(int *)(DAT_007f4d3c + DAT_007f4d14 * 0x14) = local_68;
                *(int *)(DAT_007f4d3c + 4 + DAT_007f4d14 * 0x14) = local_6c;
                *(int *)(DAT_007f4d3c + 8 + DAT_007f4d14 * 0x14) = param_3;
                DAT_007f4d14 = DAT_007f4d14 + 1;
                if (((-1 < local_68) && (local_68 < DAT_007f4d2c)) &&
                   ((-1 < local_6c && (local_6c < DAT_007f4d30)))) {
                  uVar9 = local_48 * param_3 + local_68 + DAT_007f4d2c * local_6c ^ 7;
                  pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar9 >> 3));
                  *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
                }
                local_114 = local_114 + -1;
                iVar4 = DAT_007f4d2c;
              } while (local_114 != 0);
            }
          }
        }
        else {
          local_78 = 0;
          if (0 < local_20) {
            do {
              if (local_44[local_78 + iVar3] < (int)uVar15) {
                st::fn_0040F4D0((undefined4 *)(local_78 * uVar15 + (int)local_24),uVar15,local_5c,0);
                iVar4 = DAT_007f4d2c;
              }
              local_78 = local_78 + 1;
            } while ((int)local_78 < local_20);
          }
          if (0 < local_104) {
            do {
              local_88 = 30000;
              uVar9 = 0;
              local_78 = 0;
              if (0 < local_20) {
                local_108 = local_44 + iVar3;
                iVar4 = 30000;
                uVar16 = local_9c;
                do {
                  iVar19 = *local_108;
                  iVar10 = iVar19;
                  local_9c = uVar9;
                  iVar5 = iVar19;
                  if (((iVar4 <= iVar19) &&
                      (iVar10 = iVar4, local_9c = uVar16, iVar5 = local_88, iVar4 == iVar19)) &&
                     (uVar6 = local_20 / 2 - uVar9, uVar13 = (int)uVar6 >> 0x1f,
                     uVar7 = local_20 / 2 - uVar16, uVar14 = (int)uVar7 >> 0x1f, iVar10 = iVar19,
                     local_9c = uVar9, iVar5 = iVar19,
                     (int)((uVar7 ^ uVar14) - uVar14) <= (int)((uVar6 ^ uVar13) - uVar13))) {
                    iVar10 = local_88;
                    local_9c = uVar16;
                    iVar5 = local_88;
                  }
                  local_88 = iVar5;
                  uVar9 = uVar9 + 1;
                  local_108 = local_108 + 1;
                  iVar4 = iVar10;
                  uVar16 = local_9c;
                  local_78 = uVar9;
                } while ((int)uVar9 < local_20);
              }
              iVar4 = local_9c + iVar3;
              local_44[iVar4] = st::machine_word_boundary_cast<int>(local_44[iVar4] + 1);
              iVar18 = st::fn_0040F840((byte *)(local_9c * uVar15 + (int)local_24),uVar15,local_5c,0);
              local_68 = (iVar18 * local_ac + 0x8000 + iVar12 >> 0x10) + param_1 >> 2;
              local_6c = (iVar18 * local_8c + 0x8000 + iVar8 >> 0x10) + param_2 >> 2;
              *(int *)(DAT_007f4d3c + DAT_007f4d14 * 0x14) = local_68;
              *(int *)(DAT_007f4d3c + 4 + DAT_007f4d14 * 0x14) = local_6c;
              *(int *)(DAT_007f4d3c + 8 + DAT_007f4d14 * 0x14) = iVar4;
              DAT_007f4d14 = DAT_007f4d14 + 1;
              if ((((-1 < local_68) && (local_68 < DAT_007f4d2c)) && (-1 < local_6c)) &&
                 (local_6c < DAT_007f4d30)) {
                uVar9 = DAT_007f4d2c * local_6c + local_68 + iVar4 * local_48 ^ 7;
                pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar9 >> 3));
                *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
              }
              local_104 = local_104 + -1;
              iVar4 = DAT_007f4d2c;
            } while (local_104 != 0);
          }
        }
        local_44[6] = 0;
      }
      else {
        local_78 = 0;
        if (0 < local_20) {
          do {
            if (0 < (int)uVar15) {
              local_f8 = iVar8 + 0x8000;
              local_fc = iVar12 + 0x8000;
              local_100 = uVar15;
              do {
                local_68 = (local_fc >> 0x10) + param_1 >> 2;
                local_6c = (local_f8 >> 0x10) + param_2 >> 2;
                if (((local_68 < 0) || (iVar4 <= local_68)) ||
                   ((local_6c < 0 || (DAT_007f4d30 <= local_6c)))) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if ((!bVar2) ||
                   (uVar9 = iVar4 * local_6c + local_68 + (local_78 + iVar3) * local_48 ^ 7,
                   (*(byte *)(DAT_007f4cfc + ((int)uVar9 >> 3)) >> (uVar9 & 7) & 1) == 0)) {
                  *(int *)(DAT_007f4d3c + DAT_007f4d14 * 0x14) = local_68;
                  *(int *)(DAT_007f4d3c + 4 + DAT_007f4d14 * 0x14) = local_6c;
                  *(uint *)(DAT_007f4d3c + 8 + DAT_007f4d14 * 0x14) = local_78 + iVar3;
                  DAT_007f4d14 = DAT_007f4d14 + 1;
                  local_44[6] = st::machine_word_boundary_cast<int>(local_44[6] + -1);
                  if (bVar2) {
                    uVar9 = DAT_007f4d2c * local_6c + local_68 + (local_78 + iVar3) * local_48 ^ 7;
                    pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar9 >> 3));
                    *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
                  }
                }
                local_fc = local_fc + local_ac;
                local_f8 = local_f8 + local_8c;
                local_100 = local_100 - 1;
                iVar4 = DAT_007f4d2c;
              } while (local_100 != 0);
            }
            local_78 = local_78 + 1;
          } while ((int)local_78 < local_20);
        }
      }
    }
    iVar19 = 0;
    if (local_44[6] < 1) {
      iVar3 = local_50;
      if (param_6 != 0) goto cf_common_exit_0041098F;
      local_44[7] = 0;
      iVar3 = DAT_007f4d3c;
      if (0 < DAT_007f4d14) goto LAB_00410872;
      goto LAB_00410987;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 - (DAT_007f4d38 * 4 >> 0x10);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = param_2 + ((DAT_007f4d28 << 2) >> 0x10);
    local_44[5] = 1;
  } while (((-1 < param_1) && (param_1 < iVar4)) &&
          ((-1 < param_2 &&
           (((param_2 < DAT_007f4d30 && (-1 < param_3)) && (param_3 < DAT_007f4d34))))));
LAB_004109fd:
  iVar3 = -4;
  goto cf_common_exit_0041098F;
LAB_00410872:
  do {
    local_68 = *(int *)(iVar19 + iVar3);
    local_6c = *(int *)(iVar19 + 4 + iVar3);
    local_78 = *(uint *)(iVar19 + 8 + iVar3);
    if ((((local_68 < 0) || (iVar4 <= local_68)) || (local_6c < 0)) ||
       ((DAT_007f4d30 <= local_6c ||
        (*(short *)(DAT_007f4cf0 + (local_78 * local_48 + local_68 + iVar4 * local_6c) * 2) != 0))))
    {
      iVar3 = st::fn_0040F270(&local_68,&local_6c,(int *)&local_78,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                           DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
      if (iVar3 != 0) goto LAB_004109fd;
      uVar15 = local_78 * local_48 + local_68 + DAT_007f4d2c * local_6c ^ 7;
      pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar15 >> 3));
      *pbVar1 = *pbVar1 | '\x01' << (uVar15 & 7);
      *(int *)(iVar19 + DAT_007f4d3c) = local_68;
      *(int *)(iVar19 + 4 + DAT_007f4d3c) = local_6c;
      *(uint *)(iVar19 + 8 + DAT_007f4d3c) = local_78;
      iVar3 = DAT_007f4d3c;
      iVar4 = DAT_007f4d2c;
    }
    local_44[7] = st::machine_word_boundary_cast<int>(local_44[7] + 1);
    iVar19 = iVar19 + 0x14;
  } while (local_44[7] < DAT_007f4d14);
LAB_00410987:
  st::fn_0040EB90();
  iVar3 = local_50;
cf_common_exit_0041098F:
  if (iVar3 == 0) {
    ExceptionList = local_14;
    return 0;
  }
  if (iVar3 == -4) {
    ExceptionList = local_14;
    return -4;
  }
  st::fn_006A5E40
            (iVar3,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0xa4b);
  ExceptionList = local_14;
  return iVar3;
}

// 00410DC0 FUN_00410dc0
#line 1 "decomp/ST.exe/functions/00410DC0/decomp.c"

/* WARNING: Removing unreachable block (ram,0x0041112c) */
/* WARNING: Removing unreachable block (ram,0x00411131) */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 2726 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int st::fn_00410DC0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int local_EAX_46;
  int iVar3;
  int iVar4;
  int iVar2;
  int iVar6;
  int iVar7;
  int iVar5;
  int local_EAX_522;
  uint uVar8;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (DAT_007f4d20 <= *(int *)(&DAT_007a4c20 + param_5 * 8)) {
    local_EAX_46 = st::fn_00401343(param_1,param_2,param_3,param_4,param_5,0);
    return local_EAX_46;
  }
  if ((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
     (((-1 < param_2 && (param_2 < DAT_007f4d30)) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))))
  {
    if (0 < param_4) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
    }
    iVar3 = DAT_007f4d30 * DAT_007f4d2c;
    uVar8 = *(uint *)(&DAT_007a4c24 + param_5 * 8);
    DAT_007f4d14 = 0;
    iVar4 = DAT_007f4d20 / (int)uVar8 + 2;
    if (DAT_007f4d20 < iVar4) {
      iVar4 = DAT_007f4d20;
    }
    iVar2 = st::fn_00401343(param_1,param_2,param_3,0,param_5,iVar4);
    if (iVar2 != 0) {
      return iVar2;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = 1;
    iVar4 = (int)((uVar8 & 0xfffffffe) - ((int)uVar8 >> 0x1f)) >> 1;
    if (0 < iVar4) {
      local_14 = (uVar8 & 0xfffffffe) - 1;
      do {
        if (DAT_007f4d20 <= DAT_007f4d14) goto cf_break_loop_00411005;
        local_8 = (DAT_007f4d38 * param_4 >> 0x10) + param_1;
        local_c = param_2 - (DAT_007f4d28 * param_4 >> 0x10);
        iVar6 = DAT_007f4d20 - DAT_007f4d14;
        iVar7 = iVar6 / (local_14 + 1);
        if (iVar6 < iVar7) {
          iVar7 = iVar6;
        }
        if ((0 < iVar7) &&
           (iVar5 = st::fn_00401343(local_8,local_c,param_3,0,param_5,iVar7), iVar5 != 0)) {
          return iVar5;
        }
        if (DAT_007f4d20 <= DAT_007f4d14) goto cf_break_loop_00411005;
        local_8 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
        iVar6 = DAT_007f4d20 - DAT_007f4d14;
        local_c = (DAT_007f4d28 * param_4 >> 0x10) + param_2;
        iVar7 = iVar6 / local_14;
        if (iVar6 < iVar6 / local_14) {
          iVar7 = iVar6;
        }
        if (iVar7 < 1) {
          iVar7 = DAT_007f4d20;
        }
        local_EAX_522 = st::fn_00401343(local_8,local_c,param_3,0,param_5,iVar7);
        if (local_EAX_522 != 0) {
          return local_EAX_522;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = param_4 + 1;
        local_14 = local_14 + -2;
      } while (param_4 <= iVar4);
    }
    if (DAT_007f4d20 <= DAT_007f4d14) {
cf_break_loop_00411005:
      iVar7 = 0;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = 0;
      iVar4 = DAT_007f4d14;
      if (0 < DAT_007f4d14) {
        do {
          local_8 = *(int *)(iVar7 + DAT_007f4d3c);
          local_c = *(int *)(iVar7 + 4 + DAT_007f4d3c);
          local_10 = *(int *)(iVar7 + 8 + DAT_007f4d3c);
          if ((((local_8 < 0) || (DAT_007f4d2c <= local_8)) || (local_c < 0)) ||
             ((DAT_007f4d30 <= local_c ||
              (*(short *)(DAT_007f4cf0 + (local_10 * iVar3 + local_8 + DAT_007f4d2c * local_c) * 2)
               != 0)))) {
            iVar4 = st::fn_0040F270(&local_8,&local_c,&local_10,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                                 DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
            if (iVar4 != 0) {
              return -4;
            }
            uVar8 = local_10 * iVar3 + local_8 + DAT_007f4d2c * local_c ^ 7;
            pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar8 >> 3));
            *pbVar1 = *pbVar1 | '\x01' << (uVar8 & 7);
            *(int *)(iVar7 + DAT_007f4d3c) = local_8;
            *(int *)(iVar7 + 4 + DAT_007f4d3c) = local_c;
            *(int *)(iVar7 + 8 + DAT_007f4d3c) = local_10;
            iVar4 = DAT_007f4d14;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = param_4 + 1;
          iVar7 = iVar7 + 0x14;
        } while (param_4 < iVar4);
      }
      st::fn_0040EB90();
      return 0;
    }
  }
  return -4;
}

// 00411260 FUN_00411260
#line 4 "decomp/ST.exe/functions/00411260/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 2926 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int st::fn_00411260(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  short *psVar1;
  int uVar2;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int uVar3;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int local_b8;
  int local_b0;
  uint local_ac;
  int local_a8;
  int local_74;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  short *local_54;
  int local_50;
  int local_4c;
  int local_44;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_00790070);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff3c);
  local_44 = 0;
  if (((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
      ((-1 < param_2 && (param_2 < DAT_007f4d30)))) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))
  {
    local_38 = DAT_007f4d30 * DAT_007f4d2c;
    local_34 = (uint)(0 < DAT_007f4d24);
    local_24 = nullptr;
    if (0 < param_4) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
    }
    local_2c = 0;
    local_28 = DAT_007f4d20;
    local_60 = param_3;
    if ((int)param_6 < 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + ((0x167 - param_6) / 0x168) * 0x168;
    }
    if (0x167 < (int)param_6) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 % 0x168;
    }
    local_64 = *(int *)(&DAT_007a4bf8 + param_5 * 4);
    ExceptionList = &local_14;
    psVar1 = st::pointer_boundary_cast<short *>(st::fn_006AAC70(local_64 << 5));
    local_54 = psVar1;
    uVar2 = st::fn_00411CF0((char *)psVar1,local_64);
    local_3c = (int)(uVar2 * param_6 + 0xb4) / 0x168;
    if (local_3c == uVar2) {
      local_3c = 0;
    }
    local_4c = (int)(uVar2 + (uVar2 >> 0x1f & 7U)) >> 3;
    if (local_4c == 0) {
      local_4c = 1;
    }
    local_5c = 0;
    local_20 = 0;
    iVar3 = local_60;
    while( true ) {
      local_68 = 0;
      local_30 = uVar2;
      if ((local_28 < uVar2) && (local_34 != 0)) {
        if (local_5c < uVar2) {
          local_5c = uVar2 * 2;
          local_8 = 0;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          local_24 = st::pointer_boundary_cast<byte *>(&stack0xffffff3c);
          local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff3c);
        }
        pbVar8 = local_24;
        memset(pbVar8, 0, uVar2); /* compiler bulk-zero initialization */
        local_74 = 0;
        iVar7 = DAT_007f4d2c;
        uVar4 = local_3c;
        iVar3 = local_60;
        if (0 < uVar2) {
          do {
            local_50 = (char)psVar1[uVar4 * 2] + param_1;
            local_58 = *(char *)((int)psVar1 + uVar4 * 4 + 1) + param_2;
            if ((((-1 < local_50) && (local_50 < iVar7)) && (-1 < local_58)) &&
               ((local_58 < DAT_007f4d30 &&
                (uVar6 = local_60 * local_38 + local_50 + iVar7 * local_58 ^ 7, iVar7 = DAT_007f4d2c
                , (*(byte *)(DAT_007f4cfc + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) != 0)))) {
              local_68 = local_68 + 1;
              local_24[local_74] = 1;
              iVar7 = DAT_007f4d2c;
            }
            uVar4 = uVar4 + 1;
            if (uVar2 <= (int)uVar4) {
              uVar4 = 0;
            }
            local_74 = local_74 + 1;
            psVar1 = local_54;
          } while (local_74 < uVar2);
        }
      }
      if (local_68 < uVar2) {
        if (local_68 + local_28 < uVar2) {
          if (local_68 < 1) {
            iVar7 = local_3c << 0x10;
            if (0 < local_28) {
              iVar9 = local_2c * 0x14;
              local_b8 = local_28;
              local_2c = local_2c + local_28;
              uVar3 = local_3c;
              do {
                local_50 = (char)local_54[uVar3 * 2] + param_1;
                local_58 = *(char *)((int)local_54 + uVar3 * 4 + 1) + param_2;
                *(int *)(iVar9 + DAT_007f4d3c) = local_50;
                *(int *)(iVar9 + 4 + DAT_007f4d3c) = local_58;
                *(int *)(iVar9 + 8 + DAT_007f4d3c) = local_60;
                iVar9 = iVar9 + 0x14;
                if (((-1 < local_50) && (local_50 < DAT_007f4d2c)) &&
                   ((-1 < local_58 && (local_58 < DAT_007f4d30)))) {
                  uVar4 = local_60 * local_38 + local_50 + DAT_007f4d2c * local_58 ^ 7;
                  pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar4 >> 3));
                  *pbVar8 = *pbVar8 | '\x01' << (uVar4 & 7);
                }
                iVar7 = iVar7 + (uVar2 * 0x10000) / local_28;
                uVar3 = iVar7 >> 0x10;
                if (uVar2 <= uVar3) {
                  iVar7 = iVar7 + uVar2 * -0x10000;
                  uVar3 = iVar7 >> 0x10;
                }
                local_b8 = local_b8 + -1;
                iVar3 = local_60;
              } while (local_b8 != 0);
            }
          }
          else {
            st::fn_0040F4D0((undefined4 *)local_24,uVar2,local_4c,1);
            iVar3 = local_60;
            if (0 < local_28) {
              iVar7 = local_2c * 0x14;
              local_b0 = local_28;
              local_2c = local_2c + local_28;
              psVar1 = local_54;
              do {
                iVar2 = st::fn_0040F840(local_24,uVar2,local_4c,1);
                iVar3 = (int)(iVar2 + local_3c) % uVar2;
                local_50 = (char)psVar1[iVar3 * 2] + param_1;
                local_58 = *(char *)((int)psVar1 + iVar3 * 4 + 1) + param_2;
                *(int *)(iVar7 + DAT_007f4d3c) = local_50;
                *(int *)(iVar7 + 4 + DAT_007f4d3c) = local_58;
                *(int *)(iVar7 + 8 + DAT_007f4d3c) = local_60;
                iVar7 = iVar7 + 0x14;
                if ((((-1 < local_50) && (local_50 < DAT_007f4d2c)) && (-1 < local_58)) &&
                   (local_58 < DAT_007f4d30)) {
                  uVar4 = local_60 * local_38 + local_50 + DAT_007f4d2c * local_58 ^ 7;
                  pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar4 >> 3));
                  *pbVar8 = *pbVar8 | '\x01' << (uVar4 & 7);
                  psVar1 = local_54;
                }
                local_b0 = local_b0 + -1;
                iVar3 = local_60;
              } while (local_b0 != 0);
            }
          }
          local_28 = 0;
        }
        else if (0 < uVar2) {
          local_a8 = local_2c * 0x14;
          uVar4 = local_3c;
          local_ac = uVar2;
          do {
            local_50 = (char)local_54[uVar4 * 2] + param_1;
            local_58 = *(char *)((int)local_54 + uVar4 * 4 + 1) + param_2;
            if (((local_50 < 0) || (DAT_007f4d2c <= local_50)) ||
               ((local_58 < 0 || (DAT_007f4d30 <= local_58)))) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((!bVar5) ||
               (uVar6 = iVar3 * local_38 + local_50 + DAT_007f4d2c * local_58 ^ 7,
               (*(byte *)(DAT_007f4cfc + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) == 0)) {
              *(int *)(local_a8 + DAT_007f4d3c) = local_50;
              *(int *)(local_a8 + 4 + DAT_007f4d3c) = local_58;
              *(int *)(local_a8 + 8 + DAT_007f4d3c) = local_60;
              local_2c = local_2c + 1;
              local_a8 = local_a8 + 0x14;
              local_28 = local_28 + -1;
              if (bVar5) {
                uVar6 = local_60 * local_38 + local_50 + DAT_007f4d2c * local_58 ^ 7;
                pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar6 >> 3));
                *pbVar8 = *pbVar8 | '\x01' << (uVar6 & 7);
              }
            }
            uVar4 = uVar4 + 1;
            if (uVar2 <= (int)uVar4) {
              uVar4 = 0;
            }
            local_ac = local_ac - 1;
            iVar3 = local_60;
          } while (local_ac != 0);
        }
      }
      iVar7 = 0;
      if (local_28 < 1) break;
      uVar4 = local_64 << 5;
      do {
        local_20 = local_20 + 1;
        if (8 < local_20) {
          local_20 = 0;
          local_60 = param_3;
          local_64 = local_64 + 1;
          uVar4 = uVar4 + 0x20;
          local_54 = st::pointer_boundary_cast<short *>(st::fn_006ACF50(local_54,uVar4));
          uVar2 = st::fn_00411CF0((char *)local_54,local_64);
          local_3c = (int)(uVar2 * param_6 + 0xb4) / 0x168;
          if (local_3c == uVar2) {
            local_3c = 0;
          }
          local_34 = 1;
          iVar3 = local_60;
        }
        switch(local_20) {
        case 1:
          iVar3 = iVar3 + 1;
          local_60 = iVar3;
          break;
        case 2:
          iVar3 = iVar3 + -2;
          local_60 = iVar3;
          break;
        case 3:
          iVar3 = iVar3 + 3;
          local_60 = iVar3;
          break;
        case 4:
          iVar3 = iVar3 + -4;
          local_60 = iVar3;
          break;
        case 5:
          iVar3 = iVar3 + 5;
          local_60 = iVar3;
          break;
        case 6:
          iVar3 = iVar3 + -6;
          local_60 = iVar3;
          break;
        case 7:
          iVar3 = iVar3 + 7;
          local_60 = iVar3;
          break;
        case 8:
          iVar3 = iVar3 + -8;
          local_60 = iVar3;
        }
      } while ((iVar3 < 0) || (psVar1 = local_54, DAT_007f4d34 <= iVar3));
    }
    local_2c = 0;
    iVar3 = DAT_007f4d3c;
    if (0 < DAT_007f4d20) {
      do {
        local_50 = *(int *)(iVar7 + iVar3);
        local_58 = *(int *)(iVar7 + 4 + iVar3);
        local_60 = *(int *)(iVar7 + 8 + iVar3);
        if ((((local_50 < 0) || (DAT_007f4d2c <= local_50)) || (local_58 < 0)) ||
           ((DAT_007f4d30 <= local_58 ||
            (*(short *)(DAT_007f4cf0 +
                       (local_60 * local_38 + local_50 + DAT_007f4d2c * local_58) * 2) != 0)))) {
          iVar3 = st::fn_0040F270(&local_50,&local_58,&local_60,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                               DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
          if (iVar3 != 0) {
            iVar3 = -4;
            goto LAB_00411975;
          }
          uVar4 = local_60 * local_38 + local_50 + DAT_007f4d2c * local_58 ^ 7;
          pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar4 >> 3));
          *pbVar8 = *pbVar8 | '\x01' << (uVar4 & 7);
          *(int *)(iVar7 + DAT_007f4d3c) = local_50;
          *(int *)(iVar7 + 4 + DAT_007f4d3c) = local_58;
          *(int *)(iVar7 + 8 + DAT_007f4d3c) = local_60;
          iVar3 = DAT_007f4d3c;
        }
        local_2c = local_2c + 1;
        iVar7 = iVar7 + 0x14;
      } while (local_2c < DAT_007f4d20);
    }
    st::fn_0040EB90();
    iVar3 = local_44;
LAB_00411975:
    st::fn_006A5E90(local_54);
    if (iVar3 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    if (iVar3 != -4) {
      st::fn_006A5E40
                (iVar3,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0xb6e);
      ExceptionList = local_14;
      return iVar3;
    }
  }
  ExceptionList = local_14;
  return -4;
}

// 00411E50 FUN_00411e50
#line 4 "decomp/ST.exe/functions/00411E50/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 3130 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int st::fn_00411E50(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                int param_7)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int local_b4;
  int local_b0;
  uint local_ac;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  short *local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  byte *local_28;
  uint local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_00790080);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff3c);
  local_48 = 0;
  if (((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
      ((-1 < param_2 && (param_2 < DAT_007f4d30)))) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))
  {
    local_3c = DAT_007f4d30 * DAT_007f4d2c;
    local_38 = (uint)(0 < DAT_007f4d24);
    local_28 = nullptr;
    if (0 < param_4) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
    }
    local_30 = 0;
    local_2c = DAT_007f4d20;
    local_64 = param_3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 - ((-(uint)(param_7 != 0) & 0xb4) - 0x5a);
    if ((int)param_6 < 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + ((0x167 - param_6) / 0x168) * 0x168;
    }
    if (0x167 < (int)param_6) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 % 0x168;
    }
    local_68 = *(int *)(&DAT_007a4bf8 + param_5 * 4);
    ExceptionList = &local_14;
    local_58 = st::pointer_boundary_cast<short *>(st::fn_006AAC70(local_68 << 5));
    local_34 = st::fn_00411CF0((char *)local_58,local_68);
    local_40 = (int)(local_34 * param_6 + 0xb4) / 0x168;
    if (local_40 == local_34) {
      local_40 = 0;
    }
    local_24 = local_34 / 2 + 1;
    local_50 = (int)(local_24 + ((int)local_24 >> 0x1f & 7U)) >> 3;
    if (local_50 == 0) {
      local_50 = 1;
    }
    local_60 = 0;
    local_20 = 0;
    iVar3 = DAT_007f4d2c;
    iVar7 = local_64;
    while( true ) {
      local_6c = 0;
      if ((local_2c < (int)local_24) && (local_38 != 0)) {
        if (local_60 < (int)local_24) {
          local_60 = local_24 * 2;
          local_8 = 0;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          local_28 = st::pointer_boundary_cast<byte *>(&stack0xffffff3c);
          local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff3c);
        }
        pbVar8 = local_28;
        memset(pbVar8, 0, local_24); /* compiler bulk-zero initialization */
        uVar4 = 0;
        iVar9 = 0;
        iVar3 = DAT_007f4d2c;
        iVar7 = local_64;
        iVar6 = local_40;
        if (0 < (int)local_24) {
          do {
            local_54 = (char)local_58[iVar6 * 2] + param_1;
            local_5c = *(char *)((int)local_58 + iVar6 * 4 + 1) + param_2;
            if ((((-1 < local_54) && (local_54 < iVar3)) && (-1 < local_5c)) &&
               ((local_5c < DAT_007f4d30 &&
                (uVar4 = local_64 * local_3c + local_54 + iVar3 * local_5c ^ 7, iVar3 = DAT_007f4d2c
                , (*(byte *)(DAT_007f4cfc + ((int)uVar4 >> 3)) >> (uVar4 & 7) & 1) != 0)))) {
              local_6c = local_6c + 1;
              local_28[iVar9] = 1;
              iVar3 = DAT_007f4d2c;
            }
            iVar6 = iVar6 + 1;
            if (local_34 <= iVar6) {
              iVar6 = 0;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)local_24);
        }
      }
      local_b0 = local_2c;
      if (local_6c < (int)local_24) {
        local_44 = local_40;
        if (local_6c + local_2c < (int)local_24) {
          if (local_6c < 1) {
            iVar6 = local_40 * 0x10000 + -0x10000;
            if (0 < local_2c) {
              iVar9 = local_30 * 0x14;
              local_b4 = local_2c;
              local_30 = local_30 + local_2c;
              do {
                iVar6 = iVar6 + (int)((local_24 + 1) * 0x10000) / (local_2c + 1);
                iVar3 = iVar6 >> 0x10;
                if (local_34 <= iVar3) {
                  iVar6 = iVar6 + local_34 * -0x10000;
                  iVar3 = iVar6 >> 0x10;
                }
                local_54 = (char)local_58[iVar3 * 2] + param_1;
                local_5c = *(char *)((int)local_58 + iVar3 * 4 + 1) + param_2;
                *(int *)(iVar9 + DAT_007f4d3c) = local_54;
                *(int *)(iVar9 + 4 + DAT_007f4d3c) = local_5c;
                *(int *)(iVar9 + 8 + DAT_007f4d3c) = local_64;
                iVar9 = iVar9 + 0x14;
                if (((-1 < local_54) && (local_54 < DAT_007f4d2c)) &&
                   ((-1 < local_5c && (local_5c < DAT_007f4d30)))) {
                  uVar4 = local_64 * local_3c + local_54 + DAT_007f4d2c * local_5c ^ 7;
                  pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar4 >> 3));
                  *pbVar8 = *pbVar8 | '\x01' << (uVar4 & 7);
                }
                local_b4 = local_b4 + -1;
                iVar3 = DAT_007f4d2c;
                iVar7 = local_64;
              } while (local_b4 != 0);
            }
          }
          else {
            st::fn_0040F4D0((undefined4 *)local_28,local_24,local_50,0);
            psVar1 = local_58;
            iVar3 = DAT_007f4d2c;
            iVar7 = local_64;
            if (0 < local_b0) {
              iVar6 = local_30 * 0x14;
              local_30 = local_30 + local_b0;
              do {
                iVar2 = st::fn_0040F840(local_28,local_24,local_50,0);
                iVar3 = (iVar2 + local_40) % local_34;
                local_54 = (char)psVar1[iVar3 * 2] + param_1;
                local_5c = *(char *)((int)psVar1 + iVar3 * 4 + 1) + param_2;
                *(int *)(iVar6 + DAT_007f4d3c) = local_54;
                *(int *)(iVar6 + 4 + DAT_007f4d3c) = local_5c;
                *(int *)(iVar6 + 8 + DAT_007f4d3c) = local_64;
                iVar6 = iVar6 + 0x14;
                if ((((-1 < local_54) && (local_54 < DAT_007f4d2c)) && (-1 < local_5c)) &&
                   (local_5c < DAT_007f4d30)) {
                  uVar4 = local_64 * local_3c + local_54 + DAT_007f4d2c * local_5c ^ 7;
                  pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar4 >> 3));
                  *pbVar8 = *pbVar8 | '\x01' << (uVar4 & 7);
                }
                local_b0 = local_b0 + -1;
                iVar3 = DAT_007f4d2c;
                iVar7 = local_64;
              } while (local_b0 != 0);
            }
          }
          local_2c = 0;
        }
        else if (0 < (int)local_24) {
          iVar6 = local_30 * 0x14;
          local_ac = local_24;
          do {
            local_54 = (char)local_58[local_44 * 2] + param_1;
            local_5c = *(char *)((int)local_58 + local_44 * 4 + 1) + param_2;
            if (((local_54 < 0) || (iVar3 <= local_54)) ||
               ((local_5c < 0 || (DAT_007f4d30 <= local_5c)))) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((!bVar5) ||
               (uVar4 = iVar7 * local_3c + local_54 + iVar3 * local_5c ^ 7,
               (*(byte *)(DAT_007f4cfc + ((int)uVar4 >> 3)) >> (uVar4 & 7) & 1) == 0)) {
              *(int *)(iVar6 + DAT_007f4d3c) = local_54;
              *(int *)(iVar6 + 4 + DAT_007f4d3c) = local_5c;
              *(int *)(iVar6 + 8 + DAT_007f4d3c) = local_64;
              local_30 = local_30 + 1;
              iVar6 = iVar6 + 0x14;
              local_2c = local_2c + -1;
              if (bVar5) {
                uVar4 = local_64 * local_3c + local_54 + DAT_007f4d2c * local_5c ^ 7;
                pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar4 >> 3));
                *pbVar8 = *pbVar8 | '\x01' << (uVar4 & 7);
              }
            }
            local_44 = local_44 + 1;
            if (local_34 <= local_44) {
              local_44 = 0;
            }
            local_ac = local_ac - 1;
            iVar3 = DAT_007f4d2c;
            iVar7 = local_64;
          } while (local_ac != 0);
        }
      }
      if (local_2c < 1) break;
      uVar4 = local_68 << 5;
      do {
        local_20 = local_20 + 1;
        if (8 < local_20) {
          local_20 = 0;
          local_64 = param_3;
          local_68 = local_68 + 1;
          uVar4 = uVar4 + 0x20;
          local_58 = st::pointer_boundary_cast<short *>(st::fn_006ACF50(local_58,uVar4));
          local_34 = st::fn_00411CF0((char *)local_58,local_68);
          local_40 = (int)(local_34 * param_6 + 0xb4) / 0x168;
          if (local_40 == local_34) {
            local_40 = 0;
          }
          local_24 = local_34 / 2 + 1;
          local_38 = 1;
          iVar3 = DAT_007f4d2c;
          iVar7 = local_64;
        }
        switch(local_20) {
        case 1:
          iVar7 = iVar7 + 1;
          local_64 = iVar7;
          break;
        case 2:
          iVar7 = iVar7 + -2;
          local_64 = iVar7;
          break;
        case 3:
          iVar7 = iVar7 + 3;
          local_64 = iVar7;
          break;
        case 4:
          iVar7 = iVar7 + -4;
          local_64 = iVar7;
          break;
        case 5:
          iVar7 = iVar7 + 5;
          local_64 = iVar7;
          break;
        case 6:
          iVar7 = iVar7 + -6;
          local_64 = iVar7;
          break;
        case 7:
          iVar7 = iVar7 + 7;
          local_64 = iVar7;
          break;
        case 8:
          iVar7 = iVar7 + -8;
          local_64 = iVar7;
        }
      } while ((iVar7 < 0) || (DAT_007f4d34 <= iVar7));
    }
    local_30 = 0;
    if (0 < DAT_007f4d20) {
      iVar6 = 0;
      iVar7 = local_3c;
      do {
        local_54 = *(int *)(iVar6 + DAT_007f4d3c);
        local_5c = *(int *)(iVar6 + 4 + DAT_007f4d3c);
        local_64 = *(int *)(iVar6 + 8 + DAT_007f4d3c);
        if ((((local_54 < 0) || (iVar3 <= local_54)) || (local_5c < 0)) ||
           ((DAT_007f4d30 <= local_5c ||
            (iVar7 = local_3c,
            *(short *)(DAT_007f4cf0 + (local_64 * local_3c + local_54 + iVar3 * local_5c) * 2) != 0)
            ))) {
          iVar3 = st::fn_0040F270(&local_54,&local_5c,&local_64,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                               DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
          if (iVar3 != 0) {
            iVar3 = -4;
            goto LAB_004125c1;
          }
          uVar4 = local_64 * iVar7 + local_54 + DAT_007f4d2c * local_5c ^ 7;
          pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar4 >> 3));
          *pbVar8 = *pbVar8 | '\x01' << (uVar4 & 7);
          *(int *)(iVar6 + DAT_007f4d3c) = local_54;
          *(int *)(iVar6 + 4 + DAT_007f4d3c) = local_5c;
          *(int *)(iVar6 + 8 + DAT_007f4d3c) = local_64;
          iVar3 = DAT_007f4d2c;
        }
        local_30 = local_30 + 1;
        iVar6 = iVar6 + 0x14;
      } while (local_30 < DAT_007f4d20);
    }
    st::fn_0040EB90();
    iVar3 = local_48;
LAB_004125c1:
    st::fn_006A5E90(local_58);
    if (iVar3 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    if (iVar3 != -4) {
      st::fn_006A5E40
                (iVar3,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0xc3a);
      ExceptionList = local_14;
      return iVar3;
    }
  }
  ExceptionList = local_14;
  return -4;
}

// 00412960 FUN_00412960
#line 1 "decomp/ST.exe/functions/00412960/decomp.c"

/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 3194 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int st::fn_00412960(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                AnonShape_00412960_B35D15BC *param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  AnonShape_00412960_B35D15BC *pAVar5;
  int iVar6;

  if ((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
     (((-1 < param_2 && (param_2 < DAT_007f4d30)) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))))
  {
    if (0 < param_4) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
    }
    DAT_007f4d28 = st::fn_006DB640(param_5 - param_7->field_0004);
    DAT_007f4d38 = st::fn_006DB6D0(param_5 - param_7->field_0004);
    if (param_6 != param_7->field_0008) {
      iVar2 = 30000;
      iVar3 = -30000;
      pAVar5 = param_7 + 1;
      iVar6 = 30000;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = -30000;
      iVar4 = DAT_007f4d20;
      if (0 < DAT_007f4d20) {
        do {
          iVar1 = *(int *)pAVar5;
          if (iVar1 < iVar2) {
            iVar2 = iVar1;
          }
          if (iVar3 < iVar1) {
            iVar3 = iVar1;
          }
          iVar1 = pAVar5->field_0004;
          if (iVar1 < iVar6) {
            iVar6 = iVar1;
          }
          if (param_4 < iVar1) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_4 = iVar1;
          }
          pAVar5 = (AnonShape_00412960_B35D15BC *)&pAVar5[1].field_0004;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = iVar3 - iVar2;
      if (iVar3 - iVar2 < param_4 - iVar6) {
        iVar4 = param_4 - iVar6;
      }
      iVar2 = iVar4 + (*(int *)(&DAT_007a4b60 + param_6 * 4) -
                      *(int *)(&DAT_007a4b60 + param_7->field_0008 * 4)) * 4;
      DAT_007f4d38 = (DAT_007f4d38 * iVar2) / iVar4;
      DAT_007f4d28 = (DAT_007f4d28 * iVar2) / iVar4;
    }
    if (param_8 == 0) {
      iVar2 = st::fn_00412DE0(param_1,param_2,param_3);
      if (iVar2 == 0) {
        st::fn_0040EB90();
        return 0;
      }
    }
    else {
      iVar2 = st::fn_00412B80(param_1,param_2,param_3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (iVar2 != -4) {
      st::fn_006A5E40
                (iVar2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0xc7a);
      return iVar2;
    }
  }
  return -4;
}

// 00413050 FUN_00413050
#line 1 "decomp/ST.exe/functions/00413050/decomp.c"

/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 3241 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int st::fn_00413050(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;

  iVar2 = param_1;
  if (((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
      ((-1 < param_2 && (param_2 < DAT_007f4d30)))) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))
  {
    if ((DAT_007f4d20 < 10) || (param_5 < 1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(&DAT_007a4bf8 + param_5 * 4);
    }
    param_1 = (int)PTR_007f4d54;
    if (((byte)DAT_007f4d08 & 1) == 0) {
      param_1 = (int)PTR_007f4d50;
    }
    iVar2 = st::fn_00413170(iVar2,param_2,param_3,param_4,st::pointer_boundary_cast<undefined4 *>(&param_1),iVar1);
    if (iVar2 == 0) {
      st::fn_0040EB90();
      return 0;
    }
    if (iVar2 != -4) {
      st::fn_006A5E40
                (iVar2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0xca9);
      return iVar2;
    }
  }
  return -4;
}

// 00414980 FUN_00414980
#line 1 "decomp/ST.exe/functions/00414980/decomp.c"

/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 1373 | 1374 | 1382 | 1383 (metadata/report site, not the function
   definition)
   [STSourceProvenanceApplier end] */

void st::fn_00414980(int param_1)

{
  uint uVar1;

  st::fn_0040450C(PTR_007f4d50,2);
  uVar1 = param_1 * 4 + 8;
  PTR_007f4d50 = st::fn_00401104(uVar1,2,st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0x55d);
  if (PTR_007f4d50 == nullptr) {
    st::fn_006A5E40
              (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0x55e);
    return;
  }
  st::fn_00414A70(0,param_1);
  st::fn_0040450C(PTR_007f4d54,2);
  PTR_007f4d54 = st::fn_00401104(uVar1,2,st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0x566);
  if (PTR_007f4d54 == nullptr) {
    st::fn_006A5E40
              (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0x567);
    return;
  }
  st::fn_00414A70(1,param_1);
  return;
}

// 00415160 STGroupBoatC::Way3DGrpDistribTgt
#line 4 "decomp/ST.exe/functions/00415160/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Grpway3d.cpp
   STGroupBoatC::Way3DGrpDistribTgt */

int st::fn_00415160
              (STGroupBoatC *param_1,DArrayTy *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  ushort uVar4;
  ushort *puVar5;
  STGameObjC *pSVar6;
  int iVar8;
  int iVar6;
  int iVar7;
  uint uVar9;
  InternalExceptionFrame local_50;
  int local_c;
  int local_8;

  iVar7 = 0;
  local_c = 0;
  uVar4 = (ushort)param_2->count;
  param_1->field_0027 = uVar4;
  if (uVar4 == 0) {
    return 0;
  }
  uVar4 = st::fn_00401735(param_1);
  DAT_007f4d4c = (uint)uVar4;
  if ((DAT_007f4d4c < 2) && (param_1->field_0027 == 1)) {
    if (param_2->count == 0) {
      puVar5 = nullptr;
    }
    else {
      puVar5 = st::pointer_boundary_cast<ushort *>(param_2->data);
    }
    pSVar6 = st::fn_0040286F(param_1,*puVar5);
    if (pSVar6 != nullptr) {
      pSVar6->field_00B7 = 0;
      pSVar6->field_00BB = param_3;
      pSVar6->field_00C7 = param_3;
      pSVar6->field_00BF = param_4;
      pSVar6->field_00CB = param_4;
      pSVar6->field_00C3 = param_5;
      pSVar6->field_00CF = param_5;
    }
    goto LAB_00415472;
  }
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar7 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar7 == 0) {
    iVar8 = st::fn_00403959(param_1,param_2,param_3,param_4,param_5);
    uVar9 = 0;
    if (iVar8 == 0) {
      local_8 = 0;
      if (0 < DAT_007f4d40) {
        do {
          uVar1 = *(uint *)(uVar9 + 0x18 + (int)DAT_007f4d04);
          if (uVar1 < param_2->count) {
            puVar5 = DArrayAt<ushort>(param_2, uVar1);
          }
          else {
            puVar5 = nullptr;
          }
          pSVar6 = st::fn_0040286F(param_1,*puVar5);
          if (pSVar6 != nullptr) {
            iVar8 = *(int *)(uVar9 + 0xc + (int)DAT_007f4d04);
            pSVar6->field_00BB = iVar8;
            pSVar6->field_00C7 = iVar8;
            iVar8 = *(int *)(uVar9 + 0x10 + (int)DAT_007f4d04);
            pSVar6->field_00BF = iVar8;
            pSVar6->field_00CB = iVar8;
            iVar8 = *(int *)(uVar9 + 0x14 + (int)DAT_007f4d04);
            pSVar6->field_00C3 = iVar8;
            pSVar6->field_00CF = iVar8;
          }
          local_8 = local_8 + 1;
          uVar9 = uVar9 + 0x1c;
        } while (local_8 < DAT_007f4d40);
      }
      iVar8 = 0;
      if (0 < DAT_007f4cf8) {
        do {
          if (*(uint *)(DAT_007f4d04 + ((uint)param_1->field_0027 - iVar8) * 0xe + -2) <
              param_2->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            puVar5 = (ushort *)
                     (param_2->elementSize *
                      *(uint *)(DAT_007f4d04 + ((uint)param_1->field_0027 - iVar8) * 0xe + -2) +
                     (int)param_2->data);
          }
          else {
            puVar5 = nullptr;
          }
          pSVar6 = st::fn_0040286F(param_1,*puVar5);
          if (pSVar6 != nullptr) {
            iVar2 = *(int *)(DAT_007f4d04 + ((uint)param_1->field_0027 - iVar8) * 0xe + -8);
            pSVar6->field_00BB = iVar2;
            pSVar6->field_00C7 = iVar2;
            iVar2 = *(int *)(DAT_007f4d04 + ((uint)param_1->field_0027 - iVar8) * 0xe + -6);
            pSVar6->field_00BF = iVar2;
            pSVar6->field_00CB = iVar2;
            iVar2 = *(int *)(DAT_007f4d04 + ((uint)param_1->field_0027 - iVar8) * 0xe + -4);
            pSVar6->field_00C3 = iVar2;
            pSVar6->field_00CF = iVar2;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < DAT_007f4cf8);
        g_currentExceptionFrame = local_50.previous;
        iVar7 = local_c;
        goto LAB_00415467;
      }
    }
    else if (param_1->field_0027 != 0) {
      do {
        if (uVar9 < param_2->count) {
          puVar5 = DArrayAt<ushort>(param_2, uVar9);
        }
        else {
          puVar5 = nullptr;
        }
        pSVar6 = st::fn_0040286F(param_1,*puVar5);
        if (pSVar6 != nullptr) {
          pSVar6->field_00BB = param_3;
          pSVar6->field_00C7 = param_3;
          pSVar6->field_00BF = param_4;
          pSVar6->field_00CB = param_4;
          pSVar6->field_00C3 = param_5;
          pSVar6->field_00CF = param_5;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)(uint)param_1->field_0027);
    }
    g_currentExceptionFrame = local_50.previous;
    iVar7 = local_c;
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    local_c = iVar7;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0xe66,0,iVar7,st::mutable_c_string("%s"),
                               "STGroupBoatC::Way3DGrpDistribTgt");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
LAB_00415467:
  st::fn_006A5E90(st::pointer_boundary_cast<short *>(DAT_007f4d04));
LAB_00415472:
  if (iVar7 == 0) {
    return 0;
  }
  st::fn_006A5E40
            (iVar7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0xe6d);
  return iVar7;
}

// 00415590 STGroupBoatC::Way3DGrpGetDistrPoint
#line 4 "decomp/ST.exe/functions/00415590/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Grpway3d.cpp
   STGroupBoatC::Way3DGrpGetDistrPoint */

uint * st::fn_00415590
                 (STGroupBoatC *param_1,DArrayTy *param_2,int param_3,int param_4,undefined4 param_5
                 ,int param_6,int param_7,int param_8)

{
  ushort uVar2;
  DArrayTy *array;
  int iVar4;
  int iVar3;
  int iVar5;
  uint *puVar4;
  int local_EBX_18;
  int iVar6;
  InternalExceptionFrame local_58;
  short local_14;
  short local_12;
  short local_10;
  int local_c;
  DArrayTy *local_8;

  uVar2 = (ushort)param_2->count;
  local_EBX_18 = 0;
  local_c = 0;
  param_1->field_0027 = uVar2;
  if (uVar2 == 0) {
    return nullptr;
  }
  array = st::fn_006AE290(nullptr,(uint)uVar2,6,1);
  local_8 = array;
  uVar2 = st::fn_00401735(param_1);
  DAT_007f4d4c = (uint)uVar2;
  if ((DAT_007f4d4c < 2) && (param_1->field_0027 == 1)) {
    local_14 = (short)param_6;
    local_12 = (short)param_7;
    local_10 = (short)param_8;
    st::fn_006AE1C0(array,&local_14);
    goto LAB_004157f0;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_EBX_18 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  if (local_EBX_18 == 0) {
    if (param_1->field_004D != 0) {
      iVar4 = st::fn_006DB910(param_3,param_4,param_6,param_7);
      iVar3 = ((iVar4 * 4 + 0x2d) / 0x5a) * 0x5a;
      iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
      param_1->field_0055 = iVar3;
      if (iVar3 == 0x168) {
        param_1->field_0055 = 0;
      }
      param_1->field_0049 = st::machine_word_boundary_cast<undefined4>(param_1->field_0049 | 1);
    }
    iVar3 = st::fn_00403959(param_1,param_2,param_6,param_7,param_8);
    if (iVar3 == 0) {
      iVar3 = 0;
      if (0 < DAT_007f4d40) {
        iVar6 = 0;
        do {
          local_14 = *(short *)(iVar6 + 0xc + (int)DAT_007f4d04);
          local_12 = *(short *)(iVar6 + 0x10 + (int)DAT_007f4d04);
          local_10 = *(short *)(iVar6 + 0x14 + (int)DAT_007f4d04);
          st::fn_006AE140
                    (local_8,*(uint *)(iVar6 + 0x18 + (int)DAT_007f4d04),&local_14);
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 0x1c;
        } while (iVar3 < DAT_007f4d40);
      }
      iVar3 = 0;
      if (0 < DAT_007f4cf8) {
        do {
          iVar6 = (uint)param_1->field_0027 - iVar3;
          local_14 = DAT_007f4d04[iVar6 * 0xe + -8];
          local_12 = DAT_007f4d04[iVar6 * 0xe + -6];
          local_10 = DAT_007f4d04[iVar6 * 0xe + -4];
          st::fn_006AE140(local_8,*(uint *)(DAT_007f4d04 + iVar6 * 0xe + -2),&local_14);
          iVar3 = iVar3 + 1;
        } while (iVar3 < DAT_007f4cf8);
        g_currentExceptionFrame = local_58.previous;
        local_EBX_18 = local_c;
        goto LAB_004157e1;
      }
    }
    else {
      iVar3 = 0;
      local_10 = (short)param_8;
      local_14 = (short)param_6;
      local_12 = (short)param_7;
      if (param_1->field_0027 != 0) {
        do {
          st::fn_006AE1C0(local_8,&local_14);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)param_1->field_0027);
      }
    }
    g_currentExceptionFrame = local_58.previous;
    local_EBX_18 = local_c;
  }
  else {
    g_currentExceptionFrame = local_58.previous;
    local_c = local_EBX_18;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),0xeae,0,local_EBX_18,
                               st::mutable_c_string("%s"),"STGroupBoatC::Way3DGrpGetDistrPoint");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
LAB_004157e1:
  st::fn_006A5E90(st::pointer_boundary_cast<short *>(DAT_007f4d04));
  array = local_8;
LAB_004157f0:
  if (local_EBX_18 != 0) {
    st::fn_006AE110(array);
    local_8 = nullptr;
    st::fn_006A5E40
              (local_EBX_18,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Grpway3d.cpp"),
               0xeb8);
    return nullptr;
  }
  return st::pointer_boundary_cast<uint *>(&array->flags);
}

