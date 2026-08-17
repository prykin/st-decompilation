#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::NoneSID
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NoneSID(SIDTy * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005D831F RET | 005D8387 RET | 005D83CB RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall SIDTy::NoneSID(SIDTy *this)

{
  uint uVar1;
  SIDTy *this_00;
  DWORD DVar3;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  InternalExceptionFrame local_50;
  SIDTy *local_c;
  int local_8;

  local_8 = 1;
  local_c = this;
  /* ST_CALLSITE[005D8205]: CALL dword ptr [0x0085bedc] */
  DVar3 = timeGetTime();
  this->field_0061 = DVar3;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x98,0,iVar3,"%s",
                               "SIDTy::NoneSID");
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\sid_obj.cpp",0x98);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (((local_c->field_0065 == '\x01') && (local_c->field_1CC4 != (HANDLE)0x0)) &&
     /* ST_CALLSITE[005D824D]: CALL dword ptr [0x0085bce0] */
     (DVar3 = WaitForSingleObject(local_c->field_1CC4,0), DVar3 == 0)) {
    /* ST_CALLSITE[005D825E]: CALL dword ptr [0x0085bce4] */
    FindNextChangeNotification(this_00->field_1CC4);
    /* ST_CALLSITE[005D8266]: CALL 0x0040392c; direct=0040392C SIDTy::PrepFiles */
    PrepFiles(this_00);
    this_00->field_002D = 5;
    piVar6 = &this_00->field_1AF1;
    iVar5 = 2;
    do {
      if (*piVar6 != 0) {
        FUN_006e6080(this_00,2,*piVar6,(undefined4 *)&this_00->field_0x1d);
      }
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (this_00->field_0065 == '\x03') {
    iVar5 = this_00->array_00BC[0xc].field_01E8;
    if (iVar5 < this_00->array_00BC[0xc].field_01EC + -1) {
      this_00->array_00BC[0xc].field_01E8 = iVar5 + 1;
      uVar1 = this_00->array_00BC[0xc].field_01E4;
      if (uVar1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)this_00->field_1AA8,uVar1,this_00->array_00BC[0xc].field_01E8,
                   this_00->field_1A7C,this_00->field_1A80);
      }
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 1;
      /* ST_CALLSITE[005D8373]: CALL 0x004030f8; direct=004030F8 SIDTy::CreateCtrls */
      CreateCtrls(this_00);
    }
  }
  else if (this_00->field_0065 == '\x04') {
    iVar5 = this_00->array_00BC[0xc].field_01E8;
    if (0 < iVar5) {
      this_00->array_00BC[0xc].field_01E8 = iVar5 + -1;
      uVar1 = this_00->array_00BC[0xc].field_01E4;
      if (uVar1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)this_00->field_1AA8,uVar1,this_00->array_00BC[0xc].field_01E8,
                   this_00->field_1A7C,this_00->field_1A80);
      }
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 2;
      this_00->field_0045 = 0x200;
      this_00->field_0049 = 0;
      this_00->field_004D = 0x693f;
      thunk_FUN_005b66e0((MTaskTy *)this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

