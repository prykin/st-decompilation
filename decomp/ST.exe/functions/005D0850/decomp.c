#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerColor

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall SettMapMTy::ChangePlayerColor(SettMapMTy *this,uint param_1,char param_2)

{
  code *pcVar1;
  SettMapMTy *this_00;
  int errorCode;
  SettMapMTy_field_1F84Element *element_1f84;
  int iVar3;
  SettMapMTy_field_1F84DArray *pSVar4;
  uint uVar5;
  bool bVar6;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != (SettMapMTy_field_1F84DArray *)0x0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (errorCode == 0) {
      pSVar4 = local_8->field_1F84;
      if (param_1 < pSVar4->count) {
        element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar4, param_1);
      }
      else {
        element_1f84 = (SettMapMTy_field_1F84Element *)0x0;
      }
      if ((element_1f84 != (SettMapMTy_field_1F84Element *)0x0) && (element_1f84->field_0000 != '\0')) {
        if (element_1f84->state != 0xff) {
          thunk_FUN_0056a840(&DAT_00807620,element_1f84->state);
        }
        element_1f84->state = param_2;
        if ((element_1f84->field_0004 == '\x02') && (element_1f84->element == DAT_0080877f)) {
          DAT_0080874d = param_2;
        }
        pSVar4 = this_00->field_1F84;
        uVar5 = param_1 + 1;
        bVar6 = uVar5 < pSVar4->count;
        if ((int)uVar5 < (int)pSVar4->count) {
          do {
            if (bVar6) {
              element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar4, uVar5);
            }
            else {
              element_1f84 = (SettMapMTy_field_1F84Element *)0x0;
            }
            if ((element_1f84 == (SettMapMTy_field_1F84Element *)0x0) || (element_1f84->field_0000 != '\0')) break;
            element_1f84->state = param_2;
            if (element_1f84->element == DAT_0080877f) {
              DAT_0080874d = param_2;
            }
            pSVar4 = this_00->field_1F84;
            uVar5 = uVar5 + 1;
            bVar6 = uVar5 < pSVar4->count;
          } while ((int)uVar5 < (int)pSVar4->count);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this_00->field_0000->field_002C)();
        SettMapTy::PaintSC((SettMapTy *)this_00);
        this_00->field_2121 = this_00->field_2121 + 1;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x598,0,errorCode,
                               "%s","SettMapMTy::ChangePlayerColor");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x598);
  }
  return;
}

