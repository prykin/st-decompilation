#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_boss.cpp
   AiBossClassTy::PrepareToSave */

undefined4 * __thiscall AiBossClassTy::PrepareToSave(AiBossClassTy *this,uint *param_1)

{
  code *pcVar1;
  AiBossClassTy *pAVar2;
  int errorCode;
  int iVar3;
  undefined4 *puVar4;
  InternalExceptionFrame local_58;
  AiBossClassTy *local_14;
  uint local_10;
  undefined4 *local_c;
  undefined4 *local_8;

  local_c = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pAVar2 = local_14;
  if (errorCode == 0) {
    local_8 = AiEventClassTy::PrepareToSave((AiEventClassTy *)&local_14->field_001C,&local_10);
    if (pAVar2 == (AiBossClassTy *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)&pAVar2->field_0x5d3;
    }
    local_c = BossDataPack(puVar4,local_8,local_10,param_1);
    *(undefined1 *)local_c = 1;
    if (local_8 != (undefined4 *)0x0) {
      FreeAndNull(&local_8);
    }
    g_currentExceptionFrame = local_58.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_58.previous;
  if (local_8 != (undefined4 *)0x0) {
    FreeAndNull(&local_8);
  }
  if (local_c != (undefined4 *)0x0) {
    FreeAndNull(&local_c);
  }
  iVar3 = ReportDebugMessage("E:\\__titans\\ai\\ai_boss.cpp",0x4c,0,errorCode,"%s",
                             "AiBossClassTy::PrepareToSave");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_boss.cpp",0x4d);
  return (undefined4 *)0x0;
}

