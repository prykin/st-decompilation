#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::ReInitCursorSpr */

void __thiscall CursorClassTy::ReInitCursorSpr(CursorClassTy *this,int param_1)

{
  undefined4 *this_00;
  code *pcVar1;
  CursorClassTy *this_01;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  InternalExceptionFrame local_4c;
  CursorClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_01 = local_8;
  if (iVar2 == 0) {
    this_00 = &local_8->field_0018;
    SpriteClassTy::CloseSprite((SpriteClassTy *)this_00);
    if (param_1 != 7) {
      iVar2 = 0x21;
      cVar4 = -0x7f;
      puVar5 = DAT_00811640;
    }
    else {
      iVar2 = 0;
      cVar4 = '\a';
      puVar5 = (undefined4 *)0x0;
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)this_00,DAT_008075a8,0,cVar4,puVar5,iVar2,(uint)(param_1 != 7));
    this_01->field_0494 = 0x58;
    SetGCType(this_01,CASE_0,this_01->field_0034,this_01->field_0038);
    if (this_01->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)this_01->field_0060,this_01->field_001C);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x8c,0,iVar2,&DAT_007a4ccc,
                             s_CursorClassTy__ReInitCursorSpr_007c7e00);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x8d);
  return;
}

