
void __thiscall SettMapMTy::RunGame(SettMapMTy *this)

{
  code *pcVar1;
  SettMapMTy *pSVar2;
  int errorCode;
  int iVar3;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  InternalExceptionFrame IStack_4c;
  SettMapMTy *pSStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pSStack_8 = this;
  errorCode = __setjmp3(IStack_4c.jumpBuffer,0,unaff_ESI,unaff_EBX);
  if (errorCode == 0) {
    if (DAT_0080877e != '\0') {
      FUN_006b7070(DAT_00811764);
    }
    pSVar2 = pSStack_8;
    thunk_FUN_005b6350(pSStack_8,0x6948,0,0);
    pSVar2[0x21e6] = (SettMapMTy)0x1;
    pSVar2[0x21e5] = (SettMapMTy)0x1;
    pSVar2[0x21e4] = (SettMapMTy)0x1;
    pSVar2[0x21e7] = (SettMapMTy)0x1;
    pSVar2[0x21e2] = (SettMapMTy)0x1;
    pSVar2[0x21e1] = (SettMapMTy)0x1;
    (**(code **)(*(int *)pSVar2 + 8))();
    if (*(MMsgTy **)(*(int *)(pSVar2 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(*(MMsgTy **)(*(int *)(pSVar2 + 0x1a5b) + 0x2e6),1,0,1);
    }
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x998,0,errorCode,
                             &DAT_007a4ccc,s_SettMapMTy__RunGame_007cd510);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_settmobj_cpp_007cd258,0x998);
  return;
}

