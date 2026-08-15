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
  int local_EAX_59;
  int iVar4;
  int local_EAX_155;
  int *piVar5;
  undefined4 *puVar6;
  ccFntTy *pcVar7;
  LPSTR pCVar8;
  ushort *local_EAX_643;
  int uVar4;
  ushort *puVar9;
  AnonPointee_CPanelTy_01B4 *pAVar10;
  ushort *puVar8;
  ushort *local_EAX_898;
  ushort *local_EAX_930;
  ushort *local_EAX_961;
  ushort *local_EAX_996;
  ushort *local_EAX_1028;
  ushort *local_EAX_1062;
  ushort *local_EAX_1116;
  ushort *local_EAX_1161;
  ushort *local_EAX_1205;
  ushort *local_EAX_1276;
  ushort *local_EAX_1307;
  ushort *local_EAX_1342;
  ushort *local_EAX_1374;
  ushort *local_EAX_1418;
  ushort *local_EAX_1450;
  ushort *local_EAX_1485;
  ushort *local_EAX_1516;
  ushort *local_EAX_1561;
  ushort *local_EAX_1593;
  ushort *local_EAX_1637;
  ushort *local_EAX_1669;
  ushort *local_EAX_1704;
  ushort *local_EAX_1735;
  ushort *local_EAX_1775;
  ushort *local_EAX_1812;
  ushort *local_EAX_1856;
  ushort *local_EAX_1907;
  ushort *local_EAX_1945;
  ushort *local_EAX_1983;
  ushort *local_EAX_2020;
  ushort *local_EAX_2057;
  ushort *local_EAX_2094;
  LPSTR local_EAX_2114;
  ushort *local_EAX_2143;
  ushort *local_EAX_2170;
  ushort *local_EAX_2197;
  ushort *local_EAX_2224;
  ushort *local_EAX_2251;
  ushort *local_EAX_2278;
  ushort *local_EAX_2305;
  ushort *local_EAX_2342;
  char *pcVar11;
  int local_EAX_2409;
  int iVar3;
  int iVar22;
  ushort *local_EAX_2689;
  ushort *local_EAX_2737;
  ushort *local_EAX_2786;
  ushort *local_EAX_2838;
  ushort *local_EAX_2877;
  ushort *local_EAX_2916;
  ushort *local_EAX_2955;
  ushort *local_EAX_2994;
  ushort *local_EAX_3033;
  ushort *local_EAX_3072;
  ushort *local_EAX_3111;
  ushort *local_EAX_3150;
  ushort *local_EAX_3189;
  ushort *local_EAX_3217;
  LPSTR pcVar10;
  ushort *local_EAX_3266;
  ushort *local_EAX_3294;
  ushort *local_EAX_3322;
  ushort *local_EAX_3350;
  ushort *local_EAX_3378;
  ushort *local_EAX_3406;
  ushort *local_EAX_3434;
  ushort *local_EAX_3462;
  ushort *local_EAX_3490;
  ushort *local_EAX_3518;
  ushort *local_EAX_3546;
  ushort *local_EAX_3574;
  ushort *local_EAX_3613;
  ushort *local_EAX_3652;
  ushort *local_EAX_3691;
  ushort *local_EAX_3730;
  DArrayTy *pDVar11;
  char *local_EAX_4031;
  ushort *local_EAX_4049;
  char *local_EAX_4099;
  ushort *local_EAX_4116;
  char *pcVar12;
  ushort *local_EAX_4218;
  char *local_EAX_5284;
  int local_EAX_6804;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  ushort **ppuVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  short sVar20;
  ushort uVar21;
  byte bVar22;
  int iVar23;
  int *piVar24;
  int iVar25;
  undefined4 uVar26;
  undefined4 *puVar27;
  short *psVar28;
  undefined4 uVar29;
  InternalExceptionFrame local_78;
  int local_34;
  int local_30;
  byte local_24 [8];
  char *local_1c;
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
  local_EAX_59 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  this_00 = local_18;
  if (local_EAX_59 == 0) {
    g_cPanel_00801688 = local_18;
    if ((char)_DAT_00807348 == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = (-(uint)((char)_DAT_00807348 != '\x01') & 0x80) + 0x70;
    }
    piVar24 = &local_18->field_0068;
    local_18->field_0090 = iVar4;
    local_18->field_008C = iVar4;
    local_10 = (AnonShape_00710790_4CBB90D4 *)&DAT_0000000b;
    do {
      iVar4 = 1;
      puVar9 = PTR_0080679c + 0x14;
      local_8 = piVar24;
      local_EAX_155 = FUN_006b4fe0((int)PTR_0080679c);
      piVar5 = (int *)FUN_006b50c0(*piVar24,piVar24[0x16],(uint)PTR_0080679c[7],local_EAX_155,
                                   (undefined4 *)puVar9,iVar4);
      piVar24[0x46] = (int)piVar5;
      uVar14 = piVar5[5];
      if (uVar14 == 0) {
        uVar14 = ((uint)STField<ushort>(piVar5,0xe) * piVar5[1] + 0x1f >> 3 & 0x1ffffffc) *
                 piVar5[2];
      }
      puVar6 = (undefined4 *)FUN_006b4fa0(piVar5);
      for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar6 = 0x3a3a3a3a;
        puVar6 = puVar6 + 1;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)puVar6 = 0x3a;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      piVar24 = local_8 + 1;
      local_10 = (AnonShape_00710790_4CBB90D4 *)&local_10[-1].field_0x9f;
    } while (local_10 != nullptr);
    local_8 = piVar24;
    pcVar7 = (ccFntTy *)thunk_FUN_004f4640(PTR_0080679c,nullptr,DAT_00807dd9);
    this_00->field_01B8 = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    this_00->field_01B8->field_0096 = 1;
    pcVar7 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806790,"TIME_FONT",0);
    this_00->field_01BC = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    puVar6 = ccFntTy::operator_new(0x19d,g_cMf32_00806790,"HOLD_FONT",0);
    this_00->field_01C0 = puVar6;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    pcVar7 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806790,"MONEY_FONT",0);
    this_00->field_01C4 = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    pcVar7 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806790,"TIMER_FONT",0);
    this_00->field_01CC = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    pcVar7 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806790,"HOLD_FONT",0);
    this_00->field_01C8 = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    pcVar7 = (ccFntTy *)thunk_FUN_004f4c70((int)PTR_0080679c,nullptr,DAT_00807dd9);
    this_00->field_01D0 = pcVar7;
    pcVar7->field_0058 = 0;
    pcVar7->field_005C = 0xffffffff;
    local_10 = (AnonShape_00710790_4CBB90D4 *)this_00->field_01D0;
    if (((ccFntTy *)local_10)->field_00A0 != 0) {
      FUN_00710790(local_10);
    }
    this_00->field_0108 = local_10->field_008A * 5 - 3;
    pcVar7 = (ccFntTy *)thunk_FUN_004f4950(PTR_0080679c,nullptr,DAT_00807dd9);
    this_00->field_01D4 = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    iVar4 = 1;
    bVar2 = 2;
    pCVar8 = thunk_FUN_00571240("BKG_TIMER",0);
    local_EAX_643 = FUN_0070a9f0(g_cMf32_00806790,pCVar8,bVar2,iVar4);
    this_00->field_01AC = local_EAX_643;
    ccFntTy::SetSurf(this_00->field_01CC,(int)local_EAX_643,0,0,0,0,0);
    iVar4 = 1;
    puVar9 = PTR_0080679c + 0x14;
    uVar4 = FUN_006b4fe0((int)PTR_0080679c);
    puVar9 = (ushort *)
             FUN_006b50c0(this_00->field_0104,this_00->field_0108,(uint)PTR_0080679c[7],uVar4,
                          (undefined4 *)puVar9,iVar4);
    this_00->field_01B0 = puVar9;
    local_10 = *(AnonShape_00710790_4CBB90D4 **)(puVar9 + 10);
    if (local_10 == nullptr) {
      local_10 = (AnonShape_00710790_4CBB90D4 *)
                 (((uint)puVar9[7] * *(int *)(puVar9 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar9 + 4));
    }
    puVar6 = (undefined4 *)FUN_006b4fa0((int *)puVar9);
    for (uVar14 = (uint)local_10 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar14 = (uint)local_10 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    ccFntTy::SetSurf(this_00->field_01D0,(int)this_00->field_01B0,0,0,0,0,0);
    iVar4 = 1;
    bVar2 = 2;
    pCVar8 = thunk_FUN_00571240("BK_BRIEF",0);
    pAVar10 = (AnonPointee_CPanelTy_01B4 *)FUN_0070a9f0(g_cMf32_00806790,pCVar8,bVar2,iVar4);
    this_00->field_01B4 = pAVar10;
    puVar8 = cMf32::RecGet(g_cMf32_00806790,1,"INF_LIFELEV",nullptr,1);
    this_00->field_0286 = puVar8;
    local_EAX_898 = cMf32::RecGet(g_cMf32_00806790,1,"INF_LIFELEVU",nullptr,1);
    this_00->field_028A = local_EAX_898;
    local_EAX_930 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,"IND_BKG",0xffffffff,0,1,0,nullptr);
    this_00->field_02B2 = local_EAX_930;
    local_EAX_961 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,"INF_WEAP",0xffffffff,0,1,0,nullptr);
    this_00->field_028E = local_EAX_961;
    local_EAX_996 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,"INF_WEAPD",0xffffffff,0,1,0,nullptr);
    this_00->field_0292 = local_EAX_996;
    local_EAX_1028 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,"UPG_BOAT",0xffffffff,0,1,0,nullptr);
    this_00->field_0296 = local_EAX_1028;
    local_EAX_1062 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,nullptr);
    this_00->field_029A = local_EAX_1062;
    if (DAT_0080874e != '\x03') {
      puVar6 = nullptr;
      iVar23 = 0;
      iVar4 = 1;
      bVar2 = 0;
      uVar14 = 0xffffffff;
      pCVar8 = thunk_FUN_00571240("INF_BKDEEP",0);
      local_EAX_1116 =
           Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806794,CASE_B,pCVar8,uVar14,bVar2,iVar4,iVar23,puVar6);
      this_00->field_029E = local_EAX_1116;
    }
    puVar6 = nullptr;
    iVar23 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar14 = 0xffffffff;
    pCVar8 = thunk_FUN_00571240("INF_DEEP",0);
    local_EAX_1161 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,pCVar8,uVar14,bVar2,iVar4,iVar23,puVar6);
    this_00->field_02A2 = local_EAX_1161;
    puVar6 = nullptr;
    iVar23 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar14 = 0xffffffff;
    pCVar8 = thunk_FUN_00571240("IND_PNT",0);
    local_EAX_1205 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,pCVar8,uVar14,bVar2,iVar4,iVar23,puVar6);
    this_00->field_02B6 = local_EAX_1205;
    if (DAT_0080874d == 0xff) {
      iVar4 = 1;
    }
    else {
      iVar4 = DAT_0080874d + 1;
    }
    wsprintfA(&this_00->field_01E1,"BOATS_%d",iVar4);
    local_EAX_1276 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,&this_00->field_01E1,0xffffffff,0,1,0,nullptr);
    this_00->field_02BA = local_EAX_1276;
    local_EAX_1307 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,"BOATS_R",0xffffffff,0,1,0,nullptr);
    this_00->field_02BE = local_EAX_1307;
    local_EAX_1342 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,&DAT_007c1910,0xffffffff,0,1,0,nullptr);
    this_00->field_02C2 = local_EAX_1342;
    local_EAX_1374 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,"SOBJS",0xffffffff,0,1,0,nullptr);
    this_00->field_02C6 = local_EAX_1374;
    puVar6 = nullptr;
    iVar23 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar14 = 0xffffffff;
    pCVar8 = thunk_FUN_00571240("FRAMES",0);
    local_EAX_1418 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,pCVar8,uVar14,bVar2,iVar4,iVar23,puVar6);
    this_00->field_02CA = local_EAX_1418;
    local_EAX_1450 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,"ARTEFACT",0xffffffff,0,1,0,nullptr);
    this_00->field_02CE = local_EAX_1450;
    local_EAX_1485 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,&DAT_007c204c,0xffffffff,0,1,0,nullptr);
    this_00->field_02D2 = local_EAX_1485;
    local_EAX_1516 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,nullptr);
    this_00->field_02D6 = local_EAX_1516;
    puVar6 = nullptr;
    iVar23 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar14 = 0xffffffff;
    pCVar8 = thunk_FUN_00571240("BUT_PRIORITY",0);
    local_EAX_1561 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,pCVar8,uVar14,bVar2,iVar4,iVar23,puVar6);
    this_00->field_0B17 = local_EAX_1561;
    local_EAX_1593 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,"SPIMG_SI",0xffffffff,0,1,0,nullptr);
    this_00->field_0B1B = local_EAX_1593;
    puVar6 = nullptr;
    iVar23 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar14 = 0xffffffff;
    pCVar8 = thunk_FUN_00571240("BUT_PRODWEAP",0);
    local_EAX_1637 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,pCVar8,uVar14,bVar2,iVar4,iVar23,puVar6);
    this_00->field_09D5 = local_EAX_1637;
    local_EAX_1669 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,"ENOBJ",0xffffffff,0,1,0,nullptr);
    this_00->field_02DA = local_EAX_1669;
    local_EAX_1704 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,"BUT_MSK_SI",0xffffffff,0,1,0,nullptr);
    this_00->field_02DE = local_EAX_1704;
    local_EAX_1735 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,"MHELP",0xffffffff,0,1,0,nullptr);
    this_00->field_077C = local_EAX_1735;
    iVar4 = 1;
    piVar24 = nullptr;
    pCVar8 = thunk_FUN_00571240("INF_BKLUINF",0);
    local_EAX_1775 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    iVar4 = 1;
    piVar24 = nullptr;
    this_00->field_0954 = local_EAX_1775;
    pCVar8 = thunk_FUN_00571240("INF_BKLDINF",0);
    local_EAX_1812 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    iVar4 = 1;
    piVar24 = nullptr;
    this_00->field_0958 = local_EAX_1812;
    this_00->field_02E2 = nullptr;
    pCVar8 = thunk_FUN_00571240("CP2_CLEAR",1);
    local_EAX_1856 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    this_00->field_0974[0] = (uint)local_EAX_1856;
    iVar4 = 1;
    piVar24 = nullptr;
    if (DAT_0080874e == '\x03') {
      local_EAX_2143 = cMf32::RecGet(g_cMf32_00806790,6,"CP2_CLEARUP1",nullptr,1);
      this_00->field_0974[1] = (uint)local_EAX_2143;
      local_EAX_2170 = cMf32::RecGet(g_cMf32_00806790,6,"CP2_CLEARUP2",nullptr,1);
      this_00->field_0974[2] = (uint)local_EAX_2170;
      local_EAX_2197 = cMf32::RecGet(g_cMf32_00806790,6,"CP2_CTRLUP1",nullptr,1);
      this_00->field_0974[3] = (uint)local_EAX_2197;
      local_EAX_2224 = cMf32::RecGet(g_cMf32_00806790,6,"CP2_CTRLUP2",nullptr,1);
      this_00->field_0974[4] = (uint)local_EAX_2224;
      local_EAX_2251 = cMf32::RecGet(g_cMf32_00806790,1,"CP2_CTRLDN1",nullptr,1);
      this_00->field_0974[5] = (uint)local_EAX_2251;
      local_EAX_2278 = cMf32::RecGet(g_cMf32_00806790,6,"CP2_CTRLUP3",nullptr,1);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_0974[6] = (uint)local_EAX_2278;
      bVar2 = 6;
      local_EAX_2114 = "CP2_CTRLUP4";
    }
    else {
      pCVar8 = thunk_FUN_00571240("CP2_1ROW",1);
      local_EAX_1907 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_0974[1] = (uint)local_EAX_1907;
      pCVar8 = thunk_FUN_00571240("CP2_2ROW",1);
      local_EAX_1945 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_0974[2] = (uint)local_EAX_1945;
      pCVar8 = thunk_FUN_00571240("CP2_2ROWC",1);
      local_EAX_1983 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_0974[3] = (uint)local_EAX_1983;
      pCVar8 = thunk_FUN_00571240("BUT_BKGSHOWUPD",0);
      local_EAX_2020 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_0974[4] = (uint)local_EAX_2020;
      pCVar8 = thunk_FUN_00571240("BUT_BKGRETREP",0);
      local_EAX_2057 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_0974[5] = (uint)local_EAX_2057;
      pCVar8 = thunk_FUN_00571240("BK_BOAT_BLD",0);
      local_EAX_2094 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_0974[6] = (uint)local_EAX_2094;
      local_EAX_2114 = thunk_FUN_00571240("BK_BOAT_TRTXT",0);
      bVar2 = 1;
    }
    local_EAX_2305 = cMf32::RecGet(g_cMf32_00806790,bVar2,local_EAX_2114,piVar24,iVar4);
    iVar4 = 1;
    piVar24 = nullptr;
    this_00->field_0974[7] = (uint)local_EAX_2305;
    pCVar8 = thunk_FUN_00571240("INF_BKMAP",0);
    local_EAX_2342 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    this_00->field_0994 = local_EAX_2342;
    local_10 = (AnonShape_00710790_4CBB90D4 *)this_00->field_0227;
    local_8 = (int *)0x3b60;
    local_14 = 4;
    do {
      pcVar11 = LoadResourceString((UINT)local_8,g_hINSTANCE_00807618);
      iVar4 = 1;
      puVar9 = PTR_0080679c + 0x14;
      local_1c = pcVar11;
      local_EAX_2409 = FUN_006b4fe0((int)PTR_0080679c);
      uVar14 = (uint)PTR_0080679c[7];
      iVar3 = FUN_007111c0(this_00->field_01B8,pcVar11);
      iVar22 = FUN_00711110(this_00->field_01B8,pcVar11);
      local_c = (AnonNested_0052BDA0_007E_1B3446E2 *)
                FUN_006b50c0(iVar22,iVar3,uVar14,local_EAX_2409,(undefined4 *)puVar9,iVar4);
      if (local_c != nullptr) {
        uVar14 = local_c->field_0014;
        if (uVar14 == 0) {
          uVar14 = ((uint)local_c->field_000E * local_c->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                   local_c->field_0008;
        }
        puVar6 = (undefined4 *)FUN_006b4fa0((int *)local_c);
        for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar6 = 0x3a3a3a3a;
          puVar6 = puVar6 + 1;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar6 = 0x3a;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
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
    iVar4 = 0;
    puVar16 = this_00->field_0DBF;
    local_14 = 2;
    do {
      puVar6 = nullptr;
      iVar25 = 0;
      iVar23 = 1;
      bVar2 = 0;
      uVar14 = 0xffffffff;
      pCVar8 = FUN_006f2c00("SM_TARGET_",1,iVar4);
      local_EAX_2689 =
           Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806784,CASE_B,pCVar8,uVar14,bVar2,iVar23,iVar25,puVar6);
      *(ushort **)((int)puVar16 + -0x3f7) = local_EAX_2689;
      iVar23 = 1;
      piVar24 = nullptr;
      *puVar16 = (uint)(local_EAX_2689 + 0x18);
      pCVar8 = FUN_006f2c00("SM_CROSS_",1,iVar4);
      local_EAX_2737 = cMf32::RecGet(g_cMf32_00806780,6,pCVar8,piVar24,iVar23);
      puVar16[-2] = (uint)local_EAX_2737;
      iVar4 = iVar4 + 1;
      puVar16 = puVar16 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    iVar4 = 1;
    piVar24 = nullptr;
    pCVar8 = thunk_FUN_00571240("CP4_CLEAR",1);
    local_EAX_2786 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    this_00->field_09D9[0] = (uint)local_EAX_2786;
    iVar4 = 1;
    piVar24 = nullptr;
    if (DAT_0080874e == '\x03') {
      local_EAX_3266 = cMf32::RecGet(g_cMf32_00806790,1,"CP4_CTRLDN1",nullptr,1);
      this_00->field_09D9[1] = (uint)local_EAX_3266;
      local_EAX_3294 = cMf32::RecGet(g_cMf32_00806790,1,"CP4_CTRLDN2",nullptr,1);
      this_00->field_09D9[2] = (uint)local_EAX_3294;
      local_EAX_3322 = cMf32::RecGet(g_cMf32_00806790,1,"CP4_CTRLDN3",nullptr,1);
      this_00->field_09D9[3] = (uint)local_EAX_3322;
      local_EAX_3350 = cMf32::RecGet(g_cMf32_00806790,1,"CP4_CTRLDN4",nullptr,1);
      this_00->field_09D9[4] = (uint)local_EAX_3350;
      local_EAX_3378 = cMf32::RecGet(g_cMf32_00806790,1,"CP4_CTRLDN5",nullptr,1);
      this_00->field_09D9[5] = (uint)local_EAX_3378;
      local_EAX_3406 = cMf32::RecGet(g_cMf32_00806790,1,"CP4_CTRLDN6",nullptr,1);
      this_00->field_09D9[7] = (uint)local_EAX_3406;
      local_EAX_3434 = cMf32::RecGet(g_cMf32_00806790,6,"CP4_CLEARUP1",nullptr,1);
      this_00->field_09D9[8] = (uint)local_EAX_3434;
      local_EAX_3462 = cMf32::RecGet(g_cMf32_00806790,6,"CP4_CLEARUP2",nullptr,1);
      this_00->field_09D9[9] = (uint)local_EAX_3462;
      local_EAX_3490 = cMf32::RecGet(g_cMf32_00806790,6,"CP4_CTRLUP1",nullptr,1);
      this_00->field_09D9[10] = (uint)local_EAX_3490;
      local_EAX_3518 = cMf32::RecGet(g_cMf32_00806790,6,"CP4_CTRLUP2",nullptr,1);
      this_00->field_09D9[0xb] = (uint)local_EAX_3518;
      local_EAX_3546 = cMf32::RecGet(g_cMf32_00806790,1,"BK_RC_SI",nullptr,1);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[0xc] = (uint)local_EAX_3546;
      pcVar10 = "BK_BOAT_SI";
    }
    else {
      pCVar8 = thunk_FUN_00571240("CP4_ROW1",1);
      local_EAX_2838 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[1] = (uint)local_EAX_2838;
      pCVar8 = thunk_FUN_00571240("CP4_ROW2",1);
      local_EAX_2877 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[2] = (uint)local_EAX_2877;
      pCVar8 = thunk_FUN_00571240("CP4_ROW3",1);
      local_EAX_2916 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[3] = (uint)local_EAX_2916;
      pCVar8 = thunk_FUN_00571240("BK_OBJ_BKBUT",0);
      local_EAX_2955 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[4] = (uint)local_EAX_2955;
      pCVar8 = thunk_FUN_00571240("BK_OBJ_BLDREP",0);
      local_EAX_2994 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[5] = (uint)local_EAX_2994;
      pCVar8 = thunk_FUN_00571240("BK_OBJ_BKIND",0);
      local_EAX_3033 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[7] = (uint)local_EAX_3033;
      pCVar8 = thunk_FUN_00571240("BK_OBJ_BKMFACT1",0);
      local_EAX_3072 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[8] = (uint)local_EAX_3072;
      pCVar8 = thunk_FUN_00571240("BK_OBJ_BKRDOCK",0);
      local_EAX_3111 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[9] = (uint)local_EAX_3111;
      pCVar8 = thunk_FUN_00571240("BK_OBJ_BKPLASM1",0);
      local_EAX_3150 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[10] = (uint)local_EAX_3150;
      pCVar8 = thunk_FUN_00571240("BK_OBJ_BKMFACT2",0);
      local_EAX_3189 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      this_00->field_09D9[0xb] = (uint)local_EAX_3189;
      local_EAX_3217 = cMf32::RecGet(g_cMf32_00806790,1,"BK_OBJ_BKPLASM2",nullptr,1);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[0xc] = (uint)local_EAX_3217;
      pcVar10 = thunk_FUN_00571240("BK_ARTEFACT",0);
    }
    local_EAX_3574 = cMf32::RecGet(g_cMf32_00806790,1,pcVar10,piVar24,iVar4);
    iVar4 = 1;
    piVar24 = nullptr;
    this_00->field_09D9[0xe] = (uint)local_EAX_3574;
    pCVar8 = thunk_FUN_00571240("BK_OBJ_STRING",0);
    local_EAX_3613 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    iVar4 = 1;
    piVar24 = nullptr;
    this_00->field_09D9[6] = (uint)local_EAX_3613;
    pCVar8 = thunk_FUN_00571240("PROC_CRAK",0);
    local_EAX_3652 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    iVar4 = 1;
    piVar24 = nullptr;
    this_00->field_09D9[0xd] = (uint)local_EAX_3652;
    pCVar8 = thunk_FUN_00571240("INF_BKRUINF",0);
    local_EAX_3691 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    iVar4 = 1;
    piVar24 = nullptr;
    this_00->field_0B43 = local_EAX_3691;
    pCVar8 = thunk_FUN_00571240("INF_BKRDINF",0);
    local_EAX_3730 = cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    this_00->field_0B47 = local_EAX_3730;
    this_00->field_02E6 = nullptr;
    if (((byte)_DAT_00807348 != 0) && ((byte)_DAT_00807348 < 3)) {
      piVar24 = (int *)&this_00->field_0x1a4;
      iVar23 = 0;
      iVar4 = 1;
      pCVar8 = FUN_006f2c00("BK_HIGHRES",1,_DAT_00807348 & 0xff);
      pCVar8 = thunk_FUN_00571240(pCVar8,iVar4);
      cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar23);
      piVar24 = (int *)&this_00->field_0x1a8;
      iVar23 = 0;
      iVar4 = 1;
      pCVar8 = FUN_006f2c00("BK_HIGHRES",1,_DAT_00807348 & 0xff);
      pCVar8 = thunk_FUN_00571240(pCVar8,iVar4);
      cMf32::RecGet(g_cMf32_00806790,1,pCVar8,piVar24,iVar23);
    }
    pDVar11 = Library::DKW::TBL::DArrayCreate(nullptr,10,9,10);
    this_00->field_0B95 = pDVar11;
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
    puVar6 = nullptr;
    iVar23 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar14 = 6;
    local_EAX_4031 = thunk_FUN_00526100(&this_00->field_0B63,0);
    local_EAX_4049 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_1F,local_EAX_4031,uVar14,bVar2,iVar4,iVar23,puVar6);
    this_00->field_02E2 = local_EAX_4049;
    this_00->field_02EA = 0;
    puVar6 = nullptr;
    iVar23 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar14 = 6;
    this_00->field_02EC = 1;
    this_00->field_02EE = this_00->field_0038;
    local_EAX_4099 = thunk_FUN_00526100(&this_00->field_0C51,0);
    local_EAX_4116 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_1F,local_EAX_4099,uVar14,bVar2,iVar4,iVar23,puVar6);
    this_00->field_02E6 = local_EAX_4116;
    this_00->field_02EB = 0;
    this_00->field_02ED = 1;
    this_00->field_02F2 = this_00->field_0038;
    local_8 = (int *)&this_00->field_0xc87;
    puVar6 = &this_00->field_0D53;
    puVar15 = &this_00->field_0D47;
    local_10 = (AnonShape_00710790_4CBB90D4 *)0x2;
    do {
      local_14 = 6;
      do {
        puVar27 = nullptr;
        iVar23 = 0;
        iVar4 = 1;
        bVar2 = 0;
        uVar14 = 6;
        pcVar12 = (char *)thunk_FUN_004f1d20((undefined1 *)local_8);
        local_EAX_4218 =
             Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_1F,pcVar12,uVar14,bVar2,iVar4,iVar23,puVar27);
        puVar6[-0x12] = local_EAX_4218;
        puVar15[-0xc] = 0;
        *puVar15 = 1;
        local_8 = (int *)((int)local_8 + 0xb);
        *puVar6 = this_00->field_0038;
        puVar6[0xc] = 0;
        puVar6 = puVar6 + 1;
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
    iVar4 = this_00->field_011C;
    piVar24 = &this_00->field_003C;
    this_00->field_0040 = iVar4;
    *piVar24 = iVar4;
    if (DAT_0080874e == '\x03') {
      this_00->field_0048 = this_00->field_006C + iVar4;
    }
    else {
      iVar23 = this_00->field_006C + iVar4;
      this_00->field_0044 = iVar23;
      this_00->field_0048 = this_00->field_0070 + iVar23;
    }
    iVar23 = this_00->field_0074 + this_00->field_0048;
    this_00->field_004C = iVar23;
    uVar14 = iVar23 + this_00->field_0078;
    iVar23 = this_00->field_007C;
    this_00->field_0050 = uVar14;
    if (DAT_0080874e != '\x03') {
      uVar14 = uVar14 + iVar23;
      iVar23 = this_00->field_0080;
      this_00->field_0054 = uVar14;
    }
    this_00->field_0064 = iVar4;
    this_00->field_0058 = uVar14 + iVar23;
    this_00->field_005C = uVar14 + iVar23;
    iVar4 = 10;
    this_00->field_0060 = this_00->field_0088 + this_00->field_005C;
    do {
      *piVar24 = *piVar24 + this_00->field_008C;
      piVar24 = piVar24 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    bVar2 = 0;
    piVar24 = &this_00->field_0094;
    do {
      iVar4 = this_00->field_0120 + -0x9b + this_00->field_0128;
      if ((bVar2 == 1) || (bVar2 == 7)) {
        iVar4 = iVar4 + this_00->field_00C0;
      }
      *piVar24 = iVar4;
      bVar2 = bVar2 + 1;
      piVar24 = piVar24 + 1;
    } while (bVar2 < 0xb);
    bVar2 = 0;
    this_00->field_0241 = (short)DAT_00806734 - (short)this_00->field_0094;
    if ((-(uint)(DAT_00807348 != '\0') & 2) != 0xfffffff7) {
      uVar14 = 0;
      do {
        if (((&this_00->field_0068)[uVar14] != 0) && ((&this_00->field_00C0)[uVar14] != 0)) {
          ppuVar17 = this_00->field_0148 + uVar14;
          FUN_006b2330(g_ddxContext_008075A8,(uint *)ppuVar17,5,0x402946,
                       (&this_00->field_0068)[uVar14],(&this_00->field_00C0)[uVar14],
                       this_00->field_0148[uVar14 + 0xe]);
          FUN_006b1b10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,(uint)*ppuVar17,3);
          FUN_006b28c0(g_ddxContext_008075A8,(uint)*ppuVar17,1);
        }
        bVar2 = bVar2 + 1;
        local_1c = (char *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar2));
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
      iVar4 = this_00->field_0120;
    }
    else {
      iVar4 = this_00->field_0120 - this_00->field_00F8;
    }
    this_00->field_00F0 = iVar4;
    puVar6 = &this_00->field_0174;
    FUN_006b2330(g_ddxContext_008075A8,puVar6,5,0x40402a,this_00->field_00F4,this_00->field_00F8,
                 this_00->field_01AC);
    FUN_006b1b10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,*puVar6,3);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,*puVar6,0xffffffff,this_00->field_00EC,
               this_00->field_00F0);
    puVar6 = &this_00->field_0178;
    this_00->field_00FC = (this_00->field_0124 - this_00->field_0104) + this_00->field_011C;
    this_00->field_0100 = this_00->field_00A4 - this_00->field_0108;
    FUN_006b2330(g_ddxContext_008075A8,puVar6,6,0x40402a,this_00->field_0104,this_00->field_0108,
                 this_00->field_01B0);
    FUN_006b1b10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,*puVar6,3);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,*puVar6,0xffffffff,this_00->field_00FC,
               this_00->field_0100);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar6);
    this_00->field_0114 = this_00->field_01B4->field_0004;
    this_00->field_0118 = this_00->field_01B4->field_0008;
    puVar6 = &this_00->field_017C;
    this_00->field_010C = (this_00->field_0124 - this_00->field_0114) + this_00->field_011C;
    this_00->field_0110 = this_00->field_00A4;
    FUN_006b2330(g_ddxContext_008075A8,puVar6,6,0x401988,this_00->field_0114,this_00->field_0118,
                 (ushort *)this_00->field_01B4);
    FUN_006b1b10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,*puVar6,3);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,*puVar6,0xffffffff,this_00->field_010C,
               this_00->field_0110);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar6);
    psVar28 = (short *)0x1;
    bVar22 = 0;
    bVar2 = 6;
    local_EAX_5284 = thunk_FUN_00526100(nullptr,0);
    psVar28 = Library::Ourlib::MFIMG::mfQmtLoad
                        (g_cMf32_00806790,local_EAX_5284,bVar2,bVar22,psVar28);
    this_00->field_025B = psVar28;
    this_00->field_025F = 0;
    this_00->field_0260 = 2;
    this_00->field_0261 = this_00->field_0038;
    CursorClassTy::sub_0054B6D0(g_cursorClass_00802A30);
    bVar2 = 0;
    ppuVar17 = this_00->field_0148;
    do {
      if (-1 < (int)*ppuVar17) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)*ppuVar17,0xffffffff,(uint)ppuVar17[-0x43],
                   (uint)ppuVar17[-0x2d]);
      }
      bVar2 = bVar2 + 1;
      ppuVar17 = ppuVar17 + 1;
    } while (bVar2 < 0xb);
    if (DAT_0080874e == '\x03') {
      SetControlBoatSI(this_00);
    }
    else {
      SetControlBoat(this_00);
    }
    sub_00501A10(this_00);
    uVar29 = 0;
    uVar26 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(DAT_00807327 & 2 | 1);
    iVar23 = 0;
    pcVar12 = "BUT_MMAPSCIV";
    iVar4 = 0x3afc;
    uVar21 = 0;
    local_34 = (DAT_0080874e == '\x03') + 0x68 + this_00->field_004C;
    sVar20 = 2;
    uVar19 = 0xb105;
    uVar18 = 0xb104;
    local_30 = this_00->field_00A4 + 8;
    this_00->field_0030 = &local_34;
    pCVar8 = thunk_FUN_00571240("BUT_MAPSCIV",0);
    uVar14 = CreateBut(this_00,4,3,*(int *)&this_00->field_0x2c,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,6,pCVar8,uVar18,uVar19,sVar20,uVar21,iVar4,
                       pcVar12,iVar23,uVar26,uVar29);
    this_00->field_09A4[0] = uVar14;
    uVar29 = 0;
    uVar26 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(byte)((DAT_00807327 & 4 | 2) >> 1);
    iVar23 = 0;
    pcVar12 = "BUT_MMAPSMIL";
    iVar4 = 0x3afd;
    uVar21 = 0;
    sVar20 = 2;
    uVar19 = 0xb107;
    uVar18 = 0xb106;
    local_34 = (DAT_0080874e == '\x03') + 0x7b + this_00->field_004C;
    pCVar8 = thunk_FUN_00571240("BUT_MAPSMIL",0);
    uVar14 = CreateBut(this_00,4,3,*(int *)&this_00->field_0x2c,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,6,pCVar8,uVar18,uVar19,sVar20,uVar21,iVar4,
                       pcVar12,iVar23,uVar26,uVar29);
    uVar29 = 0;
    uVar26 = 0;
    iVar23 = 0;
    pcVar12 = "BUT_MMAPZIN";
    iVar4 = 0x3afe;
    uVar21 = 0;
    sVar20 = 2;
    uVar19 = 0xb109;
    uVar18 = 0xb108;
    this_00->field_09A4[1] = uVar14;
    pCVar8 = thunk_FUN_00571240("BUT_MAPZIN",0);
    uVar14 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x58,0x6d,6,pCVar8,uVar18,uVar19,
                       sVar20,uVar21,iVar4,pcVar12,iVar23,uVar26,uVar29);
    uVar29 = 0;
    uVar26 = 0;
    iVar23 = 0;
    pcVar12 = "BUT_MMAPZOUT";
    iVar4 = 0x3aff;
    uVar21 = 0;
    sVar20 = 2;
    uVar19 = 0xb10b;
    uVar18 = 0xb10a;
    this_00->field_09A4[2] = uVar14;
    pCVar8 = thunk_FUN_00571240("BUT_MAPZOUT",0);
    uVar14 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x5d,0x84,6,pCVar8,uVar18,uVar19,
                       sVar20,uVar21,iVar4,pcVar12,iVar23,uVar26,uVar29);
    uVar29 = 0;
    uVar26 = 0;
    iVar23 = 0;
    pcVar12 = "BUT_MMAPTLFT";
    iVar4 = 0x3b00;
    uVar21 = 0;
    sVar20 = 2;
    uVar19 = 0xb10d;
    uVar18 = 0xb10c;
    this_00->field_09A4[3] = uVar14;
    pCVar8 = thunk_FUN_00571240("BUT_MAPTLFT",0);
    uVar14 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0xd,0x84,6,pCVar8,uVar18,uVar19,
                       sVar20,uVar21,iVar4,pcVar12,iVar23,uVar26,uVar29);
    uVar29 = 0;
    uVar26 = 0;
    iVar23 = 0;
    pcVar12 = "BUT_MMAPTRT";
    iVar4 = 0x3b01;
    uVar21 = 0;
    sVar20 = 2;
    uVar19 = 0xb10f;
    uVar18 = 0xb10e;
    this_00->field_09A4[4] = uVar14;
    pCVar8 = thunk_FUN_00571240("BUT_MAPTRT",0);
    uVar14 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x1c,0x6d,6,pCVar8,uVar18,uVar19,
                       sVar20,uVar21,iVar4,pcVar12,iVar23,uVar26,uVar29);
    uVar29 = 0;
    uVar26 = 0;
    iVar23 = 0;
    pcVar12 = "BUT_MMAPDIR";
    iVar4 = 0x3b03;
    uVar21 = 0;
    sVar20 = 2;
    uVar19 = 0xb114;
    uVar18 = 0xb113;
    this_00->field_09A4[5] = uVar14;
    pCVar8 = thunk_FUN_00571240("BUT_MAPDIR",0);
    uVar14 = CreateBut(this_00,4,3,(DAT_00807327 & 8 | 4) >> 2,6,0x20,6,pCVar8,uVar18,uVar19,sVar20,
                       uVar21,iVar4,pcVar12,iVar23,uVar26,uVar29);
    this_00->field_09A4[6] = uVar14;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0BAE;
    local_34 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 4 + this_00->field_004C;
    uVar29 = 0;
    uVar26 = 0;
    iVar23 = 0;
    pcVar12 = nullptr;
    iVar4 = 0x3b02;
    uVar21 = 0;
    sVar20 = 2;
    uVar19 = 0xb112;
    uVar18 = 0xb110;
    local_30 = (DAT_0080874e != '\x03') + 0x65 + this_00->field_00A4;
    this_00->field_0030 = &local_34;
    pCVar8 = thunk_FUN_00571240("BUT_AIASS",0);
    uVar14 = CreateBut(this_00,4,3,(uint)(byte)this_00->field_0BAE,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,1,pCVar8,uVar18,uVar19,sVar20,uVar21,iVar4,
                       pcVar12,iVar23,uVar26,uVar29);
    this_00->field_09C0[0] = uVar14;
    uVar29 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0C0A;
    uVar26 = 0;
    iVar23 = 0;
    pcVar12 = nullptr;
    local_34 = (-(uint)(DAT_0080874e != '\x03') & 3) + 0x81 + this_00->field_004C;
    iVar4 = 0x3b02;
    uVar21 = 0;
    sVar20 = 2;
    uVar19 = 0xb112;
    uVar18 = 0xb111;
    local_30 = (DAT_0080874e != '\x03') + 0x65 + this_00->field_00A4;
    this_00->field_0030 = &local_34;
    pCVar8 = thunk_FUN_00571240("BUT_AIASS",0);
    uVar14 = CreateBut(this_00,4,3,(uint)(byte)this_00->field_0C0A,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,1,pCVar8,uVar18,uVar19,sVar20,uVar21,iVar4,
                       pcVar12,iVar23,uVar26,uVar29);
    this_00->field_09C0[1] = uVar14;
    if (DAT_0080874e == '\x03') {
      SetControlObjSI(this_00,'\x01');
    }
    else {
      SetControlObj(this_00,'\x01');
    }
    sub_00506040(this_00);
    CreateMiniMap(PTR_00806750,(int *)&this_00->field_0x217,0x8b,local_24);
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
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)*DAT_008117bc)(puVar15);
      }
      DAT_0080c4f9 = '\0';
    }
    g_currentExceptionFrame = local_78.previous;
    return;
  }
  g_currentExceptionFrame = local_78.previous;
  local_EAX_6804 =
       ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x1bf,0,local_EAX_59,
                          "%s","CPanelTy::InitCPanel");
  if (local_EAX_6804 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(local_EAX_59,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x1bf);
  return;
}

