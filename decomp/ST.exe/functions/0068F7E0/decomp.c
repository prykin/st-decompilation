#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::InitDistrObj */

void __thiscall AiTactClassTy::InitDistrObj(AiTactClassTy *this)

{
  AiTactClassTy *this_00;
  int errorCode;
  AiTactClassTy *array;
  int iVar2;
  InternalExceptionFrame local_50;
  AiTactClassTy *local_c;
  AiTactClassTy *local_8;

  local_8 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode == 0) {
    /* ST_CALLSITE[0068F81E]: CALL 0x00404da9; direct=00404DA9 _GetStaffGrpExch; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiTactClassTy; signature=__cdecl;pointer:/AiTactClassTy;/undefined4 */
    array = _GetStaffGrpExch(local_c->field_0024);
    local_8 = array;
    /* ST_CALLSITE[0068F82E]: CALL 0x00403e04; direct=00403E04 AiTactClassTy::GiveObjByClaim */
    GiveObjByClaim(this_00,(uint *)array);
    /* ST_CALLSITE[0068F836]: CALL 0x004040f2; direct=004040F2 AiTactClassTy::GiveObjByFltType */
    GiveObjByFltType(this_00,(uint *)array);
    if (array != nullptr) {
      DArrayDestroy((DArrayTy *)array);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != nullptr) {
    DArrayDestroy((DArrayTy *)local_8);
    local_8 = nullptr;
  }

  iVar2 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x2a8,0,errorCode,"%s",
                             "AiTactClassTy::InitDistrObj");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_tact.cpp",0x2a9);
  return;
}

