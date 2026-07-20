
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::InitCursor */

void __thiscall CursorClassTy::InitCursor(CursorClassTy *this,undefined4 param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  CursorClassTy *this_00;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  CursorClassTy *local_c;
  ushort *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar3 == 0) {
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&local_c->field_0018,DAT_008075a8,0,'\a',(undefined4 *)0x0,0,0);
    Library::DKW::DDX::FUN_006b88d0
              (&this_00->field_00AD,DAT_0080759c,0,(BITMAPINFO *)0x0,0x8000000,0,(BITMAPINFO *)0x0,0
              );
    SetImages(this_00,param_1,s_CUR_MENU_007c7dd4,0x32,(BITMAPINFO *)0x0,0,-1,-1);
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806784,CASE_B,s_INF_DEEPS_007c7dc8,0xffffffff,0,1,0,(undefined4 *)0x0)
    ;
    this_00->field_04E3 = puVar4;
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806784,CASE_13,s_CUR_CONFIRM_007c7db8,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
    this_00->field_04E7 = puVar4;
    local_8 = cMf32::RecGet(g_cMf32_00806780,1,s_CURSOR_PAL_007c7da8,(int *)0x0,1);
    puVar4 = local_8 + 0x14;
    iVar3 = 1;
    uVar5 = FUN_006b4fe0((int)local_8);
    uVar6 = FUN_006b50c0(800,0x96,(uint)local_8[7],uVar5,(undefined4 *)puVar4,iVar3);
    this_00->field_04D2 = uVar6;
    cMf32::RecMemFree(g_cMf32_00806780,(uint *)&local_8);
    puVar1 = &this_00->field_04D6;
    FUN_006b2330((uint)DAT_008075a8,puVar1,1,0x4047ff,0,0,this_00->field_04D2);
    FUN_006b28c0((int)DAT_008075a8,*puVar1,1);
    FUN_006b3af0(DAT_008075a8,*puVar1);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x65,0,iVar3,&DAT_007a4ccc,
                             s_CursorClassTy__InitCursor_007c7d88);
  if (iVar3 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(-0x34,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x66);
  return;
}

