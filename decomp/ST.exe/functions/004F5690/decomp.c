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
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar5;
  uint *puVar6;
  HDC pcVar7_mg0;
  ccFntTy *pcVar7;
  HDC pcVar7_mg5;
  HDC pcVar7_mg6;
  char *pcVar8;
  ushort *local_EAX_643;
  int uVar4;
  AnonPointee_CPanelTy_01B4 *pAVar9;
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
  LPSTR pCVar10;
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
  ushort *local_EAX_4218;
  char *local_EAX_5284;
  int local_EAX_6804;
  uint uVar12;
  uint uVar13;
  byte *puVar14;
  uint *puVar15;
  ushort **ppuVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  ushort uVar20;
  RecoveredRecord_004F3130_3F0D2FD9 *pRVar21;
  byte bVar22;
  ushort *puVar23;
  int iVar24;
  int *piVar25;
  int iVar26;
  uint uVar27;
  short *psVar28;
  uint uVar29;
  InternalExceptionFrame local_78;
  int local_34;
  int local_30;
  byte local_24 [8];
  char *local_1c;
  CPanelTy *local_18;
  int local_14;
  RecoveredRecordView_00710790_7768A573 *local_10;
  AnonNested_0052BDA0_007E_1B3446E2 *local_c;
  RecoveredRecord_004F1D20_D68BC0B9 *local_8;

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
    piVar25 = &local_18->field_0068;
    local_18->field_0090 = iVar4;
    local_18->field_008C = iVar4;
    local_10 = (RecoveredRecordView_00710790_7768A573 *)&DAT_0000000b;
    do {
      iVar4 = 1;
      puVar23 = PTR_0080679c + 0x14;
      local_8 = (RecoveredRecord_004F1D20_D68BC0B9 *)piVar25;

      local_EAX_155 = FUN_006b4fe0(PTR_0080679c);
      /* ST_CALLSITE[004F5744]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217;/int;/int;/int;/uint;pointer:/undefined4;/int */
      pRVar5 = FUN_006b50c0(*piVar25,piVar25[0x16],(uint)PTR_0080679c[7],local_EAX_155,
                            (undefined4 *)puVar23,iVar4);
      piVar25[0x46] = (int)pRVar5;
      uVar13 = *(uint *)&pRVar5[1].field_0x4;
      if (uVar13 == 0) {
        uVar13 = ((uint)pRVar5->field_000E * *(int *)&pRVar5->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)&pRVar5->field_0x8;
      }

      puVar6 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar5));
      for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar6 = 0x3a3a3a3a;
        puVar6 = puVar6 + 1;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar6 = 0x3a;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      piVar25 = (int *)((int)local_8 + 4);
      local_10 = (RecoveredRecordView_00710790_7768A573 *)&local_10[-1].field_0x9f;
    } while (local_10 != nullptr);
    local_8 = (RecoveredRecord_004F1D20_D68BC0B9 *)piVar25;
    /* ST_CALLSITE[004F57B1]: CALL 0x00404a16; direct=00404A16 thunk_FUN_004f4640; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;pointer:/ushort;pointer:/undefined;/WinDef.h/BYTE */
    pcVar7_mg0 = (HDC)thunk_FUN_004f4640(PTR_0080679c,nullptr,DAT_00807dd9);
    this_00->field_01B8 = (ccFntTy *)pcVar7_mg0;
    pcVar7_mg0[0x16].unused = 1;
    pcVar7_mg0[0x17].unused = 0;
    this_00->field_01B8->field_0096 = 1;
    /* ST_CALLSITE[004F57E4]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/cMf32;pointer:/char;/byte */
    pcVar7 = ccFntTy::operator_new(0x19d,g_cMf32_00806790,"TIME_FONT",0);
    this_00->field_01BC = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    /* ST_CALLSITE[004F5807]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new */
    puVar6 = ccFntTy::operator_new(0x19d,g_cMf32_00806790,"HOLD_FONT",0);
    this_00->field_01C0 = puVar6;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    /* ST_CALLSITE[004F582A]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/cMf32;pointer:/char;/byte */
    pcVar7 = ccFntTy::operator_new(0x19d,g_cMf32_00806790,"MONEY_FONT",0);
    this_00->field_01C4 = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    /* ST_CALLSITE[004F584C]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/cMf32;pointer:/char;/byte */
    pcVar7 = ccFntTy::operator_new(0x19d,g_cMf32_00806790,"TIMER_FONT",0);
    this_00->field_01CC = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    /* ST_CALLSITE[004F5872]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/cMf32;pointer:/char;/byte */
    pcVar7 = ccFntTy::operator_new(0x19d,g_cMf32_00806790,"HOLD_FONT",0);
    this_00->field_01C8 = pcVar7;
    pcVar7->field_0058 = 1;
    pcVar7->field_005C = 0;
    /* ST_CALLSITE[004F5891]: CALL 0x00403945; direct=00403945 thunk_FUN_004f4c70; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/int;pointer:/undefined;/WinDef.h/BYTE */
    pcVar7_mg5 = (HDC)thunk_FUN_004f4c70((int)PTR_0080679c,nullptr,DAT_00807dd9);
    this_00->field_01D0 = (ccFntTy *)pcVar7_mg5;
    pcVar7_mg5[0x16].unused = 0;
    pcVar7_mg5[0x17].unused = -1;
    local_10 = (RecoveredRecordView_00710790_7768A573 *)this_00->field_01D0;
    if (((ccFntTy *)local_10)->field_00A0 != 0) {
      FUN_00710790(local_10);
    }
    this_00->field_0108 = local_10->field_008A * 5 - 3;
    /* ST_CALLSITE[004F58E7]: CALL 0x0040290a; direct=0040290A thunk_FUN_004f4950; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;pointer:/ushort;pointer:/undefined;/WinDef.h/BYTE */
    pcVar7_mg6 = (HDC)thunk_FUN_004f4950(PTR_0080679c,nullptr,DAT_00807dd9);
    this_00->field_01D4 = (ccFntTy *)pcVar7_mg6;
    pcVar7_mg6[0x16].unused = 1;
    pcVar7_mg6[0x17].unused = 0;
    iVar4 = 1;
    bVar2 = 2;
    /* ST_CALLSITE[004F5904]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar8 = thunk_FUN_00571240("BKG_TIMER",0);
    local_EAX_643 = FUN_0070a9f0(g_cMf32_00806790,pcVar8,bVar2,iVar4);
    this_00->field_01AC = local_EAX_643;

    ccFntTy::SetSurf(this_00->field_01CC,(int)local_EAX_643,0,0,0,0,0);
    iVar4 = 1;
    puVar23 = PTR_0080679c + 0x14;

    uVar4 = FUN_006b4fe0(PTR_0080679c);
    pRVar5 = (RecoveredRecord_006B4FA0_DAC3A217 *)

             FUN_006b50c0(this_00->field_0104,this_00->field_0108,(uint)PTR_0080679c[7],uVar4,
                          (undefined4 *)puVar23,iVar4);
    this_00->field_01B0 = (ushort *)pRVar5;
    local_10 = *(RecoveredRecordView_00710790_7768A573 **)&pRVar5[1].field_0x4;
    if (local_10 == nullptr) {
      local_10 = (RecoveredRecordView_00710790_7768A573 *)
                 (((uint)pRVar5->field_000E * *(int *)&pRVar5->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)&pRVar5->field_0x8);
    }

    puVar6 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar5));
    for (uVar13 = (uint)local_10 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar13 = (uint)local_10 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }

    ccFntTy::SetSurf(this_00->field_01D0,(int)this_00->field_01B0,0,0,0,0,0);
    iVar4 = 1;
    bVar2 = 2;
    /* ST_CALLSITE[004F59C9]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar8 = thunk_FUN_00571240("BK_BRIEF",0);
    /* ST_CALLSITE[004F59D9]: CALL 0x0070a9f0; direct=0070A9F0 FUN_0070a9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_CPanelTy_01B4; signature=__cdecl;pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_CPanelTy_01B4;pointer:/cMf32;pointer:/char;/byte;/int */
    pAVar9 = FUN_0070a9f0(g_cMf32_00806790,pcVar8,bVar2,iVar4);
    this_00->field_01B4 = pAVar9;
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
      iVar24 = 0;
      iVar4 = 1;
      bVar2 = 0;
      uVar13 = 0xffffffff;
      /* ST_CALLSITE[004F5ADA]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
      pcVar8 = thunk_FUN_00571240("INF_BKDEEP",0);
      local_EAX_1116 =
           Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806794,CASE_B,pcVar8,uVar13,bVar2,iVar4,iVar24,puVar6);
      this_00->field_029E = local_EAX_1116;
    }
    puVar6 = nullptr;
    iVar24 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar13 = 0xffffffff;
    /* ST_CALLSITE[004F5B07]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar8 = thunk_FUN_00571240("INF_DEEP",0);
    local_EAX_1161 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,pcVar8,uVar13,bVar2,iVar4,iVar24,puVar6);
    this_00->field_02A2 = local_EAX_1161;
    puVar6 = nullptr;
    iVar24 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar13 = 0xffffffff;
    /* ST_CALLSITE[004F5B34]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar8 = thunk_FUN_00571240("IND_PNT",0);
    local_EAX_1205 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,pcVar8,uVar13,bVar2,iVar4,iVar24,puVar6);
    this_00->field_02B6 = local_EAX_1205;
    if (DAT_0080874d == 0xff) {
      iVar4 = 1;
    }
    else {
      iVar4 = DAT_0080874d + 1;
    }
    /* ST_CALLSITE[004F5B72]: CALL dword ptr [0x0085bde8] */
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
    iVar24 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar13 = 0xffffffff;
    /* ST_CALLSITE[004F5C09]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar8 = thunk_FUN_00571240("FRAMES",0);
    local_EAX_1418 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,pcVar8,uVar13,bVar2,iVar4,iVar24,puVar6);
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
    iVar24 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar13 = 0xffffffff;
    /* ST_CALLSITE[004F5C97]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar8 = thunk_FUN_00571240("BUT_PRIORITY",0);
    local_EAX_1561 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,pcVar8,uVar13,bVar2,iVar4,iVar24,puVar6);
    this_00->field_0B17 = local_EAX_1561;
    local_EAX_1593 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,"SPIMG_SI",0xffffffff,0,1,0,nullptr);
    this_00->field_0B1B = local_EAX_1593;
    puVar6 = nullptr;
    iVar24 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar13 = 0xffffffff;
    /* ST_CALLSITE[004F5CE4]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar8 = thunk_FUN_00571240("BUT_PRODWEAP",0);
    local_EAX_1637 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,pcVar8,uVar13,bVar2,iVar4,iVar24,puVar6);
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
    piVar25 = nullptr;
    pCVar10 = thunk_FUN_00571240("INF_BKLUINF",0);
    local_EAX_1775 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
    iVar4 = 1;
    piVar25 = nullptr;
    this_00->field_0954 = local_EAX_1775;
    pCVar10 = thunk_FUN_00571240("INF_BKLDINF",0);
    local_EAX_1812 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
    iVar4 = 1;
    piVar25 = nullptr;
    this_00->field_0958 = local_EAX_1812;
    this_00->field_02E2 = nullptr;
    pCVar10 = thunk_FUN_00571240("CP2_CLEAR",1);
    local_EAX_1856 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
    this_00->field_0974[0] = (uint)local_EAX_1856;
    iVar4 = 1;
    piVar25 = nullptr;
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
      piVar25 = nullptr;
      this_00->field_0974[6] = (uint)local_EAX_2278;
      bVar2 = 6;
      local_EAX_2114 = "CP2_CTRLUP4";
    }
    else {
      pCVar10 = thunk_FUN_00571240("CP2_1ROW",1);
      local_EAX_1907 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_0974[1] = (uint)local_EAX_1907;
      pCVar10 = thunk_FUN_00571240("CP2_2ROW",1);
      local_EAX_1945 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_0974[2] = (uint)local_EAX_1945;
      pCVar10 = thunk_FUN_00571240("CP2_2ROWC",1);
      local_EAX_1983 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_0974[3] = (uint)local_EAX_1983;
      pCVar10 = thunk_FUN_00571240("BUT_BKGSHOWUPD",0);
      local_EAX_2020 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_0974[4] = (uint)local_EAX_2020;
      pCVar10 = thunk_FUN_00571240("BUT_BKGRETREP",0);
      local_EAX_2057 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_0974[5] = (uint)local_EAX_2057;
      pCVar10 = thunk_FUN_00571240("BK_BOAT_BLD",0);
      local_EAX_2094 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_0974[6] = (uint)local_EAX_2094;
      local_EAX_2114 = thunk_FUN_00571240("BK_BOAT_TRTXT",0);
      bVar2 = 1;
    }
    local_EAX_2305 = cMf32::RecGet(g_cMf32_00806790,bVar2,local_EAX_2114,piVar25,iVar4);
    iVar4 = 1;
    piVar25 = nullptr;
    this_00->field_0974[7] = (uint)local_EAX_2305;
    pCVar10 = thunk_FUN_00571240("INF_BKMAP",0);
    local_EAX_2342 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
    this_00->field_0994 = local_EAX_2342;
    local_10 = (RecoveredRecordView_00710790_7768A573 *)this_00->field_0227;
    local_8 = (RecoveredRecord_004F1D20_D68BC0B9 *)0x3b60;
    local_14 = 4;
    do {
      /* ST_CALLSITE[004F5FE3]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_007111C0_C04D120D; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_007111C0_C04D120D;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
      pcVar11 = (char *)LoadResourceString((UINT)local_8,g_hINSTANCE_00807618);
      iVar4 = 1;
      puVar23 = PTR_0080679c + 0x14;
      local_1c = pcVar11;

      local_EAX_2409 = FUN_006b4fe0(PTR_0080679c);
      uVar13 = (uint)PTR_0080679c[7];
      /* ST_CALLSITE[004F6012]: CALL 0x007111c0; direct=007111C0 FUN_007111c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__thiscall;pointer:/char;pointer:/void;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_007111C0_C04D120D */
      iVar3 = (int)FUN_007111c0(this_00->field_01B8,(RecoveredRecord_007111C0_C04D120D *)pcVar11);

      iVar22 = FUN_00711110(this_00->field_01B8,pcVar11);
      local_c = (AnonNested_0052BDA0_007E_1B3446E2 *)

                FUN_006b50c0(iVar22,iVar3,uVar13,local_EAX_2409,(undefined4 *)puVar23,iVar4);
      if (local_c != nullptr) {
        uVar13 = local_c->field_0014;
        if (uVar13 == 0) {
          uVar13 = ((uint)local_c->field_000E * local_c->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                   local_c->field_0008;
        }

        puVar6 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)local_c));
        for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar6 = 0x3a3a3a3a;
          puVar6 = puVar6 + 1;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined1 *)puVar6 = 0x3a;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }

        ccFntTy::SetSurf(this_00->field_01B8,(int)local_c,0,0,0,0,0);

        ccFntTy::WrStr(this_00->field_01B8,local_1c,0,0,0);

        FUN_006b4b20((int *)local_10,(RecoveredRecordView_006B4B20_F20E56A6 *)local_c,0,0x3a);
        FreeAndNull(&local_c);
      }
      local_8 = (RecoveredRecord_004F1D20_D68BC0B9 *)((int)local_8 + 1);
      local_10 = (RecoveredRecordView_00710790_7768A573 *)((int)&local_10->field_0001 + 3);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    iVar4 = 0;
    puVar15 = this_00->field_0DBF;
    local_14 = 2;
    do {
      puVar6 = nullptr;
      iVar26 = 0;
      iVar24 = 1;
      bVar2 = 0;
      uVar13 = 0xffffffff;
      /* ST_CALLSITE[004F60FF]: CALL 0x006f2c00; direct=006F2C00 FUN_006f2c00; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int;/undefined4 */
      pcVar8 = FUN_006f2c00("SM_TARGET_",1,iVar4);
      local_EAX_2689 =
           Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806784,CASE_B,pcVar8,uVar13,bVar2,iVar24,iVar26,puVar6);
      *(ushort **)((int)puVar15 + -0x3f7) = local_EAX_2689;
      iVar24 = 1;
      piVar25 = nullptr;
      *puVar15 = (uint)(local_EAX_2689 + 0x18);
      pCVar10 = FUN_006f2c00("SM_CROSS_",1,iVar4);
      local_EAX_2737 = cMf32::RecGet(g_cMf32_00806780,6,pCVar10,piVar25,iVar24);
      puVar15[-2] = (uint)local_EAX_2737;
      iVar4 = iVar4 + 1;
      puVar15 = puVar15 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    iVar4 = 1;
    piVar25 = nullptr;
    pCVar10 = thunk_FUN_00571240("CP4_CLEAR",1);
    local_EAX_2786 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
    this_00->field_09D9[0] = (uint)local_EAX_2786;
    iVar4 = 1;
    piVar25 = nullptr;
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
      piVar25 = nullptr;
      this_00->field_09D9[0xc] = (uint)local_EAX_3546;
      pcVar10 = "BK_BOAT_SI";
    }
    else {
      pCVar10 = thunk_FUN_00571240("CP4_ROW1",1);
      local_EAX_2838 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[1] = (uint)local_EAX_2838;
      pCVar10 = thunk_FUN_00571240("CP4_ROW2",1);
      local_EAX_2877 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[2] = (uint)local_EAX_2877;
      pCVar10 = thunk_FUN_00571240("CP4_ROW3",1);
      local_EAX_2916 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[3] = (uint)local_EAX_2916;
      pCVar10 = thunk_FUN_00571240("BK_OBJ_BKBUT",0);
      local_EAX_2955 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[4] = (uint)local_EAX_2955;
      pCVar10 = thunk_FUN_00571240("BK_OBJ_BLDREP",0);
      local_EAX_2994 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[5] = (uint)local_EAX_2994;
      pCVar10 = thunk_FUN_00571240("BK_OBJ_BKIND",0);
      local_EAX_3033 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[7] = (uint)local_EAX_3033;
      pCVar10 = thunk_FUN_00571240("BK_OBJ_BKMFACT1",0);
      local_EAX_3072 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[8] = (uint)local_EAX_3072;
      pCVar10 = thunk_FUN_00571240("BK_OBJ_BKRDOCK",0);
      local_EAX_3111 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[9] = (uint)local_EAX_3111;
      pCVar10 = thunk_FUN_00571240("BK_OBJ_BKPLASM1",0);
      local_EAX_3150 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[10] = (uint)local_EAX_3150;
      pCVar10 = thunk_FUN_00571240("BK_OBJ_BKMFACT2",0);
      local_EAX_3189 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
      this_00->field_09D9[0xb] = (uint)local_EAX_3189;
      local_EAX_3217 = cMf32::RecGet(g_cMf32_00806790,1,"BK_OBJ_BKPLASM2",nullptr,1);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[0xc] = (uint)local_EAX_3217;
      pcVar10 = thunk_FUN_00571240("BK_ARTEFACT",0);
    }
    local_EAX_3574 = cMf32::RecGet(g_cMf32_00806790,1,pcVar10,piVar25,iVar4);
    iVar4 = 1;
    piVar25 = nullptr;
    this_00->field_09D9[0xe] = (uint)local_EAX_3574;
    pCVar10 = thunk_FUN_00571240("BK_OBJ_STRING",0);
    local_EAX_3613 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
    iVar4 = 1;
    piVar25 = nullptr;
    this_00->field_09D9[6] = (uint)local_EAX_3613;
    pCVar10 = thunk_FUN_00571240("PROC_CRAK",0);
    local_EAX_3652 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
    iVar4 = 1;
    piVar25 = nullptr;
    this_00->field_09D9[0xd] = (uint)local_EAX_3652;
    pCVar10 = thunk_FUN_00571240("INF_BKRUINF",0);
    local_EAX_3691 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
    iVar4 = 1;
    piVar25 = nullptr;
    this_00->field_0B43 = local_EAX_3691;
    pCVar10 = thunk_FUN_00571240("INF_BKRDINF",0);
    local_EAX_3730 = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar4);
    this_00->field_0B47 = local_EAX_3730;
    this_00->field_02E6 = nullptr;
    if (((byte)_DAT_00807348 != 0) && ((byte)_DAT_00807348 < 3)) {
      piVar25 = (int *)&this_00->field_0x1a4;
      iVar24 = 0;
      iVar4 = 1;
      /* ST_CALLSITE[004F655C]: CALL 0x006f2c00; direct=006F2C00 FUN_006f2c00; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int;/undefined4 */
      pcVar8 = FUN_006f2c00("BK_HIGHRES",1,_DAT_00807348 & 0xff);
      pCVar10 = thunk_FUN_00571240(pcVar8,iVar4);
      cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar24);
      piVar25 = (int *)&this_00->field_0x1a8;
      iVar24 = 0;
      iVar4 = 1;
      /* ST_CALLSITE[004F6598]: CALL 0x006f2c00; direct=006F2C00 FUN_006f2c00; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int;/undefined4 */
      pcVar8 = FUN_006f2c00("BK_HIGHRES",1,_DAT_00807348 & 0xff);
      pCVar10 = thunk_FUN_00571240(pcVar8,iVar4);
      cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar25,iVar24);
    }
    pDVar11 = Library::DKW::TBL::DArrayCreate(nullptr,10,9,10);
    this_00->field_0B95 = pDVar11;
    /* ST_CALLSITE[004F65D9]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,1,(RecoveredRecordView_0043BEB0_8330D129 *)&this_00->field_0B63
              );
    /* ST_CALLSITE[004F65ED]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,2,(RecoveredRecordView_0043BEB0_8330D129 *)&this_00->field_0B99
              );
    /* ST_CALLSITE[004F6601]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,4,(RecoveredRecordView_0043BEB0_8330D129 *)&this_00->field_0BF5
              );
    /* ST_CALLSITE[004F6615]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,5,(RecoveredRecordView_0043BEB0_8330D129 *)&this_00->field_0C51
              );
    /* ST_CALLSITE[004F6629]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,0xe,
               (RecoveredRecordView_0043BEB0_8330D129 *)&this_00->field_0xc87);
    /* ST_CALLSITE[004F663D]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,0xf,
               (RecoveredRecordView_0043BEB0_8330D129 *)&this_00->field_0xcc9);
    puVar6 = nullptr;
    iVar24 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar13 = 6;
    local_EAX_4031 = thunk_FUN_00526100((RecoveredRecord_00526100_020D84E3 *)&this_00->field_0B63,0);
    local_EAX_4049 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_1F,local_EAX_4031,uVar13,bVar2,iVar4,iVar24,puVar6);
    this_00->field_02E2 = local_EAX_4049;
    this_00->field_02EA = 0;
    puVar6 = nullptr;
    iVar24 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar13 = 6;
    this_00->field_02EC = 1;
    this_00->field_02EE = this_00->field_0038;
    local_EAX_4099 = thunk_FUN_00526100((RecoveredRecord_00526100_020D84E3 *)&this_00->field_0C51,0);
    local_EAX_4116 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_1F,local_EAX_4099,uVar13,bVar2,iVar4,iVar24,puVar6);
    this_00->field_02E6 = local_EAX_4116;
    this_00->field_02EB = 0;
    this_00->field_02ED = 1;
    this_00->field_02F2 = this_00->field_0038;
    local_8 = (RecoveredRecord_004F1D20_D68BC0B9 *)&this_00->field_0xc87;
    piVar25 = &this_00->field_0D53;
    puVar14 = &this_00->field_0D47;
    local_10 = (RecoveredRecordView_00710790_7768A573 *)0x2;
    do {
      local_14 = 6;
      do {
        puVar6 = nullptr;
        iVar24 = 0;
        iVar4 = 1;
        bVar2 = 0;
        uVar13 = 6;
        /* ST_CALLSITE[004F66FC]: CALL 0x004023b5; direct=004023B5 thunk_FUN_004f1d20; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__stdcall;pointer:/char;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_004F1D20_D68BC0B9 */
        pcVar8 = thunk_FUN_004f1d20(local_8);
        local_EAX_4218 =
             Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_1F,pcVar8,uVar13,bVar2,iVar4,iVar24,puVar6);
        piVar25[-0x12] = (int)local_EAX_4218;
        puVar14[-0xc] = 0;
        *puVar14 = 1;
        local_8 = local_8 + 1;
        *piVar25 = this_00->field_0038;
        piVar25[0xc] = 0;
        piVar25 = piVar25 + 1;
        puVar14 = puVar14 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      local_10 = (RecoveredRecordView_00710790_7768A573 *)&local_10[-1].field_0x9f;
    } while (local_10 != nullptr);
    /* ST_CALLSITE[004F674C]: CALL 0x00403648; direct=00403648 CPanelTy::PaintInfoBoat */
    PaintInfoBoat(this_00);
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[004F675C]: CALL 0x00401aeb; direct=00401AEB CPanelTy::PaintCtrlBoatSI */
      PaintCtrlBoatSI(this_00);
    }
    else {
      /* ST_CALLSITE[004F6763]: CALL 0x004022cf; direct=004022CF CPanelTy::PaintCtrlBoat */
      PaintCtrlBoat(this_00);
    }
    /* ST_CALLSITE[004F676A]: CALL 0x00403215; direct=00403215 CPanelTy::PaintMap */
    PaintMap(this_00);
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[004F677A]: CALL 0x00402590; direct=00402590 CPanelTy::PaintCtrlObjSI */
      PaintCtrlObjSI(this_00);
    }
    else {
      /* ST_CALLSITE[004F6785]: CALL 0x004046bf; direct=004046BF CPanelTy::PaintCtrlObj */
      PaintCtrlObj(this_00,1);
    }
    /* ST_CALLSITE[004F678C]: CALL 0x004034fe; direct=004034FE CPanelTy::PaintInfoObj */
    PaintInfoObj(this_00);
    FUN_006b1a50(g_ddxContext_008075A8,3,nullptr,&this_00->field_011C);
    iVar4 = this_00->field_011C;
    piVar25 = &this_00->field_003C;
    this_00->field_0040 = iVar4;
    *piVar25 = iVar4;
    if (DAT_0080874e == '\x03') {
      this_00->field_0048 = this_00->field_006C + iVar4;
    }
    else {
      iVar24 = this_00->field_006C + iVar4;
      this_00->field_0044 = iVar24;
      this_00->field_0048 = this_00->field_0070 + iVar24;
    }
    iVar24 = this_00->field_0074 + this_00->field_0048;
    this_00->field_004C = iVar24;
    uVar13 = iVar24 + this_00->field_0078;
    iVar24 = this_00->field_007C;
    this_00->field_0050 = uVar13;
    if (DAT_0080874e != '\x03') {
      uVar13 = uVar13 + iVar24;
      iVar24 = this_00->field_0080;
      this_00->field_0054 = uVar13;
    }
    this_00->field_0064 = iVar4;
    this_00->field_0058 = uVar13 + iVar24;
    this_00->field_005C = uVar13 + iVar24;
    iVar4 = 10;
    this_00->field_0060 = this_00->field_0088 + this_00->field_005C;
    do {
      *piVar25 = *piVar25 + this_00->field_008C;
      piVar25 = piVar25 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    bVar2 = 0;
    piVar25 = &this_00->field_0094;
    do {
      iVar4 = this_00->field_0120 + -0x9b + this_00->field_0128;
      if ((bVar2 == 1) || (bVar2 == 7)) {
        iVar4 = iVar4 + this_00->field_00C0;
      }
      *piVar25 = iVar4;
      bVar2 = bVar2 + 1;
      piVar25 = piVar25 + 1;
    } while (bVar2 < 0xb);
    bVar2 = 0;
    this_00->field_0241 = (short)DAT_00806734 - (short)this_00->field_0094;
    if ((-(uint)(DAT_00807348 != '\0') & 2) != 0xfffffff7) {
      uVar13 = 0;
      do {
        if (((&this_00->field_0068)[uVar13] != 0) && ((&this_00->field_00C0)[uVar13] != 0)) {
          ppuVar16 = this_00->field_0148 + uVar13;

          FUN_006b2330(g_ddxContext_008075A8,(uint *)ppuVar16,5,0x402946,
                       (&this_00->field_0068)[uVar13],(&this_00->field_00C0)[uVar13],
                       this_00->field_0148[uVar13 + 0xe]);

          FUN_006b1b10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,(uint)*ppuVar16,3);
          FUN_006b28c0(g_ddxContext_008075A8,(uint)*ppuVar16,1);
        }
        bVar2 = bVar2 + 1;
        local_1c = (char *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar2));
        uVar13 = (uint)bVar2;
      } while (uVar13 < (-(uint)(DAT_00807348 != '\0') & 2) + 9);
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
    /* ST_CALLSITE[004F6B6E]: CALL 0x00403c5b; direct=00403C5B CursorClassTy::sub_0054B6D0 */
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
      /* ST_CALLSITE[004F6BB8]: CALL 0x0040296e; direct=0040296E CPanelTy::SetControlBoatSI */
      SetControlBoatSI(this_00);
    }
    else {
      /* ST_CALLSITE[004F6BBF]: CALL 0x0040556f; direct=0040556F CPanelTy::SetControlBoat */
      SetControlBoat(this_00);
    }
    /* ST_CALLSITE[004F6BC6]: CALL 0x0040135c; direct=0040135C CPanelTy::sub_00501A10 */
    sub_00501A10(this_00);
    uVar29 = 0;
    uVar27 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(DAT_00807327 & 2 | 1);
    iVar4 = 0;
    pcVar8 = "BUT_MMAPSCIV";
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3afc;
    uVar20 = 0;
    local_34 = (DAT_0080874e == '\x03') + 0x68 + this_00->field_004C;
    sVar19 = 2;
    uVar18 = 0xb105;
    uVar17 = 0xb104;
    local_30 = this_00->field_00A4 + 8;
    this_00->field_0030 = &local_34;
    pCVar10 = thunk_FUN_00571240("BUT_MAPSCIV",0);
    /* ST_CALLSITE[004F6C51]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13 = CreateBut(this_00,4,3,*(int *)&this_00->field_0x2c,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,6,pCVar10,uVar17,uVar18,sVar19,uVar20,pRVar21,
                       pcVar8,iVar4,uVar27,uVar29);
    this_00->field_09A4[0] = uVar13;
    uVar29 = 0;
    uVar27 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(byte)((DAT_00807327 & 4 | 2) >> 1);
    iVar4 = 0;
    pcVar8 = "BUT_MMAPSMIL";
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3afd;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb107;
    uVar17 = 0xb106;
    local_34 = (DAT_0080874e == '\x03') + 0x7b + this_00->field_004C;
    pCVar10 = thunk_FUN_00571240("BUT_MAPSMIL",0);
    /* ST_CALLSITE[004F6CD2]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13 = CreateBut(this_00,4,3,*(int *)&this_00->field_0x2c,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,6,pCVar10,uVar17,uVar18,sVar19,uVar20,pRVar21,
                       pcVar8,iVar4,uVar27,uVar29);
    uVar29 = 0;
    uVar27 = 0;
    iVar4 = 0;
    pcVar8 = "BUT_MMAPZIN";
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3afe;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb109;
    uVar17 = 0xb108;
    this_00->field_09A4[1] = uVar13;
    pCVar10 = thunk_FUN_00571240("BUT_MAPZIN",0);
    /* ST_CALLSITE[004F6D27]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x58,0x6d,6,pCVar10,uVar17,uVar18,
                       sVar19,uVar20,pRVar21,pcVar8,iVar4,uVar27,uVar29);
    uVar29 = 0;
    uVar27 = 0;
    iVar4 = 0;
    pcVar8 = "BUT_MMAPZOUT";
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3aff;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb10b;
    uVar17 = 0xb10a;
    this_00->field_09A4[2] = uVar13;
    pCVar10 = thunk_FUN_00571240("BUT_MAPZOUT",0);
    /* ST_CALLSITE[004F6D81]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x5d,0x84,6,pCVar10,uVar17,uVar18,
                       sVar19,uVar20,pRVar21,pcVar8,iVar4,uVar27,uVar29);
    uVar29 = 0;
    uVar27 = 0;
    iVar4 = 0;
    pcVar8 = "BUT_MMAPTLFT";
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3b00;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb10d;
    uVar17 = 0xb10c;
    this_00->field_09A4[3] = uVar13;
    pCVar10 = thunk_FUN_00571240("BUT_MAPTLFT",0);
    /* ST_CALLSITE[004F6DDB]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0xd,0x84,6,pCVar10,uVar17,uVar18,
                       sVar19,uVar20,pRVar21,pcVar8,iVar4,uVar27,uVar29);
    uVar29 = 0;
    uVar27 = 0;
    iVar4 = 0;
    pcVar8 = "BUT_MMAPTRT";
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3b01;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb10f;
    uVar17 = 0xb10e;
    this_00->field_09A4[4] = uVar13;
    pCVar10 = thunk_FUN_00571240("BUT_MAPTRT",0);
    /* ST_CALLSITE[004F6E32]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x1c,0x6d,6,pCVar10,uVar17,uVar18,
                       sVar19,uVar20,pRVar21,pcVar8,iVar4,uVar27,uVar29);
    uVar29 = 0;
    uVar27 = 0;
    iVar4 = 0;
    pcVar8 = "BUT_MMAPDIR";
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3b03;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb114;
    uVar17 = 0xb113;
    this_00->field_09A4[5] = uVar13;
    pCVar10 = thunk_FUN_00571240("BUT_MAPDIR",0);
    /* ST_CALLSITE[004F6E87]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13 = CreateBut(this_00,4,3,(DAT_00807327 & 8 | 4) >> 2,6,0x20,6,pCVar10,uVar17,uVar18,sVar19
                       ,uVar20,pRVar21,pcVar8,iVar4,uVar27,uVar29);
    this_00->field_09A4[6] = uVar13;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0BAE;
    local_34 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 4 + this_00->field_004C;
    uVar29 = 0;
    uVar27 = 0;
    iVar4 = 0;
    pcVar8 = nullptr;
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3b02;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb112;
    uVar17 = 0xb110;
    local_30 = (DAT_0080874e != '\x03') + 0x65 + this_00->field_00A4;
    this_00->field_0030 = &local_34;
    pCVar10 = thunk_FUN_00571240("BUT_AIASS",0);
    /* ST_CALLSITE[004F6F25]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13 = CreateBut(this_00,4,3,(uint)(byte)this_00->field_0BAE,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,1,pCVar10,uVar17,uVar18,sVar19,uVar20,pRVar21,
                       pcVar8,iVar4,uVar27,uVar29);
    this_00->field_09C0[0] = uVar13;
    uVar29 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0C0A;
    uVar27 = 0;
    iVar4 = 0;
    pcVar8 = nullptr;
    local_34 = (-(uint)(DAT_0080874e != '\x03') & 3) + 0x81 + this_00->field_004C;
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3b02;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb112;
    uVar17 = 0xb111;
    local_30 = (DAT_0080874e != '\x03') + 0x65 + this_00->field_00A4;
    this_00->field_0030 = &local_34;
    pCVar10 = thunk_FUN_00571240("BUT_AIASS",0);
    /* ST_CALLSITE[004F6FC6]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13 = CreateBut(this_00,4,3,(uint)(byte)this_00->field_0C0A,local_34 - this_00->field_004C,
                       local_30 - this_00->field_00A4,1,pCVar10,uVar17,uVar18,sVar19,uVar20,pRVar21,
                       pcVar8,iVar4,uVar27,uVar29);
    this_00->field_09C0[1] = uVar13;
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[004F6FDE]: CALL 0x00403602; direct=00403602 CPanelTy::SetControlObjSI */
      SetControlObjSI(this_00,'\x01');
    }
    else {
      /* ST_CALLSITE[004F6FE5]: CALL 0x00402d83; direct=00402D83 CPanelTy::SetControlObj */
      SetControlObj(this_00,'\x01');
    }
    /* ST_CALLSITE[004F6FEC]: CALL 0x00405ba0; direct=00405BA0 CPanelTy::sub_00506040 */
    sub_00506040(this_00);
    /* ST_CALLSITE[004F7008]: CALL 0x0040565a; direct=0040565A CreateMiniMap */
    CreateMiniMap((RecoveredRecord_0052AB40_8E5CB246 *)PTR_00806750,(int *)&this_00->field_0x217,
                  0x8b,local_24);
    ST3DSMAPContext::sub_006E6400
              (g_sT3DSMAPContext_00807598,(undefined4 *)&this_00->field_0x217,0,0x8b,0x46);
    g_sT3DSMAPContext_00807598->field_0418 = (uint)DAT_00807327;
    thunk_FUN_004a8f20(0);
    /* ST_CALLSITE[004F706D]: CALL 0x00401b6d; direct=00401B6D OpticClassC::sub_004A9B60 */
    OpticClassC::sub_004A9B60
              (g_opticClass_007FB2A0,this_00->field_011C,this_00->field_0120,this_00->field_0124,
               this_00->field_0128 + -0x9b);
    puVar14 = &this_00->field_0x18;
    this_00->field_0028 = 0x4403;

    FUN_006e6000(this_00,0xf,0,(undefined4 *)puVar14);
    if ((DAT_00807327 & 8) != 0) {
      ST3DSMAPContext::sub_006E6500(g_sT3DSMAPContext_00807598,this_00->field_0227);
    }
    memset((void *)puVar14, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_0028 = 0x13;
    *(undefined4 *)&this_00->field_0x2c = this_00->field_0008;

    FUN_006e6000(this_00,3,1,(undefined4 *)puVar14);
    if (DAT_0080c4f9 != '\0') {
      this_00->field_0028 = 0x5dc6;
      *(undefined **)&this_00->field_0x2c = &DAT_0080c4d7;
      if (g_aiBossClass_008117BC != nullptr) {
        /* ST_CALLSITE[004F70EB]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_aiBossClass_008117BC->GetMessage((STMessage *)puVar14);
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

