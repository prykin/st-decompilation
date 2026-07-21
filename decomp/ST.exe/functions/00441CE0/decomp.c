#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_MakeMDPairs */

void __thiscall STAllPlayersC::_MakeMDPairs(STAllPlayersC *this,char param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  DArrayTy *pDVar4;
  dword dVar5;
  int iVar6;
  dword *pdVar7;
  uint uVar8;
  DArrayTy *pDVar9;
  short *psVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  short *psVar14;
  DArrayTy *pDVar15;
  InternalExceptionFrame local_e8;
  undefined4 local_a4;
  undefined2 local_9e;
  undefined2 local_96;
  dword local_80 [5];
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
  pDVar9 = local_24;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_e8.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x23c5,0,iVar3,"%s"
                               ,"STAllPlayersC::_MakeMDPairs");
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x23c6);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar3 = (int)param_1;
  if (0 < (int)local_24) {
    local_c = local_24;
    puVar11 = &g_playerRuntime[iVar3].field6_0xf;
    do {
      if ((DArrayTy *)*puVar11 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)*puVar11);
        *puVar11 = 0;
      }
      puVar11 = puVar11 + 1;
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
    if (0 < (int)pDVar9) {
      puVar11 = &g_playerRuntime[iVar3].field6_0xf;
      pDVar15 = pDVar9;
      do {
        pDVar4 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,0x24,1);
        *puVar11 = pDVar4;
        puVar11 = puVar11 + 1;
        pDVar15 = (DArrayTy *)((int)&pDVar15[-1].data + 3);
      } while (pDVar15 != (DArrayTy *)0x0);
    }
    local_18 = *(DArrayTy **)((int)&g_playerRuntime[0].objects + local_20);
    if ((local_18 != (DArrayTy *)0x0) &&
       (local_c = (DArrayTy *)local_18->count, local_c != (DArrayTy *)0x0)) {
      local_10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,4,1);
      if (0 < (int)pDVar9) {
        piVar12 = local_60;
        pDVar15 = pDVar9;
        do {
          pDVar4 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,4,1);
          *piVar12 = (int)pDVar4;
          piVar12 = piVar12 + 1;
          pDVar15 = (DArrayTy *)((int)&pDVar15[-1].data + 3);
        } while (pDVar15 != (DArrayTy *)0x0);
      }
      uVar13 = 0;
      if (0 < (int)local_c) {
        do {
          DArrayGetElement(local_18,uVar13,&local_8);
          if (local_8 != (STFishC *)0x0) {
            dVar5 = (*local_8->vtable->slot_2C)(local_8);
            pDVar15 = local_10;
            if ((dVar5 == 0x3b) || (dVar5 == 0x60)) {
LAB_00441e92:
              Library::DKW::TBL::FUN_006ae1c0(&pDVar15->flags,&local_8);
            }
            else {
              iVar3 = 0;
              if (0 < (int)pDVar9) {
                pdVar7 = local_80;
                do {
                  if (dVar5 == *pdVar7) {
                    iVar6 = (*local_8->vtable->vfunc_88)(local_4c);
                    if (0 < iVar6) {
                      pDVar15 = (DArrayTy *)local_60[iVar3];
                      goto LAB_00441e92;
                    }
                    break;
                  }
                  iVar3 = iVar3 + 1;
                  pdVar7 = pdVar7 + 1;
                } while (iVar3 < (int)pDVar9);
              }
            }
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_c);
      }
    }
    if ((local_10 == (DArrayTy *)0x0) || (local_64 = local_10->count, local_64 == 0)) {
      local_3a = 0xffff;
      local_42 = 0xffff;
      if (0 < (int)pDVar9) {
        puVar11 = (undefined4 *)((int)&g_playerRuntime[0].field6_0xf + local_20);
        pDVar15 = pDVar9;
        do {
          Library::DKW::TBL::FUN_006ae1c0((uint *)*puVar11,(undefined4 *)&local_48);
          puVar11 = puVar11 + 1;
          pDVar15 = (DArrayTy *)((int)&pDVar15[-1].data + 3);
        } while (pDVar15 != (DArrayTy *)0x0);
      }
    }
    else {
      local_c = (DArrayTy *)0x0;
      if (0 < (int)local_64) {
        do {
          DArrayGetElement(local_10,(uint)local_c,&local_8);
          STFishC::sub_004162B0(local_8,&local_40,&local_3e,&local_3c);
          local_3a = *(undefined2 *)&local_8->field_0x32;
          uVar13 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
          psVar10 = g_pathingGrid.cells;
          psVar14 = g_pathingScratchGrid.cells;
          for (uVar8 = (uVar13 & 0x7fffffff) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)psVar14 = *(undefined4 *)psVar10;
            psVar10 = psVar10 + 2;
            psVar14 = psVar14 + 2;
          }
          for (uVar13 = uVar13 * 2 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(char *)psVar14 = (char)*psVar10;
            psVar10 = (short *)((int)psVar10 + 1);
            psVar14 = (short *)((int)psVar14 + 1);
          }
          FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,
                       (int)g_pathingGrid.sizeY,(int)g_pathingGrid.sizeZ,(int)local_40,(int)local_3e
                       ,(int)local_3c,-1,-1,-1);
          if (0 < (int)local_24) {
            local_1c = local_60;
            local_18 = local_24;
            local_14 = (undefined4 *)((int)&g_playerRuntime[0].field6_0xf + local_20);
            do {
              pDVar9 = (DArrayTy *)*local_1c;
              local_68 = pDVar9;
              if ((pDVar9 == (DArrayTy *)0x0) || (local_80[4] = pDVar9->count, local_80[4] == 0)) {
                if (((uint *)*local_14)[3] == 0) {
                  local_96 = 0xffff;
                  local_9e = 0xffff;
                  Library::DKW::TBL::FUN_006ae1c0((uint *)*local_14,&local_a4);
                }
              }
              else {
                uVar13 = 0;
                if (0 < (int)local_80[4]) {
                  do {
                    DArrayGetElement(pDVar9,uVar13,&local_8);
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
                      pDVar9 = local_68;
                    }
                    local_34 = local_30;
                    Library::DKW::TBL::FUN_006ae1c0((uint *)*local_14,(undefined4 *)&local_48);
                    uVar13 = uVar13 + 1;
                  } while ((int)uVar13 < (int)local_80[4]);
                }
              }
              local_1c = local_1c + 1;
              local_14 = local_14 + 1;
              local_18 = (DArrayTy *)((int)&local_18[-1].data + 3);
            } while (local_18 != (DArrayTy *)0x0);
          }
          local_c = (DArrayTy *)((int)&local_c->flags + 1);
          pDVar9 = local_24;
        } while ((int)local_c < (int)local_64);
      }
    }
    DArrayDestroy(local_10);
    if (0 < (int)pDVar9) {
      piVar12 = local_60;
      do {
        DArrayDestroy((DArrayTy *)*piVar12);
        piVar12 = piVar12 + 1;
        pDVar9 = (DArrayTy *)((int)&pDVar9[-1].data + 3);
      } while (pDVar9 != (DArrayTy *)0x0);
    }
  }
  g_currentExceptionFrame = local_e8.previous;
  return;
}

