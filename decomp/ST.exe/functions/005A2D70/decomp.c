#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::JoinChannel
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall JoinChannel(FSGSTy * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005A2F26 RET | 005A2F69 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall FSGSTy::JoinChannel(FSGSTy *this)

{
  byte *puVar1;
  int iVar2;
  int iVar4;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar3;
  uint uVar6;
  int iVar5;
  InternalExceptionFrame local_7c;
  byte local_38 [45];
  byte local_b;
  FSGSTy *local_8;

  if (this->array_00BC[0xc].field_01DF == '\x06') {
    this->array_00BC[0xc].field_01E0 = 0;
    local_7c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_7c;
    local_8 = this;

    iVar3 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
    this_00 = g_cursorClass_00802A30;
    if (iVar3 == 0) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar2 = g_cursorClass_00802A30->field_00C9;
        iVar4 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        this_00->field_0494 = 0xffff;
        /* ST_CALLSITE[005A2DE5]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        CursorClassTy::SetGCType(this_00,CASE_0,iVar4,iVar2);
        /* ST_CALLSITE[005A2DFA]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_00D2 = 0;
        this_00->field_04DF = -1;
      }
      FUN_006b5f80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0xf3);
      this_01 = local_8;
      /* ST_CALLSITE[005A2E4B]: CALL 0x00402298; direct=00402298 PutDDXClip */
      PutDDXClip(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',local_8->field_1E9A);
      this_01->field_1EA6->count = 0;
      local_b = 1;

      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_01->field_1EA6,local_38);
      this_01->field_002D = 0x28;
      puVar1 = &this_01->field_0x1d;
      *(dword *)&this_01->field_0x31 = this_01->field_1EA6->count;
      this_01->field_0035 = 1;
      FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)puVar1);
      this_01->field_002D = 0x20;
      if ((this_01->field_1EA6->count == 0) || (this_01->array_00BC[0xc].field_01EB == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      *(undefined4 *)&this_01->field_0x31 = uVar6;
      FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)puVar1);
      this_01->field_002D = 0x20;
      *(undefined4 *)&this_01->field_0x31 = 0;
      if (this_01->field_1B24 != 0) {
        FUN_006e6080(this_01,2,this_01->field_1B24,(undefined4 *)puVar1);
      }
      *(undefined4 *)&this_01->field_0x31 = 1;
      if ((this_01->field_1B18 != 0) && (this_01->array_00BC[0xc].field_01EB != 0)) {
        FUN_006e6080(this_01,2,this_01->field_1B18,(undefined4 *)puVar1);
      }
      g_currentExceptionFrame = local_7c.previous;
      return;
    }
    g_currentExceptionFrame = local_7c.previous;

    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xa7d,0,iVar3,"%s"
                               ,"FSGSTy::JoinChannel");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xa7d);
  }
  return;
}

