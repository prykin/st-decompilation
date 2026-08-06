#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_MakeMDPairs

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall STAllPlayersC::_MakeMDPairs(STAllPlayersC *this,char param_1)

{
  byte bVar2;
  int iVar3;
  DArrayTy *pDVar3;
  dword dVar4;
  int iVar5;
  int iVar9;
  dword *pdVar6;
  uint uVar7;
  DArrayTy *pDVar8;
  int iVar10;
  short *psVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint uVar14;
  short *psVar15;
  DArrayTy *pDVar16;
  InternalExceptionFrame local_e8;
  undefined1 local_a4 [6];
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
  pDVar8 = local_24;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_e8.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x23c5,0,iVar3,"%s"
                               ,"STAllPlayersC::_MakeMDPairs");
    if (iVar9 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x23c6);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar10 = (int)param_1;
  if (0 < (int)local_24) {
    local_c = local_24;
    puVar12 = &g_packedRecords_A62x8[iVar10].field5_0xf;
    do {
      if ((DArrayTy *)*puVar12 != nullptr) {
        DArrayDestroy((DArrayTy *)*puVar12);
        *puVar12 = 0;
      }
      puVar12 = puVar12 + 1;
      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
    } while (local_c != nullptr);
  }
  local_60[3] = 0;
  local_60[2] = 0;
  local_60[1] = 0;
  local_60[0] = 0;
  local_10 = nullptr;
  /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
  local_20 = iVar10 * 0xa62;
  if (g_packedRecords_A62x8[iVar10].field0_0x0 != '\0') {
    if (0 < (int)pDVar8) {
      puVar12 = &g_packedRecords_A62x8[iVar10].field5_0xf;
      pDVar16 = pDVar8;
      do {
        pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0,0x24,1);
        *puVar12 = pDVar3;
        puVar12 = puVar12 + 1;
        pDVar16 = (DArrayTy *)((int)&pDVar16[-1].data + 3);
      } while (pDVar16 != nullptr);
    }
    local_18 = *(DArrayTy **)((int)&g_packedRecords_A62x8[0].field3_0x9 + local_20);
    if ((local_18 != nullptr) &&
       (local_c = (DArrayTy *)local_18->count, local_c != nullptr)) {
      local_10 = Library::DKW::TBL::DArrayCreate(nullptr,0,4,1);
      if (0 < (int)pDVar8) {
        piVar13 = local_60;
        pDVar16 = pDVar8;
        do {
          pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0,4,1);
          *piVar13 = (int)pDVar3;
          piVar13 = piVar13 + 1;
          pDVar16 = (DArrayTy *)((int)&pDVar16[-1].data + 3);
        } while (pDVar16 != nullptr);
      }
      uVar14 = 0;
      if (0 < (int)local_c) {
        do {
          DArrayGetElement(local_18,uVar14,&local_8);
          if (local_8 != nullptr) {
            dVar4 = local_8->slot_2C();
            pDVar16 = local_10;
            if ((dVar4 == 0x3b) || (dVar4 == 0x60)) {
LAB_00441e92:
              Library::DKW::TBL::DArrayAppend(pDVar16,&local_8);
            }
            else {
              iVar10 = 0;
              if (0 < (int)pDVar8) {
                pdVar6 = local_80;
                do {
                  if (dVar4 == *pdVar6) {
                    iVar5 = (*local_8->vtable->vfunc_88)(local_4c);
                    if (0 < iVar5) {
                      pDVar16 = (DArrayTy *)local_60[iVar10];
                      goto LAB_00441e92;
                    }
                    break;
                  }
                  iVar10 = iVar10 + 1;
                  pdVar6 = pdVar6 + 1;
                } while (iVar10 < (int)pDVar8);
              }
            }
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_c);
      }
    }
    if ((local_10 == nullptr) || (local_64 = local_10->count, local_64 == 0)) {
      local_3a = 0xffff;
      local_42 = 0xffff;
      if (0 < (int)pDVar8) {
        puVar12 = (undefined4 *)((int)&g_packedRecords_A62x8[0].field5_0xf + local_20);
        pDVar16 = pDVar8;
        do {
          Library::DKW::TBL::DArrayAppend((DArrayTy *)*puVar12,&local_48);
          puVar12 = puVar12 + 1;
          pDVar16 = (DArrayTy *)((int)&pDVar16[-1].data + 3);
        } while (pDVar16 != nullptr);
      }
    }
    else {
      local_c = nullptr;
      if (0 < (int)local_64) {
        do {
          DArrayGetElement(local_10,(uint)local_c,&local_8);
          STFishC::sub_004162B0(local_8,&local_40,&local_3e,&local_3c);
          local_3a = *(undefined2 *)&local_8->field_0x32;
          uVar14 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
          psVar11 = g_pathingGrid.cells;
          psVar15 = g_pathingScratchGrid.cells;
          for (uVar7 = (uVar14 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)psVar15 = *(undefined4 *)psVar11;
            psVar11 = psVar11 + 2;
            psVar15 = psVar15 + 2;
          }
          for (uVar14 = uVar14 * 2 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(char *)psVar15 = (char)*psVar11;
            psVar11 = (short *)((int)psVar11 + 1);
            psVar15 = (short *)((int)psVar15 + 1);
          }
          FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,
                       (int)g_pathingGrid.sizeY,(int)g_pathingGrid.sizeZ,(int)local_40,(int)local_3e
                       ,(int)local_3c,-1,-1,-1);
          if (0 < (int)local_24) {
            local_1c = local_60;
            local_18 = local_24;
            local_14 = (undefined4 *)((int)&g_packedRecords_A62x8[0].field5_0xf + local_20);
            do {
              pDVar8 = (DArrayTy *)*local_1c;
              local_68 = pDVar8;
              if ((pDVar8 == nullptr) || (local_80[4] = pDVar8->count, local_80[4] == 0)) {
                if (((DArrayTy *)*local_14)->count == 0) {
                  local_96 = 0xffff;
                  local_9e = 0xffff;
                  Library::DKW::TBL::DArrayAppend((DArrayTy *)*local_14,local_a4);
                }
              }
              else {
                uVar14 = 0;
                if (0 < (int)local_80[4]) {
                  do {
                    DArrayGetElement(pDVar8,uVar14,&local_8);
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
                      pDVar8 = local_68;
                    }
                    local_34 = local_30;
                    Library::DKW::TBL::DArrayAppend((DArrayTy *)*local_14,&local_48);
                    uVar14 = uVar14 + 1;
                  } while ((int)uVar14 < (int)local_80[4]);
                }
              }
              local_1c = local_1c + 1;
              local_14 = local_14 + 1;
              local_18 = (DArrayTy *)((int)&local_18[-1].data + 3);
            } while (local_18 != nullptr);
          }
          local_c = (DArrayTy *)((int)&local_c->flags + 1);
          pDVar8 = local_24;
        } while ((int)local_c < (int)local_64);
      }
    }
    DArrayDestroy(local_10);
    if (0 < (int)pDVar8) {
      piVar13 = local_60;
      do {
        DArrayDestroy((DArrayTy *)*piVar13);
        piVar13 = piVar13 + 1;
        pDVar8 = (DArrayTy *)((int)&pDVar8[-1].data + 3);
      } while (pDVar8 != nullptr);
    }
  }
  g_currentExceptionFrame = local_e8.previous;
  return;
}

