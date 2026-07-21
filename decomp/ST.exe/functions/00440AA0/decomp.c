#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_AssignDocks
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00440AA9 MOVSX EAX,byte ptr [EBP + 0x8] */

uint * __thiscall
STAllPlayersC::_AssignDocks(STAllPlayersC *this,char param_1,DArrayTy *param_2,DArrayTy *param_3)

{
  dword dVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  STGameObjC *pSVar5;
  DArrayTy *pDVar6;
  uint *puVar7;
  undefined4 *puVar8;
  STFishC *pSVar9;
  Global_sub_00430750_param_1Enum GVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  DArrayTy *array;
  uint uVar14;
  short *psVar15;
  uint uVar16;
  STWorldObject *this_00;
  short *psVar17;
  undefined4 local_130 [13];
  short local_fc;
  short local_fa;
  short local_f8;
  int local_d0;
  InternalExceptionFrame local_c8;
  dword local_84;
  DArrayTy *local_80;
  int *local_7c;
  DArrayTy *local_78;
  int local_74;
  DArrayTy *local_70;
  DArrayTy *local_6c;
  int local_68;
  dword local_64;
  uint local_60;
  undefined4 local_5c;
  undefined2 uStack_58;
  DArrayTy *local_54;
  DArrayTy *local_50;
  short local_4c;
  undefined2 local_4a;
  dword local_48;
  DArrayTy *local_44;
  STAllPlayersC *local_40;
  short local_3c;
  undefined4 uStack_3a;
  undefined4 local_34;
  undefined2 uStack_30;
  uint local_2c;
  uint local_28;
  short local_22;
  uint local_20;
  uint local_1c;
  short local_16;
  short local_14;
  short local_12;
  DArrayTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;

  local_70 = (DArrayTy *)0x0;
  local_c8.previous = g_currentExceptionFrame;
  local_80 = g_playerRuntime[param_1].groups;
  g_currentExceptionFrame = &local_c8;
  local_40 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_c8.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_c8.previous;
    if (iVar4 != -0x5001fff7) {
      iVar11 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x234b,0,iVar4,
                                  &DAT_007a4ccc,s_STAllPlayersC___AssignDocks_007a8040);
      if (iVar11 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x234c);
    }
    return &local_70->flags;
  }
  if ((((param_2 == (DArrayTy *)0x0) || (param_3 == (DArrayTy *)0x0)) ||
      (uVar16 = param_2->count, local_20 = uVar16, uVar16 == 0)) ||
     (local_48 = param_3->count, local_48 == 0)) {
    uVar16 = local_20;
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x2215);
  }
  if ((local_80 == (DArrayTy *)0x0) || (local_84 = local_80->count, local_84 == 0)) {
    RaiseInternalException
              (-0x5001fff8,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x2216);
  }
  uVar14 = 0;
  if (0 < (int)uVar16) {
    do {
      DArrayGetElement(param_2,uVar14,&local_28);
      if ((short)local_28 == -1) {
LAB_00440bab:
        FUN_006b0c70(param_2,uVar14);
        uVar16 = uVar16 - 1;
        uVar14 = uVar14 - 1;
        local_20 = uVar16;
      }
      else {
        pSVar5 = GetObjPtr(local_40,param_1,local_28,CASE_1);
        iVar4 = (*pSVar5->vtable[1].vfunc_24)();
        if (iVar4 == 0) goto LAB_00440bab;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar16);
  }
  if (uVar16 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x221e);
  }
  uVar14 = 0;
  if (0 < (int)local_48) {
    do {
      DArrayGetElement(param_3,uVar14,&local_28);
      if ((short)local_28 == -1) {
LAB_00440c19:
        FUN_006b0c70(param_3,uVar14);
        local_48 = local_48 - 1;
        uVar14 = uVar14 - 1;
      }
      else {
        pSVar5 = GetObjPtr(local_40,param_1,local_28,CASE_1);
        iVar4 = (*pSVar5->vtable[1].vfunc_24)();
        if (iVar4 == 0) goto LAB_00440c19;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)local_48);
  }
  if (local_48 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x2225);
  }
  pDVar6 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar16,0xc,1);
  uVar14 = 0;
  local_44 = pDVar6;
  if (0 < (int)uVar16) {
    do {
      local_10 = (DArrayTy *)0x0;
      local_8 = (DArrayTy *)0x0;
      local_c = (DArrayTy *)0x0;
      Library::DKW::TBL::FUN_006ae140((uint *)pDVar6,uVar14,&local_10);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar16);
  }
  local_1c = 0;
  if (0 < (int)local_84) {
    do {
      uVar16 = local_1c;
      DArrayGetElement(local_80,local_1c,&local_7c);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if (((local_7c != (int *)0x0) && (iVar4 = (**(code **)(*local_7c + 0xc))(), iVar4 == 4)) &&
         (*(short *)((int)local_7c + 0x27) != 0)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_6c = *(DArrayTy **)((int)local_7c + 0x29);
        local_2c = 0;
        local_78 = (DArrayTy *)local_6c->count;
        if (0 < (int)local_78) {
          do {
            DArrayGetElement(local_6c,local_2c,&local_28);
            if ((short)local_28 != -1) {
              pSVar5 = GetObjPtr(local_40,param_1,local_28,CASE_1);
              if (pSVar5 == (STGameObjC *)0x0) {
                iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2239,0,0,
                                           &DAT_007a4ccc,s_STAllPlayersC___AssignDocks_inva_007a8064
                                          );
                if (iVar4 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                RaiseInternalException
                          (-0x5001fffc,g_overwriteContext_007ED77C,
                           s_E____titans_wlad_to_allpl_cpp_007a6004,0x223a);
              }
              if ((pSVar5->field_0020 == 0x14) &&
                 (iVar4 = thunk_FUN_0045ff10((int)pSVar5), iVar4 == 4)) {
                puVar8 = (undefined4 *)thunk_FUN_0048dcc0(pSVar5,local_130);
                psVar15 = &local_fc;
                for (iVar4 = 0xd; dVar1 = local_48, iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(undefined4 *)psVar15 = *puVar8;
                  puVar8 = puVar8 + 1;
                  psVar15 = psVar15 + 2;
                }
                if ((local_d0 != 6) && (local_d0 != 7)) {
                  uVar16 = 0;
                  if (0 < (int)local_48) {
                    do {
                      DArrayGetElement(param_3,uVar16,&local_22);
                      if ((short)local_28 == local_22) break;
                      uVar16 = uVar16 + 1;
                    } while ((int)uVar16 < (int)dVar1);
                  }
                  if ((int)dVar1 <= (int)uVar16) {
                    if ((((local_fc < 0) || (g_worldGrid.sizeX <= local_fc)) || (local_fa < 0)) ||
                       (((g_worldGrid.sizeY <= local_fa || (local_f8 < 0)) ||
                        (g_worldGrid.sizeZ <= local_f8)))) {
                      this_00 = (STWorldObject *)0x0;
                    }
                    else {
                      this_00 = g_worldGrid.cells
                                [(int)local_f8 * (int)g_worldGrid.planeStride +
                                 (int)local_fa * (int)g_worldGrid.sizeX + (int)local_fc].objects[0];
                    }
                    if (((this_00 != (STWorldObject *)0x0) &&
                        (this_00[1].vtable == (STWorldObjectVTable *)(int)param_1)) &&
                       ((iVar4 = (*this_00->vtable->GetObjectTypeId)(this_00), iVar4 == 0x33 &&
                        (iVar4 = (*this_00->vtable[5].slots_00_28[2])(), uVar16 = local_20,
                        iVar4 == 1)))) {
                      uVar14 = 0;
                      if (0 < (int)local_20) {
                        do {
                          DArrayGetElement(param_2,uVar14,&local_22);
                          if (local_22 == *(short *)&this_00[1].field_0xe) break;
                          uVar14 = uVar14 + 1;
                        } while ((int)uVar14 < (int)uVar16);
                      }
                      pDVar6 = local_44;
                      if (uVar14 != uVar16) {
                        DArrayGetElement(local_44,uVar14,&local_10);
                        if (local_10 == (DArrayTy *)0x0) {
                          local_10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
                          Library::DKW::TBL::FUN_006ae140(&pDVar6->flags,uVar14,&local_10);
                        }
                        local_3c = (short)local_28;
                        Library::DKW::TBL::FUN_006ae1c0(&local_10->flags,(undefined4 *)&local_3c);
                      }
                    }
                  }
                }
              }
            }
            local_2c = local_2c + 1;
            uVar16 = local_1c;
          } while ((int)local_2c < (int)local_78);
        }
      }
      local_1c = uVar16 + 1;
    } while ((int)local_1c < (int)local_84);
  }
  dVar1 = local_48;
  pDVar6 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_48,4,1);
  uVar16 = 0;
  local_78 = pDVar6;
  if (0 < (int)dVar1) {
    do {
      local_54 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_20,4,1);
      Library::DKW::TBL::FUN_006ae140((uint *)pDVar6,uVar16,&local_54);
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)dVar1);
  }
  local_1c = 0;
  if (0 < (int)local_20) {
    do {
      uVar16 = local_1c;
      DArrayGetElement(param_2,local_1c,&local_28);
      pSVar9 = (STFishC *)GetObjPtr(local_40,param_1,local_28,CASE_1);
      STFishC::sub_004162B0(pSVar9,&local_12,&local_14,&local_16);
      uVar14 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
      psVar15 = g_pathingGrid.cells;
      psVar17 = g_pathingScratchGrid.cells;
      for (uVar13 = (uVar14 & 0x7fffffff) >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)psVar17 = *(undefined4 *)psVar15;
        psVar15 = psVar15 + 2;
        psVar17 = psVar17 + 2;
      }
      for (uVar14 = uVar14 * 2 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(char *)psVar17 = (char)*psVar15;
        psVar15 = (short *)((int)psVar15 + 1);
        psVar17 = (short *)((int)psVar17 + 1);
      }
      FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY
                   ,(int)g_pathingGrid.sizeZ,(int)local_12,(int)local_14,(int)local_16,-1,-1,-1);
      DArrayGetElement(local_44,uVar16,&local_10);
      if (((local_10 != (DArrayTy *)0x0) && (local_64 = local_10->count, local_64 != 0)) &&
         (uVar16 = 0, 0 < (int)local_64)) {
        do {
          DArrayGetElement(local_10,uVar16,&local_3c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          pSVar9 = (STFishC *)
                   GetObjPtr(local_40,param_1,CONCAT22((undefined2)uStack_3a,local_3c),CASE_1);
          STFishC::sub_004162B0(pSVar9,&local_12,&local_14,&local_16);
          GVar10 = (*pSVar9->vtable->slot_2C)(pSVar9);
          bVar3 = thunk_FUN_00430750(GVar10);
          uStack_3a = ((g_pathingScratchGrid.cells
                        [(int)local_16 * (int)g_pathingGrid.planeStride +
                         (int)local_14 * (int)g_pathingGrid.sizeX + (int)local_12] * 0xc9 + -0xc9) /
                      3) / (int)(uint)bVar3;
          Library::DKW::TBL::FUN_006ae140(&local_10->flags,uVar16,(undefined4 *)&local_3c);
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_64);
      }
      uVar16 = 0;
      if (0 < (int)local_48) {
        do {
          DArrayGetElement(param_3,uVar16,&local_28);
          pSVar9 = (STFishC *)GetObjPtr(local_40,param_1,local_28,CASE_1);
          STFishC::sub_004162B0(pSVar9,&local_12,&local_14,&local_16);
          local_68 = (int)g_pathingScratchGrid.cells
                          [(int)local_16 * (int)g_pathingGrid.planeStride +
                           (int)local_14 * (int)g_pathingGrid.sizeX + (int)local_12];
          if (local_68 < 1) {
            local_68 = -1;
          }
          else {
            GVar10 = (*pSVar9->vtable->slot_2C)(pSVar9);
            bVar3 = thunk_FUN_00430750(GVar10);
            local_68 = ((local_68 * 0xc9 + -0xc9) / 3) / (int)(uint)bVar3;
          }
          DArrayGetElement(local_78,uVar16,&local_54);
          Library::DKW::TBL::FUN_006ae140(&local_54->flags,local_1c,&local_68);
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_48);
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)local_20);
  }
  local_1c = 0;
  uVar16 = local_20;
  pDVar6 = local_44;
  if (0 < (int)local_20) {
    do {
      DArrayGetElement(pDVar6,local_1c,&local_10);
      if ((local_10 != (DArrayTy *)0x0) && (local_64 = local_10->count, local_64 != 0)) {
        array = local_10;
        dVar1 = local_64;
        if (local_64 == 1) {
          DArrayGetElement(local_10,0,&local_3c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          pSVar5 = GetObjPtr(local_40,param_1,CONCAT22((undefined2)uStack_3a,local_3c),CASE_1);
          local_60 = thunk_FUN_00486b40((int)pSVar5);
          iVar4 = (*pSVar5->vtable->vfunc_78)();
          if (iVar4 < 1) {
            iVar4 = 1;
          }
          iVar11 = (*pSVar5->vtable->vfunc_2C)();
          local_c = (DArrayTy *)
                    ((int)(*(int *)(&DAT_007e049c + iVar11 * 4) * local_60) / iVar4 + uStack_3a);
          Library::DKW::TBL::FUN_006ae140(&pDVar6->flags,local_1c,&local_10);
          uVar16 = local_20;
        }
        else {
          while (dVar1 = dVar1 - 1, 0 < (int)dVar1) {
            uVar16 = 0;
            if (0 < (int)dVar1) {
              do {
                DArrayGetElement(array,uVar16,&local_34);
                uVar14 = uVar16 + 1;
                DArrayGetElement(local_10,uVar14,&local_5c);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                if (CONCAT22(uStack_58,local_5c._2_2_) < CONCAT22(uStack_30,local_34._2_2_)) {
                  Library::DKW::TBL::FUN_006ae140(&local_10->flags,uVar16,&local_5c);
                  Library::DKW::TBL::FUN_006ae140(&local_10->flags,uVar14,&local_34);
                }
                array = local_10;
                uVar16 = uVar14;
              } while ((int)uVar14 < (int)dVar1);
            }
          }
          DArrayGetElement(array,0,&local_34);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          pSVar5 = GetObjPtr(local_40,param_1,CONCAT22(local_34._2_2_,(undefined2)local_34),CASE_1);
          iVar4 = thunk_FUN_00486b40((int)pSVar5);
          iVar11 = (*pSVar5->vtable->vfunc_78)();
          if (iVar11 < 1) {
            iVar11 = 1;
          }
          iVar12 = (*pSVar5->vtable->vfunc_2C)();
          local_74 = (*(int *)(&DAT_007e049c + iVar12 * 4) * iVar4) / iVar11;
          iVar4 = 0;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_50 = (DArrayTy *)(CONCAT22(uStack_30,local_34._2_2_) + local_74);
          local_2c = 1;
          if (1 < (int)local_64) {
            do {
              DArrayGetElement(local_10,local_2c,&local_5c);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              pSVar5 = GetObjPtr(local_40,param_1,CONCAT22(local_5c._2_2_,(undefined2)local_5c),
                                 CASE_1);
              local_60 = thunk_FUN_00486b40((int)pSVar5);
              iVar11 = (*pSVar5->vtable->vfunc_78)();
              if (iVar11 < 1) {
                iVar11 = 1;
              }
              iVar12 = (*pSVar5->vtable->vfunc_2C)();
              iVar11 = (int)(*(int *)(&DAT_007e049c + iVar12 * 4) * local_60) / iVar11;
              local_50 = (DArrayTy *)((int)&local_50->flags + iVar11);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar4 = (iVar4 - CONCAT22(uStack_58,local_5c._2_2_)) +
                      CONCAT22(uStack_30,local_34._2_2_) + local_74;
              if (iVar4 < 1) {
                local_50 = (DArrayTy *)((int)local_50 - iVar4);
                iVar4 = 0;
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_34._2_2_ = local_5c._2_2_;
              uStack_30 = uStack_58;
              local_2c = local_2c + 1;
              local_74 = iVar11;
            } while ((int)local_2c < (int)local_64);
          }
          local_c = local_50;
          Library::DKW::TBL::FUN_006ae140(&local_44->flags,local_1c,&local_10);
          uVar16 = local_20;
          pDVar6 = local_44;
        }
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)uVar16);
  }
  local_1c = 0;
  if (0 < (int)local_48) {
    do {
      DArrayGetElement(param_3,local_1c,&local_3c);
      uVar14 = 0;
      if (0 < (int)uVar16) {
        do {
          DArrayGetElement(local_78,local_1c,&local_54);
          DArrayGetElement(local_54,uVar14,&uStack_3a);
          DArrayGetElement(pDVar6,uVar14,&local_10);
          if (uStack_3a == -1) {
            local_8 = (DArrayTy *)0x3b9aca00;
          }
          else {
            if (local_10 == (DArrayTy *)0x0) {
              local_10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
            }
            Library::DKW::TBL::FUN_006ae1c0(&local_10->flags,(undefined4 *)&local_3c);
            local_8 = (DArrayTy *)0x0;
          }
          Library::DKW::TBL::FUN_006ae140(&pDVar6->flags,uVar14,&local_10);
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar16);
      }
      local_2c = 0;
      if (0 < (int)uVar16) {
        do {
          DArrayGetElement(pDVar6,local_2c,&local_10);
          if (local_8 != (DArrayTy *)0x3b9aca00) {
            local_64 = local_10->count;
            dVar1 = local_64;
            if (local_64 == 1) {
              DArrayGetElement(local_10,0,&local_3c);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              pSVar5 = GetObjPtr(local_40,param_1,CONCAT22((undefined2)uStack_3a,local_3c),CASE_1);
              iVar4 = thunk_FUN_00486b40((int)pSVar5);
              iVar11 = (*pSVar5->vtable->vfunc_78)();
              if (iVar11 < 1) {
                iVar11 = 1;
              }
              iVar12 = (*pSVar5->vtable->vfunc_2C)();
              local_8 = (DArrayTy *)
                        ((*(int *)(&DAT_007e049c + iVar12 * 4) * iVar4) / iVar11 + uStack_3a);
            }
            else {
              while (dVar1 = dVar1 - 1, 0 < (int)dVar1) {
                uVar16 = 0;
                if (0 < (int)dVar1) {
                  do {
                    DArrayGetElement(local_10,uVar16,&local_34);
                    uVar14 = uVar16 + 1;
                    DArrayGetElement(local_10,uVar14,&local_5c);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    if (CONCAT22(uStack_58,local_5c._2_2_) < CONCAT22(uStack_30,local_34._2_2_)) {
                      Library::DKW::TBL::FUN_006ae140(&local_10->flags,uVar16,&local_5c);
                      Library::DKW::TBL::FUN_006ae140(&local_10->flags,uVar14,&local_34);
                    }
                    uVar16 = uVar14;
                  } while ((int)uVar14 < (int)dVar1);
                }
              }
              DArrayGetElement(local_10,0,&local_34);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              pSVar5 = GetObjPtr(local_40,param_1,CONCAT22(local_34._2_2_,(undefined2)local_34),
                                 CASE_1);
              iVar4 = thunk_FUN_00486b40((int)pSVar5);
              iVar11 = (*pSVar5->vtable->vfunc_78)();
              if (iVar11 < 1) {
                iVar11 = 1;
              }
              iVar12 = (*pSVar5->vtable->vfunc_2C)();
              local_74 = (*(int *)(&DAT_007e049c + iVar12 * 4) * iVar4) / iVar11;
              iVar4 = 0;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_50 = (DArrayTy *)(CONCAT22(uStack_30,local_34._2_2_) + local_74);
              local_6c = (DArrayTy *)0x1;
              if (1 < (int)local_64) {
                do {
                  DArrayGetElement(local_10,(uint)local_6c,&local_5c);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  pSVar5 = GetObjPtr(local_40,param_1,CONCAT22(local_5c._2_2_,(undefined2)local_5c),
                                     CASE_1);
                  local_60 = thunk_FUN_00486b40((int)pSVar5);
                  iVar11 = (*pSVar5->vtable->vfunc_78)();
                  if (iVar11 < 1) {
                    iVar11 = 1;
                  }
                  iVar12 = (*pSVar5->vtable->vfunc_2C)();
                  iVar11 = (int)(*(int *)(&DAT_007e049c + iVar12 * 4) * local_60) / iVar11;
                  local_50 = (DArrayTy *)((int)&local_50->flags + iVar11);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  iVar4 = (iVar4 - CONCAT22(uStack_58,local_5c._2_2_)) +
                          CONCAT22(uStack_30,local_34._2_2_) + local_74;
                  if (iVar4 < 1) {
                    local_50 = (DArrayTy *)((int)local_50 - iVar4);
                    iVar4 = 0;
                  }
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_34._2_2_ = local_5c._2_2_;
                  uStack_30 = uStack_58;
                  local_6c = (DArrayTy *)((int)&local_6c->flags + 1);
                  local_74 = iVar11;
                } while ((int)local_6c < (int)local_64);
              }
              local_8 = local_50;
            }
            Library::DKW::TBL::FUN_006ae140(&local_44->flags,local_2c,&local_10);
            uVar16 = local_20;
            pDVar6 = local_44;
          }
          local_2c = local_2c + 1;
        } while ((int)local_2c < (int)uVar16);
      }
      if (local_70 == (DArrayTy *)0x0) {
        local_70 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,4,1);
      }
      DArrayGetElement(param_3,local_1c,&local_4c);
      uVar14 = 0;
      if (0 < (int)uVar16) {
        do {
          DArrayGetElement(pDVar6,uVar14,&local_10);
          if (local_8 != (DArrayTy *)0x3b9aca00) break;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar16);
      }
      if (uVar14 == uVar16) {
        local_4a = 0xffff;
        Library::DKW::TBL::FUN_006ae1c0(&local_70->flags,(undefined4 *)&local_4c);
      }
      else if (uVar14 == uVar16 - 1) {
        DArrayGetElement(param_2,uVar14,&local_4a);
        Library::DKW::TBL::FUN_006ae1c0(&local_70->flags,(undefined4 *)&local_4c);
        local_c = local_8;
        Library::DKW::TBL::FUN_006ae140(&pDVar6->flags,uVar14,&local_10);
      }
      else {
        uVar16 = uVar14 + 1;
        local_6c = local_8;
        local_60 = uVar14;
        if ((int)uVar16 < (int)local_20) {
          do {
            DArrayGetElement(pDVar6,uVar16,&local_10);
            if ((local_8 != (DArrayTy *)0x3b9aca00) && ((int)local_8 < (int)local_6c)) {
              local_6c = local_8;
              uVar14 = uVar16;
            }
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < (int)local_20);
        }
        local_60 = uVar14;
        DArrayGetElement(param_2,uVar14,&local_4a);
        Library::DKW::TBL::FUN_006ae1c0(&local_70->flags,(undefined4 *)&local_4c);
        DArrayGetElement(pDVar6,uVar14,&local_10);
        local_c = local_8;
        Library::DKW::TBL::FUN_006ae140(&pDVar6->flags,uVar14,&local_10);
        local_2c = 0;
        if (0 < (int)local_20) {
          do {
            if (local_2c != uVar14) {
              DArrayGetElement(pDVar6,local_2c,&local_10);
              if (local_8 != (DArrayTy *)0x3b9aca00) {
                uVar16 = 0;
                dVar1 = local_10->count;
                if (0 < (int)dVar1) {
                  do {
                    DArrayGetElement(local_10,uVar16,&local_3c);
                    if (local_3c == local_4c) {
                      FUN_006b0c70(local_10,uVar16);
                      pDVar6 = local_44;
                      break;
                    }
                    uVar16 = uVar16 + 1;
                    pDVar6 = local_44;
                  } while ((int)uVar16 < (int)dVar1);
                }
              }
            }
            local_2c = local_2c + 1;
            uVar14 = local_60;
          } while ((int)local_2c < (int)local_20);
        }
      }
      local_1c = local_1c + 1;
      uVar16 = local_20;
    } while ((int)local_1c < (int)local_48);
  }
  uVar14 = 0;
  if (0 < (int)uVar16) {
    do {
      DArrayGetElement(pDVar6,uVar14,&local_10);
      if (local_10 != (DArrayTy *)0x0) {
        DArrayDestroy(local_10);
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar16);
  }
  DArrayDestroy(pDVar6);
  dVar1 = local_48;
  pDVar6 = local_78;
  uVar16 = 0;
  if (0 < (int)local_48) {
    do {
      DArrayGetElement(pDVar6,uVar16,&local_54);
      if (local_54 != (DArrayTy *)0x0) {
        DArrayDestroy(local_54);
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)dVar1);
  }
  DArrayDestroy(pDVar6);
  g_currentExceptionFrame = local_c8.previous;
  return &local_70->flags;
}

