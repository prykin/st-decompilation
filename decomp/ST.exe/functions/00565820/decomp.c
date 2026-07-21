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
  code *pcVar4;
  int iVar5;
  byte *pbVar6;
  DArrayTy *pDVar7;
  uint *puVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  dword dVar16;
  int iVar17;
  bool bVar18;
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
  undefined4 *local_48;
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
  local_24 = (DArrayTy *)0x0;
  local_48 = (undefined4 *)0x0;
  local_14 = (int *)0x0;
  local_60 = 0;
  local_d8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d8;
  iVar5 = Library::MSVCRT::__setjmp3(local_d8.jumpBuffer,0);
  if (iVar5 == 0) {
    local_14 = FUN_00561240(param_4,param_5,param_6);
    iVar11 = local_14[2];
    iVar5 = local_14[4] + 2;
    iVar17 = iVar11 + 2;
    iVar14 = iVar5 * iVar17;
    local_28 = iVar5;
    local_c = iVar17;
    local_48 = Library::DKW::LIB::FUN_006aac10(iVar14 * 7);
    local_20 = (DArrayTy *)0x0;
    local_2c = (dword *)0x0;
    local_30 = local_14[1] + -1 + param_2;
    if (local_30 < 0) {
      local_20 = (DArrayTy *)-local_30;
      local_c = local_30 + iVar17;
      local_30 = 0;
    }
    iVar9 = local_14[2] + local_14[1] + param_2;
    if (g_pathingGrid.sizeX <= iVar9) {
      local_c = local_c + -1 + (g_pathingGrid.sizeX - iVar9);
    }
    iVar9 = local_14[3] + -1 + param_3;
    local_44 = iVar9;
    if (iVar9 < 0) {
      local_44 = 0;
      local_2c = (dword *)-iVar9;
      iVar5 = iVar5 + iVar9;
      local_28 = iVar5;
    }
    iVar9 = local_14[4] + local_14[3] + param_3;
    if (g_pathingGrid.sizeY <= iVar9) {
      iVar5 = iVar5 + -1 + (g_pathingGrid.sizeY - iVar9);
      local_28 = iVar5;
    }
    local_34 = (DArrayTy *)((int)local_48 + (int)local_2c * iVar17 + (int)local_20 + iVar14);
    local_10 = 0;
    pDVar7 = local_34;
    if (0 < iVar5) {
      do {
        local_18 = pDVar7;
        local_54 = g_pathingGrid.cells + (int)g_pathingGrid.sizeX * (local_44 + local_10) + local_30
        ;
        local_1c = (DArrayTy *)
                   (g_worldGrid.cells + (int)g_worldGrid.sizeX * (local_44 + local_10) + local_30);
        local_8 = 0;
        if (0 < local_c) {
          do {
            local_5c = local_54;
            pbVar15 = (byte *)((int)&local_18->flags + local_8);
            local_68 = -1 - iVar14;
            local_64 = 1 - iVar14;
            local_38 = 5;
            local_4c = iVar17 - iVar14;
            local_50 = local_1c;
            do {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if ((local_50->iteratorIndex != 0) &&
                 (*(int *)(local_50->iteratorIndex + 0x20) == 0x1ae)) {
                if (0 < local_10) {
                  if (0 < local_8) {
                    pbVar15[(-iVar17 - iVar14) + -1] = pbVar15[(-iVar17 - iVar14) + -1] | 2;
                    pbVar15[-1 - iVar17] = pbVar15[-1 - iVar17] | 2;
                    pbVar15[iVar14 + (-1 - iVar17)] = pbVar15[iVar14 + (-1 - iVar17)] | 2;
                  }
                  pbVar10 = pbVar15 + (-iVar17 - iVar14);
                  *pbVar10 = *pbVar10 | 2;
                  pbVar6 = pbVar15 + -iVar17;
                  *pbVar6 = *pbVar6 | 2;
                  pbVar6[iVar14] = pbVar6[iVar14] | 2;
                  if (local_8 < local_c + -1) {
                    pbVar10[1] = pbVar10[1] | 2;
                    pbVar6[1] = pbVar6[1] | 2;
                    pbVar6[iVar14 + 1] = pbVar6[iVar14 + 1] | 2;
                  }
                }
                if (0 < local_8) {
                  pbVar15[-1 - iVar14] = pbVar15[-1 - iVar14] | 2;
                  pbVar15[iVar14 + local_68] = pbVar15[iVar14 + local_68] | 2;
                  pbVar15[iVar14 + -1] = pbVar15[iVar14 + -1] | 2;
                }
                pbVar6 = pbVar15 + -iVar14;
                *pbVar6 = *pbVar6 | 2;
                *pbVar15 = *pbVar15 | 2;
                pbVar15[iVar14] = pbVar15[iVar14] | 2;
                if (local_8 < local_c + -1) {
                  pbVar6[1] = pbVar6[1] | 2;
                  pbVar15[local_64 + iVar14] = pbVar15[local_64 + iVar14] | 2;
                  pbVar15[iVar14 + 1] = pbVar15[iVar14 + 1] | 2;
                }
                if (local_10 < local_28 + -1) {
                  if (0 < local_8) {
                    pbVar6[iVar11 + 1] = pbVar6[iVar11 + 1] | 2;
                    pbVar15[iVar11 + 1] = pbVar15[iVar11 + 1] | 2;
                    pbVar15[iVar17 + iVar14 + -1] = pbVar15[iVar17 + iVar14 + -1] | 2;
                  }
                  pbVar6[iVar17] = pbVar6[iVar17] | 2;
                  pbVar15[local_4c + iVar14] = pbVar15[local_4c + iVar14] | 2;
                  pbVar15[iVar14 + iVar17] = pbVar15[iVar14 + iVar17] | 2;
                  if (local_8 < local_c + -1) {
                    pbVar6[iVar11 + 3] = pbVar6[iVar11 + 3] | 2;
                    pbVar15[iVar11 + 3] = pbVar15[iVar11 + 3] | 2;
                    pbVar15[iVar14 + iVar17 + 1] = pbVar15[iVar14 + iVar17 + 1] | 2;
                  }
                }
              }
              if (*local_5c != 0) {
                if (((STWorldObject *)local_50->flags != (STWorldObject *)0x0) && (param_1 != 0xff))
                {
                  bVar1 = *(byte *)&((STWorldObject *)local_50->flags)[1].vtable;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_6c = CONCAT31(uStack_6b,bVar1);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == (byte)param_1) {
LAB_00565c6c:
                      iVar5 = 0;
                    }
                    else {
                      uVar12 = param_1 & 0xff;
                      bVar2 = g_playerRelationMatrix[bVar1][uVar12];
                      if ((bVar2 == 0) && (g_playerRelationMatrix[uVar12][bVar1] == 0)) {
                        iVar5 = -2;
                      }
                      else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar12][bVar1] == 0)) {
                        iVar5 = -1;
                      }
                      else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar12][bVar1] == 1)) {
                        iVar5 = 1;
                      }
                      else {
                        if ((bVar2 != 1) || (g_playerRelationMatrix[uVar12][bVar1] != 1))
                        goto LAB_00565c6c;
                        iVar5 = 2;
                      }
                    }
                    bVar18 = iVar5 < 0;
                  }
                  else {
                    bVar18 = (&DAT_008087ea)[(param_1 & 0xff) * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar1 * 0x51];
                  }
                  if (!bVar18) {
                    if (0 < local_10) {
                      if (0 < local_8) {
                        pbVar15[(-iVar17 - iVar14) + -1] = pbVar15[(-iVar17 - iVar14) + -1] | 3;
                        pbVar15[-1 - iVar17] = pbVar15[-1 - iVar17] | 3;
                        pbVar15[iVar14 + (-1 - iVar17)] = pbVar15[iVar14 + (-1 - iVar17)] | 3;
                      }
                      pbVar10 = pbVar15 + (-iVar17 - iVar14);
                      *pbVar10 = *pbVar10 | 3;
                      pbVar6 = pbVar15 + -iVar17;
                      *pbVar6 = *pbVar6 | 3;
                      pbVar6[iVar14] = pbVar6[iVar14] | 3;
                      if (local_8 < local_c + -1) {
                        pbVar10[1] = pbVar10[1] | 3;
                        pbVar6[1] = pbVar6[1] | 3;
                        pbVar6[iVar14 + 1] = pbVar6[iVar14 + 1] | 3;
                      }
                    }
                    if (0 < local_8) {
                      pbVar15[-1 - iVar14] = pbVar15[-1 - iVar14] | 3;
                      pbVar15[iVar14 + local_68] = pbVar15[iVar14 + local_68] | 3;
                      pbVar15[iVar14 + -1] = pbVar15[iVar14 + -1] | 3;
                    }
                    pbVar6 = pbVar15 + -iVar14;
                    *pbVar6 = *pbVar6 | 3;
                    *pbVar15 = *pbVar15 | 3;
                    pbVar15[iVar14] = pbVar15[iVar14] | 3;
                    if (local_8 < local_c + -1) {
                      pbVar6[1] = pbVar6[1] | 3;
                      pbVar15[local_64 + iVar14] = pbVar15[local_64 + iVar14] | 3;
                      pbVar15[iVar14 + 1] = pbVar15[iVar14 + 1] | 3;
                    }
                    if (local_10 < local_28 + -1) {
                      if (0 < local_8) {
                        pbVar6[iVar11 + 1] = pbVar6[iVar11 + 1] | 3;
                        pbVar15[iVar11 + 1] = pbVar15[iVar11 + 1] | 3;
                        pbVar15[iVar17 + iVar14 + -1] = pbVar15[iVar17 + iVar14 + -1] | 3;
                      }
                      pbVar6[iVar17] = pbVar6[iVar17] | 3;
                      pbVar15[local_4c + iVar14] = pbVar15[local_4c + iVar14] | 3;
                      pbVar15[iVar14 + iVar17] = pbVar15[iVar14 + iVar17] | 3;
                      if (local_8 < local_c + -1) {
                        pbVar6[iVar11 + 3] = pbVar6[iVar11 + 3] | 3;
                        pbVar15[iVar11 + 3] = pbVar15[iVar11 + 3] | 3;
                        pbVar15[iVar14 + iVar17 + 1] = pbVar15[iVar14 + iVar17 + 1] | 3;
                      }
                    }
                  }
                }
                *pbVar15 = *pbVar15 | 1;
              }
              pbVar15 = pbVar15 + iVar14;
              local_5c = local_5c + g_pathingGrid.planeStride;
              local_50 = (DArrayTy *)(&local_50->flags + g_worldGrid.planeStride * 2);
              local_38 = local_38 + -1;
            } while (local_38 != 0);
            local_8 = local_8 + 1;
            local_54 = local_54 + 1;
            local_1c = (DArrayTy *)&local_1c->elementSize;
          } while (local_8 < local_c);
        }
        local_18 = (DArrayTy *)((int)&local_18->flags + iVar17);
        local_10 = local_10 + 1;
        iVar5 = local_28;
        pDVar7 = local_18;
      } while (local_10 < local_28);
    }
    if (local_20 == (DArrayTy *)0x0) {
      local_c = local_c + -1;
      local_20 = (DArrayTy *)0x1;
      local_34 = (DArrayTy *)((int)&local_34->flags + 1);
      local_30 = local_30 + 1;
    }
    if (local_14[2] + 1 < (int)local_20 + local_c) {
      local_c = (local_14[2] - (int)local_20) + 1;
    }
    if (local_2c == (dword *)0x0) {
      iVar5 = iVar5 + -1;
      local_34 = (DArrayTy *)((int)&local_34->flags + iVar17);
      local_44 = local_44 + 1;
      local_2c = (dword *)0x1;
      local_28 = iVar5;
    }
    if (local_14[4] + 1 < (int)local_2c + iVar5) {
      local_28 = (local_14[4] - (int)local_2c) + 1;
    }
    local_38 = param_2 - local_30;
    pDVar7 = (DArrayTy *)
             Library::DKW::TBL::FUN_006ae290
                       ((uint *)0x0,(int)(*local_14 + (*local_14 >> 0x1f & 3U)) >> 2,6,10);
    local_8 = 0;
    local_1c = local_34;
    local_24 = pDVar7;
    do {
      local_10 = 0;
      local_94[local_8 + 5] = pDVar7->count;
      local_20 = local_1c;
      if (0 < local_28) {
        local_18 = (DArrayTy *)((int)local_2c * 8);
        do {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar5 = *(int *)((int)local_18 + 0x10 + (int)local_14) + local_38;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar9 = *(int *)((int)local_18 + 0xc + (int)local_14) + local_38;
          local_4c = iVar5;
          if (iVar9 <= iVar5) {
            do {
              if ((((-1 < iVar9) && (iVar9 < local_c)) && (-1 < local_10)) &&
                 ((local_10 < local_28 && (*(char *)((int)&local_20->flags + iVar9) == '\0')))) {
                local_40 = (short)iVar9 + (short)local_30;
                local_3e = (short)local_10 + (short)local_44;
                local_3c = (undefined2)local_8;
                Library::DKW::TBL::FUN_006ae1c0(&pDVar7->flags,(undefined4 *)&local_40);
                local_94[local_8] = local_94[local_8] + 1;
                iVar5 = iVar9 - iVar14;
                pbVar15 = (byte *)((iVar5 - iVar17) + (int)local_20);
                pbVar15[-1] = pbVar15[-1] | 2;
                *pbVar15 = *pbVar15 | 2;
                pbVar15[1] = pbVar15[1] | 2;
                pbVar15 = (byte *)(iVar5 + (int)local_20);
                pbVar15[-1] = *(byte *)(iVar5 + -1 + (int)local_20) | 2;
                *pbVar15 = *pbVar15 | 2;
                pbVar15[1] = pbVar15[1] | 2;
                pbVar15[iVar11 + 1] = pbVar15[iVar11 + 1] | 2;
                pbVar15[iVar17] = pbVar15[iVar17] | 2;
                pbVar15[iVar11 + 3] = pbVar15[iVar11 + 3] | 2;
                pbVar15 = (byte *)((iVar9 - iVar17) + (int)local_20);
                pbVar15[-1] = *(byte *)((iVar9 - iVar17) + -1 + (int)local_20) | 2;
                *pbVar15 = *pbVar15 | 2;
                pbVar15[1] = pbVar15[1] | 2;
                *(byte *)(iVar9 + -1 + (int)local_20) = *(byte *)(iVar9 + -1 + (int)local_20) | 2;
                *(byte *)((int)&local_20->flags + iVar9) =
                     *(byte *)((int)&local_20->flags + iVar9) | 2;
                *(byte *)((int)&local_20->flags + iVar9 + 1) =
                     *(byte *)((int)&local_20->flags + iVar9 + 1) | 2;
                pbVar6 = (byte *)((int)&local_20->flags + iVar9 + iVar11 + 1);
                *pbVar6 = *pbVar6 | 2;
                pbVar6 = (byte *)((int)&local_20->flags + iVar9 + iVar17);
                *pbVar6 = *pbVar6 | 2;
                pbVar6 = (byte *)((int)&local_20->flags + iVar9 + iVar11 + 3);
                *pbVar6 = *pbVar6 | 2;
                pbVar15[iVar14 + -1] = pbVar15[iVar14 + -1] | 2;
                pbVar15[iVar14] = pbVar15[iVar14] | 2;
                pbVar15[iVar14 + 1] = pbVar15[iVar14 + 1] | 2;
                *(byte *)((int)local_20 + iVar9 + iVar14 + -1) =
                     *(byte *)((int)local_20 + iVar9 + iVar14 + -1) | 2;
                *(byte *)((int)&local_20->flags + iVar9 + iVar14) =
                     *(byte *)((int)&local_20->flags + iVar9 + iVar14) | 2;
                *(byte *)((int)&local_20->flags + iVar9 + iVar14 + 1) =
                     *(byte *)((int)&local_20->flags + iVar9 + iVar14 + 1) | 2;
                iVar5 = iVar17 + iVar14;
                *(byte *)((int)&local_20->flags + iVar9 + iVar5 + -1) =
                     *(byte *)((int)&local_20->flags + iVar9 + iVar5 + -1) | 2;
                *(byte *)((int)&local_20->flags + iVar9 + iVar5) =
                     *(byte *)((int)&local_20->flags + iVar9 + iVar5) | 2;
                *(byte *)((int)&local_20->flags + iVar9 + iVar5 + 1) =
                     *(byte *)((int)&local_20->flags + iVar9 + iVar5 + 1) | 2;
                pDVar7 = local_24;
                iVar5 = local_4c;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 <= iVar5);
          }
          local_18 = (DArrayTy *)((int)local_18 + 8);
          local_10 = local_10 + 1;
          local_20 = (DArrayTy *)((int)&local_20->flags + iVar17);
        } while (local_10 < local_28);
      }
      local_8 = local_8 + 1;
      local_1c = (DArrayTy *)((int)&local_1c->flags + iVar14);
    } while (local_8 < 5);
    if ((0 < (int)param_7) && ((int)param_7 < (int)pDVar7->count)) {
      local_1c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,param_7,6,10);
      while( true ) {
        iVar11 = 0;
        local_2c = local_94;
        dVar16 = 0xffffffff;
        local_18 = (DArrayTy *)0x0;
        iVar5 = -(int)local_58;
        do {
          if (((int)dVar16 < (int)*local_2c) ||
             ((dVar16 == *local_2c &&
              (uVar12 = (int)(iVar5 + 3U) >> 0x1f, uVar13 = (int)(iVar11 + 3U) >> 0x1f,
              (int)((iVar11 + 3U ^ uVar13) - uVar13) < (int)((iVar5 + 3U ^ uVar12) - uVar12))))) {
            local_58 = local_18;
            dVar16 = *local_2c;
            iVar5 = iVar11;
          }
          iVar11 = iVar11 + -1;
          local_18 = (DArrayTy *)((int)&local_18->flags + 1);
          local_2c = local_2c + 1;
        } while (-5 < iVar11);
        if ((int)dVar16 < 1) goto cf_common_exit_0056623F;
        dVar3 = local_94[(int)((int)&local_58->iteratorIndex + 1)];
        if ((int)param_7 < (int)dVar16) break;
        iVar5 = 0;
        if (0 < (int)dVar16) {
          do {
            iVar11 = DArrayGetElement(local_24,iVar5 + dVar3,&local_40);
            if (-1 < iVar11) {
              Library::DKW::TBL::FUN_006ae1c0(&local_1c->flags,(undefined4 *)&local_40);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)dVar16);
        }
        param_7 = param_7 - dVar16;
        if ((int)param_7 < 1) goto cf_common_exit_0056623F;
        local_94[(int)((int)&local_58->iteratorIndex + 1)] = 0;
      }
      iVar5 = param_7 + 1;
      iVar11 = dVar3 * 0x10000 + -0x10000;
      if (0 < (int)param_7) {
        do {
          iVar11 = iVar11 + (int)((dVar16 + 1) * 0x10000) / iVar5;
          iVar14 = DArrayGetElement(local_24,iVar11 >> 0x10,&local_40);
          if (-1 < iVar14) {
            Library::DKW::TBL::FUN_006ae1c0(&local_1c->flags,(undefined4 *)&local_40);
          }
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
    iVar11 = ReportDebugMessage(s_E____titans_scoreai_cpp_007c96b0,0xeff,0,iVar5,&DAT_007a4ccc,
                                s_AiMinesDistribTgts_007c9700);
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  local_60 = iVar5;
  iVar5 = local_60;
  FreeAndNull(&local_48);
  FreeAndNull(&local_14);
  if (iVar5 == 0) {
    return &local_24->flags;
  }
  FreeAndNull(&local_24);
  RaiseInternalException(iVar5,g_overwriteContext_007ED77C,s_E____titans_scoreai_cpp_007c96b0,0xf0f)
  ;
  return (uint *)0x0;
}

