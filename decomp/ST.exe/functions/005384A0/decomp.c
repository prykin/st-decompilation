#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004017F8|005384A0; family_names=PanelTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:0,18:0,1c:0} */

int __thiscall PanelTy::GetMessage(PanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  PanelTy *this_00;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;

  local_8 = this;
  DVar3 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0038 = DVar3;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 == 0) {
    SVar1 = message->id;
    if (SVar1 == MESS_ID_CREATE) {
      InitPanel(local_8);
    }
    else if (SVar1 == MESS_SHARED_0003) {
      DonePanel(local_8);
    }
    else if (SVar1 == MESS_SHARED_0005) {
      Library::DKW::DDX::FUN_006b3640
                ((int *)PTR_008075a8,local_8->field_0060,0xffffffff,local_8->field_003C,
                 local_8->field_0044);
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = FUN_006e5fd0(this_00,message);
    return iVar4;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\panel.cpp",0x52,0,iVar4,"%s",
                             "PanelTy::GetMessage");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\panel.cpp",0x52);
  return 0xffff;
}

