#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GiveObjByGrpNum */

void __thiscall AiTactClassTy::GiveObjByGrpNum(AiTactClassTy *this,DArrayTy *param_1)

{
  uint index;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ushort *puVar4;
  STGameObjC *objPtr;
  AiFltClassTy *this_00;
  int iVar5;
  InternalExceptionFrame local_4c;
  AiTactClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar3 == 0) {
    if ((param_1 != (DArrayTy *)0x0) && (index = param_1->count, index != 0)) {
      while (index = index - 1, -1 < (int)index) {
        if (index < param_1->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_1, index) (runtime stride) */
          puVar4 = (ushort *)(param_1->elementSize * index + (int)param_1->data);
        }
        else {
          puVar4 = (ushort *)0x0;
        }
        if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
          objPtr = (STGameObjC *)0x0;
        }
        else {
          objPtr = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,*(char *)&local_8->field_0024,*puVar4,CASE_1);
        }
        if (objPtr != (STGameObjC *)0x0) {
          iVar3 = (*objPtr->vtable->vfunc_2C)();
          if ((iVar3 < 1) || (0x28 < iVar3)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) &&
             (this_00 = (AiFltClassTy *)sub_0068E290(local_8,objPtr->field_081C),
             this_00 != (AiFltClassTy *)0x0)) {
            AiFltClassTy::_AddObjFlt(this_00,(uint)objPtr,0);
            DArrayRemoveAt(param_1,index);
          }
        }
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x292,0,iVar3,"%s",
                             "AiTactClassTy::GiveObjByGrpNum");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_tact.cpp",0x293);
  return;
}

