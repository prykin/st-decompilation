#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/tradecen.cpp

// 00550DB0 TradePanelTy::InitTradePanel
#line 1 "decomp/ST.exe/functions/00550DB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::InitTradePanel */

void __thiscall st::fn_00550DB0(TradePanelTy *this)

{
  undefined1 *puVar1;
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
  int iVar13;
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
  memset(local_5e0, 0, 0x150); /* compiler bulk-zero initialization */
  iVar8 = 0;
  memset(local_490, 0, 0x3d8); /* compiler bulk-zero initialization */
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  puVar3 = (undefined4 *)st::fn_0072D7F0(local_b8.jumpBuffer,0);
  this_00 = local_14;
  if (puVar3 == nullptr) {
    uVar21 = 0x77;
    g_tradePanel_00802A44 = local_14;
    iVar8 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffa) + 0xde;
    UVar18 = 0x36c0;
    iVar17 = 0xb;
    iVar15 = 0xbf;
    uVar14 = 3;
    iVar13 = 0x40;
    pCVar4 = st::fn_0040577C("BKG_TRADECENTERW",0);
    st::fn_00403800
              ((SpecPanelTy *)this_00,pCVar4,iVar13,uVar14,iVar15,iVar17,UVar18,iVar8,uVar21);
    pcVar5 = (ccFntTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806790,"MONEY_FONT",0);
    uVar10 = 1;
    this_00->field_01DD = pcVar5;
    pcVar5->field_0058 = 1;
    pcVar5->field_005C = 0;
    puVar6 = st::fn_00709AF0
                       (DAT_00806794,CASE_B,&DAT_007c204c,0xffffffff,0,1,0,nullptr);
    this_00->field_01D1 = puVar6;
    puVar6 = st::fn_00709AF0
                       (DAT_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,nullptr);
    this_00->field_01D5 = puVar6;
    iVar8 = 1;
    uVar16 = 0xffffffff;
    puVar19 = puVar3;
    puVar22 = puVar3;
    pCVar4 = st::fn_0040577C("TRADE_RATE",0);
    puVar6 = st::fn_00709AF0
                       (DAT_00806794,CASE_B,pCVar4,uVar16,(byte)puVar3,iVar8,(int)puVar19,puVar22);
    local_5 = this_00->field_01D0;
    this_00->field_01D9 = puVar6;
    local_1c = this_00->field_005C;
    bVar7 = 0;
    local_10 = (DAT_0080874e != '\x03') + 0x3b;
    puVar9 = local_5e0 + 1;
    local_c = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 0x22 + this_00->field_003C;
    do {
      iVar13 = local_1c;
      bVar12 = bVar7 == local_5;
      puVar9[-1] = uVar10;
      *puVar9 = (uint)bVar12;
      puVar9[2] = local_c;
      puVar9[4] = 0x3a;
      iVar8 = DAT_00806734;
      if (iVar13 != 0) {
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
              ((SystemClassTy *)this_00->field_000C,5,&this_00->field_01C4,nullptr,local_74,0);
    local_e8 = this_00->field_0008;
    iVar13 = 1;
    piVar20 = nullptr;
    uVar14 = 0;
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
    pCVar4 = st::fn_0040577C("BUT_TBUP",0);
    pCVar4 = st::fn_006F2C00(pCVar4,iVar8,uVar14);
    local_18 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar4,piVar20,iVar13);
    local_478 = *(undefined4 *)(local_18 + 2);
    local_474 = *(undefined4 *)(local_18 + 4);
    st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_18);
    iVar8 = this_00->field_005C;
    local_490[4] = this_00->field_003C + 0x69;
    iVar13 = DAT_00806734;
    if (iVar8 != 0) {
      iVar13 = this_00->field_0044;
    }
    local_424 = 2;
    local_490[5] = iVar13 + 0x46;
    local_428 = this_00->field_0008;
    local_420 = 0xc005;
    local_378 = 500;
    local_374 = 0x28;
    piVar20 = local_490 + 2;
    piVar11 = local_308;
    memmove(piVar11, piVar20, 0x17c); /* compiler REP MOVS byte copy */
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
              ((SystemClassTy *)this_00->field_000C,4,puVar3,nullptr,local_490,0);
    puVar1 = &this_00->field_0x18;
    this_00->field_0028 = 0x28;
    *(undefined4 *)&this_00->field_0x2c = 0x186a1;
    st::fn_006E6080(this_00,2,*puVar3,(undefined4 *)puVar1);
    this_00->field_0028 = 0x22;
    *(uint *)&this_00->field_0x2c = (uint)(ushort)(&this_00->field_01BC)[(byte)this_00->field_01D0];
    st::fn_006E6080(this_00,2,*puVar3,(undefined4 *)puVar1);
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 1;
    st::fn_006E6080(this_00,2,*puVar3,(undefined4 *)puVar1);
    g_currentExceptionFrame = local_b8.previous;
    return;
  }
  g_currentExceptionFrame = local_b8.previous;
  iVar8 = st::fn_006AD4D0("E:\\__titans\\Andrey\\tradecen.cpp",0x53,0,(int)puVar3,
                             "%s","TradePanelTy::InitTradePanel");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40((int)puVar3,0,"E:\\__titans\\Andrey\\tradecen.cpp",0x53);
  return;
}

// 005512F0 TradePanelTy::DoneTradePanel
#line 1 "decomp/ST.exe/functions/005512F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::DoneTradePanel */

void __thiscall st::fn_005512F0(TradePanelTy *this)

{
  TradePanelTy *pTVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  TradePanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pTVar2 = local_8;
  if (errorCode == 0) {
    if (local_8->field_01C0 != 0) {
      st::fn_006E56B0(local_8->field_000C,local_8->field_01C0);
    }
    pTVar2->field_01C0 = 0;
    if (pTVar2->field_01C4 != 0) {
      st::fn_006E56B0(pTVar2->field_000C,pTVar2->field_01C4);
    }
    pTVar2->field_01C4 = 0;
    if (pTVar2->field_01C8 != 0) {
      st::fn_006E56B0(pTVar2->field_000C,pTVar2->field_01C8);
    }
    pTVar2->field_01C8 = 0;
    if (pTVar2->field_01CC != 0) {
      st::fn_006E56B0(pTVar2->field_000C,pTVar2->field_01CC);
    }
    pTVar2->field_01CC = 0;
    if (pTVar2->field_01DD != nullptr) {
      st::fn_00710560((uint *)pTVar2->field_01DD);
      pTVar2->field_01DD = nullptr;
    }
    pTVar2->field_01D9 = nullptr;
    pTVar2->field_01D5 = nullptr;
    pTVar2->field_01D1 = nullptr;
    g_tradePanel_00802A44 = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\tradecen.cpp",0x67,0,errorCode,
                             "%s","TradePanelTy::DoneTradePanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\tradecen.cpp",0x67);
  return;
}

// 00551460 TradePanelTy::SetModeControls
#line 1 "decomp/ST.exe/functions/00551460/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::SetModeControls */

void __thiscall st::fn_00551460(TradePanelTy *this,char param_1)

{
  AnonPointee_TradePanelTy_0000 *pAVar1;
  TradePanelTy *this_00;
  int errorCode;
  LPSTR pCVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  InternalExceptionFrame local_4c;
  TradePanelTy *local_8;

  if (this->field_01BB != param_1) {
    this->field_01BB = param_1;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (errorCode == 0) {
      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)local_8->field_0068,0,0xa6,0x31,
                 local_8->field_0185,0,0xa6,0x31,0x77,0x39);
      if (this_00->field_01C8 != 0) {
        st::fn_006E56B0(this_00->field_000C,this_00->field_01C8);
      }
      this_00->field_01C8 = 0;
      if (this_00->field_01CC != 0) {
        st::fn_006E56B0(this_00->field_000C,this_00->field_01CC);
      }
      pAVar1 = this_00->field_0000;
      uVar12 = 1;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0xb200;
      uVar6 = 0xb1ff;
      this_00->field_01CC = 0;
      if (this_00->field_01BB == '\0') {
        pCVar3 = st::fn_0040577C("BUT_MEDIUM",0);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar6 = (*(code *)pAVar1->field_0004)
                          (0,1,0xac,0x57,0,1,1,pCVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
        uVar5 = 1;
        pAVar1 = this_00->field_0000;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0xb202;
        uVar7 = 0xb201;
        this_00->field_01C8 = uVar6;
        pCVar3 = st::fn_0040577C("BUT_MEDIUM",0);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar6 = (*(code *)pAVar1->field_0004)
                          (0,1,0xe5,0x57,0,1,1,pCVar3,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar5);
        this_00->field_01CC = uVar6;
      }
      else {
        pCVar3 = st::fn_0040577C("BUT_MEDIUM",0);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar6 = (*(code *)pAVar1->field_0004)(0,1,0xca,0x57,0,1,1,pCVar3);
        this_00->field_01C8 = uVar6;
      }
      st::fn_00404F9D(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\tradecen.cpp",0x81,0,errorCode,
                               "%s","TradePanelTy::SetModeControls");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\tradecen.cpp",0x81);
  }
  return;
}

// 00551690 TradePanelTy::ShiftControls
#line 1 "decomp/ST.exe/functions/00551690/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::ShiftControls */

void __thiscall st::fn_00551690(TradePanelTy *this,int param_1)

{
  TradePanelTy *this_00;
  short sVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  TradePanelTy *local_8;

  if (param_1 != this->field_005C) {
    local_8 = this;
    st::fn_00404D36((SpecPanelTy *)this,param_1);
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    *(short *)&this->field_0x2e = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (errorCode == 0) {
      if (local_8->field_01C4 != 0) {
        st::fn_006E6080(local_8,2,local_8->field_01C4,(undefined4 *)&local_8->field_0x18);
      }
      if (this_00->field_01C0 != 0) {
        st::fn_006E6080(this_00,2,this_00->field_01C0,(undefined4 *)&this_00->field_0x18);
      }
      if (this_00->field_01C8 != 0) {
        st::fn_006E6080(this_00,2,this_00->field_01C8,(undefined4 *)&this_00->field_0x18);
      }
      if (this_00->field_01CC != 0) {
        st::fn_006E6080(this_00,2,this_00->field_01CC,(undefined4 *)&this_00->field_0x18);
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\tradecen.cpp",0x91,0,errorCode,
                               "%s","TradePanelTy::ShiftControls");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\tradecen.cpp",0x91);
  }
  return;
}

// 00551BA0 TradePanelTy::PaintPanel
#line 1 "decomp/ST.exe/functions/00551BA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::PaintPanel */

void __thiscall st::fn_00551BA0(TradePanelTy *this)

{
  TradePanelTy *this_00;
  int iVar2;
  uint uVar3;
  uint *resourceString;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  InternalExceptionFrame local_54;
  TradePanelTy *local_10;
  int local_c;
  int local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar2 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar2 == 0) {
    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)local_10->field_0068,0,0x1f,0x31,
               local_10->field_0185,0,0x1f,0x31,0x44,0x39);
    bVar7 = 0x3a;
    iVar2 = 0;
    uVar3 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01D1,
                         (uint)(byte)this_00->field_01D0);
    st::fn_006B5440((ushort *)this_00->field_0068,0,0x22,0x38,uVar3,iVar2,bVar7);
    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0xa6,0x31,this_00->field_0185,
               0,0xa6,0x31,0x77,0x26);
    if (this_00->field_01BB == '\0') {
      bVar7 = 0x3a;
      iVar2 = 0;
      uVar3 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01D5,
                           (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 4);
      st::fn_006B5440((ushort *)this_00->field_0068,0,0xd9,0x34,uVar3,iVar2,bVar7);
      if (DAT_0080874e != '\x03') {
        iVar5 = 0;
        iVar2 = 0xb5;
        local_8 = 0xa9;
        local_c = 2;
        do {
          if (*(ushort *)(&this_00->field_0x1ab + (iVar5 + (uint)(byte)this_00->field_01D0 * 2) * 4)
              != 0) {
            pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01D9,
                                          *(ushort *)
                                           (&this_00->field_0x1ab +
                                           (iVar5 + (uint)(byte)this_00->field_01D0 * 2) * 4) - 1);
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,local_8,0x39,'\x01',pbVar4);
          }
          st::external_00000080(&this_00->field_018D,"%d:1",
                    (uint)*(ushort *)
                           (&this_00->field_0x1ad +
                           (iVar5 + (uint)(byte)this_00->field_01D0 * 2) * 4));
          st::fn_00710A90(this_00->field_0189,this_00->field_0068,0,iVar2,0x36,0x22,0xc);
          st::fn_007119C0(this_00->field_0189,(uint *)&this_00->field_018D,-1,-1,1);
          iVar5 = iVar5 + 1;
          local_8 = local_8 + 0x68;
          iVar2 = iVar2 + 0x39;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
    }
    else {
      st::fn_00710A90(this_00->field_0189,this_00->field_0068,0,0xa6,0x31,0x77,0x26);
      iVar8 = -1;
      iVar6 = -1;
      uVar3 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5;
      iVar5 = -1;
      iVar2 = -2;
      resourceString = (uint *)st::fn_006B0140(0x4e5b,g_module_00807618);
      st::fn_00711B70(this_00->field_0189,resourceString,iVar2,iVar5,uVar3,iVar6,iVar8);
    }
    st::fn_004048F4(this_00);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar5 = st::fn_006AD4D0("E:\\__titans\\Andrey\\tradecen.cpp",0xf5,0,iVar2,"%s",
                             "TradePanelTy::PaintPanel");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Andrey\\tradecen.cpp",0xf5);
  return;
}

// 00551EC0 TradePanelTy::PaintIndicators
#line 1 "decomp/ST.exe/functions/00551EC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::PaintIndicators */

void __thiscall st::fn_00551EC0(TradePanelTy *this)

{
  undefined1 *resourceString;
  ushort uVar1;
  TradePanelTy *pTVar3;
  int iVar4;
  LPSTR text;
  ushort *puVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  InternalExceptionFrame local_54;
  TradePanelTy *local_10;
  int local_c;
  int local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar4 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pTVar3 = local_10;
  if (iVar4 == 0) {
    resourceString = &local_10->field_018D;
    st::external_00000080(resourceString,"%6d",
              (uint)(ushort)(&local_10->field_01BC)[(byte)local_10->field_01D0]);
    st::fn_00710A90(pTVar3->field_01DD,pTVar3->field_0068,0,0x67,0x36,0x23,0xc);
    st::fn_007119C0(pTVar3->field_01DD,(uint *)resourceString,-1,-1,
                   -(uint)(pTVar3->field_01D0 != '\0') & 2);
    if (pTVar3->field_01BB == '\0') {
      local_8 = 0;
      iVar4 = 0xb4;
      local_c = 2;
      do {
        puVar10 = nullptr;
        iVar9 = 0;
        iVar8 = 1;
        bVar7 = 0;
        uVar6 = 0xffffffff;
        text = st::fn_0040577C("BKG_AMOUNTRC",0);
        puVar5 = st::fn_00709AF0
                           (DAT_00806794,CASE_1,text,uVar6,bVar7,iVar8,iVar9,puVar10);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pTVar3->field_0068,iVar4 + -3,0x45,'\x01',
               (byte *)puVar5);
        bVar7 = pTVar3->field_01D0;
        uVar1 = *(ushort *)(&pTVar3->field_0x1ad + (local_8 + (uint)bVar7 * 2) * 4);
        if (uVar1 == 0) {
          iVar8 = 0;
        }
        else if ((DAT_0080874e == '\x03') && (bVar7 == 0)) {
          iVar8 = (uint)(ushort)pTVar3->field_01BC * (uint)uVar1;
        }
        else {
          iVar8 = (int)((ulonglong)(ushort)(&pTVar3->field_01BC)[bVar7] /
                       (ulonglong)(longlong)(int)(uint)uVar1);
        }
        st::external_00000080(resourceString,"%6d",iVar8);
        st::fn_00710A90(pTVar3->field_01DD,pTVar3->field_0068,0,iVar4,0x48,0x23,0xc);
        st::fn_007119C0(pTVar3->field_01DD,(uint *)resourceString,-1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5);
        local_8 = local_8 + 1;
        iVar4 = iVar4 + 0x39;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar8 = st::fn_006AD4D0("E:\\__titans\\Andrey\\tradecen.cpp",0x111,0,iVar4,"%s",
                             "TradePanelTy::PaintIndicators");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\tradecen.cpp",0x111);
  return;
}

// 005521B0 TradePanelTy::Update
#line 1 "decomp/ST.exe/functions/005521B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::Update */

void __thiscall st::fn_005521B0(TradePanelTy *this)

{
  TradePanelTy *this_00;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  TradePanelTy *local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    local_18 = *(undefined4 *)&local_8->field_0x1ab;
    local_14 = local_8->field_01AF;
    local_10 = local_8->field_01B3;
    local_c = local_8->field_01B7;
    st::fn_004035BC
              (g_allPlayers_007FA174,10,(AnonShape_0043BEB0_1C00EC12 *)&local_8->field_0x1ab);
    st::fn_00404F9D(this_00);
    st::fn_0040391D(this_00);
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\Andrey\\tradecen.cpp",300,0,errorCode,
                             "%s","TradePanelTy::Update");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\tradecen.cpp",300);
  return;
}

// 005522A0 TradePanelTy::GetMessage
#line 1 "decomp/ST.exe/functions/005522A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005522A0; family_names=TradePanelTy::GetMessage; ret4=10;
   direct_offsets={10:3,14:4,18:1,1c:0} */

int __thiscall st::fn_005522A0(TradePanelTy *this,STMessage *message)

{
  undefined2 uVar1;
  STMessageId SVar2;
  TradePanelTy *this_00;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  ushort *puVar6;
  AnonPointee_TradePanelTy_0000 *pAVar7;
  int iVar8;
  uint uVar9;
  char *text;
  byte bVar10;
  int iVar11;
  code *pcVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  InternalExceptionFrame local_68;
  undefined1 local_24;
  short sStack_23;
  uint uStack_21;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  char local_18;
  short sStack_17;
  uint uStack_15;
  undefined1 uStack_11;
  undefined1 uStack_10;
  TradePanelTy *local_c;
  int local_8;

  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Andrey\\tradecen.cpp",0x175,0,iVar3,
                               "%s","TradePanelTy::GetMessage");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\tradecen.cpp",0x175);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00401401((SpecPanelTy *)local_c,message);
  SVar2 = message->id;
  if (SVar2 < 0xb203) {
    if (SVar2 == MESS_SHARED_B202) {
      pAVar7 = this_00->field_0000;
      iVar3 = 0x2754;
LAB_00552481:
      uVar16 = 1;
      uVar14 = 0;
      pCVar4 = st::fn_0040577C("BUT_MEDIUM",0);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pAVar7->field_0010)(message,pCVar4,iVar3,uVar14,uVar16);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (SVar2 < MESS_BEHPANELTY_B200) {
      if (SVar2 == MESS_SHARED_B1FF) {
        uStack_11 = 0;
        local_18 = (this_00->field_01BB == '\0') + '\x01';
        uStack_10 = 0;
        bVar10 = this_00->field_01D0;
        sStack_17 = (bVar10 != 0) + 0xdd;
        uStack_15 = (uint)(ushort)(&this_00->field_01BC)[bVar10];
        if (this_00->field_01BB == '\0') {
          uStack_11 = (undefined1)*(undefined2 *)(&this_00->field_0x1ad + (uint)bVar10 * 8);
          uStack_10 = (undefined1)
                      ((ushort)*(undefined2 *)(&this_00->field_0x1ad + (uint)bVar10 * 8) >> 8);
        }
        st::fn_00403C33((undefined4 *)0x20,(uint *)&local_18,0,0xffffffff);
        if (this_00->field_01BB != '\0') {
          this_00->field_0028 = 0xbfff;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_00->field_0000->field_0000)(&this_00->field_0x18);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
      else {
        if (SVar2 == MESS_ID_CREATE) {
          st::fn_00405678(this_00);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
        if (SVar2 == MESS_SHARED_0003) {
          st::fn_00405538(this_00);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
    }
    else {
      if (SVar2 == MESS_BEHPANELTY_B200) {
        pAVar7 = this_00->field_0000;
        iVar3 = (-(uint)(this_00->field_01BB != '\0') & 0xfffffffe) + 0x2753;
        goto LAB_00552481;
      }
      if (SVar2 == MESS_SHARED_B201) {
        bVar10 = this_00->field_01D0;
        sStack_23 = (bVar10 != 0) + 0xdd;
        local_24 = 3;
        uStack_21 = (uint)(ushort)(&this_00->field_01BC)[bVar10];
        uVar1 = *(undefined2 *)((int)&this_00->field_01AF + (uint)bVar10 * 8 + 2);
        uStack_1d = (undefined1)uVar1;
        uStack_1c = (undefined1)((ushort)uVar1 >> 8);
        st::fn_00403C33((undefined4 *)0x20,(uint *)&local_24,0,0xffffffff);
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
    }
  }
  else if (SVar2 < 0xb20d) {
    if (SVar2 == MESS_TRADEPANELTY_B20C) {
      (&this_00->field_01BC)[(byte)this_00->field_01D0] = (message->arg0).words.low;
      st::fn_004048F4(this_00);
      st::fn_0040578B(this_00);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (SVar2 == MESS_TRADEPANELTY_B20A) {
      this_00->field_01D0 = *(char *)(message->arg0).ptr + -1;
      st::fn_00404F9D(this_00);
      st::fn_0040391D(this_00);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (SVar2 == MESS_TRADEPANELTY_B20B) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_8 = *(int *)((message->arg0).u32 + 0xc) - this_00->field_003C;
      iVar3 = DAT_00806734;
      if (this_00->field_005C != 0) {
        iVar3 = this_00->field_0044;
      }
      puVar15 = nullptr;
      iVar13 = 0;
      iVar11 = 1;
      bVar10 = 0;
      uVar9 = 0xffffffff;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = *(int *)((message->arg0).u32 + 0x10) - iVar3;
      iVar5 = st::fn_00401BA4((AnonShape_0052A7B0_DD603BF4 *)message);
      iVar8 = 2;
      pCVar4 = st::fn_0040577C("BUT_RCTTYPE",0);
      pCVar4 = st::fn_006F2C00(pCVar4,iVar8,iVar5);
      puVar6 = st::fn_00709AF0
                         (DAT_00806794,CASE_1,pCVar4,uVar9,bVar10,iVar11,iVar13,puVar15);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,local_8,iVar3,'\x01',
             (byte *)puVar6);
      if (*(int *)((message->arg0).u32 + 4) == 3) {
        puVar15 = nullptr;
        iVar8 = 0;
        iVar5 = 1;
        bVar10 = 0;
        uVar9 = 0xffffffff;
        pCVar4 = st::fn_0040577C("BUT_RCTFTYPE",0);
        puVar6 = st::fn_00709AF0
                           (DAT_00806794,CASE_6,pCVar4,uVar9,bVar10,iVar5,iVar8,puVar15);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,local_8,iVar3,'\x06',
               (byte *)puVar6);
      }
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
  }
  else {
    if (SVar2 == MESS_SHARED_C005) {
      pAVar7 = this_00->field_0000;
      text = "BUT_TBUP";
    }
    else {
      if (SVar2 != MESS_OPTPANELTY_C006) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      pAVar7 = this_00->field_0000;
      text = "BUT_TBDN";
    }
    uVar16 = 1;
    uVar14 = 0;
    pcVar12 = thunk_FUN_00529fe0;
    pCVar4 = st::fn_0040577C(text,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)pAVar7->field_0008)(message,1,pCVar4,pcVar12,uVar14,uVar16);
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}

