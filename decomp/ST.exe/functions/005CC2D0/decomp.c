#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::DoneSettMap */

void __thiscall SettMapMTy::DoneSettMap(SettMapMTy *this)

{
  code *pcVar1;
  SettMapMTy *this_00;
  int errorCode;
  void *pvVar2;
  int iVar3;
  DArrayTy *pDVar4;
  uint uVar5;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x65,0,errorCode,
                               "%s","SettMapMTy::DoneSettMap");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x65);
    return;
  }
  if (local_8->field_2204 != (AnonPointee_SettMapMTy_2204 *)0x0) {
    FreeAndNull(&local_8->field_2204);
  }
  FUN_006b3bb0(DAT_008075a8,this_00->field_2200);
  pDVar4 = this_00->field_2237;
  this_00->field_2200 = -1;
  if (pDVar4 != (DArrayTy *)0x0) {
    uVar5 = 0;
    if (pDVar4->count != 0) {
      if (pDVar4->count == 0) {
        pvVar2 = (void *)0x0;
        goto LAB_005cc360;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar5) (runtime stride) */
        pvVar2 = (void *)(pDVar4->elementSize * uVar5 + (int)pDVar4->data);
LAB_005cc360:
        if ((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 8) != 0)) {
          FreeAndNull((void **)((int)pvVar2 + 8));
        }
        pDVar4 = this_00->field_2237;
        uVar5 = uVar5 + 1;
      } while (uVar5 < pDVar4->count);
    }
    DArrayDestroy(this_00->field_2237);
    this_00->field_2237 = (DArrayTy *)0x0;
  }
  SettMapTy::DoneSettMap((SettMapTy *)this_00);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

