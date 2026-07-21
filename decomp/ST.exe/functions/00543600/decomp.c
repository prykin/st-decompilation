#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::InitCursor */

void __thiscall CursorClassTy::InitCursor(CursorClassTy *this,undefined4 param_1)

{
  int *piVar1;
  code *pcVar2;
  CursorClassTy *this_00;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  InternalExceptionFrame local_50;
  CursorClassTy *local_c;
  ushort *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 == 0) {
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&local_c->field_0018,(int *)PTR_008075a8,0,'\a',(undefined4 *)0x0,0,
               0);
    Library::DKW::DDX::FUN_006b88d0
              (&this_00->field_00AD,DAT_0080759c,0,(BITMAPINFO *)0x0,0x8000000,0,(BITMAPINFO *)0x0,0
              );
    SetImages(this_00,param_1,"CUR_MENU",0x32,(BITMAPINFO *)0x0,0,-1,-1);
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806784,CASE_B,"INF_DEEPS",0xffffffff,0,1,0,(undefined4 *)0x0)
    ;
    this_00->field_04E3 = puVar4;
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806784,CASE_13,"CUR_CONFIRM",0xffffffff,0,1,0,
                        (undefined4 *)0x0);
    this_00->field_04E7 = puVar4;
    local_8 = cMf32::RecGet(g_cMf32_00806780,1,"CURSOR_PAL",(int *)0x0,1);
    puVar4 = local_8 + 0x14;
    iVar3 = 1;
    uVar5 = FUN_006b4fe0((int)local_8);
    puVar4 = (ushort *)FUN_006b50c0(800,0x96,(uint)local_8[7],uVar5,(undefined4 *)puVar4,iVar3);
    this_00->field_04D2 = puVar4;
    cMf32::RecMemFree(g_cMf32_00806780,(uint *)&local_8);
    piVar1 = &this_00->field_04D6;
    FUN_006b2330((uint)PTR_008075a8,(uint *)piVar1,1,0x4047ff,0,0,(uint)this_00->field_04D2);
    FUN_006b28c0((int)PTR_008075a8,*piVar1,1);
    FUN_006b3af0((int *)PTR_008075a8,*piVar1);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\to_cursor.cpp",0x65,0,iVar3,"%s",
                             "CursorClassTy::InitCursor");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(-0x34,0,"E:\\__titans\\Andrey\\to_cursor.cpp",0x66);
  return;
}

