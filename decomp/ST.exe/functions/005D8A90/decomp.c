#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::DeleteCtrls */

void __thiscall SIDTy::DeleteCtrls(SIDTy *this)

{
  code *pcVar1;
  SIDTy *pSVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = 4;
    puVar5 = &local_8->field_1AF1;
    do {
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(pSVar2->field_000C,*puVar5);
      }
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_006b3af0(DAT_008075a8,pSVar2->field_1CB4);
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
  iVar4 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x110,0,iVar3,&DAT_007a4ccc,
                             s_SIDTy__DeleteCtrls_007cd67c);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x110);
  return;
}

