#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerState

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall SettMapMTy::ChangePlayerState(SettMapMTy *this,uint param_1)

{
  uint uVar1;
  SettMapMTy_field_1F84DArray *pSVar2;
  code *pcVar3;
  SettMapMTy *pSVar4;
  int errorCode;
  SettMapMTy_field_1F84Element *element_1f84;
  int iVar6;
  SettMapMTy_field_1F84Element *element_1f84_2;
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
      if (param_1 < pSVar2->count) {
        element_1f84_2 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar2, param_1);
      }
      else {
        element_1f84_2 = (SettMapMTy_field_1F84Element *)0x0;
      }
      if (element_1f84_2->field_0000 != '\0') {
        if (element_1f84_2->field_0001 == '\0') {
          uVar1 = param_1 + 1;
          while( true ) {
            pSVar2 = pSVar4->field_1F84;
            if (uVar1 < pSVar2->count) {
              element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar2, uVar1);
            }
            else {
              element_1f84 = (SettMapMTy_field_1F84Element *)0x0;
            }
            if ((element_1f84 == (SettMapMTy_field_1F84Element *)0x0) || (element_1f84->field_0000 != '\0')) break;
            if (element_1f84->handle != (DArrayTy *)0x0) {
              DArrayDestroy(element_1f84->handle);
            }
            FUN_006b0c70((DArrayTy *)pSVar4->field_1F84,uVar1);
          }
          element_1f84_2->field_0001 = '\x01';
        }
        else if (pSVar2->count < 0x18) {
          element_1f84_2->field_0001 = '\0';
          sub_005D00B0(local_8,(AnonShape_005D00B0_9E7CC102 *)element_1f84_2,param_1 + 1);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)pSVar4->field_0000->field_002C)();
        pSVar4->field_2121 = pSVar4->field_2121 + 1;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x5ba,0,errorCode,
                               "%s","SettMapMTy::ChangePlayerState");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x5ba);
  }
  return;
}

