#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::UpdatePing */

void __thiscall SettMapMTy::UpdatePing(SettMapMTy *this,int param_1,undefined4 param_2)

{
  DArrayTy *pDVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != (DArrayTy *)0x0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (iVar4 == 0) {
      uVar7 = 0;
      pDVar1 = local_8->field_1F84;
      uVar2 = pDVar1->count;
      if (0 < (int)uVar2) {
        bVar8 = uVar2 != 0;
        while( true ) {
          if (bVar8) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar7) (runtime stride) */
            pvVar5 = (void *)(pDVar1->elementSize * uVar7 + (int)pDVar1->data);
          }
          else {
            pvVar5 = (void *)0x0;
          }
          if (((pvVar5 != (void *)0x0) && (*(int *)((int)pvVar5 + 6) == param_1)) &&
             ((*(char *)((int)pvVar5 + 4) == '\x02' || (*(char *)((int)pvVar5 + 4) == '\x03'))))
          break;
          uVar7 = uVar7 + 1;
          bVar8 = uVar7 < uVar2;
          if ((int)uVar2 <= (int)uVar7) {
            g_currentExceptionFrame = local_4c.previous;
            return;
          }
        }
        *(undefined4 *)((int)pvVar5 + 0x4b) = param_2;
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
    iVar6 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x4bf,0,iVar4,&DAT_007a4ccc
                               ,s_SettMapMTy__UpdatePing_007cd39c);
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_settmobj_cpp_007cd258,0x4bf);
  }
  return;
}

