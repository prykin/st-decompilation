#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005908B0; family_names=MAdvTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:2,18:0,1c:0} */

int __thiscall MAdvTy::GetMessage(MAdvTy *this,STMessage *message)

{
  MAdvTy *this_00;
  DWORD DVar2;
  int local_EAX_47;
  int iVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  MAdvTy *local_8;

  local_8 = this;
  DVar2 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0058 = DVar2;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_EAX_47 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_47 == 0) {
    switch(message->id) {
    case MESS_ID_NONE:
      /* ST_CALLSITE[00590934]: CALL 0x004058d5; direct=004058D5 MAdvTy::NoneMAdv */
      NoneMAdv(local_8);
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case MESS_ID_CREATE:
      local_8->field_005D = *(undefined1 *)((message->arg0).u32 + 0x14);
      /* ST_CALLSITE[00590919]: CALL 0x00405e25; direct=00405E25 MAdvTy::InitMAdv */
      InitMAdv(local_8);
      break;
    case MESS_SHARED_0003:
      /* ST_CALLSITE[00590922]: CALL 0x00402cc0; direct=00402CC0 MAdvTy::DoneMAdv */
      DoneMAdv(local_8);
      break;
    case MESS_SHARED_0005:
      /* ST_CALLSITE[0059092B]: CALL 0x00403ab2; direct=00403AB2 MAdvTy::PaintMAdv */
      PaintMAdv(local_8);
      break;
    case MESS_TRACKBARCLASSTY_0062:
    case MESS_SHARED_0064:
      /* ST_CALLSITE[0059093D]: CALL 0x00403378; direct=00403378 MAdvTy::sub_00590860 */
      sub_00590860(local_8);
      if (this_00->field_005D == '\0') {
        this_00->field_0040 = 0x200;
        this_00->field_0044 = 0;
        this_00->field_0048 = 0x6102;
      }
      else {
        this_00->field_0044 = 1;
        this_00->field_0048 = 0x7102;
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = FUN_006e5fd0(this_00,message);
    return iVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\adv_obj.cpp",0x87,0,local_EAX_47,
                             "%s","MAdvTy::GetMessage");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(local_EAX_47,0,"E:\\__titans\\Start\\adv_obj.cpp",0x87);
  return 0xffff;
}

