
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::DoneCursor */

void __thiscall CursorClassTy::DoneCursor(CursorClassTy *this)

{
  code *pcVar1;
  CursorClassTy *pCVar2;
  int errorCode;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  CursorClassTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = local_8;
  if (errorCode == 0) {
    if (-1 < (int)*(uint *)&local_8[0xc].field_0x26) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)&local_8[0xc].field_0x26);
    }
    *(undefined4 *)&pCVar2[0xc].field_0x26 = 0xffffffff;
    if (*(int *)&pCVar2[0xc].field_0x22 != 0) {
      FUN_006ab060((undefined4 *)&pCVar2[0xc].field_0x22);
    }
    *(undefined4 *)&pCVar2[0xc].field_0x33 = 0;
    *(undefined4 *)&pCVar2[0xc].field_0x37 = 0;
    if (*(SpriteClassTy **)&pCVar2[0xc].field_0x3b != (SpriteClassTy *)0x0) {
      SpriteClassTy::CloseSprite(*(SpriteClassTy **)&pCVar2[0xc].field_0x3b);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pCVar2[0xc].field_0x3b);
      *(undefined4 *)&pCVar2[0xc].field_0x3b = 0;
    }
    if (*(int **)&pCVar2[1].field_0x49 != (int *)0x0) {
      FUN_006b8a30(*(int **)&pCVar2[1].field_0x49);
    }
    *(undefined4 *)&pCVar2[1].field_0x49 = 0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pCVar2->field_0x18);
    DAT_00802a30 = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
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

