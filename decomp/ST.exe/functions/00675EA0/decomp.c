#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 257 | 258 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl _AddObjGrpExch(uint param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  DArrayTy *array;
  int iVar5;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar4 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_48.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_mdef.cpp",0x101,0,iVar4,"%s",
                               "_AddObjGrpExch");
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\ai\\ai_mdef.cpp",0x102);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_2 == (int *)0x0) {
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar4 = (**(code **)(*param_2 + 0x2c))();
  if ((iVar4 < 1) || (0x28 < iVar4)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    if ((iVar4 < 0x32) || (0x73 < iVar4)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    bVar3 = false;
    if (!bVar2) goto LAB_00675f12;
  }
  bVar3 = true;
LAB_00675f12:
  if (bVar3) {
    array = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
    Library::DKW::TBL::FUN_006ae1c0(&array->flags,(undefined4 *)((int)param_2 + 0x32));
    thunk_FUN_00675dc0(param_1,array);
    DArrayDestroy(array);
  }
  g_currentExceptionFrame = local_48.previous;
  return;
}

