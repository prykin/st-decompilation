#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::VisHoleCreate */

uint __thiscall
VisibleClassTy::VisHoleCreate
          (VisibleClassTy *this,int param_1,int param_2,undefined *param_3,uint param_4,
          undefined *param_5,undefined4 param_6)

{
  DArrayTy *pDVar1;
  code *pcVar2;
  VisibleClassTy *this_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  InternalExceptionFrame local_6c;
  int local_28 [2];
  undefined *local_20;
  undefined *local_1c;
  int *local_18;
  uint local_14;
  undefined4 local_10;
  VisibleClassTy *local_c;
  uint local_8;

  local_8 = 0xffffffff;
  if ((this->field_0114 != 0) && (-1 < (int)param_5)) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    local_c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
    this_00 = local_c;
    if (iVar3 == 0) {
      pDVar1 = local_c->field_00F4;
      if (pDVar1 != (DArrayTy *)0x0) {
        memset(local_28, 0, 0x1c); /* compiler bulk-zero initialization */
        local_28[1] = param_2;
        local_28[0] = param_1;
        local_18 = (int *)param_4;
        local_20 = param_3;
        local_10 = param_6;
        local_1c = param_5;
        local_14 = this_00->field_0108;
        local_8 = Library::DKW::TBL::FUN_006ae1c0(&pDVar1->flags,local_28);
        thunk_FUN_00558dc0(this_00,local_28[0],local_28[1],local_20,local_18,(uint)local_1c,
                           (int *)0xfffffffa,0xffffffff);
      }
      g_currentExceptionFrame = local_6c.previous;
      return local_8;
    }
    g_currentExceptionFrame = local_6c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\grig\\visible.cpp",0x3f0,0,iVar3,"%s",
                               "VisibleClassTy::VisHoleCreate error");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\grig\\visible.cpp",0x3f1);
  }
  return 0xffffffff;
}

