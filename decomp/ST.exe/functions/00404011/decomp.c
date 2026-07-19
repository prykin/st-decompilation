
void __thiscall CursorClassTy::DelOpticAcc(CursorClassTy *this)

{
  code *pcVar1;
  CursorClassTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 *puVar4;
  void *unaff_EDI;
  InternalExceptionFrame IStack_b8;
  undefined4 auStack_74 [5];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 auStack_28 [4];
  undefined4 uStack_18;
  undefined4 *puStack_14;
  CursorClassTy *pCStack_8;
  
  IStack_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_b8;
  pCStack_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(IStack_b8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar4 = auStack_28;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar4 = auStack_74;
    for (iVar2 = 0x13; this_00 = pCStack_8, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puStack_14 = auStack_74;
    auStack_74[0] = 8;
    uStack_5c = 2;
    uStack_60 = *(undefined4 *)(pCStack_8 + 8);
    uStack_18 = 0x11;
    puVar4 = &DAT_00808136;
    do {
      auStack_74[1] = puVar4[-0x50];
      uStack_58 = *puVar4;
      FUN_006e6000(this_00,3,1,auStack_28);
      puVar4 = puVar4 + 1;
    } while ((int)puVar4 < 0x808146);
    g_currentExceptionFrame = IStack_b8.previous;
    return;
  }
  g_currentExceptionFrame = IStack_b8.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,399,0,iVar2,&DAT_007a4ccc,
                             s_CursorClassTy__DelOpticAcc_007c7eec);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,400);
  return;
}

