
undefined4 * __thiscall AiBossClassTy::PrepareToSave(AiBossClassTy *this,uint *param_1)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 *puVar3;
  AiBossClassTy *pAVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 auStack_54 [16];
  AiBossClassTy *pAStack_14;
  uint uStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  pIVar5 = g_currentExceptionFrame;
  puStack_c = (undefined4 *)0x0;
  puStack_8 = (undefined4 *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa8;
  pAStack_14 = this;
  errorCode = Library::MSVCRT::__setjmp3(auStack_54,0,unaff_ESI,pIVar5);
  pAVar4 = pAStack_14;
  if (errorCode == 0) {
    puStack_8 = AiEventClassTy::PrepareToSave((AiEventClassTy *)(pAStack_14 + 0x1c),&uStack_10);
    if (pAVar4 == (AiBossClassTy *)0x0) {
      pAVar4 = (AiBossClassTy *)0x0;
    }
    else {
      pAVar4 = pAVar4 + 0x5d3;
    }
    puStack_c = thunk_FUN_00648620((undefined4 *)pAVar4,puStack_8,uStack_10,param_1);
    *(undefined1 *)puStack_c = 1;
    if (puStack_8 != (undefined4 *)0x0) {
      FUN_006ab060(&puStack_8);
    }
    g_currentExceptionFrame = pIVar5;
    return puStack_c;
  }
  g_currentExceptionFrame = pIVar5;
  if (puStack_8 != (undefined4 *)0x0) {
    FUN_006ab060(&puStack_8);
  }
  if (puStack_c != (undefined4 *)0x0) {
    FUN_006ab060(&puStack_c);
  }
  iVar2 = ReportDebugMessage(s_E____titans_ai_ai_boss_cpp_007d2750,0x4c,0,errorCode,&DAT_007a4ccc,
                             s_AiBossClassTy__PrepareToSave_007d278c);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_boss_cpp_007d2750,0x4d);
  return (undefined4 *)0x0;
}

