#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::NewGameCtrls */

void __thiscall FSGSTy::NewGameCtrls(FSGSTy *this)

{
  FSGSTy *this_00;
  int iVar5;
  DArrayTy *pDVar2;
  int iVar4;
  int iVar3;
  ccFntTy **ppcVar4;
  ccFntTy *local_8d8 [8];
  DArrayTy *local_8b8;
  uint local_8ac;
  uint local_8a8;
  uint local_8a4;
  uint local_88c;
  uint local_888;
  uint local_884;
  uint local_84c;
  uint local_848;
  uint local_844;
  uint local_68;
  uint local_64;
  uint local_60;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  ppcVar4 = local_8d8;
  local_8 = this;
  for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar4 = nullptr;
    ppcVar4 = ppcVar4 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar5 == 0) {
    pDVar2 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00 = local_8;
    local_8->field_1AE8 = pDVar2;

    Library::DKW::TBL::FUN_006b5aa0(pDVar2,&CHAR_00h_00807e1d);
    pDVar2 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00->field_1AEC = pDVar2;

    Library::DKW::TBL::FUN_006b5aa0(pDVar2,&CHAR_00h_008016a0);
    ppcVar4 = local_8d8;
    for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppcVar4 = nullptr;
      ppcVar4 = ppcVar4 + 1;
    }
    local_8d8[2] = this_00->array_00BC[0xc].field_01F3;
    local_8b8 = this_00->field_1AE8;
    local_8ac = this_00->field_0008;
    local_848 = 2;
    local_64 = 2;
    local_8a8 = 2;
    local_888 = 2;
    local_8d8[0] = (ccFntTy *)0x1;
    local_8d8[1] = (ccFntTy *)0x89;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0x106;
    local_8d8[5] = (ccFntTy *)0x17c;
    local_8d8[6] = (ccFntTy *)0x19;
    local_8d8[7] = (ccFntTy *)0x20;
    local_8a4 = 0x68ff;
    local_884 = 0x697f;
    local_60 = 0x6955;
    local_844 = 0x63ff;
    local_88c = local_8ac;
    local_84c = local_8ac;
    local_68 = local_8ac;
    /* ST_CALLSITE[0059E94D]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,local_8d8,0);
    local_8b8 = this_00->field_1AEC;
    local_8d8[4] = (ccFntTy *)0x13d;
    local_8d8[5] = (ccFntTy *)0xaa;
    local_8d8[6] = (ccFntTy *)0x14;
    local_8d8[7] = (ccFntTy *)0x10;
    /* ST_CALLSITE[0059E99D]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,nullptr,local_8d8,0);
    this_00->field_1EC2 = 0x100;
    this_00->field_1EC6 = 0xffffffff;
    this_00->field_1ECA = 0;
    /* ST_CALLSITE[0059E9DF]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    iVar3 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0xcd,0x16f,0x186,0x19,0x6904,0x698b);
    this_00->field_1EB6 = iVar3;
    this_00->field_002D = 0x61;
    this_00->field_0035 = 0;
    this_00->field_0037 = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x782,0,iVar5,"%s",
                             "FSGSTy::NewGameCtrls");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x782);
  return;
}

