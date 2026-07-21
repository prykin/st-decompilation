#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005908B0; family_names=MAdvTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:2,18:0,1c:0} */

int __thiscall MAdvTy::GetMessage(MAdvTy *this,STMessage *message)

{
  code *pcVar1;
  MAdvTy *this_00;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  MAdvTy *local_8;

  local_8 = this;
  DVar2 = FUN_006e51b0(this->field_0010);
  this->field_0058 = DVar2;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    switch(message->id) {
    case MESS_ID_NONE:
      NoneMAdv(local_8);
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case MESS_ID_CREATE:
      local_8->field_005D = *(undefined1 *)((message->arg0).u32 + 0x14);
      InitMAdv(local_8);
      break;
    case MESS_SHARED_0003:
      DoneMAdv(local_8);
      break;
    case MESS_SHARED_0005:
      PaintMAdv(local_8);
      break;
    case MESS_TRACKBARCLASSTY_0062:
    case MESS_SHARED_0064:
      thunk_FUN_00590860((AnonShape_00590860_47A09D44 *)local_8);
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
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\adv_obj.cpp",0x87,0,iVar3,"%s",
                             "MAdvTy::GetMessage");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\adv_obj.cpp",0x87);
  return 0xffff;
}

