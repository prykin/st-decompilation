#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_TmMin.cpp
   STTmMineC::CreatePart */

uint __thiscall STTmMineC::CreatePart(STTmMineC *this,uint param_1)

{
  code *pcVar1;
  STTmMineC *pSVar2;
  int iVar3;
  DArrayTy *pDVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
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
  if (local_c->field_0336 == (DArrayTy *)0x0) {
    pDVar4 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,param_1,0x3c,10);
    pSVar2->field_0336 = pDVar4;
    if (pDVar4 == (DArrayTy *)0x0) {
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    }
  }
  if (param_1 != 0) {
    uVar7 = 0;
    memset(local_8c, 0, 0x3c); /* compiler bulk-zero initialization */
    if (0 < (int)param_1) {
      do {
        local_8 = Library::DKW::TBL::FUN_006ae1c0(&pSVar2->field_0336->flags,local_8c);
        pDVar4 = pSVar2->field_0336;
        if (uVar7 < pDVar4->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar7) (runtime stride) */
          pvVar6 = (void *)(pDVar4->elementSize * uVar7 + (int)pDVar4->data);
        }
        else {
          pvVar6 = (void *)0x0;
        }
        if (pvVar6 != (void *)0x0) {
          *(undefined4 *)((int)pvVar6 + 0x38) = 0xffffffff;
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

