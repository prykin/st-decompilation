#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerColor */

void __thiscall SettMapMTy::ChangePlayerColor(SettMapMTy *this,uint param_1,char param_2)

{
  code *pcVar1;
  SettMapMTy *this_00;
  int errorCode;
  int iVar2;
  DArrayTy *pDVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != (DArrayTy *)0x0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (errorCode == 0) {
      pDVar3 = local_8->field_1F84;
      if (param_1 < pDVar3->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, param_1) (runtime stride) */
        pcVar5 = (char *)(pDVar3->elementSize * param_1 + (int)pDVar3->data);
      }
      else {
        pcVar5 = (char *)0x0;
      }
      if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
        if (pcVar5[2] != 0xff) {
          thunk_FUN_0056a840(&DAT_00807620,pcVar5[2]);
        }
        pcVar5[2] = param_2;
        if ((pcVar5[4] == '\x02') && (*(int *)(pcVar5 + 6) == DAT_0080877f)) {
          DAT_0080874d = param_2;
        }
        pDVar3 = this_00->field_1F84;
        uVar4 = param_1 + 1;
        bVar6 = uVar4 < pDVar3->count;
        if ((int)uVar4 < (int)pDVar3->count) {
          do {
            if (bVar6) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, uVar4) (runtime stride) */
              pcVar5 = (char *)(pDVar3->elementSize * uVar4 + (int)pDVar3->data);
            }
            else {
              pcVar5 = (char *)0x0;
            }
            if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\0')) break;
            pcVar5[2] = param_2;
            if (*(int *)(pcVar5 + 6) == DAT_0080877f) {
              DAT_0080874d = param_2;
            }
            pDVar3 = this_00->field_1F84;
            uVar4 = uVar4 + 1;
            bVar6 = uVar4 < pDVar3->count;
          } while ((int)uVar4 < (int)pDVar3->count);
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
    iVar2 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x598,0,errorCode,
                               "%s","SettMapMTy::ChangePlayerColor");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x598);
  }
  return;
}

