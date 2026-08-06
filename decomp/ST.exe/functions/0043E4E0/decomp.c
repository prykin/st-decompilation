#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetObjsList */

uint * STAllPlayersC::GetObjsList(char param_1)

{
  int *piVar1;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  int iVar5;
  DArrayTy *array;
  int iVar8;
  int iVar7;
  uint *puVar9;
  InternalExceptionFrame local_58;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;

  local_14 = g_packedRecords_A62x8[param_1].field3_0x9;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(int *)(local_14 + 0xc);
  uVar6 = thunk_FUN_0043e460(param_1);
  local_c = (uint)uVar6;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  uVar5 = local_c;
  if (iVar5 == 0) {
    array = Library::DKW::TBL::DArrayCreate(nullptr,local_c,2,1);
    iVar4 = local_10;
    iVar3 = local_14;
    if ((uVar5 != 0) && (local_8 = 0, 0 < local_10)) {
      do {
        piVar1 = *(int **)(*(int *)(iVar3 + 0x1c) + local_8 * 4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if ((piVar1 != nullptr) && (iVar8 = (**(code **)(*piVar1 + 0xf8))(), iVar8 == 1)) {
          Library::DKW::TBL::DArrayAppend(array,&local_8);
        }
        local_8 = local_8 + 1;
      } while (local_8 < iVar4);
    }
    g_currentExceptionFrame = local_58.previous;
    return &array->flags;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1f8c,0,iVar5,"%s",
                             "STAllPlayersC::GetObjsList");
  if (iVar7 == 0) {
    RaiseInternalException(iVar5,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x1f8d);
    return nullptr;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

