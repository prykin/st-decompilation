#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetObjsList */

uint * STAllPlayersC::GetObjsList(char param_1)

{
  int *piVar1;
  code *pcVar2;
  DArrayTy *pDVar3;
  dword dVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  DArrayTy *pDVar8;
  int iVar9;
  uint *puVar10;
  InternalExceptionFrame local_58;
  DArrayTy *local_14;
  dword local_10;
  uint local_c;
  int local_8;

  local_14 = g_playerRuntime[param_1].objects;
  local_10 = local_14->count;
  uVar6 = thunk_FUN_0043e460(param_1);
  local_c = (uint)uVar6;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar7 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  uVar5 = local_c;
  if (iVar7 == 0) {
    pDVar8 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,local_c,2,1);
    dVar4 = local_10;
    pDVar3 = local_14;
    if ((uVar5 != 0) && (local_8 = 0, 0 < (int)local_10)) {
      do {
        piVar1 = *(int **)((int)pDVar3->data + local_8 * 4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if ((piVar1 != (int *)0x0) && (iVar7 = (**(code **)(*piVar1 + 0xf8))(), iVar7 == 1)) {
          Library::DKW::TBL::FUN_006ae1c0(&pDVar8->flags,&local_8);
        }
        local_8 = local_8 + 1;
      } while (local_8 < (int)dVar4);
    }
    g_currentExceptionFrame = local_58.previous;
    return &pDVar8->flags;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1f8c,0,iVar7,"%s",
                             "STAllPlayersC::GetObjsList");
  if (iVar9 == 0) {
    RaiseInternalException(iVar7,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x1f8d);
    return (uint *)0x0;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

