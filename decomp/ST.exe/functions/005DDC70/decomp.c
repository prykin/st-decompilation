#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::CreateBinDesc */

void __thiscall StartSystemTy::CreateBinDesc(StartSystemTy *this)

{
  ccFntTy *pcVar1;
  undefined4 uVar2;
  code *pcVar3;
  StartSystemTy *pSVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int local_8c4 [6];
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808 [4];
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_68c;
  undefined4 local_688 [4];
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_620;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  piVar8 = local_8c4;
  local_8 = this;
  for (iVar6 = 0x21e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar6 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar4 = local_8;
  if (iVar6 == 0) {
    local_8c4[0] = 0;
    local_8c4[1] = 2;
    pcVar1 = local_8->field_0034;
    local_8a4 = 0xd;
    local_8a0 = 0xb9;
    local_8c4[2] = 1;
    local_8c4[3] = 0;
    local_8c4[4] = 0xd5;
    if (pcVar1->field_00A0 != 0) {
      FUN_00710790((uint *)pcVar1);
    }
    local_8c4[5] = *(int *)&pcVar1->field_0x8a;
    local_8a8 = (undefined4)(0x119 / (longlong)local_8c4[5]);
    local_808[2] = pSVar4->field_043A;
    local_808[3] = pSVar4->field_043E;
    local_7f8 = pSVar4->field_0442;
    local_888 = 0;
    local_810 = 0;
    local_80c = 2;
    local_808[0] = 0;
    local_808[1] = 2;
    local_7a4 = 0;
    local_68c = 2;
    local_7f4 = pSVar4->field_0446;
    uVar2 = pSVar4->field_03AD;
    local_8ac = 1;
    local_884 = 0x6332;
    local_814 = 4;
    local_6f8 = 500;
    local_6f4 = 0x32;
    local_7a0 = 0x6334;
    local_88c = pSVar4->field_0014;
    local_7a8 = local_88c;
    puVar7 = local_808;
    puVar9 = local_688;
    for (iVar6 = 0x5f; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    local_688[2] = pSVar4->field_03A9;
    local_674 = pSVar4->field_03B5;
    local_678 = pSVar4->field_03B1;
    local_4fc = pSVar4->field_04CB;
    local_4f8 = pSVar4->field_04CF;
    local_4f4 = pSVar4->field_04D3;
    local_500 = 0;
    local_4b4 = 0;
    local_620 = 0x6333;
    local_50c = 3;
    local_508 = 1;
    local_4f0 = 0xdb;
    local_4ec = 0xe;
    local_4b0 = 0x6335;
    local_688[3] = uVar2;
    local_4b8 = local_88c;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)pSVar4->vtable->field_0008)(8,&pSVar4->field_0389,0,local_8c4,0);
    Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,pSVar4->field_0540);
    if (pSVar4->field_0391 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)pSVar4->field_03D5,pSVar4->field_0391,0xfffffffe,pSVar4->field_03A9,
                 pSVar4->field_03AD);
    }
    if (pSVar4->field_0422 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)pSVar4->field_0466,pSVar4->field_0422,0xfffffffe,pSVar4->field_043A,
                 pSVar4->field_043E);
    }
    if (pSVar4->field_04B3 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)pSVar4->field_04F7,pSVar4->field_04B3,0xfffffffe,pSVar4->field_04CB,
                 pSVar4->field_04CF);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x3b8,0,iVar6,"%s",
                             "StartSystemTy::CreateBinDesc");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\startsys.cpp",0x3b8);
  return;
}

