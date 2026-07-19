
undefined4 * __thiscall AiTactClassTy::PrepareToSave(AiTactClassTy *this,uint *param_1)

{
  code *pcVar1;
  AiTactClassTy *pAVar2;
  int errorCode;
  AiTactClassTy *pAVar3;
  undefined4 *puVar4;
  int iVar5;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar6;
  undefined4 auStack_48 [16];
  AiTactClassTy *pAStack_8;
  
  pIVar6 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  pAStack_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(auStack_48,0,unaff_ESI,pIVar6);
  pAVar2 = pAStack_8;
  if (errorCode == 0) {
    if (pAStack_8 == (AiTactClassTy *)0x0) {
      pAVar3 = (AiTactClassTy *)0x0;
    }
    else {
      pAVar3 = pAStack_8 + 0x20;
    }
    puVar4 = thunk_FUN_00691190((undefined4 *)pAVar3,param_1);
    *puVar4 = 0x38e;
    puVar4[3] = 1;
    *(undefined4 *)((int)puVar4 + 0x5e) = *(undefined4 *)(pAVar2 + 0x1c);
    *(undefined2 *)((int)puVar4 + 0x105) = 0;
    g_currentExceptionFrame = pIVar6;
    return puVar4;
  }
  g_currentExceptionFrame = pIVar6;
  iVar5 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x81,0,errorCode,&DAT_007a4ccc,
                             s_AiTactClassTy__PrepareToSave_007d5730);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x82);
  return (undefined4 *)0x0;
}

