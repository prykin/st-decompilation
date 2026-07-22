#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_BldMark.cpp
   TLOBldMark::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004044D5|004C6A00; family_names=TLOBldMark::GetMessage; ret4=4;
   direct_offsets={10:1,14:1,18:0,1c:0} */

int __thiscall TLOBldMark::GetMessage(TLOBldMark *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  TLOBldMark *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_BldMark.cpp",0xb6,0,iVar3,
                               "%s","TLOBldMark::GetMessage error");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Artem\\TLO_BldMark.cpp",0xb7);
    return iVar3;
  }
  SVar1 = message->id;
  if (SVar1 == MESS_ID_NONE) {
    sub_004C61E0(local_8);
  }
  else {
    if (SVar1 == MESS_ID_CREATE) {
      Create(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar1 == MESS_SHARED_0003) {
      sub_004C61A0(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

