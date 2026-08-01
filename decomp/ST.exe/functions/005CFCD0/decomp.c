#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::UpdatePing

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall SettMapMTy::UpdatePing(SettMapMTy *this,int param_1,undefined4 param_2)

{
  SettMapMTy_field_1F84DArray *pSVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  SettMapMTy_field_1F84Element *element_1f84;
  int iVar6;
  uint uVar7;
  bool bVar8;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != (SettMapMTy_field_1F84DArray *)0x0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (iVar4 == 0) {
      uVar7 = 0;
      pSVar1 = local_8->field_1F84;
      uVar2 = pSVar1->count;
      if (0 < (int)uVar2) {
        bVar8 = uVar2 != 0;
        while( true ) {
          if (bVar8) {
            element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar1, uVar7);
          }
          else {
            element_1f84 = (SettMapMTy_field_1F84Element *)0x0;
          }
          if (((element_1f84 != (SettMapMTy_field_1F84Element *)0x0) && (element_1f84->element == param_1)) &&
             ((element_1f84->field_0004 == '\x02' || (element_1f84->field_0004 == '\x03')))) break;
          uVar7 = uVar7 + 1;
          bVar8 = uVar7 < uVar2;
          if ((int)uVar2 <= (int)uVar7) {
            g_currentExceptionFrame = local_4c.previous;
            return;
          }
        }
        element_1f84->field_004B = param_2;
        iVar4 = (uVar7 - local_8->field_1F88) * 0x20;
        if (*(int *)(iVar4 + 0x1fa4 + (int)local_8) != 0) {
          local_8->field_002D = 5;
          FUN_006e6080(local_8,2,*(undefined4 *)(iVar4 + 0x1fa4 + (int)local_8),
                       (undefined4 *)&local_8->field_0x1d);
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x4bf,0,iVar4,"%s"
                               ,"SettMapMTy::UpdatePing");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\settmobj.cpp",0x4bf);
  }
  return;
}

