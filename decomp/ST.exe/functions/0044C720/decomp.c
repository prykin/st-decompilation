#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetScrObjList */

ushort * __thiscall
STAllPlayersC::GetScrObjList
          (STAllPlayersC *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int *param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  bool bVar6;
  int local_EAX_39;
  DArrayTy *pDVar7;
  int iVar6;
  ushort *puVar8;
  int iVar12;
  uint uVar9;
  uint uVar10;
  byte *puVar11;
  int iVar13;
  byte *puVar14;
  bool bVar15;
  InternalExceptionFrame local_68;
  byte local_24;
  undefined3 uStack_23;
  DArrayTy *local_20;
  int local_1c;
  int local_18;
  ushort *local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 local_e;
  short *local_c;
  int local_8;

  iVar13 = 0;
  local_14 = nullptr;
  local_20 = nullptr;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_EAX_39 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (local_EAX_39 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (local_EAX_39 != -0x5001fff7) {
      iVar12 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x32ad,0,0,"%s",
                                  "STAllPlayersC::GetScrObjList");
      if (iVar12 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(local_EAX_39,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x32ae);
    }
    goto LAB_0044cb54;
  }
  if (param_1 < 1) {
LAB_0044cada:
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x32a9,0,0,"%s",
                               "STAllPlayersC::GetScrObjList invalid mode");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    g_currentExceptionFrame = local_68.previous;
  }
  else {
    if (param_1 < 3) {
      Library::Ourlib::ST3DSPR::FUN_006ead90
                (g_sT3DSMAPContext_00807598,param_2,param_3,param_4,param_5,&local_c,&local_8);
      if (local_8 == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x3268);
      }
      pDVar7 = Library::DKW::TBL::DArrayCreate(nullptr,0,4,1);
      bVar6 = false;
      local_18 = 0;
      local_20 = pDVar7;
      if (0 < local_8) {
        local_1c = 0;
        do {
          piVar4 = *(int **)(local_1c + 4 + (int)local_c);
          uVar9 = (uint)DAT_0080874d;
          if (piVar4[9] != uVar9) {
            uVar10 = piVar4[8];
            if (uVar10 < 0x1af) {
              if (uVar10 == 0x1ae) {
                local_f = 3;
LAB_0044c950:
                if (((uint)piVar4[9] < 8) &&
                   ((g_playSystem_00802A38 == nullptr ||
                    (g_bulkInitializedRecords_008087C7[piVar4[9]].field_0022 < 8)))) {
                  bVar1 = ((byte *)piVar4)[9];
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_24 = CONCAT31(uStack_23,bVar1);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == DAT_0080874d) {
LAB_0044ca10:
                      iVar13 = 0;
                    }
                    else {
                      bVar2 = g_playerRelationMatrix[bVar1][uVar9];
                      if ((bVar2 == 0) && (g_playerRelationMatrix[uVar9][bVar1] == 0)) {
                        iVar13 = -2;
                      }
                      else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar9][bVar1] == 0)) {
                        iVar13 = -1;
                      }
                      else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar9][bVar1] == 1)) {
                        iVar13 = 1;
                      }
                      else {
                        if ((bVar2 != 1) || (g_playerRelationMatrix[uVar9][bVar1] != 1))
                        goto LAB_0044ca10;
                        iVar13 = 2;
                      }
                    }
                    bVar15 = iVar13 < 0;
                  }
                  else {
                    bVar15 = g_bulkInitializedRecords_008087C7[uVar9].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar1].field_0023;
                  }
                  /* ST_CALLSITE[0044CA23]: CALL dword ptr [EDX + 0xf8] */
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                  if (((bVar15) && (iVar13 = (**(code **)(*piVar4 + 0xf8))(), iVar13 != 0)) &&
                     /* ST_CALLSITE[0044CA3A]: CALL dword ptr [EAX + 0xf4] */
                     (iVar13 = (**(code **)(*piVar4 + 0xf4))(DAT_0080874d), iVar13 != 0)) {
                    local_10 = (undefined1)piVar4[9];
                    local_e = STField<undefined2>(piVar4,0x32);
                    Library::DKW::TBL::DArrayAppend(pDVar7,&local_10);
                    bVar6 = true;
                  }
                }
              }
              else if (uVar10 == 0x14) goto LAB_0044c94c;
            }
            else if ((999 < uVar10) && (uVar10 < 0x3ea)) {
LAB_0044c94c:
              local_f = 1;
              goto LAB_0044c950;
            }
          }
          local_18 = local_18 + 1;
          local_1c = local_1c + 0x14;
        } while (local_18 < local_8);
      }
      FUN_006a5e90(local_c);
      if (!bVar6) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x327d);
      }
      uVar9 = pDVar7->count * 4 + 3;
      *param_6 = uVar9;
      local_14 = Library::DKW::LIB::MemAlloc(uVar9);
      *local_14 = (ushort)pDVar7->count;
      ((undefined1 *)local_14)[1] = (undefined1)param_1;
      puVar11 = (byte *)(pDVar7->data);
      uVar9 = (uint)*local_14 << 2;
    }
    else {
      if (param_1 != 3) goto LAB_0044cada;
      Library::Ourlib::ST3DSPR::FUN_006ead90
                (g_sT3DSMAPContext_00807598,param_2,param_3,param_4,param_5,&local_c,&local_8);
      if (local_8 == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x3291);
      }
      pDVar7 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
      bVar6 = false;
      local_18 = 0;
      local_20 = pDVar7;
      if (0 < local_8) {
        do {
          iVar3 = *(int *)(iVar13 + 4 + (int)local_c);
          uVar9 = *(uint *)(iVar3 + 0x20);
          if (((uVar9 == 0x14) || ((999 < uVar9 && (uVar9 < 0x3ea)))) &&
             (*(uint *)(iVar3 + 0x24) == (uint)DAT_0080874d)) {
            Library::DKW::TBL::DArrayAppend(pDVar7,(void *)(iVar3 + 0x32));
            bVar6 = true;
          }
          local_18 = local_18 + 1;
          iVar13 = iVar13 + 0x14;
        } while (local_18 < local_8);
      }
      FreeAndNull(&local_c);
      if (!bVar6) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x32a1);
      }
      uVar9 = pDVar7->count * 2 + 3;
      *param_6 = uVar9;
      local_14 = Library::DKW::LIB::MemAlloc(uVar9);
      *local_14 = (ushort)pDVar7->count;
      ((undefined1 *)local_14)[1] = 3;
      puVar11 = (byte *)(pDVar7->data);
      uVar9 = (uint)*local_14 << 1;
    }
    puVar14 = (byte *)((int)local_14 + 3);
    memmove(puVar14, puVar11, uVar9); /* compiler REP MOVS byte copy */
    g_currentExceptionFrame = local_68.previous;
  }
LAB_0044cb54:
  puVar8 = local_14;
  if (local_20 != nullptr) {
    DArrayDestroy(local_20);
  }
  return puVar8;
}

