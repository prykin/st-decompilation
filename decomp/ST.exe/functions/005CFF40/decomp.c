#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::DeletePlayer */

void __thiscall SettMapMTy::DeletePlayer(SettMapMTy *this,int param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;
  code *pcVar3;
  int errorCode;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != (DArrayTy *)0x0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      uVar6 = 0;
      pDVar1 = local_8->field_1F84;
      uVar2 = pDVar1->count;
      if (0 < (int)uVar2) {
        bVar7 = uVar2 != 0;
        while( true ) {
          if (bVar7) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar6) (runtime stride) */
            pcVar4 = (char *)(pDVar1->elementSize * uVar6 + (int)pDVar1->data);
          }
          else {
            pcVar4 = (char *)0x0;
          }
          if ((pcVar4 != (char *)0x0) &&
             (((pcVar4[4] == '\x02' || (pcVar4[4] == '\x03')) && (*(int *)(pcVar4 + 6) == param_1)))
             ) break;
          uVar6 = uVar6 + 1;
          bVar7 = uVar6 < uVar2;
          if ((int)uVar2 <= (int)uVar6) {
            g_currentExceptionFrame = local_4c.previous;
            return;
          }
        }
        pcVar4[6] = '\0';
        pcVar4[7] = '\0';
        pcVar4[8] = '\0';
        pcVar4[9] = '\0';
        pcVar4[4] = '\x01';
        pcVar4[1] = '\x01';
        if ((*pcVar4 != '\0') && ((byte)pcVar4[2] < 8)) {
          thunk_FUN_0056a840(&DAT_00807620,pcVar4[2]);
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x4dc,0,errorCode,
                               &DAT_007a4ccc,s_SettMapMTy__DeletePlayer_007cd3d4);
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_settmobj_cpp_007cd258,0x4dc);
  }
  return;
}

