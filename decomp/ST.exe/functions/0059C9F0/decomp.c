#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::NewIDCtrls */

void __thiscall FSGSTy::NewIDCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *this_00;
  AnonPointee_FSGSTy_1AE8 *pAVar2;
  AnonPointee_FSGSTy_1AEC *pAVar3;
  AnonPointee_FSGSTy_1AF0 *pAVar4;
  AnonPointee_FSGSTy_1AF8 *pAVar5;
  AnonPointee_FSGSTy_1AFC *pAVar6;
  AnonPointee_FSGSTy_1B00 *pAVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  ccFntTy **ppcVar11;
  ccFntTy *local_8d8 [8];
  AnonPointee_FSGSTy_1AE8 *local_8b8;
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

  ppcVar11 = local_8d8;
  local_8 = this;
  for (iVar10 = 0x223; iVar10 != 0; iVar10 = iVar10 + -1) {
    *ppcVar11 = (ccFntTy *)0x0;
    ppcVar11 = ppcVar11 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar10 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar10 == 0) {
    pAVar2 = (AnonPointee_FSGSTy_1AE8 *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00 = local_8;
    local_8->field_1AE8 = pAVar2;
    Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar2,&DAT_00807e1d);
    pAVar3 = (AnonPointee_FSGSTy_1AEC *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1AEC = pAVar3;
    Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar3,&DAT_008016a0);
    pAVar4 = (AnonPointee_FSGSTy_1AF0 *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1AF0 = pAVar4;
    Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar4,&DAT_008016a0);
    pAVar5 = (AnonPointee_FSGSTy_1AF8 *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1AF8 = pAVar5;
    Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar5,&DAT_008016a0);
    pAVar6 = (AnonPointee_FSGSTy_1AFC *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1AFC = pAVar6;
    Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar6,&DAT_008016a0);
    pAVar7 = (AnonPointee_FSGSTy_1B00 *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1B00 = pAVar7;
    Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar7,&DAT_008016a0);
    puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1B04 = puVar8;
    Library::DKW::TBL::FUN_006b5aa0(puVar8,&DAT_008016a0);
    ppcVar11 = local_8d8;
    for (iVar10 = 0x223; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppcVar11 = (ccFntTy *)0x0;
      ppcVar11 = ppcVar11 + 1;
    }
    local_8d8[2] = this_00->field_1A73;
    local_8b8 = this_00->field_1AE8;
    local_8ac = this_00->field_0008;
    local_8d8[0] = (ccFntTy *)0x1;
    local_8d8[1] = (ccFntTy *)0x89;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0xd9;
    local_8d8[5] = (ccFntTy *)0x17c;
    local_8d8[6] = (ccFntTy *)0x19;
    local_8d8[7] = (ccFntTy *)0x10;
    local_64 = 2;
    local_8a8 = 2;
    local_888 = 2;
    local_8a4 = 0x68ff;
    local_884 = 0x697f;
    local_60 = 0x6955;
    local_88c = local_8ac;
    local_68 = local_8ac;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,(int *)0x0,local_8d8,0);
    local_8b8 = (AnonPointee_FSGSTy_1AE8 *)this_00->field_1AEC;
    local_8d8[1] = (ccFntTy *)0xa9;
    local_8d8[4] = (ccFntTy *)0x106;
    local_8d8[5] = (ccFntTy *)0xaa;
    local_8d8[6] = (ccFntTy *)0x14;
    local_8d8[7] = (ccFntTy *)0x10;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,(int *)0x0,local_8d8,0);
    local_8b8 = (AnonPointee_FSGSTy_1AE8 *)this_00->field_1AF0;
    local_8d8[3] = (ccFntTy *)0x1a4;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1ACC,(int *)0x0,local_8d8,0);
    local_8b8 = (AnonPointee_FSGSTy_1AE8 *)this_00->field_1AF8;
    local_8d8[1] = (ccFntTy *)0x89;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0x12e;
    local_8d8[5] = (ccFntTy *)0x64;
    local_8d8[7] = (ccFntTy *)0x1ff;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AD8,(int *)0x0,local_8d8,0);
    local_8b8 = (AnonPointee_FSGSTy_1AE8 *)this_00->field_1AFC;
    local_8d8[3] = (ccFntTy *)0x15e;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1ADC,(int *)0x0,local_8d8,0);
    local_8b8 = (AnonPointee_FSGSTy_1AE8 *)this_00->field_1B00;
    local_8d8[3] = (ccFntTy *)0x1ea;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AE0,(int *)0x0,local_8d8,0);
    local_8b8 = (AnonPointee_FSGSTy_1AE8 *)this_00->field_1B04;
    local_8d8[1] = (ccFntTy *)0xc8;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0x156;
    local_8d8[5] = (ccFntTy *)0x17c;
    local_8d8[6] = (ccFntTy *)0x4b;
    local_884 = 0x6981;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AE4,(int *)0x0,local_8d8,0);
    this_00->field_002D = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x5f4,0,iVar10,"%s",
                             "FSGSTy::NewIDCtrls");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar10,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x5f4);
  return;
}

