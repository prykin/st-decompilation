#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::CreateChatView */

void __thiscall StartSystemTy::CreateChatView(StartSystemTy *this)

{
  ccFntTy *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  StartSystemTy *pSVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 local_8c4 [5];
  int local_8b0;
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
  int local_808 [4];
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_68c;
  int local_688 [4];
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_620;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  puVar9 = local_8c4;
  local_8 = this;
  for (iVar7 = 0x21e; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar7 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar5 = local_8;
  if (iVar7 == 0) {
    local_8c4[0] = 0;
    local_8c4[1] = 2;
    pcVar1 = local_8->field_0034;
    local_8a4 = 0xcd;
    local_8a0 = 499;
    local_8c4[2] = 1;
    local_8c4[3] = 0;
    local_8c4[4] = *(undefined4 *)(local_8->field_067E + 2);
    if (pcVar1->field_00A0 != 0) {
      FUN_00710790((uint *)pcVar1);
    }
    local_8b0 = *(int *)&pcVar1->field_0x8a;
    local_8a8 = (undefined4)(0x49 / (longlong)local_8b0);
    local_808[2] = pSVar5->field_0609;
    local_808[3] = pSVar5->field_060D;
    local_7f8 = pSVar5->field_0611;
    local_888 = 0;
    local_810 = 0;
    local_80c = 2;
    local_808[0] = 0;
    local_808[1] = 2;
    local_7a4 = 0;
    local_68c = 2;
    local_8ac = 1;
    local_884 = 0x633f;
    local_814 = 4;
    local_7f4 = pSVar5->field_0615;
    uVar2 = pSVar5->field_0580;
    local_6f8 = 500;
    local_6f4 = 0x32;
    local_7a0 = 0x6341;
    local_88c = pSVar5->field_0014;
    local_7a8 = local_88c;
    uVar3 = pSVar5->field_0578;
    piVar8 = local_808;
    piVar10 = local_688;
    for (iVar7 = 0x5f; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar10 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar10 = piVar10 + 1;
    }
    local_688[3] = pSVar5->field_057C;
    local_674 = pSVar5->field_0584;
    local_620 = 0x6340;
    local_688[2] = uVar3;
    local_678 = uVar2;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)pSVar5->vtable->field_0008)(8,&pSVar5->field_0550,0,local_8c4,0);
    Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,pSVar5->field_0558);
    if (pSVar5->field_0560 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)pSVar5->field_05A4,pSVar5->field_0560,0xfffffffe,pSVar5->field_0578,
                 pSVar5->field_057C);
    }
    if (pSVar5->field_05F1 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)pSVar5->field_0635,pSVar5->field_05F1,0xfffffffe,pSVar5->field_0609,
                 pSVar5->field_060D);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x3f9,0,iVar7,"%s",
                             "StartSystemTy::CreateChatView");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar7,0,"E:\\__titans\\Start\\startsys.cpp",0x3f9);
  return;
}

