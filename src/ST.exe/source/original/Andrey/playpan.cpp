#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/playpan.cpp

// 00539B90 PlayPanelTy::InitPlayPanel
#line 4 "decomp/ST.exe/functions/00539B90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::InitPlayPanel */

void __thiscall st::fn_00539B90(PlayPanelTy *this)

{
  ushort **ppuVar1;
  PlayPanelTy *this_00;
  ccFntTy *pcVar3;
  ushort *puVar4;
  LPSTR pCVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  UINT resourceId;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  short sVar15;
  ushort uVar16;
  uint uVar17;
  byte bVar18;
  undefined4 uVar19;
  char *pcVar20;
  int iVar21;
  int *piVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
  undefined4 local_6b8 [140];
  int local_488 [6];
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_304;
  int local_300 [26];
  undefined4 local_298;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_c8;
  undefined4 local_c4;
  InternalExceptionFrame local_b0;
  undefined4 local_6c [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  PlayPanelTy *local_14;
  undefined4 *local_10;
  int local_c;
  byte local_5;

  piVar22 = local_488;
  local_14 = this;
  for (iVar8 = 0xf6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar22 = 0;
    piVar22 = piVar22 + 1;
  }
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  iVar8 = st::fn_0072D7F0(local_b0.jumpBuffer,0);
  this_00 = local_14;
  if (iVar8 == 0) {
    g_playPanel_008016E4 = local_14;
    pcVar3 = (ccFntTy *)st::fn_0070DF00(0x19d,g_interSystem_00802A28->field_0028);
    this_00->field_01DD = pcVar3;
    pcVar3->field_0058 = 0;
    pcVar3->field_005C = 0;
    puVar4 = st::fn_00709AF0
                       (PTR_00806794,CASE_B,"BUT_CHPLAYER",0xffffffff,0,1,0,
                        nullptr);
    this_00->field_01D1 = puVar4;
    puVar24 = nullptr;
    iVar21 = 0;
    iVar8 = 1;
    bVar18 = 0;
    uVar17 = 0xffffffff;
    pCVar5 = st::fn_0040577C("GAMEB_ALLY",0);
    puVar4 = st::fn_00709AF0
                       (PTR_00806794,CASE_B,pCVar5,uVar17,bVar18,iVar8,iVar21,puVar24);
    this_00->field_01D5 = puVar4;
    puVar24 = nullptr;
    iVar21 = 0;
    iVar8 = 1;
    bVar18 = 0;
    uVar17 = 0xffffffff;
    pCVar5 = st::fn_0040577C("BUT_PRODWEAP",0);
    puVar4 = st::fn_00709AF0
                       (PTR_00806794,CASE_B,pCVar5,uVar17,bVar18,iVar8,iVar21,puVar24);
    this_00->field_01D9 = puVar4;
    puVar4 = this_00->field_0068;
    uVar17 = *(uint *)(puVar4 + 10);
    if (uVar17 == 0) {
      uVar17 = ((uint)puVar4[7] * *(int *)(puVar4 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar4 + 4);
    }
    puVar24 = (undefined4 *)st::fn_006B4FA0((int *)puVar4);
    for (uVar9 = uVar17 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar24 = 0xffffffff;
      puVar24 = puVar24 + 1;
    }
    iVar8 = 1;
    piVar22 = nullptr;
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined1 *)puVar24 = 0xff;
      puVar24 = (undefined4 *)((int)puVar24 + 1);
    }
    pCVar5 = st::fn_0040577C("BKG_DIPLOMACYW",0);
    puVar4 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar5,piVar22,iVar8);
    ppuVar1 = &this_00->field_01CD;
    *ppuVar1 = puVar4;
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0,'\x01',(byte *)puVar4);
    st::fn_006F20E0(g_cMf32_00806790,(uint *)ppuVar1);
    if (DAT_00808783 != '\x03') {
      iVar8 = 1;
      piVar22 = nullptr;
      pCVar5 = st::fn_0040577C("BKG_DIPLOMACYC",0);
      puVar4 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar5,piVar22,iVar8);
      *ppuVar1 = puVar4;
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x20,0xa4,'\x01',(byte *)puVar4);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)ppuVar1);
    }
    iVar8 = 1;
    piVar22 = nullptr;
    pCVar5 = st::fn_0040577C("BKG_DIPLOMACYB",0);
    puVar4 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar5,piVar22,iVar8);
    *ppuVar1 = puVar4;
    st::fn_00710A90(this_00->field_01DD,(int)this_00->field_0068,0,0x6c,2,0xf3,0xc);
    uVar17 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar21 = -1;
    iVar8 = -2;
    puVar6 = (uint *)st::fn_006B0140(0x2733,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_01DD,puVar6,iVar8,iVar21,uVar17);
    st::fn_00403242(this_00);
    uVar25 = 0;
    uVar23 = 0;
    pcVar20 = nullptr;
    uVar19 = 0;
    uVar16 = 0;
    sVar15 = 0;
    uVar14 = 0xc000;
    uVar13 = 0xbfff;
    pCVar5 = st::fn_0040577C("BUT_MEDIUM",0);
    uVar13 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x171,199,1,pCVar5,uVar13,uVar14,sVar15,
                                 uVar16,uVar19,pcVar20,uVar23,uVar25);
    this_00->field_017C = uVar13;
    local_488[0] = 0;
    if (DAT_00808aaf < 9) {
      local_c8 = 0;
    }
    else {
      local_c8 = DAT_00808aaf - 8;
    }
    local_488[4] = this_00->field_003C + 0x19c;
    iVar8 = this_00->field_005C;
    local_c4 = this_00->field_01C9;
    local_e0 = this_00->field_0008;
    local_dc = 2;
    local_d8 = 0x6200;
    local_488[1] = 2;
    local_488[2] = 0;
    local_488[3] = 2;
    if (iVar8 == 0) {
      iVar21 = -this_00->field_0048;
    }
    else {
      iVar21 = this_00->field_0044;
    }
    local_420 = this_00->field_0008;
    local_488[5] = iVar21 + 0x6d;
    local_41c = 2;
    local_304 = 2;
    local_470 = 0x11;
    local_46c = 0x24;
    local_370 = 500;
    local_36c = 0x32;
    local_418 = 0x6202;
    local_378 = 1;
    local_374 = 1;
    piVar22 = local_488 + 2;
    piVar11 = local_300;
    memmove(piVar11, piVar22, 0x17c); /* compiler REP MOVS byte copy */
    if (iVar8 == 0) {
      local_300[3] = -this_00->field_0048;
    }
    else {
      local_300[3] = this_00->field_0044;
    }
    local_300[3] = local_300[3] + 0x1a;
    local_298 = 0x6201;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,4,&this_00->field_01C5,nullptr,local_488,0);
    if (8 < DAT_00808aaf) {
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 1;
      st::fn_006E6080(this_00,2,this_00->field_01C5,(undefined4 *)&this_00->field_0x18);
    }
    local_10 = &this_00->field_01A1;
    local_5 = 0;
    iVar21 = 0xb4ff;
    iVar8 = 0x1c;
    do {
      if ((local_5 < DAT_00808aaf) && (DAT_00808a8f == '\0')) {
        iVar7 = 1;
      }
      else {
        iVar7 = 0;
      }
      uVar13 = st::fn_0040398B((UPanelTy *)this_00,0,iVar7,0x4d,iVar8 + -2,0,(LPSTR)0x0,iVar21,
                                   iVar21 + 0x10,0,0,0,nullptr,0x16,0xe);
      local_10[-8] = uVar13;
      if ((DAT_00808aaf <= local_5) || (local_c = 1, DAT_00808783 != '\x03')) {
        local_c = 0;
      }
      uVar23 = 0;
      uVar19 = 0;
      pcVar20 = nullptr;
      uVar14 = 0;
      uVar16 = 0;
      iVar7 = iVar21 + 0x30;
      sVar15 = 0;
      iVar10 = iVar21 + 0x20;
      uVar13 = 0;
      iVar12 = 1;
      pCVar5 = st::fn_0040577C("BUT_PRODWEAP",0);
      pCVar5 = st::fn_006F2C00(pCVar5,iVar12,uVar13);
      uVar13 = st::fn_0040398B((UPanelTy *)this_00,0,local_c,0x183,iVar8,1,pCVar5,iVar10,iVar7,
                                   sVar15,uVar16,uVar14,pcVar20,uVar19,uVar23);
      iVar8 = iVar8 + 0xf;
      *local_10 = uVar13;
      local_5 = local_5 + 1;
      iVar21 = iVar21 + 1;
      local_10 = local_10 + 1;
    } while (local_5 < 8);
    if (DAT_00808783 == '\x03') {
      iVar21 = 1;
      memset(local_6c, 0, 0x58); /* compiler bulk-zero initialization */
      iVar8 = 0;
      memset(local_6b8, 0, 0x230); /* compiler bulk-zero initialization */
      puVar24 = local_6b8 + 1;
      iVar8 = this_00->field_003C + 0x27;
      iVar7 = 4;
      do {
        iVar10 = this_00->field_005C;
        puVar24[-1] = iVar21;
        *puVar24 = 0;
        puVar24[2] = iVar8;
        puVar24[4] = 0x13;
        if (iVar10 == 0) {
          iVar10 = -this_00->field_0048;
        }
        else {
          iVar10 = this_00->field_0044;
        }
        iVar21 = iVar21 + 1;
        puVar24[3] = iVar10 + 0xa9;
        puVar24[5] = 0xe;
        iVar8 = iVar8 + 0x5c;
        puVar24 = puVar24 + 0x1c;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      local_24 = local_6b8;
      local_5c = this_00->field_0008;
      local_6c[0] = 1;
      local_20 = 1;
      local_1c = 1;
      local_18 = 1;
      local_58 = 2;
      local_54 = 0xb208;
      local_38 = 2;
      local_34 = 0xb209;
      local_3c = local_5c;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,5,&this_00->field_01C1,nullptr,local_6c,0);
      resourceId = 0x42b8;
      iVar8 = 0x3c;
      local_c = 4;
      do {
        st::fn_00710A90(this_00->field_01DD,(int)this_00->field_0068,0,iVar8,0xa9,0x46,0xe);
        uVar17 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar7 = -1;
        iVar21 = 0;
        puVar6 = (uint *)st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01DD,puVar6,iVar21,iVar7,uVar17);
        iVar8 = iVar8 + 0x5c;
        resourceId = resourceId + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    g_currentExceptionFrame = local_b0.previous;
    return;
  }
  g_currentExceptionFrame = local_b0.previous;
  iVar21 = st::fn_006AD4D0("E:\\__titans\\Andrey\\playpan.cpp",0x81,0,iVar8,"%s",
                              "PlayPanelTy::InitPlayPanel");
  if (iVar21 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar8,0,"E:\\__titans\\Andrey\\playpan.cpp",0x81);
  return;
}

// 0053A380 PlayPanelTy::DonePlayPanel
#line 4 "decomp/ST.exe/functions/0053A380/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::DonePlayPanel */

void __thiscall st::fn_0053A380(PlayPanelTy *this)

{
  PlayPanelTy *pPVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_50;
  PlayPanelTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pPVar2 = local_c;
  if (iVar3 == 0) {
    if (local_c->field_017C != 0) {
      st::fn_006E56B0(local_c->field_000C,local_c->field_017C);
    }
    pPVar2->field_017C = 0;
    if (pPVar2->field_01C5 != 0) {
      st::fn_006E56B0(pPVar2->field_000C,pPVar2->field_01C5);
    }
    pPVar2->field_01C5 = 0;
    if (pPVar2->field_01C1 != 0) {
      st::fn_006E56B0(pPVar2->field_000C,pPVar2->field_01C1);
    }
    pPVar2->field_01C1 = 0;
    puVar5 = &pPVar2->field_0181;
    local_8 = 2;
    do {
      iVar3 = 8;
      do {
        if (*puVar5 != 0) {
          st::fn_006E56B0(pPVar2->field_000C,*puVar5);
          *puVar5 = 0;
        }
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (pPVar2->field_01DD != nullptr) {
      st::fn_00710560((uint *)pPVar2->field_01DD);
      pPVar2->field_01DD = nullptr;
    }
    if (pPVar2->field_01CD != nullptr) {
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&pPVar2->field_01CD);
    }
    pPVar2->field_01D9 = nullptr;
    pPVar2->field_01D5 = nullptr;
    pPVar2->field_01D1 = nullptr;
    g_playPanel_008016E4 = nullptr;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\playpan.cpp",0x97,0,iVar3,"%s",
                             "PlayPanelTy::DonePlayPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\playpan.cpp",0x97);
  return;
}

// 0053A6B0 PlayPanelTy::SwitchOptPanel
#line 4 "decomp/ST.exe/functions/0053A6B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::SwitchOptPanel */

void __thiscall st::fn_0053A6B0(PlayPanelTy *this,int param_1)

{
  short sVar1;
  PlayPanelTy *pPVar3;
  int errorCode;
  int iVar4;
  InternalExceptionFrame local_4c;
  PlayPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pPVar3 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\playpan.cpp",0xcb,0,errorCode,
                               "%s","PlayPanelTy::SwitchOptPanel");
    if (iVar4 == 0) {
      st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\playpan.cpp",0xcb);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  sVar1 = local_8->field_0172;
  if (sVar1 == 1) {
    if (param_1 != 0) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    ShiftControls(local_8,0);
  }
  else {
    if (sVar1 == 2) {
      if (param_1 == 0) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      local_8->field_0172 = 3;
      st::fn_00405E2F(CASE_AF);
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      st::fn_00402ED2(g_cPanel_00801688,0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (sVar1 != 3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  if (param_1 == 0) {
    pPVar3->field_0172 = 4;
    st::fn_00405E2F(CASE_B0);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 0053A820 PlayPanelTy::SetPanel
#line 4 "decomp/ST.exe/functions/0053A820/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::SetPanel */

undefined4 __thiscall st::fn_0053A820(PlayPanelTy *this,char param_1)

{
  PlayPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_4c;
  PlayPanelTy *local_8;

  if (this->field_0180 == param_1) {
    return 0;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    local_8->field_0180 = param_1;
    if (param_1 == '\0') {
      if ((g_cPanel_00801688 != nullptr) && (g_cPanel_00801688->field_023F == CASE_1)) {
        st::fn_00402ED2(g_cPanel_00801688,1);
      }
      iVar2 = 0;
    }
    else {
      if (g_researchPanel_008016E8 != nullptr) {
        st::fn_00401A73(g_researchPanel_008016E8,'\0');
      }
      if (g_bldBoatPanel_0080167C != nullptr) {
        st::fn_00401A73(g_bldBoatPanel_0080167C,'\0');
      }
      if (g_bldObjPanel_00801684 != nullptr) {
        st::fn_00401A73(g_bldObjPanel_00801684,'\0');
      }
      if (g_infocPanel_00801698 != nullptr) {
        (*g_infocPanel_00801698->vtable->SetPanel)((SpecPanelTy *)g_infocPanel_00801698,'\0');
      }
      if (g_tradePanel_00802A44 != nullptr) {
        st::fn_00404AF7(g_tradePanel_00802A44,'\0','\0');
      }
      if (g_behPanel_00801678 != nullptr) {
        (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
      }
      if (g_sAMPanel_008016EC != nullptr) {
        (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\0');
      }
      if (g_upgPanel_00802A48 != nullptr) {
        (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\0');
      }
      if (g_frmPanel_0080168C != nullptr) {
        (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\0');
      }
      if (g_bldLabPanel_00801680 != nullptr) {
        st::fn_00401A73(g_bldLabPanel_00801680,'\0');
      }
      if (g_helpPanel_00801690 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(g_helpPanel_00801690->vtable + 0x18))(0);
      }
      if (g_optPanel_008016DC != nullptr) {
        st::fn_00402630(g_optPanel_008016DC);
      }
      iVar2 = 1;
    }
    st::fn_004052C7(this_00,iVar2);
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\playpan.cpp",0xe9,0,iVar2,"%s",
                             "PlayPanelTy::SetPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Andrey\\playpan.cpp",0xe9);
  return 1;
}

// 0053AA50 PlayPanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/0053AA50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::ShiftControls

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0053AA50(PlayPanelTy *this,int param_1)

{
  PlayPanelTy *this_00;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar6;
  InternalExceptionFrame local_54;
  PlayPanelTy *local_10;
  int local_c;
  int *local_8;

  if (param_1 != this->field_005C) {
    this->field_005C = param_1;
    memset(&this->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 == 0) {
      sVar2 = -sVar2;
    }
    *(short *)&this->field_0x2e = sVar2;
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_10 = this;
    iVar4 = st::fn_0072D7F0(local_54.jumpBuffer,0);
    this_00 = local_10;
    if (iVar4 == 0) {
      if (local_10->field_017C != 0) {
        st::fn_006E6080(local_10,2,local_10->field_017C,(undefined4 *)&local_10->field_0x18);
      }
      piVar6 = &this_00->field_0181;
      local_c = 8;
      do {
        iVar4 = 2;
        local_8 = piVar6;
        do {
          if (*piVar6 != 0) {
            st::fn_006E6080(this_00,2,*piVar6,(undefined4 *)&this_00->field_0x18);
          }
          piVar6 = piVar6 + 8;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        piVar6 = local_8 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_8 = piVar6;
      if (this_00->field_01C5 != 0) {
        st::fn_006E6080(this_00,2,this_00->field_01C5,(undefined4 *)&this_00->field_0x18);
      }
      if (this_00->field_01C1 != 0) {
        st::fn_006E6080(this_00,2,this_00->field_01C1,(undefined4 *)&this_00->field_0x18);
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\playpan.cpp",0xfe,0,iVar4,"%s",
                               "PlayPanelTy::ShiftControls");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\playpan.cpp",0xfe);
  }
  return;
}

// 0053AC00 PlayPanelTy::PaintPlayPanel
#line 4 "decomp/ST.exe/functions/0053AC00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::PaintPlayPanel */

void __thiscall st::fn_0053AC00(PlayPanelTy *this)

{
  char cVar1;
  byte bVar2;
  PlayPanelTy *pPVar4;
  int iVar5;
  byte *pbVar6;
  UINT resourceId;
  uint *resourceString;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  size_t _Count;
  char *pcVar10;
  int iVar11;
  int iVar12;
  InternalExceptionFrame local_58;
  PlayPanelTy *local_14;
  int local_10;
  uint local_c;
  int local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar5 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  pPVar4 = local_14;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar11 = st::fn_006AD4D0("E:\\__titans\\Andrey\\playpan.cpp",0x11f,0,iVar5,
                                "%s","PlayPanelTy::PaintPlayPanel");
    if (iVar11 == 0) {
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\Andrey\\playpan.cpp",0x11f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_14->field_0068,0x1d,0x13,'\x01',
         (byte *)local_14->field_01CD);
  local_c = 0x1b;
  local_10 = 8;
  iVar5 = 0;
  do {
    uVar8 = local_c;
    uVar7 = iVar5 + pPVar4->field_01C9;
    if (uVar7 < DAT_00808aaf) {
      local_8 = iVar5;
      pbVar6 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pPVar4->field_01D1,
                                    (byte)(&DAT_00808af4)[uVar7 * 0x9c] + 9);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)pPVar4->field_0068,0x22,uVar8,'\x01',pbVar6);
      st::fn_00710A90(pPVar4->field_01DD,(int)pPVar4->field_0068,0,0x37,uVar8,0x10,0xc);
      bVar2 = g_bulkInitializedRecords_008087C7
              [(byte)(&DAT_00808af4)[(iVar5 + pPVar4->field_01C9) * 0x9c]].field_0021;
      if (bVar2 == 1) {
        resourceId = 0x2742;
      }
      else if (bVar2 == 2) {
        resourceId = 0x2743;
      }
      else if (bVar2 == 3) {
        resourceId = 0x2745;
      }
      else {
        resourceId = 10000;
      }
      uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar11 = -1;
      resourceString = (uint *)st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
      st::fn_007119C0(pPVar4->field_01DD,resourceString,iVar11,iVar12,uVar7);
      st::fn_00710A90(pPVar4->field_01DD,(int)pPVar4->field_0068,0,0x68,uVar8,0x10e,0xc);
      iVar11 = st::fn_00711110(pPVar4->field_01DD,
                            (char *)(&DAT_00808ab0 + (iVar5 + pPVar4->field_01C9) * 0x27));
      if (iVar11 < 0x10e) {
        uVar7 = 0xffffffff;
        pcVar9 = (char *)(&DAT_00808ab0 + (iVar5 + pPVar4->field_01C9) * 0x27);
        do {
          pcVar10 = pcVar9;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar9 = pcVar10 + -uVar7;
        pcVar10 = (char *)&DAT_0080f33a;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar7 = uVar7 & 3; iVar5 = local_8, uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
      else {
        uVar7 = 0xffffffff;
        pcVar9 = (char *)(&DAT_00808ab0 + (iVar5 + pPVar4->field_01C9) * 0x27);
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        local_8 = ~uVar7 - 1;
        _Count = 0x14;
        do {
          _Count = _Count + 1;
          st::fn_0072E340
                    ((char *)&DAT_0080f33a,
                     (char *)(&DAT_00808ab0 + (iVar5 + pPVar4->field_01C9) * 0x27),_Count);
          iVar11 = st::fn_00711110(pPVar4->field_01DD,(char *)&DAT_0080f33a);
          if (0x10d < iVar11) break;
        } while ((int)_Count < local_8);
      }
      st::fn_007119C0(pPVar4->field_01DD,&DAT_0080f33a,5,-1,(DAT_0080874e != '\x03') - 1 & 5);
    }
    iVar5 = iVar5 + 1;
    local_c = local_c + 0xf;
    local_10 = local_10 + -1;
    if (local_10 == 0) {
      local_8 = iVar5;
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,pPVar4->field_0060,0xffffffff,pPVar4->field_003C,
                 pPVar4->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
  } while( true );
}

// 0053AFB0 PlayPanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/0053AFB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0053AFB0; family_names=PlayPanelTy::GetMessage; ret4=18;
   direct_offsets={10:7,14:5,18:8,1c:0} */

int __thiscall st::fn_0053AFB0(PlayPanelTy *this,STMessage *message)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  STMessageId SVar5;
  uint uVar6;
  PlayPanelTy *this_00;
  int iVar7;
  uint uVar8;
  LPSTR pCVar9;
  undefined4 uVar10;
  byte *pbVar11;
  int iVar12;
  byte bVar13;
  bool bVar14;
  int iVar15;
  char *text;
  int *piVar16;
  code *pcVar17;
  int iVar18;
  UINT UVar19;
  InternalExceptionFrame local_64;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  PlayPanelTy *local_14;
  uint local_10;
  ushort *local_c;
  uint local_8;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_14 = this;
  iVar7 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  this_00 = local_14;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar12 = st::fn_006AD4D0("E:\\__titans\\Andrey\\playpan.cpp",500,0,iVar7,"%s",
                                "PlayPanelTy::GetMessage");
    if (iVar12 == 0) {
      st::fn_006A5E40(iVar7,0,"E:\\__titans\\Andrey\\playpan.cpp",500);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (message->id == MESS_ID_CREATE) {
    puVar1 = &local_14->field_004C;
    st::fn_006B1A50(g_ddxContext_008075A8,3,nullptr,puVar1);
    this_00->field_003C = *puVar1;
    this_00->field_0044 = this_00->field_0050 - this_00->field_0048;
    this_00->field_0174 = this_00->field_0048 + this_00->field_0050;
  }
  st::fn_004017F8((PanelTy *)this_00,message);
  SVar5 = message->id;
  if (SVar5 < MESS_TRADEPANELTY_B20A) {
    if (SVar5 == MESS_PLAYPANELTY_B209) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar7 = *(int *)((message->arg0).u32 + 0x10);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_10 = *(int *)((message->arg0).u32 + 0xc) - this_00->field_003C;
      if (this_00->field_005C == 0) {
        iVar12 = this_00->field_0048;
      }
      else {
        iVar12 = -this_00->field_0044;
      }
      iVar18 = 1;
      piVar16 = nullptr;
      uVar10 = st::fn_0040335A((int)message);
      iVar15 = 1;
      pCVar9 = st::fn_0040577C("BUT_SWITCH",0);
      pCVar9 = st::fn_006F2C00(pCVar9,iVar15,uVar10);
      local_c = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar9,piVar16,iVar18);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,local_10,iVar7 + iVar12,'\x01',
             (byte *)local_c);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_c);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (MESS_SHARED_6200 < SVar5) {
      if (SVar5 == MESS_PLAYPANELTY_6201) {
        text = "BUT_SLUP";
      }
      else {
        if (SVar5 != MESS_PLAYPANELTY_6202) {
          if (SVar5 != MESS_MREPORTTY_B208) {
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          iVar7 = *(int *)(message->arg0).ptr;
          if (iVar7 == 1) {
            bVar13 = 0;
            local_8 = (uint)STPiece<1,3>(local_8) << 8;
            if (DAT_00808aaf != 0) {
              do {
                uVar8 = local_8 & 0xff;
                bVar13 = bVar13 + 1;
                local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar13));
                (&DAT_00808af7)[uVar8 * 0x9c] = 1;
              } while (bVar13 < DAT_00808aaf);
            }
            this_00->field_0028 = 5;
            piVar16 = &this_00->field_01A1;
            iVar7 = 8;
            do {
              if (*piVar16 != 0) {
                st::fn_006E6080(this_00,2,*piVar16,(undefined4 *)&this_00->field_0x18);
              }
              piVar16 = piVar16 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          if (iVar7 == 2) {
            if (DAT_0080874d < 8) {
              bVar13 = 0;
              local_8 = (uint)STPiece<1,3>(local_8) << 8;
              if (DAT_00808aaf != 0) {
                do {
                  iVar7 = (local_8 & 0xff) * 0x9c;
                  bVar3 = (&DAT_00808af4)[iVar7];
                  local_c = (ushort *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar3));
                  if (DAT_00808a8f == '\0') {
                    if (bVar3 == DAT_0080874d) {
LAB_0053b42f:
                      iVar12 = 0;
                    }
                    else {
                      uVar8 = (uint)DAT_0080874d;
                      bVar4 = g_playerRelationMatrix[bVar3][uVar8];
                      if ((bVar4 == 0) && (g_playerRelationMatrix[uVar8][bVar3] == 0)) {
                        iVar12 = -2;
                      }
                      else if ((bVar4 == 1) && (g_playerRelationMatrix[uVar8][bVar3] == 0)) {
                        iVar12 = -1;
                      }
                      else if ((bVar4 == 0) && (g_playerRelationMatrix[uVar8][bVar3] == 1)) {
                        iVar12 = 1;
                      }
                      else {
                        if ((bVar4 != 1) || (g_playerRelationMatrix[uVar8][bVar3] != 1))
                        goto LAB_0053b42f;
                        iVar12 = 2;
                      }
                    }
                    bVar14 = iVar12 < 0;
                  }
                  else {
                    bVar14 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar3].field_0023;
                  }
                  (&DAT_00808af7)[iVar7] = bVar14;
                  bVar13 = bVar13 + 1;
                  local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar13));
                } while (bVar13 < DAT_00808aaf);
              }
            }
            this_00->field_0028 = 5;
            piVar16 = &this_00->field_01A1;
            iVar7 = 8;
            do {
              if (*piVar16 != 0) {
                st::fn_006E6080(this_00,2,*piVar16,(undefined4 *)&this_00->field_0x18);
              }
              piVar16 = piVar16 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          if (iVar7 != 3) {
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          if (DAT_0080874d < 8) {
            bVar13 = 0;
            local_8 = local_8 & 0xffffff00;
            if (DAT_00808aaf != 0) {
              do {
                iVar7 = (local_8 & 0xff) * 0x9c;
                bVar3 = (&DAT_00808af4)[iVar7];
                local_c = (ushort *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar3));
                if (DAT_00808a8f == '\0') {
                  if (bVar3 == DAT_0080874d) {
LAB_0053b2ea:
                    iVar12 = 0;
                  }
                  else {
                    uVar8 = (uint)DAT_0080874d;
                    bVar4 = g_playerRelationMatrix[bVar3][uVar8];
                    if ((bVar4 == 0) && (g_playerRelationMatrix[uVar8][bVar3] == 0)) {
                      iVar12 = -2;
                    }
                    else if ((bVar4 == 1) && (g_playerRelationMatrix[uVar8][bVar3] == 0)) {
                      iVar12 = -1;
                    }
                    else if ((bVar4 == 0) && (g_playerRelationMatrix[uVar8][bVar3] == 1)) {
                      iVar12 = 1;
                    }
                    else {
                      if ((bVar4 != 1) || (g_playerRelationMatrix[uVar8][bVar3] != 1))
                      goto LAB_0053b2ea;
                      iVar12 = 2;
                    }
                  }
                  bVar14 = iVar12 < 0;
                }
                else {
                  bVar14 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar3].field_0023;
                }
                bVar13 = bVar13 + 1;
                (&DAT_00808af7)[iVar7] = '\x01' - bVar14;
                local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar13));
              } while (bVar13 < DAT_00808aaf);
            }
          }
          this_00->field_0028 = 5;
          piVar16 = &this_00->field_01A1;
          iVar7 = 8;
          do {
            if (*piVar16 != 0) {
              st::fn_006E6080(this_00,2,*piVar16,(undefined4 *)&this_00->field_0x18);
            }
            piVar16 = piVar16 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          g_currentExceptionFrame = local_64.previous;
          return 0;
        }
        text = "BUT_SLDN";
      }
      pcVar17 = thunk_FUN_00529fe0;
      pCVar9 = st::fn_0040577C(text,0);
      st::fn_00403495((UPanelTy *)this_00,(AnonShape_0053D7A0_044B6141 *)message,6,pCVar9,pcVar17
                        );
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (SVar5 == MESS_SHARED_6200) {
      this_00->field_01C9 = message->arg0;
      st::fn_00403242(this_00);
      this_00->field_0028 = 5;
      piVar16 = &this_00->field_01A1;
      iVar7 = 8;
      do {
        if (*piVar16 != 0) {
          st::fn_006E6080(this_00,2,*piVar16,(undefined4 *)&this_00->field_0x18);
        }
        piVar16 = piVar16 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      this_00->field_0028 = 5;
      piVar16 = &this_00->field_0181;
      iVar7 = 8;
      do {
        if (*piVar16 != 0) {
          st::fn_006E6080(this_00,2,*piVar16,(undefined4 *)&this_00->field_0x18);
        }
        piVar16 = piVar16 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (SVar5 == MESS_ID_NONE) {
      if (this_00->field_0172 == 3) {
        iVar7 = this_00->field_0050;
        if (this_00->field_0044 < iVar7) {
          this_00->field_0044 = this_00->field_0044 + 0x1e;
        }
        if (iVar7 <= this_00->field_0044) {
          this_00->field_0044 = iVar7;
          this_00->field_0172 = 1;
          st::fn_004038BE(this_00,1);
        }
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      if (this_00->field_0172 == 4) {
        iVar7 = this_00->field_0050 - this_00->field_0048;
        if (iVar7 < this_00->field_0044) {
          this_00->field_0044 = this_00->field_0044 + -0x1e;
        }
        if (this_00->field_0044 <= iVar7) {
          this_00->field_0044 = iVar7;
          this_00->field_0172 = 2;
        }
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
    }
    else {
      if (SVar5 == MESS_ID_CREATE) {
        st::fn_00404962(this_00);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      if (SVar5 == MESS_SHARED_0003) {
        st::fn_00404296(this_00);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
    }
  }
  else if (SVar5 < 0xb537) {
    if (0xb52e < SVar5) {
      iVar7 = *(int *)((int)(message->arg1).ptr + 4);
      local_10 = *(int *)(message->arg1).ptr - this_00->field_003C;
      if (this_00->field_005C == 0) {
        iVar12 = this_00->field_0048;
      }
      else {
        iVar12 = -this_00->field_0044;
      }
      if ((message->arg0).words.low == 0) {
        uVar8 = 1;
      }
      else {
        bVar13 = (char)message->id - 0x2f;
        local_c = (ushort *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar13));
        uVar8 = (uint)((&DAT_00808af7)[(this_00->field_01C9 + (uint)bVar13) * 0x9c] == '\0');
      }
      pbVar11 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01D9,uVar8
                                    );
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,local_10,iVar7 + iVar12,'\x01',
             pbVar11);
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    switch(SVar5) {
    case MESS_SAMPANELTY_B4FF:
    case 0xb500:
    case 0xb501:
    case 0xb502:
    case 0xb503:
    case 0xb504:
    case 0xb505:
    case 0xb506:
      uVar8 = (uint)DAT_0080874d;
      if ((*(char *)(g_bulkInitializedRecords_008087C7 + uVar8) == '\0') && (DAT_0080874f == '\0'))
      {
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
      if ((bVar14) && (DAT_00808783 != '\x01')) {
        iVar7 = (this_00->field_01C9 + (uint)(byte)((char)message->id + 1)) * 0x9c;
        bVar13 = (&DAT_00808af4)[iVar7];
        local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar13));
        if ((DAT_00808a8f == '\0') &&
           (((((&DAT_00808af5)[iVar7] != '\0' && (DAT_0080874d != 0xff)) && (bVar13 != 0xff)) &&
            (DAT_0080874d != bVar13)))) {
          uVar6 = (uint)bVar13;
          local_1c = 0;
          local_18 = 0;
          if (*(char *)(g_bulkInitializedRecords_008087C7 + uVar6) == '\x01') {
            bVar13 = g_playerRelationMatrix[uVar8][uVar6];
            local_20 = 6;
            if ((bVar13 == 0) && (g_playerRelationMatrix[uVar6][uVar8] == 0)) {
              uVar10 = 0xfffffffe;
            }
            else if ((bVar13 == 1) && (g_playerRelationMatrix[uVar6][uVar8] == 0)) {
              uVar10 = 0xffffffff;
            }
            else if ((bVar13 == 0) && (g_playerRelationMatrix[uVar6][uVar8] == 1)) {
              uVar10 = 1;
            }
            else if ((bVar13 == 1) && (g_playerRelationMatrix[uVar6][uVar8] == 1)) {
              uVar10 = 2;
            }
            else {
              uVar10 = 0;
            }
            switch(uVar10) {
            case 1:
              local_1c = uVar6 << 0x10 | uVar8;
              local_18 = 0;
              break;
            case 2:
              local_1c = uVar8 << 0x10 | uVar6;
              local_18 = 0;
              break;
            case 0xfffffffe:
              local_1c = uVar8 << 0x10 | uVar6;
              local_18 = 1;
              break;
            case 0xffffffff:
              local_1c = uVar6 << 0x10 | uVar8;
              local_18 = 1;
            }
          }
          else {
            local_1c = uVar8 << 0x10 | uVar6;
            local_20 = 7;
          }
          if (g_playSystem_00802A38 != nullptr) {
            st::fn_00403C33((undefined4 *)0x5,&local_20,1,0xffffffff);
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
        }
      }
      break;
    case MESS_SAMPANELTY_B50F:
    case 0xb510:
    case 0xb511:
    case 0xb512:
    case 0xb513:
    case 0xb514:
    case 0xb515:
    case 0xb516:
      piVar16 = (message->arg1).ptr;
      local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)((char)message->id - 0xf));
      local_c = (ushort *)(*piVar16 - this_00->field_003C);
      if (this_00->field_005C == 0) {
        iVar7 = this_00->field_0048;
      }
      else {
        iVar7 = -this_00->field_0044;
      }
      local_8 = piVar16[1] + iVar7;
      if (DAT_0080874e == '\x03') {
        bVar13 = 0x73;
      }
      else {
        bVar13 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
      }
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,(int)local_c,local_8,
                   piVar16[2],piVar16[3],bVar13);
      if ((message->arg0).words.low != 0) {
        iVar7 = (this_00->field_01C9 + (local_10 & 0xff)) * 0x9c;
        bVar13 = (&DAT_00808af4)[iVar7];
        local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar13));
        if (((DAT_0080874d != 0xff) && (bVar13 != 0xff)) && (DAT_0080874d != bVar13)) {
          iVar12 = -1;
          uVar8 = (uint)DAT_0080874d;
          bVar3 = g_playerRelationMatrix[uVar8][bVar13];
          if ((bVar3 == 0) && (g_playerRelationMatrix[bVar13][uVar8] == 0)) {
            uVar10 = 0xfffffffe;
          }
          else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar13][uVar8] == 0)) {
            uVar10 = 0xffffffff;
          }
          else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar13][uVar8] == 1)) {
            uVar10 = 1;
          }
          else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar13][uVar8] == 1)) {
            uVar10 = 2;
          }
          else {
            uVar10 = 0;
          }
          switch(uVar10) {
          case 1:
            iVar12 = 0;
            break;
          case 2:
            iVar12 = 2;
            break;
          case 0xfffffffe:
            iVar12 = 3;
            break;
          case 0xffffffff:
            iVar12 = 1;
          }
          if ((-1 < iVar12) && ((&DAT_00808af5)[iVar7] != '\0')) {
            pbVar11 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01D5
                                           ,iVar12);
            st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,(int)local_c,local_8,'\x06',
                   pbVar11);
          }
        }
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      if ((DAT_00808a8f != '\0') &&
         (iVar7 = (this_00->field_01C9 + (local_10 & 0xff)) * 0x9c, (&DAT_00808af5)[iVar7] != '\0'))
      {
        st::external_00000080((LPSTR)&DAT_0080f33a,"%c",
                  g_bulkInitializedRecords_008087C7[(byte)(&DAT_00808af4)[iVar7]].field_0023 + 0x41);
        st::fn_00710A90(this_00->field_01DD,(int)this_00->field_0068,0,(int)local_c,local_8,
                         piVar16[2],piVar16[3]);
        st::fn_007119C0(this_00->field_01DD,&DAT_0080f33a,-1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      break;
    case 0xb51f:
    case 0xb520:
    case 0xb521:
    case 0xb522:
    case 0xb523:
    case 0xb524:
    case 0xb525:
    case MESS_PLAYPANELTY_B526:
      puVar2 = &this_00->field_0x18;
      bVar13 = (char)message->id - 0x1f;
      local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar13));
      iVar7 = this_00->field_01C9 + (uint)bVar13;
      (&DAT_00808af7)[iVar7 * 0x9c] = (&DAT_00808af7)[iVar7 * 0x9c] == '\0';
      this_00->field_0028 = 5;
      st::fn_006E6080(this_00,2,(&this_00->field_01A1)[bVar13],(undefined4 *)puVar2);
      if (this_00->field_01C1 != 0) {
        this_00->field_0028 = 0x25;
        st::fn_006E6080(this_00,2,this_00->field_01C1,(undefined4 *)puVar2);
        if (*(int *)&this_00->field_0x2c != 4) {
          this_00->field_0028 = 0x22;
          *(undefined2 *)&this_00->field_0x2c = 4;
          st::fn_006E6080(this_00,2,this_00->field_01C1,(undefined4 *)puVar2);
          g_currentExceptionFrame = local_64.previous;
          return 0;
        }
      }
    }
  }
  else if (SVar5 == MESS_SHARED_BFFF) {
    st::fn_0040425F(this_00,'\0');
    st::fn_00405E2F(0xae);
  }
  else if (SVar5 == MESS_SHARED_C000) {
    UVar19 = 0x274e;
    pCVar9 = st::fn_0040577C("BUT_MEDIUM",0);
    st::fn_00403508((UPanelTy *)this_00,(AnonShape_0053DAF0_3BDC2979 *)message,pCVar9,UVar19);
    g_currentExceptionFrame = local_64.previous;
    return 0;
  }
  g_currentExceptionFrame = local_64.previous;
  return 0;
}

