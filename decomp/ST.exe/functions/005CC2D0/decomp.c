#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::DoneSettMap */

void __thiscall SettMapMTy::DoneSettMap(SettMapMTy *this)

{
  code *pcVar1;
  SettMapMTy *this_00;
  int errorCode;
  SettMapMTy_field_2237Element *piVar2;
  int iVar2;
  SettMapMTy_field_2237DArray *pSVar3;
  uint uVar4;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar2 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x65,0,errorCode,
                               "%s","SettMapMTy::DoneSettMap");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x65);
    return;
  }
  if (local_8->field_2204 != (AnonPointee_SettMapMTy_2204 *)0x0) {
    FreeAndNull(&local_8->field_2204);
  }
  FUN_006b3bb0((int *)g_ddxContext_008075A8,this_00->field_2200);
  pSVar3 = this_00->field_2237;
  this_00->field_2200 = -1;
  if (pSVar3 != (SettMapMTy_field_2237DArray *)0x0) {
    uVar4 = 0;
    if (pSVar3->count != 0) {
      if (pSVar3->count == 0) {
        piVar2 = (SettMapMTy_field_2237Element *)0x0;
        goto LAB_005cc360;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        piVar2 = (SettMapMTy_field_2237Element *)
                 ((int)&pSVar3->data->field_0000 + pSVar3->elementSize * uVar4);
LAB_005cc360:
        if ((piVar2 != (SettMapMTy_field_2237Element *)0x0) && (piVar2->field_0008 != 0)) {
          FreeAndNull((void **)&piVar2->field_0008);
        }
        pSVar3 = this_00->field_2237;
        uVar4 = uVar4 + 1;
      } while (uVar4 < pSVar3->count);
    }
    DArrayDestroy((DArrayTy *)this_00->field_2237);
    this_00->field_2237 = (SettMapMTy_field_2237DArray *)0x0;
  }
  SettMapTy::DoneSettMap((SettMapTy *)this_00);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

