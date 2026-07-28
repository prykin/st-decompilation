#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMMObjTy::OutRGlProc

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00594D40 -> 005B67A0 @ 00594DAA; FSGSTy::OutTRGlProc parameter param_2 | 00594D40 ->
   005B67A0 @ 00594DCB; FSGSTy::OutTRGlProc parameter param_2 | 00594EB0 -> 005B67A0 @ 00594F17;
   FSGSTy::OutTRGlProc parameter param_2 | 00594EB0 -> 005B67A0 @ 0059501F; FSGSTy::OutTRGlProc
   parameter param_2 | 005952B0 -> 005B67A0 @ 00595314; FSGSTy::OutSGlProc parameter param_2 |
   005B68B0 -> 005B67A0 @ 005B690C; MMMObjTy::OutBSlProc parameter param_2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00594D40 -> 005B67A0 @ 00594DAA; FSGSTy::OutTRGlProc parameter param_3 | 00594D40 ->
   005B67A0 @ 00594DCB; FSGSTy::OutTRGlProc parameter param_3 | 00594EB0 -> 005B67A0 @ 00594F17;
   FSGSTy::OutTRGlProc parameter param_3 | 00594EB0 -> 005B67A0 @ 0059501F; FSGSTy::OutTRGlProc
   parameter param_3 | 005952B0 -> 005B67A0 @ 00595314; FSGSTy::OutSGlProc parameter param_3 |
   005B68B0 -> 005B67A0 @ 005B690C; MMMObjTy::OutBSlProc parameter param_3 */

void __thiscall
MMMObjTy::OutRGlProc
          (MMMObjTy *this,int param_1,MMMObjTy *param_2,MMMObjTy *param_3,int param_4,int param_5,
          int param_6,int param_7,undefined4 *param_8)

{
  code *pcVar1;
  undefined4 *puVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  undefined4 *local_8;

  if (param_8 != (undefined4 *)0x0) {
    local_8 = param_8;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    puVar2 = local_8;
    if (errorCode == 0) {
      Library::DKW::DDX::FUN_006c68f0
                ((AnonShape_GLOBAL_0080759C_9638EF10 *)param_1,param_4,param_5,param_6,param_7,
                 (int)(local_8 + 1));
      FUN_006c6850(param_1,param_4,param_5,param_6,param_7,*puVar2);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Start\\mmenuobj.cpp",0x13b,0,errorCode,
                               "%s","MMMObjTy::OutRGlProc");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\mmenuobj.cpp",0x13b);
  }
  return;
}

