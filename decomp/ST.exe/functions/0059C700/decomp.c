#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::LoginCtrls */

void __thiscall FSGSTy::LoginCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *this_00;
  AnonPointee_FSGSTy_1AE8 *pAVar2;
  AnonPointee_FSGSTy_1AEC *pAVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *text;
  ccFntTy **ppcVar7;
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

  ppcVar7 = local_8d8;
  local_8 = this;
  for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar7 = (ccFntTy *)0x0;
    ppcVar7 = ppcVar7 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar6 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar6 == 0) {
    pAVar2 = (AnonPointee_FSGSTy_1AE8 *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00 = local_8;
    local_8->field_1AE8 = pAVar2;
    Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar2,&DAT_00807e1d);
    pAVar3 = (AnonPointee_FSGSTy_1AEC *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1AEC = pAVar3;
    text = (char *)&DAT_00807e5d;
    if (DAT_0080735f == '\0') {
      text = &DAT_008016a0;
    }
    Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar3,text);
    ppcVar7 = local_8d8;
    for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppcVar7 = (ccFntTy *)0x0;
      ppcVar7 = ppcVar7 + 1;
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
    local_8d8[4] = (ccFntTy *)0x106;
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
    local_8d8[4] = (ccFntTy *)0x13d;
    local_8d8[5] = (ccFntTy *)0xaa;
    local_8d8[6] = (ccFntTy *)0x14;
    local_8d8[7] = (ccFntTy *)0x10;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,(int *)0x0,local_8d8,0);
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,3,1,0x19a,0x13d,0x16,0x14,0x6900,0x6980);
    this_00->field_1AD0 = uVar4;
    this_00->field_002D = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x5ac,0,iVar6,"%s",
                             "FSGSTy::LoginCtrls");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x5ac);
  return;
}

