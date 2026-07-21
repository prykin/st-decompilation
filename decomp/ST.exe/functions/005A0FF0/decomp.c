#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DoLogon */

void __thiscall FSGSTy::DoLogon(FSGSTy *this)

{
  StartSystemTy *pSVar1;
  code *pcVar2;
  CursorClassTy *this_00;
  FSGSTy *pFVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  FSGSTy *local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = PTR_00802a30;
  if (iVar4 == 0) {
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      iVar4 = PTR_00802a30->field_00C9;
      iVar5 = PTR_00802a30->field_00C5;
      PTR_00802a30->field_0493 = 1;
      this_00->field_0494 = 0xffff;
      CursorClassTy::SetGCType(this_00,CASE_0,iVar5,iVar4);
      CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
      this_00->field_00D2 = 0;
      this_00->field_04DF = 0xffffffff;
    }
    pFVar3 = local_8;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)local_8->field_0000->field_0008)();
    pFVar3->field_1A61 = 2;
    pSVar1 = pFVar3->field_1A5B;
    if (pSVar1->field_02E6 != (MMsgTy *)0x0) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      MMsgTy::thunk_FUN_005b8f40(pSVar1->field_02E6,&local_18);
    }
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x918,0,iVar4,"%s",
                             "FSGSTy::DoLogon");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x918);
  return;
}

