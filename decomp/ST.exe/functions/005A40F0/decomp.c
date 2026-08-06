#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetLadder */

void __thiscall
FSGSTy::SetLadder(FSGSTy *this,undefined4 param_1,uint param_2,int param_3,undefined4 *param_4)

{
  void **slotStorage;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar2;
  undefined4 *puVar2;
  int iVar4;
  uint uVar3;
  int iVar5;
  InternalExceptionFrame local_6c;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  FSGSTy *local_8;

  this_00 = g_cursorClass_00802A30;
  local_8 = this;
  if (g_cursorClass_00802A30 != nullptr) {
    g_cursorClass_00802A30->field_0493 = CASE_1;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,this_00->field_00C5,this_00->field_00C9);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  if (this->field_1A5F == CASE_9) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    iVar2 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
    this_01 = local_8;
    if (iVar2 == 0) {
      slotStorage = &local_8->field_1EDB;
      if (local_8->field_1EDB != nullptr) {
        FreeAndNull(slotStorage);
      }
      this_01->field_1EDF = param_2;
      this_01->field_1EE3 = param_3;
      puVar2 = Library::DKW::LIB::MemAlloc(param_3 * 0x24);
      uVar3 = this_01->field_1EE3;
      *slotStorage = puVar2;
      for (uVar3 = uVar3 * 9 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *param_4;
        param_4 = param_4 + 1;
        puVar2 = puVar2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar2 = *(undefined1 *)param_4;
        param_4 = (undefined4 *)((int)param_4 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      PaintLadder(this_01);
      memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
      local_18 = 0x20;
      if ((this_01->field_1EDF == 0) || (local_14 = 1, this_01->field_1A6B == 0)) {
        local_14 = 0;
      }
      if (this_01->field_1ED3 != 0) {
        FUN_006e6080(this_01,2,this_01->field_1ED3,local_28);
      }
      if ((0xf422f < this_01->field_1EDF) || (local_14 = 1, this_01->field_1A6B == 0)) {
        local_14 = 0;
      }
      if (this_01->field_1ED7 != 0) {
        FUN_006e6080(this_01,2,this_01->field_1ED7,local_28);
      }
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xb65,0,iVar2,"%s"
                               ,"FSGSTy::SetLadder");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xb65);
  }
  return;
}

