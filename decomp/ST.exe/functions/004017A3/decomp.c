
void __thiscall thunk_FUN_0055bf20(void *this,undefined4 param_1)

{
  CFsgsConnection *pCVar1;
  CFsgsConnection *pCVar2;
  int iVar3;
  char *pcVar4;
  BITMAPINFO *pBVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_94;
  InternalExceptionFrame IStack_50;
  CFsgsConnection *pCStack_c;
  BITMAPINFO *pBStack_8;
  
  *(undefined4 *)((int)this + 0x3c) = param_1;
  pBStack_8 = (BITMAPINFO *)0x0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pCStack_c = this;
  iVar3 = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_c;
  if (iVar3 == 0) {
    pcVar4 = CFsgsConnection::GetIconFilename(pCStack_c);
    if (pcVar4 != (char *)0x0) {
      pcVar4 = CFsgsConnection::GetIconFilename(pCVar2);
      pBStack_8 = (BITMAPINFO *)FUN_006bc260(pcVar4);
    }
  }
  g_currentExceptionFrame = IStack_50.previous;
  if (pBStack_8 != (BITMAPINFO *)0x0) {
    g_currentExceptionFrame = &IStack_94;
    IStack_94.previous = IStack_50.previous;
    iVar3 = __setjmp3(IStack_94.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pCVar2 = pCStack_c;
    if (iVar3 == 0) {
      pCVar1 = pCStack_c + 0x40;
      if (*(int *)(pCStack_c + 0x40) != 0) {
        FUN_006ab060((undefined4 *)pCVar1);
      }
      pBVar5 = FUN_006bbfa0(pBStack_8,(undefined4 *)0x0,*(HPALETTE *)(pCVar2 + 0x3c));
      *(BITMAPINFO **)pCVar1 = pBVar5;
      g_currentExceptionFrame = IStack_94.previous;
      FUN_006ab060(&pBStack_8);
      return;
    }
    g_currentExceptionFrame = IStack_94.previous;
    FUN_006ab060(&pBStack_8);
  }
  return;
}

