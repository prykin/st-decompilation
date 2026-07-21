#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::CreateCtrls */

void __thiscall SettMapMTy::CreateCtrls(SettMapMTy *this,char param_1)

{
  StartSystemTy *pSVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SettMapMTy *this_00;
  ccFntTy **ppcVar7;
  ccFntTy *local_a80 [6];
  undefined4 local_a68;
  undefined4 local_a64;
  uint *local_a60;
  undefined4 local_a34;
  undefined4 local_a30;
  undefined4 local_a2c;
  undefined4 local_9f4;
  undefined4 local_9f0;
  undefined4 local_9ec;
  undefined4 local_21c;
  undefined4 local_1f4 [84];
  InternalExceptionFrame local_a4;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_18;
  undefined4 local_14;
  SettMapMTy *local_8;

  ppcVar7 = local_a80;
  local_8 = this;
  for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar7 = (ccFntTy *)0x0;
    ppcVar7 = ppcVar7 + 1;
  }
  memset(local_60, 0, 0x58); /* compiler bulk-zero initialization */
  iVar4 = 0;
  memset(local_1f4, 0, 0x150); /* compiler bulk-zero initialization */
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  iVar4 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 == 0) {
    if (param_1 == '\0') {
      iVar4 = 1;
      iVar5 = 200;
      puVar3 = local_1f4 + 1;
      iVar6 = 2;
      do {
        puVar3[-1] = iVar4;
        *puVar3 = 0;
        puVar3[4] = 0x7d;
        puVar3[5] = 0x16;
        puVar3[2] = iVar5;
        puVar3[3] = 0x1db;
        this_00 = local_8;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x7d;
        puVar3 = puVar3 + 0x1c;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      local_60[0] = 1;
      local_18 = local_1f4;
      local_14 = 1;
      local_50 = local_8->field_0008;
      local_4c = 2;
      local_2c = 2;
      local_48 = 0x6326;
      local_28 = 0x6327;
      local_30 = local_50;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)local_8->field_000C->vtable->field_0008)(5,&local_8->field_21FC,0,local_60,0);
      Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,this_00->field_2200);
    }
    else {
      if (local_8->field_21E6 != '\0') {
        StartSystemTy::CreateChatView(PTR_0081176c);
        ppcVar7 = local_a80;
        for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
          *ppcVar7 = (ccFntTy *)0x0;
          ppcVar7 = ppcVar7 + 1;
        }
        local_a80[0] = (ccFntTy *)0x1;
        local_a80[1] = (ccFntTy *)0x9;
        local_a80[2] = PTR_0081176c->field_0034;
        local_a80[3] = (ccFntTy *)0xcb;
        local_a80[4] = (ccFntTy *)0x23f;
        local_a80[5] = *(ccFntTy **)(PTR_0081176c->field_0682 + 2);
        local_a68 = *(undefined4 *)(PTR_0081176c->field_0682 + 4);
        local_a64 = 0x104;
        local_a60 = PTR_0081176c->field_0686;
        pSVar1 = this_00->field_000C;
        local_21c = 0x100;
        local_a34 = pSVar1->field_0014;
        local_a2c = 0xc0a0;
        local_a30 = 0;
        local_9f4 = pSVar1->field_0014;
        local_9f0 = 0;
        local_9ec = 0xc0a2;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)pSVar1->vtable->field_0008)(6,&PTR_0081176c->field_054C,0,local_a80,0);
      }
      Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,PTR_0081176c->field_0558);
      if (PTR_0081176c->field_0560 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560,0xfffffffe,
                   PTR_0081176c->field_0578,PTR_0081176c->field_057C);
      }
      if (PTR_0081176c->field_05F1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1,0xfffffffe,
                   PTR_0081176c->field_0609,PTR_0081176c->field_060D);
      }
      Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,PTR_0081176c->field_0554);
    }
    SettMapTy::CreateCtrls((SettMapTy *)this_00,param_1);
    if (param_1 == '\0') {
      SetAccelerator(1,this_00->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
    }
    g_currentExceptionFrame = local_a4.previous;
    return;
  }
  g_currentExceptionFrame = local_a4.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x9d,0,iVar4,"%s",
                             "SettMapMTy::CreateCtrls");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\settmobj.cpp",0x9d);
  return;
}

