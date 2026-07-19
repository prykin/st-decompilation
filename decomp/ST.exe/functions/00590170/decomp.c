
/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::InitMAdv */

void __thiscall MAdvTy::InitMAdv(MAdvTy *this)

{
  undefined4 uVar1;
  code *pcVar2;
  CursorClassTy *this_00;
  MAdvTy *this_01;
  int iVar3;
  LPSTR pCVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  byte bVar8;
  InternalExceptionFrame local_4c;
  MAdvTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      if (*(int *)&DAT_00802a30[1].field_0x45 == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)&DAT_00802a30[1].field_0x49);
      }
      else if (DAT_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)DAT_00802a30->field_0060,DAT_00802a30->field_001C);
      }
    }
    this_01 = local_8;
    iVar3 = 1;
    bVar8 = 0;
    pCVar4 = FUN_006f2c00(&DAT_007cbc5c,1,(uint)(local_8[1].field_0x1 != '\0'));
    uVar5 = FUN_0070a9f0(DAT_00806780,pCVar4,bVar8,iVar3);
    *(undefined4 *)&this_01[1].field_0x2 = uVar5;
    puVar7 = (undefined4 *)&this_01->field_0x18;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)&this_01->field_0x2c = *(undefined4 *)&this_01->field_0x8;
    *(undefined4 *)&this_01->field_0x28 = 0x13;
    FUN_006e6000(this_01,3,1,(undefined4 *)&this_01->field_0x18);
    if (*(MMsgTy **)(DAT_0081176c + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(*(MMsgTy **)(DAT_0081176c + 0x2e6),0,0,1);
      MMsgTy::HideSprites(*(MMsgTy **)(DAT_0081176c + 0x2e6));
    }
    thunk_FUN_0055dbf0(DAT_0080759c,1,0);
    PaintMAdv(this_01);
    thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)&this_01[1].field_0x2,10,2);
    this_00 = DAT_00802a30;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar5 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
      uVar1 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
      DAT_00802a30[0xb].field_0x47 = 1;
      *(undefined2 *)&this_00[0xb].field_0x48 = 0xffff;
      CursorClassTy::SetGCType(this_00,CASE_0,uVar1,uVar5);
      CursorClassTy::DrawSprite
                (this_00,*(int *)((int)&this_00[1].field_0060 + 1),*(int *)&this_00[2].field_0x1);
      this_00[2].field_0xa = 0;
      *(undefined4 *)&this_00[0xc].field_0x2f = 0xffffffff;
    }
    thunk_FUN_00540dc0(1,*(undefined4 *)&this_01->field_0x8,2,100,2,1,0,0,0,0,0,0);
    thunk_FUN_00540dc0(1,*(undefined4 *)&this_01->field_0x8,2,0x62,2,0x1c,0,0,0,0,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Start_adv_obj_cpp_007cbc24,0x1f,0,iVar3,&DAT_007a4ccc,
                             s_MAdvTy__InitMAdv_007cbc48);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_adv_obj_cpp_007cbc24,0x1f);
  return;
}

