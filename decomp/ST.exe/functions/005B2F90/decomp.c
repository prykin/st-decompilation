#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::DoneMainMenu */

void __thiscall MainMenuTy::DoneMainMenu(MainMenuTy *this)

{
  code *pcVar1;
  MainMenuTy *pMVar2;
  int iVar3;
  int iVar4;
  AnonPointee_MainMenuTy_1AA7 **ppAVar5;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
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
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(MMsgTy **)(pMVar2->field_1A5B + 0x2e6) != (MMsgTy *)0x0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      MMsgTy::HideSprites(*(MMsgTy **)(pMVar2->field_1A5B + 0x2e6));
      *(undefined4 *)(*(int *)(pMVar2->field_1A5B + 0x2e6) + 0x1cab) = 0;
    }
    ppAVar5 = &pMVar2->field_1AA7;
    iVar3 = 10;
    do {
      if (*ppAVar5 != (AnonPointee_MainMenuTy_1AA7 *)0x0) {
        FUN_006c4a70(&(*ppAVar5)->field_0000);
        *ppAVar5 = (AnonPointee_MainMenuTy_1AA7 *)0x0;
      }
      if (ppAVar5[-10] != (AnonPointee_MainMenuTy_1AA7 *)0x0) {
        cMf32::RecMemFree(g_cMf32_00806780,(uint *)(ppAVar5 + -10));
      }
      ppAVar5 = ppAVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pMVar2->field_004D != 0) {
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

