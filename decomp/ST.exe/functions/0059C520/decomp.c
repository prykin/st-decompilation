#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CreateCtrls

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10 */

void __thiscall FSGSTy::CreateCtrls(FSGSTy *this)

{
  FSGSTy *pFVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pFVar2 = local_8;
  if (errorCode == 0) {
    switch(local_8->array_00BC[0xc].field_01DF) {
    case 2:
      /* ST_CALLSITE[0059C571]: CALL 0x00402392; direct=00402392 FSGSTy::LoginCtrls */
      LoginCtrls(local_8);
      pFVar2->array_00BC[0xc].field_01E2 = 1;
      g_currentExceptionFrame = local_4c.previous;
      return;
    case 3:
      /* ST_CALLSITE[0059C5B4]: CALL 0x00401d75; direct=00401D75 FSGSTy::LicCtrls */
      LicCtrls(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case 4:
      /* ST_CALLSITE[0059C58C]: CALL 0x00402022; direct=00402022 FSGSTy::NewIDCtrls */
      NewIDCtrls(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case 5:
      /* ST_CALLSITE[0059C5A0]: CALL 0x004032d3; direct=004032D3 FSGSTy::PswCtrls */
      PswCtrls(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case 6:
      /* ST_CALLSITE[0059C5C8]: CALL 0x00404570; direct=00404570 FSGSTy::ChatCtrls */
      ChatCtrls(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case 7:
      /* ST_CALLSITE[0059C5DC]: CALL 0x00403fad; direct=00403FAD FSGSTy::NewGameCtrls */
      NewGameCtrls(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case 8:
      /* ST_CALLSITE[0059C5F0]: CALL 0x0040196a; direct=0040196A FSGSTy::JoinGameCtrls */
      JoinGameCtrls(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    case 9:
      /* ST_CALLSITE[0059C618]: CALL 0x00404421; direct=00404421 FSGSTy::LadderCtrls */
      LadderCtrls(local_8);
      break;
    case 10:
      /* ST_CALLSITE[0059C604]: CALL 0x00402626; direct=00402626 FSGSTy::InfoCtrls */
      InfoCtrls(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x582,0,errorCode,
                             "%s","FSGSTy::CreateCtrls");
  if (iVar3 == 0) {
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x582);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

