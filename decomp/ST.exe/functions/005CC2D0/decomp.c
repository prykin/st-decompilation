#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::DoneSettMap */

void __thiscall SettMapMTy::DoneSettMap(SettMapMTy *this)

{
  SettMapMTy *this_00;
  int errorCode;
  int *piVar2;
  int iVar3;
  SettMapMTy_field_2237DArray *pSVar4;
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
  if (local_8->field_2204 != nullptr) {
    FreeAndNull(&local_8->field_2204);
  }
  FUN_006b3bb0((int *)g_ddxContext_008075A8,this_00->field_2200);
  pSVar4 = this_00->field_2237;
  this_00->field_2200 = 0xffffffff;
  if (pSVar4 != nullptr) {
    uVar5 = 0;
    if (pSVar4->count != 0) {
      if (pSVar4->count == 0) {
        piVar2 = nullptr;
        goto LAB_005cc360;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        piVar2 = (int *)((int)&pSVar4->data->field_0000 + pSVar4->elementSize * uVar5);
LAB_005cc360:
        if ((piVar2 != nullptr) && (piVar2[2] != 0)) {
          FreeAndNull(piVar2 + 2);
        }
        pSVar4 = this_00->field_2237;
        uVar5 = uVar5 + 1;
      } while (uVar5 < pSVar4->count);
    }
    DArrayDestroy((DArrayTy *)this_00->field_2237);
    this_00->field_2237 = nullptr;
  }
  /* ST_CALLSITE[005CC39A]: CALL 0x00403fb7; direct=00403FB7 SettMapTy::DoneSettMap */
  SettMapTy::DoneSettMap((SettMapTy *)this_00);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

