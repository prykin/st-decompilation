
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::ReInitCursorSpr */

void __thiscall CursorClassTy::ReInitCursorSpr(CursorClassTy *this,int param_1)

{
  undefined1 *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_01;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char cVar6;
  undefined4 *puVar7;
  InternalExceptionFrame local_4c;
  CursorClassTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_8;
  if (iVar4 == 0) {
    this_00 = &local_8->field_0x18;
    SpriteClassTy::CloseSprite((SpriteClassTy *)this_00);
    if (param_1 != 7) {
      iVar4 = 0x21;
      cVar6 = -0x7f;
      puVar7 = DAT_00811640;
    }
    else {
      iVar4 = 0;
      cVar6 = '\a';
      puVar7 = (undefined4 *)0x0;
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)this_00,DAT_008075a8,0,cVar6,puVar7,iVar4,(uint)(param_1 != 7));
    uVar1 = *(undefined4 *)&this_01->field_0x38;
    uVar2 = *(undefined4 *)&this_01->field_0x34;
    *(undefined2 *)&this_01[0xb].field_0x48 = 0x58;
    SetGCType(this_01,CASE_0,uVar2,uVar1);
    if (this_01->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)this_01->field_0060,this_01->field_001C);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x8c,0,iVar4,&DAT_007a4ccc,
                             s_CursorClassTy__ReInitCursorSpr_007c7e00);
  if (iVar5 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x8d);
  return;
}

