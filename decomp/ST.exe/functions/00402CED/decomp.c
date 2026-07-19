
void __thiscall FSGSTy::DoLogon(FSGSTy *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  FSGSTy *pFVar4;
  int iVar5;
  int iVar6;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar7;
  undefined4 auStack_58 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 uStack_c;
  FSGSTy *pFStack_8;
  
  pIVar7 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa4;
  pFStack_8 = this;
  iVar5 = __setjmp3(auStack_58,0,unaff_ESI,pIVar7);
  this_00 = DAT_00802a30;
  if (iVar5 == 0) {
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar1 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(this_00 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(this_00,0,uVar2,uVar1);
      CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
      this_00[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
    }
    pFVar4 = pFStack_8;
    (**(code **)(*(int *)pFStack_8 + 8))();
    pFVar4[0x1a61] = (FSGSTy)0x2;
    iVar5 = *(int *)(pFVar4 + 0x1a5b);
    if (*(int *)(iVar5 + 0x2e6) != 0) {
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      thunk_FUN_005b8f40(*(void **)(iVar5 + 0x2e6),&uStack_18);
    }
    g_currentExceptionFrame = pIVar7;
    return;
  }
  g_currentExceptionFrame = pIVar7;
  iVar6 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x918,0,iVar5,&DAT_007a4ccc,
                             s_FSGSTy__DoLogon_007cc3f4);
  if (iVar6 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x918);
  return;
}

