#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_oct.cpp
   STOctopusC::Bad
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall Bad(STOctopusC * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0058A94E RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall STOctopusC::Bad(STOctopusC *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = (int)g_worldGrid.sizeY;
  iVar4 = (int)g_worldGrid.sizeX;
  if (7 < this->field_02A9) {
    iVar2 = ReportDebugMessage("E:\\__titans\\Igor\\to_oct.cpp",0x21a,0,0,"%s",
                               "STOctopusC::Bad direction");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    this->field_02A9 = 0;
  }
  if ((((iVar4 + -1 < this->field_0299) || (this->field_0299 < 0)) ||
      (iVar3 + -1 < this->field_029D)) || (this->field_029D < 0)) {
    this->field_0299 = iVar4 + -1 >> 1;
    this->field_029D = iVar3 + -1 >> 1;
  }
  return;
}

