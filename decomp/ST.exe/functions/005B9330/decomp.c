#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005B9330; family_names=MMsgTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:0,18:0,1c:0} */

int __thiscall MMsgTy::GetMessage(MMsgTy *this,STMessage *message)

{
  MMsgTy *this_00;
  byte bVar2;
  int iVar3;
  int local_EAX_47;
  int iVar4;
  int iVar5;
  uint uVar4;
  int iVar6;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;
  uint SVar1;
  uint temp_5f8e730a25;

  local_8 = this;

  iVar3 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = iVar3;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  local_EAX_47 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_47 != 0) {
    g_currentExceptionFrame = local_4c.previous;

    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\mmsg_obj.cpp",0x200,0,local_EAX_47,
                               "%s","MMsgTy::GetMessage");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_47,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x200);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_8,message);
  temp_5f8e730a25 = message->id;
  if ((0x697e < temp_5f8e730a25) && (temp_5f8e730a25 < 0x69ff)) {
    switch(temp_5f8e730a25) {
    case 0x697f:
      iVar6 = -1;
      iVar3 = 3;
      uVar4 = 0;
      break;
    case 0x6980:
      iVar6 = -1;
      iVar3 = 2;
      uVar4 = 1;
      break;
    case 0x6981:
      iVar6 = -1;
      iVar3 = 2;
      uVar4 = 2;
      break;
    case 0x6982:
      iVar6 = -2;
      iVar3 = 2;
      uVar4 = 3;
      break;
    case 0x6983:
      iVar6 = 2;
      iVar3 = 2;
      uVar4 = 4;
      break;
    case 0x6984:
      iVar6 = 1;
      iVar3 = 2;
      uVar4 = 5;
      break;
    case 0x6985:
      iVar6 = 1;
      iVar3 = 2;
      uVar4 = 6;
      break;
    case 0x6986:
      iVar6 = 1;
      iVar3 = 3;
      uVar4 = 7;
      break;
    default:
      goto switchD_005b939a_default;
    }
    /* ST_CALLSITE[005B93F2]: CALL 0x0040499e; direct=0040499E MMObjTy::PaintSprBut */
    MMObjTy::PaintSprBut
              ((MMObjTy *)this_00,(RecoveredRecord_005B5690_213E8178 *)message,uVar4,iVar3,iVar6,-1);
  }
switchD_005b939a_default:
  SVar1 = message->id;
  if ((0x68fe < SVar1) && (SVar1 < 0x697f)) {
    bVar2 = (char)SVar1 + 1;
    this_00->array_00BC[0xc].field_01DA = bVar2;
    if (this_00->array_00BC[bVar2].field_0025 == '\0') {
      if (*(int *)&this_00->array_00BC[bVar2].field_0x15 != 0) {

        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->array_00BC[bVar2].field_0x5);
      }
    }
    else {
      /* ST_CALLSITE[005B9437]: CALL dword ptr [EAX + 0x8] */
      this_00->CloseSprBut();
    }
  }
  switch(message->id) {
  case MESS_ID_NONE:
    /* ST_CALLSITE[005B9482]: CALL 0x00403693; direct=00403693 MMsgTy::NoneMMsg */
    NoneMMsg(this_00);
    break;
  case MESS_ID_CREATE:
    /* ST_CALLSITE[005B9467]: CALL 0x004020d1; direct=004020D1 MMsgTy::InitMMsg */
    InitMMsg(this_00);
    break;
  case MESS_SHARED_0003:
    /* ST_CALLSITE[005B9470]: CALL 0x0040501f; direct=0040501F MMsgTy::DoneMMsg */
    DoneMMsg(this_00);
    break;
  case MESS_SHARED_0005:
    /* ST_CALLSITE[005B9479]: CALL 0x00401bb8; direct=00401BB8 MMsgTy::PaintMMsg */
    PaintMMsg(this_00);
  }
  g_currentExceptionFrame = local_4c.previous;
  /* ST_CALLSITE[005B9493]: CALL 0x00401280; direct=00401280 MMObjTy::GetMessage */
  iVar4 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar4;
}

