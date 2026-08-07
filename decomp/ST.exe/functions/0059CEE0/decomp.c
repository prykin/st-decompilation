#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PswCtrls */

void __thiscall FSGSTy::PswCtrls(FSGSTy *this)

{
  FSGSTy *this_00;
  int iVar4;
  DArrayTy *pDVar2;
  int iVar3;
  int iVar5;
  ccFntTy **ppcVar6;
  ccFntTy *local_8d8 [8];
  DArrayTy *local_8b8;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  ppcVar6 = local_8d8;
  local_8 = this;
  for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppcVar6 = nullptr;
    ppcVar6 = ppcVar6 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    pDVar2 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00 = local_8;
    local_8->field_1AE8 = pDVar2;
    Library::DKW::TBL::FUN_006b5aa0(pDVar2,&CHAR_00h_00807e1d);
    pDVar2 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00->field_1AEC = pDVar2;
    Library::DKW::TBL::FUN_006b5aa0(pDVar2,&CHAR_00h_008016a0);
    pDVar2 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00->field_1AF0 = pDVar2;
    Library::DKW::TBL::FUN_006b5aa0(pDVar2,&CHAR_00h_008016a0);
    pDVar2 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00->field_1AF4 = pDVar2;
    Library::DKW::TBL::FUN_006b5aa0(pDVar2,&CHAR_00h_008016a0);
    ppcVar6 = local_8d8;
    for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppcVar6 = nullptr;
      ppcVar6 = ppcVar6 + 1;
    }
    local_8d8[2] = this_00->field_1A73;
    local_8b8 = this_00->field_1AE8;
    local_8ac = this_00->field_0008;
    local_64 = 2;
    local_8a8 = 2;
    local_888 = 2;
    local_8d8[0] = (ccFntTy *)0x1;
    local_8d8[1] = (ccFntTy *)0x89;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0xe8;
    local_8d8[5] = (ccFntTy *)0x17c;
    local_8d8[6] = (ccFntTy *)0x19;
    local_8d8[7] = (ccFntTy *)0x10;
    local_8a4 = 0x68ff;
    local_884 = 0x697f;
    local_60 = 0x6955;
    local_88c = local_8ac;
    local_68 = local_8ac;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,local_8d8,0);
    local_8b8 = this_00->field_1AEC;
    local_8d8[1] = (ccFntTy *)0xa9;
    local_8d8[4] = (ccFntTy *)0x11f;
    local_8d8[5] = (ccFntTy *)0xaa;
    local_8d8[6] = (ccFntTy *)0x14;
    local_8d8[7] = (ccFntTy *)0x10;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,nullptr,local_8d8,0);
    local_8b8 = this_00->field_1AF4;
    local_8d8[4] = (ccFntTy *)0x147;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AD4,nullptr,local_8d8,0);
    local_8b8 = this_00->field_1AF0;
    local_8d8[4] = (ccFntTy *)0x16f;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1ACC,nullptr,local_8d8,0);
    this_00->field_002D = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x624,0,iVar4,"%s",
                             "FSGSTy::PswCtrls");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x624);
  return;
}

