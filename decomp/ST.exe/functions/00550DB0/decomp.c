#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::InitTradePanel */

void __thiscall TradePanelTy::InitTradePanel(TradePanelTy *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  TradePanelTy *this_00;
  undefined4 *puVar3;
  LPSTR pCVar4;
  ccFntTy *pcVar5;
  ushort *puVar6;
  byte bVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  UINT UVar18;
  undefined4 *puVar19;
  int *piVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
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
  for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar9 = local_5e0;
  for (iVar8 = 0x54; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  piVar20 = local_490;
  for (iVar8 = 0xf6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar20 = 0;
    piVar20 = piVar20 + 1;
  }
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  puVar3 = (undefined4 *)Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0);
  this_00 = local_14;
  if (puVar3 == (undefined4 *)0x0) {
    uVar21 = 0x77;
    DAT_00802a44 = local_14;
    iVar8 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffa) + 0xde;
    UVar18 = 0x36c0;
    iVar17 = 0xb;
    iVar15 = 0xbf;
    uVar14 = 3;
    uVar13 = 0x40;
    pCVar4 = thunk_FUN_00571240("BKG_TRADECENTERW",0);
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)this_00,pCVar4,uVar13,uVar14,iVar15,iVar17,UVar18,iVar8,uVar21);
    pcVar5 = (ccFntTy *)
             ccFntTy::operator(DAT_00806790,0x19d,(cMf32 *)DAT_00806790,"MONEY_FONT",0);
    uVar10 = 1;
    this_00->field_01DD = pcVar5;
    pcVar5->field_0058 = 1;
    pcVar5->field_005C = 0;
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c204c,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_01D1 = puVar6;
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_01D5 = puVar6;
    iVar8 = 1;
    uVar16 = 0xffffffff;
    puVar19 = puVar3;
    puVar22 = puVar3;
    pCVar4 = thunk_FUN_00571240("TRADE_RATE",0);
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar4,uVar16,(byte)puVar3,iVar8,(int)puVar19,puVar22);
    local_5 = this_00->field_01D0;
    this_00->field_01D9 = puVar6;
    local_1c = this_00->field_005C;
    bVar7 = 0;
    local_10 = (DAT_0080874e != '\x03') + 0x3b;
    puVar9 = local_5e0 + 1;
    local_c = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 0x22 + this_00->field_003C;
    do {
      iVar15 = local_1c;
      bVar12 = bVar7 == local_5;
      puVar9[-1] = uVar10;
      *puVar9 = (uint)bVar12;
      puVar9[2] = local_c;
      puVar9[4] = 0x3a;
      iVar8 = DAT_00806734;
      if (iVar15 != 0) {
        iVar8 = this_00->field_0044;
      }
      bVar7 = bVar7 + 1;
      puVar9[3] = iVar8 + 0x17;
      iVar8 = local_10;
      puVar9[5] = 0x13;
      uVar10 = uVar10 + 1;
      local_c = local_c + iVar8;
      puVar9 = puVar9 + 0x1c;
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,5,&this_00->field_01C4,(int *)0x0,local_74,0);
    local_e8 = this_00->field_0008;
    iVar15 = 1;
    piVar20 = (int *)0x0;
    uVar13 = 0;
    iVar8 = 1;
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
    pCVar4 = FUN_006f2c00(pCVar4,iVar8,uVar13);
    local_18 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar4,piVar20,iVar15);
    local_478 = *(undefined4 *)(local_18 + 2);
    local_474 = *(undefined4 *)(local_18 + 4);
    cMf32::RecMemFree((cMf32 *)DAT_00806790,(uint *)&local_18);
    iVar8 = this_00->field_005C;
    local_490[4] = this_00->field_003C + 0x69;
    iVar15 = DAT_00806734;
    if (iVar8 != 0) {
      iVar15 = this_00->field_0044;
    }
    local_424 = 2;
    local_490[5] = iVar15 + 0x46;
    local_428 = this_00->field_0008;
    local_420 = 0xc005;
    local_378 = 500;
    local_374 = 0x28;
    piVar20 = local_490 + 2;
    piVar11 = local_308;
    for (iVar15 = 0x5f; iVar15 != 0; iVar15 = iVar15 + -1) {
      *piVar11 = *piVar20;
      piVar20 = piVar20 + 1;
      piVar11 = piVar11 + 1;
    }
    local_308[3] = DAT_00806734;
    if (iVar8 != 0) {
      local_308[3] = this_00->field_0044;
    }
    local_308[3] = local_308[3] + 0x57;
    puVar3 = &this_00->field_01C0;
    local_2a0 = 0xc006;
    local_c4 = 1;
    local_c0 = 0x14;
    local_bc = 10;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,4,puVar3,(int *)0x0,local_490,0);
    puVar1 = &this_00->field_0x18;
    this_00->field_0028 = 0x28;
    *(undefined4 *)&this_00->field_0x2c = 0x186a1;
    FUN_006e6080(this_00,2,*puVar3,(undefined4 *)puVar1);
    this_00->field_0028 = 0x22;
    *(uint *)&this_00->field_0x2c =
         (uint)*(ushort *)(&this_00->field_0x1bc + (uint)this_00->field_01D0 * 2);
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

