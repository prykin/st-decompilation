#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::InitWay */

undefined4 __thiscall
STGroupBoatC::InitWay(STGroupBoatC *this,DArrayTy *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int errorCode;
  STGameObjC *pSVar3;
  int iVar4;
  undefined4 uVar5;
  uint index;
  InternalExceptionFrame local_50;
  STGroupBoatC *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (errorCode == 0) {
    index = 0;
    if (param_1->count != 0) {
      do {
        DArrayGetElement(param_1,index,&local_8);
        pSVar3 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1);
        pSVar3->field_00FD = 0;
        index = index + 1;
      } while (index < param_1->count);
    }
    Way3DGrpDistribTgt(pSVar2,param_1,param_2,param_3,param_4);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x6e,0,errorCode,"%s",
                             "STGroupBoatC::InitWay");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x6f);
  return 0xffffffff;
}

