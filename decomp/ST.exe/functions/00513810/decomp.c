#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::BackBut
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall BackBut(HelpPanelTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005138AF RET | 005138D5 RET | 0051397C RET | 005139C2 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall HelpPanelTy::BackBut(HelpPanelTy *this)

{
  HelpPanelTy_field_01A1State HVar1;
  HelpPanelTy *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  void *local_8;

  if (this->field_01A1 != this->field_01A2) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    this_00 = local_c;
    if (iVar3 == 0) {
      STPiece<0,2>(iVar5) = local_c->field_0178;
      STPiece<2,2>(iVar5) = local_c->field_017A;
      if (iVar5 != 0) {
        local_c->field_0028 = 0x4202;
        *(undefined2 *)&local_c->field_0x2c = 0;
        *(undefined2 *)&local_c->field_0x2e = 2;
        local_c->field_0030 = (undefined2)iVar5;
        local_c->field_0032 = STPiece<2,2>(iVar5);
        if (g_cursorClass_00802A30 != nullptr) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)g_cursorClass_00802A30->field_0000)(&local_c->field_0x18);
        }
      }
      HVar1 = this_00->field_01A2;
      if (HVar1 != 0) {
        if (HVar1 == CASE_6) {
          TTreeProc(this_00,this_00->field_01AB,'\0');
          PutToSHlp(this_00);
          g_currentExceptionFrame = local_50.previous;
          return;
        }
        if (HVar1 != CASE_A) {
          g_currentExceptionFrame = local_50.previous;
          return;
        }
      }
      this_00->field_01A1 = HVar1;
      this_00->field_01A3 = local_8;
      Library::DKW::WGR::FUN_006b55f0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,0x16,
                 (byte *)this_00->field_01DC,0,0x21,0x16,0x1b8,0x118);
      CreateList(this_00);
      if (this_00->field_01A2 == '\0') {
        local_8 = (void *)this_00->field_01B7;
      }
      else {
        local_8 = (void *)this_00->field_01BF;
      }
      if (this_00->field_019C != 0) {
        memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
        this_00->field_0028 = 0x22;
        *(short *)&this_00->field_0x2c = (short)local_8;
        this_00->field_0030 = 1;
        this_00->field_0032 = 1;
        FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)&this_00->field_0x18);
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x2b3,0,iVar3,"%s"
                               ,"HelpPanelTy::BackBut");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x2b3);
  }
  return;
}

