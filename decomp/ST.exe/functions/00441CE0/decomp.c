#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_MakeMDPairs */

void __thiscall STAllPlayersC::_MakeMDPairs(STAllPlayersC *this,char param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  DArrayTy *pDVar7;
  int iVar8;
  short *psVar9;
  undefined4 *puVar10;
  uint uVar11;
  short *psVar12;
  DArrayTy *pDVar13;
  InternalExceptionFrame local_e8;
  undefined4 local_a4;
  undefined2 local_9e;
  undefined2 local_96;
  int local_80 [5];
  uint local_6c;
  DArrayTy *local_68;
  dword local_64;
  int local_60 [4];
  STAllPlayersC *local_50;
  undefined1 local_4c [4];
  short local_48;
  short local_46;
  short local_44;
  undefined2 local_42;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  DArrayTy *local_24;
  int local_20;
  int *local_1c;
  DArrayTy *local_18;
  undefined4 *local_14;
  DArrayTy *local_10;
  DArrayTy *local_c;
  STFishC *local_8;

  local_24 = (DArrayTy *)0x4;
  local_80[0] = 0x38;
  local_80[1] = 0x39;
  local_80[2] = 0x4f;
  local_80[3] = 0x5e;
  local_e8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_e8;
  local_50 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0);
  pDVar7 = local_24;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_e8.previous;
    iVar8 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x23c5,0,iVar3,&DAT_007a4ccc
                               ,s_STAllPlayersC___MakeMDPairs_007a8098);
    if (iVar8 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x23c6);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar3 = (int)param_1;
  if (0 < (int)local_24) {
    local_c = local_24;
    puVar10 = &g_playerRuntime[iVar3].field6_0xf;
    do {
      if ((DArrayTy *)*puVar10 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)*puVar10);
        *puVar10 = 0;
      }
      puVar10 = puVar10 + 1;
      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
    } while (local_c != (DArrayTy *)0x0);
  }
  local_60[3] = 0;
  local_60[2] = 0;
  local_60[1] = 0;
  local_60[0] = 0;
  local_10 = (DArrayTy *)0x0;
  /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
  local_20 = iVar3 * 0xa62;
  if (g_playerRuntime[iVar3].raceId != 0) {
    if (0 < (int)pDVar7) {
      puVar10 = &g_playerRuntime[iVar3].field6_0xf;
      pDVar13 = pDVar7;
      do {
        puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,0x24,1);
        *puVar10 = puVar4;
        puVar10 = puVar10 + 1;
        pDVar13 = (DArrayTy *)((int)&pDVar13[-1].data + 3);
      } while (pDVar13 != (DArrayTy *)0x0);
    }
    local_18 = *(DArrayTy **)((int)&g_playerRuntime[0].objects + local_20);
    if ((local_18 != (DArrayTy *)0x0) &&
       (local_c = (DArrayTy *)local_18->count, local_c != (DArrayTy *)0x0)) {
      local_10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,4,1);
      if (0 < (int)pDVar7) {
        piVar5 = local_60;
        pDVar13 = pDVar7;
        do {
          puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,4,1);
          *piVar5 = (int)puVar4;
          piVar5 = piVar5 + 1;
          pDVar13 = (DArrayTy *)((int)&pDVar13[-1].data + 3);
        } while (pDVar13 != (DArrayTy *)0x0);
      }
      uVar11 = 0;
      if (0 < (int)local_c) {
        do {
          DArrayGetElement(local_18,uVar11,&local_8);
          if (local_8 != (STFishC *)0x0) {
            iVar3 = (*local_8->vtable->vfunc_2C)();
            pDVar13 = local_10;
            if ((iVar3 == 0x3b) || (iVar3 == 0x60)) {
LAB_00441e92:
              Library::DKW::TBL::FUN_006ae1c0(&pDVar13->flags,&local_8);
            }
            else {
              iVar8 = 0;
              if (0 < (int)pDVar7) {
                piVar5 = local_80;
                do {
                  if (iVar3 == *piVar5) {
                    iVar3 = (*local_8->vtable->vfunc_88)(local_4c);
                    if (0 < iVar3) {
                      pDVar13 = (DArrayTy *)local_60[iVar8];
                      goto LAB_00441e92;
                    }
                    break;
                  }
                  iVar8 = iVar8 + 1;
                  piVar5 = piVar5 + 1;
                } while (iVar8 < (int)pDVar7);
              }
            }
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_c);
      }
    }
    if ((local_10 == (DArrayTy *)0x0) || (local_64 = local_10->count, local_64 == 0)) {
      local_3a = 0xffff;
      local_42 = 0xffff;
      if (0 < (int)pDVar7) {
        puVar10 = (undefined4 *)((int)&g_playerRuntime[0].field6_0xf + local_20);
        pDVar13 = pDVar7;
        do {
          Library::DKW::TBL::FUN_006ae1c0((uint *)*puVar10,(undefined4 *)&local_48);
          puVar10 = puVar10 + 1;
          pDVar13 = (DArrayTy *)((int)&pDVar13[-1].data + 3);
        } while (pDVar13 != (DArrayTy *)0x0);
      }
    }
    else {
      local_c = (DArrayTy *)0x0;
      if (0 < (int)local_64) {
        do {
          DArrayGetElement(local_10,(uint)local_c,&local_8);
          STFishC::sub_004162B0(local_8,&local_40,&local_3e,&local_3c);
          local_3a = *(undefined2 *)&local_8->field_0x32;
          uVar11 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
          psVar9 = g_pathingGrid.cells;
          psVar12 = g_pathingScratchGrid.cells;
          for (uVar6 = (uVar11 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)psVar12 = *(undefined4 *)psVar9;
            psVar9 = psVar9 + 2;
            psVar12 = psVar12 + 2;
          }
          for (uVar11 = uVar11 * 2 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(char *)psVar12 = (char)*psVar9;
            psVar9 = (short *)((int)psVar9 + 1);
            psVar12 = (short *)((int)psVar12 + 1);
          }
          FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,
                       (int)g_pathingGrid.sizeY,(int)g_pathingGrid.sizeZ,(int)local_40,(int)local_3e
                       ,(int)local_3c,-1,-1,-1);
          if (0 < (int)local_24) {
            local_1c = local_60;
            local_18 = local_24;
            local_14 = (undefined4 *)((int)&g_playerRuntime[0].field6_0xf + local_20);
            do {
              pDVar7 = (DArrayTy *)*local_1c;
              local_68 = pDVar7;
              if ((pDVar7 == (DArrayTy *)0x0) || (local_80[4] = pDVar7->count, local_80[4] == 0)) {
                if (((uint *)*local_14)[3] == 0) {
                  local_96 = 0xffff;
                  local_9e = 0xffff;
                  Library::DKW::TBL::FUN_006ae1c0((uint *)*local_14,&local_a4);
                }
              }
              else {
                uVar11 = 0;
                if (0 < local_80[4]) {
                  do {
                    DArrayGetElement(pDVar7,uVar11,&local_8);
                    STFishC::sub_004162B0(local_8,&local_48,&local_46,&local_44);
                    local_42 = *(undefined2 *)&local_8->field_0x32;
                    local_38 = (int)g_pathingScratchGrid.cells
                                    [(local_44 + 1) * (int)g_pathingGrid.planeStride +
                                     (int)local_46 * (int)g_pathingGrid.sizeX + (int)local_48];
                    if (local_38 == 0) {
                      local_38 = 1000000;
                      local_30 = 100;
                    }
                    else {
                      bVar2 = thunk_FUN_00430750(CASE_8);
                      local_6c = (uint)bVar2;
                      local_38 = ((((local_38 * 0xc9) / 3) / (int)local_6c) * 0xc) / 10 + 800;
                      local_30 = (undefined4)(40000 / (longlong)local_38);
                      pDVar7 = local_68;
                    }
                    local_34 = local_30;
                    Library::DKW::TBL::FUN_006ae1c0((uint *)*local_14,(undefined4 *)&local_48);
                    uVar11 = uVar11 + 1;
                  } while ((int)uVar11 < local_80[4]);
                }
              }
              local_1c = local_1c + 1;
              local_14 = local_14 + 1;
              local_18 = (DArrayTy *)((int)&local_18[-1].data + 3);
            } while (local_18 != (DArrayTy *)0x0);
          }
          local_c = (DArrayTy *)((int)&local_c->flags + 1);
          pDVar7 = local_24;
        } while ((int)local_c < (int)local_64);
      }
    }
    DArrayDestroy(local_10);
    if (0 < (int)pDVar7) {
      piVar5 = local_60;
      do {
        DArrayDestroy((DArrayTy *)*piVar5);
        piVar5 = piVar5 + 1;
        pDVar7 = (DArrayTy *)((int)&pDVar7[-1].data + 3);
      } while (pDVar7 != (DArrayTy *)0x0);
    }
  }
  g_currentExceptionFrame = local_e8.previous;
  return;
}

