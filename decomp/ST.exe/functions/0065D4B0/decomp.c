#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::PrepareToSave */

undefined4 * __thiscall AiFltClassTy::PrepareToSave(AiFltClassTy *this,uint *param_1)

{
  code *pcVar1;
  AiFltClassTy *pAVar2;
  int errorCode;
  AnonShape_GLOBAL_008489C4_F7BABFAC *pAVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  InternalExceptionFrame local_4c;
  AiFltClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pAVar2 = local_8;
  if (errorCode == 0) {
    if (local_8 == (AiFltClassTy *)0x0) {
      pAVar3 = (AnonShape_GLOBAL_008489C4_F7BABFAC *)0x0;
    }
    else {
      pAVar3 = (AnonShape_GLOBAL_008489C4_F7BABFAC *)&local_8->field_0020;
    }
    pbVar4 = FltDataPack(pAVar3,param_1);
    pbVar4[0] = 0x84;
    pbVar4[1] = 3;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4[0xc] = 1;
    pbVar4[0xd] = 0;
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
    *(undefined4 *)(pbVar4 + 0x66) = pAVar2->field_001C;
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)pbVar4;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_flt.cpp",0x4f,0,errorCode,"%s",
                             "AiFltClassTy::PrepareToSave");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_flt.cpp",0x50);
  return (undefined4 *)0x0;
}

