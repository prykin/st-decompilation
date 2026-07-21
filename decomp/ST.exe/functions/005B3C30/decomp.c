#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::CloseButtons */

void __thiscall MainMenuTy::CloseButtons(MainMenuTy *this)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  uint *puVar5;
  MainMenuTy *this_00;
  uint uVar6;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    MMObjTy::CloseButtons((MMObjTy *)local_8);
    iVar2 = 0;
    if (this_00->field_009A != 0) {
      uVar6 = 0x96;
      puVar5 = &this_00->field_0123;
      do {
        DVar3 = timeGetTime();
        puVar5[1] = DVar3;
        *puVar5 = uVar6;
        *(undefined1 *)(puVar5 + -0x1a) = 1;
        iVar2 = iVar2 + 1;
        uVar6 = uVar6 + 0x96;
        puVar5 = (uint *)((int)puVar5 + 0x1fb);
        this_00 = local_8;
      } while (iVar2 < (int)(uint)local_8->field_009A);
    }
    this_00->field_0065 = 4;
    thunk_FUN_005b6730(this_00,2,'\x01',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\main_obj.cpp",0xf7,0,iVar2,"%s",
                             "MainMenuTy::CloseButtons");
  if (iVar4 == 0) {
    RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\main_obj.cpp",0xf7);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

