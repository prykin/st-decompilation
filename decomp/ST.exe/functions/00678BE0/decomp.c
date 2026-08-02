#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::PrepareToSave

   [STPrototypeApplier] Propagated return.
   Evidence: 00678BE0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 0067CA5F */

byte * __thiscall AiPlrClassTy::PrepareToSave(AiPlrClassTy *this,uint *param_1)

{
  code *pcVar1;
  AiPlrClassTy *pAVar2;
  int errorCode;
  int iVar3;
  byte *pbVar4;
  AnonShape_0067D3B0_B421D52F *pAVar5;
  InternalExceptionFrame local_58;
  AiPlrClassTy *local_14;
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
      pAVar5 = nullptr;
    }
    else {
      pAVar5 = (AnonShape_0067D3B0_B421D52F *)&pAVar2->field_05D3;
    }
    local_c = PlrDataPack(pAVar5,local_8,local_10,param_1);
    local_c[0xc] = 1;
    local_c[0xd] = 0;
    local_c[0xe] = 0;
    local_c[0xf] = 0;
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
  iVar3 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr.cpp",0x61,0,errorCode,"%s",
                             "AiPlrClassTy::PrepareToSave");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_plr.cpp",0x62);
  return nullptr;
}

