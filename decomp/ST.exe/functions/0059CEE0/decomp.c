#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PswCtrls */

void __thiscall FSGSTy::PswCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *this_00;
  AnonPointee_FSGSTy_1AE8 *pAVar2;
  AnonPointee_FSGSTy_1AEC *pAVar3;
  uint *puVar4;
  AnonPointee_FSGSTy_1AF4 *pAVar5;
  int iVar6;
  int iVar7;
  ccFntTy **ppcVar8;
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

  ppcVar8 = local_8d8;
  local_8 = this;
  for (iVar7 = 0x223; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppcVar8 = (ccFntTy *)0x0;
    ppcVar8 = ppcVar8 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar7 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar7 == 0) {
    pAVar2 = (AnonPointee_FSGSTy_1AE8 *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00 = local_8;
    local_8->field_1AE8 = pAVar2;
    Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar2,&DAT_00807e1d);
    pAVar3 = (AnonPointee_FSGSTy_1AEC *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1AEC = pAVar3;
    Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar3,&DAT_008016a0);
    puVar4 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1AF0 = puVar4;
    Library::DKW::TBL::FUN_006b5aa0(puVar4,&DAT_008016a0);
    pAVar5 = (AnonPointee_FSGSTy_1AF4 *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1AF4 = pAVar5;
    Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar5,&DAT_008016a0);
    ppcVar8 = local_8d8;
    for (iVar7 = 0x223; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppcVar8 = (ccFntTy *)0x0;
      ppcVar8 = ppcVar8 + 1;
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
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,(int *)0x0,local_8d8,0);
    local_8b8 = (AnonPointee_FSGSTy_1AE8 *)this_00->field_1AEC;
    local_8d8[1] = (ccFntTy *)0xa9;
    local_8d8[4] = (ccFntTy *)0x11f;
    local_8d8[5] = (ccFntTy *)0xaa;
    local_8d8[6] = (ccFntTy *)0x14;
    local_8d8[7] = (ccFntTy *)0x10;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,(int *)0x0,local_8d8,0);
    local_8b8 = (AnonPointee_FSGSTy_1AE8 *)this_00->field_1AF4;
    local_8d8[4] = (ccFntTy *)0x147;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AD4,(int *)0x0,local_8d8,0);
    local_8b8 = (AnonPointee_FSGSTy_1AE8 *)this_00->field_1AF0;
    local_8d8[4] = (ccFntTy *)0x16f;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1ACC,(int *)0x0,local_8d8,0);
    this_00->field_002D = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x624,0,iVar7,&DAT_007a4ccc,
                             s_FSGSTy__PswCtrls_007cc314);
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar7,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x624);
  return;
}

