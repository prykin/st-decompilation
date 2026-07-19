
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_boss.cpp
   AiBossClassTy::InitData */

int __thiscall AiBossClassTy::InitData(AiBossClassTy *this,undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  AiBossClassTy *pAVar4;
  void *unaff_EDI;
  AiBossClassTy *pAVar5;
  InternalExceptionFrame local_4c;
  AiBossClassTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (local_8 == (AiBossClassTy *)0x0) {
      pAVar5 = (AiBossClassTy *)0x0;
    }
    else {
      pAVar5 = local_8 + 0x5d3;
    }
    pAVar4 = (AiBossClassTy *)param_1;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pAVar5 = *(undefined4 *)pAVar4;
      pAVar4 = pAVar4 + 4;
      pAVar5 = pAVar5 + 4;
    }
    *pAVar5 = *pAVar4;
    local_8[0x5d8] = (AiBossClassTy)0x1;
    AiEventClassTy::InitData
              ((AiEventClassTy *)(local_8 + 0x1c),
               (int *)(*(int *)(local_8 + 0x619) + 0x84 + (int)param_1));
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_00647ed0((int)local_8);
  iVar3 = ReportDebugMessage(s_E____titans_ai_ai_boss_cpp_007d2750,0x29,0,iVar2,&DAT_007a4ccc,
                             s_AiBossClassTy__InitData_007d2770);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E____titans_ai_ai_boss_cpp_007d2750,0x2a);
  return iVar2;
}

