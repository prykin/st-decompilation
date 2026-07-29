#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_TmMin.cpp
   STTmMineC::CreatePart */

uint __thiscall STTmMineC::CreatePart(STTmMineC *this,uint param_1)

{
  code *pcVar1;
  STTmMineC *pSVar2;
  int iVar3;
  STTmMineC_field_0336DArray *pSVar4;
  int iVar5;
  STTmMineC_field_0336Element *element_0336;
  uint uVar6;
  undefined4 local_8c [15];
  InternalExceptionFrame local_50;
  STTmMineC *local_c;
  uint local_8;

  local_8 = 0xffffffff;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\nick\\to_TmMin.cpp",0x4a6,0,iVar3,"%s",
                               "STTmMineC::CreatePart");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_TmMin.cpp",0x4a8);
    return 0xffff;
  }
  if (local_c->field_0336 == (STTmMineC_field_0336DArray *)0x0) {
    pSVar4 = (STTmMineC_field_0336DArray *)
             Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,param_1,0x3c,10);
    pSVar2->field_0336 = pSVar4;
    if (pSVar4 == (STTmMineC_field_0336DArray *)0x0) {
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    }
  }
  if (param_1 != 0) {
    uVar6 = 0;
    memset(local_8c, 0, 0x3c); /* compiler bulk-zero initialization */
    if (0 < (int)param_1) {
      do {
        local_8 = Library::DKW::TBL::FUN_006ae1c0(&pSVar2->field_0336->flags,local_8c);
        pSVar4 = pSVar2->field_0336;
        if (uVar6 < pSVar4->count) {
          element_0336 = DArrayAt<STTmMineC_field_0336Element>(pSVar4, uVar6);
        }
        else {
          element_0336 = (STTmMineC_field_0336Element *)0x0;
        }
        if (element_0336 != (STTmMineC_field_0336Element *)0x0) {
          element_0336->field_0038 = -1;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)param_1);
    }
    if (-1 < (int)local_8) {
      g_currentExceptionFrame = local_50.previous;
      return local_8 + 1;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

