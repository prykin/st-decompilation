#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::DoneMainMenu */

void __thiscall MainMenuTy::DoneMainMenu(MainMenuTy *this)

{
  MMsgTy *this_00;
  MainMenuTy *pMVar2;
  int iVar3;
  int iVar4;
  uint *puVar3;
  int iVar5;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    /* ST_CALLSITE[005B2FCA]: CALL 0x0040458e; direct=0040458E MMObjTy::DoneMMObj */
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {

        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    /* ST_CALLSITE[005B300D]: CALL 0x00401d43; direct=00401D43 DarkScreen */
    DarkScreen(g_dDXContext_0080759C,10,2);
    if (g_startSystem_0081176C->field_002C != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00 = *(MMsgTy **)(pMVar2->field_00BB[0xc].field_01DC + 0x2e6);
    if (this_00 != nullptr) {
      /* ST_CALLSITE[005B303E]: CALL 0x0040462e; direct=0040462E MMsgTy::HideSprites */
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(pMVar2->field_00BB[0xc].field_01DC + 0x2e6) + 0x1cab) = 0;
    }
    puVar3 = pMVar2->field_1AA7;
    iVar5 = 10;
    do {
      if ((undefined4 *)*puVar3 != nullptr) {
        FUN_006c4a70((undefined4 *)*puVar3);
        *puVar3 = 0;
      }
      if (puVar3[-10] != 0) {
        cMf32::RecMemFree(g_cMf32_00806780,puVar3 + -10);
      }
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
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

