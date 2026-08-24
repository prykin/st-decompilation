#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterArtefact */

undefined4 __thiscall
STAllPlayersC::UnRegisterArtefact
          (STAllPlayersC *this,uint param_1,AnonShape_00449E60_F2069C78 *param_2)

{
  STAllPlayersC *this_00;
  int errorCode;
  STGameObjC *pSVar2;
  int iVar3;
  uint uVar4;
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
    /* ST_CALLSITE[00449EA9]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    pSVar2 = GetObjPtr(local_c,-1,(ushort)param_1,CASE_2);
    if (pSVar2 != (STGameObjC *)param_2) {
      RaiseInternalException
                (-0x5001fff9,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x2eea);
    }
    /* ST_CALLSITE[00449EE0]: CALL 0x004021a3; direct=004021A3 STAllPlayersC::DelObjFromTmps */
    DelObjFromTmps(this_00,DAT_0080874d,param_2->field_0020,param_2->field_0024,param_1);
    /* ST_CALLSITE[00449EF0]: CALL 0x00403643; direct=00403643 STAllPlayersC::DelObjFromSaveTmps */
    DelObjFromSaveTmps(this_00,param_2->field_0020,param_2->field_0024,(ushort)param_1);
    Library::DKW::TBL::DArrayPut(g_array_007FA154,param_1 & 0xffff,&local_8);
    g_currentExceptionFrame = local_50.previous;
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    if (errorCode != -0x5001fff7) {
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2ef5,0,errorCode,
                                 "%s","STAllPlayersC::UnRegisterArtefact");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(errorCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2ef6);
      return 0xffffffff;
    }
  }
  return 0;
}

