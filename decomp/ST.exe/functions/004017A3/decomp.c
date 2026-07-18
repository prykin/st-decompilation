
void __thiscall thunk_FUN_0055bf20(void *this,undefined4 param_1)

{
  CFsgsConnection *pCVar1;
  CFsgsConnection *pCVar2;
  int iVar3;
  char *pcVar4;
  BITMAPINFO *pBVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puStack_94;
  undefined4 auStack_90 [16];
  undefined4 *puStack_50;
  undefined4 auStack_4c [16];
  CFsgsConnection *pCStack_c;
  BITMAPINFO *pBStack_8;
  
  *(undefined4 *)((int)this + 0x3c) = param_1;
  pBStack_8 = (BITMAPINFO *)0x0;
  puStack_50 = DAT_00858df8;
  DAT_00858df8 = &puStack_50;
  pCStack_c = this;
  iVar3 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_c;
  if (iVar3 == 0) {
    pcVar4 = CFsgsConnection::GetIconFilename(pCStack_c);
    if (pcVar4 != (char *)0x0) {
      pcVar4 = CFsgsConnection::GetIconFilename(pCVar2);
      pBStack_8 = (BITMAPINFO *)FUN_006bc260(pcVar4);
    }
  }
  DAT_00858df8 = puStack_50;
  if (pBStack_8 != (BITMAPINFO *)0x0) {
    DAT_00858df8 = &puStack_94;
    puStack_94 = puStack_50;
    iVar3 = __setjmp3(auStack_90,0,unaff_EDI,unaff_ESI);
    pCVar2 = pCStack_c;
    if (iVar3 == 0) {
      pCVar1 = pCStack_c + 0x40;
      if (*(int *)(pCStack_c + 0x40) != 0) {
        FUN_006ab060((undefined4 *)pCVar1);
      }
      pBVar5 = FUN_006bbfa0(pBStack_8,(undefined4 *)0x0,*(HPALETTE *)(pCVar2 + 0x3c));
      *(BITMAPINFO **)pCVar1 = pBVar5;
      DAT_00858df8 = puStack_94;
      FUN_006ab060(&pBStack_8);
      return;
    }
    DAT_00858df8 = puStack_94;
    FUN_006ab060(&pBStack_8);
  }
  return;
}

