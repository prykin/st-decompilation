#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::VisHoleExec */

void __thiscall VisibleClassTy::VisHoleExec(VisibleClassTy *this,void *param_1)

{
  DArrayTy *pDVar1;
  code *pcVar2;
  VisibleClassTy *this_00;
  uint uVar3;
  int errorCode;
  uint uVar4;
  int iVar5;
  int *piVar6;
  InternalExceptionFrame local_50;
  VisibleClassTy *local_c;
  uint local_8;

  if (this->field_0114 != 0) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    this_00 = local_c;
    if (errorCode == 0) {
      local_8 = local_c->field_00F4->count;
      while (local_8 = local_8 - 1, -1 < (int)local_8) {
        pDVar1 = this_00->field_00F4;
        if (local_8 < pDVar1->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, local_8) (runtime stride) */
          piVar6 = (int *)(pDVar1->elementSize * local_8 + (int)pDVar1->data);
        }
        else {
          piVar6 = (int *)0x0;
        }
        if (((uint)(piVar6[5] + piVar6[6]) <= this_00->field_0108) &&
           (((this_00->field_0108 - piVar6[5]) - piVar6[6]) % 7 == 0)) {
          sub_00559110(this_00,*piVar6,(undefined *)piVar6[1],piVar6[2],piVar6[4],piVar6[3],-6,
                       0xffffffff);
          uVar3 = local_8;
          uVar4 = piVar6[3] - 1;
          piVar6[3] = uVar4;
          if ((int)uVar4 < 0) {
            FUN_006b0c70(this_00->field_00F4,local_8);
            local_8 = uVar3;
          }
          else {
            sub_00558DC0(this_00,*piVar6,piVar6[1],(undefined *)piVar6[2],(int *)piVar6[4],uVar4,
                         (int *)0xfffffffa,0xffffffff);
          }
        }
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\grig\\visible.cpp",0x40a,0,errorCode,
                               "%s","VisibleClassTy::VisHoleExec error");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\grig\\visible.cpp",0x40b);
  }
  return;
}

