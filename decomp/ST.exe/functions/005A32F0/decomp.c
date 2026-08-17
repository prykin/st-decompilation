#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CreateGame */

void __thiscall FSGSTy::CreateGame(FSGSTy *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  MMsgTy *pMVar4;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = g_cursorClass_00802A30;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xab9,0,iVar4,"%s"
                               ,"FSGSTy::CreateGame");
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xab9);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (g_cursorClass_00802A30 != nullptr) {
    iVar1 = g_cursorClass_00802A30->field_00C9;
    iVar2 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_1;
    this_00->field_0494 = 0xffff;
    /* ST_CALLSITE[005A334F]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
    CursorClassTy::SetGCType(this_00,CASE_0,iVar2,iVar1);
    /* ST_CALLSITE[005A3364]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  this_01 = local_8;
  if (param_1 != 0) {
    pMVar4 = (local_8->array_00BC[0xc].field_01DB)->field_02E6;
    if (pMVar4 == nullptr) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    /* ST_CALLSITE[005A3461]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
    MMsgTy::SetMessage(pMVar4,0x2594,'\0',nullptr,nullptr,nullptr,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  DAT_0080877f = g_int_00811764[0xe];
  DAT_0080877e = 1;
  local_8->array_00BC[0xc].field_01E1 = 0;
  DAT_008067a0 = 1;
  uVar3 = local_8->field_1EC2;
  if (uVar3 < 0x502) {
    if (uVar3 == 0x501) {
      DAT_00803400 = 5;
      goto cf_common_exit_005A33FB;
    }
    if (uVar3 == 0x200) {
      DAT_00803400 = 0x14;
      goto cf_common_exit_005A33FB;
    }
    if (uVar3 == 0x400) {
      DAT_00803400 = 0x15;
      goto cf_common_exit_005A33FB;
    }
  }
  else if (uVar3 == 0x502) {
    DAT_00803400 = 0xc;
    goto cf_common_exit_005A33FB;
  }
  DAT_00803400 = 4;
cf_common_exit_005A33FB:
  thunk_FUN_005b6350(local_8,0x611f,0x13,0);
  /* ST_CALLSITE[005A340F]: CALL dword ptr [EAX + 0x8] */
  this_01->CloseButtons();
  pMVar4 = (this_01->array_00BC[0xc].field_01DB)->field_02E6;
  if (pMVar4 == nullptr) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  /* ST_CALLSITE[005A3428]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
  MMsgTy::HidePanel(pMVar4,1,0,1);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

