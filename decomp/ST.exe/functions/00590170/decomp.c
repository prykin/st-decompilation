#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::InitMAdv */

void __thiscall MAdvTy::InitMAdv(MAdvTy *this)

{
  code *pcVar1;
  CursorClassTy *this_00;
  MAdvTy *this_01;
  int iVar2;
  LPSTR text;
  undefined4 uVar3;
  int iVar4;
  byte bVar6;
  InternalExceptionFrame local_4c;
  MAdvTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                     (uint)g_cursorClass_00802A30->field_001C);
      }
    }
    this_01 = local_8;
    iVar2 = 1;
    bVar6 = 0;
    text = FUN_006f2c00(&DAT_007cbc5c,1,(uint)(local_8->field_005D != '\0'));
    uVar3 = FUN_0070a9f0(g_cMf32_00806780,text,bVar6,iVar2);
    this_01->field_005E = uVar3;
    memset(&this_01->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    this_01->field_002C = this_01->field_0008;
    this_01->field_0028 = 0x13;
    FUN_006e6000(this_01,3,1,(undefined4 *)&this_01->field_0x18);
    if (g_startSystem_0081176C->field_02E6 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(g_startSystem_0081176C->field_02E6,0,0,1);
      MMsgTy::HideSprites(g_startSystem_0081176C->field_02E6);
    }
    DarkScreen(DAT_0080759c,1,0);
    PaintMAdv(this_01);
    thunk_FUN_0055ddf0(DAT_0080759c,(int *)PTR_008075a8,this_01->field_005E,10,2);
    this_00 = g_cursorClass_00802A30;
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      iVar2 = g_cursorClass_00802A30->field_00C9;
      iVar4 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = 1;
      this_00->field_0494 = 0xffff;
      CursorClassTy::SetGCType(this_00,CASE_0,iVar4,iVar2);
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
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\adv_obj.cpp",0x1f,0,iVar2,"%s",
                             "MAdvTy::InitMAdv");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\adv_obj.cpp",0x1f);
  return;
}

