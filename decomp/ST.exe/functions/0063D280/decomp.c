#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_TmMin.cpp
   STTmMineC::CreatePart */

uint __thiscall STTmMineC::CreatePart(STTmMineC *this,uint param_1)

{
  STTmMineC_field_0336DArray *pSVar1;
  STTmMineC *pSVar3;
  int iVar3;
  DArrayTy *pSVar3_mg0;
  int iVar4;
  STTmMineC_field_0336Element *element_0336;
  uint uVar7;
  uint local_8c [15];
  InternalExceptionFrame local_50;
  STTmMineC *local_c;
  uint local_8;

  local_8 = 0xffffffff;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar3 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;

    iVar4 = ReportDebugMessage("E:\\__titans\\nick\\to_TmMin.cpp",0x4a6,0,iVar3,"%s",
                               "STTmMineC::CreatePart");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_TmMin.cpp",0x4a8);
    return 0xffff;
  }
  if (local_c->field_0336 == nullptr) {
    /* ST_CALLSITE[0063D2D5]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/STTmMineC_field_0336DArray; source view only; no Ghidra override */
    pSVar3_mg0 = Library::DKW::TBL::DArrayCreate(nullptr,param_1,0x3c,10);
    pSVar3->field_0336 = (STTmMineC_field_0336DArray *)pSVar3_mg0;
    if (pSVar3_mg0 == nullptr) {
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    }
  }
  if (param_1 != 0) {
    uVar7 = 0;
    memset(local_8c, 0, 0x3c); /* compiler bulk-zero initialization */
    if (0 < (int)param_1) {
      do {

        local_8 = Library::DKW::TBL::DArrayAppend((DArrayTy *)pSVar3->field_0336,local_8c);
        pSVar1 = pSVar3->field_0336;
        if (uVar7 < pSVar1->count) {
          element_0336 = DArrayAt<STTmMineC_field_0336Element>(pSVar1, uVar7);
        }
        else {
          element_0336 = nullptr;
        }
        if (element_0336 != nullptr) {
          element_0336->field_0038 = -1;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)param_1);
    }
    if (-1 < (int)local_8) {
      g_currentExceptionFrame = local_50.previous;
      return local_8 + 1;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

