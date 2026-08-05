#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::DeletePlayer

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall SettMapMTy::DeletePlayer(SettMapMTy *this,int param_1)

{
  SettMapMTy_field_1F84DArray *pSVar1;
  uint uVar2;
  int errorCode;
  SettMapMTy_field_1F84Element *element_1f84;
  int iVar5;
  uint uVar6;
  bool bVar7;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != nullptr) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      uVar6 = 0;
      pSVar1 = local_8->field_1F84;
      uVar2 = pSVar1->count;
      if (0 < (int)uVar2) {
        bVar7 = uVar2 != 0;
        while( true ) {
          if (bVar7) {
            element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar1, uVar6);
          }
          else {
            element_1f84 = nullptr;
          }
          if ((element_1f84 != nullptr) &&
             (((element_1f84->field_0004 == '\x02' || (element_1f84->field_0004 == '\x03')) && (element_1f84->element == param_1)))
             ) break;
          uVar6 = uVar6 + 1;
          bVar7 = uVar6 < uVar2;
          if ((int)uVar2 <= (int)uVar6) {
            g_currentExceptionFrame = local_4c.previous;
            return;
          }
        }
        element_1f84->element = 0;
        element_1f84->field_0004 = '\x01';
        element_1f84->field_0001 = '\x01';
        if ((element_1f84->field_0000 != '\0') && ((byte)element_1f84->state < 8)) {
          thunk_FUN_0056a840(&DAT_00807620,element_1f84->state);
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x4dc,0,errorCode,
                               "%s","SettMapMTy::DeletePlayer");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x4dc);
  }
  return;
}

