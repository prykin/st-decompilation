#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CreateCtrls

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10 */

void __thiscall FSGSTy::CreateCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *pFVar2;
  int errorCode;
  int iVar3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_ESI;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pFVar2 = local_8;
  if (errorCode == 0) {
    switch(local_8->field_1A5F) {
    case CASE_2:
      LoginCtrls(local_8);
      pFVar2->field_1A62 = 1;
      g_currentExceptionFrame = local_4c.previous;
      return;
    case CASE_3:
      LicCtrls(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case CASE_4:
      NewIDCtrls(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case CASE_5:
      PswCtrls(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case CASE_6:
      ChatCtrls(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case CASE_7:
      NewGameCtrls(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case CASE_8:
      JoinGameCtrls(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case CASE_9:
      LadderCtrls(local_8);
      break;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    case CASE_A:
      InfoCtrls(local_8,unaff_ESI);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x582,0,errorCode,
                             &DAT_007a4ccc,s_FSGSTy__CreateCtrls_007cc2cc);
  if (iVar3 == 0) {
    RaiseInternalException(errorCode,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x582);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

