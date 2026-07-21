#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::SetTech */

int __thiscall
AiPlrClassTy::SetTech(AiPlrClassTy *this,int param_1,int param_2,int param_3,undefined1 param_4)

{
  code *pcVar1;
  AiPlrClassTy *pAVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_60;
  undefined1 local_1c;
  undefined2 uStack_1b;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined2 uStack_17;
  undefined1 uStack_15;
  int local_14;
  int local_10;
  undefined2 local_c;
  AiPlrClassTy *local_8;

  local_8 = this;
  iVar3 = thunk_FUN_0067b2e0(this,param_1,param_2);
  if (0 < iVar3) {
    return 0;
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar3 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  pAVar2 = local_8;
  if (iVar3 == 0) {
    local_1c = param_4;
    uStack_1b = (undefined2)param_1;
    local_c = 0;
    uStack_15 = 0;
    uStack_17 = 1;
    uStack_19 = (undefined1)param_2;
    uStack_18 = (undefined1)((uint)param_2 >> 8);
    if (0 < param_3) {
      uStack_17 = (undefined2)param_3;
    }
    local_14 = iVar3;
    local_10 = iVar3;
    Library::DKW::TBL::FUN_006ae1c0(&local_8->field_06A1->flags,(undefined4 *)&local_1c);
    thunk_FUN_00676c40((AnonShape_00413AF0_B6B4EE9A *)pAVar2->field_06A1,&LAB_004029b9);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  g_currentExceptionFrame = local_60.previous;
  iVar4 = ReportDebugMessage(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x3a9,0,iVar3,&DAT_007a4ccc,
                             s_AiPlrClassTy__SetTech_007d2ef4);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_ai_ai_plr_cpp_007d2e4c,0x3aa);
  return iVar3;
}

