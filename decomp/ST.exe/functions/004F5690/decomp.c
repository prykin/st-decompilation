#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::InitCPanel

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall CPanelTy::InitCPanel(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *this_00;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  ccFntTy *pcVar6;
  LPSTR pCVar7;
  AnonPointee_CPanelTy_01AC *pAVar8;
  ushort *puVar9;
  AnonPointee_CPanelTy_01B4 *pAVar10;
  char *pcVar11;
  uint *resourceString;
  DArrayTy *pDVar12;
  uint uVar13;
  ccFntTy *this_01;
  ccFntTy *this_02;
  ccFntTy *this_03;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  short sVar17;
  undefined2 uVar18;
  byte bVar19;
  int iVar20;
  int *piVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 *puVar24;
  short *psVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  InternalExceptionFrame local_78;
  int local_34;
  int local_30;
  byte local_24 [8];
  uint *local_1c;
  CPanelTy *local_18;
  int local_14;
  ccFntTy *local_10;
  AnonNested_0052BDA0_007E_1B3446E2 *local_c;
  int *local_8;

  local_24[0] = 0xe0;
  local_24[1] = 0xe2;
  local_24[2] = 0xe4;
  local_24[3] = 0xe6;
  local_24[4] = 0xe8;
  local_24[5] = 0xea;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_18 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  this_00 = local_18;
  if (iVar3 == 0) {
    g_cPanel_00801688 = local_18;
    if ((char)_DAT_00807348 == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = (-(uint)((char)_DAT_00807348 != '\x01') & 0x80) + 0x70;
    }
    piVar21 = &local_18->field_0068;
    local_18->field_0090 = iVar3;
    local_18->field_008C = iVar3;
    local_10 = (ccFntTy *)0xb;
    do {
      iVar3 = 1;
      puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
      local_8 = piVar21;
      uVar4 = FUN_006b4fe0(DAT_0080679c);
      iVar3 = FUN_006b50c0(*piVar21,piVar21[0x16],(uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar5
                           ,iVar3);
      piVar21[0x46] = iVar3;
      uVar4 = *(uint *)(iVar3 + 0x14);
      if (uVar4 == 0) {
        uVar4 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar3 + 8);
      }
      puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
      for (uVar13 = uVar4 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar5 = 0x3a3a3a3a;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = 0x3a;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      piVar21 = local_8 + 1;
      local_10 = (ccFntTy *)((int)local_10 + -1);
    } while (local_10 != (ccFntTy *)0x0);
    local_8 = piVar21;
    pcVar6 = (ccFntTy *)thunk_FUN_004f4640(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    this_00->field_01B8 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    this_00->field_01B8->field_0096 = 1;
    pcVar6 = (ccFntTy *)
             ccFntTy::operator(this_01,0x19d,(cMf32 *)DAT_00806790,"TIME_FONT",0);
    this_00->field_01BC = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    puVar5 = ccFntTy::operator(DAT_00806790,0x19d,(cMf32 *)DAT_00806790,"HOLD_FONT",0);
    this_00->field_01C0 = puVar5;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    pcVar6 = (ccFntTy *)
             ccFntTy::operator(this_02,0x19d,(cMf32 *)DAT_00806790,"MONEY_FONT",0);
    this_00->field_01C4 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    pcVar6 = (ccFntTy *)
             ccFntTy::operator(this_03,0x19d,(cMf32 *)DAT_00806790,"TIMER_FONT",0);
    this_00->field_01CC = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    pcVar6 = (ccFntTy *)
             ccFntTy::operator(DAT_00806790,0x19d,(cMf32 *)DAT_00806790,"HOLD_FONT",0);
    this_00->field_01C8 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    pcVar6 = (ccFntTy *)thunk_FUN_004f4c70(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    this_00->field_01D0 = pcVar6;
    pcVar6->field_0058 = 0;
    pcVar6->field_005C = 0xffffffff;
    local_10 = this_00->field_01D0;
    if (local_10->field_00A0 != 0) {
      FUN_00710790((uint *)local_10);
    }
    this_00->field_0108 = *(int *)&local_10->field_0x8a * 5 + -3;
    pcVar6 = (ccFntTy *)thunk_FUN_004f4950(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    this_00->field_01D4 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    iVar3 = 1;
    bVar2 = 2;
    pCVar7 = thunk_FUN_00571240("BKG_TIMER",0);
    pAVar8 = (AnonPointee_CPanelTy_01AC *)FUN_0070a9f0((cMf32 *)DAT_00806790,pCVar7,bVar2,iVar3);
    this_00->field_01AC = pAVar8;
    ccFntTy::SetSurf(this_00->field_01CC,(int)pAVar8,0,0,0,0,0);
    iVar3 = 1;
    puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
    uVar4 = FUN_006b4fe0(DAT_0080679c);
    puVar9 = (ushort *)
             FUN_006b50c0(this_00->field_0104,this_00->field_0108,
                          (uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar5,iVar3);
    this_00->field_01B0 = puVar9;
    local_10 = *(ccFntTy **)(puVar9 + 10);
    if (local_10 == (ccFntTy *)0x0) {
      local_10 = (ccFntTy *)
                 (((uint)puVar9[7] * *(int *)(puVar9 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar9 + 4));
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)puVar9);
    for (uVar4 = (uint)local_10 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = (uint)local_10 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    ccFntTy::SetSurf(this_00->field_01D0,(int)this_00->field_01B0,0,0,0,0,0);
    iVar3 = 1;
    bVar2 = 2;
    pCVar7 = thunk_FUN_00571240("BK_BRIEF",0);
    pAVar10 = (AnonPointee_CPanelTy_01B4 *)FUN_0070a9f0((cMf32 *)DAT_00806790,pCVar7,bVar2,iVar3);
    this_00->field_01B4 = pAVar10;
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,"INF_LIFELEV",(int *)0x0,1);
    this_00->field_0286 = puVar9;
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,"INF_LIFELEVU",(int *)0x0,1);
    this_00->field_028A = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"IND_BKG",0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02B2 = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"INF_WEAP",0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_028E = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"INF_WEAPD",0xffffffff,0,1,0,(undefined4 *)0x0)
    ;
    this_00->field_0292 = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"UPG_BOAT",0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_0296 = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_029A = puVar9;
    if (DAT_0080874e != '\x03') {
      puVar5 = (undefined4 *)0x0;
      iVar20 = 0;
      iVar3 = 1;
      bVar2 = 0;
      uVar4 = 0xffffffff;
      pCVar7 = thunk_FUN_00571240("INF_BKDEEP",0);
      puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806794,CASE_B,pCVar7,uVar4,bVar2,iVar3,iVar20,puVar5);
      this_00->field_029E = puVar9;
    }
    puVar5 = (undefined4 *)0x0;
    iVar20 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 0xffffffff;
    pCVar7 = thunk_FUN_00571240("INF_DEEP",0);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar7,uVar4,bVar2,iVar3,iVar20,puVar5);
    this_00->field_02A2 = puVar9;
    puVar5 = (undefined4 *)0x0;
    iVar20 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 0xffffffff;
    pCVar7 = thunk_FUN_00571240("IND_PNT",0);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar7,uVar4,bVar2,iVar3,iVar20,puVar5);
    this_00->field_02B6 = puVar9;
    if (DAT_0080874d == 0xff) {
      iVar3 = 1;
    }
    else {
      iVar3 = DAT_0080874d + 1;
    }
    wsprintfA(&this_00->field_0x1e1,"BOATS_%d",iVar3);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&this_00->field_0x1e1,0xffffffff,0,1,0,(undefined4 *)0x0
                       );
    this_00->field_02BA = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"BOATS_R",0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02BE = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c1910,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02C2 = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"SOBJS",0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02C6 = puVar9;
    puVar5 = (undefined4 *)0x0;
    iVar20 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 0xffffffff;
    pCVar7 = thunk_FUN_00571240("FRAMES",0);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar7,uVar4,bVar2,iVar3,iVar20,puVar5);
    this_00->field_02CA = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"ARTEFACT",0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02CE = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c204c,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02D2 = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02D6 = puVar9;
    puVar5 = (undefined4 *)0x0;
    iVar20 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 0xffffffff;
    pCVar7 = thunk_FUN_00571240("BUT_PRIORITY",0);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar7,uVar4,bVar2,iVar3,iVar20,puVar5);
    this_00->field_0B17 = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"SPIMG_SI",0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_0B1B = puVar9;
    puVar5 = (undefined4 *)0x0;
    iVar20 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 0xffffffff;
    pCVar7 = thunk_FUN_00571240("BUT_PRODWEAP",0);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar7,uVar4,bVar2,iVar3,iVar20,puVar5);
    this_00->field_09D5 = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"ENOBJ",0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02DA = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"BUT_MSK_SI",0xffffffff,0,1,0,(undefined4 *)0x0
                       );
    this_00->field_02DE = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"MHELP",0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_077C = puVar9;
    iVar3 = 1;
    piVar21 = (int *)0x0;
    pCVar7 = thunk_FUN_00571240("INF_BKLUINF",0);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
    iVar3 = 1;
    piVar21 = (int *)0x0;
    this_00->field_0954 = puVar9;
    pCVar7 = thunk_FUN_00571240("INF_BKLDINF",0);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
    iVar3 = 1;
    piVar21 = (int *)0x0;
    this_00->field_0958 = puVar9;
    this_00->field_02E2 = (ushort *)0x0;
    pCVar7 = thunk_FUN_00571240("CP2_CLEAR",1);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
    this_00->field_0974 = puVar9;
    iVar3 = 1;
    piVar21 = (int *)0x0;
    if (DAT_0080874e == '\x03') {
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,"CP2_CLEARUP1",(int *)0x0,1);
      this_00->field_0978 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,"CP2_CLEARUP2",(int *)0x0,1);
      this_00->field_097C = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,"CP2_CTRLUP1",(int *)0x0,1);
      this_00->field_0980 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,"CP2_CTRLUP2",(int *)0x0,1);
      this_00->field_0984 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,"CP2_CTRLDN1",(int *)0x0,1);
      this_00->field_0988 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,"CP2_CTRLUP3",(int *)0x0,1);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      pcVar11 = "CP2_CTRLUP4";
      this_00->field_098C = puVar9;
      bVar2 = 6;
    }
    else {
      pCVar7 = thunk_FUN_00571240("CP2_1ROW",1);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_0978 = puVar9;
      pCVar7 = thunk_FUN_00571240("CP2_2ROW",1);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_097C = puVar9;
      pCVar7 = thunk_FUN_00571240("CP2_2ROWC",1);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_0980 = puVar9;
      pCVar7 = thunk_FUN_00571240("BUT_BKGSHOWUPD",0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_0984 = puVar9;
      pCVar7 = thunk_FUN_00571240("BUT_BKGRETREP",0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_0988 = puVar9;
      pCVar7 = thunk_FUN_00571240("BK_BOAT_BLD",0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_098C = puVar9;
      pcVar11 = thunk_FUN_00571240("BK_BOAT_TRTXT",0);
      bVar2 = 1;
    }
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,bVar2,pcVar11,piVar21,iVar3);
    iVar3 = 1;
    piVar21 = (int *)0x0;
    this_00->field_0990 = puVar9;
    pCVar7 = thunk_FUN_00571240("INF_BKMAP",0);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
    this_00->field_0994 = puVar9;
    local_10 = (ccFntTy *)&this_00->field_0227;
    local_8 = (int *)0x3b60;
    local_14 = 4;
    do {
      resourceString = (uint *)LoadResourceString((UINT)local_8,g_module_00807618);
      iVar23 = 1;
      puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
      local_1c = resourceString;
      uVar4 = FUN_006b4fe0(DAT_0080679c);
      uVar13 = (uint)*(ushort *)(DAT_0080679c + 0xe);
      iVar3 = FUN_007111c0(this_00->field_01B8,(char *)resourceString);
      iVar20 = FUN_00711110(this_00->field_01B8,(char *)resourceString);
      local_c = (AnonNested_0052BDA0_007E_1B3446E2 *)
                FUN_006b50c0(iVar20,iVar3,uVar13,uVar4,puVar5,iVar23);
      if (local_c != (AnonNested_0052BDA0_007E_1B3446E2 *)0x0) {
        uVar4 = local_c->field_0014;
        if (uVar4 == 0) {
          uVar4 = ((uint)local_c->field_000E * local_c->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                  local_c->field_0008;
        }
        puVar5 = (undefined4 *)FUN_006b4fa0((int)local_c);
        for (uVar13 = uVar4 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar5 = 0x3a3a3a3a;
          puVar5 = puVar5 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar5 = 0x3a;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        ccFntTy::SetSurf(this_00->field_01B8,(int)local_c,0,0,0,0,0);
        ccFntTy::WrStr(this_00->field_01B8,local_1c,0,0,0);
        FUN_006b4b20((int *)local_10,(AnonShape_006B4B20_3D4F4412 *)local_c,0,0x3a);
        FreeAndNull(&local_c);
      }
      local_8 = (int *)((int)local_8 + 1);
      local_10 = (ccFntTy *)((int)local_10 + 4);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    iVar3 = 0;
    puVar5 = &this_00->field_0DBF;
    local_14 = 2;
    do {
      puVar24 = (undefined4 *)0x0;
      iVar23 = 0;
      iVar20 = 1;
      bVar2 = 0;
      uVar4 = 0xffffffff;
      pCVar7 = FUN_006f2c00("SM_TARGET_",1,iVar3);
      puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806784,CASE_B,pCVar7,uVar4,bVar2,iVar20,iVar23,puVar24);
      *(ushort **)((int)puVar5 + -0x3f7) = puVar9;
      iVar20 = 1;
      piVar21 = (int *)0x0;
      *puVar5 = puVar9 + 0x18;
      pCVar7 = FUN_006f2c00("SM_CROSS_",1,iVar3);
      puVar9 = cMf32::RecGet(g_cMf32_00806780,6,pCVar7,piVar21,iVar20);
      puVar5[-2] = puVar9;
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    iVar3 = 1;
    piVar21 = (int *)0x0;
    pCVar7 = thunk_FUN_00571240("CP4_CLEAR",1);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
    this_00->field_09D9 = puVar9;
    iVar3 = 1;
    piVar21 = (int *)0x0;
    if (DAT_0080874e == '\x03') {
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,"CP4_CTRLDN1",(int *)0x0,1);
      this_00->field_09DD = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,"CP4_CTRLDN2",(int *)0x0,1);
      this_00->field_09E1 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,"CP4_CTRLDN3",(int *)0x0,1);
      this_00->field_09E5 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,"CP4_CTRLDN4",(int *)0x0,1);
      this_00->field_09E9 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,"CP4_CTRLDN5",(int *)0x0,1);
      this_00->field_09ED = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,"CP4_CTRLDN6",(int *)0x0,1);
      this_00->field_09F5 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,"CP4_CLEARUP1",(int *)0x0,1);
      this_00->field_09F9 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,"CP4_CLEARUP2",(int *)0x0,1);
      this_00->field_09FD = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,"CP4_CTRLUP1",(int *)0x0,1);
      this_00->field_0A01 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,"CP4_CTRLUP2",(int *)0x0,1);
      this_00->field_0A05 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,"BK_RC_SI",(int *)0x0,1);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_0A09 = puVar9;
      pcVar11 = "BK_BOAT_SI";
    }
    else {
      pCVar7 = thunk_FUN_00571240("CP4_ROW1",1);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_09DD = puVar9;
      pCVar7 = thunk_FUN_00571240("CP4_ROW2",1);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_09E1 = puVar9;
      pCVar7 = thunk_FUN_00571240("CP4_ROW3",1);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_09E5 = puVar9;
      pCVar7 = thunk_FUN_00571240("BK_OBJ_BKBUT",0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_09E9 = puVar9;
      pCVar7 = thunk_FUN_00571240("BK_OBJ_BLDREP",0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_09ED = puVar9;
      pCVar7 = thunk_FUN_00571240("BK_OBJ_BKIND",0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_09F5 = puVar9;
      pCVar7 = thunk_FUN_00571240("BK_OBJ_BKMFACT1",0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_09F9 = puVar9;
      pCVar7 = thunk_FUN_00571240("BK_OBJ_BKRDOCK",0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_09FD = puVar9;
      pCVar7 = thunk_FUN_00571240("BK_OBJ_BKPLASM1",0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_0A01 = puVar9;
      pCVar7 = thunk_FUN_00571240("BK_OBJ_BKMFACT2",0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
      this_00->field_0A05 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,"BK_OBJ_BKPLASM2",(int *)0x0,1);
      iVar3 = 1;
      piVar21 = (int *)0x0;
      this_00->field_0A09 = puVar9;
      pcVar11 = thunk_FUN_00571240("BK_ARTEFACT",0);
    }
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pcVar11,piVar21,iVar3);
    iVar3 = 1;
    piVar21 = (int *)0x0;
    this_00->field_0A11 = puVar9;
    pCVar7 = thunk_FUN_00571240("BK_OBJ_STRING",0);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
    iVar3 = 1;
    piVar21 = (int *)0x0;
    this_00->field_09F1 = puVar9;
    pCVar7 = thunk_FUN_00571240("PROC_CRAK",0);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
    iVar3 = 1;
    piVar21 = (int *)0x0;
    this_00->field_0A0D = puVar9;
    pCVar7 = thunk_FUN_00571240("INF_BKRUINF",0);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
    iVar3 = 1;
    piVar21 = (int *)0x0;
    this_00->field_0B43 = puVar9;
    pCVar7 = thunk_FUN_00571240("INF_BKRDINF",0);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar3);
    this_00->field_0B47 = puVar9;
    this_00->field_02E6 = (ushort *)0x0;
    if (((byte)_DAT_00807348 != 0) && ((byte)_DAT_00807348 < 3)) {
      piVar21 = (int *)&this_00->field_0x1a4;
      iVar20 = 0;
      iVar3 = 1;
      pCVar7 = FUN_006f2c00("BK_HIGHRES",1,_DAT_00807348 & 0xff);
      pCVar7 = thunk_FUN_00571240(pCVar7,iVar3);
      cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar20);
      piVar21 = (int *)&this_00->field_0x1a8;
      iVar20 = 0;
      iVar3 = 1;
      pCVar7 = FUN_006f2c00("BK_HIGHRES",1,_DAT_00807348 & 0xff);
      pCVar7 = thunk_FUN_00571240(pCVar7,iVar3);
      cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar21,iVar20);
    }
    pDVar12 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,9,10);
    this_00->field_0B95 = pDVar12;
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,1,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0B63);
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,2,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0B99);
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,4,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0BF5);
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,5,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0C51);
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,0xe,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0xc87);
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,0xf,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0xcc9);
    puVar5 = (undefined4 *)0x0;
    iVar20 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 6;
    pcVar11 = thunk_FUN_00526100(&this_00->field_0B63,0);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_1F,pcVar11,uVar4,bVar2,iVar3,iVar20,puVar5);
    this_00->field_02E2 = puVar9;
    this_00->field_02EA = 0;
    puVar5 = (undefined4 *)0x0;
    iVar20 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 6;
    this_00->field_02EC = 1;
    this_00->field_02EE = this_00->field_0038;
    pcVar11 = thunk_FUN_00526100(&this_00->field_0C51,0);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_1F,pcVar11,uVar4,bVar2,iVar3,iVar20,puVar5);
    this_00->field_02E6 = puVar9;
    this_00->field_02EB = 0;
    this_00->field_02ED = 1;
    this_00->field_02F2 = this_00->field_0038;
    local_8 = (int *)&this_00->field_0xc87;
    puVar5 = &this_00->field_0D53;
    puVar14 = &this_00->field_0D47;
    local_10 = (ccFntTy *)0x2;
    do {
      local_14 = 6;
      do {
        puVar24 = (undefined4 *)0x0;
        iVar20 = 0;
        iVar3 = 1;
        bVar2 = 0;
        uVar4 = 6;
        pcVar11 = (char *)thunk_FUN_004f1d20((undefined1 *)local_8);
        puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                           (DAT_00806794,CASE_1F,pcVar11,uVar4,bVar2,iVar3,iVar20,puVar24);
        puVar5[-0x12] = puVar9;
        puVar14[-0xc] = 0;
        *puVar14 = 1;
        local_8 = (int *)((int)local_8 + 0xb);
        *puVar5 = this_00->field_0038;
        puVar5[0xc] = 0;
        puVar5 = puVar5 + 1;
        puVar14 = puVar14 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      local_10 = (ccFntTy *)((int)local_10 + -1);
    } while (local_10 != (ccFntTy *)0x0);
    PaintInfoBoat(this_00);
    if (DAT_0080874e == '\x03') {
      PaintCtrlBoatSI(this_00);
    }
    else {
      PaintCtrlBoat(this_00);
    }
    PaintMap(this_00);
    if (DAT_0080874e == '\x03') {
      PaintCtrlObjSI(this_00);
    }
    else {
      PaintCtrlObj(this_00,1);
    }
    PaintInfoObj(this_00);
    FUN_006b1a50(PTR_008075a8,3,(undefined4 *)0x0,&this_00->field_011C);
    iVar3 = this_00->field_011C;
    piVar21 = &this_00->field_003C;
    this_00->field_0040 = iVar3;
    *piVar21 = iVar3;
    if (DAT_0080874e == '\x03') {
      this_00->field_0048 = this_00->field_006C + iVar3;
    }
    else {
      iVar20 = this_00->field_006C + iVar3;
      this_00->field_0044 = iVar20;
      this_00->field_0048 = this_00->field_0070 + iVar20;
    }
    iVar20 = this_00->field_0074 + this_00->field_0048;
    this_00->field_004C = iVar20;
    uVar4 = iVar20 + this_00->field_0078;
    iVar20 = this_00->field_007C;
    this_00->field_0050 = uVar4;
    if (DAT_0080874e != '\x03') {
      uVar4 = uVar4 + iVar20;
      iVar20 = this_00->field_0080;
      this_00->field_0054 = uVar4;
    }
    this_00->field_0064 = iVar3;
    this_00->field_0058 = uVar4 + iVar20;
    this_00->field_005C = uVar4 + iVar20;
    iVar3 = 10;
    this_00->field_0060 = this_00->field_0088 + this_00->field_005C;
    do {
      *piVar21 = *piVar21 + this_00->field_008C;
      piVar21 = piVar21 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    bVar2 = 0;
    piVar21 = &this_00->field_0094;
    do {
      iVar3 = this_00->field_0120 + -0x9b + this_00->field_0128;
      if ((bVar2 == 1) || (bVar2 == 7)) {
        iVar3 = iVar3 + this_00->field_00C0;
      }
      *piVar21 = iVar3;
      bVar2 = bVar2 + 1;
      piVar21 = piVar21 + 1;
    } while (bVar2 < 0xb);
    bVar2 = 0;
    this_00->field_0241 = (short)DAT_00806734 - (short)this_00->field_0094;
    if ((-(uint)(DAT_00807348 != '\0') & 2) != 0xfffffff7) {
      uVar4 = 0;
      do {
        if (((&this_00->field_0068)[uVar4] != 0) && ((&this_00->field_00C0)[uVar4] != 0)) {
          piVar21 = &this_00->field_0148 + uVar4;
          FUN_006b2330(PTR_008075a8,(uint *)piVar21,5,0x402946,(&this_00->field_0068)[uVar4],
                       (&this_00->field_00C0)[uVar4],(&this_00->field_0180)[uVar4]);
          FUN_006b1b10(PTR_008075a8,*piVar21,3);
          FUN_006b28c0(PTR_008075a8,*piVar21,1);
        }
        bVar2 = bVar2 + 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_1c = (uint *)CONCAT31(local_1c._1_3_,bVar2);
        uVar4 = (uint)bVar2;
      } while (uVar4 < (-(uint)(DAT_00807348 != '\0') & 2) + 9);
    }
    this_00->field_0134 = 1;
    this_00->field_0138 = 1;
    this_00->field_0130 = 1;
    this_00->field_00F4 = this_00->field_01AC->field_0004;
    this_00->field_00F8 = this_00->field_01AC->field_0008;
    this_00->field_00EC = (this_00->field_0124 - this_00->field_00F4) + this_00->field_011C;
    if ((DAT_0080c4d3 == 1) || (DAT_0080c4d3 == 3)) {
      iVar3 = this_00->field_0120;
    }
    else {
      iVar3 = this_00->field_0120 - this_00->field_00F8;
    }
    this_00->field_00F0 = iVar3;
    piVar21 = &this_00->field_0174;
    FUN_006b2330(PTR_008075a8,(uint *)piVar21,5,0x40402a,this_00->field_00F4,this_00->field_00F8,
                 (uint)this_00->field_01AC);
    FUN_006b1b10(PTR_008075a8,*piVar21,3);
    Library::DKW::DDX::FUN_006b3640
              ((int *)PTR_008075a8,*piVar21,0xffffffff,this_00->field_00EC,this_00->field_00F0);
    piVar21 = &this_00->field_0178;
    this_00->field_00FC = (this_00->field_0124 - this_00->field_0104) + this_00->field_011C;
    this_00->field_0100 = this_00->field_00A4 - this_00->field_0108;
    FUN_006b2330(PTR_008075a8,(uint *)piVar21,6,0x40402a,this_00->field_0104,this_00->field_0108,
                 (uint)this_00->field_01B0);
    FUN_006b1b10(PTR_008075a8,*piVar21,3);
    Library::DKW::DDX::FUN_006b3640
              ((int *)PTR_008075a8,*piVar21,0xffffffff,this_00->field_00FC,this_00->field_0100);
    FUN_006b3af0((int *)PTR_008075a8,*piVar21);
    this_00->field_0114 = this_00->field_01B4->field_0004;
    this_00->field_0118 = this_00->field_01B4->field_0008;
    piVar21 = &this_00->field_017C;
    this_00->field_010C = (this_00->field_0124 - this_00->field_0114) + this_00->field_011C;
    this_00->field_0110 = this_00->field_00A4;
    FUN_006b2330(PTR_008075a8,(uint *)piVar21,6,0x401988,this_00->field_0114,this_00->field_0118,
                 (uint)this_00->field_01B4);
    FUN_006b1b10(PTR_008075a8,*piVar21,3);
    Library::DKW::DDX::FUN_006b3640
              ((int *)PTR_008075a8,*piVar21,0xffffffff,this_00->field_010C,this_00->field_0110);
    FUN_006b3af0((int *)PTR_008075a8,*piVar21);
    psVar25 = (short *)0x1;
    bVar19 = 0;
    bVar2 = 6;
    pcVar11 = thunk_FUN_00526100((undefined1 *)0x0,0);
    psVar25 = Library::Ourlib::MFIMG::mfQmtLoad((cMf32 *)DAT_00806790,pcVar11,bVar2,bVar19,psVar25);
    this_00->field_025B = psVar25;
    this_00->field_025F = 0;
    this_00->field_0260 = 2;
    this_00->field_0261 = this_00->field_0038;
    thunk_FUN_0054b6d0(g_cursorClass_00802A30);
    bVar2 = 0;
    piVar21 = &this_00->field_0148;
    do {
      if (-1 < *piVar21) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,*piVar21,0xffffffff,piVar21[-0x43],piVar21[-0x2d]);
      }
      bVar2 = bVar2 + 1;
      piVar21 = piVar21 + 1;
    } while (bVar2 < 0xb);
    if (DAT_0080874e == '\x03') {
      SetControlBoatSI(this_00);
    }
    else {
      SetControlBoat(this_00);
    }
    sub_00501A10(this_00);
    uVar26 = 0;
    uVar22 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(DAT_00807327 & 2 | 1);
    iVar20 = 0;
    pcVar11 = "BUT_MMAPSCIV";
    iVar3 = 0x3afc;
    uVar18 = 0;
    local_34 = (DAT_0080874e == '\x03') + 0x68 + this_00->field_004C;
    sVar17 = 2;
    uVar16 = 0xb105;
    uVar15 = 0xb104;
    local_30 = this_00->field_00A4 + 8;
    this_00->field_0030 = &local_34;
    pCVar7 = thunk_FUN_00571240("BUT_MAPSCIV",0);
    uVar15 = CreateBut(this_00,4,3,*(int *)&this_00->field_0x2c,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,6,pCVar7,uVar15,uVar16,sVar17,uVar18,iVar3,
                       pcVar11,iVar20,uVar22,uVar26);
    this_00->field_09A4 = uVar15;
    uVar26 = 0;
    uVar22 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(byte)((DAT_00807327 & 4 | 2) >> 1);
    iVar20 = 0;
    pcVar11 = "BUT_MMAPSMIL";
    iVar3 = 0x3afd;
    uVar18 = 0;
    sVar17 = 2;
    uVar16 = 0xb107;
    uVar15 = 0xb106;
    local_34 = (DAT_0080874e == '\x03') + 0x7b + this_00->field_004C;
    pCVar7 = thunk_FUN_00571240("BUT_MAPSMIL",0);
    uVar15 = CreateBut(this_00,4,3,*(int *)&this_00->field_0x2c,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,6,pCVar7,uVar15,uVar16,sVar17,uVar18,iVar3,
                       pcVar11,iVar20,uVar22,uVar26);
    uVar27 = 0;
    uVar26 = 0;
    iVar20 = 0;
    pcVar11 = "BUT_MMAPZIN";
    iVar3 = 0x3afe;
    uVar18 = 0;
    sVar17 = 2;
    uVar22 = 0xb109;
    uVar16 = 0xb108;
    this_00->field_09A8 = uVar15;
    pCVar7 = thunk_FUN_00571240("BUT_MAPZIN",0);
    uVar15 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x58,0x6d,6,pCVar7,uVar16,uVar22,
                       sVar17,uVar18,iVar3,pcVar11,iVar20,uVar26,uVar27);
    uVar27 = 0;
    uVar26 = 0;
    iVar20 = 0;
    pcVar11 = "BUT_MMAPZOUT";
    iVar3 = 0x3aff;
    uVar18 = 0;
    sVar17 = 2;
    uVar22 = 0xb10b;
    uVar16 = 0xb10a;
    this_00->field_09AC = uVar15;
    pCVar7 = thunk_FUN_00571240("BUT_MAPZOUT",0);
    uVar15 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x5d,0x84,6,pCVar7,uVar16,uVar22,
                       sVar17,uVar18,iVar3,pcVar11,iVar20,uVar26,uVar27);
    uVar27 = 0;
    uVar26 = 0;
    iVar20 = 0;
    pcVar11 = "BUT_MMAPTLFT";
    iVar3 = 0x3b00;
    uVar18 = 0;
    sVar17 = 2;
    uVar22 = 0xb10d;
    uVar16 = 0xb10c;
    this_00->field_09B0 = uVar15;
    pCVar7 = thunk_FUN_00571240("BUT_MAPTLFT",0);
    uVar15 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0xd,0x84,6,pCVar7,uVar16,uVar22,
                       sVar17,uVar18,iVar3,pcVar11,iVar20,uVar26,uVar27);
    uVar27 = 0;
    uVar26 = 0;
    iVar20 = 0;
    pcVar11 = "BUT_MMAPTRT";
    iVar3 = 0x3b01;
    uVar18 = 0;
    sVar17 = 2;
    uVar22 = 0xb10f;
    uVar16 = 0xb10e;
    this_00->field_09B4 = uVar15;
    pCVar7 = thunk_FUN_00571240("BUT_MAPTRT",0);
    uVar15 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x1c,0x6d,6,pCVar7,uVar16,uVar22,
                       sVar17,uVar18,iVar3,pcVar11,iVar20,uVar26,uVar27);
    uVar27 = 0;
    uVar26 = 0;
    iVar20 = 0;
    pcVar11 = "BUT_MMAPDIR";
    iVar3 = 0x3b03;
    uVar18 = 0;
    sVar17 = 2;
    uVar22 = 0xb114;
    uVar16 = 0xb113;
    this_00->field_09B8 = uVar15;
    pCVar7 = thunk_FUN_00571240("BUT_MAPDIR",0);
    uVar15 = CreateBut(this_00,4,3,(DAT_00807327 & 8 | 4) >> 2,6,0x20,6,pCVar7,uVar16,uVar22,sVar17,
                       uVar18,iVar3,pcVar11,iVar20,uVar26,uVar27);
    this_00->field_09BC = uVar15;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0BAE;
    local_34 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 4 + this_00->field_004C;
    uVar26 = 0;
    uVar22 = 0;
    iVar20 = 0;
    pcVar11 = (char *)0x0;
    iVar3 = 0x3b02;
    uVar18 = 0;
    sVar17 = 2;
    uVar16 = 0xb112;
    uVar15 = 0xb110;
    local_30 = (DAT_0080874e != '\x03') + 0x65 + this_00->field_00A4;
    this_00->field_0030 = &local_34;
    pCVar7 = thunk_FUN_00571240("BUT_AIASS",0);
    uVar15 = CreateBut(this_00,4,3,(uint)(byte)this_00->field_0BAE,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,1,pCVar7,uVar15,uVar16,sVar17,uVar18,iVar3,
                       pcVar11,iVar20,uVar22,uVar26);
    this_00->field_09C0 = uVar15;
    uVar26 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0C0A;
    uVar22 = 0;
    iVar20 = 0;
    pcVar11 = (char *)0x0;
    local_34 = (-(uint)(DAT_0080874e != '\x03') & 3) + 0x81 + this_00->field_004C;
    iVar3 = 0x3b02;
    uVar18 = 0;
    sVar17 = 2;
    uVar16 = 0xb112;
    uVar15 = 0xb111;
    local_30 = (DAT_0080874e != '\x03') + 0x65 + this_00->field_00A4;
    this_00->field_0030 = &local_34;
    pCVar7 = thunk_FUN_00571240("BUT_AIASS",0);
    uVar15 = CreateBut(this_00,4,3,(uint)(byte)this_00->field_0C0A,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,1,pCVar7,uVar15,uVar16,sVar17,uVar18,iVar3,
                       pcVar11,iVar20,uVar22,uVar26);
    this_00->field_09C4 = uVar15;
    if (DAT_0080874e == '\x03') {
      SetControlObjSI(this_00,'\x01');
    }
    else {
      SetControlObj(this_00,'\x01');
    }
    sub_00506040(this_00);
    CreateMiniMap(DAT_00806750,(int *)&this_00->field_0x217,0x8b,local_24);
    FUN_006e6400(PTR_00807598,(undefined4 *)&this_00->field_0x217,0,0x8b,0x46);
    PTR_00807598->field_0418 = (uint)DAT_00807327;
    thunk_FUN_004a8f20(0);
    thunk_FUN_004a9b60(this_00->field_011C,this_00->field_0120,this_00->field_0124,
                       this_00->field_0128 + -0x9b);
    puVar14 = &this_00->field_0x18;
    this_00->field_0028 = 0x4403;
    FUN_006e6000(this_00,0xf,0,(undefined4 *)puVar14);
    if ((DAT_00807327 & 8) != 0) {
      FUN_006e6500(PTR_00807598,&this_00->field_0227);
    }
    memset((void *)puVar14, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_0028 = 0x13;
    *(undefined4 *)&this_00->field_0x2c = this_00->field_0008;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar14);
    if (DAT_0080c4f9 != '\0') {
      this_00->field_0028 = 0x5dc6;
      *(undefined **)&this_00->field_0x2c = &DAT_0080c4d7;
      if (DAT_008117bc != (undefined4 *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*DAT_008117bc)(puVar14);
      }
      DAT_0080c4f9 = '\0';
    }
    g_currentExceptionFrame = local_78.previous;
    return;
  }
  g_currentExceptionFrame = local_78.previous;
  iVar20 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x1bf,0,iVar3,"%s",
                              "CPanelTy::InitCPanel");
  if (iVar20 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x1bf);
  return;
}

