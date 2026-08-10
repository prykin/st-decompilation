#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::DeleteCtrls */

void __thiscall SIDTy::DeleteCtrls(SIDTy *this)

{
  SIDTy *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    iVar5 = 4;
    puVar6 = &local_8->field_1AF1;
    do {
      if (*puVar6 != 0) {
        StartSystemTy::sub_006E56B0(pSVar2->field_000C,*puVar6);
      }
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_006b3af0((int *)g_ddxContext_008075A8,pSVar2->field_1CB4);
    if (pSVar2->field_1B05 != 0xffffffff) {
      FUN_006b3af0((int *)pSVar2->field_1B49,pSVar2->field_1B05);
    }
    if (pSVar2->field_1B96 != 0xffffffff) {
      FUN_006b3af0((int *)pSVar2->field_1BDA,pSVar2->field_1B96);
    }
    if (pSVar2->field_1C27 != 0xffffffff) {
      FUN_006b3af0((int *)pSVar2->field_1C6B,pSVar2->field_1C27);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x110,0,iVar3,"%s",
                             "SIDTy::DeleteCtrls");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\sid_obj.cpp",0x110);
  return;
}

