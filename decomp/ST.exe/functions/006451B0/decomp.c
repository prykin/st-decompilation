#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::SetDangerous

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004608B0 -> 006451B0 @ 00460ABD; /STBoatC+0x18 | 00471AC0 -> 006451B0 @ 00471C9F;
   /STBoatC+0x18 */

undefined4 __thiscall STTorpC::SetDangerous(STTorpC *this,uint param_1,uint *param_2)

{
  int errorCode;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_54;
  uint local_10 [2];
  STTorpC *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (errorCode == 0) {
    if (*param_2 == 0xffffffff) {
      local_10[0] = param_1;
      local_10[1] = 1;
      uVar2 = Library::DKW::TBL::DArrayAppend(local_8->field_0241,local_10);
      *param_2 = uVar2;
    }
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\nick\\to_torp.cpp",0x486,0,errorCode,"%s"
                             ,"STTorpC::SetDangerous");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\nick\\to_torp.cpp",0x487);
  return 0xffffffff;
}

