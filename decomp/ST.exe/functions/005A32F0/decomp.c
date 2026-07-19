
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
  void *unaff_ESI;
  InternalExceptionFrame *pIVar8;
  undefined4 local_48 [16];
  FSGSTy *local_8;
  
  pIVar8 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar8);
  this_00 = DAT_00802a30;
  if (errorCode != 0) {
    g_currentExceptionFrame = pIVar8;
    iVar7 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xab9,0,errorCode,
                               &DAT_007a4ccc,s_FSGSTy__CreateGame_007cc554);
    if (iVar7 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xab9);
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    uVar1 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
    uVar2 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
    DAT_00802a30[0xb].field_0x47 = 1;
    *(undefined2 *)&this_00[0xb].field_0x48 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,uVar2,uVar1);
    CursorClassTy::DrawSprite
              (this_00,*(int *)((int)&this_00[1].field_0060 + 1),*(int *)&this_00[2].field_0x1);
    this_00[2].field_0xa = 0;
    *(undefined4 *)&this_00[0xc].field_0x2f = 0xffffffff;
  }
  pFVar6 = local_8;
  if (param_1 != 0) {
    pMVar4 = *(MMsgTy **)(*(int *)&local_8->field_0x1a5b + 0x2e6);
    if (pMVar4 == (MMsgTy *)0x0) {
      g_currentExceptionFrame = pIVar8;
      return;
    }
    MMsgTy::SetMessage(pMVar4,0x2594,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0)
    ;
    g_currentExceptionFrame = pIVar8;
    return;
  }
  DAT_0080877f = *(undefined4 *)(DAT_00811764 + 0x38);
  DAT_0080877e = 1;
  local_8->field_0x1a61 = 0;
  DAT_008067a0 = 1;
  uVar3 = *(uint *)&local_8->field_0x1ec2;
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
  (**(code **)(*(int *)pFVar6 + 8))();
  pMVar4 = *(MMsgTy **)(*(int *)&pFVar6->field_0x1a5b + 0x2e6);
  if (pMVar4 == (MMsgTy *)0x0) {
    g_currentExceptionFrame = pIVar8;
    return;
  }
  MMsgTy::HidePanel(pMVar4,1,0,1);
  g_currentExceptionFrame = pIVar8;
  return;
}

