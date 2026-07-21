#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::BackFromRepair */

void __thiscall AiTactClassTy::BackFromRepair(AiTactClassTy *this,short param_1)

{
  code *pcVar1;
  AiTactClassTy *this_00;
  void *this_01;
  int iVar2;
  int iVar3;
  uint *puVar4;
  InternalExceptionFrame local_80;
  uint local_3c [2];
  short local_33;
  undefined4 local_31;
  DArrayTy *local_2b;
  AiTactClassTy *local_8;

  puVar4 = local_3c;
  local_8 = this;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
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
    local_2b = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,2,10);
    thunk_FUN_006902b0(this_00,-0x8000,local_3c);
    this_01 = (void *)thunk_FUN_0068e290(this_00,param_1);
    if (this_01 != (void *)0x0) {
      thunk_FUN_0065d940(this_01,&local_2b->flags,0);
    }
    g_currentExceptionFrame = local_80.previous;
    return;
  }
  g_currentExceptionFrame = local_80.previous;
  if (local_2b != (DArrayTy *)0x0) {
    DArrayDestroy(local_2b);
  }
  iVar2 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x2fb,0,iVar3,&DAT_007a4ccc,
                             s_AiTactClassTy__BackFromRepair_007d5850);
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x2fc);
  return;
}

