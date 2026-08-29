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
  SettMapMTy *this_00;
  int errorCode;
  SettMapMTy_field_1F84Element *element_1f84;
  int iVar4;
  SettMapMTy_field_1F84Element *element_1f84_2;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != nullptr) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;

    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    this_00 = local_8;
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
            pSVar1 = this_00->field_1F84;
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

            DArrayRemoveAt((DArrayTy *)this_00->field_1F84,index);
          }
          element_1f84_2->field_0x1 = 1;
        }
        else if (pSVar1->count < 0x18) {
          element_1f84_2->field_0x1 = 0;
          /* ST_CALLSITE[005D0A9F]: CALL 0x004017d0; direct=004017D0 SettMapMTy::sub_005D00B0 */
          sub_005D00B0(local_8,element_1f84_2,param_1 + 1);
        }
        /* ST_CALLSITE[005D0AF0]: CALL dword ptr [EDX + 0x2c] */
        this_00->SetListCtrls();
        this_00->field_2121 = this_00->field_2121 + 1;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;

    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x5ba,0,errorCode,
                               "%s","SettMapMTy::ChangePlayerState");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x5ba);
  }
  return;
}

