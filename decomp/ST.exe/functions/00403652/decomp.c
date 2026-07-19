
void __thiscall AiTactClassTy::ClaimRestore(AiTactClassTy *this)

{
  code *pcVar1;
  AiTactClassTy *pAVar2;
  int errorCode;
  undefined4 uVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 auStack_48 [16];
  AiTactClassTy *pAStack_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  pAStack_8 = this;
  errorCode = __setjmp3(auStack_48,0,unaff_ESI,pIVar5);
  pAVar2 = pAStack_8;
  if (errorCode == 0) {
    if ((*(int *)(pAStack_8 + 0x130) != 0) && (*(byte **)(pAStack_8 + 0xbd) != (byte *)0x0)) {
      FUN_006ae110(*(byte **)(pAStack_8 + 0xbd));
      uVar3 = FUN_006b0060((uint *)0x0,*(uint **)(pAVar2 + 0x130));
      *(undefined4 *)(pAVar2 + 0xbd) = uVar3;
    }
    g_currentExceptionFrame = pIVar5;
    return;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x17b,0,errorCode,&DAT_007a4ccc,
                             s_AiTactClassTy__ClaimRestore_007d5774);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x17c);
  return;
}

