#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::VisHoleExec
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall VisHoleExec(VisibleClassTy * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=0055AC44 RET | 0055AC9C RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall VisibleClassTy::VisHoleExec(VisibleClassTy *this)

{
  VisibleClassTy_field_00F4DArray *pVVar1;
  VisibleClassTy *this_00;
  uint uVar3;
  int errorCode;
  uint uVar4;
  int iVar5;
  VisibleClassTy_field_00F4Element *element_00f4;
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
        pVVar1 = this_00->field_00F4;
        if (local_8 < pVVar1->count) {
          element_00f4 = DArrayAt<VisibleClassTy_field_00F4Element>(pVVar1, local_8);
        }
        else {
          element_00f4 = nullptr;
        }
        if (((uint)(element_00f4->field_0014 + element_00f4->field_0018) <= this_00->field_0108) &&
           (((this_00->field_0108 - element_00f4->field_0014) - element_00f4->field_0018) % 7 == 0)) {
          sub_00559110(this_00,element_00f4->field_0000,(undefined *)element_00f4->field_0004,element_00f4->index,element_00f4->index_0010,element_00f4->field_000C,-6,
                       0xffffffff);
          uVar3 = local_8;
          uVar4 = element_00f4->field_000C - 1;
          element_00f4->field_000C = uVar4;
          if ((int)uVar4 < 0) {
            DArrayRemoveAt((DArrayTy *)this_00->field_00F4,local_8);
            local_8 = uVar3;
          }
          else {
            sub_00558DC0(this_00,element_00f4->field_0000,element_00f4->field_0004,(undefined *)element_00f4->index,(int *)element_00f4->index_0010,uVar4,
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

