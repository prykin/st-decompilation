
int __thiscall AiTactClassTy::PrepareToSave(AiTactClassTy *this,undefined4 *param_1,short param_2)

{
  short sVar1;
  code *pcVar2;
  AiTactClassTy *pAVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  AiTactClassTy *pAStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pAStack_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar3 = pAStack_8;
  if (iVar4 == 0) {
    param_1[0xb] = 0;
    if (*(short *)(param_1 + 3) == -1) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = thunk_FUN_0068e220(pAStack_8,*(short *)(param_1 + 3));
    }
    param_1[0xc] = uVar5;
    sVar1 = *(short *)(pAVar3 + 0x7c);
    param_1[0xd] = 0xffffffff;
    *(short *)((int)param_1 + 6) =
         *(short *)((int)param_1 + 6) + (param_2 + (sVar1 + 1) * 0x14) * 0x32;
    *(undefined4 *)((int)param_1 + 0x3a) = *(undefined4 *)(pAVar3 + 300);
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)(pAVar3 + 0xbd),param_1);
    thunk_FUN_00676c40(*(int *)(pAVar3 + 0xbd),&LAB_0040242d);
    g_currentExceptionFrame = IStack_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x1a2,0,iVar4,&DAT_007a4ccc,
                             s_AiTactClassTy__PrepareToSave_007d5730);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  RaiseInternalException(iVar4,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x1a3);
  return iVar4;
}

