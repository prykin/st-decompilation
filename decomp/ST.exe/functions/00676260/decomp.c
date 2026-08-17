#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 314 | 315 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl _GetEmbrTobjGrpExch(uint param_1,int param_2)

{
  DArrayTy *array;
  int iVar2;
  STGroupBoatC *this;
  ushort *puVar2;
  STGameObjC *this_00;
  int iVar3;
  int iVar4;
  uint uVar4;
  uint uVar5;
  InternalExceptionFrame local_50;
  DArrayTy *local_c;
  int local_8;

  uVar5 = 0;
  local_c = nullptr;
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    if (g_allPlayers_007FA174 == nullptr) {
      this = nullptr;
    }
    else {
      this = thunk_FUN_0042b760((char)param_1,0);
    }
    if (this != nullptr) {
      /* ST_CALLSITE[006762B7]: CALL 0x00402db5; direct=00402DB5 STGroupC::GetGroupContent */
      local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)this);
    }
    array = local_c;
    if (local_c->count != 0) {
      uVar4 = 0;
      if (local_c->count == 0) {
        puVar2 = nullptr;
        goto LAB_006762e0;
      }
      do {
        puVar2 = DArrayAt<ushort>(array, uVar4);
LAB_006762e0:
        /* ST_CALLSITE[006762F0]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        this_00 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,(char)param_1,*puVar2,CASE_1);
        if (this_00 != nullptr) {
          /* ST_CALLSITE[006762FF]: CALL dword ptr [EAX + 0x2c] */
          iVar3 = this_00->vfunc_2C();
          if (iVar3 == 0x78) {
            iVar3 = this_00->field_0259;
          }
          else {
            iVar3 = 0;
          }
          if (param_2 == iVar3) {
            local_8 = local_8 + 1;
          }
        }
        uVar5 = uVar5 + 1;
        uVar4 = uVar5 & 0xffff;
      } while (uVar4 < array->count);
    }
    if (array != nullptr) {
      DArrayDestroy(array);
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_c != nullptr) {
    DArrayDestroy(local_c);
  }
  iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_mdef.cpp",0x13a,0,iVar2,"%s",
                             "_GetEmbrTobjGrpExch");
  if (iVar4 == 0) {
    RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_mdef.cpp",0x13b);
    return iVar2;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

