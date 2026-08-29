#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_field.cpp
   STFieldC::CreateField */

uint __thiscall STFieldC::CreateField(STFieldC *this,uint param_1)

{
  STFieldC *pSVar2;
  int iVar3;
  DArrayTy *pSVar3;
  int iVar4;
  uint uVar7;
  uint local_90 [15];
  uint local_54;
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
        DArrayDestroy((DArrayTy *)pSVar2->field_0234);
        uVar7 = uVar7 - 1;
        pSVar2->field_0234 = nullptr;
      } while (uVar7 != 0);
    }

    iVar4 = ReportDebugMessage("E:\\__titans\\nick\\to_field.cpp",0x1e5,0,iVar3,"%s",
                               "STFieldC::CreateField");
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_field.cpp",0x1e7);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_c->field_0234 == nullptr) {
    /* ST_CALLSITE[00609A36]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/STFieldC_field_0234DArray; source view only; no Ghidra override */
    pSVar3 = Library::DKW::TBL::DArrayCreate(nullptr,param_1,0x40,10);
    pSVar2->field_0234 = (STFieldC_field_0234DArray *)pSVar3;
  }
  if ((pSVar2->field_0234 != nullptr) && (param_1 != 0)) {
    memset(local_90, 0, 0x40); /* compiler bulk-zero initialization */
    local_54 = 0xffffffff;
    if (0 < (int)param_1) {
      do {

        local_8 = Library::DKW::TBL::DArrayAppend((DArrayTy *)pSVar2->field_0234,local_90);
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

