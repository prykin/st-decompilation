
void __thiscall FUN_0055bf20(void *this,undefined4 param_1)

{
  CFsgsConnection *pCVar1;
  CFsgsConnection *pCVar2;
  int iVar3;
  char *pcVar4;
  BITMAPINFO *pBVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_94;
  InternalExceptionFrame local_50;
  CFsgsConnection *local_c;
  BITMAPINFO *local_8;
  
  *(undefined4 *)((int)this + 0x3c) = param_1;
  local_8 = (BITMAPINFO *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = local_c;
  if (iVar3 == 0) {
    pcVar4 = CFsgsConnection::GetIconFilename(local_c);
    if (pcVar4 != (char *)0x0) {
      pcVar4 = CFsgsConnection::GetIconFilename(pCVar2);
      local_8 = (BITMAPINFO *)FUN_006bc260(pcVar4);
    }
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != (BITMAPINFO *)0x0) {
    g_currentExceptionFrame = &local_94;
    local_94.previous = local_50.previous;
    iVar3 = __setjmp3(local_94.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pCVar2 = local_c;
    if (iVar3 == 0) {
      pCVar1 = local_c + 0x40;
      if (*(int *)(local_c + 0x40) != 0) {
        FUN_006ab060((undefined4 *)pCVar1);
      }
      pBVar5 = FUN_006bbfa0(local_8,(undefined4 *)0x0,*(HPALETTE *)(pCVar2 + 0x3c));
      *(BITMAPINFO **)pCVar1 = pBVar5;
      g_currentExceptionFrame = local_94.previous;
      FUN_006ab060(&local_8);
      return;
    }
    g_currentExceptionFrame = local_94.previous;
    FUN_006ab060(&local_8);
  }
  return;
}

