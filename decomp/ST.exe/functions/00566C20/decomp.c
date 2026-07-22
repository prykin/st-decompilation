#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\snd_mngr.cpp
   SoundManagerTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00566C20; family_names=SoundManagerTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:1,18:0,1c:5} */

int __thiscall SoundManagerTy::GetMessage(SoundManagerTy *this,STMessage *message)

{
  char cVar1;
  STMessageId SVar2;
  code *pcVar3;
  SoundManagerTy *this_00;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  InternalExceptionFrame local_4c;
  SoundManagerTy *local_8;

  local_8 = this;
  DVar4 = STAppC::sub_006E51B0(this->field_0010);
  this->field_001C = DVar4;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\snd_mngr.cpp",0xdc,0,iVar5,"%s",
                               "SoundManagerTy::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\snd_mngr.cpp",0xdc);
    return 0xffff;
  }
  SVar2 = message->id;
  if (SVar2 != MESS_ID_NONE) {
    if (SVar2 == MESS_ID_CREATE) {
      DAT_008033f0 = local_8;
      local_8->field_0028 = message->arg0;
    }
    else if (SVar2 == MESS_SHARED_0003) {
      DAT_008033f0 = (SoundManagerTy *)0x0;
      sub_00566900(local_8);
    }
    goto LAB_00566d75;
  }
  cVar1 = local_8->field_0038;
  switch(cVar1) {
  case '\0':
    if (cVar1 != '\x01') {
      local_8->field_0038 = 1;
      local_8->field_0039 = -1;
    }
    local_8->field_0024 = local_8->field_001C;
    local_8->field_0020 = local_8->field_001C;
    break;
  case '\x01':
    iVar5 = local_8->field_001C;
    if ((4999 < (uint)(iVar5 - local_8->field_0020)) &&
       ((uint)(iVar5 - local_8->field_0024) < 0x3e9)) {
      local_8->field_0024 = iVar5;
      local_8->field_0020 = iVar5;
joined_r0x00566d57:
      if (cVar1 != '\x03') {
        local_8->field_0038 = 3;
LAB_00566d5d:
        local_8->field_0039 = -1;
      }
    }
    break;
  case '\x02':
    iVar5 = local_8->field_001C;
    if (4999 < (uint)(iVar5 - local_8->field_0020)) {
      uVar7 = iVar5 - local_8->field_0024;
      if (19999 < uVar7) goto LAB_00566d35;
      if (uVar7 < 0x3e9) {
        local_8->field_0024 = iVar5;
        local_8->field_0020 = iVar5;
        goto joined_r0x00566d57;
      }
    }
    break;
  case '\x03':
    iVar5 = local_8->field_001C;
    if (14999 < (uint)(iVar5 - local_8->field_0024)) {
LAB_00566d35:
      local_8->field_0024 = iVar5;
      local_8->field_0020 = iVar5;
      if (cVar1 != '\x01') {
        local_8->field_0038 = 1;
        goto LAB_00566d5d;
      }
    }
  }
  sub_00566AA0(local_8);
  SoundClassTy::CheckFader((SoundClassTy *)&g_sound);
LAB_00566d75:
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = FUN_006e5fd0(this_00,message);
  return iVar5;
}

