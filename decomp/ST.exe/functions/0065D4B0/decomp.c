#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::PrepareToSave

   [STPrototypeApplier] Propagated return.
   Evidence: 0065D4B0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00667FC7 */

byte * __thiscall AiFltClassTy::PrepareToSave(AiFltClassTy *this,uint *param_1)

{
  AiFltClassTy *pAVar2;
  int errorCode;
  AllocationRecord_006684E0 *pAVar3;
  int iVar4;
  byte *pbVar5;
  InternalExceptionFrame local_4c;
  AiFltClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pAVar2 = local_8;
  if (errorCode == 0) {
    if (local_8 == nullptr) {
      pAVar3 = nullptr;
    }
    else {
      pAVar3 = (AllocationRecord_006684E0 *)&local_8->field_0020;
    }
    pAVar3 = FltDataPack(pAVar3,param_1);
    *(undefined4 *)pAVar3 = 900;
    *(undefined4 *)&pAVar3->field_0xc = 1;
    *(undefined4 *)&pAVar3->field_0x66 = pAVar2->field_001C;
    g_currentExceptionFrame = local_4c.previous;
    return (byte *)pAVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_flt.cpp",0x4f,0,errorCode,"%s",
                             "AiFltClassTy::PrepareToSave");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_flt.cpp",0x50);
  return nullptr;
}

