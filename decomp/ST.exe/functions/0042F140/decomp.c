#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterGroup
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0042F1AF MOV ESI,dword ptr [EBP + 0xc];
   first-use mask */

undefined4 __thiscall
STAllPlayersC::UnRegisterGroup(STAllPlayersC *this,char param_1,ushort param_2,int param_3)

{
  code *pcVar1;
  DArrayTy *array;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_50;
  DArrayTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  local_c = (DArrayTy *)g_packedRecords_A62x8[param_1].field5_0x5;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_3 == 0) {
      RaiseInternalException
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x6a7);
    }
    array = local_c;
    iVar2 = DArrayGetElement(local_c,(uint)param_2,&local_8);
    if ((iVar2 == -4) || (local_8 != param_3)) {
      RaiseInternalException
                (-0x5001fffe,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x6a9);
    }
    local_8 = 0;
    Library::DKW::TBL::DArrayPut(array,(uint)param_2,&local_8);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x6ad,0,iVar2,"%s",
                             "STAllPlayersC::UnRegisterGroup");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x6ae);
  return 0xffffffff;
}

