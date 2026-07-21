#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CreateGame */

void __thiscall FSGSTy::CreateGame(FSGSTy *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  MMsgTy *pMVar4;
  code *pcVar5;
  CursorClassTy *this_00;
  FSGSTy *pFVar6;
  int errorCode;
  int iVar7;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = PTR_00802a30;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xab9,0,errorCode,
                               &DAT_007a4ccc,s_FSGSTy__CreateGame_007cc554);
    if (iVar7 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xab9);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    uVar1 = PTR_00802a30->field_00C9;
    uVar2 = PTR_00802a30->field_00C5;
    PTR_00802a30->field_0493 = 1;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,uVar2,uVar1);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_0xd2 = 0;
    *(undefined4 *)&this_00->field_0x4df = 0xffffffff;
  }
  pFVar6 = local_8;
  if (param_1 != 0) {
    pMVar4 = local_8->field_1A5B->field_02E6;
    if (pMVar4 == (MMsgTy *)0x0) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    MMsgTy::SetMessage(pMVar4,0x2594,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0)
    ;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  DAT_0080877f = g_int_00811764[0xe];
  DAT_0080877e = 1;
  local_8->field_1A61 = 0;
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
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)pFVar6->field_0000->field_0008)();
  pMVar4 = pFVar6->field_1A5B->field_02E6;
  if (pMVar4 == (MMsgTy *)0x0) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  MMsgTy::HidePanel(pMVar4,1,0,1);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

