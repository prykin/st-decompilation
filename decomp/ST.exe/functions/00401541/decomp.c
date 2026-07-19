
undefined4 __thiscall
STAllPlayersC::UnRegisterDeposit(STAllPlayersC *this,uint param_1,uint param_2)

{
  code *pcVar1;
  int errorCode;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  STAllPlayersC *pSStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pSStack_c = this;
  errorCode = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    uVar2 = thunk_FUN_0042b620(0xffffffff,param_1,4);
    uVar4 = extraout_ECX;
    if (uVar2 != param_2) {
      RaiseInternalException
                (-0x5001fff9,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2f4e);
      uVar4 = extraout_ECX_00;
    }
    thunk_FUN_0042c5f0(DAT_0080874d,*(int *)(param_2 + 0x20),
                       CONCAT31((int3)((uint)uVar4 >> 8),*(undefined1 *)(param_2 + 0x24)),param_1);
    thunk_FUN_0042cef0(*(int *)(param_2 + 0x20),*(char *)(param_2 + 0x24),(short)param_1);
    FUN_006ae140(DAT_007fa15c,param_1 & 0xffff,&uStack_8);
    g_currentExceptionFrame = IStack_50.previous;
  }
  else {
    g_currentExceptionFrame = IStack_50.previous;
    if (errorCode != -0x5001fff7) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2f57,0,errorCode,
                                 &DAT_007a4ccc,s_STAllPlayersC__UnRegisterDeposit_007a87c8);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      RaiseInternalException(errorCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2f58);
      return 0xffffffff;
    }
  }
  return 0;
}

