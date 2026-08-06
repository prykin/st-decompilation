#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::InitCPanel

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall CPanelTy::InitCPanel(CPanelTy *this)

{
  CPanelTy *this_00;
  byte bVar2;
  int iVar3;
  int local_EAX_155;
  int *piVar4;
  undefined4 *puVar5;
  ccFntTy *pcVar6;
  LPSTR pCVar7;
  ushort *puVar8;
  int uVar4;
  AnonPointee_CPanelTy_01B4 *pAVar9;
  char *pcVar10;
  uint *puVar11;
  int local_EAX_2409;
  DArrayTy *pDVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  ushort **ppuVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  short sVar19;
  ushort uVar20;
  byte bVar21;
  int iVar22;
  int *piVar23;
  undefined4 uVar24;
  int iVar25;
  undefined4 *puVar26;
  short *psVar27;
  undefined4 uVar28;
  InternalExceptionFrame local_78;
  int local_34;
  int local_30;
  byte local_24 [8];
  uint *local_1c;
  CPanelTy *local_18;
  int local_14;
  AnonShape_00710790_4CBB90D4 *local_10;
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
    piVar23 = &local_18->field_0068;
    local_18->field_0090 = iVar3;
    local_18->field_008C = iVar3;
    local_10 = (AnonShape_00710790_4CBB90D4 *)&DAT_0000000b;
    do {
      iVar3 = 1;
      puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
      local_8 = piVar23;
      local_EAX_155 = FUN_006b4fe0(DAT_0080679c);
      piVar4 = (int *)FUN_006b50c0(*piVar23,piVar23[0x16],(uint)*(ushort *)(DAT_0080679c + 0xe),
                                   local_EAX_155,puVar5,iVar3);
      piVar23[0x46] = (int)piVar4;
      uVar14 = piVar4[5];
      if (uVar14 == 0) {
        uVar14 = ((uint)STField<ushort>(piVar4,0xe) * piVar4[1] + 0x1f >> 3 & 0x1ffffffc) *
                 piVar4[2];
      }
      puVar5 = (undefined4 *)FUN_006b4fa0(piVar4);
      for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar5 = 0x3a3a3a3a;
        puVar5 = puVar5 + 1;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)puVar5 = 0x3a;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      piVar23 = local_8 + 1;
      local_10 = (AnonShape_00710790_4CBB90D4 *)&local_10[-1].field_0x9f;
    } while (local_10 != nullptr);
    local_8 = piVar23;
    pcVar6 = (ccFntTy *)thunk_FUN_004f4640(DAT_0080679c,nullptr,DAT_00807dd9);
    this_00->field_01B8 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    this_00->field_01B8->field_0096 = 1;
    pcVar6 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806790,"TIME_FONT",0);
    this_00->field_01BC = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    puVar5 = ccFntTy::operator_new(0x19d,g_cMf32_00806790,"HOLD_FONT",0);
    this_00->field_01C0 = puVar5;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    pcVar6 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806790,"MONEY_FONT",0);
    this_00->field_01C4 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    pcVar6 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806790,"TIMER_FONT",0);
    this_00->field_01CC = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    pcVar6 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806790,"HOLD_FONT",0);
    this_00->field_01C8 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    pcVar6 = (ccFntTy *)thunk_FUN_004f4c70(DAT_0080679c,nullptr,DAT_00807dd9);
    this_00->field_01D0 = pcVar6;
    pcVar6->field_0058 = 0;
    pcVar6->field_005C = 0xffffffff;
    local_10 = (AnonShape_00710790_4CBB90D4 *)this_00->field_01D0;
    if (((ccFntTy *)local_10)->field_00A0 != 0) {
      FUN_00710790(local_10);
    }
    this_00->field_0108 = local_10->field_008A * 5 - 3;
    pcVar6 = (ccFntTy *)thunk_FUN_004f4950(DAT_0080679c,nullptr,DAT_00807dd9);
    this_00->field_01D4 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    iVar3 = 1;
    bVar2 = 2;
    pCVar7 = thunk_FUN_00571240("BKG_TIMER",0);
    puVar8 = (ushort *)FUN_0070a9f0(g_cMf32_00806790,pCVar7,bVar2,iVar3);
    this_00->field_01AC = puVar8;
    ccFntTy::SetSurf(this_00->field_01CC,(int)puVar8,0,0,0,0,0);
    iVar3 = 1;
    puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
    uVar4 = FUN_006b4fe0(DAT_0080679c);
    puVar8 = (ushort *)
             FUN_006b50c0(this_00->field_0104,this_00->field_0108,
                          (uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar5,iVar3);
    this_00->field_01B0 = puVar8;
    local_10 = *(AnonShape_00710790_4CBB90D4 **)(puVar8 + 10);
    if (local_10 == nullptr) {
      local_10 = (AnonShape_00710790_4CBB90D4 *)
                 (((uint)puVar8[7] * *(int *)(puVar8 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar8 + 4));
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int *)puVar8);
    for (uVar14 = (uint)local_10 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar14 = (uint)local_10 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    ccFntTy::SetSurf(this_00->field_01D0,(int)this_00->field_01B0,0,0,0,0,0);
    iVar3 = 1;
    bVar2 = 2;
    pCVar7 = thunk_FUN_00571240("BK_BRIEF",0);
    pAVar9 = (AnonPointee_CPanelTy_01B4 *)FUN_0070a9f0(g_cMf32_00806790,pCVar7,bVar2,iVar3);
    this_00->field_01B4 = pAVar9;
    puVar8 = cMf32::RecGet(g_cMf32_00806790,1,"INF_LIFELEV",nullptr,1);
    this_00->field_0286 = puVar8;
    puVar8 = cMf32::RecGet(g_cMf32_00806790,1,"INF_LIFELEVU",nullptr,1);
    this_00->field_028A = puVar8;
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"IND_BKG",0xffffffff,0,1,0,nullptr);
    this_00->field_02B2 = puVar8;
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"INF_WEAP",0xffffffff,0,1,0,nullptr);
    this_00->field_028E = puVar8;
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"INF_WEAPD",0xffffffff,0,1,0,nullptr);
    this_00->field_0292 = puVar8;
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"UPG_BOAT",0xffffffff,0,1,0,nullptr);
    this_00->field_0296 = puVar8;
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,nullptr);
    this_00->field_029A = puVar8;
    if (DAT_0080874e != '\x03') {
      puVar5 = nullptr;
      iVar22 = 0;
      iVar3 = 1;
      bVar2 = 0;
      uVar14 = 0xffffffff;
      pCVar7 = thunk_FUN_00571240("INF_BKDEEP",0);
      puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806794,CASE_B,pCVar7,uVar14,bVar2,iVar3,iVar22,puVar5);
      this_00->field_029E = puVar8;
    }
    puVar5 = nullptr;
    iVar22 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar14 = 0xffffffff;
    pCVar7 = thunk_FUN_00571240("INF_DEEP",0);
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar7,uVar14,bVar2,iVar3,iVar22,puVar5);
    this_00->field_02A2 = puVar8;
    puVar5 = nullptr;
    iVar22 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar14 = 0xffffffff;
    pCVar7 = thunk_FUN_00571240("IND_PNT",0);
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar7,uVar14,bVar2,iVar3,iVar22,puVar5);
    this_00->field_02B6 = puVar8;
    if (DAT_0080874d == 0xff) {
      iVar3 = 1;
    }
    else {
      iVar3 = DAT_0080874d + 1;
    }
    wsprintfA(&this_00->field_01E1,"BOATS_%d",iVar3);
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&this_00->field_01E1,0xffffffff,0,1,0,nullptr);
    this_00->field_02BA = puVar8;
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"BOATS_R",0xffffffff,0,1,0,nullptr);
    this_00->field_02BE = puVar8;
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c1910,0xffffffff,0,1,0,nullptr);
    this_00->field_02C2 = puVar8;
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"SOBJS",0xffffffff,0,1,0,nullptr);
    this_00->field_02C6 = puVar8;
    puVar5 = nullptr;
    iVar22 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar14 = 0xffffffff;
    pCVar7 = thunk_FUN_00571240("FRAMES",0);
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar7,uVar14,bVar2,iVar3,iVar22,puVar5);
    this_00->field_02CA = puVar8;
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"ARTEFACT",0xffffffff,0,1,0,nullptr);
    this_00->field_02CE = puVar8;
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c204c,0xffffffff,0,1,0,nullptr);
    this_00->field_02D2 = puVar8;
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,nullptr);
    this_00->field_02D6 = puVar8;
    puVar5 = nullptr;
    iVar22 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar14 = 0xffffffff;
    pCVar7 = thunk_FUN_00571240("BUT_PRIORITY",0);
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar7,uVar14,bVar2,iVar3,iVar22,puVar5);
    this_00->field_0B17 = puVar8;
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"SPIMG_SI",0xffffffff,0,1,0,nullptr);
    this_00->field_0B1B = puVar8;
    puVar5 = nullptr;
    iVar22 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar14 = 0xffffffff;
    pCVar7 = thunk_FUN_00571240("BUT_PRODWEAP",0);
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar7,uVar14,bVar2,iVar3,iVar22,puVar5);
    this_00->field_09D5 = puVar8;
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"ENOBJ",0xffffffff,0,1,0,nullptr);
    this_00->field_02DA = puVar8;
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"BUT_MSK_SI",0xffffffff,0,1,0,nullptr
                       );
    this_00->field_02DE = puVar8;
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"MHELP",0xffffffff,0,1,0,nullptr);
    this_00->field_077C = puVar8;
    iVar3 = 1;
    piVar23 = nullptr;
    pCVar7 = thunk_FUN_00571240("INF_BKLUINF",0);
    puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
    iVar3 = 1;
    piVar23 = nullptr;
    this_00->field_0954 = puVar8;
    pCVar7 = thunk_FUN_00571240("INF_BKLDINF",0);
    puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
    iVar3 = 1;
    piVar23 = nullptr;
    this_00->field_0958 = puVar8;
    this_00->field_02E2 = nullptr;
    pCVar7 = thunk_FUN_00571240("CP2_CLEAR",1);
    puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
    this_00->field_0974[0] = (uint)puVar8;
    iVar3 = 1;
    piVar23 = nullptr;
    if (DAT_0080874e == '\x03') {
      puVar8 = cMf32::RecGet(g_cMf32_00806790,6,"CP2_CLEARUP1",nullptr,1);
      this_00->field_0974[1] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,6,"CP2_CLEARUP2",nullptr,1);
      this_00->field_0974[2] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,6,"CP2_CTRLUP1",nullptr,1);
      this_00->field_0974[3] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,6,"CP2_CTRLUP2",nullptr,1);
      this_00->field_0974[4] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,"CP2_CTRLDN1",nullptr,1);
      this_00->field_0974[5] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,6,"CP2_CTRLUP3",nullptr,1);
      iVar3 = 1;
      piVar23 = nullptr;
      pcVar10 = "CP2_CTRLUP4";
      this_00->field_0974[6] = (uint)puVar8;
      bVar2 = 6;
    }
    else {
      pCVar7 = thunk_FUN_00571240("CP2_1ROW",1);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_0974[1] = (uint)puVar8;
      pCVar7 = thunk_FUN_00571240("CP2_2ROW",1);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_0974[2] = (uint)puVar8;
      pCVar7 = thunk_FUN_00571240("CP2_2ROWC",1);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_0974[3] = (uint)puVar8;
      pCVar7 = thunk_FUN_00571240("BUT_BKGSHOWUPD",0);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_0974[4] = (uint)puVar8;
      pCVar7 = thunk_FUN_00571240("BUT_BKGRETREP",0);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_0974[5] = (uint)puVar8;
      pCVar7 = thunk_FUN_00571240("BK_BOAT_BLD",0);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_0974[6] = (uint)puVar8;
      pcVar10 = thunk_FUN_00571240("BK_BOAT_TRTXT",0);
      bVar2 = 1;
    }
    puVar8 = cMf32::RecGet(g_cMf32_00806790,bVar2,pcVar10,piVar23,iVar3);
    iVar3 = 1;
    piVar23 = nullptr;
    this_00->field_0974[7] = (uint)puVar8;
    pCVar7 = thunk_FUN_00571240("INF_BKMAP",0);
    puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
    this_00->field_0994 = puVar8;
    local_10 = (AnonShape_00710790_4CBB90D4 *)this_00->field_0227;
    local_8 = (int *)0x3b60;
    local_14 = 4;
    do {
      puVar11 = (uint *)LoadResourceString((UINT)local_8,g_module_00807618);
      iVar25 = 1;
      puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
      local_1c = puVar11;
      local_EAX_2409 = FUN_006b4fe0(DAT_0080679c);
      uVar14 = (uint)*(ushort *)(DAT_0080679c + 0xe);
      iVar3 = FUN_007111c0(this_00->field_01B8,(char *)puVar11);
      iVar22 = FUN_00711110(this_00->field_01B8,(char *)puVar11);
      local_c = (AnonNested_0052BDA0_007E_1B3446E2 *)
                FUN_006b50c0(iVar22,iVar3,uVar14,local_EAX_2409,puVar5,iVar25);
      if (local_c != nullptr) {
        uVar14 = local_c->field_0014;
        if (uVar14 == 0) {
          uVar14 = ((uint)local_c->field_000E * local_c->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                   local_c->field_0008;
        }
        puVar5 = (undefined4 *)FUN_006b4fa0((int *)local_c);
        for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar5 = 0x3a3a3a3a;
          puVar5 = puVar5 + 1;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar5 = 0x3a;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        ccFntTy::SetSurf(this_00->field_01B8,(int)local_c,0,0,0,0,0);
        ccFntTy::WrStr(this_00->field_01B8,local_1c,0,0,0);
        FUN_006b4b20((int *)local_10,(AnonShape_006B4B20_3D4F4412 *)local_c,0,0x3a);
        FreeAndNull(&local_c);
      }
      local_8 = (int *)((int)local_8 + 1);
      local_10 = (AnonShape_00710790_4CBB90D4 *)((int)&local_10->field_0001 + 3);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    iVar3 = 0;
    puVar11 = this_00->field_0DBF;
    local_14 = 2;
    do {
      puVar5 = nullptr;
      iVar25 = 0;
      iVar22 = 1;
      bVar2 = 0;
      uVar14 = 0xffffffff;
      pCVar7 = FUN_006f2c00("SM_TARGET_",1,iVar3);
      puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806784,CASE_B,pCVar7,uVar14,bVar2,iVar22,iVar25,puVar5);
      *(ushort **)((int)puVar11 + -0x3f7) = puVar8;
      iVar22 = 1;
      piVar23 = nullptr;
      *puVar11 = (uint)(puVar8 + 0x18);
      pCVar7 = FUN_006f2c00("SM_CROSS_",1,iVar3);
      puVar8 = cMf32::RecGet(g_cMf32_00806780,6,pCVar7,piVar23,iVar22);
      puVar11[-2] = (uint)puVar8;
      iVar3 = iVar3 + 1;
      puVar11 = puVar11 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    iVar3 = 1;
    piVar23 = nullptr;
    pCVar7 = thunk_FUN_00571240("CP4_CLEAR",1);
    puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
    this_00->field_09D9[0] = (uint)puVar8;
    iVar3 = 1;
    piVar23 = nullptr;
    if (DAT_0080874e == '\x03') {
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,"CP4_CTRLDN1",nullptr,1);
      this_00->field_09D9[1] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,"CP4_CTRLDN2",nullptr,1);
      this_00->field_09D9[2] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,"CP4_CTRLDN3",nullptr,1);
      this_00->field_09D9[3] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,"CP4_CTRLDN4",nullptr,1);
      this_00->field_09D9[4] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,"CP4_CTRLDN5",nullptr,1);
      this_00->field_09D9[5] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,"CP4_CTRLDN6",nullptr,1);
      this_00->field_09D9[7] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,6,"CP4_CLEARUP1",nullptr,1);
      this_00->field_09D9[8] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,6,"CP4_CLEARUP2",nullptr,1);
      this_00->field_09D9[9] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,6,"CP4_CTRLUP1",nullptr,1);
      this_00->field_09D9[10] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,6,"CP4_CTRLUP2",nullptr,1);
      this_00->field_09D9[0xb] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,"BK_RC_SI",nullptr,1);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_09D9[0xc] = (uint)puVar8;
      pcVar10 = "BK_BOAT_SI";
    }
    else {
      pCVar7 = thunk_FUN_00571240("CP4_ROW1",1);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_09D9[1] = (uint)puVar8;
      pCVar7 = thunk_FUN_00571240("CP4_ROW2",1);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_09D9[2] = (uint)puVar8;
      pCVar7 = thunk_FUN_00571240("CP4_ROW3",1);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_09D9[3] = (uint)puVar8;
      pCVar7 = thunk_FUN_00571240("BK_OBJ_BKBUT",0);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_09D9[4] = (uint)puVar8;
      pCVar7 = thunk_FUN_00571240("BK_OBJ_BLDREP",0);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_09D9[5] = (uint)puVar8;
      pCVar7 = thunk_FUN_00571240("BK_OBJ_BKIND",0);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_09D9[7] = (uint)puVar8;
      pCVar7 = thunk_FUN_00571240("BK_OBJ_BKMFACT1",0);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_09D9[8] = (uint)puVar8;
      pCVar7 = thunk_FUN_00571240("BK_OBJ_BKRDOCK",0);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_09D9[9] = (uint)puVar8;
      pCVar7 = thunk_FUN_00571240("BK_OBJ_BKPLASM1",0);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_09D9[10] = (uint)puVar8;
      pCVar7 = thunk_FUN_00571240("BK_OBJ_BKMFACT2",0);
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
      this_00->field_09D9[0xb] = (uint)puVar8;
      puVar8 = cMf32::RecGet(g_cMf32_00806790,1,"BK_OBJ_BKPLASM2",nullptr,1);
      iVar3 = 1;
      piVar23 = nullptr;
      this_00->field_09D9[0xc] = (uint)puVar8;
      pcVar10 = thunk_FUN_00571240("BK_ARTEFACT",0);
    }
    puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pcVar10,piVar23,iVar3);
    iVar3 = 1;
    piVar23 = nullptr;
    this_00->field_09D9[0xe] = (uint)puVar8;
    pCVar7 = thunk_FUN_00571240("BK_OBJ_STRING",0);
    puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
    iVar3 = 1;
    piVar23 = nullptr;
    this_00->field_09D9[6] = (uint)puVar8;
    pCVar7 = thunk_FUN_00571240("PROC_CRAK",0);
    puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
    iVar3 = 1;
    piVar23 = nullptr;
    this_00->field_09D9[0xd] = (uint)puVar8;
    pCVar7 = thunk_FUN_00571240("INF_BKRUINF",0);
    puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
    iVar3 = 1;
    piVar23 = nullptr;
    this_00->field_0B43 = puVar8;
    pCVar7 = thunk_FUN_00571240("INF_BKRDINF",0);
    puVar8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar3);
    this_00->field_0B47 = puVar8;
    this_00->field_02E6 = nullptr;
    if (((byte)_DAT_00807348 != 0) && ((byte)_DAT_00807348 < 3)) {
      piVar23 = (int *)&this_00->field_0x1a4;
      iVar22 = 0;
      iVar3 = 1;
      pCVar7 = FUN_006f2c00("BK_HIGHRES",1,_DAT_00807348 & 0xff);
      pCVar7 = thunk_FUN_00571240(pCVar7,iVar3);
      cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar22);
      piVar23 = (int *)&this_00->field_0x1a8;
      iVar22 = 0;
      iVar3 = 1;
      pCVar7 = FUN_006f2c00("BK_HIGHRES",1,_DAT_00807348 & 0xff);
      pCVar7 = thunk_FUN_00571240(pCVar7,iVar3);
      cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar23,iVar22);
    }
    pDVar12 = Library::DKW::TBL::DArrayCreate(nullptr,10,9,10);
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
    puVar5 = nullptr;
    iVar22 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar14 = 6;
    pcVar10 = thunk_FUN_00526100(&this_00->field_0B63,0);
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_1F,pcVar10,uVar14,bVar2,iVar3,iVar22,puVar5);
    this_00->field_02E2 = puVar8;
    this_00->field_02EA = 0;
    puVar5 = nullptr;
    iVar22 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar14 = 6;
    this_00->field_02EC = 1;
    this_00->field_02EE = this_00->field_0038;
    pcVar10 = thunk_FUN_00526100(&this_00->field_0C51,0);
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_1F,pcVar10,uVar14,bVar2,iVar3,iVar22,puVar5);
    this_00->field_02E6 = puVar8;
    this_00->field_02EB = 0;
    this_00->field_02ED = 1;
    this_00->field_02F2 = this_00->field_0038;
    local_8 = (int *)&this_00->field_0xc87;
    puVar5 = &this_00->field_0D53;
    puVar15 = &this_00->field_0D47;
    local_10 = (AnonShape_00710790_4CBB90D4 *)0x2;
    do {
      local_14 = 6;
      do {
        puVar26 = nullptr;
        iVar22 = 0;
        iVar3 = 1;
        bVar2 = 0;
        uVar14 = 6;
        pcVar10 = (char *)thunk_FUN_004f1d20((undefined1 *)local_8);
        puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                           (DAT_00806794,CASE_1F,pcVar10,uVar14,bVar2,iVar3,iVar22,puVar26);
        puVar5[-0x12] = puVar8;
        puVar15[-0xc] = 0;
        *puVar15 = 1;
        local_8 = (int *)((int)local_8 + 0xb);
        *puVar5 = this_00->field_0038;
        puVar5[0xc] = 0;
        puVar5 = puVar5 + 1;
        puVar15 = puVar15 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      local_10 = (AnonShape_00710790_4CBB90D4 *)&local_10[-1].field_0x9f;
    } while (local_10 != nullptr);
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
    FUN_006b1a50(g_ddxContext_008075A8,3,nullptr,&this_00->field_011C);
    iVar3 = this_00->field_011C;
    piVar23 = &this_00->field_003C;
    this_00->field_0040 = iVar3;
    *piVar23 = iVar3;
    if (DAT_0080874e == '\x03') {
      this_00->field_0048 = this_00->field_006C + iVar3;
    }
    else {
      iVar22 = this_00->field_006C + iVar3;
      this_00->field_0044 = iVar22;
      this_00->field_0048 = this_00->field_0070 + iVar22;
    }
    iVar22 = this_00->field_0074 + this_00->field_0048;
    this_00->field_004C = iVar22;
    uVar14 = iVar22 + this_00->field_0078;
    iVar22 = this_00->field_007C;
    this_00->field_0050 = uVar14;
    if (DAT_0080874e != '\x03') {
      uVar14 = uVar14 + iVar22;
      iVar22 = this_00->field_0080;
      this_00->field_0054 = uVar14;
    }
    this_00->field_0064 = iVar3;
    this_00->field_0058 = uVar14 + iVar22;
    this_00->field_005C = uVar14 + iVar22;
    iVar3 = 10;
    this_00->field_0060 = this_00->field_0088 + this_00->field_005C;
    do {
      *piVar23 = *piVar23 + this_00->field_008C;
      piVar23 = piVar23 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    bVar2 = 0;
    piVar23 = &this_00->field_0094;
    do {
      iVar3 = this_00->field_0120 + -0x9b + this_00->field_0128;
      if ((bVar2 == 1) || (bVar2 == 7)) {
        iVar3 = iVar3 + this_00->field_00C0;
      }
      *piVar23 = iVar3;
      bVar2 = bVar2 + 1;
      piVar23 = piVar23 + 1;
    } while (bVar2 < 0xb);
    bVar2 = 0;
    this_00->field_0241 = (short)DAT_00806734 - (short)this_00->field_0094;
    if ((-(uint)(DAT_00807348 != '\0') & 2) != 0xfffffff7) {
      uVar14 = 0;
      do {
        if (((&this_00->field_0068)[uVar14] != 0) && ((&this_00->field_00C0)[uVar14] != 0)) {
          ppuVar16 = this_00->field_0148 + uVar14;
          FUN_006b2330(g_ddxContext_008075A8,(uint *)ppuVar16,5,0x402946,
                       (&this_00->field_0068)[uVar14],(&this_00->field_00C0)[uVar14],
                       this_00->field_0148[uVar14 + 0xe]);
          FUN_006b1b10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,(uint)*ppuVar16,3);
          FUN_006b28c0(g_ddxContext_008075A8,(uint)*ppuVar16,1);
        }
        bVar2 = bVar2 + 1;
        local_1c = (uint *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar2));
        uVar14 = (uint)bVar2;
      } while (uVar14 < (-(uint)(DAT_00807348 != '\0') & 2) + 9);
    }
    this_00->field_0134 = 1;
    this_00->field_0138 = 1;
    this_00->field_0130 = 1;
    this_00->field_00F4 = *(uint *)(this_00->field_01AC + 2);
    this_00->field_00F8 = *(uint *)(this_00->field_01AC + 4);
    this_00->field_00EC = (this_00->field_0124 - this_00->field_00F4) + this_00->field_011C;
    if ((DAT_0080c4d3 == 1) || (DAT_0080c4d3 == 3)) {
      iVar3 = this_00->field_0120;
    }
    else {
      iVar3 = this_00->field_0120 - this_00->field_00F8;
    }
    this_00->field_00F0 = iVar3;
    puVar5 = &this_00->field_0174;
    FUN_006b2330(g_ddxContext_008075A8,puVar5,5,0x40402a,this_00->field_00F4,this_00->field_00F8,
                 this_00->field_01AC);
    FUN_006b1b10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,*puVar5,3);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,*puVar5,0xffffffff,this_00->field_00EC,
               this_00->field_00F0);
    puVar5 = &this_00->field_0178;
    this_00->field_00FC = (this_00->field_0124 - this_00->field_0104) + this_00->field_011C;
    this_00->field_0100 = this_00->field_00A4 - this_00->field_0108;
    FUN_006b2330(g_ddxContext_008075A8,puVar5,6,0x40402a,this_00->field_0104,this_00->field_0108,
                 this_00->field_01B0);
    FUN_006b1b10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,*puVar5,3);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,*puVar5,0xffffffff,this_00->field_00FC,
               this_00->field_0100);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar5);
    this_00->field_0114 = this_00->field_01B4->field_0004;
    this_00->field_0118 = this_00->field_01B4->field_0008;
    puVar5 = &this_00->field_017C;
    this_00->field_010C = (this_00->field_0124 - this_00->field_0114) + this_00->field_011C;
    this_00->field_0110 = this_00->field_00A4;
    FUN_006b2330(g_ddxContext_008075A8,puVar5,6,0x401988,this_00->field_0114,this_00->field_0118,
                 (ushort *)this_00->field_01B4);
    FUN_006b1b10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,*puVar5,3);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,*puVar5,0xffffffff,this_00->field_010C,
               this_00->field_0110);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar5);
    psVar27 = (short *)0x1;
    bVar21 = 0;
    bVar2 = 6;
    pcVar10 = thunk_FUN_00526100(nullptr,0);
    psVar27 = Library::Ourlib::MFIMG::mfQmtLoad(g_cMf32_00806790,pcVar10,bVar2,bVar21,psVar27);
    this_00->field_025B = psVar27;
    this_00->field_025F = 0;
    this_00->field_0260 = 2;
    this_00->field_0261 = this_00->field_0038;
    CursorClassTy::sub_0054B6D0(g_cursorClass_00802A30);
    bVar2 = 0;
    ppuVar16 = this_00->field_0148;
    do {
      if (-1 < (int)*ppuVar16) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)*ppuVar16,0xffffffff,(uint)ppuVar16[-0x43],
                   (uint)ppuVar16[-0x2d]);
      }
      bVar2 = bVar2 + 1;
      ppuVar16 = ppuVar16 + 1;
    } while (bVar2 < 0xb);
    if (DAT_0080874e == '\x03') {
      SetControlBoatSI(this_00);
    }
    else {
      SetControlBoat(this_00);
    }
    sub_00501A10(this_00);
    uVar28 = 0;
    uVar24 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(DAT_00807327 & 2 | 1);
    iVar22 = 0;
    pcVar10 = "BUT_MMAPSCIV";
    iVar3 = 0x3afc;
    uVar20 = 0;
    local_34 = (DAT_0080874e == '\x03') + 0x68 + this_00->field_004C;
    sVar19 = 2;
    uVar18 = 0xb105;
    uVar17 = 0xb104;
    local_30 = this_00->field_00A4 + 8;
    this_00->field_0030 = &local_34;
    pCVar7 = thunk_FUN_00571240("BUT_MAPSCIV",0);
    uVar14 = CreateBut(this_00,4,3,*(int *)&this_00->field_0x2c,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,6,pCVar7,uVar17,uVar18,sVar19,uVar20,iVar3,
                       pcVar10,iVar22,uVar24,uVar28);
    this_00->field_09A4[0] = uVar14;
    uVar28 = 0;
    uVar24 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(byte)((DAT_00807327 & 4 | 2) >> 1);
    iVar22 = 0;
    pcVar10 = "BUT_MMAPSMIL";
    iVar3 = 0x3afd;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb107;
    uVar17 = 0xb106;
    local_34 = (DAT_0080874e == '\x03') + 0x7b + this_00->field_004C;
    pCVar7 = thunk_FUN_00571240("BUT_MAPSMIL",0);
    uVar14 = CreateBut(this_00,4,3,*(int *)&this_00->field_0x2c,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,6,pCVar7,uVar17,uVar18,sVar19,uVar20,iVar3,
                       pcVar10,iVar22,uVar24,uVar28);
    uVar28 = 0;
    uVar24 = 0;
    iVar22 = 0;
    pcVar10 = "BUT_MMAPZIN";
    iVar3 = 0x3afe;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb109;
    uVar17 = 0xb108;
    this_00->field_09A4[1] = uVar14;
    pCVar7 = thunk_FUN_00571240("BUT_MAPZIN",0);
    uVar14 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x58,0x6d,6,pCVar7,uVar17,uVar18,
                       sVar19,uVar20,iVar3,pcVar10,iVar22,uVar24,uVar28);
    uVar28 = 0;
    uVar24 = 0;
    iVar22 = 0;
    pcVar10 = "BUT_MMAPZOUT";
    iVar3 = 0x3aff;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb10b;
    uVar17 = 0xb10a;
    this_00->field_09A4[2] = uVar14;
    pCVar7 = thunk_FUN_00571240("BUT_MAPZOUT",0);
    uVar14 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x5d,0x84,6,pCVar7,uVar17,uVar18,
                       sVar19,uVar20,iVar3,pcVar10,iVar22,uVar24,uVar28);
    uVar28 = 0;
    uVar24 = 0;
    iVar22 = 0;
    pcVar10 = "BUT_MMAPTLFT";
    iVar3 = 0x3b00;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb10d;
    uVar17 = 0xb10c;
    this_00->field_09A4[3] = uVar14;
    pCVar7 = thunk_FUN_00571240("BUT_MAPTLFT",0);
    uVar14 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0xd,0x84,6,pCVar7,uVar17,uVar18,
                       sVar19,uVar20,iVar3,pcVar10,iVar22,uVar24,uVar28);
    uVar28 = 0;
    uVar24 = 0;
    iVar22 = 0;
    pcVar10 = "BUT_MMAPTRT";
    iVar3 = 0x3b01;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb10f;
    uVar17 = 0xb10e;
    this_00->field_09A4[4] = uVar14;
    pCVar7 = thunk_FUN_00571240("BUT_MAPTRT",0);
    uVar14 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x1c,0x6d,6,pCVar7,uVar17,uVar18,
                       sVar19,uVar20,iVar3,pcVar10,iVar22,uVar24,uVar28);
    uVar28 = 0;
    uVar24 = 0;
    iVar22 = 0;
    pcVar10 = "BUT_MMAPDIR";
    iVar3 = 0x3b03;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb114;
    uVar17 = 0xb113;
    this_00->field_09A4[5] = uVar14;
    pCVar7 = thunk_FUN_00571240("BUT_MAPDIR",0);
    uVar14 = CreateBut(this_00,4,3,(DAT_00807327 & 8 | 4) >> 2,6,0x20,6,pCVar7,uVar17,uVar18,sVar19,
                       uVar20,iVar3,pcVar10,iVar22,uVar24,uVar28);
    this_00->field_09A4[6] = uVar14;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0BAE;
    local_34 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 4 + this_00->field_004C;
    uVar28 = 0;
    uVar24 = 0;
    iVar22 = 0;
    pcVar10 = nullptr;
    iVar3 = 0x3b02;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb112;
    uVar17 = 0xb110;
    local_30 = (DAT_0080874e != '\x03') + 0x65 + this_00->field_00A4;
    this_00->field_0030 = &local_34;
    pCVar7 = thunk_FUN_00571240("BUT_AIASS",0);
    uVar14 = CreateBut(this_00,4,3,(uint)(byte)this_00->field_0BAE,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,1,pCVar7,uVar17,uVar18,sVar19,uVar20,iVar3,
                       pcVar10,iVar22,uVar24,uVar28);
    this_00->field_09C0[0] = uVar14;
    uVar28 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0C0A;
    uVar24 = 0;
    iVar22 = 0;
    pcVar10 = nullptr;
    local_34 = (-(uint)(DAT_0080874e != '\x03') & 3) + 0x81 + this_00->field_004C;
    iVar3 = 0x3b02;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb112;
    uVar17 = 0xb111;
    local_30 = (DAT_0080874e != '\x03') + 0x65 + this_00->field_00A4;
    this_00->field_0030 = &local_34;
    pCVar7 = thunk_FUN_00571240("BUT_AIASS",0);
    uVar14 = CreateBut(this_00,4,3,(uint)(byte)this_00->field_0C0A,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,1,pCVar7,uVar17,uVar18,sVar19,uVar20,iVar3,
                       pcVar10,iVar22,uVar24,uVar28);
    this_00->field_09C0[1] = uVar14;
    if (DAT_0080874e == '\x03') {
      SetControlObjSI(this_00,'\x01');
    }
    else {
      SetControlObj(this_00,'\x01');
    }
    sub_00506040(this_00);
    CreateMiniMap(DAT_00806750,(int *)&this_00->field_0x217,0x8b,local_24);
    ST3DSMAPContext::sub_006E6400
              (g_sT3DSMAPContext_00807598,(undefined4 *)&this_00->field_0x217,0,0x8b,0x46);
    g_sT3DSMAPContext_00807598->field_0418 = (uint)DAT_00807327;
    thunk_FUN_004a8f20(0);
    thunk_FUN_004a9b60(this_00->field_011C,this_00->field_0120,this_00->field_0124,
                       this_00->field_0128 + -0x9b);
    puVar15 = &this_00->field_0x18;
    this_00->field_0028 = 0x4403;
    FUN_006e6000(this_00,0xf,0,(undefined4 *)puVar15);
    if ((DAT_00807327 & 8) != 0) {
      ST3DSMAPContext::sub_006E6500(g_sT3DSMAPContext_00807598,this_00->field_0227);
    }
    memset((void *)puVar15, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_0028 = 0x13;
    *(undefined4 *)&this_00->field_0x2c = this_00->field_0008;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar15);
    if (DAT_0080c4f9 != '\0') {
      this_00->field_0028 = 0x5dc6;
      *(undefined **)&this_00->field_0x2c = &DAT_0080c4d7;
      if (DAT_008117bc != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*DAT_008117bc)(puVar15);
      }
      DAT_0080c4f9 = '\0';
    }
    g_currentExceptionFrame = local_78.previous;
    return;
  }
  g_currentExceptionFrame = local_78.previous;
  iVar22 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x1bf,0,iVar3,"%s",
                              "CPanelTy::InitCPanel");
  if (iVar22 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x1bf);
  return;
}

