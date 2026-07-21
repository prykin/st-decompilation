#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bproc.cpp
   TLOBaseTy::procResult

   [STSwitchEnumApplier] Switch target field_0361 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0361State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_8=8 */

undefined4 __thiscall TLOBaseTy::procResult(TLOBaseTy *this)

{
  code *pcVar1;
  TLOBaseTy *pTVar2;
  int errorCode;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  InternalExceptionFrame local_50;
  TLOBaseTy *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pTVar2 = local_c;
  if (errorCode == 0) {
    switch(local_c->field_0361) {
    case CASE_1:
      uVar5 = thunk_FUN_004ceb00(local_c,local_c->field_0369);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    case CASE_2:
      uVar5 = thunk_FUN_004e2c30(local_c,local_c->field_0369);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    case CASE_3:
      uVar5 = thunk_FUN_004ea830(local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    case CASE_4:
      uVar5 = thunk_FUN_004d9c20(local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    case CASE_5:
      local_8 = 1;
      uVar3 = GetPlayerRaceId(local_c->field_023D);
      *(undefined4 *)&pTVar2->field_0x241 =
           *(undefined4 *)(&DAT_007e4178 + ((uVar3 & 0xff) + pTVar2->field_0235 * 3) * 4);
      thunk_FUN_004cc900((AnonShape_004CC900_31EE9CAA *)pTVar2);
      g_currentExceptionFrame = local_50.previous;
      return 1;
    case CASE_6:
      uVar5 = thunk_FUN_004de820((int *)local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    default:
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    case CASE_8:
      uVar5 = thunk_FUN_004ece40(local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Artem_TLO_bproc_cpp_007ad3b4,0x291,0,errorCode,
                             &DAT_007a4ccc,s_TLOBaseTy__procResult_error_007ad3ec);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Artem_TLO_bproc_cpp_007ad3b4,0x292);
  return 0;
}

