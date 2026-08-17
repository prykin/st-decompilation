#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::OutTRGlProc

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00594D40 parameter used as this of MMMObjTy::OutRGlProc @ 00594DAA

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00594D40 parameter used as this of MMMObjTy::OutRGlProc @ 00594DCB

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
FSGSTy::OutTRGlProc(FSGSTy *this,int param_1,MMMObjTy *param_2,MMMObjTy *param_3,int param_4,
                   int param_5,int param_6,int param_7,UINT param_8)

{
  int errorCode;
  char *resourceString;
  int iVar2;
  StartServTy *this_00;
  uint uVar3;
  uint uVar4;
  ccFntTy *pcVar5;
  uint uVar6;
  InternalExceptionFrame local_48;

  if (param_8 != 0) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
    if (errorCode == 0) {
      /* ST_CALLSITE[00594DAA]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
      MMMObjTy::OutRGlProc
                (param_2,param_1,param_2,param_3,param_4,param_5 + 0x16,param_6,param_7 + -0x16,
                 &g_startSystem_0081176C->field_0140);
      /* ST_CALLSITE[00594DCB]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
      MMMObjTy::OutRGlProc
                (param_3,param_1,param_2,param_3,param_4,param_5,param_6,0x15,
                 &g_startSystem_0081176C->field_0140);
      uVar6 = 0;
      pcVar5 = g_startSystem_0081176C->field_0034;
      uVar4 = 0xffffffff;
      uVar3 = 0xfffffffe;
      resourceString = LoadResourceString(param_8,g_hINSTANCE_00807618);
      /* ST_CALLSITE[00594DF7]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      StartServTy::WrTextDDX
                (this_00,0,param_4,param_5,param_6,0x15,resourceString,uVar3,uVar4,pcVar5,uVar6);
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
    iVar2 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x73,0,errorCode,
                               "%s","FSGSTy::OutTRGlProc");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x73);
  }
  return;
}

