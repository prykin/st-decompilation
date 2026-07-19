
void __thiscall SIDTy::DeleteCtrls(SIDTy *this)

{
  code *pcVar1;
  SIDTy *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  SIDTy *pSVar5;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  SIDTy *pSStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pSStack_8 = this;
  iVar3 = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_8;
  if (iVar3 == 0) {
    iVar3 = 4;
    pSVar5 = pSStack_8 + 0x1af1;
    do {
      if (*(uint *)pSVar5 != 0) {
        FUN_006e56b0(*(void **)(pSVar2 + 0xc),*(uint *)pSVar5);
      }
      *(uint *)pSVar5 = 0;
      pSVar5 = pSVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_006b3af0(DAT_008075a8,*(uint *)(pSVar2 + 0x1cb4));
    if (*(uint *)(pSVar2 + 0x1b05) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pSVar2 + 0x1b49),*(uint *)(pSVar2 + 0x1b05));
    }
    if (*(uint *)(pSVar2 + 0x1b96) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pSVar2 + 0x1bda),*(uint *)(pSVar2 + 0x1b96));
    }
    if (*(uint *)(pSVar2 + 0x1c27) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pSVar2 + 0x1c6b),*(uint *)(pSVar2 + 0x1c27));
    }
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x110,0,iVar3,&DAT_007a4ccc,
                             s_SIDTy__DeleteCtrls_007cd67c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x110);
  return;
}

