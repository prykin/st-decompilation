#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerState

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall SettMapMTy::ChangePlayerState(SettMapMTy *this,uint param_1)

{
  uint index;
  SettMapMTy_field_1F84DArray *pSVar1;
  code *pcVar2;
  SettMapMTy *pSVar3;
  int errorCode;
  SettMapMTy_field_1F84Element *element_1f84;
  int iVar5;
  SettMapMTy_field_1F84Element *element_1f84_2;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != nullptr) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    pSVar3 = local_8;
    if (errorCode == 0) {
      pSVar1 = local_8->field_1F84;
      if (param_1 < pSVar1->count) {
        element_1f84_2 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar1, param_1);
      }
      else {
        element_1f84_2 = nullptr;
      }
      if (element_1f84_2->field_0x0 != '\0') {
        if (element_1f84_2->field_0x1 == '\0') {
          index = param_1 + 1;
          while( true ) {
            pSVar1 = pSVar3->field_1F84;
            if (index < pSVar1->count) {
              element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar1, index);
            }
            else {
              element_1f84 = nullptr;
            }
            if ((element_1f84 == nullptr) || (element_1f84->field_0000 != '\0')) break;
            if (element_1f84->handle != nullptr) {
              DArrayDestroy(element_1f84->handle);
            }
            DArrayRemoveAt((DArrayTy *)pSVar3->field_1F84,index);
          }
          element_1f84_2->field_0x1 = 1;
        }
        else if (pSVar1->count < 0x18) {
          element_1f84_2->field_0x1 = 0;
          sub_005D00B0(local_8,element_1f84_2,param_1 + 1);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)pSVar3->field_0000->field_002C)();
        pSVar3->field_2121 = pSVar3->field_2121 + 1;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x5ba,0,errorCode,
                               "%s","SettMapMTy::ChangePlayerState");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x5ba);
  }
  return;
}

