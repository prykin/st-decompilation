#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerCiv

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall SettMapMTy::ChangePlayerCiv(SettMapMTy *this,uint param_1,char param_2)

{
  code *pcVar1;
  SettMapMTy *pSVar2;
  int errorCode;
  SettMapMTy_field_1F84Element *element_1f84;
  int iVar4;
  SettMapMTy_field_1F84DArray *pSVar5;
  uint uVar6;
  bool bVar7;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != (SettMapMTy_field_1F84DArray *)0x0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    pSVar2 = local_8;
    if (errorCode == 0) {
      pSVar5 = local_8->field_1F84;
      if (param_1 < pSVar5->count) {
        element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar5, param_1);
      }
      else {
        element_1f84 = (SettMapMTy_field_1F84Element *)0x0;
      }
      if ((element_1f84 != (SettMapMTy_field_1F84Element *)0x0) && (element_1f84->field_0000 != '\0')) {
        element_1f84->field_0003 = param_2;
        if ((element_1f84->field_0004 == '\x02') && (element_1f84->data == DAT_0080877f)) {
          DAT_0080874e = param_2;
        }
        pSVar5 = local_8->field_1F84;
        uVar6 = param_1 + 1;
        bVar7 = uVar6 < pSVar5->count;
        if ((int)uVar6 < (int)pSVar5->count) {
          do {
            if (bVar7) {
              element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar5, uVar6);
            }
            else {
              element_1f84 = (SettMapMTy_field_1F84Element *)0x0;
            }
            if ((element_1f84 == (SettMapMTy_field_1F84Element *)0x0) || (element_1f84->field_0000 != '\0')) break;
            element_1f84->field_0003 = param_2;
            if (element_1f84->data == DAT_0080877f) {
              DAT_0080874e = param_2;
            }
            pSVar5 = local_8->field_1F84;
            uVar6 = uVar6 + 1;
            bVar7 = uVar6 < pSVar5->count;
          } while ((int)uVar6 < (int)pSVar5->count);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)local_8->field_0000->field_002C)();
        pSVar2->field_2121 = pSVar2->field_2121 + 1;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x57d,0,errorCode,
                               "%s","SettMapMTy::ChangePlayerCiv");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x57d);
  }
  return;
}

