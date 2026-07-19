
/* Recovered from embedded debug metadata:
   E:\__titans\snd_mngr.cpp
   SoundManagerTy::GetMessage */

undefined4 __thiscall SoundManagerTy::GetMessage(SoundManagerTy *this,int param_1)

{
  SoundManagerTy SVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  SoundManagerTy *local_8;
  
  local_8 = this;
  uVar3 = FUN_006e51b0(*(int *)(this + 0x10));
  *(undefined4 *)(this + 0x1c) = uVar3;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_snd_mngr_cpp_007c9748,0xdc,0,iVar4,&DAT_007a4ccc,
                               s_SoundManagerTy__GetMessage_007c9768);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return uVar3;
    }
    RaiseInternalException(iVar4,0,s_E____titans_snd_mngr_cpp_007c9748,0xdc);
    return 0xffff;
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 != 0) {
    if (iVar4 == 2) {
      DAT_008033f0 = local_8;
      *(undefined4 *)(local_8 + 0x28) = *(undefined4 *)(param_1 + 0x14);
    }
    else if (iVar4 == 3) {
      DAT_008033f0 = (SoundManagerTy *)0x0;
      thunk_FUN_00566900((int)local_8);
    }
    goto LAB_00566d75;
  }
  SVar1 = local_8[0x38];
  switch(SVar1) {
  case (SoundManagerTy)0x0:
    if (SVar1 != (SoundManagerTy)0x1) {
      local_8[0x38] = (SoundManagerTy)0x1;
      *(undefined4 *)(local_8 + 0x39) = 0xffffffff;
    }
    *(undefined4 *)(local_8 + 0x24) = *(undefined4 *)(local_8 + 0x1c);
    *(undefined4 *)(local_8 + 0x20) = *(undefined4 *)(local_8 + 0x1c);
    break;
  case (SoundManagerTy)0x1:
    iVar4 = *(int *)(local_8 + 0x1c);
    if ((4999 < (uint)(iVar4 - *(int *)(local_8 + 0x20))) &&
       ((uint)(iVar4 - *(int *)(local_8 + 0x24)) < 0x3e9)) {
      *(int *)(local_8 + 0x24) = iVar4;
      *(int *)(local_8 + 0x20) = iVar4;
joined_r0x00566d57:
      if (SVar1 != (SoundManagerTy)0x3) {
        local_8[0x38] = (SoundManagerTy)0x3;
LAB_00566d5d:
        *(undefined4 *)(local_8 + 0x39) = 0xffffffff;
      }
    }
    break;
  case (SoundManagerTy)0x2:
    iVar4 = *(int *)(local_8 + 0x1c);
    if (4999 < (uint)(iVar4 - *(int *)(local_8 + 0x20))) {
      if (19999 < (uint)(iVar4 - *(int *)(local_8 + 0x24))) goto LAB_00566d35;
      if ((uint)(iVar4 - *(int *)(local_8 + 0x24)) < 0x3e9) {
        *(int *)(local_8 + 0x24) = iVar4;
        *(int *)(local_8 + 0x20) = iVar4;
        goto joined_r0x00566d57;
      }
    }
    break;
  case (SoundManagerTy)0x3:
    iVar4 = *(int *)(local_8 + 0x1c);
    if (14999 < (uint)(iVar4 - *(int *)(local_8 + 0x24))) {
LAB_00566d35:
      *(int *)(local_8 + 0x24) = iVar4;
      *(int *)(local_8 + 0x20) = iVar4;
      if (SVar1 != (SoundManagerTy)0x1) {
        local_8[0x38] = (SoundManagerTy)0x1;
        goto LAB_00566d5d;
      }
    }
  }
  thunk_FUN_00566aa0(local_8);
  SoundClassTy::CheckFader((SoundClassTy *)&g_sound);
LAB_00566d75:
  g_currentExceptionFrame = local_4c.previous;
  uVar3 = FUN_006e5fd0();
  return uVar3;
}

