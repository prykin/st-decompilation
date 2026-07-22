#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005B9330; family_names=MMsgTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:0,18:0,1c:0} */

int __thiscall MMsgTy::GetMessage(MMsgTy *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  MMsgTy *this_00;
  byte bVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;

  local_8 = this;
  DVar4 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar4;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\mmsg_obj.cpp",0x200,0,iVar5,"%s"
                               ,"MMsgTy::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x200);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_8,message);
  SVar1 = message->id;
  if ((0x697e < SVar1) && (SVar1 < MESS_SHARED_69FF)) {
    switch(SVar1) {
    case MESS_SHARED_697F:
      iVar6 = -1;
      iVar5 = 3;
      uVar7 = 0;
      break;
    case MESS_SHARED_6980:
      iVar6 = -1;
      iVar5 = 2;
      uVar7 = 1;
      break;
    case MESS_SIDTY_6981:
      iVar6 = -1;
      iVar5 = 2;
      uVar7 = 2;
      break;
    case MESS_SHARED_6980|MESS_ID_CREATE:
      iVar6 = -2;
      iVar5 = 2;
      uVar7 = 3;
      break;
    case MESS_MAINMENUTY_6983:
      iVar6 = 2;
      iVar5 = 2;
      uVar7 = 4;
      break;
    case 0x6984:
      iVar6 = 1;
      iVar5 = 2;
      uVar7 = 5;
      break;
    case MESS_SHARED_6980|MESS_SHARED_0005:
      iVar6 = 1;
      iVar5 = 2;
      uVar7 = 6;
      break;
    case MESS_MMSGTY_6986:
      iVar6 = 1;
      iVar5 = 3;
      uVar7 = 7;
      break;
    default:
      goto switchD_005b939a_default;
    }
    MMObjTy::PaintSprBut((MMObjTy *)this_00,(int)message,uVar7,iVar5,iVar6,-1);
  }
switchD_005b939a_default:
  SVar1 = message->id;
  if ((0x68fe < SVar1) && (SVar1 < MESS_SHARED_697F)) {
    bVar3 = (char)SVar1 + 1;
    this_00->field_1A5A = bVar3;
    if ((&this_00->field_0xe1)[(uint)bVar3 * 0x1fb] == '\0') {
      if (*(int *)(&this_00->field_0xd1 + (uint)bVar3 * 0x1fb) != 0) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_00->field_0xc1 + (uint)bVar3 * 0x1fb));
      }
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(this_00->field_0000 + 8))();
    }
  }
  switch(message->id) {
  case MESS_ID_NONE:
    NoneMMsg(this_00);
    break;
  case MESS_ID_CREATE:
    InitMMsg(this_00);
    break;
  case MESS_SHARED_0003:
    DoneMMsg(this_00);
    break;
  case MESS_SHARED_0005:
    PaintMMsg(this_00);
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar5;
}

