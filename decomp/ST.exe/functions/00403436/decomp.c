
void __thiscall CursorClassTy::DoneCursor(CursorClassTy *this)

{
  code *pcVar1;
  CursorClassTy *pCVar2;
  int errorCode;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  CursorClassTy *pCStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pCStack_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_8;
  if (errorCode == 0) {
    if (-1 < (int)*(uint *)(pCStack_8 + 0x4d6)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(pCStack_8 + 0x4d6));
    }
    *(undefined4 *)(pCVar2 + 0x4d6) = 0xffffffff;
    if (*(int *)(pCVar2 + 0x4d2) != 0) {
      FUN_006ab060((undefined4 *)(pCVar2 + 0x4d2));
    }
    *(undefined4 *)(pCVar2 + 0x4e3) = 0;
    *(undefined4 *)(pCVar2 + 0x4e7) = 0;
    if (*(SpriteClassTy **)(pCVar2 + 0x4eb) != (SpriteClassTy *)0x0) {
      SpriteClassTy::CloseSprite(*(SpriteClassTy **)(pCVar2 + 0x4eb));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pCVar2 + 0x4eb));
      *(undefined4 *)(pCVar2 + 0x4eb) = 0;
    }
    if (*(int **)(pCVar2 + 0xad) != (int *)0x0) {
      FUN_006b8a30(*(int **)(pCVar2 + 0xad));
    }
    *(undefined4 *)(pCVar2 + 0xad) = 0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pCVar2 + 0x18));
    DAT_00802a30 = 0;
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x7d,0,errorCode,
                             &DAT_007a4ccc,s_CursorClassTy__DoneCursor_007c7de0);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x7e);
  return;
}

