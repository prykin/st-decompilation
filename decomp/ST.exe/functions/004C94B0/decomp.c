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
    switch(*(undefined4 *)&local_c->field_0x361) {
    case 1:
      uVar5 = sub_004CEB00(local_c,*(undefined4 *)&local_c->field_0x369);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    case 2:
      uVar5 = thunk_FUN_004e2c30(local_c,*(uint *)&local_c->field_0x369);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    case 3:
      uVar5 = thunk_FUN_004ea830(local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    case 4:
      uVar5 = thunk_FUN_004d9c20(local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    case 5:
      local_8 = 1;
      uVar3 = GetPlayerRaceId(*(char *)&local_c->field_023D);
      pTVar2->field_0241 = *(int *)(&DAT_007e4178 + ((uVar3 & 0xff) + pTVar2->field_0235 * 3) * 4);
      thunk_FUN_004cc900((AnonShape_004CC900_31EE9CAA *)pTVar2);
      g_currentExceptionFrame = local_50.previous;
      return 1;
    case 6:
      uVar5 = thunk_FUN_004de820((int *)local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    default:
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    case 8:
      uVar5 = thunk_FUN_004ece40(local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_bproc.cpp",0x291,0,errorCode,
                             "%s","TLOBaseTy::procResult error");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Artem\\TLO_bproc.cpp",0x292);
  return 0;
}

