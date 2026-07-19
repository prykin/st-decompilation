
/* Recovered from embedded debug metadata:
   E:\__titans\sound.cpp
   SoundClassTy::CheckFader */

void __thiscall SoundClassTy::CheckFader(SoundClassTy *this)

{
  code *pcVar1;
  SoundClassTy *pSVar2;
  int iVar3;
  DWORD DVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  uint local_c;
  SoundClassTy *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar3 = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage(s_E____titans_sound_cpp_007c97fc,0x205,0,iVar3,&DAT_007a4ccc,
                               s_SoundClassTy__CheckFader_007c9818);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
  if (*(int *)(local_8 + 0xdfb) == 0) {
    if (-1 < *(int *)(local_8 + 0xe03)) {
      FUN_006c1ba0(*(int *)(local_8 + 0xe03));
    }
    *(undefined4 *)(pSVar2 + 0xe03) = 0xffffffff;
  }
  if (-1 < *(int *)(pSVar2 + 0xe03)) {
    FUN_006c1f00(*(int *)(pSVar2 + 0xe03),&local_c,(uint *)0x0);
    if (local_c == 1) {
      DVar4 = timeGetTime();
      if (*(uint *)(pSVar2 + 0xdfb) < DVar4 - *(int *)(pSVar2 + 0xdff)) {
        FUN_006c1ba0(*(int *)(pSVar2 + 0xe03));
        g_currentExceptionFrame = local_50.previous;
        return;
      }
      FUN_006c1ce0(*(int *)(pSVar2 + 0xe03),
                   DAT_0080730a -
                   (int)((DAT_0080730a + 4000) * (DVar4 - *(int *)(pSVar2 + 0xdff))) /
                   (int)*(uint *)(pSVar2 + 0xdfb));
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    *(undefined4 *)(pSVar2 + 0xe03) = 0xffffffff;
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

