
undefined4 __thiscall TLOBaseTy::procResult(TLOBaseTy *this)

{
  code *pcVar1;
  TLOBaseTy *pTVar2;
  int errorCode;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  TLOBaseTy *pTStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pTStack_c = this;
  errorCode = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pTVar2 = pTStack_c;
  if (errorCode == 0) {
    switch(*(undefined4 *)(pTStack_c + 0x361)) {
    case 1:
      uVar5 = thunk_FUN_004ceb00(pTStack_c,*(undefined4 *)(pTStack_c + 0x369));
      g_currentExceptionFrame = IStack_50.previous;
      return uVar5;
    case 2:
      uVar5 = thunk_FUN_004e2c30(pTStack_c,*(uint *)(pTStack_c + 0x369));
      g_currentExceptionFrame = IStack_50.previous;
      return uVar5;
    case 3:
      uVar5 = thunk_FUN_004ea830((int)pTStack_c);
      g_currentExceptionFrame = IStack_50.previous;
      return uVar5;
    case 4:
      uVar5 = thunk_FUN_004d9c20((int)pTStack_c);
      g_currentExceptionFrame = IStack_50.previous;
      return uVar5;
    case 5:
      uStack_8 = 1;
      uVar3 = thunk_FUN_004406c0((char)pTStack_c[0x23d]);
      *(undefined4 *)(pTVar2 + 0x241) =
           *(undefined4 *)(&DAT_007e4178 + ((uVar3 & 0xff) + *(int *)(pTVar2 + 0x235) * 3) * 4);
      thunk_FUN_004cc900((int)pTVar2);
      g_currentExceptionFrame = IStack_50.previous;
      return 1;
    case 6:
      uVar5 = thunk_FUN_004de820((int *)pTStack_c);
      g_currentExceptionFrame = IStack_50.previous;
      return uVar5;
    default:
      g_currentExceptionFrame = IStack_50.previous;
      return uStack_8;
    case 8:
      uVar5 = thunk_FUN_004ece40((int)pTStack_c);
      g_currentExceptionFrame = IStack_50.previous;
      return uVar5;
    }
  }
  g_currentExceptionFrame = IStack_50.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Artem_TLO_bproc_cpp_007ad3b4,0x291,0,errorCode,
                             &DAT_007a4ccc,s_TLOBaseTy__procResult_error_007ad3ec);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Artem_TLO_bproc_cpp_007ad3b4,0x292);
  return 0;
}

