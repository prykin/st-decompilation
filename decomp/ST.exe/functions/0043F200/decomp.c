#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetTOBJList */

uint * __thiscall STAllPlayersC::GetTOBJList(STAllPlayersC *this,char param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar4;
  byte *pbVar5;
  int iVar7;
  int iVar6;
  uint *puVar8;
  byte *pbVar9;
  bool bVar10;
  InternalExceptionFrame local_64;
  byte local_20 [16];
  int local_10;
  DArrayTy *local_c;
  int local_8;

  local_10 = g_packedRecords_A62x8[param_1].field3_0x9;
  local_8 = STField<int>(local_10,0xC);
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar4 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2075,0,iVar4,"%s"
                               ,"STAllPlayersC::GetTOBJList");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2076);
    return nullptr;
  }
  local_c = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
  iVar4 = 0;
  if (0 < local_8) {
    do {
      piVar2 = *(int **)(STField<int>(local_10,0x1C) + iVar4 * 4);
      if (piVar2 != nullptr) {
        /* ST_CALLSITE[0043F280]: CALL dword ptr [EDX + 0x74] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*piVar2 + 0x74))(local_20);
        pbVar9 = local_20;
        pbVar5 = param_2;
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_0043f2ad:
            iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_0043f2b2;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_0043f2ad;
          pbVar5 = pbVar5 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_0043f2b2:
        if (iVar7 == 0) {
          Library::DKW::TBL::DArrayAppend(local_c,(void *)((int)piVar2 + 0x32));
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_8);
  }
  g_currentExceptionFrame = local_64.previous;
  return &local_c->flags;
}

