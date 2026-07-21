#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::ClearDangerous */

undefined4 __thiscall STTorpC::ClearDangerous(STTorpC *this,int param_1,uint param_2)

{
  code *pcVar1;
  STTorpC *pSVar2;
  int errorCode;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_54;
  int local_10 [2];
  STTorpC *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pSVar2 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\nick\\to_torp.cpp",0x4a1,0,errorCode,
                               "%s","STTorpC::ClearDangerous");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\nick\\to_torp.cpp",0x4a2);
    return 0xffffffff;
  }
  if (param_2 == 0xffffffff) {
    local_10[0] = param_1;
    local_10[1] = 0;
    Library::DKW::TBL::FUN_006ae1c0(local_8->field_0241,local_10);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  DArrayGetElement((DArrayTy *)local_8->field_0241,param_2,local_10);
  if (local_10[0] == param_1) {
    local_10[1] = 0;
    Library::DKW::TBL::FUN_006ae140(pSVar2->field_0241,param_2,local_10);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x49e);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

