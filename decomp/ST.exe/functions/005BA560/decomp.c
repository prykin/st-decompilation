#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::DonePrivider */

void __thiscall PrividerTy::DonePrivider(PrividerTy *this)

{
  int iVar1;
  MMsgTy *this_00;
  CursorClassTy *this_01;
  PrividerTy *pPVar3;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  PrividerTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pPVar3 = local_8;
  if (iVar3 == 0) {
    /* ST_CALLSITE[005BA59A]: CALL 0x0040458e; direct=0040458E MMObjTy::DoneMMObj */
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    this_01 = g_cursorClass_00802A30;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar5 = g_cursorClass_00802A30->field_00C9;
      iVar1 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      this_01->field_0494 = 0xffff;
      /* ST_CALLSITE[005BA5CB]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      CursorClassTy::SetGCType(this_01,CASE_0,iVar1,iVar5);
      /* ST_CALLSITE[005BA5E0]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
      this_01->field_00D2 = 0;
      this_01->field_04DF = -1;
      if (g_cursorClass_00802A30->field_00A9 == 0) {

        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    if (pPVar3->field_004D == 0x6102) {
      /* ST_CALLSITE[005BA638]: CALL 0x00401d43; direct=00401D43 DarkScreen */
      DarkScreen(g_dDXContext_0080759C,10,2);
    }
    if (g_startSystem_0081176C->field_002C != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }

    SpriteClassTy::CloseSprite((SpriteClassTy *)&pPVar3->array_00BC[0xc].field_01F7);

    SpriteClassTy::CloseSprite((SpriteClassTy *)&pPVar3->field_1B08);

    SpriteClassTy::CloseSprite((SpriteClassTy *)&pPVar3->field_1B99);
    puVar6 = pPVar3->field_1C2A;
    iVar5 = 0x16;
    do {
      if (*puVar6 != 0xffffffff) {
        FUN_006b3bb0((int *)g_ddxContext_008075A8,*puVar6);
        *puVar6 = 0xffffffff;
      }
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (pPVar3->field_1C8A != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,pPVar3->field_1C8A);
    }
    pPVar3->field_1C8A = 0xffffffff;
    if (pPVar3->field_1C82 != nullptr) {
      FreeAndNull(&pPVar3->field_1C82);
    }
    if (pPVar3->field_1C8E != nullptr) {
      FreeAndNull(&pPVar3->field_1C8E);
    }
    if (pPVar3->field_1C96 != nullptr) {
      /* ST_CALLSITE[005BA701]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pPVar3->field_1C96);
      Library::MSVCRT::FUN_0072e2b0(pPVar3->field_1C96);
      pPVar3->field_1C96 = nullptr;
    }
    if (pPVar3->field_1C9A != nullptr) {
      /* ST_CALLSITE[005BA725]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pPVar3->field_1C9A);
      Library::MSVCRT::FUN_0072e2b0(pPVar3->field_1C9A);
      pPVar3->field_1C9A = nullptr;
    }
    if ((pPVar3->field_004D == 0x6102) &&
       (this_00 = (pPVar3->array_00BC[0xc].field_01DB)->field_02E6, this_00 != nullptr)) {
      /* ST_CALLSITE[005BA758]: CALL 0x0040462e; direct=0040462E MMsgTy::HideSprites */
      MMsgTy::HideSprites(this_00);
      (pPVar3->array_00BC[0xc].field_01DB)->field_02E6->field_1CAB = 0;
    }
    if (pPVar3->field_004D != 0) {

      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pPVar3->field_0x3d);
    }
    /* ST_CALLSITE[005BA788]: CALL 0x00402b30; direct=00402B30 StartSystemTy::sub_005DAB30 */
    StartSystemTy::sub_005DAB30(g_startSystem_0081176C);
    if (pPVar3->field_1C92 != nullptr) {
      FUN_006b5570(pPVar3->field_1C92);
    }
    pPVar3->field_1C92 = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0xd3,0,iVar3,"%s",
                             "PrividerTy::DonePrivider");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\prov_obj.cpp",0xd3);
  return;
}

