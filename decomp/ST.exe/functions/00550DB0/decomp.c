#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::InitTradePanel */

void __thiscall TradePanelTy::InitTradePanel(TradePanelTy *this)

{
  undefined1 *puVar1;
  TradePanelTy *this_00;
  undefined4 *puVar3;
  LPSTR pCVar4;
  ccFntTy *pcVar5;
  ushort *puVar6;
  int iVar8;
  byte bVar7;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int *piVar12;
  bool bVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  UINT UVar19;
  undefined4 *puVar20;
  int *piVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  uint local_5e0 [84];
  int local_490 [6];
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_30c;
  int local_308 [26];
  undefined4 local_2a0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  InternalExceptionFrame local_b8;
  undefined4 local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  ushort *local_18;
  TradePanelTy *local_14;
  int local_10;
  uint local_c;
  byte local_5;

  puVar3 = local_74;
  local_14 = this;
  for (iVar9 = 0x16; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  memset(local_5e0, 0, 0x150); /* compiler bulk-zero initialization */
  iVar9 = 0;
  memset(local_490, 0, 0x3d8); /* compiler bulk-zero initialization */
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  puVar3 = (undefined4 *)Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0);
  this_00 = local_14;
  if (puVar3 == nullptr) {
    uVar22 = 0x77;
    g_tradePanel_00802A44 = local_14;
    iVar9 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffa) + 0xde;
    UVar19 = 0x36c0;
    iVar18 = 0xb;
    iVar16 = 0xbf;
    uVar15 = 3;
    iVar14 = 0x40;
    pCVar4 = thunk_FUN_00571240("BKG_TRADECENTERW",0);
    /* ST_CALLSITE[00550E56]: CALL 0x00403800; direct=00403800 SpecPanelTy::InitPanel */
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)this_00,pCVar4,iVar14,uVar15,iVar16,iVar18,UVar19,iVar9,uVar22);
    /* ST_CALLSITE[00550E6D]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new */
    pcVar5 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806790,"MONEY_FONT",0);
    uVar11 = 1;
    this_00->field_01DD = pcVar5;
    pcVar5->field_0058 = 1;
    pcVar5->field_005C = 0;
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,&DAT_007c204c,0xffffffff,0,1,0,nullptr);
    this_00->field_01D1 = puVar6;
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,nullptr);
    this_00->field_01D5 = puVar6;
    iVar9 = 1;
    uVar17 = 0xffffffff;
    puVar20 = puVar3;
    puVar23 = puVar3;
    pCVar4 = thunk_FUN_00571240("TRADE_RATE",0);
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,pCVar4,uVar17,(byte)puVar3,iVar9,(int)puVar20,puVar23);
    local_5 = this_00->field_01D0;
    this_00->field_01D9 = puVar6;
    local_1c = this_00->field_005C;
    bVar7 = 0;
    local_10 = (DAT_0080874e != '\x03') + 0x3b;
    puVar10 = local_5e0 + 1;
    local_c = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 0x22 + this_00->field_003C;
    do {
      iVar14 = local_1c;
      bVar13 = bVar7 == local_5;
      puVar10[-1] = uVar11;
      *puVar10 = (uint)bVar13;
      puVar10[2] = local_c;
      puVar10[4] = 0x3a;
      iVar9 = DAT_00806734;
      if (iVar14 != 0) {
        iVar9 = this_00->field_0044;
      }
      bVar7 = bVar7 + 1;
      puVar10[3] = iVar9 + 0x17;
      iVar9 = local_10;
      puVar10[5] = 0x13;
      uVar11 = uVar11 + 1;
      local_c = local_c + iVar9;
      puVar10 = puVar10 + 0x1c;
    } while (bVar7 < 2);
    local_64 = this_00->field_0008;
    local_2c = local_5e0;
    local_74[0] = 1;
    local_74[1] = 1;
    local_28 = 1;
    local_60 = 2;
    local_5c = 0xb20a;
    local_40 = 2;
    local_3c = 0xb20b;
    local_24 = 1;
    local_20 = 1;
    local_44 = local_64;
    /* ST_CALLSITE[00550FCC]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,5,&this_00->field_01C4,nullptr,local_74,0);
    local_e8 = this_00->field_0008;
    iVar14 = 1;
    piVar21 = nullptr;
    uVar15 = 0;
    iVar9 = 1;
    local_490[0] = 0;
    local_e4 = 2;
    local_e0 = 0xb20c;
    local_30c = 2;
    local_490[1] = 2;
    local_37c = 1;
    local_380 = 1;
    local_490[2] = 0;
    local_490[3] = 2;
    pCVar4 = thunk_FUN_00571240("BUT_TBUP",0);
    pCVar4 = FUN_006f2c00(pCVar4,iVar9,uVar15);
    local_18 = cMf32::RecGet(g_cMf32_00806790,1,pCVar4,piVar21,iVar14);
    local_478 = *(undefined4 *)(local_18 + 2);
    local_474 = *(undefined4 *)(local_18 + 4);
    cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_18);
    iVar9 = this_00->field_005C;
    local_490[4] = this_00->field_003C + 0x69;
    iVar14 = DAT_00806734;
    if (iVar9 != 0) {
      iVar14 = this_00->field_0044;
    }
    local_424 = 2;
    local_490[5] = iVar14 + 0x46;
    local_428 = this_00->field_0008;
    local_420 = 0xc005;
    local_378 = 500;
    local_374 = 0x28;
    piVar21 = local_490 + 2;
    piVar12 = local_308;
    memmove(piVar12, piVar21, 0x17c); /* compiler REP MOVS byte copy */
    local_308[3] = DAT_00806734;
    if (iVar9 != 0) {
      local_308[3] = this_00->field_0044;
    }
    local_308[3] = local_308[3] + 0x57;
    puVar3 = &this_00->field_01C0;
    local_2a0 = 0xc006;
    local_c4 = 1;
    local_c0 = 0x14;
    local_bc = 10;
    /* ST_CALLSITE[0055111A]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,4,puVar3,nullptr,local_490,0);
    puVar1 = &this_00->field_0x18;
    this_00->field_0028 = 0x28;
    *(undefined4 *)&this_00->field_0x2c = 0x186a1;
    FUN_006e6080(this_00,2,*puVar3,(undefined4 *)puVar1);
    this_00->field_0028 = 0x22;
    *(uint *)&this_00->field_0x2c = (uint)(ushort)(&this_00->field_01BC)[(byte)this_00->field_01D0];
    FUN_006e6080(this_00,2,*puVar3,(undefined4 *)puVar1);
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 1;
    FUN_006e6080(this_00,2,*puVar3,(undefined4 *)puVar1);
    g_currentExceptionFrame = local_b8.previous;
    return;
  }
  g_currentExceptionFrame = local_b8.previous;
  iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\tradecen.cpp",0x53,0,(int)puVar3,
                             "%s","TradePanelTy::InitTradePanel");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException((int)puVar3,0,"E:\\__titans\\Andrey\\tradecen.cpp",0x53);
  return;
}

