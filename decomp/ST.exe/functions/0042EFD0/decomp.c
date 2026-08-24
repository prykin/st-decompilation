#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterGroup
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0042F03A MOV ESI,dword ptr [EBP + 0xc];
   first-use mask */

undefined4 __thiscall
STAllPlayersC::RegisterGroup(STAllPlayersC *this,char param_1,ushort param_2,int param_3)

{
  DArrayTy *array;
  int iVar2;
  int iVar3;
  uint uVar4;
  InternalExceptionFrame local_50;
  DArrayTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  local_c = (DArrayTy *)g_packedRecords_A62x8[param_1].field2_0x5;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_3 == 0) {
      RaiseInternalException
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x690);
    }
    array = local_c;
    iVar2 = DArrayGetElement(local_c,(uint)param_2,&local_8);
    if ((iVar2 != -4) && (local_8 != 0)) {
      RaiseInternalException
                (-0x5001fffa,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x692);
    }
    Library::DKW::TBL::DArrayPut(array,(uint)param_2,&param_3);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x695,0,iVar2,"%s",
                             "STAllPlayersC::RegisterGroup");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x696);
  return 0xffffffff;
}

