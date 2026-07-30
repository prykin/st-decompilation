#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005B9330; family_names=MMsgTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:0,18:0,1c:0} */

int __thiscall MMsgTy::GetMessage(MMsgTy *this,STMessage *message)

{
  code *pcVar1;
  MMsgTy *this_00;
  byte bVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;
  uint SVar1;
  uint temp_5f8e730a25;

  local_8 = this;
  DVar3 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar3;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\mmsg_obj.cpp",0x200,0,iVar4,"%s"
                               ,"MMsgTy::GetMessage");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x200);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_8,message);
  temp_5f8e730a25 = message->id;
  if ((0x697e < temp_5f8e730a25) && (temp_5f8e730a25 < 0x69ff)) {
    switch(temp_5f8e730a25) {
    case 0x697f:
      iVar5 = -1;
      iVar4 = 3;
      uVar6 = 0;
      break;
    case 0x6980:
      iVar5 = -1;
      iVar4 = 2;
      uVar6 = 1;
      break;
    case 0x6981:
      iVar5 = -1;
      iVar4 = 2;
      uVar6 = 2;
      break;
    case 0x6982:
      iVar5 = -2;
      iVar4 = 2;
      uVar6 = 3;
      break;
    case 0x6983:
      iVar5 = 2;
      iVar4 = 2;
      uVar6 = 4;
      break;
    case 0x6984:
      iVar5 = 1;
      iVar4 = 2;
      uVar6 = 5;
      break;
    case 0x6985:
      iVar5 = 1;
      iVar4 = 2;
      uVar6 = 6;
      break;
    case 0x6986:
      iVar5 = 1;
      iVar4 = 3;
      uVar6 = 7;
      break;
    default:
      goto switchD_005b939a_default;
    }
    MMObjTy::PaintSprBut((MMObjTy *)this_00,(int)message,uVar6,iVar4,iVar5,-1);
  }
switchD_005b939a_default:
  SVar1 = message->id;
  if ((0x68fe < SVar1) && (SVar1 < 0x697f)) {
    bVar2 = (char)SVar1 + 1;
    this_00->field_1A5A = bVar2;
    if ((&this_00->field_0xe1)[(uint)bVar2 * 0x1fb] == '\0') {
      if (*(int *)(&this_00->field_0xd1 + (uint)bVar2 * 0x1fb) != 0) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_00->field_0xc1 + (uint)bVar2 * 0x1fb));
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
  iVar4 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar4;
}

