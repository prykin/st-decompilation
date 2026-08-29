#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   MMMObjTy::OutLstProc

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005B9860 parameter used as this of MMMObjTy::OutBSlProc @ 005B98CD

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005B9860 -> 005B68B0 @ 005B98CD

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005B9860 -> 005B68B0 @ 005B98CD | 005BA8B0 -> 005B9860 @ 005BA942; data at 0080759C */

void __thiscall
MMMObjTy::OutLstProc
          (MMMObjTy *this,DDXContext *param_1,MMMObjTy *param_2,MMMObjTy *param_3,int param_4,
          int param_5,int param_6,int param_7,int param_8)

{
  int errorCode;
  char *resourceString;
  int iVar2;
  StartServTy *this_00;
  uint uVar3;
  uint uVar4;
  ccFntTy *pcVar5;
  uint uVar6;
  InternalExceptionFrame local_4c;
  int local_8;

  if (param_8 != 0) {
    local_8 = param_8;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;

    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      /* ST_CALLSITE[005B98CD]: CALL 0x004042d2; direct=004042D2 MMMObjTy::OutBSlProc */
      OutBSlProc(param_2,param_1,param_2,param_3,param_4,param_5 + 0x16,param_6,param_7 + -0x16,
                 &g_startSystem_0081176C->field_0140);

      Library::DKW::DDX::FUN_006c68f0
                ((RecoveredGlobalRecordView_00854EB8 *)param_1,param_4,param_5,param_6,0x15,
                 (int)&g_startSystem_0081176C->field_0x144);
      FUN_006c6850((int)param_1,param_4,param_5,param_6,0x15,g_startSystem_0081176C->field_0140);
      uVar6 = 0;
      pcVar5 = g_startSystem_0081176C->field_0034;
      uVar4 = 0xffffffff;
      uVar3 = 0xfffffffe;
      resourceString =
           LoadResourceString(0x26b4 - (STField<char>(local_8,0x1A5F) != '\x01'),g_hINSTANCE_00807618);
      /* ST_CALLSITE[005B993F]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
      StartServTy::WrTextDDX
                (this_00,0,param_4,param_5,param_6,0x15,resourceString,uVar3,uVar4,pcVar5,uVar6);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;

    iVar2 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0x3b,0,errorCode,
                               "%s","MMMObjTy::OutLstProc");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\prov_obj.cpp",0x3b);
  }
  return;
}

