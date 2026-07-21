#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::LightPalette */

void __thiscall MainMenuTy::LightPalette(MainMenuTy *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  MainMenuTy *pMVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar3 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_1AD3 != 0) {
      puVar1 = &local_8->field_0x1adf;
      iVar4 = Library::Ourlib::PALETTE::FUN_00718f40
                        (DAT_0080759c,(undefined4 *)puVar1,0,0x100,5,&local_8->field_1ADB,1,
                         local_8->field_0061,&local_8->field_1AD7);
      if (iVar4 == -4) {
        FUN_006b0a20(DAT_0080759c,(int)puVar1,0,0x100,0);
        pMVar3->field_1AD3 = 0;
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_main_obj_cpp_007cc8e8,0xe8,0,iVar4,&DAT_007a4ccc,
                             s_MainMenuTy__LightPalette_007cc9a0);
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_main_obj_cpp_007cc8e8,0xe8);
  return;
}

