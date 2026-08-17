#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\snd_mngr.cpp
   SoundManagerTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00566C20; family_names=SoundManagerTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:1,18:0,1c:5} */

int __thiscall SoundManagerTy::GetMessage(SoundManagerTy *this,STMessage *message)

{
  SoundManagerTy_field_0038State SVar1;
  STMessageId SVar2;
  SoundManagerTy *this_00;
  DWORD DVar4;
  int local_EAX_48;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  InternalExceptionFrame local_4c;
  SoundManagerTy *local_8;

  local_8 = this;
  DVar4 = STAppC::sub_006E51B0(this->field_0010);
  this->field_001C = DVar4;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_EAX_48 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_48 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\snd_mngr.cpp",0xdc,0,local_EAX_48,"%s"
                               ,"SoundManagerTy::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_48,0,"E:\\__titans\\snd_mngr.cpp",0xdc);
    return 0xffff;
  }
  SVar2 = message->id;
  if (SVar2 != MESS_ID_NONE) {
    if (SVar2 == MESS_ID_CREATE) {
      g_soundManager_008033F0 = local_8;
      local_8->field_0028 = message->arg0;
    }
    else if (SVar2 == MESS_SHARED_0003) {
      g_soundManager_008033F0 = nullptr;
      /* ST_CALLSITE[00566C87]: CALL 0x00403c01; direct=00403C01 SoundManagerTy::sub_00566900 */
      sub_00566900(local_8);
    }
    goto LAB_00566d75;
  }
  SVar1 = local_8->field_0038;
  switch(SVar1) {
  case CASE_0:
    if (SVar1 != CASE_1) {
      local_8->field_0038 = CASE_1;
      local_8->field_0039 = -1;
    }
    local_8->field_0024 = local_8->field_001C;
    local_8->field_0020 = local_8->field_001C;
    break;
  case CASE_1:
    iVar7 = local_8->field_001C;
    if ((4999 < (uint)(iVar7 - local_8->field_0020)) &&
       ((uint)(iVar7 - local_8->field_0024) < 0x3e9)) {
      local_8->field_0024 = iVar7;
      local_8->field_0020 = iVar7;
joined_r0x00566d57:
      if (SVar1 != CASE_3) {
        local_8->field_0038 = CASE_3;
LAB_00566d5d:
        local_8->field_0039 = -1;
      }
    }
    break;
  case CASE_2:
    iVar7 = local_8->field_001C;
    if (4999 < (uint)(iVar7 - local_8->field_0020)) {
      uVar8 = iVar7 - local_8->field_0024;
      if (19999 < uVar8) goto LAB_00566d35;
      if (uVar8 < 0x3e9) {
        local_8->field_0024 = iVar7;
        local_8->field_0020 = iVar7;
        goto joined_r0x00566d57;
      }
    }
    break;
  case CASE_3:
    iVar7 = local_8->field_001C;
    if (14999 < (uint)(iVar7 - local_8->field_0024)) {
LAB_00566d35:
      local_8->field_0024 = iVar7;
      local_8->field_0020 = iVar7;
      if (SVar1 != CASE_1) {
        local_8->field_0038 = CASE_1;
        goto LAB_00566d5d;
      }
    }
  }
  /* ST_CALLSITE[00566D66]: CALL 0x00401609; direct=00401609 SoundManagerTy::sub_00566AA0 */
  sub_00566AA0(local_8);
  /* ST_CALLSITE[00566D70]: CALL 0x00401253; direct=00401253 SoundClassTy::CheckFader */
  SoundClassTy::CheckFader((SoundClassTy *)&g_sound);
LAB_00566d75:
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = FUN_006e5fd0(this_00,message);
  return iVar5;
}

