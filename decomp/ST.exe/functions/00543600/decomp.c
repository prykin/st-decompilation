#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::InitCursor */

void __thiscall CursorClassTy::InitCursor(CursorClassTy *this,undefined4 param_1)

{
  undefined4 *puVar1;
  CursorClassTy *this_00;
  int local_EAX_34;
  ushort *local_EAX_157;
  ushort *puVar4;
  uint uVar3;
  ushort *puVar5;
  int iVar3;
  int iVar6;
  InternalExceptionFrame local_50;
  CursorClassTy *local_c;
  ushort *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  local_EAX_34 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (local_EAX_34 == 0) {
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&local_c->field_0018,(int *)g_ddxContext_008075A8,0,'\a',
               nullptr,0,0);
    Library::DKW::DDX::FUN_006b88d0
              (&this_00->field_00AD,g_dDXContext_0080759C,0,nullptr,0x8000000,0,
               nullptr,0);
    /* ST_CALLSITE[00543680]: CALL 0x0040376f; direct=0040376F CursorClassTy::SetImages */
    SetImages(this_00,param_1,"CUR_MENU",0x32,nullptr,0,-1,-1);
    local_EAX_157 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806784,CASE_B,"INF_DEEPS",0xffffffff,0,1,0,nullptr);
    this_00->field_04E3 = local_EAX_157;
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806784,CASE_13,"CUR_CONFIRM",0xffffffff,0,1,0,
                        nullptr);
    this_00->field_04E7 = puVar4;
    local_8 = cMf32::RecGet(g_cMf32_00806780,1,"CURSOR_PAL",nullptr,1);
    puVar5 = local_8 + 0x14;
    iVar6 = 1;
    uVar3 = FUN_006b4fe0((int)local_8);
    puVar5 = (ushort *)FUN_006b50c0(800,0x96,(uint)local_8[7],uVar3,(undefined4 *)puVar5,iVar6);
    this_00->field_04D2 = puVar5;
    cMf32::RecMemFree(g_cMf32_00806780,(uint *)&local_8);
    puVar1 = &this_00->field_04D6;
    FUN_006b2330(g_ddxContext_008075A8,puVar1,1,0x4047ff,0,0,this_00->field_04D2);
    FUN_006b28c0(g_ddxContext_008075A8,*puVar1,1);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar1);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\to_cursor.cpp",0x65,0,local_EAX_34,
                             "%s","CursorClassTy::InitCursor");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(-0x34,0,"E:\\__titans\\Andrey\\to_cursor.cpp",0x66);
  return;
}

