#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::JoinGameCtrls */

void __thiscall FSGSTy::JoinGameCtrls(FSGSTy *this)

{
  FSGSTy *this_00;
  int iVar8;
  uint uVar2;
  int local_EAX_168;
  LPBITMAPINFO ptVar3;
  DArrayTy *pDVar4;
  DArrayTy *pFVar5;
  int iVar7;
  int iVar5;
  byte *puVar6;
  byte *puVar8;
  ccFntTy **ppcVar9;
  ushort *puVar10;
  ccFntTy *local_dac [8];
  DArrayTy *local_d8c;
  uint local_d80;
  uint local_d7c;
  uint local_d78;
  uint local_d60;
  uint local_d5c;
  uint local_d58;
  uint local_d20;
  uint local_d1c;
  uint local_d18;
  uint local_53c;
  uint local_538;
  uint local_534;
  int local_520 [5];
  uint local_50c;
  uint local_508;
  uint local_504;
  uint local_4f8;
  uint local_4f4;
  uint local_4f0;
  uint local_4d8;
  uint local_4d4;
  uint local_4d0;
  uint local_4b8;
  uint local_4b4;
  uint local_4b0;
  uint local_498;
  uint local_494;
  uint local_490;
  uint local_3f4;
  uint local_3f0 [4];
  int local_3e0;
  uint local_3dc;
  uint local_390;
  uint local_38c;
  uint local_388;
  uint local_2e0;
  uint local_2dc;
  uint local_274;
  uint local_270 [4];
  uint local_260;
  uint local_25c;
  uint local_208;
  uint local_f4;
  uint local_f0;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_50;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  ppcVar9 = local_dac;
  local_8 = this;
  for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppcVar9 = nullptr;
    ppcVar9 = ppcVar9 + 1;
  }
  memset(local_520, 0, 0x4d4); /* compiler bulk-zero initialization */
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  iVar8 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar8 == 0) {
    if (local_8->field_1E8E != 0) {
      FreeAndNull(&local_8->field_1E8E);
    }
    if (this_00->field_1E92 != nullptr) {
      FreeAndNull(&this_00->field_1E92);
    }
    iVar5 = 1;
    puVar10 = this_00->field_005D + 0x14;

    uVar2 = FUN_006b4fe0(this_00->field_005D);

    local_EAX_168 =
         FUN_006b50c0(0x174,0x175,(uint)this_00->field_005D[7],uVar2,(undefined4 *)puVar10,iVar5);
    this_00->field_1E8E = local_EAX_168;
    /* ST_CALLSITE[0059EBCD]: CALL 0x006c4880; direct=006C4880 Library::DKW::DDX::FUN_006c4880; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
    ptVar3 = Library::DKW::DDX::FUN_006c4880(g_dDXContext_0080759C,0x199,0x5e,0x174,0x175,8);
    this_00->field_1E92 = ptVar3;
    /* ST_CALLSITE[0059EBEB]: CALL 0x006c4880; direct=006C4880 Library::DKW::DDX::FUN_006c4880; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
    ptVar3 = Library::DKW::DDX::FUN_006c4880(g_dDXContext_0080759C,0x13,0x5e,0x174,0x175,8);
    this_00->field_1E9A = ptVar3;
    pDVar4 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00->field_1AE8 = pDVar4;

    Library::DKW::TBL::FUN_006b5aa0(pDVar4,&CHAR_00h_008016a0);
    pDVar4 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00->field_1AEC = pDVar4;

    Library::DKW::TBL::FUN_006b5aa0(pDVar4,&CHAR_00h_008016a0);
    /* ST_CALLSITE[0059EC36]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/FSGSTy_field_1EBEDArray; source view only; no Ghidra override */
    pFVar5 = Library::DKW::TBL::DArrayCreate(nullptr,0x14,0x25c,10);
    this_00->field_1EBE = (FSGSTy_field_1EBEDArray *)pFVar5;
    local_520[4] = 0x15b - this_00->field_1CFF;
    local_4f8 = this_00->field_0008;
    local_520[0] = 0;
    local_520[2] = 0x14;
    local_520[3] = 100;
    local_50c = 0x169;
    local_508 = 0;
    local_504 = 0;
    local_4f4 = 2;
    local_4f0 = 0x8160;
    local_4d4 = 2;
    local_4d0 = 0x8161;
    local_4b4 = 2;
    local_4b0 = 0x63ff;
    local_494 = 2;
    local_490 = 0x8163;
    if (DAT_0080734c != '\0') {
      local_50 = 1;
    }
    local_3f0[0] = 0;
    local_3f0[2] = this_00->field_1CF7;
    local_3e0 = this_00->field_1CFF;
    local_3f0[3] = this_00->field_1CFB;
    local_3dc = this_00->field_1D03;
    local_3f4 = 2;
    local_3f0[1] = 2;
    local_2e0 = 500;
    local_2dc = 0x32;
    local_390 = local_4f8;
    local_38c = 2;
    local_388 = 0x8164;
    local_274 = 2;
    puVar6 = (byte *)(local_3f0);
    puVar8 = (byte *)(local_270);
    memmove(puVar8, puVar6, 0x17c); /* compiler REP MOVS byte copy */
    iVar5 = 0;
    local_270[2] = this_00->field_1D88;
    local_270[3] = this_00->field_1D8C;
    local_260 = this_00->field_1D90;
    local_25c = this_00->field_1D94;
    local_e4 = this_00->field_1E19;
    local_e0 = this_00->field_1E1D;
    local_dc = this_00->field_1E21;
    local_208 = 0x8165;
    local_f4 = 3;
    local_f0 = 1;
    local_e8 = 0;
    local_d8 = 0x126;
    local_d4 = 0xe;
    local_9c = 2;
    local_98 = 0x8166;
    local_4d8 = local_4f8;
    local_4b8 = local_4f8;
    local_498 = local_4f8;
    local_a0 = local_4f8;
    /* ST_CALLSITE[0059EE2E]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,7,&this_00->field_1B20,nullptr,local_520,0);
    if (this_00->field_1CDF != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1D23,this_00->field_1CDF,0xfffffffe,this_00->field_1CF7,
                 this_00->field_1CFB);
    }
    if (this_00->field_1D70 != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1DB4,this_00->field_1D70,0xfffffffe,this_00->field_1D88,
                 this_00->field_1D8C);
    }
    if (this_00->field_1E01 != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1E45,this_00->field_1E01,0xfffffffe,this_00->field_1E19,
                 this_00->field_1E1D);
    }
    local_d8c = this_00->field_1AE8;
    ppcVar9 = local_dac;
    for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppcVar9 = nullptr;
      ppcVar9 = ppcVar9 + 1;
    }
    local_dac[2] = this_00->array_00BC[0xc].field_01F3;
    local_d80 = this_00->field_0008;
    local_dac[0] = (ccFntTy *)0x1;
    local_dac[1] = (ccFntTy *)0x99;
    local_dac[3] = (ccFntTy *)0x1a8;
    local_dac[4] = (ccFntTy *)0x127;
    local_dac[5] = (ccFntTy *)0x156;
    local_dac[6] = (ccFntTy *)0x17;
    local_dac[7] = (ccFntTy *)0x20;
    local_d1c = 2;
    local_538 = 2;
    local_d7c = 2;
    local_d5c = 2;
    local_d78 = 0x68ff;
    local_d58 = 0x6988;
    local_534 = 0x6955;
    local_d18 = 0x63ff;
    local_d60 = local_d80;
    local_d20 = local_d80;
    local_53c = local_d80;
    /* ST_CALLSITE[0059EF8D]: CALL dword ptr [EAX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,local_dac,0);
    local_d8c = this_00->field_1AEC;
    local_dac[1] = (ccFntTy *)0x89;
    local_dac[4] = (ccFntTy *)0x154;
    local_dac[7] = (ccFntTy *)0x10;
    /* ST_CALLSITE[0059EFD1]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC8,nullptr,local_dac,0);
    this_00->field_1EC2 = 0;
    this_00->field_1EC6 = 0xffffffff;
    this_00->field_1ECA = 0;
    /* ST_CALLSITE[0059F00B]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    iVar5 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x230,0x17a,0xd3,0x19,0x6904,0x6989);
    this_00->field_1EB6 = iVar5;
    /* ST_CALLSITE[0059F036]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    iVar5 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,0,0x1a3,0x196,0x160,0x19,0x6905,0x698a);
    this_00->field_1EBA = iVar5;
    /* ST_CALLSITE[0059F062]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    iVar5 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x1fd,0x1b5,0xab,0x19,0x6903,0x698d);
    this_00->field_1B24 = iVar5;
    this_00->field_002D = 0x61;
    this_00->field_0035 = 0;
    this_00->field_0037 = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar7 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x7f0,0,iVar8,"%s",
                             "FSGSTy::JoinGameCtrls");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar8,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x7f0);
  return;
}

