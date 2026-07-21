#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::InfoCtrls */

void __thiscall FSGSTy::InfoCtrls(FSGSTy *this,void *param_1)

{
  byte bVar1;
  code *pcVar2;
  FSGSTy *this_00;
  byte *pbVar3;
  DArrayTy *pDVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  ccFntTy **ppcVar8;
  bool bVar9;
  ccFntTy *local_8dc [8];
  uint *local_8bc;
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

  pbVar3 = this->field_1B0C;
  if (pbVar3 != (byte *)0x0) {
    pbVar7 = &DAT_00807e1d;
    ppcVar8 = local_8dc;
    local_c = this;
    for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppcVar8 = (ccFntTy *)0x0;
      ppcVar8 = ppcVar8 + 1;
    }
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0059d77b:
        local_8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0059d780;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0059d77b;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    local_8 = 0;
LAB_0059d780:
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    iVar6 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    if (iVar6 == 0) {
      pDVar4 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,1,1);
      this_00 = local_c;
      local_c->field_1AF8 = &pDVar4->flags;
      Library::DKW::TBL::FUN_006b5aa0(&pDVar4->flags,&DAT_008016a0);
      pDVar4 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,1,1);
      this_00->field_1AFC = &pDVar4->flags;
      Library::DKW::TBL::FUN_006b5aa0(&pDVar4->flags,&DAT_008016a0);
      pDVar4 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,1,1);
      this_00->field_1B00 = &pDVar4->flags;
      Library::DKW::TBL::FUN_006b5aa0(&pDVar4->flags,&DAT_008016a0);
      pDVar4 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,1,1);
      this_00->field_1B04 = &pDVar4->flags;
      Library::DKW::TBL::FUN_006b5aa0(&pDVar4->flags,&DAT_008016a0);
      ppcVar8 = local_8dc;
      for (iVar6 = 0x223; iVar5 = local_8, iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppcVar8 = (ccFntTy *)0x0;
        ppcVar8 = ppcVar8 + 1;
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
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_00->field_000C->vtable->field_0008)(6,&this_00->field_1AD8,0,local_8dc,0);
      local_8bc = this_00->field_1AFC;
      local_8dc[3] = (ccFntTy *)0x15e;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_00->field_000C->vtable->field_0008)(6,&this_00->field_1ADC,0,local_8dc,0);
      local_8bc = this_00->field_1B00;
      local_8dc[3] = (ccFntTy *)0x1ea;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_00->field_000C->vtable->field_0008)(6,&this_00->field_1AE0,0,local_8dc,0);
      local_8dc[1] = (ccFntTy *)0xc8;
      if (iVar5 != 0) {
        local_8dc[1] = (ccFntTy *)0xcc;
      }
      local_8bc = this_00->field_1B04;
      local_8dc[3] = (ccFntTy *)0xd2;
      local_8dc[4] = (ccFntTy *)0xdd;
      local_8dc[5] = (ccFntTy *)0x17c;
      local_8dc[6] = (ccFntTy *)0x4b;
      local_888 = 0x6981;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_00->field_000C->vtable->field_0008)(6,&this_00->field_1AE4,0,local_8dc,0);
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

