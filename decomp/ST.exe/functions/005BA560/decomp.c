#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::DonePrivider */

void __thiscall PrividerTy::DonePrivider(PrividerTy *this)

{
  MMsgTy *this_00;
  code *pcVar1;
  CursorClassTy *this_01;
  PrividerTy *pPVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  PrividerTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    this_01 = PTR_00802a30;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      iVar3 = PTR_00802a30->field_00C9;
      iVar4 = PTR_00802a30->field_00C5;
      PTR_00802a30->field_0493 = 1;
      this_01->field_0494 = 0xffff;
      CursorClassTy::SetGCType(this_01,CASE_0,iVar4,iVar3);
      CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
      this_01->field_00D2 = 0;
      this_01->field_04DF = 0xffffffff;
      if (PTR_00802a30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
      }
      else if (PTR_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
      }
    }
    if (pPVar2->field_004D == 0x6102) {
      DarkScreen(DAT_0080759c,10,2);
    }
    if (PTR_0081176c->field_002C != (ccFntTy *)0x0) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&PTR_0081176c->field_002C);
    }
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pPVar2->field_1A77);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pPVar2->field_1B08);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pPVar2->field_1B99);
    puVar5 = &pPVar2->field_1C2A;
    iVar3 = 0x16;
    do {
      if (*puVar5 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*puVar5);
        *puVar5 = 0xffffffff;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pPVar2->field_1C8A != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,pPVar2->field_1C8A);
    }
    pPVar2->field_1C8A = 0xffffffff;
    if (pPVar2->field_1C82 != (AnonPointee_PrividerTy_1C82 *)0x0) {
      FreeAndNull(&pPVar2->field_1C82);
    }
    if (pPVar2->field_1C8E != (AnonPointee_PrividerTy_1C8E *)0x0) {
      FreeAndNull(&pPVar2->field_1C8E);
    }
    if (pPVar2->field_1C96 != (HoloTy *)0x0) {
      HoloTy::Done(pPVar2->field_1C96);
      Library::MSVCRT::FUN_0072e2b0(pPVar2->field_1C96);
      pPVar2->field_1C96 = (HoloTy *)0x0;
    }
    if (pPVar2->field_1C9A != (HoloTy *)0x0) {
      HoloTy::Done(pPVar2->field_1C9A);
      Library::MSVCRT::FUN_0072e2b0(pPVar2->field_1C9A);
      pPVar2->field_1C9A = (HoloTy *)0x0;
    }
    if ((pPVar2->field_004D == 0x6102) &&
       (this_00 = pPVar2->field_1A5B->field_02E6, this_00 != (MMsgTy *)0x0)) {
      MMsgTy::HideSprites(this_00);
      pPVar2->field_1A5B->field_02E6->field_1CAB = 0;
    }
    if (pPVar2->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pPVar2->field_0x3d);
    }
    StartSystemTy::sub_005DAB30(PTR_0081176c);
    if ((AnonShape_006B5570_4D68B99C *)pPVar2->field_1C92 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)pPVar2->field_1C92);
    }
    pPVar2->field_1C92 = (AnonPointee_PrividerTy_1C92 *)0x0;
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

