#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DoLogon */

void __thiscall FSGSTy::DoLogon(FSGSTy *this)

{
  int iVar1;
  int iVar2;
  StartSystemTy *pSVar3;
  CursorClassTy *this_00;
  FSGSTy *pFVar5;
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
  this_00 = g_cursorClass_00802A30;
  if (iVar4 == 0) {
    if (g_cursorClass_00802A30 != nullptr) {
      iVar1 = g_cursorClass_00802A30->field_00C9;
      iVar2 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      this_00->field_0494 = 0xffff;
      /* ST_CALLSITE[005A104F]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      CursorClassTy::SetGCType(this_00,CASE_0,iVar2,iVar1);
      /* ST_CALLSITE[005A1064]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
      this_00->field_00D2 = 0;
      this_00->field_04DF = -1;
    }
    pFVar5 = local_8;
    /* ST_CALLSITE[005A1081]: CALL dword ptr [EDX + 0x8] */
    local_8->CloseButtons();
    pFVar5->array_00BC[0xc].field_01E1 = 2;
    pSVar3 = pFVar5->array_00BC[0xc].field_01DB;
    if (pSVar3->field_02E6 != nullptr) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      MMsgTy::thunk_FUN_005b8f40(pSVar3->field_02E6,&local_18);
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

