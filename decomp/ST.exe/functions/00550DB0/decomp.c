
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
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  undefined4 unaff_ESI;
  uint *puVar10;
  void *unaff_EDI;
  uint uVar11;
  int *piVar12;
  bool bVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  UINT UVar20;
  undefined4 *puVar21;
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
  puVar10 = local_5e0;
  for (iVar9 = 0x54; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  piVar15 = local_490;
  for (iVar9 = 0xf6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar15 = 0;
    piVar15 = piVar15 + 1;
  }
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  puVar3 = (undefined4 *)Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (puVar3 == (undefined4 *)0x0) {
    uVar22 = 0x77;
    DAT_00802a44 = local_14;
    iVar9 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffa) + 0xde;
    UVar20 = 0x36c0;
    iVar19 = 0xb;
    iVar17 = 0xbf;
    uVar16 = 3;
    uVar14 = 0x40;
    pCVar4 = thunk_FUN_00571240(s_BKG_TRADECENTERW_007c8680,0);
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)this_00,pCVar4,uVar14,uVar16,iVar17,iVar19,UVar20,iVar9,uVar22);
    pcVar5 = (ccFntTy *)ccFntTy::operator(DAT_00806790,0x19d,DAT_00806790,s_MONEY_FONT_007c211c,0);
    uVar11 = 1;
    this_00->field_01DD = pcVar5;
    pcVar5->field_0058 = 1;
    pcVar5->field_005C = 0;
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c204c,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_01D1 = puVar6;
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_01D5 = puVar6;
    iVar9 = 1;
    uVar18 = 0xffffffff;
    puVar21 = puVar3;
    puVar23 = puVar3;
    pbVar7 = (byte *)thunk_FUN_00571240(s_TRADE_RATE_007c8670,0);
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pbVar7,uVar18,(byte)puVar3,iVar9,(int)puVar21,puVar23);
    local_5 = this_00->field_01D0;
    this_00->field_01D9 = puVar6;
    local_1c = this_00->field_005C;
    bVar8 = 0;
    local_10 = (DAT_0080874e != '\x03') + 0x3b;
    puVar10 = local_5e0 + 1;
    local_c = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 0x22 + this_00->field_003C;
    do {
      iVar17 = local_1c;
      bVar13 = bVar8 == local_5;
      puVar10[-1] = uVar11;
      *puVar10 = (uint)bVar13;
      puVar10[2] = local_c;
      puVar10[4] = 0x3a;
      iVar9 = DAT_00806734;
      if (iVar17 != 0) {
        iVar9 = this_00->field_0044;
      }
      bVar8 = bVar8 + 1;
      puVar10[3] = iVar9 + 0x17;
      iVar9 = local_10;
      puVar10[5] = 0x13;
      uVar11 = uVar11 + 1;
      local_c = local_c + iVar9;
      puVar10 = puVar10 + 0x1c;
    } while (bVar8 < 2);
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
    (**(code **)(*(int *)this_00->field_000C + 8))(5,&this_00->field_01C4,0,local_74,0);
    local_e8 = this_00->field_0008;
    iVar17 = 1;
    piVar15 = (int *)0x0;
    uVar14 = 0;
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
    pCVar4 = thunk_FUN_00571240(s_BUT_TBUP_007c22d8,0);
    pCVar4 = FUN_006f2c00(pCVar4,iVar9,uVar14);
    local_18 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar4,piVar15,iVar17);
    local_478 = *(undefined4 *)(local_18 + 2);
    local_474 = *(undefined4 *)(local_18 + 4);
    cMf32::RecMemFree((cMf32 *)DAT_00806790,(uint *)&local_18);
    iVar9 = this_00->field_005C;
    local_490[4] = this_00->field_003C + 0x69;
    iVar17 = DAT_00806734;
    if (iVar9 != 0) {
      iVar17 = this_00->field_0044;
    }
    local_424 = 2;
    local_490[5] = iVar17 + 0x46;
    local_428 = this_00->field_0008;
    local_420 = 0xc005;
    local_378 = 500;
    local_374 = 0x28;
    piVar15 = local_490 + 2;
    piVar12 = local_308;
    for (iVar17 = 0x5f; iVar17 != 0; iVar17 = iVar17 + -1) {
      *piVar12 = *piVar15;
      piVar15 = piVar15 + 1;
      piVar12 = piVar12 + 1;
    }
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
    (**(code **)(*(int *)this_00->field_000C + 8))(4,puVar3,0,local_490,0);
    puVar1 = &this_00->field_0x18;
    this_00->field_0028 = 0x28;
    *(undefined4 *)&this_00->field_0x2c = 0x186a1;
    FUN_006e6080(this_00,2,*puVar3,(undefined4 *)puVar1);
    this_00->field_0028 = 0x22;
    *(uint *)&this_00->field_0x2c =
         (uint)*(ushort *)(&this_00->field_0x1bc + (uint)(byte)this_00->field_01D0 * 2);
    FUN_006e6080(this_00,2,*puVar3,(undefined4 *)puVar1);
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 1;
    FUN_006e6080(this_00,2,*puVar3,(undefined4 *)puVar1);
    g_currentExceptionFrame = local_b8.previous;
    return;
  }
  g_currentExceptionFrame = local_b8.previous;
  iVar9 = ReportDebugMessage(s_E____titans_Andrey_tradecen_cpp_007c8624,0x53,0,(int)puVar3,
                             &DAT_007a4ccc,s_TradePanelTy__InitTradePanel_007c864c);
  if (iVar9 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException((int)puVar3,0,s_E____titans_Andrey_tradecen_cpp_007c8624,0x53);
  return;
}

