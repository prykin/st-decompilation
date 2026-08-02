#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_boss.cpp
   AiBossClassTy::PrepareToSave

   [STPrototypeApplier] Propagated return.
   Evidence: 00647EF0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 0064811E */

byte * __thiscall AiBossClassTy::PrepareToSave(AiBossClassTy *this,uint *param_1)

{
  code *pcVar1;
  AiBossClassTy *pAVar2;
  int errorCode;
  int iVar3;
  byte *pbVar4;
  uint *puVar5;
  InternalExceptionFrame local_58;
  AiBossClassTy *local_14;
  uint local_10;
  byte *local_c;
  undefined4 *local_8;

  local_c = nullptr;
  local_8 = nullptr;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pAVar2 = local_14;
  if (errorCode == 0) {
    local_8 = AiEventClassTy::PrepareToSave((AiEventClassTy *)&local_14->vtable_at_1c,&local_10);
    if (pAVar2 == nullptr) {
      puVar5 = nullptr;
    }
    else {
      puVar5 = (uint *)&pAVar2->field_0x5d3;
    }
    local_c = BossDataPack(puVar5,local_8,local_10,param_1);
    *local_c = 1;
    if (local_8 != nullptr) {
      FreeAndNull(&local_8);
    }
    g_currentExceptionFrame = local_58.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_58.previous;
  if (local_8 != nullptr) {
    FreeAndNull(&local_8);
  }
  if (local_c != nullptr) {
    FreeAndNull(&local_c);
  }
  iVar3 = ReportDebugMessage("E:\\__titans\\ai\\ai_boss.cpp",0x4c,0,errorCode,"%s",
                             "AiBossClassTy::PrepareToSave");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_boss.cpp",0x4d);
  return nullptr;
}

