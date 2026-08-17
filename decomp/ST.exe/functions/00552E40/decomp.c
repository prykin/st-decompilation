#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00552E40; family_names=UpgPanelTy::GetMessage; ret4=3;
   direct_offsets={10:1,14:0,18:0,1c:0} */

int __thiscall UpgPanelTy::GetMessage(UpgPanelTy *this,STMessage *message)

{
  UpgPanelTy *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  UpgPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\upginfo.cpp",0x68,0,iVar2,"%s",
                               "UpgPanelTy::GetMessage");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\upginfo.cpp",0x68);
    return 0xffff;
  }
  /* ST_CALLSITE[00552E79]: CALL 0x00401401; direct=00401401 SpecPanelTy::GetMessage */
  SpecPanelTy::GetMessage((SpecPanelTy *)local_8,message);
  if (message->id == MESS_ID_CREATE) {
    /* ST_CALLSITE[00552EA4]: CALL 0x00401d20; direct=00401D20 UpgPanelTy::InitUpgPanel */
    InitUpgPanel(this_00);
  }
  else if (message->id == MESS_SHARED_0003) {
    /* ST_CALLSITE[00552E8B]: CALL 0x00401ab4; direct=00401AB4 UpgPanelTy::DoneUpgPanel */
    DoneUpgPanel(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

