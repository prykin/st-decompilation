#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::BackFromRepair */

void __thiscall AiTactClassTy::BackFromRepair(AiTactClassTy *this,short param_1)

{
  AiTactClassTy *this_00;
  int iVar3;
  void *this_01;
  int iVar2;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_80;
  uint local_3c [2];
  short local_33;
  undefined4 local_31;
  DArrayTy *local_2b;
  AiTactClassTy *local_8;

  puVar5 = local_3c;
  local_8 = this;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  iVar3 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    local_3c[1] = local_8->field_012C;
    local_3c[0] = 0x76;
    local_33 = param_1;
    local_31 = 0;
    local_2b = Library::DKW::TBL::DArrayCreate(nullptr,10,2,10);
    /* ST_CALLSITE[0068FBA8]: CALL 0x00403cdd; direct=00403CDD AiTactClassTy::sub_006902B0 */
    sub_006902B0(this_00,-0x8000,local_3c);
    /* ST_CALLSITE[0068FBB0]: CALL 0x00405b23; direct=00405B23 AiTactClassTy::sub_0068E290 */
    this_01 = (void *)sub_0068E290(this_00,param_1);
    if (this_01 != nullptr) {
      thunk_FUN_0065d940(this_01,local_2b,0);
    }
    g_currentExceptionFrame = local_80.previous;
    return;
  }
  g_currentExceptionFrame = local_80.previous;
  if (local_2b != nullptr) {
    DArrayDestroy(local_2b);
  }
  iVar2 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x2fb,0,iVar3,"%s",
                             "AiTactClassTy::BackFromRepair");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_tact.cpp",0x2fc);
  return;
}

