#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\scoreai.cpp
   Diagnostic line evidence: 3839 | 3855 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * AiMinesDistribTgts(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                         uint param_7)

{
  byte bVar1;
  byte bVar2;
  dword dVar3;
  DArrayTy *pDVar5;
  int iVar5;
  byte *pbVar6;
  DArrayTy *pDVar6_mg1;
  int local_EAX_2465;
  int iVar14;
  int iVar11;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar15;
  byte *pbVar16;
  dword dVar17;
  int iVar18;
  bool bVar19;
  InternalExceptionFrame local_d8;
  dword local_94 [10];
  byte local_6c;
  undefined3 uStack_6b;
  int local_68;
  int local_64;
  int local_60;
  short *local_5c;
  DArrayTy *local_58;
  short *local_54;
  DArrayTy *local_50;
  int local_4c;
  void *local_48;
  int local_44;
  short local_40;
  short local_3e;
  undefined2 local_3c;
  int local_38;
  DArrayTy *local_34;
  int local_30;
  dword *local_2c;
  int local_28;
  DArrayTy *local_24;
  DArrayTy *local_20;
  DArrayTy *local_1c;
  DArrayTy *local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;

  local_94[5] = 0;
  local_94[0] = 0;
  local_94[6] = 0;
  local_94[1] = 0;
  local_94[7] = 0;
  local_94[2] = 0;
  local_94[8] = 0;
  local_94[3] = 0;
  local_94[9] = 0;
  local_94[4] = 0;
  local_24 = nullptr;
  local_48 = nullptr;
  local_14 = nullptr;
  local_60 = 0;
  local_d8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d8;
  iVar5 = Library::MSVCRT::__setjmp3(local_d8.jumpBuffer,0);
  if (iVar5 == 0) {
    local_14 = FUN_00561240(param_4,param_5,param_6);
    iVar10 = local_14[2];
    iVar15 = local_14[4] + 2;
    iVar18 = iVar10 + 2;
    iVar13 = iVar15 * iVar18;
    local_28 = iVar15;
    local_c = iVar18;
    local_48 = Library::DKW::LIB::MemAllocClear(iVar13 * 7);
    local_20 = nullptr;
    local_2c = nullptr;
    local_30 = local_14[1] + -1 + param_2;
    if (local_30 < 0) {
      local_20 = (DArrayTy *)-local_30;
      local_c = local_30 + iVar18;
      local_30 = 0;
    }
    iVar8 = local_14[2] + local_14[1] + param_2;
    if (g_pathingGrid.sizeX <= iVar8) {
      local_c = local_c + -1 + (g_pathingGrid.sizeX - iVar8);
    }
    iVar8 = local_14[3] + -1 + param_3;
    local_44 = iVar8;
    if (iVar8 < 0) {
      local_44 = 0;
      local_2c = (dword *)-iVar8;
      iVar15 = iVar15 + iVar8;
      local_28 = iVar15;
    }
    iVar8 = local_14[4] + local_14[3] + param_3;
    if (g_pathingGrid.sizeY <= iVar8) {
      iVar15 = iVar15 + -1 + (g_pathingGrid.sizeY - iVar8);
      local_28 = iVar15;
    }
    local_34 = (DArrayTy *)((int)local_48 + (int)local_2c * iVar18 + (int)local_20 + iVar13);
    local_10 = 0;
    pDVar5 = local_34;
    if (0 < iVar15) {
      do {
        local_18 = pDVar5;
        local_54 = g_pathingGrid.cells + (int)g_pathingGrid.sizeX * (local_44 + local_10) + local_30
        ;
        local_1c = (DArrayTy *)
                   (g_worldGrid.cells + (int)g_worldGrid.sizeX * (local_44 + local_10) + local_30);
        local_8 = 0;
        if (0 < local_c) {
          do {
            local_5c = local_54;
            pbVar16 = (byte *)((int)&local_18->flags + local_8);
            local_68 = -1 - iVar13;
            local_64 = 1 - iVar13;
            local_38 = 5;
            local_4c = iVar18 - iVar13;
            local_50 = local_1c;
            do {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if ((local_50->iteratorIndex != 0) &&
                 (*(int *)(local_50->iteratorIndex + 0x20) == 0x1ae)) {
                if (0 < local_10) {
                  if (0 < local_8) {
                    pbVar16[(-iVar18 - iVar13) + -1] = pbVar16[(-iVar18 - iVar13) + -1] | 2;
                    pbVar16[-1 - iVar18] = pbVar16[-1 - iVar18] | 2;
                    pbVar16[iVar13 + (-1 - iVar18)] = pbVar16[iVar13 + (-1 - iVar18)] | 2;
                  }
                  pbVar9 = pbVar16 + (-iVar18 - iVar13);
                  *pbVar9 = *pbVar9 | 2;
                  pbVar6 = pbVar16 + -iVar18;
                  *pbVar6 = *pbVar6 | 2;
                  pbVar6[iVar13] = pbVar6[iVar13] | 2;
                  if (local_8 < local_c + -1) {
                    pbVar9[1] = pbVar9[1] | 2;
                    pbVar6[1] = pbVar6[1] | 2;
                    pbVar6[iVar13 + 1] = pbVar6[iVar13 + 1] | 2;
                  }
                }
                if (0 < local_8) {
                  pbVar16[-1 - iVar13] = pbVar16[-1 - iVar13] | 2;
                  pbVar16[iVar13 + local_68] = pbVar16[iVar13 + local_68] | 2;
                  pbVar16[iVar13 + -1] = pbVar16[iVar13 + -1] | 2;
                }
                pbVar6 = pbVar16 + -iVar13;
                *pbVar6 = *pbVar6 | 2;
                *pbVar16 = *pbVar16 | 2;
                pbVar16[iVar13] = pbVar16[iVar13] | 2;
                if (local_8 < local_c + -1) {
                  pbVar6[1] = pbVar6[1] | 2;
                  pbVar16[local_64 + iVar13] = pbVar16[local_64 + iVar13] | 2;
                  pbVar16[iVar13 + 1] = pbVar16[iVar13 + 1] | 2;
                }
                if (local_10 < local_28 + -1) {
                  if (0 < local_8) {
                    pbVar6[iVar10 + 1] = pbVar6[iVar10 + 1] | 2;
                    pbVar16[iVar10 + 1] = pbVar16[iVar10 + 1] | 2;
                    pbVar16[iVar18 + iVar13 + -1] = pbVar16[iVar18 + iVar13 + -1] | 2;
                  }
                  pbVar6[iVar18] = pbVar6[iVar18] | 2;
                  pbVar16[local_4c + iVar13] = pbVar16[local_4c + iVar13] | 2;
                  pbVar16[iVar13 + iVar18] = pbVar16[iVar13 + iVar18] | 2;
                  if (local_8 < local_c + -1) {
                    pbVar6[iVar10 + 3] = pbVar6[iVar10 + 3] | 2;
                    pbVar16[iVar10 + 3] = pbVar16[iVar10 + 3] | 2;
                    pbVar16[iVar13 + iVar18 + 1] = pbVar16[iVar13 + iVar18 + 1] | 2;
                  }
                }
              }
              if (*local_5c != 0) {
                if (((STWorldObject *)local_50->flags != nullptr) && (param_1 != 0xff))
                {
                  bVar1 = *(byte *)&((STWorldObject *)local_50->flags)[1].vtable;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_6c = CONCAT31(uStack_6b,bVar1);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == (byte)param_1) {
LAB_00565c6c:
                      iVar15 = 0;
                    }
                    else {
                      uVar11 = param_1 & 0xff;
                      bVar2 = g_playerRelationMatrix[bVar1][uVar11];
                      if ((bVar2 == 0) && (g_playerRelationMatrix[uVar11][bVar1] == 0)) {
                        iVar15 = -2;
                      }
                      else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar11][bVar1] == 0)) {
                        iVar15 = -1;
                      }
                      else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar11][bVar1] == 1)) {
                        iVar15 = 1;
                      }
                      else {
                        if ((bVar2 != 1) || (g_playerRelationMatrix[uVar11][bVar1] != 1))
                        goto LAB_00565c6c;
                        iVar15 = 2;
                      }
                    }
                    bVar19 = iVar15 < 0;
                  }
                  else {
                    bVar19 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar1].field_0023;
                  }
                  if (!bVar19) {
                    if (0 < local_10) {
                      if (0 < local_8) {
                        pbVar16[(-iVar18 - iVar13) + -1] = pbVar16[(-iVar18 - iVar13) + -1] | 3;
                        pbVar16[-1 - iVar18] = pbVar16[-1 - iVar18] | 3;
                        pbVar16[iVar13 + (-1 - iVar18)] = pbVar16[iVar13 + (-1 - iVar18)] | 3;
                      }
                      pbVar9 = pbVar16 + (-iVar18 - iVar13);
                      *pbVar9 = *pbVar9 | 3;
                      pbVar6 = pbVar16 + -iVar18;
                      *pbVar6 = *pbVar6 | 3;
                      pbVar6[iVar13] = pbVar6[iVar13] | 3;
                      if (local_8 < local_c + -1) {
                        pbVar9[1] = pbVar9[1] | 3;
                        pbVar6[1] = pbVar6[1] | 3;
                        pbVar6[iVar13 + 1] = pbVar6[iVar13 + 1] | 3;
                      }
                    }
                    if (0 < local_8) {
                      pbVar16[-1 - iVar13] = pbVar16[-1 - iVar13] | 3;
                      pbVar16[iVar13 + local_68] = pbVar16[iVar13 + local_68] | 3;
                      pbVar16[iVar13 + -1] = pbVar16[iVar13 + -1] | 3;
                    }
                    pbVar6 = pbVar16 + -iVar13;
                    *pbVar6 = *pbVar6 | 3;
                    *pbVar16 = *pbVar16 | 3;
                    pbVar16[iVar13] = pbVar16[iVar13] | 3;
                    if (local_8 < local_c + -1) {
                      pbVar6[1] = pbVar6[1] | 3;
                      pbVar16[local_64 + iVar13] = pbVar16[local_64 + iVar13] | 3;
                      pbVar16[iVar13 + 1] = pbVar16[iVar13 + 1] | 3;
                    }
                    if (local_10 < local_28 + -1) {
                      if (0 < local_8) {
                        pbVar6[iVar10 + 1] = pbVar6[iVar10 + 1] | 3;
                        pbVar16[iVar10 + 1] = pbVar16[iVar10 + 1] | 3;
                        pbVar16[iVar18 + iVar13 + -1] = pbVar16[iVar18 + iVar13 + -1] | 3;
                      }
                      pbVar6[iVar18] = pbVar6[iVar18] | 3;
                      pbVar16[local_4c + iVar13] = pbVar16[local_4c + iVar13] | 3;
                      pbVar16[iVar13 + iVar18] = pbVar16[iVar13 + iVar18] | 3;
                      if (local_8 < local_c + -1) {
                        pbVar6[iVar10 + 3] = pbVar6[iVar10 + 3] | 3;
                        pbVar16[iVar10 + 3] = pbVar16[iVar10 + 3] | 3;
                        pbVar16[iVar13 + iVar18 + 1] = pbVar16[iVar13 + iVar18 + 1] | 3;
                      }
                    }
                  }
                }
                *pbVar16 = *pbVar16 | 1;
              }
              pbVar16 = pbVar16 + iVar13;
              local_5c = local_5c + g_pathingGrid.planeStride;
              local_50 = (DArrayTy *)(&local_50->flags + g_worldGrid.planeStride * 2);
              local_38 = local_38 + -1;
            } while (local_38 != 0);
            local_8 = local_8 + 1;
            local_54 = local_54 + 1;
            local_1c = (DArrayTy *)&local_1c->elementSize;
          } while (local_8 < local_c);
        }
        local_18 = (DArrayTy *)((int)&local_18->flags + iVar18);
        local_10 = local_10 + 1;
        iVar15 = local_28;
        pDVar5 = local_18;
      } while (local_10 < local_28);
    }
    if (local_20 == nullptr) {
      local_c = local_c + -1;
      local_20 = (DArrayTy *)0x1;
      local_34 = (DArrayTy *)((int)&local_34->flags + 1);
      local_30 = local_30 + 1;
    }
    if (local_14[2] + 1 < (int)local_20 + local_c) {
      local_c = (local_14[2] - (int)local_20) + 1;
    }
    if (local_2c == nullptr) {
      iVar15 = iVar15 + -1;
      local_34 = (DArrayTy *)((int)&local_34->flags + iVar18);
      local_44 = local_44 + 1;
      local_2c = (dword *)0x1;
      local_28 = iVar15;
    }
    if (local_14[4] + 1 < (int)local_2c + iVar15) {
      local_28 = (local_14[4] - (int)local_2c) + 1;
    }
    local_38 = param_2 - local_30;
    pDVar6_mg1 = Library::DKW::TBL::DArrayCreate
                           (nullptr,(int)(*local_14 + (*local_14 >> 0x1f & 3U)) >> 2,6,10);
    local_8 = 0;
    local_1c = local_34;
    local_24 = pDVar6_mg1;
    do {
      local_10 = 0;
      local_94[local_8 + 5] = pDVar6_mg1->count;
      local_20 = local_1c;
      if (0 < local_28) {
        int scalar_local_18 = (int)local_2c * 8; /* split integer lifetime from pointer-typed SSA storage */
        do {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar15 = *(int *)(scalar_local_18 + 0x10 + (int)local_14) + local_38;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar8 = *(int *)(scalar_local_18 + 0xc + (int)local_14) + local_38;
          local_4c = iVar15;
          if (iVar8 <= iVar15) {
            do {
              if ((((-1 < iVar8) && (iVar8 < local_c)) && (-1 < local_10)) &&
                 ((local_10 < local_28 && (*(char *)((int)&local_20->flags + iVar8) == '\0')))) {
                local_40 = (short)iVar8 + (short)local_30;
                local_3e = (short)local_10 + (short)local_44;
                local_3c = (undefined2)local_8;
                Library::DKW::TBL::DArrayAppend(pDVar6_mg1,&local_40);
                local_94[local_8] = local_94[local_8] + 1;
                iVar15 = iVar8 - iVar13;
                pbVar16 = (byte *)((iVar15 - iVar18) + (int)local_20);
                pbVar16[-1] = pbVar16[-1] | 2;
                *pbVar16 = *pbVar16 | 2;
                pbVar16[1] = pbVar16[1] | 2;
                pbVar16 = (byte *)(iVar15 + (int)local_20);
                pbVar16[-1] = *(byte *)(iVar15 + -1 + (int)local_20) | 2;
                *pbVar16 = *pbVar16 | 2;
                pbVar16[1] = pbVar16[1] | 2;
                pbVar16[iVar10 + 1] = pbVar16[iVar10 + 1] | 2;
                pbVar16[iVar18] = pbVar16[iVar18] | 2;
                pbVar16[iVar10 + 3] = pbVar16[iVar10 + 3] | 2;
                pbVar16 = (byte *)((iVar8 - iVar18) + (int)local_20);
                pbVar16[-1] = *(byte *)((iVar8 - iVar18) + -1 + (int)local_20) | 2;
                *pbVar16 = *pbVar16 | 2;
                pbVar16[1] = pbVar16[1] | 2;
                *(byte *)(iVar8 + -1 + (int)local_20) = *(byte *)(iVar8 + -1 + (int)local_20) | 2;
                *(byte *)((int)&local_20->flags + iVar8) =
                     *(byte *)((int)&local_20->flags + iVar8) | 2;
                *(byte *)((int)&local_20->flags + iVar8 + 1) =
                     *(byte *)((int)&local_20->flags + iVar8 + 1) | 2;
                pbVar6 = (byte *)((int)&local_20->flags + iVar8 + iVar10 + 1);
                *pbVar6 = *pbVar6 | 2;
                pbVar6 = (byte *)((int)&local_20->flags + iVar8 + iVar18);
                *pbVar6 = *pbVar6 | 2;
                pbVar6 = (byte *)((int)&local_20->flags + iVar8 + iVar10 + 3);
                *pbVar6 = *pbVar6 | 2;
                pbVar16[iVar13 + -1] = pbVar16[iVar13 + -1] | 2;
                pbVar16[iVar13] = pbVar16[iVar13] | 2;
                pbVar16[iVar13 + 1] = pbVar16[iVar13 + 1] | 2;
                *(byte *)((int)local_20 + iVar8 + iVar13 + -1) =
                     *(byte *)((int)local_20 + iVar8 + iVar13 + -1) | 2;
                *(byte *)((int)&local_20->flags + iVar8 + iVar13) =
                     *(byte *)((int)&local_20->flags + iVar8 + iVar13) | 2;
                *(byte *)((int)&local_20->flags + iVar8 + iVar13 + 1) =
                     *(byte *)((int)&local_20->flags + iVar8 + iVar13 + 1) | 2;
                iVar15 = iVar18 + iVar13;
                *(byte *)((int)&local_20->flags + iVar8 + iVar15 + -1) =
                     *(byte *)((int)&local_20->flags + iVar8 + iVar15 + -1) | 2;
                *(byte *)((int)&local_20->flags + iVar8 + iVar15) =
                     *(byte *)((int)&local_20->flags + iVar8 + iVar15) | 2;
                *(byte *)((int)&local_20->flags + iVar8 + iVar15 + 1) =
                     *(byte *)((int)&local_20->flags + iVar8 + iVar15 + 1) | 2;
                pDVar6_mg1 = local_24;
                iVar15 = local_4c;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 <= iVar15);
          }
          local_18 = (DArrayTy *)((int)local_18 + 8);
          local_10 = local_10 + 1;
          local_20 = (DArrayTy *)((int)&local_20->flags + iVar18);
        } while (local_10 < local_28);
      }
      local_8 = local_8 + 1;
      local_1c = (DArrayTy *)((int)&local_1c->flags + iVar13);
    } while (local_8 < 5);
    if ((0 < (int)param_7) && ((int)param_7 < (int)pDVar6_mg1->count)) {
      local_1c = Library::DKW::TBL::DArrayCreate(nullptr,param_7,6,10);
      while( true ) {
        iVar10 = 0;
        local_2c = local_94;
        dVar17 = 0xffffffff;
        local_18 = nullptr;
        iVar15 = -(int)local_58;
        do {
          if (((int)dVar17 < (int)*local_2c) ||
             ((dVar17 == *local_2c &&
              (uVar11 = (int)(iVar15 + 3U) >> 0x1f, uVar12 = (int)(iVar10 + 3U) >> 0x1f,
              (int)((iVar10 + 3U ^ uVar12) - uVar12) < (int)((iVar15 + 3U ^ uVar11) - uVar11))))) {
            local_58 = local_18;
            dVar17 = *local_2c;
            iVar15 = iVar10;
          }
          iVar10 = iVar10 + -1;
          local_18 = (DArrayTy *)((int)&local_18->flags + 1);
          local_2c = local_2c + 1;
        } while (-5 < iVar10);
        if ((int)dVar17 < 1) goto cf_common_exit_0056623F;
        dVar3 = local_94[(int)((int)&local_58->iteratorIndex + 1)];
        if ((int)param_7 < (int)dVar17) break;
        iVar15 = 0;
        if (0 < (int)dVar17) {
          do {
            local_EAX_2465 = DArrayGetElement(local_24,iVar15 + dVar3,&local_40);
            if (-1 < local_EAX_2465) {
              Library::DKW::TBL::DArrayAppend(local_1c,&local_40);
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)dVar17);
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_7 = param_7 - dVar17;
        if ((int)param_7 < 1) goto cf_common_exit_0056623F;
        local_94[(int)((int)&local_58->iteratorIndex + 1)] = 0;
      }
      iVar15 = param_7 + 1;
      iVar10 = dVar3 * 0x10000 + -0x10000;
      if (0 < (int)param_7) {
        do {
          iVar10 = iVar10 + (int)((dVar17 + 1) * 0x10000) / iVar15;
          iVar14 = DArrayGetElement(local_24,iVar10 >> 0x10,&local_40);
          if (-1 < iVar14) {
            Library::DKW::TBL::DArrayAppend(local_1c,&local_40);
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_7 = param_7 - 1;
        } while (param_7 != 0);
      }
cf_common_exit_0056623F:
      DArrayDestroy(local_24);
      local_24 = local_1c;
    }
    g_currentExceptionFrame = local_d8.previous;
    iVar5 = local_60;
  }
  else {
    g_currentExceptionFrame = local_d8.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\scoreai.cpp",0xeff,0,iVar5,"%s",
                                "AiMinesDistribTgts");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  local_60 = iVar5;
  iVar15 = local_60;
  FreeAndNull(&local_48);
  FreeAndNull(&local_14);
  if (iVar15 == 0) {
    return &local_24->flags;
  }
  FreeAndNull(&local_24);
  RaiseInternalException
            (iVar15,g_overwriteContext_007ED77C,"E:\\__titans\\scoreai.cpp",0xf0f);
  return nullptr;
}

