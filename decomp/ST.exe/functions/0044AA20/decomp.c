#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterBlot */

undefined4 __thiscall
STAllPlayersC::UnRegisterBlot(STAllPlayersC *this,uint param_1,AnonShape_0044AA20_1EE9340C *param_2)

{
  code *pcVar1;
  STAllPlayersC *this_00;
  int errorCode;
  STGameObjC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_50;
  STAllPlayersC *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode == 0) {
    pSVar2 = GetObjPtr(local_c,-1,param_1,CASE_6);
    if (pSVar2 != (STGameObjC *)param_2) {
      RaiseInternalException
                (-0x5001fff9,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x2fb8);
    }
    DelObjFromTmps(this_00,DAT_0080874d,param_2->field_0020,param_2->field_0024,param_1);
    DelObjFromSaveTmps(this_00,param_2->field_0020,param_2->field_0024,(short)param_1);
    Library::DKW::TBL::FUN_006ae140(&PTR_007fa164->flags,param_1 & 0xffff,&local_8);
    g_currentExceptionFrame = local_50.previous;
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    if (errorCode != -0x5001fff7) {
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2fc1,0,errorCode,
                                 "%s","STAllPlayersC::UnRegisterBlot");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(errorCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2fc2);
      return 0xffffffff;
    }
  }
  return 0;
}

