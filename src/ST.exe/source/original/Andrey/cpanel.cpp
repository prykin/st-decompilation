#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/cpanel.cpp

// 004F5690 CPanelTy::InitCPanel
#line 4 "decomp/ST.exe/functions/004F5690/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::InitCPanel

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall st::fn_004F5690(CPanelTy *this)

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
  local_EAX_59 = st::fn_0072D7F0(local_78.jumpBuffer,0);
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
      local_EAX_155 = st::fn_006B4FE0((int)PTR_0080679c);
      piVar5 = (int *)st::fn_006B50C0(*piVar24,piVar24[0x16],(uint)PTR_0080679c[7],local_EAX_155,
                                   (undefined4 *)puVar9,iVar4);
      piVar24[0x46] = (int)piVar5;
      uVar14 = piVar5[5];
      if (uVar14 == 0) {
        uVar14 = ((uint)STField<ushort>(piVar5,0xe) * piVar5[1] + 0x1f >> 3 & 0x1ffffffc) *
                 piVar5[2];
      }
      puVar6 = (undefined4 *)st::fn_006B4FA0(piVar5);
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
    pcVar7 = (ccFntTy *)st::fn_00404A16(PTR_0080679c,nullptr,DAT_00807dd9);
    this_00->field_01B8 = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    this_00->field_01B8->field_0096 = 1;
    pcVar7 = (ccFntTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806790,"TIME_FONT",0);
    this_00->field_01BC = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    puVar6 = st::fn_0070CEB0(0x19d,g_cMf32_00806790,"HOLD_FONT",0);
    this_00->field_01C0 = puVar6;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    pcVar7 = (ccFntTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806790,"MONEY_FONT",0);
    this_00->field_01C4 = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    pcVar7 = (ccFntTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806790,"TIMER_FONT",0);
    this_00->field_01CC = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    pcVar7 = (ccFntTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806790,"HOLD_FONT",0);
    this_00->field_01C8 = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    pcVar7 = (ccFntTy *)st::fn_00403945((int)PTR_0080679c,nullptr,DAT_00807dd9);
    this_00->field_01D0 = pcVar7;
    pcVar7->field_0058 = 0;
    pcVar7->field_005C = 0xffffffff;
    local_10 = (AnonShape_00710790_4CBB90D4 *)this_00->field_01D0;
    if (((ccFntTy *)local_10)->field_00A0 != 0) {
      st::fn_00710790(local_10);
    }
    this_00->field_0108 = local_10->field_008A * 5 - 3;
    pcVar7 = (ccFntTy *)st::fn_0040290A(PTR_0080679c,nullptr,DAT_00807dd9);
    this_00->field_01D4 = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    iVar4 = 1;
    bVar2 = 2;
    pCVar8 = st::fn_0040577C("BKG_TIMER",0);
    local_EAX_643 = st::fn_0070A9F0(g_cMf32_00806790,pCVar8,bVar2,iVar4);
    this_00->field_01AC = local_EAX_643;
    st::fn_00710A90(this_00->field_01CC,(int)local_EAX_643,0,0,0,0,0);
    iVar4 = 1;
    puVar9 = PTR_0080679c + 0x14;
    uVar4 = st::fn_006B4FE0((int)PTR_0080679c);
    puVar9 = (ushort *)
             st::fn_006B50C0(this_00->field_0104,this_00->field_0108,(uint)PTR_0080679c[7],uVar4,
                          (undefined4 *)puVar9,iVar4);
    this_00->field_01B0 = puVar9;
    local_10 = *(AnonShape_00710790_4CBB90D4 **)(puVar9 + 10);
    if (local_10 == nullptr) {
      local_10 = (AnonShape_00710790_4CBB90D4 *)
                 (((uint)puVar9[7] * *(int *)(puVar9 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar9 + 4));
    }
    puVar6 = (undefined4 *)st::fn_006B4FA0((int *)puVar9);
    for (uVar14 = (uint)local_10 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar14 = (uint)local_10 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    st::fn_00710A90(this_00->field_01D0,(int)this_00->field_01B0,0,0,0,0,0);
    iVar4 = 1;
    bVar2 = 2;
    pCVar8 = st::fn_0040577C("BK_BRIEF",0);
    pAVar10 = (AnonPointee_CPanelTy_01B4 *)st::fn_0070A9F0(g_cMf32_00806790,pCVar8,bVar2,iVar4);
    this_00->field_01B4 = pAVar10;
    puVar8 = st::fn_006F1CE0(g_cMf32_00806790,1,"INF_LIFELEV",nullptr,1);
    this_00->field_0286 = puVar8;
    local_EAX_898 = st::fn_006F1CE0(g_cMf32_00806790,1,"INF_LIFELEVU",nullptr,1);
    this_00->field_028A = local_EAX_898;
    local_EAX_930 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,"IND_BKG",0xffffffff,0,1,0,nullptr);
    this_00->field_02B2 = local_EAX_930;
    local_EAX_961 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,"INF_WEAP",0xffffffff,0,1,0,nullptr);
    this_00->field_028E = local_EAX_961;
    local_EAX_996 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,"INF_WEAPD",0xffffffff,0,1,0,nullptr);
    this_00->field_0292 = local_EAX_996;
    local_EAX_1028 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,"UPG_BOAT",0xffffffff,0,1,0,nullptr);
    this_00->field_0296 = local_EAX_1028;
    local_EAX_1062 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,nullptr);
    this_00->field_029A = local_EAX_1062;
    if (DAT_0080874e != '\x03') {
      puVar6 = nullptr;
      iVar23 = 0;
      iVar4 = 1;
      bVar2 = 0;
      uVar14 = 0xffffffff;
      pCVar8 = st::fn_0040577C("INF_BKDEEP",0);
      local_EAX_1116 =
           st::fn_00709AF0
                     (PTR_00806794,CASE_B,pCVar8,uVar14,bVar2,iVar4,iVar23,puVar6);
      this_00->field_029E = local_EAX_1116;
    }
    puVar6 = nullptr;
    iVar23 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar14 = 0xffffffff;
    pCVar8 = st::fn_0040577C("INF_DEEP",0);
    local_EAX_1161 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,pCVar8,uVar14,bVar2,iVar4,iVar23,puVar6);
    this_00->field_02A2 = local_EAX_1161;
    puVar6 = nullptr;
    iVar23 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar14 = 0xffffffff;
    pCVar8 = st::fn_0040577C("IND_PNT",0);
    local_EAX_1205 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,pCVar8,uVar14,bVar2,iVar4,iVar23,puVar6);
    this_00->field_02B6 = local_EAX_1205;
    if (DAT_0080874d == 0xff) {
      iVar4 = 1;
    }
    else {
      iVar4 = DAT_0080874d + 1;
    }
    st::external_00000080(&this_00->field_01E1,"BOATS_%d",iVar4);
    local_EAX_1276 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,&this_00->field_01E1,0xffffffff,0,1,0,nullptr);
    this_00->field_02BA = local_EAX_1276;
    local_EAX_1307 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,"BOATS_R",0xffffffff,0,1,0,nullptr);
    this_00->field_02BE = local_EAX_1307;
    local_EAX_1342 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,&DAT_007c1910,0xffffffff,0,1,0,nullptr);
    this_00->field_02C2 = local_EAX_1342;
    local_EAX_1374 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,"SOBJS",0xffffffff,0,1,0,nullptr);
    this_00->field_02C6 = local_EAX_1374;
    puVar6 = nullptr;
    iVar23 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar14 = 0xffffffff;
    pCVar8 = st::fn_0040577C("FRAMES",0);
    local_EAX_1418 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,pCVar8,uVar14,bVar2,iVar4,iVar23,puVar6);
    this_00->field_02CA = local_EAX_1418;
    local_EAX_1450 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,"ARTEFACT",0xffffffff,0,1,0,nullptr);
    this_00->field_02CE = local_EAX_1450;
    local_EAX_1485 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,&DAT_007c204c,0xffffffff,0,1,0,nullptr);
    this_00->field_02D2 = local_EAX_1485;
    local_EAX_1516 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,nullptr);
    this_00->field_02D6 = local_EAX_1516;
    puVar6 = nullptr;
    iVar23 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar14 = 0xffffffff;
    pCVar8 = st::fn_0040577C("BUT_PRIORITY",0);
    local_EAX_1561 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,pCVar8,uVar14,bVar2,iVar4,iVar23,puVar6);
    this_00->field_0B17 = local_EAX_1561;
    local_EAX_1593 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,"SPIMG_SI",0xffffffff,0,1,0,nullptr);
    this_00->field_0B1B = local_EAX_1593;
    puVar6 = nullptr;
    iVar23 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar14 = 0xffffffff;
    pCVar8 = st::fn_0040577C("BUT_PRODWEAP",0);
    local_EAX_1637 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,pCVar8,uVar14,bVar2,iVar4,iVar23,puVar6);
    this_00->field_09D5 = local_EAX_1637;
    local_EAX_1669 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,"ENOBJ",0xffffffff,0,1,0,nullptr);
    this_00->field_02DA = local_EAX_1669;
    local_EAX_1704 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,"BUT_MSK_SI",0xffffffff,0,1,0,nullptr);
    this_00->field_02DE = local_EAX_1704;
    local_EAX_1735 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,"MHELP",0xffffffff,0,1,0,nullptr);
    this_00->field_077C = local_EAX_1735;
    iVar4 = 1;
    piVar24 = nullptr;
    pCVar8 = st::fn_0040577C("INF_BKLUINF",0);
    local_EAX_1775 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    iVar4 = 1;
    piVar24 = nullptr;
    this_00->field_0954 = local_EAX_1775;
    pCVar8 = st::fn_0040577C("INF_BKLDINF",0);
    local_EAX_1812 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    iVar4 = 1;
    piVar24 = nullptr;
    this_00->field_0958 = local_EAX_1812;
    this_00->field_02E2 = nullptr;
    pCVar8 = st::fn_0040577C("CP2_CLEAR",1);
    local_EAX_1856 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    this_00->field_0974[0] = (uint)local_EAX_1856;
    iVar4 = 1;
    piVar24 = nullptr;
    if (DAT_0080874e == '\x03') {
      local_EAX_2143 = st::fn_006F1CE0(g_cMf32_00806790,6,"CP2_CLEARUP1",nullptr,1);
      this_00->field_0974[1] = (uint)local_EAX_2143;
      local_EAX_2170 = st::fn_006F1CE0(g_cMf32_00806790,6,"CP2_CLEARUP2",nullptr,1);
      this_00->field_0974[2] = (uint)local_EAX_2170;
      local_EAX_2197 = st::fn_006F1CE0(g_cMf32_00806790,6,"CP2_CTRLUP1",nullptr,1);
      this_00->field_0974[3] = (uint)local_EAX_2197;
      local_EAX_2224 = st::fn_006F1CE0(g_cMf32_00806790,6,"CP2_CTRLUP2",nullptr,1);
      this_00->field_0974[4] = (uint)local_EAX_2224;
      local_EAX_2251 = st::fn_006F1CE0(g_cMf32_00806790,1,"CP2_CTRLDN1",nullptr,1);
      this_00->field_0974[5] = (uint)local_EAX_2251;
      local_EAX_2278 = st::fn_006F1CE0(g_cMf32_00806790,6,"CP2_CTRLUP3",nullptr,1);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_0974[6] = (uint)local_EAX_2278;
      bVar2 = 6;
      local_EAX_2114 = "CP2_CTRLUP4";
    }
    else {
      pCVar8 = st::fn_0040577C("CP2_1ROW",1);
      local_EAX_1907 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_0974[1] = (uint)local_EAX_1907;
      pCVar8 = st::fn_0040577C("CP2_2ROW",1);
      local_EAX_1945 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_0974[2] = (uint)local_EAX_1945;
      pCVar8 = st::fn_0040577C("CP2_2ROWC",1);
      local_EAX_1983 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_0974[3] = (uint)local_EAX_1983;
      pCVar8 = st::fn_0040577C("BUT_BKGSHOWUPD",0);
      local_EAX_2020 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_0974[4] = (uint)local_EAX_2020;
      pCVar8 = st::fn_0040577C("BUT_BKGRETREP",0);
      local_EAX_2057 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_0974[5] = (uint)local_EAX_2057;
      pCVar8 = st::fn_0040577C("BK_BOAT_BLD",0);
      local_EAX_2094 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_0974[6] = (uint)local_EAX_2094;
      local_EAX_2114 = st::fn_0040577C("BK_BOAT_TRTXT",0);
      bVar2 = 1;
    }
    local_EAX_2305 = st::fn_006F1CE0(g_cMf32_00806790,bVar2,local_EAX_2114,piVar24,iVar4);
    iVar4 = 1;
    piVar24 = nullptr;
    this_00->field_0974[7] = (uint)local_EAX_2305;
    pCVar8 = st::fn_0040577C("INF_BKMAP",0);
    local_EAX_2342 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    this_00->field_0994 = local_EAX_2342;
    local_10 = (AnonShape_00710790_4CBB90D4 *)this_00->field_0227;
    local_8 = (int *)0x3b60;
    local_14 = 4;
    do {
      pcVar11 = st::fn_006B0140((UINT)local_8,g_hINSTANCE_00807618);
      iVar4 = 1;
      puVar9 = PTR_0080679c + 0x14;
      local_1c = pcVar11;
      local_EAX_2409 = st::fn_006B4FE0((int)PTR_0080679c);
      uVar14 = (uint)PTR_0080679c[7];
      iVar3 = st::fn_007111C0(this_00->field_01B8,pcVar11);
      iVar22 = st::fn_00711110(this_00->field_01B8,pcVar11);
      local_c = (AnonNested_0052BDA0_007E_1B3446E2 *)
                st::fn_006B50C0(iVar22,iVar3,uVar14,local_EAX_2409,(undefined4 *)puVar9,iVar4);
      if (local_c != nullptr) {
        uVar14 = local_c->field_0014;
        if (uVar14 == 0) {
          uVar14 = ((uint)local_c->field_000E * local_c->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                   local_c->field_0008;
        }
        puVar6 = (undefined4 *)st::fn_006B4FA0((int *)local_c);
        for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar6 = 0x3a3a3a3a;
          puVar6 = puVar6 + 1;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar6 = 0x3a;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        st::fn_00710A90(this_00->field_01B8,(int)local_c,0,0,0,0,0);
        st::fn_007119C0(this_00->field_01B8,local_1c,0,0,0);
        st::fn_006B4B20((int *)local_10,(AnonShape_006B4B20_3D4F4412 *)local_c,0,0x3a);
        st::fn_006AB060(&local_c);
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
      pCVar8 = st::fn_006F2C00("SM_TARGET_",1,iVar4);
      local_EAX_2689 =
           st::fn_00709AF0
                     (PTR_00806784,CASE_B,pCVar8,uVar14,bVar2,iVar23,iVar25,puVar6);
      *(ushort **)((int)puVar16 + -0x3f7) = local_EAX_2689;
      iVar23 = 1;
      piVar24 = nullptr;
      *puVar16 = (uint)(local_EAX_2689 + 0x18);
      pCVar8 = st::fn_006F2C00("SM_CROSS_",1,iVar4);
      local_EAX_2737 = st::fn_006F1CE0(g_cMf32_00806780,6,pCVar8,piVar24,iVar23);
      puVar16[-2] = (uint)local_EAX_2737;
      iVar4 = iVar4 + 1;
      puVar16 = puVar16 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    iVar4 = 1;
    piVar24 = nullptr;
    pCVar8 = st::fn_0040577C("CP4_CLEAR",1);
    local_EAX_2786 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    this_00->field_09D9[0] = (uint)local_EAX_2786;
    iVar4 = 1;
    piVar24 = nullptr;
    if (DAT_0080874e == '\x03') {
      local_EAX_3266 = st::fn_006F1CE0(g_cMf32_00806790,1,"CP4_CTRLDN1",nullptr,1);
      this_00->field_09D9[1] = (uint)local_EAX_3266;
      local_EAX_3294 = st::fn_006F1CE0(g_cMf32_00806790,1,"CP4_CTRLDN2",nullptr,1);
      this_00->field_09D9[2] = (uint)local_EAX_3294;
      local_EAX_3322 = st::fn_006F1CE0(g_cMf32_00806790,1,"CP4_CTRLDN3",nullptr,1);
      this_00->field_09D9[3] = (uint)local_EAX_3322;
      local_EAX_3350 = st::fn_006F1CE0(g_cMf32_00806790,1,"CP4_CTRLDN4",nullptr,1);
      this_00->field_09D9[4] = (uint)local_EAX_3350;
      local_EAX_3378 = st::fn_006F1CE0(g_cMf32_00806790,1,"CP4_CTRLDN5",nullptr,1);
      this_00->field_09D9[5] = (uint)local_EAX_3378;
      local_EAX_3406 = st::fn_006F1CE0(g_cMf32_00806790,1,"CP4_CTRLDN6",nullptr,1);
      this_00->field_09D9[7] = (uint)local_EAX_3406;
      local_EAX_3434 = st::fn_006F1CE0(g_cMf32_00806790,6,"CP4_CLEARUP1",nullptr,1);
      this_00->field_09D9[8] = (uint)local_EAX_3434;
      local_EAX_3462 = st::fn_006F1CE0(g_cMf32_00806790,6,"CP4_CLEARUP2",nullptr,1);
      this_00->field_09D9[9] = (uint)local_EAX_3462;
      local_EAX_3490 = st::fn_006F1CE0(g_cMf32_00806790,6,"CP4_CTRLUP1",nullptr,1);
      this_00->field_09D9[10] = (uint)local_EAX_3490;
      local_EAX_3518 = st::fn_006F1CE0(g_cMf32_00806790,6,"CP4_CTRLUP2",nullptr,1);
      this_00->field_09D9[0xb] = (uint)local_EAX_3518;
      local_EAX_3546 = st::fn_006F1CE0(g_cMf32_00806790,1,"BK_RC_SI",nullptr,1);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[0xc] = (uint)local_EAX_3546;
      pcVar10 = "BK_BOAT_SI";
    }
    else {
      pCVar8 = st::fn_0040577C("CP4_ROW1",1);
      local_EAX_2838 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[1] = (uint)local_EAX_2838;
      pCVar8 = st::fn_0040577C("CP4_ROW2",1);
      local_EAX_2877 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[2] = (uint)local_EAX_2877;
      pCVar8 = st::fn_0040577C("CP4_ROW3",1);
      local_EAX_2916 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[3] = (uint)local_EAX_2916;
      pCVar8 = st::fn_0040577C("BK_OBJ_BKBUT",0);
      local_EAX_2955 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[4] = (uint)local_EAX_2955;
      pCVar8 = st::fn_0040577C("BK_OBJ_BLDREP",0);
      local_EAX_2994 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[5] = (uint)local_EAX_2994;
      pCVar8 = st::fn_0040577C("BK_OBJ_BKIND",0);
      local_EAX_3033 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[7] = (uint)local_EAX_3033;
      pCVar8 = st::fn_0040577C("BK_OBJ_BKMFACT1",0);
      local_EAX_3072 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[8] = (uint)local_EAX_3072;
      pCVar8 = st::fn_0040577C("BK_OBJ_BKRDOCK",0);
      local_EAX_3111 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[9] = (uint)local_EAX_3111;
      pCVar8 = st::fn_0040577C("BK_OBJ_BKPLASM1",0);
      local_EAX_3150 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[10] = (uint)local_EAX_3150;
      pCVar8 = st::fn_0040577C("BK_OBJ_BKMFACT2",0);
      local_EAX_3189 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
      this_00->field_09D9[0xb] = (uint)local_EAX_3189;
      local_EAX_3217 = st::fn_006F1CE0(g_cMf32_00806790,1,"BK_OBJ_BKPLASM2",nullptr,1);
      iVar4 = 1;
      piVar24 = nullptr;
      this_00->field_09D9[0xc] = (uint)local_EAX_3217;
      pcVar10 = st::fn_0040577C("BK_ARTEFACT",0);
    }
    local_EAX_3574 = st::fn_006F1CE0(g_cMf32_00806790,1,pcVar10,piVar24,iVar4);
    iVar4 = 1;
    piVar24 = nullptr;
    this_00->field_09D9[0xe] = (uint)local_EAX_3574;
    pCVar8 = st::fn_0040577C("BK_OBJ_STRING",0);
    local_EAX_3613 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    iVar4 = 1;
    piVar24 = nullptr;
    this_00->field_09D9[6] = (uint)local_EAX_3613;
    pCVar8 = st::fn_0040577C("PROC_CRAK",0);
    local_EAX_3652 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    iVar4 = 1;
    piVar24 = nullptr;
    this_00->field_09D9[0xd] = (uint)local_EAX_3652;
    pCVar8 = st::fn_0040577C("INF_BKRUINF",0);
    local_EAX_3691 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    iVar4 = 1;
    piVar24 = nullptr;
    this_00->field_0B43 = local_EAX_3691;
    pCVar8 = st::fn_0040577C("INF_BKRDINF",0);
    local_EAX_3730 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar4);
    this_00->field_0B47 = local_EAX_3730;
    this_00->field_02E6 = nullptr;
    if (((byte)_DAT_00807348 != 0) && ((byte)_DAT_00807348 < 3)) {
      piVar24 = (int *)&this_00->field_0x1a4;
      iVar23 = 0;
      iVar4 = 1;
      pCVar8 = st::fn_006F2C00("BK_HIGHRES",1,_DAT_00807348 & 0xff);
      pCVar8 = st::fn_0040577C(pCVar8,iVar4);
      st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar23);
      piVar24 = (int *)&this_00->field_0x1a8;
      iVar23 = 0;
      iVar4 = 1;
      pCVar8 = st::fn_006F2C00("BK_HIGHRES",1,_DAT_00807348 & 0xff);
      pCVar8 = st::fn_0040577C(pCVar8,iVar4);
      st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar24,iVar23);
    }
    pDVar11 = st::fn_006AE290(nullptr,10,9,10);
    this_00->field_0B95 = pDVar11;
    st::fn_004035BC
              (g_allPlayers_007FA174,1,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0B63);
    st::fn_004035BC
              (g_allPlayers_007FA174,2,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0B99);
    st::fn_004035BC
              (g_allPlayers_007FA174,4,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0BF5);
    st::fn_004035BC
              (g_allPlayers_007FA174,5,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0C51);
    st::fn_004035BC
              (g_allPlayers_007FA174,0xe,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0xc87);
    st::fn_004035BC
              (g_allPlayers_007FA174,0xf,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0xcc9);
    puVar6 = nullptr;
    iVar23 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar14 = 6;
    local_EAX_4031 = st::fn_00403607(&this_00->field_0B63,0);
    local_EAX_4049 =
         st::fn_00709AF0
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
    local_EAX_4099 = st::fn_00403607(&this_00->field_0C51,0);
    local_EAX_4116 =
         st::fn_00709AF0
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
        pcVar12 = (char *)st::fn_004023B5((undefined1 *)local_8);
        local_EAX_4218 =
             st::fn_00709AF0
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
    st::fn_00403648(this_00);
    if (DAT_0080874e == '\x03') {
      st::fn_00401AEB(this_00);
    }
    else {
      st::fn_004022CF(this_00);
    }
    st::fn_00403215(this_00);
    if (DAT_0080874e == '\x03') {
      st::fn_00402590(this_00);
    }
    else {
      st::fn_004046BF(this_00,1);
    }
    st::fn_004034FE(this_00);
    st::fn_006B1A50(g_ddxContext_008075A8,3,nullptr,&this_00->field_011C);
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
          st::fn_006B2330(g_ddxContext_008075A8,(uint *)ppuVar17,5,0x402946,
                       (&this_00->field_0068)[uVar14],(&this_00->field_00C0)[uVar14],
                       this_00->field_0148[uVar14 + 0xe]);
          st::fn_006B1B10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,(uint)*ppuVar17,3);
          st::fn_006B28C0(g_ddxContext_008075A8,(uint)*ppuVar17,1);
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
    st::fn_006B2330(g_ddxContext_008075A8,puVar6,5,0x40402a,this_00->field_00F4,this_00->field_00F8,
                 this_00->field_01AC);
    st::fn_006B1B10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,*puVar6,3);
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,*puVar6,0xffffffff,this_00->field_00EC,
               this_00->field_00F0);
    puVar6 = &this_00->field_0178;
    this_00->field_00FC = (this_00->field_0124 - this_00->field_0104) + this_00->field_011C;
    this_00->field_0100 = this_00->field_00A4 - this_00->field_0108;
    st::fn_006B2330(g_ddxContext_008075A8,puVar6,6,0x40402a,this_00->field_0104,this_00->field_0108,
                 this_00->field_01B0);
    st::fn_006B1B10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,*puVar6,3);
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,*puVar6,0xffffffff,this_00->field_00FC,
               this_00->field_0100);
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar6);
    this_00->field_0114 = this_00->field_01B4->field_0004;
    this_00->field_0118 = this_00->field_01B4->field_0008;
    puVar6 = &this_00->field_017C;
    this_00->field_010C = (this_00->field_0124 - this_00->field_0114) + this_00->field_011C;
    this_00->field_0110 = this_00->field_00A4;
    st::fn_006B2330(g_ddxContext_008075A8,puVar6,6,0x401988,this_00->field_0114,this_00->field_0118,
                 (ushort *)this_00->field_01B4);
    st::fn_006B1B10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,*puVar6,3);
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,*puVar6,0xffffffff,this_00->field_010C,
               this_00->field_0110);
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar6);
    psVar28 = (short *)0x1;
    bVar22 = 0;
    bVar2 = 6;
    local_EAX_5284 = st::fn_00403607(nullptr,0);
    psVar28 = st::fn_0070B430
                        (g_cMf32_00806790,local_EAX_5284,bVar2,bVar22,psVar28);
    this_00->field_025B = psVar28;
    this_00->field_025F = 0;
    this_00->field_0260 = 2;
    this_00->field_0261 = this_00->field_0038;
    st::fn_00403C5B(g_cursorClass_00802A30);
    bVar2 = 0;
    ppuVar17 = this_00->field_0148;
    do {
      if (-1 < (int)*ppuVar17) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)*ppuVar17,0xffffffff,(uint)ppuVar17[-0x43],
                   (uint)ppuVar17[-0x2d]);
      }
      bVar2 = bVar2 + 1;
      ppuVar17 = ppuVar17 + 1;
    } while (bVar2 < 0xb);
    if (DAT_0080874e == '\x03') {
      st::fn_0040296E(this_00);
    }
    else {
      st::fn_0040556F(this_00);
    }
    st::fn_0040135C(this_00);
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
    pCVar8 = st::fn_0040577C("BUT_MAPSCIV",0);
    uVar14 = st::fn_004017E9(this_00,4,3,*(int *)&this_00->field_0x2c,local_34 - this_00->field_004C,
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
    pCVar8 = st::fn_0040577C("BUT_MAPSMIL",0);
    uVar14 = st::fn_004017E9(this_00,4,3,*(int *)&this_00->field_0x2c,local_34 - this_00->field_004C,
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
    pCVar8 = st::fn_0040577C("BUT_MAPZIN",0);
    uVar14 = st::fn_004017E9(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x58,0x6d,6,pCVar8,uVar18,uVar19,
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
    pCVar8 = st::fn_0040577C("BUT_MAPZOUT",0);
    uVar14 = st::fn_004017E9(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x5d,0x84,6,pCVar8,uVar18,uVar19,
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
    pCVar8 = st::fn_0040577C("BUT_MAPTLFT",0);
    uVar14 = st::fn_004017E9(this_00,4,1,1,(DAT_0080874e == '\x03') + 0xd,0x84,6,pCVar8,uVar18,uVar19,
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
    pCVar8 = st::fn_0040577C("BUT_MAPTRT",0);
    uVar14 = st::fn_004017E9(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x1c,0x6d,6,pCVar8,uVar18,uVar19,
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
    pCVar8 = st::fn_0040577C("BUT_MAPDIR",0);
    uVar14 = st::fn_004017E9(this_00,4,3,(DAT_00807327 & 8 | 4) >> 2,6,0x20,6,pCVar8,uVar18,uVar19,sVar20,
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
    pCVar8 = st::fn_0040577C("BUT_AIASS",0);
    uVar14 = st::fn_004017E9(this_00,4,3,(uint)(byte)this_00->field_0BAE,local_34 - this_00->field_004C,
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
    pCVar8 = st::fn_0040577C("BUT_AIASS",0);
    uVar14 = st::fn_004017E9(this_00,4,3,(uint)(byte)this_00->field_0C0A,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,1,pCVar8,uVar18,uVar19,sVar20,uVar21,iVar4,
                       pcVar12,iVar23,uVar26,uVar29);
    this_00->field_09C0[1] = uVar14;
    if (DAT_0080874e == '\x03') {
      st::fn_00403602(this_00,'\x01');
    }
    else {
      st::fn_00402D83(this_00,'\x01');
    }
    st::fn_00405BA0(this_00);
    st::fn_0040565A(PTR_00806750,(int *)&this_00->field_0x217,0x8b,local_24);
    st::fn_006E6400
              (g_sT3DSMAPContext_00807598,(undefined4 *)&this_00->field_0x217,0,0x8b,0x46);
    g_sT3DSMAPContext_00807598->field_0418 = (uint)DAT_00807327;
    st::fn_00405547(0);
    st::fn_00401B6D(this_00->field_011C,this_00->field_0120,this_00->field_0124,
                       this_00->field_0128 + -0x9b);
    puVar15 = &this_00->field_0x18;
    this_00->field_0028 = 0x4403;
    st::fn_006E6000(this_00,0xf,0,(undefined4 *)puVar15);
    if ((DAT_00807327 & 8) != 0) {
      st::fn_006E6500(g_sT3DSMAPContext_00807598,this_00->field_0227);
    }
    memset((void *)puVar15, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_0028 = 0x13;
    *(undefined4 *)&this_00->field_0x2c = this_00->field_0008;
    st::fn_006E6000(this_00,3,1,(undefined4 *)puVar15);
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
  local_EAX_6804 =
       st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel.cpp",0x1bf,0,local_EAX_59,
                          "%s","CPanelTy::InitCPanel");
  if (local_EAX_6804 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_EAX_59,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x1bf);
  return;
}

// 004F7800 CPanelTy::DoneCPanel
#line 4 "decomp/ST.exe/functions/004F7800/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::DoneCPanel */

void __thiscall st::fn_004F7800(CPanelTy *this)

{
  undefined1 *puVar1;
  CPanelTy *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int *slotStorage;
  ushort **ppuVar7;
  uint *puVar8;
  void **slotStorage_00;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 == 0) {
    puVar1 = &local_c->field_0x18;
    local_c->field_0028 = 0x4404;
    st::fn_006E6000(local_c,0xf,0,(undefined4 *)puVar1);
    slotStorage = (int *)&this_00->field_0x217;
    local_8 = 4;
    do {
      if (*slotStorage != 0) {
        st::fn_006AB060(slotStorage);
      }
      slotStorage = slotStorage + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_0028 = 0x14;
    *(undefined4 *)&this_00->field_0x2c = this_00->field_0008;
    st::fn_006E6000(this_00,3,1,(undefined4 *)puVar1);
    if (this_00->field_095C != 0) {
      st::fn_006E56B0(this_00->field_000C,this_00->field_095C);
    }
    this_00->field_095C = 0;
    puVar8 = this_00->field_0308;
    iVar5 = 2;
    do {
      if (*(uint *)((int)puVar8 + -10) != 0) {
        st::fn_006E56B0(this_00->field_000C,*(uint *)((int)puVar8 + -10));
      }
      *(undefined4 *)((int)puVar8 + -10) = 0;
      if (*puVar8 != 0) {
        st::fn_006E56B0(this_00->field_000C,*puVar8);
      }
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar8 = this_00->field_0310;
    iVar5 = 3;
    do {
      if (*puVar8 != 0) {
        st::fn_006E56B0(this_00->field_000C,*puVar8);
      }
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (this_00->field_09D0 != 0) {
      st::fn_006E56B0(this_00->field_000C,this_00->field_09D0);
    }
    this_00->field_09D0 = 0;
    puVar8 = this_00->field_09A4;
    iVar5 = 7;
    do {
      if (*puVar8 != 0) {
        st::fn_006E56B0(this_00->field_000C,*puVar8);
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar8 = this_00->field_09C0;
    iVar5 = 2;
    do {
      if (*puVar8 != 0) {
        st::fn_006E56B0(this_00->field_000C,*puVar8);
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar8 = this_00->field_0A15;
    iVar5 = 6;
    do {
      if (*puVar8 != 0) {
        st::fn_006E56B0(this_00->field_000C,*puVar8);
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar8 = this_00->field_0B1F;
    iVar5 = 6;
    do {
      if (*puVar8 != 0) {
        st::fn_006E56B0(this_00->field_000C,*puVar8);
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (this_00->field_0B37 != 0) {
      st::fn_006E56B0(this_00->field_000C,this_00->field_0B37);
    }
    this_00->field_0B37 = 0;
    puVar8 = this_00->field_0960;
    iVar5 = 4;
    do {
      if (*puVar8 != 0) {
        st::fn_006E56B0(this_00->field_000C,*puVar8);
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (this_00->field_0970 != 0) {
      st::fn_006E56B0(this_00->field_000C,this_00->field_0970);
    }
    ppuVar7 = this_00->field_0148;
    this_00->field_0970 = 0;
    g_cPanel_00801688 = nullptr;
    iVar5 = 0xb;
    do {
      if (-1 < (int)*ppuVar7) {
        st::fn_006B3BB0((int *)g_ddxContext_008075A8,(uint)*ppuVar7);
      }
      *ppuVar7 = (ushort *)0xffffffff;
      ppuVar7 = ppuVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (-1 < (int)this_00->field_0174) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,this_00->field_0174);
    }
    this_00->field_0174 = 0xffffffff;
    if (-1 < (int)this_00->field_0178) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,this_00->field_0178);
    }
    this_00->field_0178 = 0xffffffff;
    if (-1 < (int)this_00->field_017C) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,this_00->field_017C);
    }
    this_00->field_017C = 0xffffffff;
    st::fn_006F20E0(g_cMf32_00806790,(uint *)&this_00->field_0B43);
    st::fn_006F20E0(g_cMf32_00806790,(uint *)&this_00->field_0B47);
    puVar8 = this_00->field_09D9;
    iVar5 = 0xf;
    do {
      st::fn_006F20E0(g_cMf32_00806790,puVar8);
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if ((g_sT3DSMAPContext_00807598 != nullptr) &&
       (this_00->field_0DB3 != nullptr)) {
      st::fn_006E6580(g_sT3DSMAPContext_00807598,this_00->field_0DB3);
    }
    this_00->field_0DB3 = nullptr;
    if (g_sT3DSMAPContext_00807598 != nullptr) {
      st::fn_006E6500(g_sT3DSMAPContext_00807598,nullptr);
    }
    puVar8 = this_00->field_0227;
    iVar5 = 4;
    do {
      if (*puVar8 != 0) {
        st::fn_006AB060(puVar8);
      }
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    st::fn_006F20E0(g_cMf32_00806790,(uint *)&this_00->field_0994);
    puVar8 = this_00->field_0DBF;
    iVar5 = 2;
    do {
      *(undefined4 *)((int)puVar8 + -0x3f7) = 0;
      *puVar8 = 0;
      st::fn_006F20E0(g_cMf32_00806780,puVar8 + -2);
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar8 = this_00->field_0974;
    iVar5 = 8;
    do {
      st::fn_006F20E0(g_cMf32_00806790,puVar8);
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    st::fn_006F20E0(g_cMf32_00806790,(uint *)&this_00->field_0954);
    st::fn_006F20E0(g_cMf32_00806790,(uint *)&this_00->field_0958);
    st::fn_006F20E0(g_cMf32_00806790,(uint *)&this_00->field_0286);
    st::fn_006F20E0(g_cMf32_00806790,(uint *)&this_00->field_028A);
    this_00->field_077C = nullptr;
    this_00->field_02DE = nullptr;
    this_00->field_02DA = nullptr;
    this_00->field_0B1B = nullptr;
    this_00->field_09D5 = nullptr;
    this_00->field_0B17 = nullptr;
    this_00->field_02D6 = nullptr;
    this_00->field_02D2 = nullptr;
    this_00->field_02CE = nullptr;
    this_00->field_02CA = nullptr;
    this_00->field_02C6 = nullptr;
    this_00->field_02C2 = nullptr;
    this_00->field_02BE = nullptr;
    this_00->field_02BA = nullptr;
    this_00->field_02B2 = nullptr;
    this_00->field_02B6 = nullptr;
    this_00->field_02A2 = nullptr;
    this_00->field_029E = nullptr;
    this_00->field_029A = nullptr;
    this_00->field_0296 = nullptr;
    this_00->field_0292 = nullptr;
    this_00->field_028E = nullptr;
    if (this_00->field_024B != nullptr) {
      st::fn_006AE110(this_00->field_024B);
    }
    this_00->field_024B = nullptr;
    if (this_00->field_0B4B != nullptr) {
      st::fn_006AE110(this_00->field_0B4B);
    }
    this_00->field_0B4B = nullptr;
    if (this_00->field_0B95 != nullptr) {
      st::fn_006AE110(this_00->field_0B95);
    }
    this_00->field_0B95 = nullptr;
    if (this_00->field_01CC != nullptr) {
      st::fn_00710560((uint *)this_00->field_01CC);
      this_00->field_01CC = nullptr;
    }
    if (this_00->field_01D0 != nullptr) {
      st::fn_00710560((uint *)this_00->field_01D0);
      this_00->field_01D0 = nullptr;
    }
    if (this_00->field_01D4 != nullptr) {
      st::fn_00710560((uint *)this_00->field_01D4);
      this_00->field_01D4 = nullptr;
    }
    if (this_00->field_01C8 != nullptr) {
      st::fn_00710560((uint *)this_00->field_01C8);
      this_00->field_01C8 = nullptr;
    }
    if (this_00->field_01C4 != nullptr) {
      st::fn_00710560((uint *)this_00->field_01C4);
      this_00->field_01C4 = nullptr;
    }
    if (this_00->field_01C0 != nullptr) {
      st::fn_00710560(this_00->field_01C0);
      this_00->field_01C0 = nullptr;
    }
    if (this_00->field_01BC != nullptr) {
      st::fn_00710560((uint *)this_00->field_01BC);
      this_00->field_01BC = nullptr;
    }
    if (this_00->field_01B8 != nullptr) {
      st::fn_00710560((uint *)this_00->field_01B8);
      this_00->field_01B8 = nullptr;
    }
    if (this_00->field_01AC != nullptr) {
      st::fn_006AB060(&this_00->field_01AC);
    }
    if (this_00->field_01B0 != nullptr) {
      st::fn_006AB060(&this_00->field_01B0);
    }
    if (this_00->field_01B4 != nullptr) {
      st::fn_006AB060(&this_00->field_01B4);
    }
    slotStorage_00 = &this_00->field_0180;
    local_8 = 0xb;
    do {
      if (*slotStorage_00 != nullptr) {
        st::fn_006AB060(slotStorage_00);
      }
      slotStorage_00 = slotStorage_00 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (this_00->field_01D8 != nullptr) {
      st::fn_00714060((int *)this_00->field_01D8);
      st::fn_0072E2B0(this_00->field_01D8);
      this_00->field_01D8 = nullptr;
    }
    if (this_00->field_025B != nullptr) {
      st::fn_0070B600((int *)&this_00->field_025B);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel.cpp",0x213,0,iVar3,"%s",
                             "CPanelTy::DoneCPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x213);
  return;
}

// 004F80A0 CPanelTy::PaintTV
#line 4 "decomp/ST.exe/functions/004F80A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PaintTV

   [STSwitchEnumApplier] Switch target field_0260 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0260State. Cases:
   CASE_1=1;CASE_3=3;CASE_4=4;CASE_5=5

   [STSwitchEnumApplier] Switch target field_023F uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_023FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

void __thiscall st::fn_004F80A0(CPanelTy *this)

{
  short **ppsVar1;
  ushort *puVar2;
  CPanelTy *this_00;
  byte bVar4;
  int iVar5;
  undefined1 *puVar6;
  char *text;
  ushort *local_EAX_411;
  ushort *puVar7;
  char *pcVar7;
  ushort *local_EAX_1224;
  short *psVar8;
  tagBITMAPINFO *tOBJImage;
  byte bVar9;
  char cVar10;
  int *piVar11;
  uint uVar12;
  byte *pbVar13;
  bool bVar14;
  uint uVar15;
  cMf32 *pcVar16;
  int iVar17;
  undefined4 *puVar18;
  InternalExceptionFrame local_74;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  CPanelTy *local_24;
  undefined1 *local_20;
  int *local_1c;
  byte *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  byte local_5;

  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_24 = this;
  iVar5 = st::fn_0072D7F0(local_74.jumpBuffer,0);
  this_00 = local_24;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar17 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel.cpp",0x2c9,0,iVar5,"%s"
                                ,"CPanelTy::PaintTV");
    if (iVar17 == 0) {
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x2c9);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  bVar9 = 0;
  local_c = local_c & 0xffffff00;
  do {
    uVar12 = local_c & 0xff;
    local_10 = (undefined1 *)((int)this_00->field_0308 + (uVar12 - 0x1c));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined1 *)((int)this_00->field_0308 + (uVar12 - 0x1c))) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 1:
      if ((DAT_0080731a != 0) &&
         (0x41 < (uint)(this_00->field_0038 -
                       *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a)))) {
        *(undefined4 *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a) = this_00->field_0038;
        pbVar13 = (byte *)((int)this_00->field_0308 + (uVar12 - 0x1e));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        bVar9 = *(char *)((int)this_00->field_0308 + (uVar12 - 0x1e)) + 1;
        *pbVar13 = bVar9;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (**(short **)((int)this_00->field_0308 + uVar12 * 4 + -0x26) <= (short)(ushort)bVar9) {
          *pbVar13 = 0;
        }
        st::fn_00402CCF(this_00,(byte)local_c);
        bVar9 = -((char)local_c != '\0');
        local_28 = STReplaceLowByte((uint32_t)(local_28), (uint8_t)(bVar9)) & 0xffffff08;
        if ((bVar9 & 8) < 0xb) {
          uVar12 = bVar9 & 8;
          puVar2 = this_00->field_0148[uVar12];
joined_r0x004f81d1:
          if (-1 < (int)puVar2) {
            st::fn_006B3640
                      ((int *)g_ddxContext_008075A8,(uint)puVar2,0xffffffff,
                       (&this_00->field_003C)[uVar12],(&this_00->field_0094)[uVar12]);
          }
        }
      }
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 3:
      if (0x31 < (uint)(this_00->field_0038 -
                       *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a))) {
        pcVar7 = (char *)((int)this_00->field_0308 + (uVar12 - 0x1e));
        *(undefined4 *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a) = this_00->field_0038;
        if (*pcVar7 == '\0') {
          puVar6 = &this_00->field_0B63;
          if (bVar9 != 0) {
            puVar6 = &this_00->field_0C51;
          }
          puVar18 = nullptr;
          iVar17 = 0;
          iVar5 = 1;
          bVar9 = 0;
          uVar15 = 6;
          text = st::fn_00403607(puVar6,0);
          local_EAX_411 =
               st::fn_00709AF0
                         (PTR_00806794,CASE_1F,text,uVar15,bVar9,iVar5,iVar17,puVar18);
          *(ushort **)((int)this_00->field_0308 + uVar12 * 4 + -0x26) = local_EAX_411;
          *local_10 = 1;
          *pcVar7 = '\0';
          if (this_00->field_023F == CASE_5) {
            if ((char)local_c == '\0') {
              cVar10 = this_00->field_02ED;
            }
            else {
              cVar10 = this_00->field_02EC;
            }
            if (cVar10 != '\0') {
              this_00->field_023F = CASE_1;
              st::fn_00402ED2(this_00,1);
            }
          }
        }
        else {
          *pcVar7 = *pcVar7 + -1;
        }
        st::fn_00402CCF(this_00,(byte)local_c);
        bVar9 = -((char)local_c != '\0');
        local_1c = (int *)(STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar9)) & 0xffffff08);
        if ((bVar9 & 8) < 0xb) {
          uVar12 = bVar9 & 8;
          if (-1 < (int)this_00->field_0148[uVar12]) {
            st::fn_006B3640
                      ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[uVar12],0xffffffff,
                       (&this_00->field_003C)[uVar12],(&this_00->field_0094)[uVar12]);
          }
        }
        if (this_00->field_02EA == '\x05') {
          st::fn_00405E2F(0xb1);
        }
      }
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 4:
      if (0x31 < (uint)(this_00->field_0038 -
                       *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a))) {
        pbVar13 = (byte *)((int)this_00->field_0308 + (uVar12 - 0x1e));
        *(undefined4 *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a) = this_00->field_0038;
        bVar9 = *pbVar13;
        *pbVar13 = bVar9 + 1;
        if ((byte)(bVar9 + 1) == 5) {
          st::fn_00405E2F(0xb2);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (**(short **)((int)this_00->field_0308 + uVar12 * 4 + -0x26) <= (short)(ushort)*pbVar13)
        {
          *pbVar13 = *pbVar13 - 1;
          *local_10 = 2;
          if (this_00->field_023F == CASE_6) {
            if ((char)local_c == '\0') {
              cVar10 = this_00->field_02ED;
            }
            else {
              cVar10 = this_00->field_02EC;
            }
            if (cVar10 != '\0') {
              this_00->field_023F = CASE_4;
              st::fn_00405E2F(CASE_B0);
            }
          }
        }
        st::fn_00402CCF(this_00,(byte)local_c);
        bVar9 = -((char)local_c != '\0');
        local_20 = (undefined1 *)(STReplaceLowByte((uint32_t)(local_20), (uint8_t)(bVar9)) & 0xffffff08);
        if ((bVar9 & 8) < 0xb) {
          uVar12 = bVar9 & 8;
          puVar2 = this_00->field_0148[uVar12];
          goto joined_r0x004f81d1;
        }
      }
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 5:
      if (0x41 < (uint)(this_00->field_0038 -
                       *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a))) {
        pbVar13 = (byte *)((int)this_00->field_0308 + (uVar12 - 0x1e));
        *(undefined4 *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a) = this_00->field_0038;
        bVar9 = *pbVar13;
        *pbVar13 = bVar9 + 1;
        local_18 = (byte *)((int)this_00->field_0308 + uVar12 * 4 + -0x26);
        if (**(short **)local_18 <= (short)(ushort)(byte)(bVar9 + 1)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          puVar7 = st::fn_00709AF0
                             (PTR_00806794,CASE_1F,
                              *(char **)((int)this_00->field_0308 + uVar12 * 4 + -0x12),6,0,1,0,
                              nullptr);
          *(ushort **)local_18 = puVar7;
          *local_10 = 1;
          *pbVar13 = 0;
        }
        st::fn_00402CCF(this_00,(byte)local_c);
        bVar9 = -((char)local_c != '\0');
        local_14 = (undefined1 *)(STReplaceLowByte((uint32_t)(local_14), (uint8_t)(bVar9)) & 0xffffff08);
        if ((bVar9 & 8) < 0xb) {
          uVar12 = bVar9 & 8;
          puVar2 = this_00->field_0148[uVar12];
          goto joined_r0x004f81d1;
        }
      }
    }
    bVar9 = (char)local_c + 1;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar9));
  } while (bVar9 < 2);
  local_5 = 0;
  if (g_nWidth_00806730 == 0x400) {
    local_5 = 2;
  }
  else if (g_nWidth_00806730 == 0x500) {
    local_5 = 6;
  }
  local_10 = (undefined1 *)((uint)local_10 & 0xffffff00);
  if (local_5 != 0) {
    local_18 = &this_00->field_0D3B;
    local_20 = &this_00->field_0xc87;
    local_1c = &this_00->field_0D53;
    do {
      local_c = local_c & 0xffffff00;
      local_14 = local_20;
      piVar11 = local_1c;
      pbVar13 = local_18;
      do {
        bVar9 = pbVar13[0xc];
        if (bVar9 == 1) {
          if ((DAT_0080731a != 0) && (0x41 < (uint)(this_00->field_0038 - *piVar11))) {
            *piVar11 = this_00->field_0038;
            bVar9 = *pbVar13;
            *pbVar13 = bVar9 + 1;
            if (*(short *)piVar11[-0x12] <= (short)(ushort)(byte)(bVar9 + 1)) {
              *pbVar13 = 0;
            }
            st::fn_00403B57(this_00,local_c,(uint)local_10);
            bVar9 = ((char)local_c == '\0') + 9;
            local_30 = STReplaceLowByte((uint32_t)(local_30), (uint8_t)(bVar9));
            if (bVar9 < 0xb) {
              uVar12 = (uint)bVar9;
              puVar2 = this_00->field_0148[uVar12];
              goto joined_r0x004f861b;
            }
          }
        }
        else if (bVar9 == 3) {
          if (0x31 < (uint)(this_00->field_0038 - *piVar11)) {
            *piVar11 = this_00->field_0038;
            if (*pbVar13 == 0) {
              puVar18 = nullptr;
              iVar17 = 0;
              iVar5 = 1;
              bVar9 = 0;
              uVar12 = 6;
              pcVar7 = (char *)st::fn_004023B5(local_14);
              local_EAX_1224 =
                   st::fn_00709AF0
                             (PTR_00806794,CASE_1F,pcVar7,uVar12,bVar9,iVar5,iVar17,puVar18);
              piVar11[-0x12] = (int)local_EAX_1224;
              pbVar13[0xc] = 1;
              *pbVar13 = 0;
            }
            else {
              *pbVar13 = *pbVar13 - 1;
            }
            st::fn_00403B57(this_00,local_c,(uint)local_10);
            bVar9 = ((char)local_c == '\0') + 9;
            local_2c = STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(bVar9));
            if (bVar9 < 0xb) {
              uVar12 = (uint)bVar9;
              puVar2 = this_00->field_0148[uVar12];
              goto joined_r0x004f861b;
            }
          }
        }
        else if ((bVar9 == 4) && (0x31 < (uint)(this_00->field_0038 - *piVar11))) {
          *piVar11 = this_00->field_0038;
          bVar9 = *pbVar13;
          bVar4 = bVar9 + 1;
          *pbVar13 = bVar4;
          if (*(short *)piVar11[-0x12] <= (short)(ushort)bVar4) {
            *pbVar13 = bVar9;
            pbVar13[0xc] = 2;
          }
          st::fn_00403B57(this_00,local_c,(uint)local_10);
          bVar9 = ((char)local_c == '\0') + 9;
          local_28 = STReplaceLowByte((uint32_t)(local_28), (uint8_t)(bVar9));
          if (bVar9 < 0xb) {
            uVar12 = (uint)bVar9;
            puVar2 = this_00->field_0148[uVar12];
joined_r0x004f861b:
            if (-1 < (int)puVar2) {
              st::fn_006B3640
                        ((int *)g_ddxContext_008075A8,(uint)puVar2,0xffffffff,
                         (&this_00->field_003C)[uVar12],(&this_00->field_0094)[uVar12]);
            }
          }
        }
        bVar9 = (char)local_c + 1;
        local_14 = local_14 + 0x42;
        piVar11 = piVar11 + 6;
        pbVar13 = pbVar13 + 6;
        local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar9));
      } while (bVar9 < 2);
      bVar9 = (char)local_10 + 1;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
      local_20 = local_20 + 0xb;
      local_10 = (undefined1 *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar9));
    } while (bVar9 < local_5);
  }
  iVar5 = st::fn_006B33F0(g_ddxContext_008075A8,this_00->field_017C);
  if (iVar5 == 0) {
    g_currentExceptionFrame = local_74.previous;
    return;
  }
  switch(this_00->field_0260) {
  case CASE_1:
    if ((DAT_0080731a == 0) || ((uint)(this_00->field_0038 - this_00->field_0261) < 0x42))
    goto cf_common_join_004F88ED;
    this_00->field_0261 = this_00->field_0038;
    bVar9 = this_00->field_025F + 1;
    this_00->field_025F = bVar9;
    if ((short)(ushort)bVar9 < *this_00->field_025B) goto LAB_004f88e6;
    break;
  default:
    goto cf_common_join_004F88ED;
  case CASE_3:
    if (0x31 < (uint)(this_00->field_0038 - this_00->field_0261)) {
      this_00->field_0261 = this_00->field_0038;
      if (this_00->field_025F == '\0') {
        if (this_00->field_025B != nullptr) {
          st::fn_0070B600((int *)&this_00->field_025B);
        }
        psVar8 = (short *)0x1;
        bVar4 = 0;
        bVar9 = 6;
        pcVar7 = (char *)st::fn_004036A2(0,0,0);
        psVar8 = st::fn_0070B430(g_cMf32_00806790,pcVar7,bVar9,bVar4,psVar8);
        this_00->field_025B = psVar8;
        this_00->field_0260 = CASE_1;
        this_00->field_025F = 0;
      }
      else {
        this_00->field_025F = this_00->field_025F + -1;
      }
      st::fn_00405DEE(this_00);
      if (this_00->field_025F == '\x05') {
        st::fn_00405E2F(0xb1);
      }
    }
    goto cf_common_join_004F88ED;
  case CASE_4:
    if ((uint)(this_00->field_0038 - this_00->field_0261) < 0x32) goto cf_common_join_004F88ED;
    this_00->field_0261 = this_00->field_0038;
    cVar10 = this_00->field_025F + '\x01';
    this_00->field_025F = cVar10;
    if (cVar10 == '\x05') {
      st::fn_00405E2F(0xb2);
    }
    if (*this_00->field_025B <= (short)(ushort)(byte)this_00->field_025F) {
      this_00->field_0260 = 2;
      this_00->field_025F = this_00->field_025F - 1;
    }
    goto LAB_004f88e6;
  case CASE_5:
    if ((uint)(this_00->field_0038 - this_00->field_0261) < 0x42) goto cf_common_join_004F88ED;
    ppsVar1 = &this_00->field_025B;
    bVar9 = this_00->field_025F + 1;
    this_00->field_0261 = this_00->field_0038;
    this_00->field_025F = bVar9;
    if ((short)(ushort)bVar9 < **ppsVar1) goto LAB_004f88e6;
    if (*ppsVar1 != nullptr) {
      st::fn_0070B600((int *)ppsVar1);
    }
    pcVar16 = g_cMf32_00806790;
    if (this_00->field_0285 == '\0') {
      psVar8 = st::fn_0070B430
                         (g_cMf32_00806758,&this_00->field_0265,6,0,nullptr);
      *ppsVar1 = psVar8;
      pcVar16 = g_cMf32_00806798;
      if (psVar8 == nullptr) goto LAB_004f8860;
    }
    else {
LAB_004f8860:
      psVar8 = st::fn_0070B430(pcVar16,&this_00->field_0265,6,0,nullptr);
      *ppsVar1 = psVar8;
    }
    if (*ppsVar1 == nullptr) {
      psVar8 = (short *)0x1;
      bVar4 = 0;
      bVar9 = 6;
      pcVar7 = (char *)st::fn_004036A2(0,0,0);
      psVar8 = st::fn_0070B430(g_cMf32_00806790,pcVar7,bVar9,bVar4,psVar8);
      *ppsVar1 = psVar8;
    }
    this_00->field_0260 = CASE_1;
  }
  this_00->field_025F = 0;
LAB_004f88e6:
  st::fn_00405DEE(this_00);
cf_common_join_004F88ED:
  if (((this_00->field_01D8 != nullptr) && ((g_playSystem_00802A38->field_00E4 & 1) != 0)) &&
     (iVar5 = *(int *)&this_00->field_01D8->field_0x4, iVar5 < this_00->field_01DC + -2)) {
    st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_01B4,0,100,5,0x226,0x55,0);
    tOBJImage = (tagBITMAPINFO *)st::fn_007140E0(this_00->field_01D8,1,'\0');
    if (tOBJImage != nullptr) {
      st::fn_006B5440((ushort *)this_00->field_01B4,0,100,5,tOBJImage,0,0xff);
    }
    st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_017C);
    if (this_00->field_01E0 != '\0') {
      uVar12 = iVar5 + 1U & 0x80000001;
      bVar14 = uVar12 == 0;
      if ((int)uVar12 < 0) {
        bVar14 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar14) {
        st::fn_00405E2F(0x1e);
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return;
}

// 004F8C80 CPanelTy::PaintSMap
#line 4 "decomp/ST.exe/functions/004F8C80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PaintSMap */

uint __thiscall st::fn_004F8C80(CPanelTy *this)

{
  ulonglong uVar1;
  CPanelTy *pCVar3;
  int errorCode;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EAX;
  uint uVar7;
  undefined *puVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  InternalExceptionFrame local_50;
  char local_c;
  undefined3 uStack_b;
  CPanelTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pCVar3 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel.cpp",0x2fc,0,errorCode,
                               "%s","CPanelTy::PaintSMap");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x2fc);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    return extraout_EAX;
  }
  if ((uint)(local_8->field_0038 - local_8->field_0998) < 100) {
    if ((g_sT3DSMAPContext_00807598->field_0442 == nullptr) &&
       (g_sT3DSMAPContext_00807598->field_0446 == nullptr)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    if (1 < DAT_0080673c) {
      g_currentExceptionFrame = local_50.previous;
      return uVar4;
    }
  }
  local_8->field_0998 = local_8->field_0038;
  st::fn_00401942(local_8);
  st::fn_006E6FB0
            (g_sT3DSMAPContext_00807598,(RecoveredSourceFamily_dibcopy *)pCVar3->field_0190,5,7,
             (uint)(pCVar3->field_023F != CASE_2));
  puVar5 = (ushort *)(g_playSystem_00802A38->field_00E4 * 0x51eb851f);
  uVar4 = g_playSystem_00802A38->field_00E4 / 0x19;
  if (300 < uVar4 - DAT_0080c4cf) {
    puVar5 = (ushort *)st::fn_0040150A((AnonShape_0056F930_C6277D80 *)&DAT_00807620);
    DAT_00808794 = puVar5;
    DAT_0080c4cf = uVar4;
  }
  if (uVar4 != pCVar3->field_09A0) {
    pCVar3->field_09A0 = uVar4;
    st::fn_00710A90(pCVar3->field_01BC,pCVar3->field_0190,0,(DAT_0080874e == '\x03') + 7,0x10,0x28,
                     0xb);
    uVar4 = (uint)DAT_0080874d;
    if (g_bulkInitializedRecords_008087C7[uVar4].field_0030 == 0) {
      uVar7 = *(int *)&g_bulkInitializedRecords_008087C7[uVar4].field_0x31 + pCVar3->field_09A0;
      uVar4 = uVar7 / 0xe10;
      cVar9 = (char)uVar4;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_c = CONCAT31(uStack_b,cVar9);
      pcVar10 = &pCVar3->field_01E1;
      if (cVar9 == '\0') {
        puVar8 = &DAT_007c2198;
        pcVar11 = "%s;";
      }
      else {
        puVar8 = (undefined *)(uVar4 & 0xff);
        pcVar11 = "%2d:";
      }
      st::external_00000080(pcVar10,pcVar11,puVar8);
      uVar1 = (ulonglong)uVar7 % 0xe10;
      st::external_00000080(pcVar10,"%s%02d:%02d",pcVar10,(int)(uVar1 / 0x3c),(int)(uVar1 % 0x3c));
      puVar5 = (ushort *)
               st::fn_00711B70(pCVar3->field_01BC,pcVar10,0,0,(uint)(DAT_0080874e == '\x03'),-1,-1);
    }
    else {
      uVar7 = pCVar3->field_09A0 - *(int *)&g_bulkInitializedRecords_008087C7[uVar4].field_0x35;
      if (uVar7 < *(uint *)&g_bulkInitializedRecords_008087C7[uVar4].field_0x31) {
        uVar7 = *(uint *)&g_bulkInitializedRecords_008087C7[uVar4].field_0x31 - uVar7;
        uVar4 = uVar7 / 0xe10;
        cVar9 = (char)uVar4;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        _local_c = CONCAT31(uStack_b,cVar9);
        if (cVar9 == '\0') {
          puVar8 = &DAT_007c2198;
          pcVar10 = "%s;";
        }
        else {
          puVar8 = (undefined *)(uVar4 & 0xff);
          pcVar10 = "%2d:";
        }
        st::external_00000080(&pCVar3->field_01E1,pcVar10,puVar8);
        uVar1 = (ulonglong)uVar7 % 0xe10;
        st::external_00000080(&pCVar3->field_01E1,"%s%02d:%02d",&pCVar3->field_01E1,(int)(uVar1 / 0x3c)
                  ,(int)(uVar1 % 0x3c));
      }
      else {
        uVar4 = 0xffffffff;
        pcVar10 = &DAT_007c21a4;
        do {
          pcVar11 = pcVar10;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar11 = pcVar10 + 1;
          cVar9 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar9 != '\0');
        uVar4 = ~uVar4;
        pcVar10 = pcVar11 + -uVar4;
        pcVar11 = &pCVar3->field_01E1;
        memmove(pcVar11, pcVar10, uVar4); /* compiler REP MOVS byte copy */
      }
      puVar5 = (ushort *)
               st::fn_00711B70(pCVar3->field_01BC,&pCVar3->field_01E1,0,0,
                              (DAT_0080874e == '\x03') + 2,-1,-1);
      if (DAT_0080c4d3 != 2) {
        st::fn_00711B70(pCVar3->field_01CC,&pCVar3->field_01E1,0xd,10,0,-1,-1);
        puVar5 = (ushort *)
                 st::fn_006B3640
                           ((int *)g_ddxContext_008075A8,pCVar3->field_0174,0xffffffff,
                            pCVar3->field_00EC,pCVar3->field_00F0);
      }
    }
  }
  if ((pCVar3->field_023F != CASE_2) && (puVar5 = pCVar3->field_0148[4], -1 < (int)puVar5)) {
    puVar5 = (ushort *)
             st::fn_006B3640
                       ((int *)g_ddxContext_008075A8,(uint)puVar5,0xffffffff,pCVar3->field_004C,
                        pCVar3->field_00A4);
  }
  g_currentExceptionFrame = local_50.previous;
  return (uint)puVar5;
}

// 004F92B0 CPanelTy::OutText
#line 4 "decomp/ST.exe/functions/004F92B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::OutText */

void __thiscall st::fn_004F92B0(CPanelTy *this,int *param_1,undefined4 param_2)

{
  ushort *puVar1;
  CPanelTy *pCVar3;
  int errorCode;
  uint *puVar4;
  DArrayTy *pDVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pCVar3 = local_c;
  if (errorCode == 0) {
    puVar4 = st::fn_007126E0
                       (local_c->field_01D0,(DArrayTy *)*param_1," ,.;:!?/\\()[]{}",
                        (uint *)&DAT_007c21ec,local_c->field_0104,0,0xffffffff,nullptr,1);
    if ((DArrayTy *)*param_1 != nullptr) {
      st::fn_006B5570((DArrayTy *)*param_1);
    }
    if (puVar4 == nullptr) {
      pDVar5 = st::fn_006B54F0(nullptr,1,1);
      *param_1 = (int)pDVar5;
    }
    else {
      *param_1 = (int)puVar4;
    }
    puVar1 = pCVar3->field_01B0;
    local_8 = *(uint *)(puVar1 + 10);
    if (local_8 == 0) {
      local_8 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar1 + 4);
    }
    puVar6 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    st::fn_00711F70(pCVar3->field_01D0,*param_1,0,-1,0,0,0);
    st::fn_006B5570((DArrayTy *)*param_1);
    pCVar3->field_0243 = pCVar3->field_09A0;
    pCVar3->field_0247 = param_2;
    st::fn_006B3430((int *)g_ddxContext_008075A8,pCVar3->field_0178);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar7 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel.cpp",0x32f,0,errorCode,
                             "%s","CPanelTy::OutText(*str_arr, time)");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x32f);
  return;
}

// 004F9480 CPanelTy::OutText
#line 4 "decomp/ST.exe/functions/004F9480/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::OutText */

void __thiscall st::fn_004F9480(CPanelTy *this,int param_1,int param_2,undefined4 param_3)

{
  int errorCode;
  char *pcVar2;
  int iVar3;
  dword dVar4;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  DArrayTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (errorCode == 0) {
    local_8 = st::fn_006B54F0(nullptr,10,10);
    dVar4 = param_1 + param_2;
    if (param_2 < 1) {
      dVar4 = g_dArray_0080C4C7->elementSize;
    }
    for (; param_1 < (int)dVar4; param_1 = param_1 + 1) {
      if (param_1 < (int)g_dArray_0080C4C7->elementSize) {
        pcVar2 = *(char **)(g_dArray_0080C4C7->growCapacity + param_1 * 4);
      }
      else {
        pcVar2 = nullptr;
      }
      st::fn_004015A0(local_8,pcVar2,"@ %s@ ");
    }
    st::fn_0040311B(local_c,(int *)&local_8,param_3);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel.cpp",0x342,0,errorCode,
                             "%s","CPanelTy::OutText(first, num, time)");
  if (iVar3 == 0) {
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x342);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 004F95B0 CPanelTy::OutText
#line 4 "decomp/ST.exe/functions/004F95B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::OutText */

void __thiscall st::fn_004F95B0(CPanelTy *this,char *param_1,undefined4 param_2)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  DArrayTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (errorCode == 0) {
    local_8 = st::fn_006B54F0(nullptr,1,1);
    st::fn_004015A0(local_8,param_1,"@ %s@ ");
    st::fn_0040311B(local_c,(int *)&local_8,param_2);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel.cpp",0x351,0,errorCode,
                             "%s","CPanelTy::OutText(str, time)");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x351);
  return;
}

// 004F96A0 CPanelTy::PlayBrief
#line 4 "decomp/ST.exe/functions/004F96A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PlayBrief
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall PlayBrief(CPanelTy * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=004F9B2F RET | 004F9B75 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_004F96A0(CPanelTy *this)

{
  short **ppsVar1;
  CPanelTy *this_00;
  int iVar3;
  DArrayTy *pDVar5;
  DArrayTy *pDVar4;
  cTypingTy *this_01;
  byte *pbVar6;
  char *pcVar7;
  cMf32 *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  byte bVar13;
  byte bVar14;
  short *psVar15;
  size_t _Count;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  char *local_c;
  DArrayTy *local_8;

  if ((DAT_0080c4f7 == 1) && (this->field_024B != nullptr)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_10 = this;
    iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
    this_00 = local_10;
    if (iVar3 == 0) {
      pDVar5 = local_10->field_024B;
      uVar10 = pDVar5->count;
      if (local_10->field_024F < uVar10) {
        do {
          if (this_00->field_024F < uVar10) {
            puVar12 = DArrayAt<undefined1>(pDVar5, this_00->field_024F);
          }
          else {
            puVar12 = nullptr;
          }
          if ((uint)(this_00->field_0253 - this_00->field_0257) < *(uint *)(puVar12 + 1)) {
            g_currentExceptionFrame = local_54.previous;
            return;
          }
          switch(*puVar12) {
          case 1:
            st::fn_00404BD8
                      ((SoundClassTy *)&g_sound,SOUND_MODE_12,puVar12 + 9,*(int *)(puVar12 + 5),
                       nullptr,0);
            break;
          case 2:
            if (this_00->field_01D8 != nullptr) {
              st::fn_00714060((int *)this_00->field_01D8);
              st::fn_0072E2B0(this_00->field_01D8);
              this_00->field_01D8 = nullptr;
            }
            st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_01B4,0,100,5,0x226,0x55,0);
            local_8 = st::fn_006B54F0(nullptr,10,10);
            if (*(int *)(puVar12 + 10) < 1) {
              local_c = (char *)g_dArray_0080C4C7->elementSize;
            }
            else {
              int scalar_local_c = *(int *)(puVar12 + 6) + *(int *)(puVar12 + 10); /* split integer lifetime from pointer-typed SSA storage */
            }
            iVar3 = *(int *)(puVar12 + 6);
            if (iVar3 < scalar_local_c) {
              do {
                if (iVar3 < (int)g_dArray_0080C4C7->elementSize) {
                  pcVar7 = *(char **)(g_dArray_0080C4C7->growCapacity + iVar3 * 4);
                }
                else {
                  pcVar7 = nullptr;
                }
                st::fn_004015A0(local_8,pcVar7,"@ %s");
                iVar3 = iVar3 + 1;
              } while (iVar3 < scalar_local_c);
            }
            pDVar4 = (DArrayTy *)
                     st::fn_007126E0
                               (this_00->field_01D4,local_8," ,.;:!?/\\()[]{}",
                                (uint *)&DAT_007c21ec,0x226,0,0xffffffff,nullptr,1);
            if (local_8 != nullptr) {
              st::fn_006B5570(local_8);
            }
            if (pDVar4 == nullptr) {
              pDVar4 = st::fn_006B54F0(nullptr,1,1);
            }
            local_8 = pDVar4;
            if (puVar12[5] == '\0') {
              pbVar6 = (byte *)st::fn_00710BA0(this_00->field_01D4,(int)this_00->field_01B4,0,
                                                   100,5,0x226,0x55,0);
              if (pbVar6 != nullptr) {
                st::fn_00711F70(this_00->field_01D4,(int)local_8,0,-1,0,0,0);
                st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_01B4,100,5,'\x01',pbVar6);
                st::fn_00710F00(this_00->field_01D4);
                if (puVar12[0xe] != '\0') {
                  st::fn_00405E2F(0x1e);
                }
              }
              st::fn_006B5570(local_8);
            }
            else {
              st::fn_00710A90(this_00->field_01D4,(int)this_00->field_01B4,0,100,5,0x226,0x55);
              this_01 = (cTypingTy *)st::fn_0072E530(0xb4);
              if (this_01 == nullptr) {
                this_01 = nullptr;
              }
              else {
                this_01->field_0058 = 0;
                this_01->field_0088 = 0;
              }
              this_00->field_01D8 = (HoloTy *)this_01;
              iVar3 = st::fn_00713F30
                                (this_01,local_8,this_00->field_01D4,0,0,0,0x226,0x55,0,0,0,1,2,0xff
                                );
              this_00->field_01DC = iVar3;
              this_00->field_01E0 = puVar12[0xe];
              st::fn_006B5570(local_8);
            }
            break;
          case 3:
            ppsVar1 = &this_00->field_025B;
            if (this_00->field_025B != nullptr) {
              st::fn_0070B600((int *)ppsVar1);
            }
            if (DAT_0080731a == 0) {
              local_c = puVar12 + 10;
              if (puVar12[10] == '\0') {
                psVar15 = (short *)0x1;
                bVar13 = 0;
                bVar14 = 6;
                pcVar7 = (char *)st::fn_004036A2(*(int *)(puVar12 + 5),puVar12[9],0);
                pcVar8 = g_cMf32_00806790;
LAB_004f9a8a:
                psVar15 = st::fn_0070B430(pcVar8,pcVar7,bVar14,bVar13,psVar15);
                *ppsVar1 = psVar15;
              }
              else {
                psVar15 = st::fn_0070B430
                                    (g_cMf32_00806758,local_c,6,0,nullptr);
                *ppsVar1 = psVar15;
                if (psVar15 == nullptr) {
                  bVar14 = 6;
                  bVar13 = 0;
                  psVar15 = nullptr;
                  pcVar8 = g_cMf32_00806798;
                  pcVar7 = local_c;
                  goto LAB_004f9a8a;
                }
              }
              if (*ppsVar1 == nullptr) {
                psVar15 = (short *)0x1;
                bVar14 = 0;
                bVar13 = 6;
                pcVar7 = (char *)st::fn_004036A2(0,0,0);
                psVar15 = st::fn_0070B430
                                    (g_cMf32_00806790,pcVar7,bVar13,bVar14,psVar15);
                *ppsVar1 = psVar15;
              }
              this_00->field_025F = 0;
              st::fn_00405DEE(this_00);
            }
            else {
              psVar15 = (short *)0x1;
              bVar14 = 0;
              bVar13 = 6;
              pcVar7 = (char *)st::fn_004036A2(0,0,1);
              psVar15 = st::fn_0070B430
                                  (g_cMf32_00806790,pcVar7,bVar13,bVar14,psVar15);
              *ppsVar1 = psVar15;
              this_00->field_0260 = CASE_5;
              this_00->field_025F = 0;
              _Count = 0x1f;
              if (puVar12[10] == '\0') {
                pcVar7 = (char *)st::fn_004036A2(*(int *)(puVar12 + 5),puVar12[9],0);
                st::fn_0072E340(&this_00->field_0265,pcVar7,_Count);
                this_00->field_0285 = 1;
              }
              else {
                st::fn_0072E340(&this_00->field_0265,puVar12 + 10,0x1f);
                this_00->field_0285 = 0;
              }
              this_00->field_0284 = 0;
              st::fn_00405E2F(0xb3);
            }
            break;
          case 4:
            this_00->field_0028 = 0x5dc6;
            *(undefined **)&this_00->field_0x2c = &DAT_0080c4d7;
            if (DAT_008117bc != nullptr) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)*DAT_008117bc)(&this_00->field_0x18);
            }
            this_00->field_0260 = CASE_4;
            DAT_0080c4f7 = 4;
          }
          pDVar5 = this_00->field_024B;
          uVar11 = this_00->field_024F + 1;
          this_00->field_024F = uVar11;
          uVar10 = pDVar5->count;
        } while (uVar11 < uVar10);
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar9 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel.cpp",0x3b0,0,iVar3,"%s",
                               "CPanelTy::PlayBrief");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x3b0);
  }
  return;
}

// 004F9CD0 CPanelTy::PlayBriefing
#line 4 "decomp/ST.exe/functions/004F9CD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PlayBriefing

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_004F9CD0(CPanelTy *this,char *param_1)

{
  short **ppsVar1;
  CPanelTy *pCVar3;
  int errorCode;
  DArrayTy *pDVar4;
  char *pcVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  short *psVar9;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (g_cMf32_00806758 != nullptr) {
      pDVar4 = (DArrayTy *)st::fn_00715050(g_cMf32_00806758,param_1,0);
      if (pDVar4 != nullptr) {
        st::fn_0072E340(&DAT_0080c4d7,param_1,0x1f);
        pCVar3 = local_8;
        DAT_0080c4f6 = 0;
        if (local_8->field_024B != nullptr) {
          st::fn_006AE110(local_8->field_024B);
        }
        pCVar3->field_024B = pDVar4;
        ppsVar1 = &pCVar3->field_025B;
        pCVar3->field_0257 = pCVar3->field_0253;
        pCVar3->field_024F = 0;
        if (*ppsVar1 != nullptr) {
          st::fn_0070B600((int *)ppsVar1);
        }
        psVar9 = (short *)0x1;
        bVar8 = 0;
        bVar7 = 6;
        pcVar5 = (char *)st::fn_004036A2(0,0,0);
        psVar9 = st::fn_0070B430(g_cMf32_00806790,pcVar5,bVar7,bVar8,psVar9);
        *ppsVar1 = psVar9;
        pCVar3->field_0260 = CASE_1;
        pCVar3->field_025F = 0;
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)pCVar3->field_01B4,0,100,5,0x226,0x55,0);
        if ((DAT_0080c4f7 != 3) && (DAT_0080c4f7 != 1)) {
          pCVar3->field_0260 = CASE_3;
          DAT_0080c4f7 = 3;
          st::fn_006B3430((int *)g_ddxContext_008075A8,pCVar3->field_017C);
        }
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel.cpp",0x3c8,0,errorCode,
                             "%s","CPanelTy::PlayBriefing");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x3c8);
  return;
}

// 004F9ED0 CPanelTy::SwitchCPanel
#line 4 "decomp/ST.exe/functions/004F9ED0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::SwitchCPanel

   [STSwitchEnumApplier] Switch target field_023F uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_023FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STSwitchEnumApplier] Switch target field_023F uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_023FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

void __thiscall st::fn_004F9ED0(CPanelTy *this)

{
  bool bVar2;
  CPanelTy *this_00;
  int iVar3;
  char *pcVar4;
  ushort *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  byte bVar10;
  undefined4 *puVar11;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  int local_c;
  int local_8;

  if (DAT_00808784 == 0) {
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      local_54.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_54;
      local_10 = this;
      iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
      this_00 = local_10;
      if (iVar3 == 0) {
        switch(local_10->field_023F) {
        case CASE_1:
          st::fn_00401B6D(local_10->field_011C,local_10->field_0120,local_10->field_0124,
                             local_10->field_0128);
          this_00->field_023F = CASE_6;
          if (g_researchPanel_008016E8 != nullptr) {
            st::fn_00401A73(g_researchPanel_008016E8,'\0');
          }
          if (g_bldBoatPanel_0080167C != nullptr) {
            st::fn_00401A73(g_bldBoatPanel_0080167C,'\0');
          }
          if (g_bldObjPanel_00801684 != nullptr) {
            st::fn_00401A73(g_bldObjPanel_00801684,'\0');
          }
          if (g_bldLabPanel_00801680 != nullptr) {
            st::fn_00401A73(g_bldLabPanel_00801680,'\0');
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
          if (g_helpPanel_00801690 != nullptr) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(g_helpPanel_00801690->vtable + 0x18))(0);
          }
          if (g_optPanel_008016DC != nullptr) {
            st::fn_00402630(g_optPanel_008016DC);
          }
          st::fn_00402ED2(this_00,0);
          if (DAT_0080731a != 0) {
            puVar7 = &this_00->field_02EC;
            puVar8 = &this_00->field_02EE;
            local_8 = 2;
            do {
              puVar11 = nullptr;
              iVar6 = 0;
              iVar3 = 1;
              bVar10 = 0;
              uVar9 = 6;
              pcVar4 = st::fn_00403607(nullptr,0);
              puVar5 = st::fn_00709AF0
                                 (PTR_00806794,CASE_1F,pcVar4,uVar9,bVar10,iVar3,iVar6,puVar11);
              puVar8[-3] = puVar5;
              puVar7[-2] = 0;
              *puVar7 = 4;
              *puVar8 = this_00->field_0038;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            puVar8 = &this_00->field_0D53;
            puVar7 = &this_00->field_0D47;
            local_c = 2;
            do {
              local_8 = 6;
              do {
                puVar11 = nullptr;
                iVar6 = 0;
                iVar3 = 1;
                bVar10 = 0;
                uVar9 = 6;
                pcVar4 = st::fn_00403607(nullptr,0);
                puVar5 = st::fn_00709AF0
                                   (PTR_00806794,CASE_1F,pcVar4,uVar9,bVar10,iVar3,iVar6,puVar11);
                puVar8[-0x12] = puVar5;
                puVar7[-0xc] = 0;
                *puVar7 = 4;
                *puVar8 = this_00->field_0038;
                puVar8 = puVar8 + 1;
                puVar7 = puVar7 + 1;
                local_8 = local_8 + -1;
              } while (local_8 != 0);
              local_c = local_c + -1;
            } while (local_c != 0);
            g_currentExceptionFrame = local_54.previous;
            return;
          }
switchD_004f9f52_caseD_3:
          this_00->field_023F = CASE_4;
          st::fn_00405E2F(CASE_B0);
          g_currentExceptionFrame = local_54.previous;
          return;
        case CASE_2:
        case CASE_4:
          local_10->field_023F = CASE_3;
          st::fn_00405E2F(CASE_AF);
          if (g_researchPanel_008016E8 != nullptr) {
            st::fn_00401A73(g_researchPanel_008016E8,'\0');
          }
          if (g_bldBoatPanel_0080167C != nullptr) {
            st::fn_00401A73(g_bldBoatPanel_0080167C,'\0');
          }
          if (g_bldObjPanel_00801684 != nullptr) {
            st::fn_00401A73(g_bldObjPanel_00801684,'\0');
          }
          if (g_bldLabPanel_00801680 != nullptr) {
            st::fn_00401A73(g_bldLabPanel_00801680,'\0');
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
          if (g_helpPanel_00801690 != nullptr) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(g_helpPanel_00801690->vtable + 0x18))(0);
          }
          if (g_optPanel_008016DC != nullptr) {
            st::fn_00402630(g_optPanel_008016DC);
          }
        default:
          g_currentExceptionFrame = local_54.previous;
          return;
        case CASE_3:
          goto switchD_004f9f52_caseD_3;
        }
      }
      g_currentExceptionFrame = local_54.previous;
      iVar6 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel.cpp",0x40f,0,iVar3,
                                 "%s","CPanelTy::SwitchCPanel");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x40f);
    }
  }
  return;
}

// 004FA400 CPanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/004FA400/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::ShiftControls */

undefined4 __thiscall st::fn_004FA400(CPanelTy *this,int param_1)

{
  CPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar2;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  if (param_1 == this->field_0130) {
    return 0;
  }
  this->field_0130 = param_1;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    st::fn_00405DBC(local_8,1,param_1);
    st::fn_00405DBC(this_00,0,param_1);
    puVar5 = this_00->field_09A4;
    iVar4 = 7;
    do {
      if (*puVar5 != 0) {
        st::fn_006E6080(this_00,2,*puVar5,(undefined4 *)&this_00->field_0x18);
      }
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar5 = this_00->field_09C0;
    iVar4 = 2;
    do {
      if (*puVar5 != 0) {
        st::fn_006E6080(this_00,2,*puVar5,(undefined4 *)&this_00->field_0x18);
      }
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel.cpp",0x42b,0,iVar2,"%s",
                             "CPanelTy::ShiftControls");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x42b);
  return 1;
}

// 004FA570 CPanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/004FA570/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::ShiftControls

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004FA570(CPanelTy *this,int param_1,int param_2)

{
  CPanelTy *this_00;
  short sVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  uint *puVar7;
  uint uVar8;
  InternalExceptionFrame local_50;
  uint local_c;
  CPanelTy *local_8;

  local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(param_1 == 0));
  if (param_1 == 0) {
    if (param_2 == this->field_0138) {
      return;
    }
    this->field_0138 = param_2;
  }
  else {
    if (param_2 == this->field_0134) {
      return;
    }
    this->field_0134 = param_2;
  }
  memset(&this->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
  this->field_0028 = 0x24;
  if (param_2 == 0) {
    sVar2 = this->field_0241;
  }
  else {
    sVar2 = -this->field_0241;
  }
  *(short *)&this->field_0x2e = sVar2;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel.cpp",0x452,0,iVar4,"%s",
                               "CPanelTy::ShiftControls");
    if (iVar3 == 0) {
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x452);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == 0) {
    if (local_8->field_09D0 != 0) {
      st::fn_006E6080(local_8,2,local_8->field_09D0,(undefined4 *)&local_8->field_0x18);
    }
    puVar7 = this_00->field_0A15;
    iVar5 = 6;
    do {
      if (*puVar7 != 0) {
        st::fn_006E6080(this_00,2,*puVar7,(undefined4 *)&this_00->field_0x18);
      }
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar7 = this_00->field_0B1F;
    iVar5 = 6;
    do {
      if (*puVar7 != 0) {
        st::fn_006E6080(this_00,2,*puVar7,(undefined4 *)&this_00->field_0x18);
      }
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = this_00->field_0B37;
  }
  else {
    if (local_8->field_095C != 0) {
      st::fn_006E6080(local_8,2,local_8->field_095C,(undefined4 *)&local_8->field_0x18);
    }
    puVar7 = this_00->field_0960;
    iVar5 = 4;
    do {
      if (*puVar7 != 0) {
        st::fn_006E6080(this_00,2,*puVar7,(undefined4 *)&this_00->field_0x18);
      }
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = this_00->field_0970;
  }
  if (iVar5 != 0) {
    st::fn_006E6080(this_00,2,iVar5,(undefined4 *)&this_00->field_0x18);
  }
  uVar8 = local_c & 0xff;
  if (this_00->field_09C0[uVar8] != 0) {
    st::fn_006E6080(this_00,2,this_00->field_09C0[uVar8],(undefined4 *)&this_00->field_0x18);
  }
  iVar5 = *(int *)((int)this_00->field_0308 + uVar8 * 4 + -10);
  if (iVar5 != 0) {
    st::fn_006E6080(this_00,2,iVar5,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_0308[uVar8] != 0) {
    st::fn_006E6080(this_00,2,this_00->field_0308[uVar8],(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_0310[uVar8] != 0) {
    st::fn_006E6080(this_00,2,this_00->field_0310[uVar8],(undefined4 *)&this_00->field_0x18);
  }
  if (((char)local_c != '\0') && (this_00->field_0310[uVar8 + 1] != 0)) {
    st::fn_006E6080(this_00,2,this_00->field_0310[uVar8 + 1],(undefined4 *)&this_00->field_0x18);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 004FB060 CPanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/004FB060/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004046BA|004FB060; family_names=CPanelTy::GetMessage; ret4=2;
   direct_offsets={10:10,14:12,18:11,1c:6}

   [STSwitchEnumApplier] Switch target field_023F uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_023FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254
    */

int __thiscall st::fn_004FB060(CPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  bool bVar2;
  CPanelTy *this_00;
  ushort uVar3;
  DWORD DVar4;
  int local_EAX_60;
  ushort *local_EAX_1162;
  ushort *puVar6;
  int local_EAX_2208;
  uint uVar5;
  int local_EAX_2734;
  int iVar6;
  LPSTR pCVar7;
  int iVar5;
  LPSTR text;
  uint *puVar8;
  uint uVar7;
  BITMAPINFO *pBVar9;
  int local_EAX_9661;
  int iVar11;
  uint uVar10;
  dword dVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_15;
  int iVar12;
  byte bVar13;
  short sVar14;
  ushort **ppuVar15;
  FrmPanelTy *pFVar16;
  short sVar17;
  undefined1 *puVar18;
  int *piVar19;
  bool *pbVar20;
  bool local_ZF_8552;
  bool bVar14;
  uint *puVar21;
  uint uVar22;
  undefined4 *puVar23;
  ushort *puVar24;
  char *pcVar25;
  undefined4 uVar26;
  char cVar27;
  UINT UVar28;
  int iVar29;
  undefined4 *puVar30;
  code *pcVar31;
  InternalExceptionFrame local_d0;
  bool local_8c [29];
  int local_6f;
  bool local_68 [36];
  CPanelTy *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  bool local_2e;
  bool local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  bool local_d;
  int *local_c;
  undefined4 local_8;

  local_44 = this;
  DVar4 = st::fn_006E51B0(this->field_0010);
  this->field_0038 = DVar4;
  local_d0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d0;
  local_EAX_60 = st::fn_0072D7F0(local_d0.jumpBuffer,0);
  this_00 = local_44;
  if (local_EAX_60 != 0) {
    g_currentExceptionFrame = local_d0.previous;
    iVar11 = st::fn_006AD4D0("E:\\__titans\\Andrey\\cpanel.cpp",0x75f,0,local_EAX_60,
                                "%s","CPanelTy::GetMessage");
    if (iVar11 == 0) {
      st::fn_006A5E40(local_EAX_60,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x75f);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = message->id;
  if (MESS_CPANELTY_B174 < SVar1) {
    switch(SVar1) {
    case 0xb17f:
    case 0xb180:
    case 0xb181:
    case 0xb182:
    case 0xb183:
    case 0xb184:
      piVar19 = (message->arg1).ptr;
      iVar6 = DAT_00806734;
      if (local_44->field_0138 != 0) {
        iVar6 = local_44->field_00A8;
      }
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)local_44->field_0194,0,
                   *piVar19 - local_44->field_0050,piVar19[1] - iVar6,piVar19[2],piVar19[3],
                   (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a);
      if (this_00->field_0BFC == '\0') {
        bVar13 = *(byte *)((SVar1 - 0xa56e) + (int)this_00);
        if (bVar13 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = bVar13 + 6;
        }
      }
      else {
        uVar5 = (uint)*(byte *)((SVar1 - 0xa56e) + (int)this_00);
      }
      iVar6 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar6 = this_00->field_00A8;
      }
      local_1c = (char *)(piVar19[1] - iVar6);
      pBVar9 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0B17,uVar5);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,*piVar19 - this_00->field_0050,
             (int)local_1c,'\x01',(byte *)pBVar9);
      iVar6 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar6 = this_00->field_00A8;
      }
      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,
                       (*piVar19 - this_00->field_0050) + 0x17,piVar19[1] - iVar6,piVar19[2] + -0x17
                       ,piVar19[3]);
      uVar5 = 2;
      iVar29 = -1;
      iVar6 = piVar19[2] + -0x17;
      iVar12 = 0;
      puVar21 = (uint *)&DAT_007c2310;
      puVar8 = (uint *)st::fn_006B0140(SVar1 - 0x6265,g_hINSTANCE_00807618);
      pcVar25 = (char *)st::fn_0040326F(this_00->field_01B8,puVar8,puVar21,iVar6);
      st::fn_007119C0(this_00->field_01B8,pcVar25,iVar12,iVar29,uVar5);
      puVar24 = this_00->field_0148[5];
      if ((int)puVar24 < 0) break;
      uVar5 = this_00->field_00A8;
      uVar10 = this_00->field_0050;
      goto cf_common_exit_004FD606;
    case 0xb18f:
    case 0xb190:
    case 0xb191:
    case 0xb192:
    case 0xb193:
    case 0xb194:
      iVar5 = st::fn_00403D7D(local_44,(char)message->id + 0x71);
      if (DAT_00808784 != 0) break;
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) || (iVar5 < 0)) break;
      this_00->field_012C = 0;
      if (this_00->field_0C52 == '\0') {
        st::fn_00401E15(this_00,'\0',0);
      }
      pbVar20 = (bool *)((int)&local_8 + 2);
      this_00->field_012C = 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT13((char)iVar5,CONCAT12(2,(short)local_8));
      puVar23 = (undefined4 *)0x27;
      goto cf_common_exit_004FCF18;
    case 0xb19f:
    case 0xb1a0:
    case 0xb1a1:
    case 0xb1a2:
    case 0xb1a3:
    case 0xb1a4:
      piVar19 = (message->arg1).ptr;
      uVar7 = st::fn_00405259(local_44,(char)SVar1 + 0x61);
      iVar6 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar6 = this_00->field_00A8;
      }
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,
                   *piVar19 - this_00->field_0050,piVar19[1] - iVar6,piVar19[2],piVar19[3],
                   (-(DAT_0080874e != '\x03') & 0xfdU) + 0x3d);
      if (-1 < (int)uVar7) {
        if ((uVar7 == 0) || ((message->arg0).u32 == 0)) {
          iVar6 = 1;
        }
        else {
          iVar6 = 0;
        }
        iVar12 = piVar19[1];
        iVar29 = DAT_00806734;
        if (this_00->field_0138 != 0) {
          iVar29 = this_00->field_00A8;
        }
        pBVar9 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_09D5,iVar6);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,*piVar19 - this_00->field_0050,
               iVar12 - iVar29,'\x01',(byte *)pBVar9);
      }
      puVar24 = this_00->field_0148[5];
      if ((int)puVar24 < 0) break;
      uVar5 = this_00->field_00A8;
      uVar10 = this_00->field_0050;
      goto cf_common_exit_004FD606;
    case MESS_SHARED_B1FF:
    case 0xb20d:
      dVar11 = 0xffffffff;
      uVar3 = 0;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)local_44->field_0B1F + uVar3 + 0x83) != '\0') {
          dVar11 = dVar11 + 1;
        }
      } while ((dVar11 != (message->arg0).u32) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (uVar3 < 6) {
        st::fn_00401190(local_44,(byte)uVar3);
      }
      else {
        st::fn_00401190(local_44,0);
      }
      break;
    case MESS_BEHPANELTY_B200:
      uVar5 = 0xffffffff;
      uVar3 = 0;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)local_44->field_0B1F + uVar3 + 0x83) != '\0') {
          uVar5 = uVar5 + 1;
        }
      } while ((uVar5 != (message->arg0).words.high) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      pcVar31 = thunk_FUN_0052a320;
      iVar6 = 0;
      pcVar25 = st::fn_00405493(*(Global_sub_00529590_param_1Enum *)
                                    ((int)local_44->field_0B1F + uVar3 + 0x83),local_44->field_0B99);
      pCVar7 = st::fn_0040577C(pcVar25,iVar6);
      st::fn_004022D9(this_00,3,message,1,pCVar7,pcVar31);
      break;
    case 0xb203:
    case 0xb20f:
      dVar11 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BFE)[uVar3] != '\0') {
          dVar11 = dVar11 + 1;
        }
      } while ((dVar11 != (message->arg0).u32) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (uVar3 < 6) {
        st::fn_00403206(local_44,(byte)uVar3);
      }
      else {
        st::fn_00403206(local_44,0);
      }
      break;
    case 0xb204:
      uVar5 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BFE)[uVar3] != '\0') {
          uVar5 = uVar5 + 1;
        }
      } while ((uVar5 != (message->arg0).words.high) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      pcVar31 = thunk_FUN_0052a320;
      iVar6 = 0;
      pcVar25 = st::fn_00405493((&local_44->field_0BFE)[uVar3],local_44->field_0BF5);
      pCVar7 = st::fn_0040577C(pcVar25,iVar6);
      st::fn_004022D9(this_00,5,message,1,pCVar7,pcVar31);
      break;
    case MESS_BLDOBJPANELTY_B206:
      pcVar31 = thunk_FUN_0052a7b0;
      pCVar7 = st::fn_0040577C("BUT_MFFRAMES",0);
      text = st::fn_0040577C("BUT_MFTABS",0);
      st::fn_004047DC(this_00,5,message,1,text,pCVar7,pcVar31);
      break;
    case MESS_RESEARCHPANELTY_B207:
      local_44->field_09D4 = *(undefined1 *)(message->arg0).ptr;
      st::fn_00401889();
      break;
    case MESS_TRADEPANELTY_B20B:
      pcVar31 = thunk_FUN_0052a7b0;
      pCVar7 = st::fn_0040577C("BUT_MFFRAMES",0);
      st::fn_004047DC(this_00,5,message,1,"BUT_RCTTYPESI",pCVar7,pcVar31);
      break;
    case MESS_BEHPANELTY_B20E:
      uVar5 = 0xffffffff;
      uVar3 = 0;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)local_44->field_0B1F + uVar3 + 0x83) != '\0') {
          uVar5 = uVar5 + 1;
        }
      } while ((uVar5 != (message->arg0).words.high) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      pcVar31 = thunk_FUN_0052a320;
      iVar6 = 0;
      pcVar25 = st::fn_00405493(*(Global_sub_00529590_param_1Enum *)
                                    ((int)local_44->field_0B1F + uVar3 + 0x83),local_44->field_0B99);
      pCVar7 = st::fn_0040577C(pcVar25,iVar6);
      st::fn_004022D9(this_00,3,message,6,pCVar7,pcVar31);
      break;
    case 0xb210:
      uVar5 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BFE)[uVar3] != '\0') {
          uVar5 = uVar5 + 1;
        }
      } while ((uVar5 != (message->arg0).words.high) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (5 < uVar3) {
        uVar3 = 0;
      }
      pcVar31 = thunk_FUN_0052a320;
      iVar6 = 0;
      pcVar25 = st::fn_00405493((&local_44->field_0BFE)[uVar3],local_44->field_0BF5);
      pCVar7 = st::fn_0040577C(pcVar25,iVar6);
      st::fn_004022D9(this_00,5,message,6,pCVar7,pcVar31);
      break;
    case 0xb211:
    case 0xb213:
    case 0xb215:
    case 0xb217:
    case 0xb219:
    case 0xb21b:
      if (DAT_00808784 != 0) break;
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) break;
      local_44->field_012C = 0;
      if (local_44->field_0C52 == '\0') {
        st::fn_00401E15(local_44,'\0',0);
      }
      this_00->field_012C = 1;
      pbVar20 = &local_2d;
      local_2d = SUB41(message->id - 0xb211 >> 1,0);
      puVar23 = (undefined4 *)0x2a;
      goto cf_common_exit_004FCF18;
    case 0xb212:
    case 0xb216:
      switch(local_44->field_0BF5) {
      case CASE_5F:
        pcVar25 = "BUT_TBDN";
LAB_004fd533:
        pcVar31 = thunk_FUN_00529fe0;
        pCVar7 = st::fn_0040577C(pcVar25,0);
        st::fn_004022D9(this_00,5,message,1,pCVar7,pcVar31);
        break;
      case CASE_64:
      case CASE_65:
      case CASE_6D:
        st::fn_004022D9(local_44,5,message,1,"BUT_MINUSSI",thunk_FUN_00529fe0);
      }
      break;
    case 0xb214:
    case 0xb218:
      switch(local_44->field_0BF5) {
      case CASE_5F:
        pcVar25 = "BUT_TBUP";
        goto LAB_004fd533;
      case CASE_64:
      case CASE_65:
      case CASE_6D:
        st::fn_004022D9(local_44,5,message,1,"BUT_PLUSSI",thunk_FUN_00529fe0);
      }
      break;
    case 0xb21a:
    case 0xb21c:
      if (local_44->field_0BF5 != CASE_6D) break;
      local_c = (int *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
      piVar19 = (message->arg1).ptr;
      switch((message->arg0).u32) {
      case 0:
        local_c = (int *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
        break;
      case 1:
      case 3:
        local_c = (int *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)((&local_44->field_0xc0f)[SVar1 - 0xb21a >> 1] != '\x03'));
        break;
      case 2:
        local_c = (int *)((uint)STPiece<1,3>(local_c) << 8);
      }
      iVar6 = piVar19[1];
      iVar12 = DAT_00806734;
      if (local_44->field_0138 != 0) {
        iVar12 = local_44->field_00A8;
      }
      pBVar9 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)local_44->field_09D5,
                            (uint)local_c & 0xff);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,*piVar19 - this_00->field_0050,
             iVar6 - iVar12,'\x01',(byte *)pBVar9);
      puVar24 = this_00->field_0148[5];
      if ((int)puVar24 < 0) break;
      uVar5 = this_00->field_00A8;
      uVar10 = this_00->field_0050;
cf_common_exit_004FD606:
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,(uint)puVar24,0xffffffff,uVar10,uVar5);
      break;
    case 0xb220:
    case 0xb221:
    case 0xb222:
    case 0xb223:
      if (DAT_00808784 != 0) break;
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) break;
      local_44->field_012C = 0;
      if (local_44->field_0B64 == '\0') {
        st::fn_00401E15(local_44,'\x01',0);
      }
      this_00->field_012C = 1;
      pbVar20 = local_8c;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        pbVar20[0] = false;
        pbVar20[1] = false;
        pbVar20[2] = false;
        pbVar20[3] = false;
        pbVar20 = pbVar20 + 4;
      }
      *pbVar20 = false;
      pbVar20 = local_8c;
      local_6f = message->id - 0xb220;
      local_8c[0] = true;
      puVar23 = (undefined4 *)0x17;
      goto cf_common_exit_004FCF18;
    case 0xb230:
      cVar27 = local_44->field_0BCF;
      pcVar25 = "BUT_BEHREPAIR0";
      goto cf_common_exit_004FD1D2;
    case 0xb231:
      pcVar25 = "BUT_BEHREPAIR20";
      if (DAT_0080874e != '\x03') {
        pcVar25 = "BUT_BEHREPAIR50";
      }
      cVar27 = local_44->field_0BD0;
      goto cf_common_exit_004FD1D2;
    case 0xb232:
      pcVar25 = "BUT_BEHREPAIR50";
      if (DAT_0080874e != '\x03') {
        pcVar25 = "BUT_BEHREPAIR80";
      }
      cVar27 = local_44->field_0BD1;
cf_common_exit_004FD1D2:
      local_ZF_8552 = cVar27 == '\x03';
      pCVar7 = st::fn_0040577C(pcVar25,0);
      st::fn_0040168B(this_00,3,message,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar7,local_ZF_8552);
      break;
    case 0xb233:
      bVar14 = local_44->field_0BD2 == '\x03';
      pCVar7 = st::fn_0040577C("BUT_BEHREPAIR80",0);
      st::fn_0040168B(this_00,3,message,6,pCVar7,bVar14);
    }
    goto cf_common_exit_004FD60B;
  }
  if (0xb16e < SVar1) {
    if (DAT_00808784 != 0) goto cf_common_exit_004FD60B;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto cf_common_exit_004FD60B;
    local_44->field_012C = 0;
    if (local_44->field_0C52 == '\0') {
      st::fn_00401E15(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar20 = (bool *)((int)&local_14 + 2);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_14 = CONCAT13((char)message->id + 0x91,(int3)local_14) & 0xff00ffff;
    puVar23 = (undefined4 *)0x27;
    goto cf_common_exit_004FCF18;
  }
  if (SVar1 < 0xb10f) {
    if (SVar1 == MESS_CPANELTY_B10E) {
      if (DAT_00808784 == 0) {
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          memset(&local_44->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
          iVar6 = 0;
          local_44->field_0028 = 0xa209;
          local_44->field_0020 = 0x101;
          local_44->field_0024 = 3;
          st::fn_006E3B50
                    ((AppClassTy *)&DAT_00807620,(undefined4 *)&local_44->field_0x18);
          st::fn_00405E2F(0xae);
        }
      }
      goto cf_common_exit_004FD60B;
    }
    if (MESS_CPANELTY_B106 < SVar1) {
      switch(SVar1) {
      case 0xb107:
        pcVar31 = thunk_FUN_0052a3e0;
        pCVar7 = st::fn_0040577C("BUT_MAPSMIL",0);
        st::fn_004022D9(this_00,4,message,6,pCVar7,pcVar31);
        break;
      case MESS_FRMPANELTY_B108:
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            memset(&local_44->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
            iVar6 = 0;
            local_44->field_0028 = 0xa206;
            local_44->field_0020 = 0x101;
            local_44->field_0024 = 3;
            st::fn_006E3B50
                      ((AppClassTy *)&DAT_00807620,(undefined4 *)&local_44->field_0x18);
            st::fn_00405E2F(0xae);
          }
        }
        break;
      case MESS_FRMPANELTY_B109:
        pcVar31 = thunk_FUN_0052a390;
        pcVar25 = "BUT_MAPZIN";
        goto cf_common_exit_004FBCF3;
      case MESS_FRMPANELTY_B10A:
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            memset(&local_44->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
            iVar6 = 0;
            local_44->field_0028 = 0xa207;
            local_44->field_0020 = 0x101;
            local_44->field_0024 = 3;
            st::fn_006E3B50
                      ((AppClassTy *)&DAT_00807620,(undefined4 *)&local_44->field_0x18);
            st::fn_00405E2F(0xae);
          }
        }
        break;
      case MESS_FRMPANELTY_B10B:
        pcVar31 = thunk_FUN_0052a390;
        pCVar7 = st::fn_0040577C("BUT_MAPZOUT",0);
        st::fn_004022D9(this_00,4,message,6,pCVar7,pcVar31);
        break;
      case 0xb10c:
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            memset(&local_44->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
            local_44->field_0028 = 0xa208;
            local_44->field_0020 = 0x101;
            local_44->field_0024 = 3;
            st::fn_006E3B50
                      ((AppClassTy *)&DAT_00807620,(undefined4 *)&local_44->field_0x18);
            st::fn_00405E2F(0xae);
          }
        }
        break;
      case MESS_CPANELTY_B10D:
        pcVar31 = thunk_FUN_0052a390;
        pCVar7 = st::fn_0040577C("BUT_MAPTLFT",0);
        st::fn_004022D9(this_00,4,message,6,pCVar7,pcVar31);
      }
      goto cf_common_exit_004FD60B;
    }
    if (SVar1 == MESS_CPANELTY_B106) {
      if ((message->arg0).u32 == 3) {
        DAT_00807327 = DAT_00807327 | 4;
      }
      else {
        DAT_00807327 = DAT_00807327 & 0xfb;
      }
      goto LAB_004fc53f;
    }
    if (MESS_SHARED_0060 < SVar1) {
      if (SVar1 != MESS_SHARED_0061) {
        if (SVar1 == MESS_CPANELTY_B104) {
          if ((message->arg0).u32 == 3) {
            DAT_00807327 = DAT_00807327 | 2;
          }
          else {
            DAT_00807327 = DAT_00807327 & 0xfd;
          }
          g_sT3DSMAPContext_00807598->field_0418 = (uint)DAT_00807327;
          st::fn_00405E2F(0xae);
          goto cf_common_exit_004FD60B;
        }
        if (SVar1 != MESS_CPANELTY_B105) goto cf_common_exit_004FD60B;
        pcVar31 = thunk_FUN_0052a3e0;
        pcVar25 = "BUT_MAPSCIV";
        goto cf_common_exit_004FBCF3;
      }
      local_8 = -1;
      local_c = (int *)0x1;
      if (local_44->field_023F == CASE_2) goto cf_common_exit_004FD60B;
      iVar6 = 0;
      uVar5 = (uint)(message->arg1).words.low;
      local_18 = (uint)(message->arg1).words.high;
      do {
        sVar17 = (short)iVar6;
        local_2c = (&local_44->field_003C)[sVar17];
        local_28 = (&local_44->field_0094)[sVar17];
        local_24 = (&local_44->field_0068)[sVar17];
        local_20 = (&local_44->field_00C0)[sVar17];
        if ((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
           (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        iVar12 = iVar6;
      } while ((!bVar2) && (iVar6 = iVar6 + 1, iVar12 = local_8, (short)iVar6 < 0xb));
      local_8 = iVar12;
      sVar17 = (short)local_8;
      iVar6 = (int)(short)local_8;
      switch(iVar6) {
      case 0:
      case 2:
      case 10:
        if ((g_bldObjPanel_00801684 == nullptr) ||
           (g_bldObjPanel_00801684->field_0172 == 2)) {
          piVar19 = (int *)0x1;
        }
        else {
          piVar19 = nullptr;
        }
        if ((g_behPanel_00801678 != nullptr) && (g_behPanel_00801678->field_0172 != 2)) {
          piVar19 = nullptr;
        }
        if ((g_sAMPanel_008016EC != nullptr) && (g_sAMPanel_008016EC->field_0172 != 2)) {
          piVar19 = nullptr;
        }
        pFVar16 = g_frmPanel_0080168C;
        if ((g_upgPanel_00802A48 != nullptr) && (g_upgPanel_00802A48->field_0172 != 2)) {
          piVar19 = nullptr;
        }
        break;
      default:
        piVar19 = local_c;
        goto LAB_004fbe73;
      case 6:
      case 8:
      case 9:
        if ((g_researchPanel_008016E8 == nullptr) ||
           (g_researchPanel_008016E8->field_0172 == 2)) {
          piVar19 = (int *)0x1;
        }
        else {
          piVar19 = nullptr;
        }
        if ((g_bldBoatPanel_0080167C != nullptr) &&
           (g_bldBoatPanel_0080167C->field_0172 != 2)) {
          piVar19 = nullptr;
        }
        if ((g_infocPanel_00801698 != nullptr) &&
           (g_infocPanel_00801698->field_0172 != 2)) {
          piVar19 = nullptr;
        }
        pFVar16 = (FrmPanelTy *)g_bldLabPanel_00801680;
        if ((g_tradePanel_00802A44 != nullptr) &&
           (g_tradePanel_00802A44->field_0172 != 2)) {
          piVar19 = nullptr;
        }
      }
      if ((pFVar16 != nullptr) && (pFVar16->field_0172 != 2)) {
        piVar19 = nullptr;
      }
LAB_004fbe73:
      local_14 = uVar5;
      if (piVar19 != nullptr) {
        switch(iVar6) {
        case 0:
        case 8:
          st::fn_00401E15(local_44,(short)local_8 == 0,1);
          break;
        case 2:
        case 6:
          if (DAT_0080874e != '\x03') {
            local_1c = &local_44->field_0B63;
            if ((short)local_8 != 2) {
              local_1c = &local_44->field_0C51;
            }
            if ((*local_1c != '\0') &&
               ((((short)local_8 != 2 ||
                 ((((g_bldObjPanel_00801684 == nullptr ||
                    (g_bldObjPanel_00801684->field_0172 == 2)) &&
                   ((g_behPanel_00801678 == nullptr ||
                    (g_behPanel_00801678->field_0172 == 2)))) &&
                  ((((g_sAMPanel_008016EC == nullptr ||
                     (g_sAMPanel_008016EC->field_0172 == 2)) &&
                    ((g_upgPanel_00802A48 == nullptr ||
                     (g_upgPanel_00802A48->field_0172 == 2)))) &&
                   ((g_frmPanel_0080168C == nullptr ||
                    (g_frmPanel_0080168C->field_0172 == 2)))))))) &&
                (((short)local_8 != 6 ||
                 ((((((g_researchPanel_008016E8 == nullptr ||
                      (g_researchPanel_008016E8->field_0172 == 2)) &&
                     ((g_bldBoatPanel_0080167C == nullptr ||
                      (g_bldBoatPanel_0080167C->field_0172 == 2)))) &&
                    ((g_infocPanel_00801698 == nullptr ||
                     (g_infocPanel_00801698->field_0172 == 2)))) &&
                   ((g_tradePanel_00802A44 == nullptr ||
                    (g_tradePanel_00802A44->field_0172 == 2)))) &&
                  ((g_bldLabPanel_00801680 == nullptr ||
                   (g_bldLabPanel_00801680->field_0172 == 2)))))))))) {
              local_2c = (&local_44->field_003C)[iVar6] + 7;
              local_24 = 0xe;
              local_20 = 0x1b;
              sVar14 = 0;
              do {
                local_28 = sVar14 * 0x1d + 6 + (&local_44->field_0094)[(short)local_8];
                if (((((int)uVar5 < local_2c) ||
                     ((&local_44->field_003C)[iVar6] + 0x15 <= (int)uVar5)) ||
                    ((int)local_18 < local_28)) || (local_28 + 0x1b <= (int)local_18)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  if (*local_1c == '\x01') {
                    if ((local_1c[sVar14 + 0x2a] == '\0') && (local_1c[2] == '\x01')) {
                      st::fn_00401E15(local_44,(short)local_8 == 2,1);
                      st::fn_00401BA9(this_00,sVar17 != 2,(byte)sVar14);
                    }
                  }
                  else {
                    st::fn_00401E15(local_44,(short)local_8 == 2,1);
                    st::fn_00401BA9(this_00,sVar17 != 2,(byte)sVar14);
                  }
                  break;
                }
                sVar14 = sVar14 + 1;
              } while (sVar14 < 5);
            }
          }
          break;
        case 3:
        case 5:
          if (DAT_0080874e == '\x03') {
            local_1c = &local_44->field_0B63;
            if ((short)local_8 != 3) {
              local_1c = &local_44->field_0C51;
            }
            bVar13 = 0xff;
            local_c = (int *)0xff;
            if (*local_1c != '\0') {
              if ((short)local_8 == 3) {
                if ((((((g_bldObjPanel_00801684 != nullptr) &&
                       (g_bldObjPanel_00801684->field_0172 != 2)) ||
                      ((g_behPanel_00801678 != nullptr &&
                       (g_behPanel_00801678->field_0172 != 2)))) ||
                     ((g_sAMPanel_008016EC != nullptr &&
                      (g_sAMPanel_008016EC->field_0172 != 2)))) ||
                    ((g_upgPanel_00802A48 != nullptr &&
                     (g_upgPanel_00802A48->field_0172 != 2)))) ||
                   ((g_frmPanel_0080168C != nullptr &&
                    (g_frmPanel_0080168C->field_0172 != 2)))) break;
                iVar6 = local_44->field_00A0 + 0x40;
                if (((int)local_18 < iVar6) &&
                   (((local_44->field_00A0 + 10 < (int)local_18 &&
                     (iVar12 = (local_44->field_0048 + 0xb + iVar6) - uVar5, iVar12 < (int)local_18)
                     ) && ((int)local_18 < iVar12 + 0x21)))) {
                  bVar13 = 4 - (char)((int)(iVar6 - local_18) / 0xb);
                  local_c = (int *)(uint)bVar13;
                }
              }
              if ((short)local_8 == 5) {
                if (((((g_researchPanel_008016E8 != nullptr) &&
                      (g_researchPanel_008016E8->field_0172 != 2)) ||
                     ((g_bldBoatPanel_0080167C != nullptr &&
                      (g_bldBoatPanel_0080167C->field_0172 != 2)))) ||
                    ((g_infocPanel_00801698 != nullptr &&
                     (g_infocPanel_00801698->field_0172 != 2)))) ||
                   (((g_tradePanel_00802A44 != nullptr &&
                     (g_tradePanel_00802A44->field_0172 != 2)) ||
                    ((g_bldLabPanel_00801680 != nullptr &&
                     (g_bldLabPanel_00801680->field_0172 != 2)))))) break;
                iVar6 = local_44->field_00A8 + 0xb;
                if ((iVar6 < (int)local_18) &&
                   ((((int)local_18 < local_44->field_00A8 + 0x41 &&
                     (iVar12 = (iVar6 - local_44->field_0050) + -0x87 + uVar5,
                     (int)local_18 < iVar12)) && (iVar12 + -0x21 < (int)local_18)))) {
                  uVar5 = (int)(local_18 - iVar6) / 0xb;
                  bVar13 = (byte)uVar5;
                  local_c = (int *)(uVar5 & 0xff);
                }
              }
              piVar19 = local_c;
              if (bVar13 != 0xff) {
                if (*local_1c == '\x01') {
                  if ((((undefined1 *)((int)local_c + 0x2a))[(int)local_1c] == '\0') &&
                     (local_1c[2] == '\x01')) {
                    st::fn_00401E15(local_44,(short)local_8 == 3,1);
                    st::fn_00401BA9(this_00,sVar17 != 3,(byte)piVar19);
                  }
                }
                else {
                  st::fn_00401E15(local_44,(short)local_8 == 3,1);
                  st::fn_00401BA9(this_00,sVar17 != 3,(byte)local_c);
                }
              }
            }
          }
          break;
        case 9:
          if (DAT_00808784 == 0) {
            if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) {
              local_24 = 0x4c;
              local_20 = 0x38;
              local_8 = -1;
              iVar6 = 0;
              do {
                iVar12 = st::fn_004058F3('\x01',(Global_sub_004F19D0_param_2Enum)iVar6,&local_2c,
                                            &local_28);
                if (iVar12 != 0) {
                  local_2c = local_2c + this_00->field_0060;
                  local_28 = local_28 + this_00->field_00B8;
                  if (((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
                      ((int)local_18 < local_28)) || (local_20 + local_28 <= (int)local_18)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar12 = iVar6;
                  if (bVar2) break;
                }
                iVar6 = iVar6 + 1;
                iVar12 = local_8;
              } while ((short)iVar6 < 6);
              local_8 = iVar12;
              if (-1 < (short)local_8) {
                st::fn_00401875
                          (g_allPlayers_007FA174,(uint *)0x1,(short)local_8 + 1,1);
              }
            }
          }
          break;
        case 10:
          if (DAT_00808784 == 0) {
            if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) {
              local_24 = 0x4c;
              local_20 = 0x38;
              local_8 = -1;
              iVar6 = 0;
              do {
                iVar12 = st::fn_004058F3('\0',(Global_sub_004F19D0_param_2Enum)iVar6,&local_2c,
                                            &local_28);
                if (iVar12 != 0) {
                  local_2c = local_2c + this_00->field_0064;
                  local_28 = local_28 + this_00->field_00BC;
                  if ((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
                     (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar12 = iVar6;
                  if (bVar2) break;
                }
                iVar6 = iVar6 + 1;
                iVar12 = local_8;
              } while ((short)iVar6 < 6);
              local_8 = iVar12;
              if (-1 < (short)local_8) {
                st::fn_00401875
                          (g_allPlayers_007FA174,nullptr,(short)local_8 + 1,1);
              }
            }
          }
        }
      }
      goto cf_common_exit_004FD60B;
    }
    if (SVar1 == MESS_SHARED_0060) {
      local_8 = 0;
      local_1c = (char *)STReplaceLowWord((uint32_t)(local_1c), (uint16_t)((message->arg1).words.low));
      local_40 = STReplaceLowWord((uint32_t)(local_40), (uint16_t)((message->arg1).words.high));
      if (local_44->field_023F == CASE_1) {
        local_c = &local_44->field_0204;
        local_18 = 0;
        local_3c = 5;
        do {
          piVar19 = nullptr;
          switch(local_18) {
          case 0:
          case 1:
            if (((((g_bldObjPanel_00801684 != nullptr) &&
                  (g_bldObjPanel_00801684->field_0172 == 2)) &&
                 (g_behPanel_00801678 != nullptr)) &&
                (((g_behPanel_00801678->field_0172 == 2 &&
                  (g_upgPanel_00802A48 != nullptr)) &&
                 ((g_upgPanel_00802A48->field_0172 == 2 &&
                  ((g_frmPanel_0080168C != nullptr &&
                   (g_frmPanel_0080168C->field_0172 == 2)))))))) &&
               ((DAT_0080874e != '\x03' ||
                ((g_sAMPanel_008016EC != nullptr && (g_sAMPanel_008016EC->field_0172 == 2)
                 ))))) {
              piVar19 = local_c + 0x46;
            }
            break;
          case 3:
          case 4:
            if (((g_researchPanel_008016E8 != nullptr) &&
                (g_researchPanel_008016E8->field_0172 == 2)) &&
               ((g_bldBoatPanel_0080167C != nullptr &&
                (((g_bldBoatPanel_0080167C->field_0172 == 2 &&
                  (g_infocPanel_00801698 != nullptr)) &&
                 (g_infocPanel_00801698->field_0172 == 2)))))) {
              if (DAT_0080874e == '\x03') {
LAB_004fba8d:
                if ((g_bldLabPanel_00801680 != nullptr) &&
                   (g_bldLabPanel_00801680->field_0172 == 2)) {
LAB_004fbaa0:
                  piVar19 = local_c;
                }
              }
              else if ((g_tradePanel_00802A44 != nullptr) &&
                      (g_tradePanel_00802A44->field_0172 == 2)) {
                if (DAT_0080874e == '\x03') goto LAB_004fba8d;
                goto LAB_004fbaa0;
              }
            }
          }
          if (piVar19 != nullptr) {
            piVar19 = piVar19 + 1;
            local_14 = 10;
            do {
              if (piVar19[5] != 0) {
                uVar5 = (uint)local_1c & 0xffff;
                uVar10 = local_40 & 0xffff;
                if (((((int)uVar5 < piVar19[-1]) || (piVar19[1] + piVar19[-1] <= (int)uVar5)) ||
                    ((int)uVar10 < *piVar19)) || (piVar19[2] + *piVar19 <= (int)uVar10)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if ((bVar2) &&
                   ((piVar19[3] == 0 ||
                    (local_EAX_2734 =
                          st::fn_006B55C0(piVar19[3],piVar19[4],uVar5 - piVar19[-1],uVar10 - *piVar19),
                    local_EAX_2734 != 0)))) {
                  local_8 = piVar19[5];
                }
              }
              piVar19 = piVar19 + 7;
              local_14 = local_14 + -1;
            } while (local_14 != 0);
            local_14 = 0;
          }
          local_18 = local_18 + 1;
          local_c = local_c + 0x46;
          local_3c = local_3c + -1;
        } while (local_3c != 0);
      }
      if (this_00->field_0144 != local_8) {
        if (this_00->field_0144 != 0) {
          this_00->field_0028 = 0x4202;
          *(undefined2 *)&this_00->field_0x2c = 0;
          *(undefined2 *)&this_00->field_0x2e = 2;
          this_00->field_0030 = this_00->field_0144;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x18);
        }
        this_00->field_0144 = local_8;
        if (local_8 != 0) {
          this_00->field_0028 = 0x4201;
          *(undefined2 *)&this_00->field_0x2c = 0;
          *(undefined2 *)&this_00->field_0x2e = 2;
          this_00->field_0030 = this_00->field_0144;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x18);
        }
      }
      if (this_00->field_023F == CASE_1) {
        local_28 = this_00->field_00A4;
        local_2c = this_00->field_004C;
        local_24 = this_00->field_0078;
        local_20 = this_00->field_00D0;
        if (DAT_00808784 == 0) {
          if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            uVar5 = (uint)local_1c & 0xffff;
            uVar10 = local_40 & 0xffff;
            if (((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
                ((int)uVar10 < local_28)) || (local_20 + local_28 <= (int)uVar10)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              iVar6 = st::fn_006E68C0
                                (g_sT3DSMAPContext_00807598,(uVar5 - local_2c) + -5,
                                 (uVar10 - this_00->field_00A4) + -7,(int *)&local_34,&local_38);
              if (this_00->field_013C != 0) {
                if (iVar6 == 0) {
                  this_00->field_013C = 0;
                }
                else {
                  st::fn_00402720(local_34,local_38);
                }
              }
              if ((this_00->field_0140 != 0) && (iVar6 == 0)) {
                this_00->field_0140 = 0;
              }
              goto cf_common_exit_004FD60B;
            }
          }
        }
      }
      this_00->field_0140 = 0;
      this_00->field_013C = 0;
      goto cf_common_exit_004FD60B;
    }
    switch(SVar1) {
    case MESS_ID_NONE:
      local_44->field_0253 = local_44->field_0253 + 1;
      st::fn_00403062(local_44);
      st::fn_0040326A(this_00);
      st::fn_00405231(this_00);
      st::fn_00402775(this_00);
      bVar13 = 0;
      local_c = (int *)((uint)local_c & 0xffffff00);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar26 = extraout_EDX;
      do {
        uVar5 = (uint)local_c & 0xff;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)this_00->field_0B1F + uVar5 + 0x30) != '\0') {
          if (((bVar13 < 5) || (bVar13 == 0xd)) || (bVar13 == 0xe)) {
            switch(uVar5) {
            case 0:
              st::fn_0040206D(this_00);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_11;
              break;
            case 1:
              st::fn_004044A3();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_12;
              break;
            case 3:
              st::fn_00401889();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_13;
              break;
            case 4:
              st::fn_004025CC(this_00);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_14;
              break;
            case 0xd:
            case 0xe:
              st::fn_0040415B(this_00,STReplaceLowByte((uint32_t)(uVar26), (uint8_t)(bVar13 - 0xd)));
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_15;
            }
          }
          else {
            if ((bVar13 == 5) && (g_researchPanel_008016E8 != nullptr)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)g_researchPanel_008016E8->field_0000->field_001C)();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_00;
            }
            if ((bVar13 == 6) && (g_bldBoatPanel_0080167C != nullptr)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)g_bldBoatPanel_0080167C->field_0000->field_001C)();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_01;
            }
            if ((bVar13 == 7) && (g_bldObjPanel_00801684 != nullptr)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)g_bldObjPanel_00801684->field_0000->field_001C)();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_02;
            }
            if ((bVar13 == 8) && (g_infocPanel_00801698 != nullptr)) {
              g_infocPanel_00801698->Update();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_03;
            }
            if ((bVar13 == 9) && (g_tradePanel_00802A44 != nullptr)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)&g_tradePanel_00802A44->field_0000[1].field_0xc)();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_04;
            }
            if ((bVar13 == 10) && (g_behPanel_00801678 != nullptr)) {
              g_behPanel_00801678->Update();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_05;
            }
            if ((bVar13 == 0xb) && (g_bldLabPanel_00801680 != nullptr)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)g_bldLabPanel_00801680->field_0000->field_001C)();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_06;
            }
            if ((bVar13 == 0xf) && (g_upgPanel_00802A48 != nullptr)) {
              g_upgPanel_00802A48->Update();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_07;
            }
            if ((bVar13 == 0x10) && (g_frmPanel_0080168C != nullptr)) {
              g_frmPanel_0080168C->Update();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_08;
            }
            if ((bVar13 == 0x11) && (g_sAMPanel_008016EC != nullptr)) {
              g_sAMPanel_008016EC->Update();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_09;
            }
            if ((bVar13 == 0x12) && (g_helpPanel_00801690 != nullptr)) {
              st::fn_00402D38(g_helpPanel_00801690,'\x06');
              st::fn_00402D38(g_helpPanel_00801690,'\x05');
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar26 = extraout_EDX_10;
            }
          }
          *(undefined1 *)((int)this_00->field_0B1F + uVar5 + 0x30) = 0;
        }
        bVar13 = bVar13 + 1;
        local_c = (int *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar13));
      } while (bVar13 < 0x14);
      if (this_00->field_023F == CASE_3) {
        bVar2 = false;
        bVar13 = 0;
        piVar19 = &this_00->field_0094;
        do {
          iVar6 = this_00->field_0120 + -0x9b + this_00->field_0128;
          if ((bVar13 == 1) || (bVar13 == 7)) {
            iVar6 = iVar6 + this_00->field_00C0;
          }
          if (iVar6 < *piVar19) {
            *piVar19 = *piVar19 + -0xf;
          }
          iVar6 = this_00->field_0120 + -0x9b + this_00->field_0128;
          if ((bVar13 == 1) || (iVar12 = iVar6, bVar13 == 7)) {
            iVar12 = iVar6 + this_00->field_00C0;
          }
          if (*piVar19 <= iVar12) {
            if ((bVar13 == 1) || (bVar13 == 7)) {
              iVar6 = iVar6 + this_00->field_00C0;
            }
            *piVar19 = iVar6;
            bVar2 = true;
          }
          bVar13 = bVar13 + 1;
          piVar19 = piVar19 + 1;
        } while (bVar13 < 0xb);
        if (bVar2) {
          st::fn_00401B6D(this_00->field_011C,this_00->field_0120,this_00->field_0124,
                             this_00->field_0128 + -0x9b);
          this_00->field_023F = CASE_5;
          if (DAT_0080731a == 0) {
            this_00->field_023F = CASE_1;
            st::fn_00402ED2(this_00,1);
          }
          else {
            puVar18 = &this_00->field_02EC;
            puVar23 = &this_00->field_02EE;
            local_c = (int *)0x2;
            do {
              puVar30 = nullptr;
              iVar12 = 0;
              iVar6 = 1;
              bVar13 = 0;
              uVar5 = 6;
              pcVar25 = st::fn_00403607(nullptr,0);
              local_EAX_1162 =
                   st::fn_00709AF0
                             (PTR_00806794,CASE_1F,pcVar25,uVar5,bVar13,iVar6,iVar12,puVar30);
              puVar23[-3] = local_EAX_1162;
              puVar18[-2] = (char)*local_EAX_1162;
              *puVar18 = 3;
              *puVar23 = this_00->field_0038;
              puVar18 = puVar18 + 1;
              puVar23 = puVar23 + 1;
              local_c = (int *)((int)local_c + -1);
            } while (local_c != nullptr);
            puVar23 = &this_00->field_0D53;
            puVar18 = &this_00->field_0D47;
            local_8 = 2;
            do {
              local_c = (int *)0x6;
              do {
                puVar30 = nullptr;
                iVar12 = 0;
                iVar6 = 1;
                bVar13 = 0;
                uVar5 = 6;
                pcVar25 = st::fn_00403607(nullptr,0);
                puVar6 = st::fn_00709AF0
                                   (PTR_00806794,CASE_1F,pcVar25,uVar5,bVar13,iVar6,iVar12,puVar30);
                puVar23[-0x12] = puVar6;
                puVar18[-0xc] = (char)*puVar6;
                *puVar18 = 3;
                *puVar23 = this_00->field_0038;
                puVar23 = puVar23 + 1;
                puVar18 = puVar18 + 1;
                local_c = (int *)((int)local_c + -1);
              } while (local_c != nullptr);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            local_c = nullptr;
            local_8 = 0;
          }
        }
        st::fn_00403C5B(g_cursorClass_00802A30);
        bVar13 = 0;
        ppuVar15 = this_00->field_0148;
        do {
          if (-1 < (int)*ppuVar15) {
            st::fn_006B3640
                      ((int *)g_ddxContext_008075A8,(uint)*ppuVar15,0xffffffff,(uint)ppuVar15[-0x43]
                       ,(uint)ppuVar15[-0x2d]);
          }
          bVar13 = bVar13 + 1;
          ppuVar15 = ppuVar15 + 1;
        } while (bVar13 < 0xb);
      }
      else if (this_00->field_023F == CASE_4) {
        bVar13 = 0;
        piVar19 = &this_00->field_0094;
        do {
          iVar6 = this_00->field_0120 + this_00->field_0128;
          if ((bVar13 == 1) || (bVar13 == 7)) {
            iVar6 = iVar6 + this_00->field_00C0;
          }
          if (*piVar19 < iVar6) {
            *piVar19 = *piVar19 + 0xf;
          }
          iVar6 = this_00->field_0120 + this_00->field_0128;
          if ((bVar13 == 1) || (iVar12 = iVar6, bVar13 == 7)) {
            iVar12 = iVar6 + this_00->field_00C0;
          }
          if (iVar12 <= *piVar19) {
            if ((bVar13 == 1) || (bVar13 == 7)) {
              iVar6 = iVar6 + this_00->field_00C0;
            }
            *piVar19 = iVar6;
            this_00->field_023F = CASE_2;
          }
          bVar13 = bVar13 + 1;
          piVar19 = piVar19 + 1;
        } while (bVar13 < 0xb);
        st::fn_00403C5B(g_cursorClass_00802A30);
        bVar13 = 0;
        ppuVar15 = this_00->field_0148;
        do {
          if (-1 < (int)*ppuVar15) {
            st::fn_006B3640
                      ((int *)g_ddxContext_008075A8,(uint)*ppuVar15,0xffffffff,(uint)ppuVar15[-0x43]
                       ,(uint)ppuVar15[-0x2d]);
          }
          bVar13 = bVar13 + 1;
          ppuVar15 = ppuVar15 + 1;
        } while (bVar13 < 0xb);
      }
      if (DAT_0080c4d3 == 3) {
        if (this_00->field_00F0 < this_00->field_0120) {
          this_00->field_00F0 = this_00->field_00F0 + 10;
        }
        if (this_00->field_0120 <= this_00->field_00F0) {
          this_00->field_00F0 = this_00->field_0120;
          DAT_0080c4d3 = 1;
        }
        uVar5 = this_00->field_00F0;
        uVar10 = this_00->field_00EC;
        uVar22 = this_00->field_0174;
LAB_004fb69f:
        st::fn_006B3640((int *)g_ddxContext_008075A8,uVar22,0xffffffff,uVar10,uVar5);
      }
      else if (DAT_0080c4d3 == 4) {
        if ((int)(this_00->field_0120 - this_00->field_00F8) < this_00->field_00F0) {
          this_00->field_00F0 = this_00->field_00F0 + -10;
        }
        iVar6 = this_00->field_0120 - this_00->field_00F8;
        if (this_00->field_00F0 <= iVar6) {
          this_00->field_00F0 = iVar6;
          DAT_0080c4d3 = 2;
        }
        uVar5 = this_00->field_00F0;
        uVar10 = this_00->field_00EC;
        uVar22 = this_00->field_0174;
        goto LAB_004fb69f;
      }
      switch(DAT_0080c4f7) {
      case 1:
        uVar5 = this_00->field_0094 - this_00->field_0118;
        if (this_00->field_0110 != uVar5) {
          this_00->field_0110 = uVar5;
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,this_00->field_017C,0xffffffff,this_00->field_010C
                     ,uVar5);
          uVar5 = this_00->field_0110 - this_00->field_0108;
          if (this_00->field_0100 != uVar5) {
LAB_004fb8d0:
            this_00->field_0100 = uVar5;
            goto LAB_004fb8d7;
          }
        }
        break;
      case 2:
        uVar5 = this_00->field_0094;
        if (this_00->field_0110 != uVar5) {
          this_00->field_0110 = uVar5;
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,this_00->field_017C,0xffffffff,this_00->field_010C
                     ,uVar5);
          uVar5 = this_00->field_0110 - this_00->field_0108;
          if (this_00->field_0100 != uVar5) goto LAB_004fb8d0;
        }
        break;
      case 3:
        if ((int)(this_00->field_0094 - this_00->field_0118) < this_00->field_0110) {
          this_00->field_0110 = this_00->field_0110 + -10;
        }
        iVar6 = this_00->field_0094 - this_00->field_0118;
        if (this_00->field_0110 <= iVar6) {
          this_00->field_0110 = iVar6;
          DAT_0080c4f7 = 1;
        }
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,this_00->field_017C,0xffffffff,this_00->field_010C,
                   this_00->field_0110);
        if (DAT_0080c4f7 == 2) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_00->field_017C);
        }
        iVar6 = this_00->field_0110 - this_00->field_0108;
        if (iVar6 < this_00->field_0100) {
          this_00->field_0100 = this_00->field_0100 + -10;
        }
        if (this_00->field_0100 <= iVar6) {
          this_00->field_0100 = iVar6;
        }
        uVar5 = this_00->field_0100;
        uVar10 = this_00->field_00FC;
        uVar22 = this_00->field_0178;
        goto LAB_004fb8ee;
      case 4:
        if (this_00->field_0110 < this_00->field_0094) {
          this_00->field_0110 = this_00->field_0110 + 10;
        }
        if (this_00->field_0094 <= this_00->field_0110) {
          this_00->field_0110 = this_00->field_0094;
          DAT_0080c4f7 = 2;
        }
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,this_00->field_017C,0xffffffff,this_00->field_010C,
                   this_00->field_0110);
        iVar6 = this_00->field_0110 - this_00->field_0108;
        if (this_00->field_0100 < iVar6) {
          this_00->field_0100 = this_00->field_0100 + 10;
        }
        if (iVar6 <= this_00->field_0100) {
          this_00->field_0100 = iVar6;
        }
        uVar5 = this_00->field_0100;
LAB_004fb8d7:
        uVar10 = this_00->field_00FC;
        uVar22 = this_00->field_0178;
LAB_004fb8ee:
        st::fn_006B3640((int *)g_ddxContext_008075A8,uVar22,0xffffffff,uVar10,uVar5);
      }
      local_EAX_2208 = st::fn_006B33F0(g_ddxContext_008075A8,this_00->field_0178);
      if ((local_EAX_2208 != 0) &&
         (this_00->field_0247 + this_00->field_0243 <= this_00->field_09A0)) {
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_00->field_0178);
      }
      break;
    case MESS_ID_CREATE:
      st::fn_004014A1(local_44);
      break;
    case MESS_SHARED_0003:
      st::fn_00404B42(local_44);
      break;
    case MESS_SHARED_0005:
      ppuVar15 = local_44->field_0148;
      local_d = false;
      do {
        if (-1 < (int)*ppuVar15) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,(uint)*ppuVar15,0xffffffff,(uint)ppuVar15[-0x43],
                     (uint)ppuVar15[-0x2d]);
        }
        local_d = (bool)(local_d + 1);
        ppuVar15 = ppuVar15 + 1;
      } while (local_d < 0xb);
    }
    goto cf_common_exit_004FD60B;
  }
  switch(SVar1) {
  case 0xb10f:
    pcVar31 = thunk_FUN_0052a390;
    pcVar25 = "BUT_MAPTRT";
cf_common_exit_004FBCF3:
    pCVar7 = st::fn_0040577C(pcVar25,0);
    st::fn_004022D9(this_00,4,message,6,pCVar7,pcVar31);
    break;
  case MESS_CPANELTY_B110:
  case 0xb111:
    if (DAT_00808784 != 0) break;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) break;
    local_44->field_012C = 0;
    if (message->id == MESS_CPANELTY_B110) {
      if (local_44->field_0B64 == '\0') {
        cVar27 = '\x01';
LAB_004fc9c0:
        st::fn_00401E15(local_44,cVar27,0);
      }
    }
    else if (local_44->field_0C52 == '\0') {
      cVar27 = '\0';
      goto LAB_004fc9c0;
    }
    this_00->field_012C = 1;
    local_2e = (message->arg0).u32 == 3;
    pbVar20 = &local_2e;
    puVar23 = (undefined4 *)0x29;
    goto cf_common_exit_004FCF18;
  case MESS_CPANELTY_B110|MESS_ID_CREATE:
    pcVar31 = thunk_FUN_0052a030;
    pCVar7 = st::fn_0040577C("BUT_AIASS",0);
    st::fn_004022D9(this_00,4,message,1,pCVar7,pcVar31);
    break;
  case MESS_CPANELTY_B110|MESS_SHARED_0003:
    if ((message->arg0).u32 == 3) {
      st::fn_006E6500(g_sT3DSMAPContext_00807598,local_44->field_0227);
      DAT_00807327 = DAT_00807327 | 8;
    }
    else {
      st::fn_006E6500(g_sT3DSMAPContext_00807598,nullptr);
      DAT_00807327 = DAT_00807327 & 0xf7;
    }
LAB_004fc53f:
    g_sT3DSMAPContext_00807598->field_0418 = (uint)DAT_00807327;
    st::fn_00405E2F(0xae);
    break;
  case 0xb114:
    pcVar31 = thunk_FUN_0052a3e0;
    pCVar7 = st::fn_0040577C("BUT_MAPDIR",0);
    st::fn_004022D9(this_00,4,message,6,pCVar7,pcVar31);
    break;
  case 0xb117:
    if (g_upgPanel_00802A48 != nullptr) {
      (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\x01');
    }
    break;
  case MESS_CPANELTY_B110|MESS_SHARED_0008:
    pcVar31 = thunk_FUN_00529f90;
    if (DAT_0080874e != '\x03') {
      pcVar31 = thunk_FUN_00529fe0;
    }
    pCVar7 = st::fn_0040577C("BUT_SHOWUPD",0);
    st::fn_004022D9(this_00,3,message,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar7,pcVar31);
    break;
  case MESS_CPANELTY_B110|MESS_CURSORCLASSTY_0009:
    if (g_frmPanel_0080168C != nullptr) {
      (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\x01');
    }
    break;
  case MESS_CPANELTY_B110|MESS_SYSTEMCLASSTY_000A:
    pcVar31 = thunk_FUN_00529f90;
    pCVar7 = st::fn_0040577C("BUT_SHOWFRM",0);
    st::fn_004022D9(this_00,3,message,((DAT_0080874e != '\x03') - 1U & 5) + 1,pCVar7,pcVar31);
    break;
  case 0xb12a:
    pcVar31 = thunk_FUN_00529fe0;
    UVar28 = 0x274c;
    pCVar7 = st::fn_0040577C("BUT_SMALL",0);
    PaintTxtBut(this_00,3,message,1,pCVar7,UVar28,pcVar31);
    break;
  case 0xb12d:
    if (DAT_00808784 != 0) break;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) break;
    local_44->field_012C = 0;
    if (local_44->field_0C52 == '\0') {
      st::fn_00401E15(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar20 = local_68;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar20[0] = false;
      pbVar20[1] = false;
      pbVar20[2] = false;
      pbVar20[3] = false;
      pbVar20 = pbVar20 + 4;
    }
    *pbVar20 = false;
    if ((message->arg0).u32 == 3) {
      pbVar20 = local_68;
      local_68[0] = true;
      this_00->field_0C11 = CASE_1;
      puVar23 = (undefined4 *)0x17;
    }
    else {
      pbVar20 = local_68;
      local_68[0] = true;
      this_00->field_0C11 = CASE_0;
      puVar23 = (undefined4 *)0x17;
    }
    goto cf_common_exit_004FCF18;
  case 0xb12e:
    pcVar31 = thunk_FUN_0052a2d0;
    UVar28 = 0x3aa5;
    uVar26 = 0;
    iVar6 = 1;
    pCVar7 = st::fn_0040577C("BUT_AUTO",0);
    pCVar7 = st::fn_006F2C00(pCVar7,iVar6,uVar26);
    PaintTxtBut(this_00,5,message,1,pCVar7,UVar28,pcVar31);
    break;
  case 0xb12f:
  case 0xb130:
    if (DAT_00808784 != 0) break;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) break;
    local_44->field_012C = 0;
    if (local_44->field_0C52 == '\0') {
      st::fn_00401E15(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar20 = &local_d;
    local_d = (bool)((char)message->id - 0x2f);
    puVar23 = (undefined4 *)0x9;
    goto cf_common_exit_004FCF18;
  case 0xb13f:
    pcVar31 = thunk_FUN_00529fe0;
    UVar28 = 0x274c;
    pCVar7 = st::fn_0040577C("BUT_SMALL",0);
    PaintTxtBut(this_00,5,message,1,pCVar7,UVar28,pcVar31);
    break;
  case 0xb15f:
  case 0xb160:
  case 0xb161:
  case 0xb162:
  case 0xb163:
  case MESS_CPANELTY_B164:
    if (DAT_00808784 != 0) break;
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) break;
    local_44->field_012C = 0;
    if (local_44->field_0C52 == '\0') {
      st::fn_00401E15(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar20 = (bool *)((int)&local_18 + 2);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_18 = CONCAT13((char)message->id + 0xa1,CONCAT12(1,(undefined2)local_18));
    puVar23 = (undefined4 *)0x27;
cf_common_exit_004FCF18:
    st::fn_00403C33(puVar23,(uint *)pbVar20,0,0xffffffff);
    st::fn_00405E2F(0xae);
  }
cf_common_exit_004FD60B:
  g_currentExceptionFrame = local_d0.previous;
  local_EAX_9661 = st::fn_006E5FD0(this_00,message);
  return local_EAX_9661;
}

