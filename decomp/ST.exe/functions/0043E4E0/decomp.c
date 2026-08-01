#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetObjsList */

uint * STAllPlayersC::GetObjsList(char param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  DArrayTy *array;
  int iVar6;
  int iVar7;
  uint *puVar8;
  InternalExceptionFrame local_58;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;

  local_14 = g_playerRuntime[param_1].field6_0x9;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(int *)(local_14 + 0xc);
  uVar4 = thunk_FUN_0043e460(param_1);
  local_c = (uint)uVar4;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  uVar3 = local_c;
  if (iVar5 == 0) {
    array = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,local_c,2,1);
    iVar7 = local_10;
    iVar5 = local_14;
    if ((uVar3 != 0) && (local_8 = 0, 0 < local_10)) {
      do {
        piVar1 = *(int **)(*(int *)(iVar5 + 0x1c) + local_8 * 4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if ((piVar1 != (int *)0x0) && (iVar6 = (**(code **)(*piVar1 + 0xf8))(), iVar6 == 1)) {
          Library::DKW::TBL::DArrayAppend(array,&local_8);
        }
        local_8 = local_8 + 1;
      } while (local_8 < iVar7);
    }
    g_currentExceptionFrame = local_58.previous;
    return &array->flags;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1f8c,0,iVar5,"%s",
                             "STAllPlayersC::GetObjsList");
  if (iVar7 == 0) {
    RaiseInternalException(iVar5,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x1f8d);
    return (uint *)0x0;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

