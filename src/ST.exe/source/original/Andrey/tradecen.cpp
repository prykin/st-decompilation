#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/tradecen.cpp

// 00550DB0 TradePanelTy::InitTradePanel
#line 4 "decomp/ST.exe/functions/00550DB0/decomp.c"
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
  puVar3 = (undefined4 *)st::fn_0072D7F0(local_b8.jumpBuffer,0);
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
    pCVar4 = st::fn_0040577C(st::mutable_c_string("BKG_TRADECENTERW"),0);
    /* ST_CALLSITE[00550E56]: CALL 0x00403800; direct=00403800 SpecPanelTy::InitPanel */
    st::fn_00403800
              ((SpecPanelTy *)this_00,pCVar4,iVar14,uVar15,iVar16,iVar18,UVar19,iVar9,uVar22);
    /* ST_CALLSITE[00550E6D]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new */
    pcVar5 = (ccFntTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806790,st::mutable_c_string("MONEY_FONT"),0);
    uVar11 = 1;
    this_00->field_01DD = pcVar5;
    pcVar5->field_0058 = 1;
    pcVar5->field_005C = 0;
    puVar6 = st::fn_00709AF0
                       (PTR_00806794,CASE_B,st::pointer_boundary_cast<char *>(&DAT_007c204c),0xffffffff,0,1,0,nullptr);
    this_00->field_01D1 = puVar6;
    puVar6 = st::fn_00709AF0
                       (PTR_00806794,CASE_B,st::pointer_boundary_cast<char *>(&DAT_007c2048),0xffffffff,0,1,0,nullptr);
    this_00->field_01D5 = puVar6;
    iVar9 = 1;
    uVar17 = 0xffffffff;
    puVar20 = puVar3;
    puVar23 = puVar3;
    pCVar4 = st::fn_0040577C(st::mutable_c_string("TRADE_RATE"),0);
    puVar6 = st::fn_00709AF0
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
              ((SystemClassTy *)this_00->field_000C,5,&this_00->field_01C4,nullptr,st::machine_word_boundary_cast<undefined4>(local_74),0);
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
    pCVar4 = st::fn_0040577C(st::mutable_c_string("BUT_TBUP"),0);
    pCVar4 = st::fn_006F2C00(pCVar4,iVar9,uVar15);
    local_18 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar4,piVar21,iVar14);
    local_478 = *(undefined4 *)(local_18 + 2);
    local_474 = *(undefined4 *)(local_18 + 4);
    st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_18);
    iVar9 = this_00->field_005C;
    local_490[4] = st::machine_word_boundary_cast<int>(this_00->field_003C + 0x69);
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
    local_308[3] = st::machine_word_boundary_cast<int>(local_308[3] + 0x57);
    puVar3 = &this_00->field_01C0;
    local_2a0 = 0xc006;
    local_c4 = 1;
    local_c0 = 0x14;
    local_bc = 10;
    /* ST_CALLSITE[0055111A]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,4,puVar3,nullptr,st::machine_word_boundary_cast<undefined4>(local_490),0);
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
  iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),0x53,0,(int)puVar3,
                             st::mutable_c_string("%s"),"TradePanelTy::InitTradePanel");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40((int)puVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),0x53);
  return;
}

// 005512F0 TradePanelTy::DoneTradePanel
#line 4 "decomp/ST.exe/functions/005512F0/decomp.c"
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
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),0x67,0,errorCode,
                             st::mutable_c_string("%s"),"TradePanelTy::DoneTradePanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),0x67);
  return;
}

// 00551460 TradePanelTy::SetModeControls
#line 4 "decomp/ST.exe/functions/00551460/decomp.c"
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
        pCVar3 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
        /* ST_CALLSITE[00551577]: CALL dword ptr [EDI + 0x4] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
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
        pCVar3 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
        /* ST_CALLSITE[005515B9]: CALL dword ptr [EDI + 0x4] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        uVar6 = (*(code *)pAVar1->field_0004)
                          (0,1,0xe5,0x57,0,1,1,pCVar3,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar5);
        this_00->field_01CC = uVar6;
      }
      else {
        pCVar3 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
        /* ST_CALLSITE[00551550]: CALL dword ptr [EDI + 0x4] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        uVar6 = (*(code *)pAVar1->field_0004)(0,1,0xca,0x57,0,1,1,pCVar3);
        this_00->field_01C8 = uVar6;
      }
      /* ST_CALLSITE[005515C4]: CALL 0x00404f9d; direct=00404F9D TradePanelTy::sub_00551B10 */
      st::fn_00404F9D(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),0x81,0,errorCode,
                               st::mutable_c_string("%s"),"TradePanelTy::SetModeControls");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),0x81);
  }
  return;
}

// 00551690 TradePanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/00551690/decomp.c"
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
    /* ST_CALLSITE[005516AC]: CALL 0x00404d36; direct=00404D36 SpecPanelTy::ShiftControls */
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
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),0x91,0,errorCode,
                               st::mutable_c_string("%s"),"TradePanelTy::ShiftControls");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),0x91);
  }
  return;
}

// 00551BA0 TradePanelTy::PaintPanel
#line 4 "decomp/ST.exe/functions/00551BA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::PaintPanel */

void __thiscall st::fn_00551BA0(TradePanelTy *this)

{
  TradePanelTy *this_00;
  int iVar2;
  BITMAPINFO *pBVar2;
  char *resourceString;
  int iVar5;
  uint uVar3;
  int iVar4;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
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
    bVar8 = 0x3a;
    iVar6 = 0;
    pBVar2 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01D1,
                          (uint)(byte)this_00->field_01D0);
    st::fn_006B5440((ushort *)this_00->field_0068,0,0x22,0x38,pBVar2,iVar6,bVar8);
    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0xa6,0x31,this_00->field_0185,
               0,0xa6,0x31,0x77,0x26);
    if (this_00->field_01BB == '\0') {
      bVar8 = 0x3a;
      iVar6 = 0;
      pBVar2 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01D5,
                            (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 4);
      st::fn_006B5440((ushort *)this_00->field_0068,0,0xd9,0x34,pBVar2,iVar6,bVar8);
      if (DAT_0080874e != '\x03') {
        iVar4 = 0;
        iVar6 = 0xb5;
        local_8 = 0xa9;
        local_c = 2;
        do {
          if (*(ushort *)(&this_00->field_0x1ab + (iVar4 + (uint)(byte)this_00->field_01D0 * 2) * 4)
              != 0) {
            pBVar2 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01D9,
                                  *(ushort *)
                                   (&this_00->field_0x1ab +
                                   (iVar4 + (uint)(byte)this_00->field_01D0 * 2) * 4) - 1);
            /* ST_CALLSITE[00551D40]: CALL 0x00403229; direct=00403229 DibPut */
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,local_8,0x39,'\x01',
                   (byte *)pBVar2);
          }
          /* ST_CALLSITE[00551D6A]: CALL dword ptr [0x0085bde8] */
          st::external_00000080(st::pointer_boundary_cast<LPSTR>(&this_00->field_018D),st::mutable_c_string("%d:1"),
                    (uint)*(ushort *)
                           (&this_00->field_0x1ad +
                           (iVar4 + (uint)(byte)this_00->field_01D0 * 2) * 4));
          st::fn_00710A90(this_00->field_0189,this_00->field_0068,0,iVar6,0x36,0x22,0xc);
          st::fn_007119C0(this_00->field_0189,&this_00->field_018D,-1,-1,1);
          iVar4 = iVar4 + 1;
          local_8 = local_8 + 0x68;
          iVar6 = iVar6 + 0x39;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
    }
    else {
      st::fn_00710A90(this_00->field_0189,this_00->field_0068,0,0xa6,0x31,0x77,0x26);
      iVar9 = -1;
      iVar7 = -1;
      uVar3 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5;
      iVar4 = -1;
      iVar6 = -2;
      resourceString = st::fn_006B0140(0x4e5b,g_hINSTANCE_00807618);
      st::fn_00711B70(this_00->field_0189,resourceString,iVar6,iVar4,uVar3,iVar7,iVar9);
    }
    /* ST_CALLSITE[00551DBF]: CALL 0x004048f4; direct=004048F4 TradePanelTy::PaintIndicators */
    st::fn_004048F4(this_00);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),0xf5,0,iVar2,st::mutable_c_string("%s"),
                             "TradePanelTy::PaintPanel");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),0xf5);
  return;
}

// 00551EC0 TradePanelTy::PaintIndicators
#line 4 "decomp/ST.exe/functions/00551EC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::PaintIndicators */

void __thiscall st::fn_00551EC0(TradePanelTy *this)

{
  char *resourceString;
  ushort uVar1;
  TradePanelTy *pTVar3;
  int iVar4;
  LPSTR text;
  ushort *puVar5;
  int iVar8;
  uint uVar6;
  byte bVar7;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
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
    /* ST_CALLSITE[00551F15]: CALL dword ptr [0x0085bde8] */
    st::external_00000080(resourceString,st::mutable_c_string("%6d"),
              (uint)(ushort)(&local_10->field_01BC)[(byte)local_10->field_01D0]);
    st::fn_00710A90(pTVar3->field_01DD,pTVar3->field_0068,0,0x67,0x36,0x23,0xc);
    st::fn_007119C0(pTVar3->field_01DD,resourceString,-1,-1,-(uint)(pTVar3->field_01D0 != '\0') & 2);
    if (pTVar3->field_01BB == '\0') {
      local_8 = 0;
      iVar4 = 0xb4;
      local_c = 2;
      do {
        puVar11 = nullptr;
        iVar10 = 0;
        iVar9 = 1;
        bVar7 = 0;
        uVar6 = 0xffffffff;
        text = st::fn_0040577C(st::mutable_c_string("BKG_AMOUNTRC"),0);
        puVar5 = st::fn_00709AF0
                           (PTR_00806794,CASE_1,text,uVar6,bVar7,iVar9,iVar10,puVar11);
        /* ST_CALLSITE[00551FAB]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pTVar3->field_0068,iVar4 + -3,0x45,'\x01',
               (byte *)puVar5);
        bVar7 = pTVar3->field_01D0;
        uVar1 = *(ushort *)(&pTVar3->field_0x1ad + (local_8 + (uint)bVar7 * 2) * 4);
        if (uVar1 == 0) {
          iVar9 = 0;
        }
        else if ((DAT_0080874e == '\x03') && (bVar7 == 0)) {
          iVar9 = (uint)(ushort)pTVar3->field_01BC * (uint)uVar1;
        }
        else {
          iVar9 = (int)((ulonglong)(ushort)(&pTVar3->field_01BC)[bVar7] /
                       (ulonglong)(longlong)(int)(uint)uVar1);
        }
        /* ST_CALLSITE[00552017]: CALL dword ptr [0x0085bde8] */
        st::external_00000080(resourceString,st::mutable_c_string("%6d"),iVar9);
        st::fn_00710A90(pTVar3->field_01DD,pTVar3->field_0068,0,iVar4,0x48,0x23,0xc);
        st::fn_007119C0(pTVar3->field_01DD,resourceString,-1,-1,
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
  iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),0x111,0,iVar4,st::mutable_c_string("%s"),
                             "TradePanelTy::PaintIndicators");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),0x111);
  return;
}

// 005521B0 TradePanelTy::Update
#line 4 "decomp/ST.exe/functions/005521B0/decomp.c"
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
    /* ST_CALLSITE[0055220A]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    st::fn_004035BC
              (g_allPlayers_007FA174,10,(AnonShape_0043BEB0_1C00EC12 *)&local_8->field_0x1ab);
    /* ST_CALLSITE[00552211]: CALL 0x00404f9d; direct=00404F9D TradePanelTy::sub_00551B10 */
    st::fn_00404F9D(this_00);
    /* ST_CALLSITE[00552218]: CALL 0x0040391d; direct=0040391D TradePanelTy::PaintPanel */
    st::fn_0040391D(this_00);
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),300,0,errorCode,
                             st::mutable_c_string("%s"),"TradePanelTy::Update");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),300);
  return;
}

// 005522A0 TradePanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/005522A0/decomp.c"
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
  LPSTR pCVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  AnonPointee_TradePanelTy_0000 *pAVar8;
  int iVar9;
  uint uVar10;
  char *text;
  byte bVar11;
  int iVar12;
  code *pcVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
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
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),0x175,0,iVar3,
                               st::mutable_c_string("%s"),"TradePanelTy::GetMessage");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\tradecen.cpp"),0x175);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[005522DE]: CALL 0x00401401; direct=00401401 SpecPanelTy::GetMessage */
  st::fn_00401401((SpecPanelTy *)local_c,message);
  SVar2 = message->id;
  if (SVar2 < 0xb203) {
    if (SVar2 == MESS_SHARED_B202) {
      pAVar8 = this_00->field_0000;
      iVar7 = 0x2754;
LAB_00552481:
      uVar17 = 1;
      uVar15 = 0;
      pCVar3 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
      /* ST_CALLSITE[00552494]: CALL dword ptr [EBX + 0x10] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (*(code *)pAVar8->field_0010)(message,pCVar3,iVar7,uVar15,uVar17);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (SVar2 < MESS_BEHPANELTY_B200) {
      if (SVar2 == MESS_SHARED_B1FF) {
        uStack_11 = 0;
        local_18 = (this_00->field_01BB == '\0') + '\x01';
        uStack_10 = 0;
        bVar11 = this_00->field_01D0;
        sStack_17 = (bVar11 != 0) + 0xdd;
        uStack_15 = (uint)(ushort)(&this_00->field_01BC)[bVar11];
        if (this_00->field_01BB == '\0') {
          uStack_11 = (undefined1)*(undefined2 *)(&this_00->field_0x1ad + (uint)bVar11 * 8);
          uStack_10 = (undefined1)
                      ((ushort)*(undefined2 *)(&this_00->field_0x1ad + (uint)bVar11 * 8) >> 8);
        }
        st::fn_00403C33((undefined4 *)0x20,(uint *)&local_18,0,0xffffffff);
        if (this_00->field_01BB != '\0') {
          this_00->field_0028 = 0xbfff;
          /* ST_CALLSITE[005523CB]: CALL dword ptr [EDX] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (*(code *)this_00->field_0000->field_0000)(&this_00->field_0x18);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
      else {
        if (SVar2 == MESS_ID_CREATE) {
          /* ST_CALLSITE[0055232D]: CALL 0x00405678; direct=00405678 TradePanelTy::InitTradePanel */
          st::fn_00405678(this_00);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
        if (SVar2 == MESS_SHARED_0003) {
          /* ST_CALLSITE[00552312]: CALL 0x00405538; direct=00405538 TradePanelTy::DoneTradePanel */
          st::fn_00405538(this_00);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
    }
    else {
      if (SVar2 == MESS_BEHPANELTY_B200) {
        pAVar8 = this_00->field_0000;
        iVar7 = (-(uint)(this_00->field_01BB != '\0') & 0xfffffffe) + 0x2753;
        goto LAB_00552481;
      }
      if (SVar2 == MESS_SHARED_B201) {
        bVar11 = this_00->field_01D0;
        sStack_23 = (bVar11 != 0) + 0xdd;
        local_24 = 3;
        uStack_21 = (uint)(ushort)(&this_00->field_01BC)[bVar11];
        uVar1 = *(undefined2 *)((int)&this_00->field_01AF + (uint)bVar11 * 8 + 2);
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
      /* ST_CALLSITE[005525F7]: CALL 0x004048f4; direct=004048F4 TradePanelTy::PaintIndicators */
      st::fn_004048F4(this_00);
      /* ST_CALLSITE[005525FE]: CALL 0x0040578b; direct=0040578B TradePanelTy::sub_00551800 */
      st::fn_0040578B(this_00);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (SVar2 == MESS_TRADEPANELTY_B20A) {
      this_00->field_01D0 = *(char *)(message->arg0).ptr + -1;
      /* ST_CALLSITE[005525C1]: CALL 0x00404f9d; direct=00404F9D TradePanelTy::sub_00551B10 */
      st::fn_00404F9D(this_00);
      /* ST_CALLSITE[005525C8]: CALL 0x0040391d; direct=0040391D TradePanelTy::PaintPanel */
      st::fn_0040391D(this_00);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (SVar2 == MESS_TRADEPANELTY_B20B) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_8 = *(int *)((message->arg0).u32 + 0xc) - this_00->field_003C;
      iVar7 = DAT_00806734;
      if (this_00->field_005C != 0) {
        iVar7 = this_00->field_0044;
      }
      puVar16 = nullptr;
      iVar14 = 0;
      iVar12 = 1;
      bVar11 = 0;
      uVar10 = 0xffffffff;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar7 = *(int *)((message->arg0).u32 + 0x10) - iVar7;
      iVar4 = st::fn_00401BA4((AnonShape_0052A7B0_DD603BF4 *)message);
      iVar9 = 2;
      pCVar3 = st::fn_0040577C(st::mutable_c_string("BUT_RCTTYPE"),0);
      pCVar3 = st::fn_006F2C00(pCVar3,iVar9,iVar4);
      puVar5 = st::fn_00709AF0
                         (PTR_00806794,CASE_1,pCVar3,uVar10,bVar11,iVar12,iVar14,puVar16);
      /* ST_CALLSITE[00552539]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,local_8,iVar7,'\x01',
             (byte *)puVar5);
      if (*(int *)((message->arg0).u32 + 4) == 3) {
        puVar16 = nullptr;
        iVar9 = 0;
        iVar4 = 1;
        bVar11 = 0;
        uVar10 = 0xffffffff;
        pCVar3 = st::fn_0040577C(st::mutable_c_string("BUT_RCTFTYPE"),0);
        puVar5 = st::fn_00709AF0
                           (PTR_00806794,CASE_6,pCVar3,uVar10,bVar11,iVar4,iVar9,puVar16);
        /* ST_CALLSITE[0055257D]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,local_8,iVar7,'\x06',
               (byte *)puVar5);
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
      pAVar8 = this_00->field_0000;
      text = "BUT_TBUP";
    }
    else {
      if (SVar2 != MESS_OPTPANELTY_C006) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      pAVar8 = this_00->field_0000;
      text = "BUT_TBDN";
    }
    uVar17 = 1;
    uVar15 = 0;
    pcVar13 = (code *)st::fn_00529FE0;
    pCVar3 = st::fn_0040577C(text,0);
    /* ST_CALLSITE[00552655]: CALL dword ptr [EBX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (*(code *)pAVar8->field_0008)(message,1,pCVar3,pcVar13,uVar15,uVar17);
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}

