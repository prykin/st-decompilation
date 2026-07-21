#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\sound.cpp
   SoundClassTy::CheckFader */

void __thiscall SoundClassTy::CheckFader(SoundClassTy *this)

{
  code *pcVar1;
  SoundClassTy *pSVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  InternalExceptionFrame local_50;
  uint local_c;
  SoundClassTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\sound.cpp",0x205,0,iVar3,"%s",
                               "SoundClassTy::CheckFader");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return;
  }
  if (local_8->field_0DFB == 0) {
    if (-1 < local_8->field_0E03) {
      FUN_006c1ba0(local_8->field_0E03);
    }
    pSVar2->field_0E03 = -1;
  }
  if (-1 < pSVar2->field_0E03) {
    FUN_006c1f00(pSVar2->field_0E03,&local_c,(uint *)0x0);
    if (local_c == 1) {
      DVar4 = timeGetTime();
      uVar5 = DVar4 - pSVar2->field_0DFF;
      if ((uint)pSVar2->field_0DFB < uVar5) {
        FUN_006c1ba0(pSVar2->field_0E03);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
      Library::DKW::SND::FUN_006c1ce0
                (pSVar2->field_0E03,
                 DAT_0080730a - (int)((DAT_0080730a + 4000) * uVar5) / (int)pSVar2->field_0DFB);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    pSVar2->field_0E03 = -1;
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

