#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::DoneMainMenu */

void __thiscall MainMenuTy::DoneMainMenu(MainMenuTy *this)

{
  MMsgTy *this_00;
  code *pcVar1;
  MMObjTy *pMVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (MMObjTy *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    MMObjTy::DoneMMObj(local_8);
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                     (uint)g_cursorClass_00802A30->field_001C);
      }
    }
    DarkScreen(DAT_0080759c,10,2);
    if (g_startSystem_0081176C->field_002C != (ushort *)0x0) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    this_00 = *(MMsgTy **)(*(int *)&pMVar2[0x1d].field_0xa4 + 0x2e6);
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(*(int *)&pMVar2[0x1d].field_0xa4 + 0x2e6) + 0x1cab) = 0;
    }
    puVar5 = (undefined4 *)((int)&pMVar2[0x1e].field_000C + 1);
    iVar3 = 10;
    do {
      if ((undefined4 *)*puVar5 != (undefined4 *)0x0) {
        FUN_006c4a70((undefined4 *)*puVar5);
        *puVar5 = 0;
      }
      if (puVar5[-10] != 0) {
        cMf32::RecMemFree(g_cMf32_00806780,puVar5 + -10);
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(int *)&pMVar2->field_0x4d != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pMVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\main_obj.cpp",99,0,iVar3,"%s",
                             "MainMenuTy::DoneMainMenu");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\main_obj.cpp",99);
  return;
}

