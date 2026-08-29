#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   ChatGlassTy::OutChGlProc

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005AD050 -> 005B69F0 @ 005AD199 | 005C4E20 -> 005B69F0 @ 005C4F76 | 005E79B0 ->
   005B69F0 @ 005E7AEA

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
ChatGlassTy::OutChGlProc
          (ChatGlassTy *this,RecoveredGlobalRecordView_00854EB8 *param_1,undefined4 param_2,
          undefined4 param_3,int param_4,int param_5,int param_6,int param_7,undefined4 *param_8)

{
  uint *puVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  undefined4 *local_8;

  if (param_8 != nullptr) {
    local_8 = param_8;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;

    iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    puVar2 = local_8;
    if (iVar3 == 0) {

      Library::DKW::DDX::FUN_006c68f0(param_1,param_4,param_5,param_6,param_7,(int)(local_8 + 1));
      FUN_006c6850((int)param_1,param_4,param_5,param_6,param_7,*puVar2);
      iVar3 = param_5 + -0x16 + param_7;

      Library::DKW::DDX::FUN_006c53b0
                ((int)param_1,param_4,iVar3,param_4 + -1 + param_6,iVar3,*puVar2);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;

    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\mmenuobj.cpp",0x153,0,iVar3,"%s"
                               ,"ChatGlassTy::OutChGlProc");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\mmenuobj.cpp",0x153);
  }
  return;
}

