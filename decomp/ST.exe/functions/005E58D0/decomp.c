#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::InitMTest */

void __thiscall MTestTy::InitMTest(MTestTy *this)

{
  int iVar1;
  CursorClassTy *this_00;
  MTestTy *this_01;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_44c [256];
  InternalExceptionFrame local_4c;
  MTestTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    puVar3 = FUN_0070a9f0(g_cMf32_00806780,"LOADSINGLE",0,1);
    this_01 = local_8;
    local_8->field_005D = puVar3;
    FUN_006bc360(puVar3,local_44c,nullptr);
    g_startSystem_0081176C->field_0140 = 0x1f;
    Library::Ourlib::PALETTE::FUN_00718780
              ((int)local_44c,0,0x100,0x8b,0x15,(undefined4 *)&g_startSystem_0081176C->field_0x144);
    memset(&this_01->field_0x61, 0, 0x20); /* compiler bulk-zero initialization */
    this_01->field_0071 = 0x13;
    this_01->field_0075 = this_01->field_0008;
    FUN_006e6000(this_01,3,1,(undefined4 *)&this_01->field_0x61);
    if (g_startSystem_0081176C->field_02E6 != nullptr) {
      MMsgTy::HidePanel(g_startSystem_0081176C->field_02E6,0,0,1);
      MMsgTy::HideSprites(g_startSystem_0081176C->field_02E6);
    }
    DarkScreen(g_dDXContext_0080759C,1,0);
    PaintMTest(this_01);
    thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                       this_01->field_005D,10,2);
    this_00 = g_cursorClass_00802A30;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar5 = g_cursorClass_00802A30->field_00C9;
      iVar1 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      this_00->field_0494 = 0xffff;
      CursorClassTy::SetGCType(this_00,CASE_0,iVar1,iVar5);
      CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
      this_00->field_00D2 = 0;
      this_00->field_04DF = -1;
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

