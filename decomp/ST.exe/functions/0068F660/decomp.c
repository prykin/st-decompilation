#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GiveObjByGrpNum */

void __thiscall AiTactClassTy::GiveObjByGrpNum(AiTactClassTy *this,DArrayTy *param_1)

{
  uint index;
  bool bVar2;
  int iVar3;
  ushort *puVar4;
  STGameObjC *this_00;
  AiFltClassTy *this_01;
  int iVar5;
  InternalExceptionFrame local_4c;
  AiTactClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar3 == 0) {
    if ((param_1 != nullptr) && (index = param_1->count, index != 0)) {
      while (index = index - 1, -1 < (int)index) {
        if (index < param_1->count) {
          puVar4 = DArrayAt<ushort>(param_1, index);
        }
        else {
          puVar4 = nullptr;
        }
        if (g_allPlayers_007FA174 == nullptr) {
          this_00 = nullptr;
        }
        else {
          this_00 = STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,*(char *)&local_8->field_0024,*puVar4,CASE_1);
        }
        if (this_00 != nullptr) {
          iVar3 = this_00->vfunc_2C();
          if ((iVar3 < 1) || (0x28 < iVar3)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) &&
             (this_01 = (AiFltClassTy *)sub_0068E290(local_8,this_00->field_081C),
             this_01 != nullptr)) {
            AiFltClassTy::_AddObjFlt(this_01,(uint)this_00,0);
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

