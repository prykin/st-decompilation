#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::InitMTest */

void __thiscall MTestTy::InitMTest(MTestTy *this)

{
  code *pcVar1;
  CursorClassTy *this_00;
  MTestTy *this_01;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_44c [256];
  InternalExceptionFrame local_4c;
  MTestTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      if (PTR_00802a30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
      }
      else if (PTR_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
      }
    }
    puVar3 = (ushort *)FUN_0070a9f0(g_cMf32_00806780,"LOADSINGLE",0,1);
    this_01 = local_8;
    local_8->field_005D = puVar3;
    FUN_006bc360(puVar3,local_44c,(int *)0x0);
    PTR_0081176c->field_0140 = 0x1f;
    Library::Ourlib::PALETTE::FUN_00718780
              ((int)local_44c,0,0x100,0x8b,0x15,(undefined4 *)&PTR_0081176c->field_0x144);
    puVar5 = (undefined4 *)&this_01->field_0x61;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    this_01->field_0071 = 0x13;
    this_01->field_0075 = this_01->field_0008;
    FUN_006e6000(this_01,3,1,(undefined4 *)&this_01->field_0x61);
    if (PTR_0081176c->field_02E6 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(PTR_0081176c->field_02E6,0,0,1);
      MMsgTy::HideSprites(PTR_0081176c->field_02E6);
    }
    DarkScreen(DAT_0080759c,1,0);
    PaintMTest(this_01);
    thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,this_01->field_005D,10,2);
    this_00 = PTR_00802a30;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      iVar2 = PTR_00802a30->field_00C9;
      iVar4 = PTR_00802a30->field_00C5;
      PTR_00802a30->field_0493 = 1;
      this_00->field_0494 = 0xffff;
      CursorClassTy::SetGCType(this_00,CASE_0,iVar4,iVar2);
      CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
      this_00->field_00D2 = 0;
      this_00->field_04DF = 0xffffffff;
    }
    SetAccelerator(1,this_01->field_0008,2,100,2,1,0,0,0,0,0,0);
    SetAccelerator(1,this_01->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\test_obj.cpp",0x31,0,iVar2,"%s",
                             "MTestTy::InitMTest");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\test_obj.cpp",0x31);
  return;
}

