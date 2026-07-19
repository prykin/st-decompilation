
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CreateGame */

void __thiscall FSGSTy::CreateGame(FSGSTy *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  MMsgTy *this_00;
  code *pcVar4;
  CursorClassTy *this_01;
  FSGSTy *pFVar5;
  int errorCode;
  int iVar6;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar7;
  undefined4 local_48 [16];
  FSGSTy *local_8;
  
  pIVar7 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = __setjmp3(local_48,0,unaff_ESI,pIVar7);
  this_01 = DAT_00802a30;
  if (errorCode != 0) {
    g_currentExceptionFrame = pIVar7;
    iVar6 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xab9,0,errorCode,
                               &DAT_007a4ccc,s_FSGSTy__CreateGame_007cc554);
    if (iVar6 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xab9);
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    uVar1 = *(undefined4 *)(DAT_00802a30 + 0xc9);
    uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
    DAT_00802a30[0x493] = (CursorClassTy)0x1;
    *(undefined2 *)(this_01 + 0x494) = 0xffff;
    CursorClassTy::SetGCType(this_01,0,uVar2,uVar1);
    CursorClassTy::DrawSprite(this_01,*(int *)(this_01 + 0xc5),*(int *)(this_01 + 0xc9));
    this_01[0xd2] = (CursorClassTy)0x0;
    *(undefined4 *)(this_01 + 0x4df) = 0xffffffff;
  }
  pFVar5 = local_8;
  if (param_1 != 0) {
    if (*(MMsgTy **)(*(int *)(local_8 + 0x1a5b) + 0x2e6) == (MMsgTy *)0x0) {
      g_currentExceptionFrame = pIVar7;
      return;
    }
    MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(local_8 + 0x1a5b) + 0x2e6),0x2594,'\0',
                       (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
    g_currentExceptionFrame = pIVar7;
    return;
  }
  DAT_0080877f = *(undefined4 *)(DAT_00811764 + 0x38);
  DAT_0080877e = 1;
  local_8[0x1a61] = (FSGSTy)0x0;
  DAT_008067a0 = 1;
  uVar3 = *(uint *)(local_8 + 0x1ec2);
  if (uVar3 < 0x502) {
    if (uVar3 == 0x501) {
      DAT_00803400 = 5;
      goto LAB_005a33fb;
    }
    if (uVar3 == 0x200) {
      DAT_00803400 = 0x14;
      goto LAB_005a33fb;
    }
    if (uVar3 == 0x400) {
      DAT_00803400 = 0x15;
      goto LAB_005a33fb;
    }
  }
  else if (uVar3 == 0x502) {
    DAT_00803400 = 0xc;
    goto LAB_005a33fb;
  }
  DAT_00803400 = 4;
LAB_005a33fb:
  thunk_FUN_005b6350(local_8,0x611f,0x13,0);
  (**(code **)(*(int *)pFVar5 + 8))();
  this_00 = *(MMsgTy **)(*(int *)(pFVar5 + 0x1a5b) + 0x2e6);
  if (this_00 == (MMsgTy *)0x0) {
    g_currentExceptionFrame = pIVar7;
    return;
  }
  MMsgTy::HidePanel(this_00,1,0,1);
  g_currentExceptionFrame = pIVar7;
  return;
}

