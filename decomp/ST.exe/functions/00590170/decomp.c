
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
  LPSTR text;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  byte bVar7;
  InternalExceptionFrame local_4c;
  MAdvTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      if (PTR_00802a30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
      }
      else if (PTR_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
      }
    }
    this_01 = local_8;
    iVar3 = 1;
    bVar7 = 0;
    text = FUN_006f2c00(&DAT_007cbc5c,1,(uint)(local_8->field_005D != '\0'));
    uVar4 = FUN_0070a9f0(g_cMf32_00806780,text,bVar7,iVar3);
    this_01->field_005E = uVar4;
    puVar6 = (undefined4 *)&this_01->field_0x18;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    this_01->field_002C = this_01->field_0008;
    this_01->field_0028 = 0x13;
    FUN_006e6000(this_01,3,1,(undefined4 *)&this_01->field_0x18);
    if (PTR_0081176c->field_02E6 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(PTR_0081176c->field_02E6,0,0,1);
      MMsgTy::HideSprites(PTR_0081176c->field_02E6);
    }
    DarkScreen(DAT_0080759c,1,0);
    PaintMAdv(this_01);
    thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,this_01->field_005E,10,2);
    this_00 = PTR_00802a30;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      uVar4 = PTR_00802a30->field_00C9;
      uVar1 = PTR_00802a30->field_00C5;
      PTR_00802a30->field_0493 = 1;
      this_00->field_0494 = 0xffff;
      CursorClassTy::SetGCType(this_00,CASE_0,uVar1,uVar4);
      CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
      this_00->field_0xd2 = 0;
      *(undefined4 *)&this_00->field_0x4df = 0xffffffff;
    }
    SetAccelerator(1,this_01->field_0008,2,100,2,1,0,0,0,0,0,0);
    SetAccelerator(1,this_01->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_adv_obj_cpp_007cbc24,0x1f,0,iVar3,&DAT_007a4ccc,
                             s_MAdvTy__InitMAdv_007cbc48);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_adv_obj_cpp_007cbc24,0x1f);
  return;
}

