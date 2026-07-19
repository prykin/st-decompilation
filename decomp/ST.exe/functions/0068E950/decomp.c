
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::ClaimSave */

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
  InternalExceptionFrame local_50;
  int local_c;
  AiTactClassTy *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  errorCode = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar3 = local_8;
  if (errorCode == 0) {
    pAVar1 = local_8 + 0x130;
    if (*(int *)(local_8 + 0x130) != 0) {
      FUN_006ab060((undefined4 *)pAVar1);
    }
    if (*(uint **)(pAVar3 + 0xbd) != (uint *)0x0) {
      uVar4 = FUN_006b0020(*(uint **)(pAVar3 + 0xbd),&local_c);
      *(undefined4 *)pAVar1 = uVar4;
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
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

