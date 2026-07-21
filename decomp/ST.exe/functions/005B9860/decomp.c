#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   MMMObjTy::OutLstProc

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005B9860 parameter used as this of MMMObjTy::OutBSlProc @ 005B98CD */

void __thiscall
MMMObjTy::OutLstProc
          (MMMObjTy *this,int param_1,MMMObjTy *param_2,undefined4 param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8)

{
  code *pcVar1;
  int errorCode;
  uint *puVar2;
  int iVar3;
  StartServTy *this_00;
  uint uVar4;
  uint uVar5;
  ccFntTy *pcVar6;
  undefined4 uVar7;
  InternalExceptionFrame local_4c;
  int local_8;

  if (param_8 != 0) {
    local_8 = param_8;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      OutBSlProc(param_2,param_1,param_2,param_3,param_4,param_5 + 0x16,param_6,param_7 + -0x16,
                 &PTR_0081176c->field_0140);
      Library::DKW::DDX::FUN_006c68f0
                (param_1,param_4,param_5,param_6,0x15,(int)&PTR_0081176c->field_0x144);
      FUN_006c6850(param_1,param_4,param_5,param_6,0x15,PTR_0081176c->field_0140);
      uVar7 = 0;
      pcVar6 = PTR_0081176c->field_0034;
      uVar5 = 0xffffffff;
      uVar4 = 0xfffffffe;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar2 = (uint *)LoadResourceString(0x26b4 - (*(char *)(local_8 + 0x1a5f) != '\x01'),
                                          HINSTANCE_00807618);
      StartServTy::WrTextDDX(this_00,0,param_4,param_5,param_6,0x15,puVar2,uVar4,uVar5,pcVar6,uVar7)
      ;
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0x3b,0,errorCode,
                               "%s","MMMObjTy::OutLstProc");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\prov_obj.cpp",0x3b);
  }
  return;
}

