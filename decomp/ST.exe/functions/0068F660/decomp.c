#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GiveObjByGrpNum */

void __thiscall AiTactClassTy::GiveObjByGrpNum(AiTactClassTy *this,DArrayTy *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined2 *puVar5;
  STGameObjC *objPtr;
  AiFltClassTy *this_00;
  int iVar6;
  InternalExceptionFrame local_4c;
  AiTactClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    if ((param_1 != (DArrayTy *)0x0) && (uVar1 = param_1->count, uVar1 != 0)) {
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        if (uVar1 < param_1->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_1, uVar1) (runtime stride) */
          puVar5 = (undefined2 *)(param_1->elementSize * uVar1 + (int)param_1->data);
        }
        else {
          puVar5 = (undefined2 *)0x0;
        }
        if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
          objPtr = (STGameObjC *)0x0;
        }
        else {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          objPtr = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,*(char *)&local_8->field_0024,
                              CONCAT22((short)((uint)puVar5 >> 0x10),*puVar5),CASE_1);
        }
        if (objPtr != (STGameObjC *)0x0) {
          iVar4 = (*objPtr->vtable->vfunc_2C)();
          if ((iVar4 < 1) || (0x28 < iVar4)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) &&
             (this_00 = (AiFltClassTy *)sub_0068E290(local_8,objPtr->field_081C),
             this_00 != (AiFltClassTy *)0x0)) {
            AiFltClassTy::_AddObjFlt(this_00,(uint)objPtr,0);
            FUN_006b0c70(param_1,uVar1);
          }
        }
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x292,0,iVar4,"%s",
                             "AiTactClassTy::GiveObjByGrpNum");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\ai\\ai_tact.cpp",0x293);
  return;
}

