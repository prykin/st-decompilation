#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMMObjTy::OutBSlProc

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005B68B0 parameter used as this of MMMObjTy::OutRGlProc @ 005B690C

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005B68B0 -> 005B67A0 @ 005B690C | 005B9860 -> 005B68B0 @ 005B98CD; MMMObjTy::OutLstProc
   parameter param_3

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=9, used=0, unknown=0),
   and decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00596CC0 -> 005B68B0 @ 00596E4D; data at 0080759C | 00596CC0 -> 005B68B0 @ 00596F64;
   data at 0080759C | 005AD050 -> 005B68B0 @ 005AD0F0; data at 0080759C | 005AD050 -> 005B68B0 @
   005AD13A; data at 0080759C | 005AF350 -> 005B68B0 @ 005AF447; data at 0080759C | 005B68B0 ->
   005B67A0 @ 005B690C | 005C4E20 -> 005B68B0 @ 005C4EDE; data at 0080759C | 005C4E20 -> 005B68B0 @
   005C4FB2; data at 0080759C | 005E79B0 -> 005B68B0 @ 005E7AA1; data at 0080759C */

void __thiscall
MMMObjTy::OutBSlProc
          (MMMObjTy *this,DDXContext *param_1,MMMObjTy *param_2,MMMObjTy *param_3,int param_4,
          int param_5,int param_6,int param_7,undefined4 *param_8)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_50;
  int local_c;
  undefined4 *local_8;

  if (param_8 != nullptr) {
    local_8 = param_8;
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;

    errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    if (errorCode == 0) {
      /* ST_CALLSITE[005B690C]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
      OutRGlProc(param_2,(int)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      local_c = param_4 + -0x15 + param_6;

      Library::DKW::DDX::FUN_006c6660(param_1,local_c,param_5 + 0x26,7,param_7 - 0x4cU,3,0);

      Library::DKW::DDX::FUN_006c6470
                ((int)param_1,local_c,param_5 + 0x26,(undefined4 *)0x7,param_7 - 0x4cU,3,*local_8);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;

    iVar2 = ReportDebugMessage("E:\\__titans\\Start\\mmenuobj.cpp",0x147,0,errorCode,
                               "%s","MMMObjTy::OutBSlProc");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\mmenuobj.cpp",0x147);
  }
  return;
}

