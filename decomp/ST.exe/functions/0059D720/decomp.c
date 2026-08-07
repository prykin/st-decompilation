#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::InfoCtrls
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall InfoCtrls(FSGSTy * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0059D9FB RET | 0059DA40 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall FSGSTy::InfoCtrls(FSGSTy *this)

{
  byte bVar1;
  FSGSTy *this_00;
  int iVar3;
  byte *pbVar4;
  int iVar6;
  DArrayTy *pDVar5;
  int iVar5;
  int iVar7;
  char *pcVar8;
  ccFntTy **ppcVar9;
  bool bVar10;
  ccFntTy *local_8dc [8];
  DArrayTy *local_8bc;
  undefined4 local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  InternalExceptionFrame local_50;
  FSGSTy *local_c;
  int local_8;

  pbVar4 = this->field_1B0C;
  if (pbVar4 != nullptr) {
    pcVar8 = &CHAR_00h_00807e1d;
    ppcVar9 = local_8dc;
    local_c = this;
    for (iVar7 = 0x223; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppcVar9 = nullptr;
      ppcVar9 = ppcVar9 + 1;
    }
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_0059d77b:
        local_8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_0059d780;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_0059d77b;
      pbVar4 = pbVar4 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    local_8 = 0;
LAB_0059d780:
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    iVar6 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    if (iVar6 == 0) {
      pDVar5 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
      this_00 = local_c;
      local_c->field_1AF8 = pDVar5;
      Library::DKW::TBL::FUN_006b5aa0(pDVar5,&CHAR_00h_008016a0);
      pDVar5 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
      this_00->field_1AFC = pDVar5;
      Library::DKW::TBL::FUN_006b5aa0(pDVar5,&CHAR_00h_008016a0);
      pDVar5 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
      this_00->field_1B00 = pDVar5;
      Library::DKW::TBL::FUN_006b5aa0(pDVar5,&CHAR_00h_008016a0);
      pDVar5 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
      this_00->field_1B04 = &pDVar5->flags;
      Library::DKW::TBL::FUN_006b5aa0(pDVar5,&CHAR_00h_008016a0);
      ppcVar9 = local_8dc;
      for (iVar7 = 0x223; iVar3 = local_8, iVar7 != 0; iVar7 = iVar7 + -1) {
        *ppcVar9 = nullptr;
        ppcVar9 = ppcVar9 + 1;
      }
      local_8dc[0] = (ccFntTy *)0x1;
      local_8dc[1] = (ccFntTy *)0x89;
      if (local_8 != 0) {
        local_8dc[1] = (ccFntTy *)0x99;
      }
      local_8dc[2] = this_00->field_1A73;
      local_8bc = this_00->field_1AF8;
      local_8b0 = this_00->field_0008;
      local_68 = 2;
      local_8ac = 2;
      local_88c = 2;
      local_8dc[3] = (ccFntTy *)0xd2;
      local_8dc[4] = (ccFntTy *)0xb5;
      local_8dc[5] = (ccFntTy *)0x64;
      local_8dc[6] = (ccFntTy *)0x14;
      local_8dc[7] = (ccFntTy *)0x1ff;
      local_8a8 = 0x68ff;
      local_888 = 0x697f;
      local_64 = 0x6955;
      local_890 = local_8b0;
      local_6c = local_8b0;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AD8,nullptr,local_8dc,0);
      local_8bc = this_00->field_1AFC;
      local_8dc[3] = (ccFntTy *)0x15e;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1ADC,nullptr,local_8dc,0);
      local_8bc = this_00->field_1B00;
      local_8dc[3] = (ccFntTy *)0x1ea;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AE0,nullptr,local_8dc,0);
      local_8dc[1] = (ccFntTy *)0xc8;
      if (iVar3 != 0) {
        local_8dc[1] = (ccFntTy *)0xcc;
      }
      local_8bc = (DArrayTy *)this_00->field_1B04;
      local_8dc[3] = (ccFntTy *)0xd2;
      local_8dc[4] = (ccFntTy *)0xdd;
      local_8dc[5] = (ccFntTy *)0x17c;
      local_8dc[6] = (ccFntTy *)0x4b;
      local_888 = 0x6981;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AE4,nullptr,local_8dc,0);
      this_00->field_002D = 0x61;
      *(undefined4 *)&this_00->field_0x35 = 0;
      FUN_006e6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x69c,0,iVar6,"%s"
                               ,"FSGSTy::InfoCtrls");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x69c);
  }
  return;
}

