
void __thiscall AiTactClassTy::ClaimSave(AiTactClassTy *this)

{
  AiTactClassTy *pAVar1;
  code *pcVar2;
  AiTactClassTy *pAVar3;
  int errorCode;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  int iStack_c;
  AiTactClassTy *pAStack_8;
  
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pAStack_8 = this;
  errorCode = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar3 = pAStack_8;
  if (errorCode == 0) {
    pAVar1 = pAStack_8 + 0x130;
    if (*(int *)(pAStack_8 + 0x130) != 0) {
      FUN_006ab060((undefined4 *)pAVar1);
    }
    if (*(uint **)(pAVar3 + 0xbd) != (uint *)0x0) {
      uVar4 = FUN_006b0020(*(uint **)(pAVar3 + 0xbd),&iStack_c);
      *(undefined4 *)pAVar1 = uVar4;
    }
    g_currentExceptionFrame = IStack_50.previous;
    return;
  }
  g_currentExceptionFrame = IStack_50.previous;
  iVar5 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x16d,0,errorCode,&DAT_007a4ccc,
                             s_AiTactClassTy__ClaimSave_007d5754);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x16e);
  return;
}

