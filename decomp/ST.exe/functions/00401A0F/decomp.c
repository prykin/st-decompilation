
int __thiscall TLOBaseTy::AddSprInit(TLOBaseTy *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 auStack_48 [16];
  TLOBaseTy *pTStack_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  pTStack_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(auStack_48,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    switch(*(undefined4 *)(pTStack_8 + 0x5ac)) {
    case 0x32:
    case 0x40:
    case 0x49:
    case 0x5c:
      thunk_FUN_004d01f0(pTStack_8);
      g_currentExceptionFrame = pIVar4;
      return 0;
    case 0x45:
      thunk_FUN_004eaa20((int *)pTStack_8);
      g_currentExceptionFrame = pIVar4;
      return 0;
    case 0x4e:
      thunk_FUN_004d9c80((int *)pTStack_8);
      g_currentExceptionFrame = pIVar4;
      return 0;
    case 0x52:
    case 0x5f:
      thunk_FUN_004ec050((int)pTStack_8);
      g_currentExceptionFrame = pIVar4;
      return 0;
    case 0x69:
      thunk_FUN_004dce00((int *)pTStack_8);
      break;
    case 0x70:
      thunk_FUN_004d9000((int *)pTStack_8);
      g_currentExceptionFrame = pIVar4;
      return 0;
    case 0x72:
      thunk_FUN_004ecea0((int *)pTStack_8);
      g_currentExceptionFrame = pIVar4;
      return 0;
    }
    g_currentExceptionFrame = pIVar4;
    return 0;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0x2c5,0,iVar2,&DAT_007a4ccc,
                             s_TLOBaseTy__AddSprInit_error_007ad540);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0x2c6);
  return iVar2;
}

