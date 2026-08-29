#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::InitData */

int __thiscall AiFltClassTy::InitData(AiFltClassTy *this,undefined4 *param_1)

{
  DArrayTy **ppDVar1;
  AiFltClassTy *pAVar3;
  int iVar4;
  DArrayTy *pDVar4;
  int iVar5;
  int iVar6;
  byte *puVar7;
  DArrayTy **ppDVar8;
  byte *puVar9;
  InternalExceptionFrame local_50;
  AiFltClassTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pAVar3 = local_c;
  if (iVar4 == 0) {
    if (local_c == nullptr) {
      puVar9 = nullptr;
    }
    else {
      puVar9 = (byte *)(&local_c->field_0020);
    }
    puVar7 = (byte *)(param_1);
    memmove(puVar9, puVar7, 0x260); /* compiler REP MOVS byte copy */
    ppDVar1 = &local_c->field_020B;
    local_c->field_0020 = 900;
    local_c->field_0038 = 1;
    local_8 = 7;
    ppDVar8 = ppDVar1;
    do {
      if (*ppDVar8 != nullptr) {
        pDVar4 = FUN_006b0060(nullptr,(uint *)((int)ppDVar8[1] + 0x25f + (int)param_1));
        *ppDVar8 = pDVar4;
      }
      ppDVar8 = ppDVar8 + 3;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*ppDVar1 == nullptr) {
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x2c,10);
      *ppDVar1 = pDVar4;
    }
    if (pAVar3->field_0217 == nullptr) {
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,0x14,0x34,10);
      pAVar3->field_0217 = pDVar4;
    }
    if (pAVar3->field_0223 == nullptr) {
      /* ST_CALLSITE[0065D372]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_AiFltClassTy_0223; source view only; no Ghidra override */
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x14,10);
      pAVar3->field_0223 = (AnonPointee_AiFltClassTy_0223 *)pDVar4;
    }
    if (pAVar3->field_022F == nullptr) {
      /* ST_CALLSITE[0065D38F]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_AiFltClassTy_022F; source view only; no Ghidra override */
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,0xc,10);
      pAVar3->field_022F = (AnonPointee_AiFltClassTy_022F *)pDVar4;
    }
    if (pAVar3->field_023B == nullptr) {
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
      pAVar3->field_023B = pDVar4;
    }
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  /* ST_CALLSITE[0065D3D6]: CALL 0x0040220c; direct=0040220C AiFltClassTy::sub_0065D480 */
  sub_0065D480(local_c);

  iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_flt.cpp",0x31,0,iVar4,"%s",
                             "AiFltClassTy::InitData");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\ai\\ai_flt.cpp",0x32);
  return iVar4;
}

