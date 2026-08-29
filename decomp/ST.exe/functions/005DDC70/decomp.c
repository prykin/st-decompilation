#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::CreateBinDesc

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall StartSystemTy::CreateBinDesc(StartSystemTy *this)

{
  ccFntTy *pcVar1;
  uint uVar2;
  StartSystemTy *this_00;
  int iVar5;
  int iVar4;
  int iVar6;
  byte *puVar7;
  int *piVar8;
  byte *puVar9;
  int local_8c4 [6];
  uint local_8ac;
  uint local_8a8;
  uint local_8a4;
  uint local_8a0;
  int local_88c;
  uint local_888;
  uint local_884;
  uint local_814;
  uint local_810;
  uint local_80c;
  uint local_808 [4];
  uint local_7f8;
  uint local_7f4;
  int local_7a8;
  uint local_7a4;
  uint local_7a0;
  uint local_6f8;
  uint local_6f4;
  uint local_68c;
  uint local_688 [4];
  uint local_678;
  uint local_674;
  uint local_620;
  uint local_50c;
  uint local_508;
  uint local_500;
  uint local_4fc;
  uint local_4f8;
  uint local_4f4;
  uint local_4f0;
  uint local_4ec;
  int local_4b8;
  uint local_4b4;
  uint local_4b0;
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

  iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar5 == 0) {
    local_8c4[0] = 0;
    local_8c4[1] = 2;
    pcVar1 = local_8->field_0034;
    local_8a4 = 0xd;
    local_8a0 = 0xb9;
    local_8c4[2] = 1;
    local_8c4[3] = 0;
    local_8c4[4] = 0xd5;
    if (pcVar1->field_00A0 != 0) {
      FUN_00710790((RecoveredRecordView_00710790_7768A573 *)pcVar1);
    }
    local_8c4[5] = *(int *)&pcVar1->field_0x8a;
    local_8a8 = (undefined4)(0x119 / (longlong)local_8c4[5]);
    local_808[2] = this_00->field_043A;
    local_808[3] = this_00->field_043E;
    local_7f8 = this_00->field_0442;
    local_888 = 0;
    local_810 = 0;
    local_80c = 2;
    local_808[0] = 0;
    local_808[1] = 2;
    local_7a4 = 0;
    local_68c = 2;
    local_7f4 = this_00->field_0446;
    uVar2 = this_00->field_03AD;
    local_8ac = 1;
    local_884 = 0x6332;
    local_814 = 4;
    local_6f8 = 500;
    local_6f4 = 0x32;
    local_7a0 = 0x6334;
    local_88c = this_00->field_0014;
    local_7a8 = local_88c;
    puVar7 = (byte *)(local_808);
    puVar9 = (byte *)(local_688);
    memmove(puVar9, puVar7, 0x17c); /* compiler REP MOVS byte copy */
    local_688[2] = this_00->field_03A9;
    local_674 = this_00->field_03B5;
    local_678 = this_00->field_03B1;
    local_4fc = this_00->field_04CB;
    local_4f8 = this_00->field_04CF;
    local_4f4 = this_00->field_04D3;
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
    /* ST_CALLSITE[005DDE9F]: CALL dword ptr [EAX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,8,&this_00->field_0389,nullptr,local_8c4,0);

    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,this_00->field_0540);
    if (this_00->field_0391 != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_03D5,this_00->field_0391,0xfffffffe,this_00->field_03A9,
                 this_00->field_03AD);
    }
    if (this_00->field_0422 != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_0466,this_00->field_0422,0xfffffffe,this_00->field_043A,
                 this_00->field_043E);
    }
    if (this_00->field_04B3 != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_04F7,this_00->field_04B3,0xfffffffe,this_00->field_04CB,
                 this_00->field_04CF);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x3b8,0,iVar5,"%s",
                             "StartSystemTy::CreateBinDesc");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\startsys.cpp",0x3b8);
  return;
}

