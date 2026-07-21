#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::RunGame */

void __thiscall SettMapMTy::RunGame(SettMapMTy *this)

{
  MMsgTy *this_00;
  code *pcVar1;
  SettMapMTy *pSVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (DAT_0080877e != '\0') {
      FUN_006b7070(g_int_00811764);
    }
    pSVar2 = local_8;
    thunk_FUN_005b6350(local_8,0x6948,0,0);
    pSVar2->field_21E6 = 1;
    pSVar2->field_21E5 = 1;
    pSVar2->field_21E4 = 1;
    pSVar2->field_21E7 = 1;
    pSVar2->field_21E2 = 1;
    pSVar2->field_21E1 = 1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)pSVar2->field_0000->field_0008)();
    this_00 = pSVar2->field_1A5B->field_02E6;
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(this_00,1,0,1);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x998,0,errorCode,
                             &DAT_007a4ccc,s_SettMapMTy__RunGame_007cd510);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_settmobj_cpp_007cd258,0x998);
  return;
}

