#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::JoinChannel */

void __thiscall FSGSTy::JoinChannel(FSGSTy *this,void *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int errorCode;
  undefined4 uVar4;
  int iVar5;
  InternalExceptionFrame local_7c;
  undefined4 local_38 [11];
  undefined1 local_b;
  FSGSTy *local_8;

  if (this->field_1A5F == CASE_6) {
    this->field_1A60 = 0;
    local_7c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_7c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
    this_00 = PTR_00802a30;
    if (errorCode == 0) {
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        uVar4 = PTR_00802a30->field_00C9;
        uVar2 = PTR_00802a30->field_00C5;
        PTR_00802a30->field_0493 = 1;
        this_00->field_0494 = 0xffff;
        CursorClassTy::SetGCType(this_00,CASE_0,uVar2,uVar4);
        CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_0xd2 = 0;
        *(undefined4 *)&this_00->field_0x4df = 0xffffffff;
      }
      FUN_006b5f80(DAT_008075a8,0x1e9,0x5e,0x124,0xf3);
      this_01 = local_8;
      PutDDXClip(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',(BITMAPINFO *)local_8->field_1E9A);
      this_01->field_1EA6->count = 0;
      local_b = 1;
      Library::DKW::TBL::FUN_006ae1c0(&this_01->field_1EA6->flags,local_38);
      this_01->field_002D = 0x28;
      puVar1 = &this_01->field_0x1d;
      *(dword *)&this_01->field_0x31 = this_01->field_1EA6->count;
      *(undefined2 *)&this_01->field_0x35 = 1;
      FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)puVar1);
      this_01->field_002D = 0x20;
      if ((this_01->field_1EA6->count == 0) || (this_01->field_1A6B == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined4 *)&this_01->field_0x31 = uVar4;
      FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)puVar1);
      this_01->field_002D = 0x20;
      *(undefined4 *)&this_01->field_0x31 = 0;
      if (this_01->field_1B24 != 0) {
        FUN_006e6080(this_01,2,this_01->field_1B24,(undefined4 *)puVar1);
      }
      *(undefined4 *)&this_01->field_0x31 = 1;
      if ((this_01->field_1B18 != 0) && (this_01->field_1A6B != 0)) {
        FUN_006e6080(this_01,2,this_01->field_1B18,(undefined4 *)puVar1);
      }
      g_currentExceptionFrame = local_7c.previous;
      return;
    }
    g_currentExceptionFrame = local_7c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa7d,0,errorCode,
                               &DAT_007a4ccc,s_FSGSTy__JoinChannel_007cc520);
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa7d);
  }
  return;
}

