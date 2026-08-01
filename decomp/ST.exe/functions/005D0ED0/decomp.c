#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerList

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall
SettMapMTy::ChangePlayerList
          (SettMapMTy *this,int param_1,uint param_2,int param_3,char param_4,char *param_5)

{
  char cVar1;
  SettMapMTy_field_1F84DArray *pSVar2;
  code *pcVar3;
  SettMapMTy *pSVar4;
  int errorCode;
  int iVar5;
  uint uVar6;
  SettMapMTy_field_1F84Element *element_1f84;
  char *pcVar9;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  char *pcVar10;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != (SettMapMTy_field_1F84DArray *)0x0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    pSVar4 = local_8;
    if (errorCode == 0) {
      pSVar2 = local_8->field_1F84;
      if (param_2 < pSVar2->count) {
        element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar2, param_2);
      }
      else {
        element_1f84 = (SettMapMTy_field_1F84Element *)0x0;
      }
      if (element_1f84 != (SettMapMTy_field_1F84Element *)0x0) {
        if ((param_3 == 2) || (param_3 == 3)) {
          DeletePlayer(local_8,param_1);
        }
        pSVar2 = pSVar4->field_1F84;
        if (param_2 < pSVar2->count) {
          element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar2, param_2);
        }
        else {
          element_1f84 = (SettMapMTy_field_1F84Element *)0x0;
        }
        element_1f84->field_0004 = (char)param_3;
        element_1f84->field_0005 = param_4;
        if ((param_3 != 2) && (param_3 != 3)) {
          param_1 = 0;
        }
        element_1f84->element = param_1;
        if (param_5 == (char *)0x0) {
          param_5 = &DAT_008016a0;
        }
        uVar6 = 0xffffffff;
        do {
          pcVar9 = param_5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar9 = param_5 + 1;
          cVar1 = *param_5;
          param_5 = pcVar9;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar9 = pcVar9 + -uVar6;
        pcVar10 = element_1f84 + 10;
        memmove(pcVar10, pcVar9, uVar6); /* compiler REP MOVS byte copy */
        if (element_1f84->field_0004 == '\0') {
          if (element_1f84->state != 0xff) {
            thunk_FUN_0056a840(&DAT_00807620,element_1f84->state);
          }
          element_1f84->state = -1;
        }
        pSVar4 = local_8;
        if (element_1f84->state == -1) {
          element_1f84->field_004F = '\0';
        }
        else {
          element_1f84->field_004F = '\x01';
        }
        if ((element_1f84->field_0000 != '\0') && (element_1f84->field_0004 != '\x02')) {
          element_1f84->field_0001 = '\x01';
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        CheckPlList(local_8,unaff_EDI);
        if ((pSVar4->field_1E26 != CASE_C) && (pSVar4->field_1E26 != CASE_10)) {
          sub_005D1380(pSVar4);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)pSVar4->field_0000->field_002C)();
        SettMapTy::PaintSC((SettMapTy *)pSVar4);
        pSVar4->field_2121 = pSVar4->field_2121 + 1;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x605,0,errorCode,
                               "%s","SettMapMTy::ChangePlayerList");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x605);
  }
  return;
}

