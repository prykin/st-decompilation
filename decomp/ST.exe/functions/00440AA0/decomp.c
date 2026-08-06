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
  byte bVar3;
  int local_EAX_82;
  STGameObjC *pSVar4;
  int iVar5;
  DArrayTy *pDVar6;
  int iVar4;
  uint *puVar7;
  undefined4 *puVar8;
  Global_sub_00430750_param_1Enum GVar9;
  int iVar11;
  int local_EAX_2155;
  int local_EAX_2660;
  int local_EAX_2852;
  int iVar12;
  int iVar10;
  uint uVar13;
  DArrayTy *array;
  uint uVar14;
  short *psVar15_mg1;
  uint uVar15;
  short *psVar16;
  STWorldObject *this_00;
  undefined4 local_130 [13];
  short local_fc;
  short local_fa;
  short local_f8;
  int local_d0;
  InternalExceptionFrame local_c8;
  dword local_84;
  DArrayTy *local_80;
  AnonShape_00440AA0_D2D43F84 *local_7c;
  DArrayTy *local_78;
  int local_74;
  DArrayTy *local_70;
  DArrayTy *local_6c;
  int local_68;
  dword local_64;
  uint local_60;
  ushort local_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  DArrayTy *local_54;
  DArrayTy *local_50;
  ushort local_4c;
  undefined2 local_4a;
  dword local_48;
  DArrayTy *local_44;
  STAllPlayersC *local_40;
  ushort local_3c;
  undefined4 uStack_3a;
  ushort local_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  uint local_2c;
  ushort local_28 [3];
  ushort local_22;
  uint local_20;
  uint local_1c;
  short local_16;
  short local_14;
  short local_12;
  DArrayTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;
  short *psVar16_mg1;

  local_70 = nullptr;
  local_c8.previous = g_currentExceptionFrame;
  local_80 = (DArrayTy *)g_packedRecords_A62x8[param_1].field2_0x5;
  g_currentExceptionFrame = &local_c8;
  local_40 = this;
  local_EAX_82 = Library::MSVCRT::__setjmp3(local_c8.jumpBuffer,0);
  if (local_EAX_82 != 0) {
    g_currentExceptionFrame = local_c8.previous;
    if (local_EAX_82 != -0x5001fff7) {
      iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x234b,0,local_EAX_82,
                                  "%s","STAllPlayersC::_AssignDocks");
      if (iVar10 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(local_EAX_82,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x234c);
    }
    return &local_70->flags;
  }
  if ((((param_2 == nullptr) || (param_3 == nullptr)) ||
      (uVar15 = param_2->count, local_20 = uVar15, uVar15 == 0)) ||
     (local_48 = param_3->count, local_48 == 0)) {
    uVar15 = local_20;
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2215);
  }
  if ((local_80 == nullptr) || (local_84 = local_80->count, local_84 == 0)) {
    RaiseInternalException
              (-0x5001fff8,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2216);
  }
  uVar14 = 0;
  if (0 < (int)uVar15) {
    do {
      DArrayGetElement(param_2,uVar14,local_28);
      if ((ushort)STPiece<0,4>(local_28) == 0xffff) {
LAB_00440bab:
        DArrayRemoveAt(param_2,uVar14);
        uVar15 = uVar15 - 1;
        uVar14 = uVar14 - 1;
        local_20 = uVar15;
      }
      else {
        pSVar4 = GetObjPtr(local_40,param_1,(ushort)STPiece<0,4>(local_28),CASE_1);
        iVar5 = pSVar4->vfunc_F8();
        if (iVar5 == 0) goto LAB_00440bab;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar15);
  }
  if (uVar15 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x221e);
  }
  uVar14 = 0;
  if (0 < (int)local_48) {
    do {
      DArrayGetElement(param_3,uVar14,local_28);
      if ((ushort)STPiece<0,4>(local_28) == 0xffff) {
LAB_00440c19:
        DArrayRemoveAt(param_3,uVar14);
        local_48 = local_48 - 1;
        uVar14 = uVar14 - 1;
      }
      else {
        pSVar4 = GetObjPtr(local_40,param_1,(ushort)STPiece<0,4>(local_28),CASE_1);
        iVar5 = pSVar4->vfunc_F8();
        if (iVar5 == 0) goto LAB_00440c19;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)local_48);
  }
  if (local_48 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2225);
  }
  pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,uVar15,0xc,1);
  uVar14 = 0;
  local_44 = pDVar6;
  if (0 < (int)uVar15) {
    do {
      local_10 = nullptr;
      local_8 = nullptr;
      local_c = nullptr;
      Library::DKW::TBL::DArrayPut(pDVar6,uVar14,&local_10);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar15);
  }
  local_1c = 0;
  if (0 < (int)local_84) {
    do {
      uVar15 = local_1c;
      DArrayGetElement(local_80,local_1c,&local_7c);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if (((local_7c != nullptr) &&
          (iVar5 = (**(code **)(*(int *)local_7c + 0xc))(), iVar5 == 4)) &&
         (local_7c->field_0027 != 0)) {
        local_6c = local_7c->field_0029;
        local_2c = 0;
        local_78 = (DArrayTy *)local_6c->count;
        if (0 < (int)local_78) {
          do {
            DArrayGetElement(local_6c,local_2c,local_28);
            if ((ushort)STPiece<0,4>(local_28) != 0xffff) {
              pSVar4 = GetObjPtr(local_40,param_1,(ushort)STPiece<0,4>(local_28),CASE_1);
              if (pSVar4 == nullptr) {
                iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2239,0,0,
                                           "%s","STAllPlayersC::_AssignDocks invalid pointer"
                                          );
                if (iVar4 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                RaiseInternalException
                          (-0x5001fffc,g_overwriteContext_007ED77C,
                           "E:\\__titans\\wlad\\to_allpl.cpp",0x223a);
              }
              if ((pSVar4->field_0020 == 0x14) && (iVar5 = thunk_FUN_0045ff10(pSVar4), iVar5 == 4))
              {
                puVar8 = (undefined4 *)thunk_FUN_0048dcc0(pSVar4,local_130);
                psVar16 = &local_fc;
                for (iVar5 = 0xd; dVar1 = local_48, iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)psVar16 = *puVar8;
                  puVar8 = puVar8 + 1;
                  psVar16 = psVar16 + 2;
                }
                if ((local_d0 != 6) && (local_d0 != 7)) {
                  uVar15 = 0;
                  if (0 < (int)local_48) {
                    do {
                      DArrayGetElement(param_3,uVar15,&local_22);
                      if (local_28[0] == local_22) break;
                      uVar15 = uVar15 + 1;
                    } while ((int)uVar15 < (int)dVar1);
                  }
                  if ((int)dVar1 <= (int)uVar15) {
                    if ((((local_fc < 0) || (g_worldGrid.sizeX <= local_fc)) || (local_fa < 0)) ||
                       (((g_worldGrid.sizeY <= local_fa || (local_f8 < 0)) ||
                        (g_worldGrid.sizeZ <= local_f8)))) {
                      this_00 = nullptr;
                    }
                    else {
                      this_00 = STGridAt3D(g_worldGrid, local_fc, local_fa, local_f8).objects[0];
                    }
                    if (((this_00 != nullptr) &&
                        (this_00[1].vtable == (STWorldObjectVTable *)(int)param_1)) &&
                       ((iVar5 = this_00->GetObjectTypeId(), iVar5 == 0x33 &&
                        (iVar5 = (*this_00->vtable[5].slots_00_28[2])(), uVar15 = local_20,
                        iVar5 == 1)))) {
                      uVar14 = 0;
                      if (0 < (int)local_20) {
                        do {
                          DArrayGetElement(param_2,uVar14,&local_22);
                          if (local_22 == *(ushort *)&this_00[1].field_0xe) break;
                          uVar14 = uVar14 + 1;
                        } while ((int)uVar14 < (int)uVar15);
                      }
                      pDVar6 = local_44;
                      if (uVar14 != uVar15) {
                        DArrayGetElement(local_44,uVar14,&local_10);
                        if (local_10 == nullptr) {
                          local_10 = Library::DKW::TBL::DArrayCreate(nullptr,1,6,1);
                          Library::DKW::TBL::DArrayPut(pDVar6,uVar14,&local_10);
                        }
                        local_3c = local_28[0];
                        Library::DKW::TBL::DArrayAppend(local_10,&local_3c);
                      }
                    }
                  }
                }
              }
            }
            local_2c = local_2c + 1;
            uVar15 = local_1c;
          } while ((int)local_2c < (int)local_78);
        }
      }
      local_1c = uVar15 + 1;
    } while ((int)local_1c < (int)local_84);
  }
  dVar1 = local_48;
  pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,local_48,4,1);
  uVar15 = 0;
  local_78 = pDVar6;
  if (0 < (int)dVar1) {
    do {
      local_54 = Library::DKW::TBL::DArrayCreate(nullptr,local_20,4,1);
      Library::DKW::TBL::DArrayPut(pDVar6,uVar15,&local_54);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)dVar1);
  }
  local_1c = 0;
  if (0 < (int)local_20) {
    do {
      uVar15 = local_1c;
      DArrayGetElement(param_2,local_1c,local_28);
      pSVar4 = GetObjPtr(local_40,param_1,(ushort)STPiece<0,4>(local_28),CASE_1);
      STFishC::sub_004162B0((STFishC *)pSVar4,&local_12,&local_14,&local_16);
      uVar14 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
      psVar15_mg1 = g_pathingGrid.cells;
      psVar16_mg1 = g_pathingScratchGrid.cells;
      for (uVar13 = (uVar14 & 0x7fffffff) >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)psVar16_mg1 = *(undefined4 *)psVar15_mg1;
        psVar15_mg1 = psVar15_mg1 + 2;
        psVar16_mg1 = psVar16_mg1 + 2;
      }
      for (uVar14 = uVar14 * 2 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(char *)psVar16_mg1 = (char)*psVar15_mg1;
        psVar15_mg1 = (short *)((int)psVar15_mg1 + 1);
        psVar16_mg1 = (short *)((int)psVar16_mg1 + 1);
      }
      FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY
                   ,(int)g_pathingGrid.sizeZ,(int)local_12,(int)local_14,(int)local_16,-1,-1,-1);
      DArrayGetElement(local_44,uVar15,&local_10);
      if (((local_10 != nullptr) && (local_64 = local_10->count, local_64 != 0)) &&
         (uVar15 = 0, 0 < (int)local_64)) {
        do {
          DArrayGetElement(local_10,uVar15,&local_3c);
          pSVar4 = GetObjPtr(local_40,param_1,local_3c,CASE_1);
          STFishC::sub_004162B0((STFishC *)pSVar4,&local_12,&local_14,&local_16);
          GVar9 = (*pSVar4->vtable->vfunc_2C)();
          bVar3 = thunk_FUN_00430750(GVar9);
          uStack_3a = ((g_pathingScratchGrid.cells
                        [(int)local_16 * (int)g_pathingGrid.planeStride +
                         (int)local_14 * (int)g_pathingGrid.sizeX + (int)local_12] * 0xc9 + -0xc9) /
                      3) / (int)(uint)bVar3;
          Library::DKW::TBL::DArrayPut(local_10,uVar15,&local_3c);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_64);
      }
      uVar15 = 0;
      if (0 < (int)local_48) {
        do {
          DArrayGetElement(param_3,uVar15,local_28);
          pSVar4 = GetObjPtr(local_40,param_1,(ushort)STPiece<0,4>(local_28),CASE_1);
          STFishC::sub_004162B0((STFishC *)pSVar4,&local_12,&local_14,&local_16);
          local_68 = (int)g_pathingScratchGrid.cells
                          [(int)local_16 * (int)g_pathingGrid.planeStride +
                           (int)local_14 * (int)g_pathingGrid.sizeX + (int)local_12];
          if (local_68 < 1) {
            local_68 = -1;
          }
          else {
            GVar9 = (*pSVar4->vtable->vfunc_2C)();
            bVar3 = thunk_FUN_00430750(GVar9);
            local_68 = ((local_68 * 0xc9 + -0xc9) / 3) / (int)(uint)bVar3;
          }
          DArrayGetElement(local_78,uVar15,&local_54);
          Library::DKW::TBL::DArrayPut(local_54,local_1c,&local_68);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_48);
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)local_20);
  }
  local_1c = 0;
  uVar15 = local_20;
  pDVar6 = local_44;
  if (0 < (int)local_20) {
    do {
      DArrayGetElement(pDVar6,local_1c,&local_10);
      if ((local_10 != nullptr) && (local_64 = local_10->count, local_64 != 0)) {
        array = local_10;
        dVar1 = local_64;
        if (local_64 == 1) {
          DArrayGetElement(local_10,0,&local_3c);
          pSVar4 = GetObjPtr(local_40,param_1,local_3c,CASE_1);
          local_60 = thunk_FUN_00486b40(pSVar4);
          iVar5 = (*pSVar4->vtable->vfunc_78)();
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          iVar11 = (*pSVar4->vtable->vfunc_2C)();
          local_c = (DArrayTy *)
                    ((int)(*(int *)(&DAT_007e049c + iVar11 * 4) * local_60) / iVar5 + uStack_3a);
          Library::DKW::TBL::DArrayPut(pDVar6,local_1c,&local_10);
          uVar15 = local_20;
        }
        else {
          while (dVar1 = dVar1 - 1, 0 < (int)dVar1) {
            uVar15 = 0;
            if (0 < (int)dVar1) {
              do {
                DArrayGetElement(array,uVar15,&local_34);
                uVar14 = uVar15 + 1;
                DArrayGetElement(local_10,uVar14,&local_5c);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                if (CONCAT22(uStack_58,uStack_5a) < CONCAT22(uStack_30,uStack_32)) {
                  Library::DKW::TBL::DArrayPut(local_10,uVar15,&local_5c);
                  Library::DKW::TBL::DArrayPut(local_10,uVar14,&local_34);
                }
                array = local_10;
                uVar15 = uVar14;
              } while ((int)uVar14 < (int)dVar1);
            }
          }
          DArrayGetElement(array,0,&local_34);
          pSVar4 = GetObjPtr(local_40,param_1,local_34,CASE_1);
          local_EAX_2155 = thunk_FUN_00486b40(pSVar4);
          iVar5 = (*pSVar4->vtable->vfunc_78)();
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          iVar11 = (*pSVar4->vtable->vfunc_2C)();
          local_74 = (*(int *)(&DAT_007e049c + iVar11 * 4) * local_EAX_2155) / iVar5;
          iVar5 = 0;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_50 = (DArrayTy *)(CONCAT22(uStack_30,uStack_32) + local_74);
          local_2c = 1;
          if (1 < (int)local_64) {
            do {
              DArrayGetElement(local_10,local_2c,&local_5c);
              pSVar4 = GetObjPtr(local_40,param_1,local_5c,CASE_1);
              local_60 = thunk_FUN_00486b40(pSVar4);
              iVar11 = (*pSVar4->vtable->vfunc_78)();
              if (iVar11 < 1) {
                iVar11 = 1;
              }
              iVar12 = (*pSVar4->vtable->vfunc_2C)();
              iVar11 = (int)(*(int *)(&DAT_007e049c + iVar12 * 4) * local_60) / iVar11;
              local_50 = (DArrayTy *)((int)&local_50->flags + iVar11);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar5 = (iVar5 - CONCAT22(uStack_58,uStack_5a)) + CONCAT22(uStack_30,uStack_32) +
                      local_74;
              if (iVar5 < 1) {
                local_50 = (DArrayTy *)((int)local_50 - iVar5);
                iVar5 = 0;
              }
              uStack_32 = uStack_5a;
              uStack_30 = uStack_58;
              local_2c = local_2c + 1;
              local_74 = iVar11;
            } while ((int)local_2c < (int)local_64);
          }
          local_c = local_50;
          Library::DKW::TBL::DArrayPut(local_44,local_1c,&local_10);
          uVar15 = local_20;
          pDVar6 = local_44;
        }
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)uVar15);
  }
  local_1c = 0;
  if (0 < (int)local_48) {
    do {
      DArrayGetElement(param_3,local_1c,&local_3c);
      uVar14 = 0;
      if (0 < (int)uVar15) {
        do {
          DArrayGetElement(local_78,local_1c,&local_54);
          DArrayGetElement(local_54,uVar14,&uStack_3a);
          DArrayGetElement(pDVar6,uVar14,&local_10);
          if (uStack_3a == -1) {
            local_8 = (DArrayTy *)0x3b9aca00;
          }
          else {
            if (local_10 == nullptr) {
              local_10 = Library::DKW::TBL::DArrayCreate(nullptr,1,6,1);
            }
            Library::DKW::TBL::DArrayAppend(local_10,&local_3c);
            local_8 = nullptr;
          }
          Library::DKW::TBL::DArrayPut(pDVar6,uVar14,&local_10);
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar15);
      }
      local_2c = 0;
      if (0 < (int)uVar15) {
        do {
          DArrayGetElement(pDVar6,local_2c,&local_10);
          if (local_8 != (DArrayTy *)0x3b9aca00) {
            local_64 = local_10->count;
            dVar1 = local_64;
            if (local_64 == 1) {
              DArrayGetElement(local_10,0,&local_3c);
              pSVar4 = GetObjPtr(local_40,param_1,local_3c,CASE_1);
              local_EAX_2660 = thunk_FUN_00486b40(pSVar4);
              iVar5 = (*pSVar4->vtable->vfunc_78)();
              if (iVar5 < 1) {
                iVar5 = 1;
              }
              iVar11 = (*pSVar4->vtable->vfunc_2C)();
              local_8 = (DArrayTy *)
                        ((*(int *)(&DAT_007e049c + iVar11 * 4) * local_EAX_2660) / iVar5 + uStack_3a
                        );
            }
            else {
              while (dVar1 = dVar1 - 1, 0 < (int)dVar1) {
                uVar15 = 0;
                if (0 < (int)dVar1) {
                  do {
                    DArrayGetElement(local_10,uVar15,&local_34);
                    uVar14 = uVar15 + 1;
                    DArrayGetElement(local_10,uVar14,&local_5c);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    if (CONCAT22(uStack_58,uStack_5a) < CONCAT22(uStack_30,uStack_32)) {
                      Library::DKW::TBL::DArrayPut(local_10,uVar15,&local_5c);
                      Library::DKW::TBL::DArrayPut(local_10,uVar14,&local_34);
                    }
                    uVar15 = uVar14;
                  } while ((int)uVar14 < (int)dVar1);
                }
              }
              DArrayGetElement(local_10,0,&local_34);
              pSVar4 = GetObjPtr(local_40,param_1,local_34,CASE_1);
              local_EAX_2852 = thunk_FUN_00486b40(pSVar4);
              iVar5 = (*pSVar4->vtable->vfunc_78)();
              if (iVar5 < 1) {
                iVar5 = 1;
              }
              iVar11 = (*pSVar4->vtable->vfunc_2C)();
              local_74 = (*(int *)(&DAT_007e049c + iVar11 * 4) * local_EAX_2852) / iVar5;
              iVar5 = 0;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_50 = (DArrayTy *)(CONCAT22(uStack_30,uStack_32) + local_74);
              local_6c = (DArrayTy *)0x1;
              if (1 < (int)local_64) {
                do {
                  DArrayGetElement(local_10,(uint)local_6c,&local_5c);
                  pSVar4 = GetObjPtr(local_40,param_1,local_5c,CASE_1);
                  local_60 = thunk_FUN_00486b40(pSVar4);
                  iVar11 = (*pSVar4->vtable->vfunc_78)();
                  if (iVar11 < 1) {
                    iVar11 = 1;
                  }
                  iVar12 = (*pSVar4->vtable->vfunc_2C)();
                  iVar11 = (int)(*(int *)(&DAT_007e049c + iVar12 * 4) * local_60) / iVar11;
                  local_50 = (DArrayTy *)((int)&local_50->flags + iVar11);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  iVar5 = (iVar5 - CONCAT22(uStack_58,uStack_5a)) + CONCAT22(uStack_30,uStack_32) +
                          local_74;
                  if (iVar5 < 1) {
                    local_50 = (DArrayTy *)((int)local_50 - iVar5);
                    iVar5 = 0;
                  }
                  uStack_32 = uStack_5a;
                  uStack_30 = uStack_58;
                  local_6c = (DArrayTy *)((int)&local_6c->flags + 1);
                  local_74 = iVar11;
                } while ((int)local_6c < (int)local_64);
              }
              local_8 = local_50;
            }
            Library::DKW::TBL::DArrayPut(local_44,local_2c,&local_10);
            uVar15 = local_20;
            pDVar6 = local_44;
          }
          local_2c = local_2c + 1;
        } while ((int)local_2c < (int)uVar15);
      }
      if (local_70 == nullptr) {
        local_70 = Library::DKW::TBL::DArrayCreate(nullptr,0,4,1);
      }
      DArrayGetElement(param_3,local_1c,&local_4c);
      uVar14 = 0;
      if (0 < (int)uVar15) {
        do {
          DArrayGetElement(pDVar6,uVar14,&local_10);
          if (local_8 != (DArrayTy *)0x3b9aca00) break;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar15);
      }
      if (uVar14 == uVar15) {
        local_4a = 0xffff;
        Library::DKW::TBL::DArrayAppend(local_70,&local_4c);
      }
      else if (uVar14 == uVar15 - 1) {
        DArrayGetElement(param_2,uVar14,&local_4a);
        Library::DKW::TBL::DArrayAppend(local_70,&local_4c);
        local_c = local_8;
        Library::DKW::TBL::DArrayPut(pDVar6,uVar14,&local_10);
      }
      else {
        uVar15 = uVar14 + 1;
        local_6c = local_8;
        local_60 = uVar14;
        if ((int)uVar15 < (int)local_20) {
          do {
            DArrayGetElement(pDVar6,uVar15,&local_10);
            if ((local_8 != (DArrayTy *)0x3b9aca00) && ((int)local_8 < (int)local_6c)) {
              local_6c = local_8;
              uVar14 = uVar15;
            }
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)local_20);
        }
        local_60 = uVar14;
        DArrayGetElement(param_2,uVar14,&local_4a);
        Library::DKW::TBL::DArrayAppend(local_70,&local_4c);
        DArrayGetElement(pDVar6,uVar14,&local_10);
        local_c = local_8;
        Library::DKW::TBL::DArrayPut(pDVar6,uVar14,&local_10);
        local_2c = 0;
        if (0 < (int)local_20) {
          do {
            if (local_2c != uVar14) {
              DArrayGetElement(pDVar6,local_2c,&local_10);
              if (local_8 != (DArrayTy *)0x3b9aca00) {
                uVar15 = 0;
                dVar1 = local_10->count;
                if (0 < (int)dVar1) {
                  do {
                    DArrayGetElement(local_10,uVar15,&local_3c);
                    if (local_3c == local_4c) {
                      DArrayRemoveAt(local_10,uVar15);
                      pDVar6 = local_44;
                      break;
                    }
                    uVar15 = uVar15 + 1;
                    pDVar6 = local_44;
                  } while ((int)uVar15 < (int)dVar1);
                }
              }
            }
            local_2c = local_2c + 1;
            uVar14 = local_60;
          } while ((int)local_2c < (int)local_20);
        }
      }
      local_1c = local_1c + 1;
      uVar15 = local_20;
    } while ((int)local_1c < (int)local_48);
  }
  uVar14 = 0;
  if (0 < (int)uVar15) {
    do {
      DArrayGetElement(pDVar6,uVar14,&local_10);
      if (local_10 != nullptr) {
        DArrayDestroy(local_10);
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar15);
  }
  DArrayDestroy(pDVar6);
  dVar1 = local_48;
  pDVar6 = local_78;
  uVar15 = 0;
  if (0 < (int)local_48) {
    do {
      DArrayGetElement(pDVar6,uVar15,&local_54);
      if (local_54 != nullptr) {
        DArrayDestroy(local_54);
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)dVar1);
  }
  DArrayDestroy(pDVar6);
  g_currentExceptionFrame = local_c8.previous;
  return &local_70->flags;
}

