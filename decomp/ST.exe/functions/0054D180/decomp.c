#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::DoneSystem */

void __thiscall STPlaySystemC::DoneSystem(STPlaySystemC *this)

{
  code *pcVar1;
  STPlaySystemC *pSVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  STPlaySystemC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    memset(&local_8->field_0xc0, 0, 0x20); /* compiler bulk-zero initialization */
    local_8->field_00CC = 0xf;
    local_8->field_00D0 = 0x7106;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)local_8->vtable->field_0018)(&local_8->field_0xc0);
    if (pSVar2->field_0039 != (AnonPointee_STPlaySystemC_0039 *)0x0) {
      FUN_006b9890((int *)&pSVar2->field_0039);
    }
    if (pSVar2->field_004F != 0) {
      FreeAndNull((void **)&pSVar2->field_004F);
    }
    if (pSVar2->field_003D != (AnonPointee_STPlaySystemC_003D *)0x0) {
      FreeAndNull(&pSVar2->field_003D);
    }
    pSVar2->field_0041 = 0;
    pSVar2->field_0045 = 0;
    pSVar2->field_0053 = 0;
    if (pSVar2->field_0065 != 0) {
      FUN_006b9890(&pSVar2->field_0065);
    }
    pSVar2->field_0069 = 0;
    pSVar2->field_006D = 0;
    pSVar2->field_0071 = 0;
    pSVar2->field_0075 = 0;
    FUN_006e52d0((AnonShape_006E52D0_AF06BCD2 *)pSVar2);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x1b1,0,iVar3,"%s",
                             "STPlaySystemC::DoneSystem");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x1b3);
  return;
}

