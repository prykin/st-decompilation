
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::DonePrivider */

void __thiscall PrividerTy::DonePrivider(PrividerTy *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  MMsgTy *this_00;
  code *pcVar3;
  CursorClassTy *this_01;
  PrividerTy *pPVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  uint *puVar7;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  PrividerTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar4 = local_8;
  if (iVar5 == 0) {
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    this_01 = PTR_00802a30;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      uVar1 = PTR_00802a30->field_00C9;
      uVar2 = PTR_00802a30->field_00C5;
      PTR_00802a30->field_0493 = 1;
      this_01->field_0494 = 0xffff;
      CursorClassTy::SetGCType(this_01,CASE_0,uVar2,uVar1);
      CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
      this_01->field_0xd2 = 0;
      *(undefined4 *)&this_01->field_0x4df = 0xffffffff;
      if (PTR_00802a30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
      }
      else if (PTR_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
      }
    }
    if (pPVar4->field_004D == 0x6102) {
      DarkScreen(DAT_0080759c,10,2);
    }
    if (PTR_0081176c->field_002C != 0) {
      cMf32::RecMemFree(g_cMf32_00806780,&PTR_0081176c->field_002C);
    }
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pPVar4->field_1A77);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pPVar4->field_1B08);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pPVar4->field_1B99);
    puVar7 = &pPVar4->field_1C2A;
    iVar5 = 0x16;
    do {
      if (*puVar7 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*puVar7);
        *puVar7 = 0xffffffff;
      }
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (pPVar4->field_1C8A != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,pPVar4->field_1C8A);
    }
    pPVar4->field_1C8A = 0xffffffff;
    if (pPVar4->field_1C82 != (AnonPointee_PrividerTy_1C82 *)0x0) {
      FreeAndNull(&pPVar4->field_1C82);
    }
    if (pPVar4->field_1C8E != 0) {
      FreeAndNull((void **)&pPVar4->field_1C8E);
    }
    if (pPVar4->field_1C96 != (HoloTy *)0x0) {
      HoloTy::Done(pPVar4->field_1C96);
      Library::MSVCRT::FUN_0072e2b0(pPVar4->field_1C96);
      pPVar4->field_1C96 = (HoloTy *)0x0;
    }
    if (pPVar4->field_1C9A != (HoloTy *)0x0) {
      HoloTy::Done(pPVar4->field_1C9A);
      Library::MSVCRT::FUN_0072e2b0(pPVar4->field_1C9A);
      pPVar4->field_1C9A = (HoloTy *)0x0;
    }
    if ((pPVar4->field_004D == 0x6102) &&
       (this_00 = pPVar4->field_1A5B->field_02E6, this_00 != (MMsgTy *)0x0)) {
      MMsgTy::HideSprites(this_00);
      pPVar4->field_1A5B->field_02E6->field_1CAB = 0;
    }
    if (pPVar4->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pPVar4->field_0x3d);
    }
    StartSystemTy::sub_005DAB30(PTR_0081176c);
    if ((AnonShape_006B5570_4D68B99C *)pPVar4->field_1C92 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)pPVar4->field_1C92);
    }
    pPVar4->field_1C92 = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0xd3,0,iVar5,&DAT_007a4ccc,
                             s_PrividerTy__DonePrivider_007ccdc0);
  if (iVar6 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0xd3);
  return;
}

