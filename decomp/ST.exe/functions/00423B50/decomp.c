#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::AddObjs */

undefined4 __thiscall STGroupC::AddObjs(STGroupC *this,DArrayTy *param_1,int param_2)

{
  code *pcVar1;
  STGroupC *this_00;
  uint uVar2;
  int errorCode;
  int iVar3;
  undefined4 uVar4;
  uint index;
  uint uVar5;
  InternalExceptionFrame local_54;
  STGroupC *local_10;
  uint local_c;
  uint local_8;

  local_c = param_1->count;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  uVar2 = local_c;
  this_00 = local_10;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\tc_grp.cpp",0xf8,0,errorCode,"%s"
                               ,"STGroupC::AddObjs");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\wlad\\tc_grp.cpp",0xf9);
    return 0xffffffff;
  }
  if (local_c == 0) {
    return 0;
  }
  uVar5 = 0;
  if (local_c != 0) {
    index = 0;
    do {
      DArrayGetElement(param_1,index,&local_8);
      AddObj(this_00,local_8,param_2);
      uVar5 = uVar5 + 1;
      index = uVar5 & 0xffff;
    } while (index < uVar2);
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

