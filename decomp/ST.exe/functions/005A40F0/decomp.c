#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetLadder */

void __thiscall
FSGSTy::SetLadder(FSGSTy *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4
                 )

{
  code *pcVar1;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  undefined4 *puVar6;
  InternalExceptionFrame local_6c;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  FSGSTy *local_8;

  this_00 = PTR_00802a30;
  local_8 = this;
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    PTR_00802a30->field_0493 = 1;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,this_00->field_00C5,this_00->field_00C9);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_0xd2 = 0;
    *(undefined4 *)&this_00->field_0x4df = 0xffffffff;
  }
  if (this->field_1A5F == CASE_9) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    iVar2 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
    this_01 = local_8;
    if (iVar2 == 0) {
      puVar6 = &local_8->field_1EDB;
      if (local_8->field_1EDB != 0) {
        FreeAndNull((void **)puVar6);
      }
      this_01->field_1EDF = param_2;
      this_01->field_1EE3 = param_3;
      puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(param_3 * 0x24);
      iVar2 = this_01->field_1EE3;
      *puVar6 = puVar3;
      for (uVar5 = iVar2 * 9 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *param_4;
        param_4 = param_4 + 1;
        puVar3 = puVar3 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar3 = *(undefined1 *)param_4;
        param_4 = (undefined4 *)((int)param_4 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      PaintLadder(this_01,unaff_EDI);
      puVar6 = local_28;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_18 = 0x20;
      if ((this_01->field_1EDF == 0) || (local_14 = 1, this_01->field_1A6B == 0)) {
        local_14 = 0;
      }
      if (this_01->field_1ED3 != 0) {
        FUN_006e6080(this_01,2,this_01->field_1ED3,local_28);
      }
      if ((0xf422f < (uint)this_01->field_1EDF) || (local_14 = 1, this_01->field_1A6B == 0)) {
        local_14 = 0;
      }
      if (this_01->field_1ED7 != 0) {
        FUN_006e6080(this_01,2,this_01->field_1ED7,local_28);
      }
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xb65,0,iVar2,&DAT_007a4ccc
                               ,s_FSGSTy__SetLadder_007cc5c0);
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xb65);
  }
  return;
}

