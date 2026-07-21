#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::InitData */

int __thiscall AiFltClassTy::InitData(AiFltClassTy *this,undefined4 *param_1)

{
  DArrayTy **ppDVar1;
  code *pcVar2;
  AiFltClassTy *pAVar3;
  int iVar4;
  DArrayTy *pDVar5;
  int iVar6;
  undefined4 *puVar7;
  DArrayTy **ppDVar8;
  undefined4 *puVar9;
  InternalExceptionFrame local_50;
  AiFltClassTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pAVar3 = local_c;
  if (iVar4 == 0) {
    if (local_c == (AiFltClassTy *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = &local_c->field_0020;
    }
    puVar7 = param_1;
    for (iVar4 = 0x98; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    ppDVar1 = &local_c->field_020B;
    local_c->field_0020 = 900;
    local_c->field_0038 = 1;
    local_8 = 7;
    ppDVar8 = ppDVar1;
    do {
      if (*ppDVar8 != (DArrayTy *)0x0) {
        pDVar5 = (DArrayTy *)
                 FUN_006b0060((uint *)0x0,(uint *)((int)ppDVar8[1] + 0x25f + (int)param_1));
        *ppDVar8 = pDVar5;
      }
      ppDVar8 = ppDVar8 + 3;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*ppDVar1 == (DArrayTy *)0x0) {
      pDVar5 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x2c,10);
      *ppDVar1 = pDVar5;
    }
    if (pAVar3->field_0217 == (uint *)0x0) {
      pDVar5 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x14,0x34,10);
      pAVar3->field_0217 = &pDVar5->flags;
    }
    if (pAVar3->field_0223 == (AnonPointee_AiFltClassTy_0223 *)0x0) {
      pDVar5 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x14,10);
      pAVar3->field_0223 = (AnonPointee_AiFltClassTy_0223 *)pDVar5;
    }
    if (pAVar3->field_022F == (AnonPointee_AiFltClassTy_022F *)0x0) {
      pDVar5 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0xc,10);
      pAVar3->field_022F = (AnonPointee_AiFltClassTy_022F *)pDVar5;
    }
    if (pAVar3->field_023B == (uint *)0x0) {
      pDVar5 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,4,10);
      pAVar3->field_023B = &pDVar5->flags;
    }
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  thunk_FUN_0065d480((int)local_c);
  iVar6 = ReportDebugMessage("E:\\__titans\\ai\\ai_flt.cpp",0x31,0,iVar4,"%s",
                             "AiFltClassTy::InitData");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\ai\\ai_flt.cpp",0x32);
  return iVar4;
}

