
void __thiscall CPanelTy::PaintName(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  CPanelTy CVar3;
  int iVar4;
  undefined4 uVar5;
  UINT UVar6;
  CPanelTy *pCVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  HINSTANCE pHVar9;
  InternalExceptionFrame IStack_4c;
  CPanelTy *pCStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pCStack_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_8;
  if (iVar4 == 0) {
    if (param_1 == 0) {
      iVar4 = *(int *)(pCStack_8 + 0x19c);
    }
    else {
      iVar4 = *(int *)(pCStack_8 + 0x184);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(pCStack_8 + 0x1b8),iVar4,0,1,0,0x4e,0x24);
    if (param_1 == 0) {
      CVar3 = pCVar2[0xc5d];
    }
    else {
      CVar3 = pCVar2[0xb6f];
    }
    if (CVar3 == (CPanelTy)0x0) {
      if (param_1 == 0) {
        CVar3 = pCVar2[0xc58];
        uVar5 = *(undefined4 *)(pCVar2 + 0xc54);
      }
      else {
        CVar3 = pCVar2[0xb6a];
        uVar5 = *(undefined4 *)(pCVar2 + 0xb66);
      }
      pHVar9 = DAT_00807618;
      UVar6 = thunk_FUN_00523410(uVar5,(char)CVar3,0);
      pCVar7 = (CPanelTy *)FUN_006b0140(UVar6,pHVar9);
    }
    else if (param_1 == 0) {
      pCVar7 = pCVar2 + 0xc5d;
    }
    else {
      pCVar7 = pCVar2 + 0xb6f;
    }
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1b8),(uint *)pCVar7,-2,-1,0,-1,-1);
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar8 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1e,0,iVar4,&DAT_007a4ccc,
                             s_CPanelTy__PaintName_007c23f4);
  if (iVar8 == 0) {
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1e);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

