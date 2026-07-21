#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_field.cpp
   STFieldC::CreateField */

uint __thiscall STFieldC::CreateField(STFieldC *this,uint param_1)

{
  code *pcVar1;
  STFieldC *pSVar2;
  int iVar3;
  DArrayTy *pDVar4;
  int iVar5;
  uint uVar7;
  undefined4 local_90 [15];
  undefined4 local_54;
  InternalExceptionFrame local_50;
  STFieldC *local_c;
  uint local_8;

  local_8 = 0xffffffff;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    uVar7 = local_8;
    if (0 < (int)local_8) {
      do {
        DArrayDestroy(pSVar2->field_0234);
        uVar7 = uVar7 - 1;
        pSVar2->field_0234 = (DArrayTy *)0x0;
      } while (uVar7 != 0);
    }
    iVar5 = ReportDebugMessage("E:\\__titans\\nick\\to_field.cpp",0x1e5,0,iVar3,"%s",
                               "STFieldC::CreateField");
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_field.cpp",0x1e7);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_c->field_0234 == (DArrayTy *)0x0) {
    pDVar4 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,param_1,0x40,10);
    pSVar2->field_0234 = pDVar4;
  }
  if ((pSVar2->field_0234 != (DArrayTy *)0x0) && (param_1 != 0)) {
    memset(local_90, 0, 0x40); /* compiler bulk-zero initialization */
    local_54 = 0xffffffff;
    if (0 < (int)param_1) {
      do {
        local_8 = Library::DKW::TBL::FUN_006ae1c0(&pSVar2->field_0234->flags,local_90);
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    if (-1 < (int)local_8) {
      g_currentExceptionFrame = local_50.previous;
      return local_8 + 1;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

