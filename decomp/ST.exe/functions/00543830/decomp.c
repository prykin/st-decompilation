#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::DoneCursor */

void __thiscall CursorClassTy::DoneCursor(CursorClassTy *this)

{
  code *pcVar1;
  CursorClassTy *pCVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  CursorClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (errorCode == 0) {
    if (-1 < local_8->field_04D6) {
      FUN_006b3bb0((int *)PTR_008075a8,local_8->field_04D6);
    }
    pCVar2->field_04D6 = -1;
    if (pCVar2->field_04D2 != (ushort *)0x0) {
      FreeAndNull(&pCVar2->field_04D2);
    }
    pCVar2->field_04E3 = (ushort *)0x0;
    pCVar2->field_04E7 = (ushort *)0x0;
    if (pCVar2->field_04EB != (SpriteClassTy *)0x0) {
      SpriteClassTy::CloseSprite(pCVar2->field_04EB);
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)pCVar2->field_04EB);
      pCVar2->field_04EB = (SpriteClassTy *)0x0;
    }
    if ((int *)pCVar2->field_00AD != (int *)0x0) {
      FUN_006b8a30((int *)pCVar2->field_00AD);
    }
    pCVar2->field_00AD = 0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pCVar2->field_0018);
    g_cursorClass_00802A30 = (CursorClassTy *)0x0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\to_cursor.cpp",0x7d,0,errorCode,
                             "%s","CursorClassTy::DoneCursor");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\to_cursor.cpp",0x7e);
  return;
}

