
/* Recovered from embedded debug metadata:
   E:\__titans\snd_mngr.cpp
   SoundManagerTy::GetMessage */

undefined4 __thiscall SoundManagerTy::GetMessage(SoundManagerTy *this,int param_1)

{
  char cVar1;
  code *pcVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  SoundManagerTy *local_8;
  
  local_8 = this;
  DVar3 = FUN_006e51b0(this->field_0010);
  this->field_001C = DVar3;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_snd_mngr_cpp_007c9748,0xdc,0,iVar4,&DAT_007a4ccc,
                               s_SoundManagerTy__GetMessage_007c9768);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    RaiseInternalException(iVar4,0,s_E____titans_snd_mngr_cpp_007c9748,0xdc);
    return 0xffff;
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 != 0) {
    if (iVar4 == 2) {
      DAT_008033f0 = local_8;
      local_8->field_0028 = *(undefined4 *)(param_1 + 0x14);
    }
    else if (iVar4 == 3) {
      DAT_008033f0 = (SoundManagerTy *)0x0;
      thunk_FUN_00566900((int)local_8);
    }
    goto LAB_00566d75;
  }
  cVar1 = local_8->field_0038;
  switch(cVar1) {
  case '\0':
    if (cVar1 != '\x01') {
      local_8->field_0038 = 1;
      local_8->field_0039 = 0xffffffff;
    }
    local_8->field_0024 = local_8->field_001C;
    local_8->field_0020 = local_8->field_001C;
    break;
  case '\x01':
    iVar4 = local_8->field_001C;
    if ((4999 < (uint)(iVar4 - local_8->field_0020)) &&
       ((uint)(iVar4 - local_8->field_0024) < 0x3e9)) {
      local_8->field_0024 = iVar4;
      local_8->field_0020 = iVar4;
joined_r0x00566d57:
      if (cVar1 != '\x03') {
        local_8->field_0038 = 3;
LAB_00566d5d:
        local_8->field_0039 = 0xffffffff;
      }
    }
    break;
  case '\x02':
    iVar4 = local_8->field_001C;
    if (4999 < (uint)(iVar4 - local_8->field_0020)) {
      uVar7 = iVar4 - local_8->field_0024;
      if (19999 < uVar7) goto LAB_00566d35;
      if (uVar7 < 0x3e9) {
        local_8->field_0024 = iVar4;
        local_8->field_0020 = iVar4;
        goto joined_r0x00566d57;
      }
    }
    break;
  case '\x03':
    iVar4 = local_8->field_001C;
    if (14999 < (uint)(iVar4 - local_8->field_0024)) {
LAB_00566d35:
      local_8->field_0024 = iVar4;
      local_8->field_0020 = iVar4;
      if (cVar1 != '\x01') {
        local_8->field_0038 = 1;
        goto LAB_00566d5d;
      }
    }
  }
  thunk_FUN_00566aa0(local_8);
  SoundClassTy::CheckFader((SoundClassTy *)&g_sound);
LAB_00566d75:
  g_currentExceptionFrame = local_4c.previous;
  uVar5 = FUN_006e5fd0();
  return uVar5;
}

