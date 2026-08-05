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
  ushort *puVar3;
  STGameObjC *pSVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  InternalExceptionFrame local_50;
  DArrayTy *local_c;
  int local_8;

  uVar7 = 0;
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
      local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)this);
    }
    array = local_c;
    if (local_c->count != 0) {
      uVar6 = 0;
      if (local_c->count == 0) {
        puVar3 = nullptr;
        goto LAB_006762e0;
      }
      do {
        puVar3 = DArrayAt<ushort>(array, uVar6);
LAB_006762e0:
        pSVar4 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,(char)param_1,*puVar3,CASE_1);
        if (pSVar4 != nullptr) {
          iVar2 = (*pSVar4->vtable->vfunc_2C)();
          if (iVar2 == 0x78) {
            iVar2 = pSVar4->field_0259;
          }
          else {
            iVar2 = 0;
          }
          if (param_2 == iVar2) {
            local_8 = local_8 + 1;
          }
        }
        uVar7 = uVar7 + 1;
        uVar6 = uVar7 & 0xffff;
      } while (uVar6 < array->count);
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
  iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_mdef.cpp",0x13a,0,iVar2,"%s",
                             "_GetEmbrTobjGrpExch");
  if (iVar5 == 0) {
    RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_mdef.cpp",0x13b);
    return iVar2;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

