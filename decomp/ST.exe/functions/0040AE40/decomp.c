#include "../../pseudocode_runtime.h"


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

int __thiscall FUN_0040ae40(void *this,uint param_1,char param_2)

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
  pSVar5_mg0 = thunk_FUN_00423e70(this,(ushort)param_1);
  if (pSVar5_mg0 == nullptr) {
    return -4;
  }
  local_48 = pSVar5_mg0;
  FreeAndNull(&pSVar5_mg0->field_009F);
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
  local_3c = FUN_006aadd0((int)sVar1,(int)sVar2,(int)sVar3,iVar8,iVar9,iVar11);
  if (local_3c <= pSVar5_mg0->field_00B7) {
    return 0;
  }
  local_2c = nullptr;
  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  local_EAX_318 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
  pSVar5 = local_48;
  if (local_EAX_318 != 0) {
    g_currentExceptionFrame = local_90.previous;
    FUN_006a5e90(local_2c);
    RaiseInternalException(local_EAX_318,0,"E:\\__titans\\wlad\\Grpway3d.cpp",0x113);
    return local_EAX_318;
  }
  local_40 = (short *)0x3;
  if (local_3c != 1) goto LAB_0040b56a;
  local_8 = local_48->field_00C3;
  local_c = local_48->field_00BF;
  iVar9 = local_8 * g_pathingGrid.planeStride;
  iVar8 = local_c * g_pathingGrid.sizeX;
  if (g_pathingGrid.cells[local_48->field_00BB + iVar8 + iVar9] < 0) {
    psVar6 = Library::DKW::LIB::MemAlloc(0x90);
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
                      thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)local_48,iVar11,
                                         (int)local_48->field_0049,local_8), local_EAX_679 != 0)) &&
               ((STGridAt3D(g_pathingGrid, pSVar5->field_0047, pSVar5->field_00BF, pSVar5->field_004B) & 0xc000U) != 0xc000)) &&
              (local_EAX_775 =
                    thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,
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
                 thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)local_48,iVar11,iVar12,iVar9
                                   ), local_EAX_884 != 0)) {
          if (((STGridAt3D(g_pathingGrid, pSVar5->field_00BB, pSVar5->field_0049, pSVar5->field_004B) &
               0xc000U) != 0xc000) &&
             (local_EAX_976 =
                   thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,pSVar5->field_00BB,
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
               (iVar6 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)local_48,iVar11,
                                           local_c,iVar9), iVar6 != 0)) &&
              ((STGridAt3D(g_pathingGrid, pSVar5->field_00BB, pSVar5->field_0049, pSVar5->field_004B) &
               0xc000U) != 0xc000)) &&
             (((local_EAX_1206 =
                     thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,
                                        pSVar5->field_00BB,(int)pSVar5->field_0049,
                                        (int)pSVar5->field_004B), local_EAX_1206 != 0 &&
               ((STGridAt3D(g_pathingGrid, pSVar5->field_00BB, pSVar5->field_00BF, pSVar5->field_004B) &
                0xc000U) != 0xc000)) &&
              ((local_EAX_1305 =
                     thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,
                                        pSVar5->field_00BB,pSVar5->field_00BF,
                                        (int)pSVar5->field_004B), local_EAX_1305 != 0 &&
               (((STGridAt3D(g_pathingGrid, pSVar5->field_0047, pSVar5->field_00BF, pSVar5->field_00C3) &
                 0xc000U) != 0xc000 &&
                (local_EAX_1402 =
                      thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,
                                         (int)pSVar5->field_0047,pSVar5->field_00BF,
                                         pSVar5->field_00C3), local_EAX_1402 != 0)))))))) &&
            ((STGridAt3D(g_pathingGrid, pSVar5->field_00BB, pSVar5->field_0049, pSVar5->field_00C3) & 0xc000U)
             != 0xc000)) &&
           ((local_EAX_1497 =
                  thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,pSVar5->field_00BB,
                                     (int)pSVar5->field_0049,pSVar5->field_00C3),
            local_EAX_1497 != 0 &&
            ((STGridAt3D(g_pathingGrid, pSVar5->field_0047, pSVar5->field_0049, pSVar5->field_00C3) &
             0xc000U) != 0xc000)))) {
          local_EAX_1584 =
               thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,(int)pSVar5->field_0047
                                  ,(int)pSVar5->field_0049,pSVar5->field_00C3);
          psVar6 = (short *)0x1;
          if (local_EAX_1584 != 0) goto LAB_0040b481;
        }
      }
      psVar6 = local_10;
    }
LAB_0040b481:
    if (psVar6 == nullptr) goto LAB_0040b56a;
    psVar6 = Library::DKW::LIB::MemAlloc(0x90);
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
    pSVar5->field_009F[0x24] = (short)pSVar5->field_00BB;
    pSVar5->field_009F[0x25] = (short)pSVar5->field_00BF;
    pSVar5->field_009F[0x26] = (short)pSVar5->field_00C3;
    pSVar5->field_009F[0x27] = 0;
  }
  pSVar5->field_00A3 = 2;
LAB_0040b56a:
  if (pSVar5->field_009F == nullptr) {
    local_EAX_1884 =
         FUN_006a62e0((int)pSVar5->field_0047,(int)pSVar5->field_0049,(int)pSVar5->field_004B,
                      pSVar5->field_00BB,pSVar5->field_00BF,pSVar5->field_00C3);
    pSVar5->field_00AF = local_EAX_1884;
    local_28 = Library::DKW::LIB::MemAllocClear(0x2ae);
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
                iVar10 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar5,
                                            pSVar5->field_0047 + iVar8,
                                            (int)pSVar5->field_0049 + local_24,
                                            pSVar5->field_004B + local_1c);
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
      FreeAndNull(&local_28);
      psVar6 = nullptr;
    }
    local_24 = 0;
    if (param_2 != '\0') {
      local_24 = 4;
    }
    local_24 = local_24 | 1;
    psVar7 = Library::DKW::WAY::FUN_006a9190
                       ((int)g_pathingGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                        (int)g_pathingGrid.sizeZ,(short *)(int)pSVar5->field_0047,
                        (short *)(int)pSVar5->field_0049,(short *)(int)pSVar5->field_004B,
                        (short *)pSVar5->field_00BB,(short *)pSVar5->field_00BF,
                        (short *)pSVar5->field_00C3,pSVar5->field_00B7,&pSVar5->field_00A3,local_28,
                        psVar6,local_24);
    pSVar5->field_009F = psVar7;
    if (psVar7 == nullptr) {
      int scalar_psVar13 = (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX; /* split integer lifetime from pointer-typed SSA storage */
      int scalar_local_40 = scalar_psVar13;
      local_2c = Library::DKW::LIB::MemAlloc((int)g_pathingGrid.sizeZ * scalar_psVar13 * 2);
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
          local_10 = local_2c +
                     ((int)pSVar5->field_0049 + local_44) * (int)g_pathingGrid.sizeX +
                     (pSVar5->field_004B + local_1c) * scalar_local_40 + (int)pSVar5->field_0047;
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
           Library::DKW::WAY::FUN_006a8270
                     ((int)local_2c,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                      (undefined4 *)(int)g_pathingGrid.sizeZ,(short *)(int)pSVar5->field_0047,
                      (short *)(int)pSVar5->field_0049,(short *)(int)pSVar5->field_004B,
                      (short *)pSVar5->field_00BB,(short *)pSVar5->field_00BF,
                      (short *)pSVar5->field_00C3,pSVar5->field_00B7,&pSVar5->field_00A3,local_24);
      pSVar5->field_009F = local_EAX_2797;
    }
    FreeAndNull(&local_28);
  }
  g_currentExceptionFrame = local_90.previous;
  FUN_006a5e90(local_2c);
  if (pSVar5->field_009F == nullptr) {
    return -4;
  }
  return 0;
}

