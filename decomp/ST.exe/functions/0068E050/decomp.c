#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::PrepareToSave */

undefined4 * __thiscall AiTactClassTy::PrepareToSave(AiTactClassTy *this,uint *param_1)

{
  code *pcVar1;
  AiTactClassTy *pAVar2;
  int errorCode;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  AiTactClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pAVar2 = local_8;
  if (errorCode == 0) {
    if (local_8 == (AiTactClassTy *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = &local_8->field_0020;
    }
    pbVar4 = TactDataPack(puVar3,param_1);
    pbVar4[0] = 0x8e;
    pbVar4[1] = 3;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4[0xc] = 1;
    pbVar4[0xd] = 0;
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
    *(undefined4 *)(pbVar4 + 0x5e) = pAVar2->field_001C;
    pbVar4[0x105] = 0;
    pbVar4[0x106] = 0;
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)pbVar4;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x81,0,errorCode,"%s",
                             "AiTactClassTy::PrepareToSave");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_tact.cpp",0x82);
  return (undefined4 *)0x0;
}

