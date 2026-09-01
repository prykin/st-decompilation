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
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar5_mg0;
  uint *puVar5;
  ccFntTy *pcVar7_mg0;
  ccFntTy *pcVar6;
  ccFntTy *pcVar7_mg5;
  ccFntTy *pcVar7_mg6;
  char *pcVar7;
  ushort *local_EAX_643;
  int uVar4;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar8;
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
  RecoveredRecord_007111C0_C04D120D *pcVar11;
  int local_EAX_2409;
  char *iVar3;
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
  int uVar13_mg13;
  int uVar13_mg14;
  int uVar13_mg15;
  int uVar13_mg16;
  int uVar13_mg17;
  int uVar13_mg18;
  int uVar13_mg19;
  int uVar13_mg1A;
  int uVar13_mg1B;
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
  RecoveredRecord_007111C0_C04D120D *local_1c;
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

  local_EAX_59 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  this_00 = local_18;
  if (local_EAX_59 == 0) {
    g_cPanel_00801688 = local_18;
    if ((char)_DAT_00807348 == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = (-st::storage_bit_cast<uint>(static_cast<uint32_t>((char)_DAT_00807348 != '\x01')) & 0x80) + 0x70;
    }
    piVar25 = reinterpret_cast<int *>(&local_18->field_0068);
    local_18->field_0090 = iVar4;
    local_18->field_008C = iVar4;
    local_10 = reinterpret_cast<RecoveredRecordView_00710790_7768A573 *>(&DAT_0000000b);
    do {
      iVar4 = 1;
      puVar23 = PTR_0080679c + 0x14;
      local_8 = reinterpret_cast<RecoveredRecord_004F1D20_D68BC0B9 *>(piVar25);

      local_EAX_155 = st::fn_006B4FE0(PTR_0080679c);
      /* ST_CALLSITE[004F5744]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217;/int;/int;/int;/uint;pointer:/undefined4;/int */
      pRVar5_mg0 = st::pointer_boundary_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(st::fn_006B50C0(*piVar25,piVar25[0x16],(uint)PTR_0080679c[7],local_EAX_155,
                                reinterpret_cast<undefined4 *>(puVar23),iVar4));
      piVar25[0x46] = (int)pRVar5_mg0;
      uVar13 = *(uint *)&pRVar5_mg0[1].field_0x4;
      if (uVar13 == 0) {
        uVar13 = ((uint)pRVar5_mg0->field_000E * *(int *)&pRVar5_mg0->field_0x4 + 0x1f >> 3 &
                 0x1ffffffc) * *(int *)&pRVar5_mg0->field_0x8;
      }

      puVar5 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(pRVar5_mg0));
      for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar5 = 0x3a3a3a3a;
        puVar5 = puVar5 + 1;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar5 = 0x3a;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      piVar25 = (int *)((int)local_8 + 4);
      local_10 = reinterpret_cast<RecoveredRecordView_00710790_7768A573 *>(&local_10[-1].field_0x9f);
    } while (local_10 != nullptr);
    local_8 = reinterpret_cast<RecoveredRecord_004F1D20_D68BC0B9 *>(piVar25);
    /* ST_CALLSITE[004F57B1]: CALL 0x00404a16; direct=00404A16 thunk_FUN_004f4640; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;pointer:/ushort;pointer:/undefined;/WinDef.h/BYTE */
    pcVar7_mg0 = reinterpret_cast<ccFntTy *>(st::fn_00404A16(PTR_0080679c,nullptr,DAT_00807dd9));
    this_00->field_01B8 = pcVar7_mg0;
    pcVar7_mg0->field_0058 = 1;
    pcVar7_mg0->field_005C = 0;
    this_00->field_01B8->field_0096 = 1;
    /* ST_CALLSITE[004F57E4]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/cMf32;pointer:/char;/byte */
    pcVar6 = st::pointer_boundary_cast<ccFntTy *>(st::fn_0070CEB0(0x19d,g_cMf32_00806790,st::mutable_c_string("TIME_FONT"),0));
    this_00->field_01BC = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    /* ST_CALLSITE[004F5807]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new */
    puVar5 = st::fn_0070CEB0(0x19d,g_cMf32_00806790,st::mutable_c_string("HOLD_FONT"),0);
    this_00->field_01C0 = puVar5;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    /* ST_CALLSITE[004F582A]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/cMf32;pointer:/char;/byte */
    pcVar6 = st::pointer_boundary_cast<ccFntTy *>(st::fn_0070CEB0(0x19d,g_cMf32_00806790,st::mutable_c_string("MONEY_FONT"),0));
    this_00->field_01C4 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    /* ST_CALLSITE[004F584C]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/cMf32;pointer:/char;/byte */
    pcVar6 = st::pointer_boundary_cast<ccFntTy *>(st::fn_0070CEB0(0x19d,g_cMf32_00806790,st::mutable_c_string("TIMER_FONT"),0));
    this_00->field_01CC = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    /* ST_CALLSITE[004F5872]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/cMf32;pointer:/char;/byte */
    pcVar6 = st::pointer_boundary_cast<ccFntTy *>(st::fn_0070CEB0(0x19d,g_cMf32_00806790,st::mutable_c_string("HOLD_FONT"),0));
    this_00->field_01C8 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    /* ST_CALLSITE[004F5891]: CALL 0x00403945; direct=00403945 thunk_FUN_004f4c70; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/int;pointer:/undefined;/WinDef.h/BYTE */
    pcVar7_mg5 = reinterpret_cast<ccFntTy *>(st::fn_00403945((int)PTR_0080679c,nullptr,DAT_00807dd9));
    this_00->field_01D0 = pcVar7_mg5;
    pcVar7_mg5->field_0058 = 0;
    pcVar7_mg5->field_005C = 0xffffffff;
    local_10 = reinterpret_cast<RecoveredRecordView_00710790_7768A573 *>(this_00->field_01D0);
    if (((ccFntTy *)local_10)->field_00A0 != 0) {
      st::fn_00710790(local_10);
    }
    this_00->field_0108 = local_10->field_008A * 5 - 3;
    /* ST_CALLSITE[004F58E7]: CALL 0x0040290a; direct=0040290A thunk_FUN_004f4950; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;pointer:/ushort;pointer:/undefined;/WinDef.h/BYTE */
    pcVar7_mg6 = reinterpret_cast<ccFntTy *>(st::fn_0040290A(PTR_0080679c,nullptr,DAT_00807dd9));
    this_00->field_01D4 = pcVar7_mg6;
    pcVar7_mg6->field_0058 = 1;
    pcVar7_mg6->field_005C = 0;
    iVar4 = 1;
    bVar2 = 2;
    /* ST_CALLSITE[004F5904]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar7 = st::pointer_boundary_cast<char *>(st::fn_0040577C(st::mutable_c_string("BKG_TIMER"),0));
    local_EAX_643 = st::fn_0070A9F0(g_cMf32_00806790,pcVar7,bVar2,iVar4);
    this_00->field_01AC = local_EAX_643;

    st::fn_00710A90(this_00->field_01CC,st::machine_word_boundary_cast<int>(local_EAX_643),0,0,0,0,0);
    iVar4 = 1;
    puVar23 = PTR_0080679c + 0x14;

    uVar4 = st::fn_006B4FE0(PTR_0080679c);
    pRVar8 = STPointerBoundaryCast<RecoveredRecord_006B4FA0_DAC3A217 *>(st::fn_006B50C0(this_00->field_0104,this_00->field_0108,(uint)PTR_0080679c[7],uVar4,
                          reinterpret_cast<undefined4 *>(puVar23),iVar4));
    this_00->field_01B0 = reinterpret_cast<ushort *>(pRVar8);
    local_10 = *(RecoveredRecordView_00710790_7768A573 **)&pRVar8[1].field_0x4;
    if (local_10 == nullptr) {
      local_10 = (RecoveredRecordView_00710790_7768A573 *)
                 (((uint)pRVar8->field_000E * *(int *)&pRVar8->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)&pRVar8->field_0x8);
    }

    puVar5 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(pRVar8));
    for (uVar13 = (uint)local_10 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar13 = (uint)local_10 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }

    st::fn_00710A90(this_00->field_01D0,(int)this_00->field_01B0,0,0,0,0,0);
    iVar4 = 1;
    bVar2 = 2;
    /* ST_CALLSITE[004F59C9]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar7 = st::pointer_boundary_cast<char *>(st::fn_0040577C(st::mutable_c_string("BK_BRIEF"),0));
    /* ST_CALLSITE[004F59D9]: CALL 0x0070a9f0; direct=0070A9F0 FUN_0070a9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_CPanelTy_01B4; signature=__cdecl;pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_CPanelTy_01B4;pointer:/cMf32;pointer:/char;/byte;/int */
    pAVar9 = st::pointer_boundary_cast<AnonPointee_CPanelTy_01B4 *>(st::fn_0070A9F0(g_cMf32_00806790,pcVar7,bVar2,iVar4));
    this_00->field_01B4 = pAVar9;
    puVar8 = st::fn_006F1CE0(g_cMf32_00806790,1,st::mutable_c_string("INF_LIFELEV"),nullptr,1);
    this_00->field_0286 = puVar8;
    local_EAX_898 = st::fn_006F1CE0(g_cMf32_00806790,1,st::mutable_c_string("INF_LIFELEVU"),nullptr,1);
    this_00->field_028A = local_EAX_898;
    local_EAX_930 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,st::mutable_c_string("IND_BKG"),0xffffffff,0,1,0,nullptr);
    this_00->field_02B2 = local_EAX_930;
    local_EAX_961 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,st::mutable_c_string("INF_WEAP"),0xffffffff,0,1,0,nullptr);
    this_00->field_028E = local_EAX_961;
    local_EAX_996 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,st::mutable_c_string("INF_WEAPD"),0xffffffff,0,1,0,nullptr);
    this_00->field_0292 = local_EAX_996;
    local_EAX_1028 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,st::mutable_c_string("UPG_BOAT"),0xffffffff,0,1,0,nullptr);
    this_00->field_0296 = local_EAX_1028;
    local_EAX_1062 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,reinterpret_cast<char *>(&DAT_007c20a0),0xffffffff,0,1,0,nullptr);
    this_00->field_029A = local_EAX_1062;
    if (DAT_0080874e != '\x03') {
      puVar5 = nullptr;
      iVar24 = 0;
      iVar4 = 1;
      bVar2 = 0;
      uVar13 = 0xffffffff;
      /* ST_CALLSITE[004F5ADA]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
      pcVar7 = st::pointer_boundary_cast<char *>(st::fn_0040577C(st::mutable_c_string("INF_BKDEEP"),0));
      local_EAX_1116 =
           st::fn_00709AF0
                     (PTR_00806794,CASE_B,pcVar7,uVar13,bVar2,iVar4,iVar24,puVar5);
      this_00->field_029E = local_EAX_1116;
    }
    puVar5 = nullptr;
    iVar24 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar13 = 0xffffffff;
    /* ST_CALLSITE[004F5B07]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar7 = st::pointer_boundary_cast<char *>(st::fn_0040577C(st::mutable_c_string("INF_DEEP"),0));
    local_EAX_1161 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,pcVar7,uVar13,bVar2,iVar4,iVar24,puVar5);
    this_00->field_02A2 = local_EAX_1161;
    puVar5 = nullptr;
    iVar24 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar13 = 0xffffffff;
    /* ST_CALLSITE[004F5B34]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar7 = st::pointer_boundary_cast<char *>(st::fn_0040577C(st::mutable_c_string("IND_PNT"),0));
    local_EAX_1205 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,pcVar7,uVar13,bVar2,iVar4,iVar24,puVar5);
    this_00->field_02B6 = local_EAX_1205;
    if (DAT_0080874d == 0xff) {
      iVar4 = 1;
    }
    else {
      iVar4 = DAT_0080874d + 1;
    }
    /* ST_CALLSITE[004F5B72]: CALL dword ptr [0x0085bde8] */
    st::external_00000080(reinterpret_cast<LPSTR>(&this_00->field_01E1),st::mutable_c_string("BOATS_%d"),iVar4);
    local_EAX_1276 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,&this_00->field_01E1,0xffffffff,0,1,0,nullptr);
    this_00->field_02BA = local_EAX_1276;
    local_EAX_1307 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,st::mutable_c_string("BOATS_R"),0xffffffff,0,1,0,nullptr);
    this_00->field_02BE = local_EAX_1307;
    local_EAX_1342 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,reinterpret_cast<char *>(&DAT_007c1910),0xffffffff,0,1,0,nullptr);
    this_00->field_02C2 = local_EAX_1342;
    local_EAX_1374 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,st::mutable_c_string("SOBJS"),0xffffffff,0,1,0,nullptr);
    this_00->field_02C6 = local_EAX_1374;
    puVar5 = nullptr;
    iVar24 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar13 = 0xffffffff;
    /* ST_CALLSITE[004F5C09]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar7 = st::pointer_boundary_cast<char *>(st::fn_0040577C(st::mutable_c_string("FRAMES"),0));
    local_EAX_1418 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,pcVar7,uVar13,bVar2,iVar4,iVar24,puVar5);
    this_00->field_02CA = local_EAX_1418;
    local_EAX_1450 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,st::mutable_c_string("ARTEFACT"),0xffffffff,0,1,0,nullptr);
    this_00->field_02CE = local_EAX_1450;
    local_EAX_1485 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,reinterpret_cast<char *>(&DAT_007c204c),0xffffffff,0,1,0,nullptr);
    this_00->field_02D2 = local_EAX_1485;
    local_EAX_1516 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,reinterpret_cast<char *>(&DAT_007c2048),0xffffffff,0,1,0,nullptr);
    this_00->field_02D6 = local_EAX_1516;
    puVar5 = nullptr;
    iVar24 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar13 = 0xffffffff;
    /* ST_CALLSITE[004F5C97]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar7 = st::pointer_boundary_cast<char *>(st::fn_0040577C(st::mutable_c_string("BUT_PRIORITY"),0));
    local_EAX_1561 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,pcVar7,uVar13,bVar2,iVar4,iVar24,puVar5);
    this_00->field_0B17 = local_EAX_1561;
    local_EAX_1593 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,st::mutable_c_string("SPIMG_SI"),0xffffffff,0,1,0,nullptr);
    this_00->field_0B1B = local_EAX_1593;
    puVar5 = nullptr;
    iVar24 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar13 = 0xffffffff;
    /* ST_CALLSITE[004F5CE4]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar7 = st::pointer_boundary_cast<char *>(st::fn_0040577C(st::mutable_c_string("BUT_PRODWEAP"),0));
    local_EAX_1637 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,pcVar7,uVar13,bVar2,iVar4,iVar24,puVar5);
    this_00->field_09D5 = local_EAX_1637;
    local_EAX_1669 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,st::mutable_c_string("ENOBJ"),0xffffffff,0,1,0,nullptr);
    this_00->field_02DA = local_EAX_1669;
    local_EAX_1704 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,st::mutable_c_string("BUT_MSK_SI"),0xffffffff,0,1,0,nullptr);
    this_00->field_02DE = local_EAX_1704;
    local_EAX_1735 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,st::mutable_c_string("MHELP"),0xffffffff,0,1,0,nullptr);
    this_00->field_077C = local_EAX_1735;
    iVar4 = 1;
    piVar25 = nullptr;
    pCVar10 = st::fn_0040577C(st::mutable_c_string("INF_BKLUINF"),0);
    local_EAX_1775 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
    iVar4 = 1;
    piVar25 = nullptr;
    this_00->field_0954 = local_EAX_1775;
    pCVar10 = st::fn_0040577C(st::mutable_c_string("INF_BKLDINF"),0);
    local_EAX_1812 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
    iVar4 = 1;
    piVar25 = nullptr;
    this_00->field_0958 = local_EAX_1812;
    this_00->field_02E2 = nullptr;
    pCVar10 = st::fn_0040577C(st::mutable_c_string("CP2_CLEAR"),1);
    local_EAX_1856 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
    this_00->field_0974[0] = (uint)local_EAX_1856;
    iVar4 = 1;
    piVar25 = nullptr;
    if (DAT_0080874e == '\x03') {
      local_EAX_2143 = st::fn_006F1CE0(g_cMf32_00806790,6,st::mutable_c_string("CP2_CLEARUP1"),nullptr,1);
      this_00->field_0974[1] = (uint)local_EAX_2143;
      local_EAX_2170 = st::fn_006F1CE0(g_cMf32_00806790,6,st::mutable_c_string("CP2_CLEARUP2"),nullptr,1);
      this_00->field_0974[2] = (uint)local_EAX_2170;
      local_EAX_2197 = st::fn_006F1CE0(g_cMf32_00806790,6,st::mutable_c_string("CP2_CTRLUP1"),nullptr,1);
      this_00->field_0974[3] = (uint)local_EAX_2197;
      local_EAX_2224 = st::fn_006F1CE0(g_cMf32_00806790,6,st::mutable_c_string("CP2_CTRLUP2"),nullptr,1);
      this_00->field_0974[4] = (uint)local_EAX_2224;
      local_EAX_2251 = st::fn_006F1CE0(g_cMf32_00806790,1,st::mutable_c_string("CP2_CTRLDN1"),nullptr,1);
      this_00->field_0974[5] = (uint)local_EAX_2251;
      local_EAX_2278 = st::fn_006F1CE0(g_cMf32_00806790,6,st::mutable_c_string("CP2_CTRLUP3"),nullptr,1);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_0974[6] = (uint)local_EAX_2278;
      bVar2 = 6;
      local_EAX_2114 = st::pointer_boundary_cast<LPSTR>("CP2_CTRLUP4");
    }
    else {
      pCVar10 = st::fn_0040577C(st::mutable_c_string("CP2_1ROW"),1);
      local_EAX_1907 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_0974[1] = (uint)local_EAX_1907;
      pCVar10 = st::fn_0040577C(st::mutable_c_string("CP2_2ROW"),1);
      local_EAX_1945 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_0974[2] = (uint)local_EAX_1945;
      pCVar10 = st::fn_0040577C(st::mutable_c_string("CP2_2ROWC"),1);
      local_EAX_1983 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_0974[3] = (uint)local_EAX_1983;
      pCVar10 = st::fn_0040577C(st::mutable_c_string("BUT_BKGSHOWUPD"),0);
      local_EAX_2020 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_0974[4] = (uint)local_EAX_2020;
      pCVar10 = st::fn_0040577C(st::mutable_c_string("BUT_BKGRETREP"),0);
      local_EAX_2057 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_0974[5] = (uint)local_EAX_2057;
      pCVar10 = st::fn_0040577C(st::mutable_c_string("BK_BOAT_BLD"),0);
      local_EAX_2094 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_0974[6] = (uint)local_EAX_2094;
      local_EAX_2114 = st::fn_0040577C(st::mutable_c_string("BK_BOAT_TRTXT"),0);
      bVar2 = 1;
    }
    local_EAX_2305 = st::fn_006F1CE0(g_cMf32_00806790,bVar2,reinterpret_cast<char *>(local_EAX_2114),piVar25,iVar4);
    iVar4 = 1;
    piVar25 = nullptr;
    this_00->field_0974[7] = (uint)local_EAX_2305;
    pCVar10 = st::fn_0040577C(st::mutable_c_string("INF_BKMAP"),0);
    local_EAX_2342 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
    this_00->field_0994 = local_EAX_2342;
    local_10 = reinterpret_cast<RecoveredRecordView_00710790_7768A573 *>(this_00->field_0227);
    local_8 = (RecoveredRecord_004F1D20_D68BC0B9 *)0x3b60;
    local_14 = 4;
    do {
      /* ST_CALLSITE[004F5FE3]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_007111C0_C04D120D; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_007111C0_C04D120D;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
      pcVar11 = st::pointer_boundary_cast<RecoveredRecord_007111C0_C04D120D *>(st::fn_006B0140(st::machine_word_boundary_cast<UINT>(local_8),g_hINSTANCE_00807618));
      iVar4 = 1;
      puVar23 = PTR_0080679c + 0x14;
      local_1c = pcVar11;

      local_EAX_2409 = st::fn_006B4FE0(PTR_0080679c);
      uVar13 = (uint)PTR_0080679c[7];
      /* ST_CALLSITE[004F6012]: CALL 0x007111c0; direct=007111C0 FUN_007111c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__thiscall;pointer:/char;pointer:/void;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_007111C0_C04D120D */
      iVar3 = st::pointer_boundary_cast<char *>(st::fn_007111C0(this_00->field_01B8,pcVar11));

      iVar22 = st::fn_00711110(this_00->field_01B8,reinterpret_cast<char *>(pcVar11));
      local_c = STPointerBoundaryCast<AnonNested_0052BDA0_007E_1B3446E2 *>(st::fn_006B50C0(iVar22,(int)iVar3,uVar13,local_EAX_2409,reinterpret_cast<undefined4 *>(puVar23),iVar4));
      if (local_c != nullptr) {
        uVar13 = local_c->field_0014;
        if (uVar13 == 0) {
          uVar13 = ((uint)local_c->field_000E * local_c->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                   local_c->field_0008;
        }

        puVar5 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(local_c)));
        for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar5 = 0x3a3a3a3a;
          puVar5 = puVar5 + 1;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined1 *)puVar5 = 0x3a;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }

        st::fn_00710A90(this_00->field_01B8,st::machine_word_boundary_cast<int>(local_c),0,0,0,0,0);

        st::fn_007119C0(this_00->field_01B8,reinterpret_cast<char *>(local_1c),0,0,0);

        st::fn_006B4B20(reinterpret_cast<int *>(local_10),reinterpret_cast<RecoveredRecordView_006B4B20_F20E56A6 *>(local_c),0,0x3a);
        st::fn_006AB060(&local_c);
      }
      local_8 = (RecoveredRecord_004F1D20_D68BC0B9 *)((int)local_8 + 1);
      local_10 = (RecoveredRecordView_00710790_7768A573 *)((int)&local_10->field_0001 + 3);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    iVar4 = 0;
    puVar15 = this_00->field_0DBF;
    local_14 = 2;
    do {
      puVar5 = nullptr;
      iVar26 = 0;
      iVar24 = 1;
      bVar2 = 0;
      uVar13 = 0xffffffff;
      /* ST_CALLSITE[004F60FF]: CALL 0x006f2c00; direct=006F2C00 FUN_006f2c00; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int;/undefined4 */
      pcVar7 = st::pointer_boundary_cast<char *>(st::fn_006F2C00(st::mutable_c_string("SM_TARGET_"),1,iVar4));
      local_EAX_2689 =
           st::fn_00709AF0
                     (PTR_00806784,CASE_B,pcVar7,uVar13,bVar2,iVar24,iVar26,puVar5);
      *(ushort **)((int)puVar15 + -0x3f7) = local_EAX_2689;
      iVar24 = 1;
      piVar25 = nullptr;
      *puVar15 = (uint)(local_EAX_2689 + 0x18);
      pCVar10 = st::fn_006F2C00(st::mutable_c_string("SM_CROSS_"),1,iVar4);
      local_EAX_2737 = st::fn_006F1CE0(g_cMf32_00806780,6,reinterpret_cast<char *>(pCVar10),piVar25,iVar24);
      puVar15[-2] = (uint)local_EAX_2737;
      iVar4 = iVar4 + 1;
      puVar15 = puVar15 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    iVar4 = 1;
    piVar25 = nullptr;
    pCVar10 = st::fn_0040577C(st::mutable_c_string("CP4_CLEAR"),1);
    local_EAX_2786 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
    this_00->field_09D9[0] = (uint)local_EAX_2786;
    iVar4 = 1;
    piVar25 = nullptr;
    if (DAT_0080874e == '\x03') {
      local_EAX_3266 = st::fn_006F1CE0(g_cMf32_00806790,1,st::mutable_c_string("CP4_CTRLDN1"),nullptr,1);
      this_00->field_09D9[1] = (uint)local_EAX_3266;
      local_EAX_3294 = st::fn_006F1CE0(g_cMf32_00806790,1,st::mutable_c_string("CP4_CTRLDN2"),nullptr,1);
      this_00->field_09D9[2] = (uint)local_EAX_3294;
      local_EAX_3322 = st::fn_006F1CE0(g_cMf32_00806790,1,st::mutable_c_string("CP4_CTRLDN3"),nullptr,1);
      this_00->field_09D9[3] = (uint)local_EAX_3322;
      local_EAX_3350 = st::fn_006F1CE0(g_cMf32_00806790,1,st::mutable_c_string("CP4_CTRLDN4"),nullptr,1);
      this_00->field_09D9[4] = (uint)local_EAX_3350;
      local_EAX_3378 = st::fn_006F1CE0(g_cMf32_00806790,1,st::mutable_c_string("CP4_CTRLDN5"),nullptr,1);
      this_00->field_09D9[5] = (uint)local_EAX_3378;
      local_EAX_3406 = st::fn_006F1CE0(g_cMf32_00806790,1,st::mutable_c_string("CP4_CTRLDN6"),nullptr,1);
      this_00->field_09D9[7] = (uint)local_EAX_3406;
      local_EAX_3434 = st::fn_006F1CE0(g_cMf32_00806790,6,st::mutable_c_string("CP4_CLEARUP1"),nullptr,1);
      this_00->field_09D9[8] = (uint)local_EAX_3434;
      local_EAX_3462 = st::fn_006F1CE0(g_cMf32_00806790,6,st::mutable_c_string("CP4_CLEARUP2"),nullptr,1);
      this_00->field_09D9[9] = (uint)local_EAX_3462;
      local_EAX_3490 = st::fn_006F1CE0(g_cMf32_00806790,6,st::mutable_c_string("CP4_CTRLUP1"),nullptr,1);
      this_00->field_09D9[10] = (uint)local_EAX_3490;
      local_EAX_3518 = st::fn_006F1CE0(g_cMf32_00806790,6,st::mutable_c_string("CP4_CTRLUP2"),nullptr,1);
      this_00->field_09D9[0xb] = (uint)local_EAX_3518;
      local_EAX_3546 = st::fn_006F1CE0(g_cMf32_00806790,1,st::mutable_c_string("BK_RC_SI"),nullptr,1);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[0xc] = (uint)local_EAX_3546;
      pcVar10 = st::pointer_boundary_cast<LPSTR>("BK_BOAT_SI");
    }
    else {
      pCVar10 = st::fn_0040577C(st::mutable_c_string("CP4_ROW1"),1);
      local_EAX_2838 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[1] = (uint)local_EAX_2838;
      pCVar10 = st::fn_0040577C(st::mutable_c_string("CP4_ROW2"),1);
      local_EAX_2877 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[2] = (uint)local_EAX_2877;
      pCVar10 = st::fn_0040577C(st::mutable_c_string("CP4_ROW3"),1);
      local_EAX_2916 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[3] = (uint)local_EAX_2916;
      pCVar10 = st::fn_0040577C(st::mutable_c_string("BK_OBJ_BKBUT"),0);
      local_EAX_2955 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[4] = (uint)local_EAX_2955;
      pCVar10 = st::fn_0040577C(st::mutable_c_string("BK_OBJ_BLDREP"),0);
      local_EAX_2994 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[5] = (uint)local_EAX_2994;
      pCVar10 = st::fn_0040577C(st::mutable_c_string("BK_OBJ_BKIND"),0);
      local_EAX_3033 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[7] = (uint)local_EAX_3033;
      pCVar10 = st::fn_0040577C(st::mutable_c_string("BK_OBJ_BKMFACT1"),0);
      local_EAX_3072 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[8] = (uint)local_EAX_3072;
      pCVar10 = st::fn_0040577C(st::mutable_c_string("BK_OBJ_BKRDOCK"),0);
      local_EAX_3111 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[9] = (uint)local_EAX_3111;
      pCVar10 = st::fn_0040577C(st::mutable_c_string("BK_OBJ_BKPLASM1"),0);
      local_EAX_3150 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[10] = (uint)local_EAX_3150;
      pCVar10 = st::fn_0040577C(st::mutable_c_string("BK_OBJ_BKMFACT2"),0);
      local_EAX_3189 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
      this_00->field_09D9[0xb] = (uint)local_EAX_3189;
      local_EAX_3217 = st::fn_006F1CE0(g_cMf32_00806790,1,st::mutable_c_string("BK_OBJ_BKPLASM2"),nullptr,1);
      iVar4 = 1;
      piVar25 = nullptr;
      this_00->field_09D9[0xc] = (uint)local_EAX_3217;
      pcVar10 = st::fn_0040577C(st::mutable_c_string("BK_ARTEFACT"),0);
    }
    local_EAX_3574 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pcVar10),piVar25,iVar4);
    iVar4 = 1;
    piVar25 = nullptr;
    this_00->field_09D9[0xe] = (uint)local_EAX_3574;
    pCVar10 = st::fn_0040577C(st::mutable_c_string("BK_OBJ_STRING"),0);
    local_EAX_3613 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
    iVar4 = 1;
    piVar25 = nullptr;
    this_00->field_09D9[6] = (uint)local_EAX_3613;
    pCVar10 = st::fn_0040577C(st::mutable_c_string("PROC_CRAK"),0);
    local_EAX_3652 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
    iVar4 = 1;
    piVar25 = nullptr;
    this_00->field_09D9[0xd] = (uint)local_EAX_3652;
    pCVar10 = st::fn_0040577C(st::mutable_c_string("INF_BKRUINF"),0);
    local_EAX_3691 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
    iVar4 = 1;
    piVar25 = nullptr;
    this_00->field_0B43 = local_EAX_3691;
    pCVar10 = st::fn_0040577C(st::mutable_c_string("INF_BKRDINF"),0);
    local_EAX_3730 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar4);
    this_00->field_0B47 = local_EAX_3730;
    this_00->field_02E6 = nullptr;
    if (((byte)_DAT_00807348 != 0) && ((byte)_DAT_00807348 < 3)) {
      piVar25 = reinterpret_cast<int *>(&this_00->field_0x1a4);
      iVar24 = 0;
      iVar4 = 1;
      /* ST_CALLSITE[004F655C]: CALL 0x006f2c00; direct=006F2C00 FUN_006f2c00; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int;/undefined4 */
      pcVar7 = st::pointer_boundary_cast<char *>(st::fn_006F2C00(st::mutable_c_string("BK_HIGHRES"),1,_DAT_00807348 & 0xff));
      pCVar10 = st::fn_0040577C(pcVar7,iVar4);
      st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar24);
      piVar25 = reinterpret_cast<int *>(&this_00->field_0x1a8);
      iVar24 = 0;
      iVar4 = 1;
      /* ST_CALLSITE[004F6598]: CALL 0x006f2c00; direct=006F2C00 FUN_006f2c00; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int;/undefined4 */
      pcVar7 = st::pointer_boundary_cast<char *>(st::fn_006F2C00(st::mutable_c_string("BK_HIGHRES"),1,_DAT_00807348 & 0xff));
      pCVar10 = st::fn_0040577C(pcVar7,iVar4);
      st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar10),piVar25,iVar24);
    }
    pDVar11 = st::fn_006AE290(nullptr,10,9,10);
    this_00->field_0B95 = pDVar11;
    /* ST_CALLSITE[004F65D9]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    st::fn_004035BC
              (g_allPlayers_007FA174,1,reinterpret_cast<RecoveredRecordView_0043BEB0_8330D129 *>(&this_00->field_0B63)
              );
    /* ST_CALLSITE[004F65ED]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    st::fn_004035BC
              (g_allPlayers_007FA174,2,reinterpret_cast<RecoveredRecordView_0043BEB0_8330D129 *>(&this_00->field_0B99)
              );
    /* ST_CALLSITE[004F6601]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    st::fn_004035BC
              (g_allPlayers_007FA174,4,reinterpret_cast<RecoveredRecordView_0043BEB0_8330D129 *>(&this_00->field_0BF5)
              );
    /* ST_CALLSITE[004F6615]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    st::fn_004035BC
              (g_allPlayers_007FA174,5,reinterpret_cast<RecoveredRecordView_0043BEB0_8330D129 *>(&this_00->field_0C51)
              );
    /* ST_CALLSITE[004F6629]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    st::fn_004035BC
              (g_allPlayers_007FA174,0xe,
               reinterpret_cast<RecoveredRecordView_0043BEB0_8330D129 *>(&this_00->field_0xc87));
    /* ST_CALLSITE[004F663D]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    st::fn_004035BC
              (g_allPlayers_007FA174,0xf,
               reinterpret_cast<RecoveredRecordView_0043BEB0_8330D129 *>(&this_00->field_0xcc9));
    puVar5 = nullptr;
    iVar24 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar13 = 6;
    local_EAX_4031 = st::fn_00403607(reinterpret_cast<RecoveredRecord_00526100_020D84E3 *>(&this_00->field_0B63),0);
    local_EAX_4049 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_1F,local_EAX_4031,uVar13,bVar2,iVar4,iVar24,puVar5);
    this_00->field_02E2 = local_EAX_4049;
    this_00->field_02EA = 0;
    puVar5 = nullptr;
    iVar24 = 0;
    iVar4 = 1;
    bVar2 = 0;
    uVar13 = 6;
    this_00->field_02EC = 1;
    this_00->field_02EE = this_00->field_0038;
    local_EAX_4099 = st::fn_00403607(reinterpret_cast<RecoveredRecord_00526100_020D84E3 *>(&this_00->field_0C51),0);
    local_EAX_4116 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_1F,local_EAX_4099,uVar13,bVar2,iVar4,iVar24,puVar5);
    this_00->field_02E6 = local_EAX_4116;
    this_00->field_02EB = 0;
    this_00->field_02ED = 1;
    this_00->field_02F2 = this_00->field_0038;
    local_8 = reinterpret_cast<RecoveredRecord_004F1D20_D68BC0B9 *>(&this_00->field_0xc87);
    piVar25 = reinterpret_cast<int *>(&this_00->field_0D53);
    puVar14 = &this_00->field_0D47;
    local_10 = (RecoveredRecordView_00710790_7768A573 *)0x2;
    do {
      local_14 = 6;
      do {
        puVar5 = nullptr;
        iVar24 = 0;
        iVar4 = 1;
        bVar2 = 0;
        uVar13 = 6;
        /* ST_CALLSITE[004F66FC]: CALL 0x004023b5; direct=004023B5 thunk_FUN_004f1d20; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__stdcall;pointer:/char;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_004F1D20_D68BC0B9 */
        pcVar7 = st::pointer_boundary_cast<char *>(st::fn_004023B5(local_8));
        local_EAX_4218 =
             st::fn_00709AF0
                       (PTR_00806794,CASE_1F,pcVar7,uVar13,bVar2,iVar4,iVar24,puVar5);
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
      local_10 = reinterpret_cast<RecoveredRecordView_00710790_7768A573 *>(&local_10[-1].field_0x9f);
    } while (local_10 != nullptr);
    /* ST_CALLSITE[004F674C]: CALL 0x00403648; direct=00403648 CPanelTy::PaintInfoBoat */
    st::fn_00403648(this_00);
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[004F675C]: CALL 0x00401aeb; direct=00401AEB CPanelTy::PaintCtrlBoatSI */
      st::fn_00401AEB(this_00);
    }
    else {
      /* ST_CALLSITE[004F6763]: CALL 0x004022cf; direct=004022CF CPanelTy::PaintCtrlBoat */
      st::fn_004022CF(this_00);
    }
    /* ST_CALLSITE[004F676A]: CALL 0x00403215; direct=00403215 CPanelTy::PaintMap */
    st::fn_00403215(this_00);
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[004F677A]: CALL 0x00402590; direct=00402590 CPanelTy::PaintCtrlObjSI */
      st::fn_00402590(this_00);
    }
    else {
      /* ST_CALLSITE[004F6785]: CALL 0x004046bf; direct=004046BF CPanelTy::PaintCtrlObj */
      st::fn_004046BF(this_00,1);
    }
    /* ST_CALLSITE[004F678C]: CALL 0x004034fe; direct=004034FE CPanelTy::PaintInfoObj */
    st::fn_004034FE(this_00);
    st::fn_006B1A50(g_ddxContext_008075A8,3,nullptr,reinterpret_cast<undefined4 *>(&this_00->field_011C));
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

          st::fn_006B2330(g_ddxContext_008075A8,reinterpret_cast<uint *>(ppuVar16),5,0x402946,
                       (&this_00->field_0068)[uVar13],(&this_00->field_00C0)[uVar13],
                       this_00->field_0148[uVar13 + 0xe]);

          st::fn_006B1B10(reinterpret_cast<AnonShape_006B1B10_121F236C *>(g_ddxContext_008075A8),(uint)*ppuVar16,3);
          st::fn_006B28C0(g_ddxContext_008075A8,(uint)*ppuVar16,1);
        }
        bVar2 = bVar2 + 1;
        local_1c = (RecoveredRecord_007111C0_C04D120D *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar2));
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
    puVar5 = &this_00->field_0174;

    st::fn_006B2330(g_ddxContext_008075A8,puVar5,5,0x40402a,this_00->field_00F4,this_00->field_00F8,
                 this_00->field_01AC);

    st::fn_006B1B10(reinterpret_cast<AnonShape_006B1B10_121F236C *>(g_ddxContext_008075A8),*puVar5,3);

    st::fn_006B3640
              (reinterpret_cast<int *>(g_ddxContext_008075A8),*puVar5,0xffffffff,this_00->field_00EC,
               this_00->field_00F0);
    puVar5 = &this_00->field_0178;
    this_00->field_00FC = (this_00->field_0124 - this_00->field_0104) + this_00->field_011C;
    this_00->field_0100 = this_00->field_00A4 - this_00->field_0108;

    st::fn_006B2330(g_ddxContext_008075A8,puVar5,6,0x40402a,this_00->field_0104,this_00->field_0108,
                 this_00->field_01B0);

    st::fn_006B1B10(reinterpret_cast<AnonShape_006B1B10_121F236C *>(g_ddxContext_008075A8),*puVar5,3);

    st::fn_006B3640
              (reinterpret_cast<int *>(g_ddxContext_008075A8),*puVar5,0xffffffff,this_00->field_00FC,
               this_00->field_0100);
    st::fn_006B3AF0(reinterpret_cast<int *>(g_ddxContext_008075A8),*puVar5);
    this_00->field_0114 = this_00->field_01B4->field_0004;
    this_00->field_0118 = this_00->field_01B4->field_0008;
    puVar5 = &this_00->field_017C;
    this_00->field_010C = (this_00->field_0124 - this_00->field_0114) + this_00->field_011C;
    this_00->field_0110 = this_00->field_00A4;

    st::fn_006B2330(g_ddxContext_008075A8,puVar5,6,0x401988,this_00->field_0114,this_00->field_0118,
                 reinterpret_cast<ushort *>(this_00->field_01B4));

    st::fn_006B1B10(reinterpret_cast<AnonShape_006B1B10_121F236C *>(g_ddxContext_008075A8),*puVar5,3);

    st::fn_006B3640
              (reinterpret_cast<int *>(g_ddxContext_008075A8),*puVar5,0xffffffff,this_00->field_010C,
               this_00->field_0110);
    st::fn_006B3AF0(reinterpret_cast<int *>(g_ddxContext_008075A8),*puVar5);
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
    /* ST_CALLSITE[004F6B6E]: CALL 0x00403c5b; direct=00403C5B CursorClassTy::sub_0054B6D0 */
    st::fn_00403C5B(g_cursorClass_00802A30);
    bVar2 = 0;
    ppuVar16 = this_00->field_0148;
    do {
      if (-1 < (int)*ppuVar16) {

        st::fn_006B3640
                  (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)*ppuVar16,0xffffffff,(uint)ppuVar16[-0x43],
                   (uint)ppuVar16[-0x2d]);
      }
      bVar2 = bVar2 + 1;
      ppuVar16 = ppuVar16 + 1;
    } while (bVar2 < 0xb);
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[004F6BB8]: CALL 0x0040296e; direct=0040296E CPanelTy::SetControlBoatSI */
      st::fn_0040296E(this_00);
    }
    else {
      /* ST_CALLSITE[004F6BBF]: CALL 0x0040556f; direct=0040556F CPanelTy::SetControlBoat */
      st::fn_0040556F(this_00);
    }
    /* ST_CALLSITE[004F6BC6]: CALL 0x0040135c; direct=0040135C CPanelTy::sub_00501A10 */
    st::fn_0040135C(this_00);
    uVar29 = 0;
    uVar27 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(DAT_00807327 & 2 | 1);
    iVar4 = 0;
    pcVar7 = st::mutable_c_string("BUT_MMAPSCIV");
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3afc;
    uVar20 = 0;
    local_34 = (DAT_0080874e == '\x03') + 0x68 + this_00->field_004C;
    sVar19 = 2;
    uVar18 = 0xb105;
    uVar17 = 0xb104;
    local_30 = this_00->field_00A4 + 8;
    this_00->field_0030 = st::machine_word_boundary_cast<undefined4>(&local_34);
    pCVar10 = st::fn_0040577C(st::mutable_c_string("BUT_MAPSCIV"),0);
    /* ST_CALLSITE[004F6C51]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13_mg13 = st::fn_004017E9(this_00,4,3,*(int *)&this_00->field_0x2c,local_34 - this_00->field_004C,
                            local_30 - this_00->field_00A4,6,reinterpret_cast<char *>(pCVar10),uVar17,uVar18,sVar19,uVar20,
                            pRVar21,pcVar7,iVar4,uVar27,uVar29);
    this_00->field_09A4[0] = uVar13_mg13;
    uVar29 = 0;
    uVar27 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(byte)((DAT_00807327 & 4 | 2) >> 1);
    iVar4 = 0;
    pcVar7 = st::mutable_c_string("BUT_MMAPSMIL");
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3afd;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb107;
    uVar17 = 0xb106;
    local_34 = (DAT_0080874e == '\x03') + 0x7b + this_00->field_004C;
    pCVar10 = st::fn_0040577C(st::mutable_c_string("BUT_MAPSMIL"),0);
    /* ST_CALLSITE[004F6CD2]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13_mg14 = st::fn_004017E9(this_00,4,3,*(int *)&this_00->field_0x2c,local_34 - this_00->field_004C,
                            local_30 - this_00->field_00A4,6,reinterpret_cast<char *>(pCVar10),uVar17,uVar18,sVar19,uVar20,
                            pRVar21,pcVar7,iVar4,uVar27,uVar29);
    uVar29 = 0;
    uVar27 = 0;
    iVar4 = 0;
    pcVar7 = st::mutable_c_string("BUT_MMAPZIN");
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3afe;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb109;
    uVar17 = 0xb108;
    this_00->field_09A4[1] = uVar13_mg14;
    pCVar10 = st::fn_0040577C(st::mutable_c_string("BUT_MAPZIN"),0);
    /* ST_CALLSITE[004F6D27]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13_mg15 = st::fn_004017E9(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x58,0x6d,6,reinterpret_cast<char *>(pCVar10),uVar17,
                            uVar18,sVar19,uVar20,pRVar21,pcVar7,iVar4,uVar27,uVar29);
    uVar29 = 0;
    uVar27 = 0;
    iVar4 = 0;
    pcVar7 = st::mutable_c_string("BUT_MMAPZOUT");
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3aff;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb10b;
    uVar17 = 0xb10a;
    this_00->field_09A4[2] = uVar13_mg15;
    pCVar10 = st::fn_0040577C(st::mutable_c_string("BUT_MAPZOUT"),0);
    /* ST_CALLSITE[004F6D81]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13_mg16 = st::fn_004017E9(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x5d,0x84,6,reinterpret_cast<char *>(pCVar10),uVar17,
                            uVar18,sVar19,uVar20,pRVar21,pcVar7,iVar4,uVar27,uVar29);
    uVar29 = 0;
    uVar27 = 0;
    iVar4 = 0;
    pcVar7 = st::mutable_c_string("BUT_MMAPTLFT");
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3b00;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb10d;
    uVar17 = 0xb10c;
    this_00->field_09A4[3] = uVar13_mg16;
    pCVar10 = st::fn_0040577C(st::mutable_c_string("BUT_MAPTLFT"),0);
    /* ST_CALLSITE[004F6DDB]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13_mg17 = st::fn_004017E9(this_00,4,1,1,(DAT_0080874e == '\x03') + 0xd,0x84,6,reinterpret_cast<char *>(pCVar10),uVar17,
                            uVar18,sVar19,uVar20,pRVar21,pcVar7,iVar4,uVar27,uVar29);
    uVar29 = 0;
    uVar27 = 0;
    iVar4 = 0;
    pcVar7 = st::mutable_c_string("BUT_MMAPTRT");
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3b01;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb10f;
    uVar17 = 0xb10e;
    this_00->field_09A4[4] = uVar13_mg17;
    pCVar10 = st::fn_0040577C(st::mutable_c_string("BUT_MAPTRT"),0);
    /* ST_CALLSITE[004F6E32]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13_mg18 = st::fn_004017E9(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x1c,0x6d,6,reinterpret_cast<char *>(pCVar10),uVar17,
                            uVar18,sVar19,uVar20,pRVar21,pcVar7,iVar4,uVar27,uVar29);
    uVar29 = 0;
    uVar27 = 0;
    iVar4 = 0;
    pcVar7 = st::mutable_c_string("BUT_MMAPDIR");
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3b03;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb114;
    uVar17 = 0xb113;
    this_00->field_09A4[5] = uVar13_mg18;
    pCVar10 = st::fn_0040577C(st::mutable_c_string("BUT_MAPDIR"),0);
    /* ST_CALLSITE[004F6E87]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13_mg19 = st::fn_004017E9(this_00,4,3,(DAT_00807327 & 8 | 4) >> 2,6,0x20,6,reinterpret_cast<char *>(pCVar10),uVar17,uVar18,
                            sVar19,uVar20,pRVar21,pcVar7,iVar4,uVar27,uVar29);
    this_00->field_09A4[6] = uVar13_mg19;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0BAE;
    local_34 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 4 + this_00->field_004C;
    uVar29 = 0;
    uVar27 = 0;
    iVar4 = 0;
    pcVar7 = nullptr;
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3b02;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb112;
    uVar17 = 0xb110;
    local_30 = (DAT_0080874e != '\x03') + 0x65 + this_00->field_00A4;
    this_00->field_0030 = st::machine_word_boundary_cast<undefined4>(&local_34);
    pCVar10 = st::fn_0040577C(st::mutable_c_string("BUT_AIASS"),0);
    /* ST_CALLSITE[004F6F25]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13_mg1A = st::fn_004017E9(this_00,4,3,(uint)(byte)this_00->field_0BAE,
                            local_34 - this_00->field_004C,local_30 - this_00->field_00A4,1,reinterpret_cast<char *>(pCVar10),
                            uVar17,uVar18,sVar19,uVar20,pRVar21,pcVar7,iVar4,uVar27,uVar29);
    this_00->field_09C0[0] = uVar13_mg1A;
    uVar29 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0C0A;
    uVar27 = 0;
    iVar4 = 0;
    pcVar7 = nullptr;
    local_34 = (-(uint)(DAT_0080874e != '\x03') & 3) + 0x81 + this_00->field_004C;
    pRVar21 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3b02;
    uVar20 = 0;
    sVar19 = 2;
    uVar18 = 0xb112;
    uVar17 = 0xb111;
    local_30 = (DAT_0080874e != '\x03') + 0x65 + this_00->field_00A4;
    this_00->field_0030 = st::machine_word_boundary_cast<undefined4>(&local_34);
    pCVar10 = st::fn_0040577C(st::mutable_c_string("BUT_AIASS"),0);
    /* ST_CALLSITE[004F6FC6]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    uVar13_mg1B = st::fn_004017E9(this_00,4,3,(uint)(byte)this_00->field_0C0A,
                            local_34 - this_00->field_004C,local_30 - this_00->field_00A4,1,reinterpret_cast<char *>(pCVar10),
                            uVar17,uVar18,sVar19,uVar20,pRVar21,pcVar7,iVar4,uVar27,uVar29);
    this_00->field_09C0[1] = uVar13_mg1B;
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[004F6FDE]: CALL 0x00403602; direct=00403602 CPanelTy::SetControlObjSI */
      st::fn_00403602(this_00,'\x01');
    }
    else {
      /* ST_CALLSITE[004F6FE5]: CALL 0x00402d83; direct=00402D83 CPanelTy::SetControlObj */
      st::fn_00402D83(this_00,'\x01');
    }
    /* ST_CALLSITE[004F6FEC]: CALL 0x00405ba0; direct=00405BA0 CPanelTy::sub_00506040 */
    st::fn_00405BA0(this_00);
    /* ST_CALLSITE[004F7008]: CALL 0x0040565a; direct=0040565A CreateMiniMap */
    st::fn_0040565A(reinterpret_cast<RecoveredRecord_0052AB40_8E5CB246 *>(PTR_00806750),reinterpret_cast<int *>(&this_00->field_0x217),
                  0x8b,local_24);
    st::fn_006E6400
              (g_sT3DSMAPContext_00807598,reinterpret_cast<undefined4 *>(&this_00->field_0x217),0,0x8b,0x46);
    g_sT3DSMAPContext_00807598->field_0418 = (uint)DAT_00807327;
    st::fn_00405547(0);
    /* ST_CALLSITE[004F706D]: CALL 0x00401b6d; direct=00401B6D OpticClassC::sub_004A9B60 */
    st::fn_00401B6D
              (g_opticClass_007FB2A0,this_00->field_011C,this_00->field_0120,this_00->field_0124,
               this_00->field_0128 + -0x9b);
    puVar14 = &this_00->field_0x18;
    this_00->field_0028 = 0x4403;

    st::fn_006E6000(this_00,0xf,0,reinterpret_cast<undefined4 *>(puVar14));
    if ((DAT_00807327 & 8) != 0) {
      st::fn_006E6500(g_sT3DSMAPContext_00807598,this_00->field_0227);
    }
    memset((void *)puVar14, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_0028 = 0x13;
    *(undefined4 *)&this_00->field_0x2c = this_00->field_0008;

    st::fn_006E6000(this_00,3,1,reinterpret_cast<undefined4 *>(puVar14));
    if (DAT_0080c4f9 != '\0') {
      this_00->field_0028 = 0x5dc6;
      *(undefined **)&this_00->field_0x2c = (undefined *)&DAT_0080c4d7;
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
       st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x1bf,0,local_EAX_59,
                          st::mutable_c_string("%s"),"CPanelTy::InitCPanel");
  if (local_EAX_6804 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_EAX_59,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x1bf);
  return;
}

// 004F7800 CPanelTy::DoneCPanel
#line 4 "decomp/ST.exe/functions/004F7800/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::DoneCPanel */

void __thiscall st::fn_004F7800(CPanelTy *this)

{
  byte *puVar1;
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

    st::fn_006E6000(local_c,0xf,0,reinterpret_cast<undefined4 *>(puVar1));
    slotStorage = reinterpret_cast<int *>(&this_00->field_0x217);
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

    st::fn_006E6000(this_00,3,1,reinterpret_cast<undefined4 *>(puVar1));
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
        st::fn_006B3BB0(reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)*ppuVar7);
      }
      *ppuVar7 = (ushort *)0xffffffff;
      ppuVar7 = ppuVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (-1 < (int)this_00->field_0174) {
      st::fn_006B3BB0(reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_0174);
    }
    this_00->field_0174 = 0xffffffff;
    if (-1 < (int)this_00->field_0178) {
      st::fn_006B3BB0(reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_0178);
    }
    this_00->field_0178 = 0xffffffff;
    if (-1 < (int)this_00->field_017C) {
      st::fn_006B3BB0(reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_017C);
    }
    this_00->field_017C = 0xffffffff;
    st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&this_00->field_0B43));
    st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&this_00->field_0B47));
    puVar8 = this_00->field_09D9;
    iVar5 = 0xf;
    do {
      st::fn_006F20E0(g_cMf32_00806790,puVar8);
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if ((g_sT3DSMAPContext_00807598 != nullptr) &&
       (this_00->field_0DB3 != nullptr)) {
      st::fn_006E6580(g_sT3DSMAPContext_00807598,static_cast<RecoveredRecord_006E6580_EB58C315 *>(this_00->field_0DB3));
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
    st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&this_00->field_0994));
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
    st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&this_00->field_0954));
    st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&this_00->field_0958));
    st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&this_00->field_0286));
    st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&this_00->field_028A));
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
      st::fn_00710560(reinterpret_cast<uint *>(this_00->field_01CC));
      this_00->field_01CC = nullptr;
    }
    if (this_00->field_01D0 != nullptr) {
      st::fn_00710560(reinterpret_cast<uint *>(this_00->field_01D0));
      this_00->field_01D0 = nullptr;
    }
    if (this_00->field_01D4 != nullptr) {
      st::fn_00710560(reinterpret_cast<uint *>(this_00->field_01D4));
      this_00->field_01D4 = nullptr;
    }
    if (this_00->field_01C8 != nullptr) {
      st::fn_00710560(reinterpret_cast<uint *>(this_00->field_01C8));
      this_00->field_01C8 = nullptr;
    }
    if (this_00->field_01C4 != nullptr) {
      st::fn_00710560(reinterpret_cast<uint *>(this_00->field_01C4));
      this_00->field_01C4 = nullptr;
    }
    if (this_00->field_01C0 != nullptr) {
      st::fn_00710560(static_cast<uint *>(this_00->field_01C0));
      this_00->field_01C0 = nullptr;
    }
    if (this_00->field_01BC != nullptr) {
      st::fn_00710560(reinterpret_cast<uint *>(this_00->field_01BC));
      this_00->field_01BC = nullptr;
    }
    if (this_00->field_01B8 != nullptr) {
      st::fn_00710560(reinterpret_cast<uint *>(this_00->field_01B8));
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
      st::fn_00714060(reinterpret_cast<int *>(this_00->field_01D8));
      st::fn_0072E2B0(this_00->field_01D8);
      this_00->field_01D8 = nullptr;
    }
    if (this_00->field_025B != nullptr) {
      st::fn_0070B600(reinterpret_cast<int *>(&this_00->field_025B));
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x213,0,iVar3,st::mutable_c_string("%s"),
                             "CPanelTy::DoneCPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x213);
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
  RecoveredRecord_00526100_020D84E3 *pRVar6;
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
  uint *puVar18;
  InternalExceptionFrame local_74;
  uint local_30;
  uint local_2c;
  uint local_28;
  CPanelTy *local_24;
  RecoveredRecord_004F1D20_D68BC0B9 *local_20;
  int *local_1c;
  byte *local_18;
  RecoveredRecord_004F1D20_D68BC0B9 *local_14;
  byte *local_10;
  uint local_c;
  byte local_5;

  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_24 = this;

  iVar5 = st::fn_0072D7F0(local_74.jumpBuffer,0);
  this_00 = local_24;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_74.previous;

    iVar17 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x2c9,0,iVar5,st::mutable_c_string("%s")
                                ,"CPanelTy::PaintTV");
    if (iVar17 == 0) {
      st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x2c9);
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
         (0x41 < st::storage_bit_cast<uint>(static_cast<uint32_t>(this_00->field_0038 -
                       *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a))))) {
        *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a) = this_00->field_0038;
        pbVar13 = (byte *)((int)this_00->field_0308 + (uVar12 - 0x1e));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        bVar9 = *(char *)((int)this_00->field_0308 + (uVar12 - 0x1e)) + 1;
        *pbVar13 = bVar9;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (**(short **)((int)this_00->field_0308 + uVar12 * 4 + -0x26) <= (short)(ushort)bVar9) {
          *pbVar13 = 0;
        }
        /* ST_CALLSITE[004F83F3]: CALL 0x00402ccf; direct=00402CCF CPanelTy::sub_004F1890 */
        st::fn_00402CCF(this_00,(byte)local_c);
        bVar9 = -((char)local_c != '\0');
        local_28 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_28)), (uint8_t)(bVar9)) & 0xffffff08;
        if ((bVar9 & 8) < 0xb) {
          uVar12 = bVar9 & 8;
          puVar2 = this_00->field_0148[uVar12];
joined_r0x004f81d1:
          if (-1 < (int)puVar2) {

            st::fn_006B3640
                      (reinterpret_cast<int *>(g_ddxContext_008075A8),st::machine_word_boundary_cast<uint>(puVar2),0xffffffff,
                       (&this_00->field_003C)[uVar12],(&this_00->field_0094)[uVar12]);
          }
        }
      }
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 3:
      if (0x31 < st::storage_bit_cast<uint>(static_cast<uint32_t>(this_00->field_0038 -
                       *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a)))) {
        pcVar7 = (char *)((int)this_00->field_0308 + (uVar12 - 0x1e));
        *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a) = this_00->field_0038;
        if (*pcVar7 == '\0') {
          pRVar6 = reinterpret_cast<RecoveredRecord_00526100_020D84E3 *>(&this_00->field_0B63);
          if (bVar9 != 0) {
            pRVar6 = reinterpret_cast<RecoveredRecord_00526100_020D84E3 *>(&this_00->field_0C51);
          }
          puVar18 = nullptr;
          iVar17 = 0;
          iVar5 = 1;
          bVar9 = 0;
          uVar15 = 6;
          text = st::fn_00403607(pRVar6,0);
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
              /* ST_CALLSITE[004F8283]: CALL 0x00402ed2; direct=00402ED2 CPanelTy::ShiftControls */
              st::fn_00402ED2(this_00,1);
            }
          }
        }
        else {
          *pcVar7 = *pcVar7 + -1;
        }
        /* ST_CALLSITE[004F828E]: CALL 0x00402ccf; direct=00402CCF CPanelTy::sub_004F1890 */
        st::fn_00402CCF(this_00,(byte)local_c);
        bVar9 = -((char)local_c != '\0');
        local_1c = (int *)(STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar9)) & 0xffffff08);
        if ((bVar9 & 8) < 0xb) {
          uVar12 = bVar9 & 8;
          if (-1 < (int)this_00->field_0148[uVar12]) {

            st::fn_006B3640
                      (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)this_00->field_0148[uVar12],0xffffffff,
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
      if (0x31 < st::storage_bit_cast<uint>(static_cast<uint32_t>(this_00->field_0038 -
                       *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a)))) {
        pbVar13 = (byte *)((int)this_00->field_0308 + (uVar12 - 0x1e));
        *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a) = this_00->field_0038;
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
        /* ST_CALLSITE[004F81A6]: CALL 0x00402ccf; direct=00402CCF CPanelTy::sub_004F1890 */
        st::fn_00402CCF(this_00,(byte)local_c);
        bVar9 = -((char)local_c != '\0');
        local_20 = (RecoveredRecord_004F1D20_D68BC0B9 *)
                   (STReplaceLowByte((uint32_t)(local_20), (uint8_t)(bVar9)) & 0xffffff08);
        if ((bVar9 & 8) < 0xb) {
          uVar12 = bVar9 & 8;
          puVar2 = this_00->field_0148[uVar12];
          goto joined_r0x004f81d1;
        }
      }
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 5:
      if (0x41 < st::storage_bit_cast<uint>(static_cast<uint32_t>(this_00->field_0038 -
                       *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a)))) {
        pbVar13 = (byte *)((int)this_00->field_0308 + (uVar12 - 0x1e));
        *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a) = this_00->field_0038;
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
        /* ST_CALLSITE[004F836C]: CALL 0x00402ccf; direct=00402CCF CPanelTy::sub_004F1890 */
        st::fn_00402CCF(this_00,(byte)local_c);
        bVar9 = -((char)local_c != '\0');
        local_14 = (RecoveredRecord_004F1D20_D68BC0B9 *)
                   (STReplaceLowByte((uint32_t)(local_14), (uint8_t)(bVar9)) & 0xffffff08);
        if ((bVar9 & 8) < 0xb) {
          uVar12 = bVar9 & 8;
          puVar2 = this_00->field_0148[uVar12];
          goto joined_r0x004f81d1;
        }
      }
    }
    bVar9 = (char)local_c + 1;
    local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(bVar9));
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
    local_20 = reinterpret_cast<RecoveredRecord_004F1D20_D68BC0B9 *>(&this_00->field_0xc87);
    local_1c = reinterpret_cast<int *>(&this_00->field_0D53);
    do {
      local_c = local_c & 0xffffff00;
      local_14 = local_20;
      piVar11 = local_1c;
      pbVar13 = local_18;
      do {
        bVar9 = pbVar13[0xc];
        if (bVar9 == 1) {
          if ((DAT_0080731a != 0) && (0x41 < st::storage_bit_cast<uint>(static_cast<uint32_t>(this_00->field_0038 - *piVar11)))) {
            *piVar11 = this_00->field_0038;
            bVar9 = *pbVar13;
            *pbVar13 = bVar9 + 1;
            if (*(short *)piVar11[-0x12] <= (short)(ushort)(byte)(bVar9 + 1)) {
              *pbVar13 = 0;
            }
            /* ST_CALLSITE[004F85F3]: CALL 0x00403b57; direct=00403B57 CPanelTy::sub_004F1C80 */
            st::fn_00403B57(this_00,local_c,(uint)local_10);
            bVar9 = ((char)local_c == '\0') + 9;
            local_30 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_30)), (uint8_t)(bVar9));
            if (bVar9 < 0xb) {
              uVar12 = (uint)bVar9;
              puVar2 = this_00->field_0148[uVar12];
              goto joined_r0x004f861b;
            }
          }
        }
        else if (bVar9 == 3) {
          if (0x31 < st::storage_bit_cast<uint>(static_cast<uint32_t>(this_00->field_0038 - *piVar11))) {
            *piVar11 = this_00->field_0038;
            if (*pbVar13 == 0) {
              puVar18 = nullptr;
              iVar17 = 0;
              iVar5 = 1;
              bVar9 = 0;
              uVar12 = 6;
              /* ST_CALLSITE[004F8559]: CALL 0x004023b5; direct=004023B5 thunk_FUN_004f1d20; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__stdcall;pointer:/char;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_004F1D20_D68BC0B9 */
              pcVar7 = st::pointer_boundary_cast<char *>(st::fn_004023B5(local_14));
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
            /* ST_CALLSITE[004F8584]: CALL 0x00403b57; direct=00403B57 CPanelTy::sub_004F1C80 */
            st::fn_00403B57(this_00,local_c,(uint)local_10);
            bVar9 = ((char)local_c == '\0') + 9;
            local_2c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_2c)), (uint8_t)(bVar9));
            if (bVar9 < 0xb) {
              uVar12 = (uint)bVar9;
              puVar2 = this_00->field_0148[uVar12];
              goto joined_r0x004f861b;
            }
          }
        }
        else if ((bVar9 == 4) && (0x31 < st::storage_bit_cast<uint>(static_cast<uint32_t>(this_00->field_0038 - *piVar11)))) {
          *piVar11 = this_00->field_0038;
          bVar9 = *pbVar13;
          bVar4 = bVar9 + 1;
          *pbVar13 = bVar4;
          if (*(short *)piVar11[-0x12] <= (short)(ushort)bVar4) {
            *pbVar13 = bVar9;
            pbVar13[0xc] = 2;
          }
          /* ST_CALLSITE[004F84F2]: CALL 0x00403b57; direct=00403B57 CPanelTy::sub_004F1C80 */
          st::fn_00403B57(this_00,local_c,(uint)local_10);
          bVar9 = ((char)local_c == '\0') + 9;
          local_28 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_28)), (uint8_t)(bVar9));
          if (bVar9 < 0xb) {
            uVar12 = (uint)bVar9;
            puVar2 = this_00->field_0148[uVar12];
joined_r0x004f861b:
            if (-1 < (int)puVar2) {

              st::fn_006B3640
                        (reinterpret_cast<int *>(g_ddxContext_008075A8),st::machine_word_boundary_cast<uint>(puVar2),0xffffffff,
                         (&this_00->field_003C)[uVar12],(&this_00->field_0094)[uVar12]);
            }
          }
        }
        bVar9 = (char)local_c + 1;
        local_14 = local_14 + 6;
        piVar11 = piVar11 + 6;
        pbVar13 = pbVar13 + 6;
        local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(bVar9));
      } while (bVar9 < 2);
      bVar9 = (char)local_10 + 1;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
      local_20 = local_20 + 1;
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
          st::fn_0070B600(reinterpret_cast<int *>(&this_00->field_025B));
        }
        psVar8 = (short *)0x1;
        bVar4 = 0;
        bVar9 = 6;
        /* ST_CALLSITE[004F8777]: CALL 0x004036a2; direct=004036A2 thunk_FUN_005260b0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;/int;/undefined1;/int */
        pcVar7 = st::pointer_boundary_cast<char *>(st::fn_004036A2(0,0,0));
        psVar8 = st::fn_0070B430(g_cMf32_00806790,pcVar7,bVar9,bVar4,psVar8);
        this_00->field_025B = psVar8;
        this_00->field_0260 = CASE_1;
        this_00->field_025F = 0;
      }
      else {
        this_00->field_025F = this_00->field_025F + -1;
      }
      /* ST_CALLSITE[004F87A0]: CALL 0x00405dee; direct=00405DEE CPanelTy::sub_004F1950 */
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
      st::fn_0070B600(reinterpret_cast<int *>(ppsVar1));
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
      /* ST_CALLSITE[004F887B]: CALL 0x004036a2; direct=004036A2 thunk_FUN_005260b0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;/int;/undefined1;/int */
      pcVar7 = st::pointer_boundary_cast<char *>(st::fn_004036A2(0,0,0));
      psVar8 = st::fn_0070B430(g_cMf32_00806790,pcVar7,bVar9,bVar4,psVar8);
      *ppsVar1 = psVar8;
    }
    this_00->field_0260 = CASE_1;
  }
  this_00->field_025F = 0;
LAB_004f88e6:
  /* ST_CALLSITE[004F88E8]: CALL 0x00405dee; direct=00405DEE CPanelTy::sub_004F1950 */
  st::fn_00405DEE(this_00);
cf_common_join_004F88ED:
  if (((this_00->field_01D8 != nullptr) && ((g_playSystem_00802A38->field_00E4 & 1) != 0)) &&
     (iVar5 = *(int *)&this_00->field_01D8->field_0x4, iVar5 < this_00->field_01DC + -2)) {
    st::fn_006B4170(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_01B4),0,100,5,0x226,0x55,0);
    /* ST_CALLSITE[004F8943]: CALL 0x007140e0; direct=007140E0 FUN_007140e0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; signature=__thiscall;pointer:/wingdi.h/tagBITMAPINFO;pointer:/void;/int;/char */
    tOBJImage = st::pointer_boundary_cast<tagBITMAPINFO *>(st::fn_007140E0(this_00->field_01D8,1,'\0'));
    if (tOBJImage != nullptr) {
      st::fn_006B5440(reinterpret_cast<ushort *>(this_00->field_01B4),0,100,5,tOBJImage,0,0xff);
    }

    st::fn_006B35D0(reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_017C);
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
   CPanelTy::PaintSMap

   [STSwitchEnumApplier] Switch target field_023F uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_023FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

uint __thiscall st::fn_004F8C80(CPanelTy *this)

{
  uint32_t _local_c;

  ulonglong uVar1;
  CPanelTy *pCVar3;
  int errorCode;
  uint uVar4;
  uint puVar5; /* split scalar lifetime from pointer-shaped SSA storage */
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

    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x2fc,0,errorCode,
                               st::mutable_c_string("%s"),"CPanelTy::PaintSMap");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x2fc);
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
  /* ST_CALLSITE[004F8D09]: CALL 0x00401942; direct=00401942 CPanelTy::sub_0052B330 */
  st::fn_00401942(local_8);
  st::fn_006E6FB0
            (g_sT3DSMAPContext_00807598,(RecoveredSourceFamily_dibcopy *)pCVar3->field_0190,5,7,
             (uint)(pCVar3->field_023F != CASE_2));
  puVar5 = (g_playSystem_00802A38->field_00E4 * 0x51eb851f);
  uVar4 = g_playSystem_00802A38->field_00E4 / 0x19;
  if (300 < uVar4 - DAT_0080c4cf) {

    puVar5 = st::machine_word_boundary_cast<uint>(STPointerBoundaryCast<ushort *>(st::fn_0040150A(reinterpret_cast<RecoveredRecordView_0056F930_AC468BC6 *>(&DAT_00807620))));
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
        puVar8 = (undefined *)&DAT_007c2198;
        pcVar11 = st::mutable_c_string("%s;");
      }
      else {
        puVar8 = (undefined *)(uVar4 & 0xff);
        pcVar11 = st::mutable_c_string("%2d:");
      }
      /* ST_CALLSITE[004F8F40]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(reinterpret_cast<LPSTR>(pcVar10),pcVar11,puVar8);
      uVar1 = (ulonglong)uVar7 % 0xe10;
      /* ST_CALLSITE[004F8F74]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(reinterpret_cast<LPSTR>(pcVar10),st::mutable_c_string("%s%02d:%02d"),pcVar10,(int)(uVar1 / 0x3c),(int)(uVar1 % 0x3c));
      puVar5 = st::machine_word_boundary_cast<uint>(STPointerBoundaryCast<ushort *>(st::fn_00711B70(pCVar3->field_01BC,pcVar10,0,0,(uint)(DAT_0080874e == '\x03'),-1,-1)));
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
          puVar8 = (undefined *)&DAT_007c2198;
          pcVar10 = st::mutable_c_string("%s;");
        }
        else {
          puVar8 = (undefined *)(uVar4 & 0xff);
          pcVar10 = st::mutable_c_string("%2d:");
        }
        /* ST_CALLSITE[004F8E47]: CALL EDI */
        st::external_00000080(reinterpret_cast<LPSTR>(&pCVar3->field_01E1),pcVar10,puVar8);
        uVar1 = (ulonglong)uVar7 % 0xe10;
        /* ST_CALLSITE[004F8E7D]: CALL EDI */
        st::external_00000080(reinterpret_cast<LPSTR>(&pCVar3->field_01E1),st::mutable_c_string("%s%02d:%02d"),&pCVar3->field_01E1,(int)(uVar1 / 0x3c)
                  ,(int)(uVar1 % 0x3c));
      }
      else {
        uVar4 = 0xffffffff;
        pcVar10 = &CHAR_0_007c21a4;
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
      puVar5 = st::machine_word_boundary_cast<uint>(STPointerBoundaryCast<ushort *>(st::fn_00711B70(pCVar3->field_01BC,&pCVar3->field_01E1,0,0,
                              (DAT_0080874e == '\x03') + 2,-1,-1)));
      if (DAT_0080c4d3 != 2) {

        st::fn_00711B70(pCVar3->field_01CC,&pCVar3->field_01E1,0xd,10,0,-1,-1);
        puVar5 = st::machine_word_boundary_cast<uint>(STPointerBoundaryCast<ushort *>(st::fn_006B3640
                           (reinterpret_cast<int *>(g_ddxContext_008075A8),pCVar3->field_0174,0xffffffff,
                            pCVar3->field_00EC,pCVar3->field_00F0)));
      }
    }
  }
  if ((pCVar3->field_023F != CASE_2) && (puVar5 = st::machine_word_boundary_cast<uint>(pCVar3->field_0148[4]), -1 < (int)puVar5)) {
    puVar5 = st::machine_word_boundary_cast<uint>(STPointerBoundaryCast<ushort *>(st::fn_006B3640
                       (reinterpret_cast<int *>(g_ddxContext_008075A8),puVar5,0xffffffff,pCVar3->field_004C,
                        pCVar3->field_00A4)));
  }
  g_currentExceptionFrame = local_50.previous;
  return puVar5;
}

// 004F92B0 CPanelTy::OutText
#line 4 "decomp/ST.exe/functions/004F92B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::OutText */

void __thiscall st::fn_004F92B0(CPanelTy *this,int *param_1,int param_2)

{
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar1;
  CPanelTy *pCVar3;
  int errorCode;
  uint *puVar4;
  DArrayTy *pDVar5;
  uint *puVar6;
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
                       (local_c->field_01D0,(DArrayTy *)*param_1,st::mutable_c_string(" ,.;:!?/\\()[]{}"),
                        reinterpret_cast<uint *>(&DAT_007c21ec),local_c->field_0104,0,0xffffffff,nullptr,1);
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
    pRVar1 = reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(pCVar3->field_01B0);
    local_8 = *(uint *)&pRVar1[1].field_0x4;
    if (local_8 == 0) {
      local_8 = ((uint)pRVar1->field_000E * *(int *)&pRVar1->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)&pRVar1->field_0x8;
    }

    puVar6 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(pRVar1));
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

    st::fn_006B3430(reinterpret_cast<int *>(g_ddxContext_008075A8),pCVar3->field_0178);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x32f,0,errorCode,
                             st::mutable_c_string("%s"),"CPanelTy::OutText(*str_arr, time)");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x32f);
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
      st::fn_004015A0(local_8,pcVar2,st::mutable_c_string("@ %s@ "));
    }
    /* ST_CALLSITE[004F9510]: CALL 0x0040311b; direct=0040311B CPanelTy::OutText */
    st::fn_0040311B(local_c,reinterpret_cast<int *>(&local_8),param_3);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x342,0,errorCode,
                             st::mutable_c_string("%s"),"CPanelTy::OutText(first, num, time)");
  if (iVar3 == 0) {
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x342);
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
    st::fn_004015A0(local_8,param_1,st::mutable_c_string("@ %s@ "));
    /* ST_CALLSITE[004F9609]: CALL 0x0040311b; direct=0040311B CPanelTy::OutText */
    st::fn_0040311B(local_c,reinterpret_cast<int *>(&local_8),param_2);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x351,0,errorCode,
                             st::mutable_c_string("%s"),"CPanelTy::OutText(str, time)");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x351);
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
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar6;
  char *pcVar7;
  cMf32 *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *puVar12;
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
            /* ST_CALLSITE[004F9763]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
            st::fn_00404BD8
                      (reinterpret_cast<SoundClassTy *>(&g_sound),SOUND_MODE_12,reinterpret_cast<char *>(puVar12 + 9),*(int *)(puVar12 + 5),
                       nullptr,0);
            break;
          case 2:
            if (this_00->field_01D8 != nullptr) {
              st::fn_00714060(reinterpret_cast<int *>(this_00->field_01D8));
              st::fn_0072E2B0(this_00->field_01D8);
              this_00->field_01D8 = nullptr;
            }
            st::fn_006B4170(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_01B4),0,100,5,0x226,0x55,0);
            local_8 = st::fn_006B54F0(nullptr,10,10);
            if (*(int *)(puVar12 + 10) < 1) {
              local_c = (char *)g_dArray_0080C4C7->elementSize;
            }
            else {
              local_c = (char *)(*(int *)(puVar12 + 6) + *(int *)(puVar12 + 10));
            }
            iVar3 = *(int *)(puVar12 + 6);
            if (iVar3 < (int)local_c) {
              do {
                if (iVar3 < (int)g_dArray_0080C4C7->elementSize) {
                  pcVar7 = *(char **)(g_dArray_0080C4C7->growCapacity + iVar3 * 4);
                }
                else {
                  pcVar7 = nullptr;
                }
                st::fn_004015A0(local_8,pcVar7,st::mutable_c_string("@ %s"));
                iVar3 = iVar3 + 1;
              } while (iVar3 < (int)local_c);
            }
            pDVar4 = reinterpret_cast<DArrayTy *>(st::fn_007126E0
                               (this_00->field_01D4,local_8,st::mutable_c_string(" ,.;:!?/\\()[]{}"),
                                reinterpret_cast<uint *>(&DAT_007c21ec),0x226,0,0xffffffff,nullptr,1));
            if (local_8 != nullptr) {
              st::fn_006B5570(local_8);
            }
            if (pDVar4 == nullptr) {
              pDVar4 = st::fn_006B54F0(nullptr,1,1);
            }
            local_8 = pDVar4;
            if (puVar12[5] == '\0') {
              /* ST_CALLSITE[004F9910]: CALL 0x00710ba0; direct=00710BA0 ccFntTy::CreateSurf; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/ccFntTy;/int;/uint;/int;/int;/int;/int;/int */
              pRVar6 = st::pointer_boundary_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(st::fn_00710BA0(this_00->field_01D4,(int)this_00->field_01B4,0,100,5,
                                           0x226,0x55,0));
              if (pRVar6 != nullptr) {

                st::fn_00711F70(this_00->field_01D4,st::machine_word_boundary_cast<int>(local_8),0,-1,0,0,0);
                /* ST_CALLSITE[004F9942]: CALL 0x00403229; direct=00403229 DibPut */
                st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_01B4),100,5,'\x01',pRVar6);

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
              this_00->field_01D8 = reinterpret_cast<HoloTy *>(this_01);

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
              st::fn_0070B600(reinterpret_cast<int *>(ppsVar1));
            }
            if (DAT_0080731a == 0) {
              local_c = reinterpret_cast<char *>(puVar12 + 10);
              if (puVar12[10] == '\0') {
                psVar15 = (short *)0x1;
                bVar13 = 0;
                bVar14 = 6;
                /* ST_CALLSITE[004F9A7C]: CALL 0x004036a2; direct=004036A2 thunk_FUN_005260b0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;/int;/undefined1;/int */
                pcVar7 = st::pointer_boundary_cast<char *>(st::fn_004036A2(*(int *)(puVar12 + 5),puVar12[9],0));
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
                /* ST_CALLSITE[004F9AA6]: CALL 0x004036a2; direct=004036A2 thunk_FUN_005260b0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;/int;/undefined1;/int */
                pcVar7 = st::pointer_boundary_cast<char *>(st::fn_004036A2(0,0,0));
                psVar15 = st::fn_0070B430
                                    (g_cMf32_00806790,pcVar7,bVar13,bVar14,psVar15);
                *ppsVar1 = psVar15;
              }
              this_00->field_025F = 0;
              /* ST_CALLSITE[004F9AC9]: CALL 0x00405dee; direct=00405DEE CPanelTy::sub_004F1950 */
              st::fn_00405DEE(this_00);
            }
            else {
              psVar15 = (short *)0x1;
              bVar14 = 0;
              bVar13 = 6;
              /* ST_CALLSITE[004F99A6]: CALL 0x004036a2; direct=004036A2 thunk_FUN_005260b0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;/int;/undefined1;/int */
              pcVar7 = st::pointer_boundary_cast<char *>(st::fn_004036A2(0,0,1));
              psVar15 = st::fn_0070B430
                                  (g_cMf32_00806790,pcVar7,bVar13,bVar14,psVar15);
              *ppsVar1 = psVar15;
              this_00->field_0260 = CASE_5;
              this_00->field_025F = 0;
              _Count = 0x1f;
              if (puVar12[10] == '\0') {
                /* ST_CALLSITE[004F99FC]: CALL 0x004036a2; direct=004036A2 thunk_FUN_005260b0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;/int;/undefined1;/int */
                pcVar7 = st::pointer_boundary_cast<char *>(st::fn_004036A2(*(int *)(puVar12 + 5),puVar12[9],0));
                st::fn_0072E340(&this_00->field_0265,pcVar7,_Count);
                this_00->field_0285 = 1;
              }
              else {
                st::fn_0072E340(&this_00->field_0265,reinterpret_cast<char *>(puVar12 + 10),0x1f);
                this_00->field_0285 = 0;
              }
              this_00->field_0284 = 0;
              st::fn_00405E2F(0xb3);
            }
            break;
          case 4:
            this_00->field_0028 = 0x5dc6;
            *(undefined **)&this_00->field_0x2c = (undefined *)&DAT_0080c4d7;
            if (g_aiBossClass_008117BC != nullptr) {
              /* ST_CALLSITE[004F9AEE]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
              g_aiBossClass_008117BC->GetMessage((STMessage *)&this_00->field_0x18);
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

    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x3b0,0,iVar3,st::mutable_c_string("%s"),
                               "CPanelTy::PlayBrief");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x3b0);
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
      /* ST_CALLSITE[004F9D17]: CALL 0x00715050; direct=00715050 Library::Ourlib::MFDARR::mfDarLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__cdecl;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/cMf32;pointer:/char;/int */
      pDVar4 = st::pointer_boundary_cast<DArrayTy *>(st::fn_00715050(g_cMf32_00806758,param_1,0));
      if (pDVar4 != nullptr) {
        st::fn_0072E340(reinterpret_cast<char *>(&DAT_0080c4d7),param_1,0x1f);
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
          st::fn_0070B600(reinterpret_cast<int *>(ppsVar1));
        }
        psVar9 = (short *)0x1;
        bVar8 = 0;
        bVar7 = 6;
        /* ST_CALLSITE[004F9D8F]: CALL 0x004036a2; direct=004036A2 thunk_FUN_005260b0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;/int;/undefined1;/int */
        pcVar5 = st::pointer_boundary_cast<char *>(st::fn_004036A2(0,0,0));
        psVar9 = st::fn_0070B430(g_cMf32_00806790,pcVar5,bVar7,bVar8,psVar9);
        *ppsVar1 = psVar9;
        pCVar3->field_0260 = CASE_1;
        pCVar3->field_025F = 0;
        st::fn_006B4170(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(pCVar3->field_01B4),0,100,5,0x226,0x55,0);
        if ((DAT_0080c4f7 != 3) && (DAT_0080c4f7 != 1)) {
          pCVar3->field_0260 = CASE_3;
          DAT_0080c4f7 = 3;

          st::fn_006B3430(reinterpret_cast<int *>(g_ddxContext_008075A8),pCVar3->field_017C);
        }
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x3c8,0,errorCode,
                             st::mutable_c_string("%s"),"CPanelTy::PlayBriefing");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x3c8);
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
  byte *puVar7;
  int *piVar8;
  uint uVar9;
  byte bVar10;
  uint *puVar11;
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
          /* ST_CALLSITE[004F9F7B]: CALL 0x00401b6d; direct=00401B6D OpticClassC::sub_004A9B60 */
          st::fn_00401B6D
                    (g_opticClass_007FB2A0,local_10->field_011C,local_10->field_0120,
                     local_10->field_0124,local_10->field_0128);
          this_00->field_023F = CASE_6;
          if (g_researchPanel_008016E8 != nullptr) {
            /* ST_CALLSITE[004F9F95]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            st::fn_00401A73(g_researchPanel_008016E8,'\0');
          }
          if (g_bldBoatPanel_0080167C != nullptr) {
            /* ST_CALLSITE[004F9FA6]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            st::fn_00401A73(g_bldBoatPanel_0080167C,'\0');
          }
          if (g_bldObjPanel_00801684 != nullptr) {
            /* ST_CALLSITE[004F9FB7]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            st::fn_00401A73(g_bldObjPanel_00801684,'\0');
          }
          if (g_bldLabPanel_00801680 != nullptr) {
            /* ST_CALLSITE[004F9FC8]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            st::fn_00401A73(g_bldLabPanel_00801680,'\0');
          }
          if (g_infocPanel_00801698 != nullptr) {
            /* ST_CALLSITE[004F9FDB]: CALL dword ptr [EDX + 0x1c] */
            (*g_infocPanel_00801698->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_infocPanel_00801698),'\0');
          }
          if (g_tradePanel_00802A44 != nullptr) {
            /* ST_CALLSITE[004F9FEC]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
            st::fn_00404AF7(g_tradePanel_00802A44,'\0','\0');
          }
          if (g_behPanel_00801678 != nullptr) {
            /* ST_CALLSITE[004F9FFF]: CALL dword ptr [EAX + 0x1c] */
            (*g_behPanel_00801678->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_behPanel_00801678),'\0');
          }
          if (g_sAMPanel_008016EC != nullptr) {
            /* ST_CALLSITE[004FA010]: CALL dword ptr [EDX + 0x1c] */
            (*g_sAMPanel_008016EC->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_sAMPanel_008016EC),'\0');
          }
          if (g_upgPanel_00802A48 != nullptr) {
            /* ST_CALLSITE[004FA021]: CALL dword ptr [EAX + 0x1c] */
            (*g_upgPanel_00802A48->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_upgPanel_00802A48),'\0');
          }
          if (g_frmPanel_0080168C != nullptr) {
            /* ST_CALLSITE[004FA032]: CALL dword ptr [EDX + 0x1c] */
            (*g_frmPanel_0080168C->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_frmPanel_0080168C),'\0');
          }
          if (g_helpPanel_00801690 != nullptr) {
            /* ST_CALLSITE[004FA043]: CALL dword ptr [EAX + 0x18] */
            g_helpPanel_00801690->SetPanel('\0');
          }
          if (g_optPanel_008016DC != nullptr) {
            /* ST_CALLSITE[004FA050]: CALL 0x00402630; direct=00402630 OptPanelTy::SwitchOptPanelOff */
            st::fn_00402630(g_optPanel_008016DC);
          }
          /* ST_CALLSITE[004FA059]: CALL 0x00402ed2; direct=00402ED2 CPanelTy::ShiftControls */
          st::fn_00402ED2(this_00,0);
          if (DAT_0080731a != 0) {
            puVar7 = &this_00->field_02EC;
            piVar8 = &this_00->field_02EE;
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
              piVar8[-3] = (int)puVar5;
              puVar7[-2] = 0;
              *puVar7 = 4;
              *piVar8 = this_00->field_0038;
              puVar7 = puVar7 + 1;
              piVar8 = piVar8 + 1;
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            piVar8 = reinterpret_cast<int *>(&this_00->field_0D53);
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
                piVar8[-0x12] = (int)puVar5;
                puVar7[-0xc] = 0;
                *puVar7 = 4;
                *piVar8 = this_00->field_0038;
                piVar8 = piVar8 + 1;
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
            /* ST_CALLSITE[004FA180]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            st::fn_00401A73(g_researchPanel_008016E8,'\0');
          }
          if (g_bldBoatPanel_0080167C != nullptr) {
            /* ST_CALLSITE[004FA191]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            st::fn_00401A73(g_bldBoatPanel_0080167C,'\0');
          }
          if (g_bldObjPanel_00801684 != nullptr) {
            /* ST_CALLSITE[004FA1A2]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            st::fn_00401A73(g_bldObjPanel_00801684,'\0');
          }
          if (g_bldLabPanel_00801680 != nullptr) {
            /* ST_CALLSITE[004FA1B3]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            st::fn_00401A73(g_bldLabPanel_00801680,'\0');
          }
          if (g_infocPanel_00801698 != nullptr) {
            /* ST_CALLSITE[004FA1C6]: CALL dword ptr [EDX + 0x1c] */
            (*g_infocPanel_00801698->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_infocPanel_00801698),'\0');
          }
          if (g_tradePanel_00802A44 != nullptr) {
            /* ST_CALLSITE[004FA1D7]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
            st::fn_00404AF7(g_tradePanel_00802A44,'\0','\0');
          }
          if (g_behPanel_00801678 != nullptr) {
            /* ST_CALLSITE[004FA1EA]: CALL dword ptr [EAX + 0x1c] */
            (*g_behPanel_00801678->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_behPanel_00801678),'\0');
          }
          if (g_sAMPanel_008016EC != nullptr) {
            /* ST_CALLSITE[004FA1FB]: CALL dword ptr [EDX + 0x1c] */
            (*g_sAMPanel_008016EC->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_sAMPanel_008016EC),'\0');
          }
          if (g_upgPanel_00802A48 != nullptr) {
            /* ST_CALLSITE[004FA20C]: CALL dword ptr [EAX + 0x1c] */
            (*g_upgPanel_00802A48->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_upgPanel_00802A48),'\0');
          }
          if (g_frmPanel_0080168C != nullptr) {
            /* ST_CALLSITE[004FA21D]: CALL dword ptr [EDX + 0x1c] */
            (*g_frmPanel_0080168C->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_frmPanel_0080168C),'\0');
          }
          if (g_helpPanel_00801690 != nullptr) {
            /* ST_CALLSITE[004FA22E]: CALL dword ptr [EAX + 0x18] */
            g_helpPanel_00801690->SetPanel('\0');
          }
          if (g_optPanel_008016DC != nullptr) {
            /* ST_CALLSITE[004FA23B]: CALL 0x00402630; direct=00402630 OptPanelTy::SwitchOptPanelOff */
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

      iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x40f,0,iVar3,
                                 st::mutable_c_string("%s"),"CPanelTy::SwitchCPanel");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x40f);
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
  uint uVar2;
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
    /* ST_CALLSITE[004FA45A]: CALL 0x00405dbc; direct=00405DBC CPanelTy::ShiftControls */
    st::fn_00405DBC(local_8,1,param_1);
    /* ST_CALLSITE[004FA464]: CALL 0x00405dbc; direct=00405DBC CPanelTy::ShiftControls */
    st::fn_00405DBC(this_00,0,param_1);
    puVar5 = this_00->field_09A4;
    iVar4 = 7;
    do {
      if (*puVar5 != 0) {
        st::fn_006E6080(this_00,2,*puVar5,reinterpret_cast<undefined4 *>(&this_00->field_0x18));
      }
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar5 = this_00->field_09C0;
    iVar4 = 2;
    do {
      if (*puVar5 != 0) {
        st::fn_006E6080(this_00,2,*puVar5,reinterpret_cast<undefined4 *>(&this_00->field_0x18));
      }
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x42b,0,iVar2,st::mutable_c_string("%s"),
                             "CPanelTy::ShiftControls");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x42b);
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

  local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(param_1 == 0));
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
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x452,0,iVar4,st::mutable_c_string("%s"),
                               "CPanelTy::ShiftControls");
    if (iVar3 == 0) {
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x452);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == 0) {
    if (local_8->field_09D0 != 0) {
      st::fn_006E6080(local_8,2,local_8->field_09D0,reinterpret_cast<undefined4 *>(&local_8->field_0x18));
    }
    puVar7 = this_00->field_0A15;
    iVar5 = 6;
    do {
      if (*puVar7 != 0) {
        st::fn_006E6080(this_00,2,*puVar7,reinterpret_cast<undefined4 *>(&this_00->field_0x18));
      }
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar7 = this_00->field_0B1F;
    iVar5 = 6;
    do {
      if (*puVar7 != 0) {
        st::fn_006E6080(this_00,2,*puVar7,reinterpret_cast<undefined4 *>(&this_00->field_0x18));
      }
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = this_00->field_0B37;
  }
  else {
    if (local_8->field_095C != 0) {
      st::fn_006E6080(local_8,2,local_8->field_095C,reinterpret_cast<undefined4 *>(&local_8->field_0x18));
    }
    puVar7 = this_00->field_0960;
    iVar5 = 4;
    do {
      if (*puVar7 != 0) {
        st::fn_006E6080(this_00,2,*puVar7,reinterpret_cast<undefined4 *>(&this_00->field_0x18));
      }
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = this_00->field_0970;
  }
  if (iVar5 != 0) {
    st::fn_006E6080(this_00,2,iVar5,reinterpret_cast<undefined4 *>(&this_00->field_0x18));
  }
  uVar8 = local_c & 0xff;
  if (this_00->field_09C0[uVar8] != 0) {
    st::fn_006E6080(this_00,2,this_00->field_09C0[uVar8],reinterpret_cast<undefined4 *>(&this_00->field_0x18));
  }
  iVar5 = *(int *)((int)this_00->field_0308 + uVar8 * 4 + -10);
  if (iVar5 != 0) {
    st::fn_006E6080(this_00,2,iVar5,reinterpret_cast<undefined4 *>(&this_00->field_0x18));
  }
  if (this_00->field_0308[uVar8] != 0) {
    st::fn_006E6080(this_00,2,this_00->field_0308[uVar8],reinterpret_cast<undefined4 *>(&this_00->field_0x18));
  }
  if (this_00->field_0310[uVar8] != 0) {
    st::fn_006E6080(this_00,2,this_00->field_0310[uVar8],reinterpret_cast<undefined4 *>(&this_00->field_0x18));
  }
  if (((char)local_c != '\0') && (this_00->field_0310[uVar8 + 1] != 0)) {
    st::fn_006E6080(this_00,2,this_00->field_0310[uVar8 + 1],reinterpret_cast<undefined4 *>(&this_00->field_0x18));
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
  int iVar4;
  int local_EAX_60;
  ushort *local_EAX_1162;
  ushort *puVar6;
  int local_EAX_2208;
  uint uVar5;
  int local_EAX_2734;
  LPSTR pCVar6;
  int iVar5;
  LPSTR text;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar8_mg2;
  uint *puVar7;
  ccFntTy *resourceString;
  uint uVar7;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar8_mg1;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar8;
  int local_EAX_9661;
  int iVar11;
  uint uVar8;
  dword dVar9;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_02;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_03;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_04;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_05;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_06;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_07;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_08;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_09;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_10;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_11;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_12;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_13;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_14;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_15;
  int iVar10;
  byte bVar11;
  short sVar12;
  ushort **ppuVar13;
  FrmPanelTy *pFVar14;
  short sVar15;
  byte *puVar16;
  int *piVar17;
  bool *pbVar18;
  bool local_ZF_8552;
  bool bVar14;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  ushort *puVar22;
  char *pcVar23;
  uint uVar24;
  char cVar25;
  UINT UVar26;
  int iVar27;
  code *pcVar28;
  STFnType_callback_004F3540_p5_e7706eff * pcVar28_callback_1536d7ef;
  STFnType_callback_004F3CF0_p6_2274987b * pcVar28_callback_d5f67fca;
  STFnType_callback_004F42A0_p6_b660cf6b * pcVar28_callback_802a15be;
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
  uint local_18;
  uint local_14;
  bool local_d;
  int *local_c;
  uint local_8;
  local_44 = this;

  iVar4 = st::fn_006E51B0(this->field_0010);
  this->field_0038 = iVar4;
  local_d0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d0;

  local_EAX_60 = st::fn_0072D7F0(local_d0.jumpBuffer,0);
  this_00 = local_44;
  if (local_EAX_60 != 0) {
    g_currentExceptionFrame = local_d0.previous;

    iVar11 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x75f,0,local_EAX_60,
                                st::mutable_c_string("%s"),"CPanelTy::GetMessage");
    if (iVar11 == 0) {
      st::fn_006A5E40(local_EAX_60,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel.cpp"),0x75f);
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
      piVar17 = static_cast<int *>((message->arg1).ptr);
      iVar4 = DAT_00806734;
      if (local_44->field_0138 != 0) {
        iVar4 = local_44->field_00A8;
      }
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)local_44->field_0194,0,
                   *piVar17 - local_44->field_0050,piVar17[1] - iVar4,piVar17[2],piVar17[3],
                   (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a);
      if (this_00->field_0BFC == '\0') {
        bVar11 = *(byte *)((SVar1 - 0xa56e) + (int)this_00);
        if (bVar11 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = bVar11 + 6;
        }
      }
      else {
        uVar5 = (uint)*(byte *)((SVar1 - 0xa56e) + (int)this_00);
      }
      iVar4 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar4 = this_00->field_00A8;
      }
      local_1c = (char *)(piVar17[1] - iVar4);
      /* ST_CALLSITE[004FD2DC]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredGlobalRecordView_0081175C;/int */
      pRVar8_mg2 = st::pointer_boundary_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0B17),uVar5));
      /* ST_CALLSITE[004FD2F5]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,*piVar17 - this_00->field_0050,
             (int)local_1c,'\x01',pRVar8_mg2);
      iVar4 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar4 = this_00->field_00A8;
      }

      st::fn_00710A90(this_00->field_01B8,this_00->field_0194,0,
                       (*piVar17 - this_00->field_0050) + 0x17,piVar17[1] - iVar4,piVar17[2] + -0x17
                       ,piVar17[3]);
      uVar5 = 2;
      iVar27 = -1;
      iVar4 = piVar17[2] + -0x17;
      iVar10 = 0;
      puVar19 = reinterpret_cast<uint *>(&DAT_007c2310);
      /* ST_CALLSITE[004FD364]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/uint; signature=__stdcall;pointer:/uint;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
      puVar7 = st::pointer_boundary_cast<uint *>(st::fn_006B0140(SVar1 - 0x6265,g_hINSTANCE_00807618));
      /* ST_CALLSITE[004FD371]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00540C40_D825DD02;pointer:/uint;pointer:/uint;/int */
      resourceString =
           st::pointer_boundary_cast<ccFntTy *>(st::fn_0040326F(reinterpret_cast<RecoveredRecord_00540C40_D825DD02 *>(this_00->field_01B8),puVar7,
                              puVar19,iVar4));

      st::fn_007119C0(this_00->field_01B8,reinterpret_cast<char *>(resourceString),iVar10,iVar27,uVar5);
      puVar22 = this_00->field_0148[5];
      if ((int)puVar22 < 0) break;
      uVar5 = this_00->field_00A8;
      uVar8 = this_00->field_0050;
      goto cf_common_exit_004FD606;
    case 0xb18f:
    case 0xb190:
    case 0xb191:
    case 0xb192:
    case 0xb193:
    case 0xb194:
      /* ST_CALLSITE[004FCE1F]: CALL 0x00403d7d; direct=00403D7D CPanelTy::sub_005050B0 */
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
        /* ST_CALLSITE[004FCE7D]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
        st::fn_00401E15(this_00,'\0',0);
      }
      pbVar18 = (bool *)((int)&local_8 + 2);
      this_00->field_012C = 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT13((char)iVar5,CONCAT12(2,(short)local_8));
      puVar21 = (undefined4 *)0x27;
      goto cf_common_exit_004FCF18;
    case 0xb19f:
    case 0xb1a0:
    case 0xb1a1:
    case 0xb1a2:
    case 0xb1a3:
    case 0xb1a4:
      piVar17 = static_cast<int *>((message->arg1).ptr);

      uVar7 = st::fn_00405259(local_44,(char)SVar1 + 0x61);
      iVar4 = DAT_00806734;
      if (this_00->field_0138 != 0) {
        iVar4 = this_00->field_00A8;
      }
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,
                   *piVar17 - this_00->field_0050,piVar17[1] - iVar4,piVar17[2],piVar17[3],
                   (-(DAT_0080874e != '\x03') & 0xfdU) + 0x3d);
      if (-1 < (int)uVar7) {
        if ((uVar7 == 0) || ((message->arg0).u32 == 0)) {
          iVar4 = 1;
        }
        else {
          iVar4 = 0;
        }
        iVar10 = piVar17[1];
        iVar27 = DAT_00806734;
        if (this_00->field_0138 != 0) {
          iVar27 = this_00->field_00A8;
        }
        /* ST_CALLSITE[004FD453]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredGlobalRecordView_0081175C;/int */
        pRVar8_mg1 = st::pointer_boundary_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_09D5),iVar4));
        /* ST_CALLSITE[004FD46B]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,*piVar17 - this_00->field_0050,
               iVar10 - iVar27,'\x01',pRVar8_mg1);
      }
      puVar22 = this_00->field_0148[5];
      if ((int)puVar22 < 0) break;
      uVar5 = this_00->field_00A8;
      uVar8 = this_00->field_0050;
      goto cf_common_exit_004FD606;
    case MESS_SHARED_B1FF:
    case 0xb20d:
      dVar9 = 0xffffffff;
      uVar3 = 0;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)local_44->field_0B1F + uVar3 + 0x83) != '\0') {
          dVar9 = dVar9 + 1;
        }
      } while ((dVar9 != (message->arg0).u32) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (uVar3 < 6) {
        /* ST_CALLSITE[004FCD08]: CALL 0x00401190; direct=00401190 CPanelTy::SetCmdBoat */
        st::fn_00401190(local_44,(byte)uVar3);
      }
      else {
        /* ST_CALLSITE[004FCCF6]: CALL 0x00401190; direct=00401190 CPanelTy::SetCmdBoat */
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
      pcVar28_callback_1536d7ef = st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_0052A320);
      iVar4 = 0;
      pcVar23 = st::fn_00405493(*(Global_sub_00529590_param_1Enum *)
                                    ((int)local_44->field_0B1F + uVar3 + 0x83),local_44->field_0B99);
      pCVar6 = st::fn_0040577C(pcVar23,iVar4);
      /* ST_CALLSITE[004FCFA4]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
      st::fn_004022D9(this_00,3,message,1,reinterpret_cast<char *>(pCVar6),pcVar28_callback_1536d7ef);
      break;
    case 0xb203:
    case 0xb20f:
      dVar9 = 0xffffffff;
      uVar3 = 0;
      do {
        if ((&local_44->field_0BFE)[uVar3] != '\0') {
          dVar9 = dVar9 + 1;
        }
      } while ((dVar9 != (message->arg0).u32) && (uVar3 = uVar3 + 1, uVar3 < 6));
      if (uVar3 < 6) {
        /* ST_CALLSITE[004FCD59]: CALL 0x00403206; direct=00403206 CPanelTy::SetCmdObj */
        st::fn_00403206(local_44,(byte)uVar3);
      }
      else {
        /* ST_CALLSITE[004FCD47]: CALL 0x00403206; direct=00403206 CPanelTy::SetCmdObj */
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
      pcVar28_callback_1536d7ef = st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_0052A320);
      iVar4 = 0;
      pcVar23 = st::fn_00405493((&local_44->field_0BFE)[uVar3],local_44->field_0BF5);
      pCVar6 = st::fn_0040577C(pcVar23,iVar4);
      /* ST_CALLSITE[004FD096]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
      st::fn_004022D9(this_00,5,message,1,reinterpret_cast<char *>(pCVar6),pcVar28_callback_1536d7ef);
      break;
    case MESS_BLDOBJPANELTY_B206:
      pcVar28_callback_802a15be = st::function_address_boundary_cast<STFnType_callback_004F42A0_p6_b660cf6b *>(st::fn_0052A7B0);
      pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_MFFRAMES"),0);
      text = st::fn_0040577C(st::mutable_c_string("BUT_MFTABS"),0);
      /* ST_CALLSITE[004FD148]: CALL 0x004047dc; direct=004047DC CPanelTy::PaintTab */
      st::fn_004047DC(this_00,5,message,1,reinterpret_cast<char *>(text),reinterpret_cast<char *>(pCVar6),pcVar28_callback_802a15be);
      break;
    case MESS_RESEARCHPANELTY_B207:
      local_44->field_09D4 = *(undefined1 *)(message->arg0).ptr;
      st::fn_00401889();
      break;
    case MESS_TRADEPANELTY_B20B:
      pcVar28_callback_802a15be = st::function_address_boundary_cast<STFnType_callback_004F42A0_p6_b660cf6b *>(st::fn_0052A7B0);
      /* ST_CALLSITE[004FD15E]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
      pcVar23 = st::pointer_boundary_cast<char *>(st::fn_0040577C(st::mutable_c_string("BUT_MFFRAMES"),0));
      /* ST_CALLSITE[004FD176]: CALL 0x004047dc; direct=004047DC CPanelTy::PaintTab */
      st::fn_004047DC(this_00,5,message,1,st::mutable_c_string("BUT_RCTTYPESI"),pcVar23,pcVar28_callback_802a15be);
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
      pcVar28_callback_1536d7ef = st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_0052A320);
      iVar4 = 0;
      pcVar23 = st::fn_00405493(*(Global_sub_00529590_param_1Enum *)
                                    ((int)local_44->field_0B1F + uVar3 + 0x83),local_44->field_0B99);
      pCVar6 = st::fn_0040577C(pcVar23,iVar4);
      /* ST_CALLSITE[004FD01D]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
      st::fn_004022D9(this_00,3,message,6,reinterpret_cast<char *>(pCVar6),pcVar28_callback_1536d7ef);
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
      pcVar28_callback_1536d7ef = st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_0052A320);
      iVar4 = 0;
      pcVar23 = st::fn_00405493((&local_44->field_0BFE)[uVar3],local_44->field_0BF5);
      pCVar6 = st::fn_0040577C(pcVar23,iVar4);
      /* ST_CALLSITE[004FD10F]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
      st::fn_004022D9(this_00,5,message,6,reinterpret_cast<char *>(pCVar6),pcVar28_callback_1536d7ef);
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
        /* ST_CALLSITE[004FCEEE]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
        st::fn_00401E15(local_44,'\0',0);
      }
      this_00->field_012C = 1;
      pbVar18 = &local_2d;
      local_2d = SUB41(message->id - 0xb211 >> 1,0);
      puVar21 = (undefined4 *)0x2a;
      goto cf_common_exit_004FCF18;
    case 0xb212:
    case 0xb216:
      switch(local_44->field_0BF5) {
      case CASE_5F:
        pcVar23 = st::mutable_c_string("BUT_TBDN");
LAB_004fd533:
        pcVar28_callback_1536d7ef = st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_00529FE0);
        pCVar6 = st::fn_0040577C(pcVar23,0);
        /* ST_CALLSITE[004FD546]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
        st::fn_004022D9(this_00,5,message,1,reinterpret_cast<char *>(pCVar6),pcVar28_callback_1536d7ef);
        break;
      case CASE_64:
      case CASE_65:
      case CASE_6D:
        /* ST_CALLSITE[004FD4D0]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
        st::fn_004022D9(local_44,5,message,1,st::mutable_c_string("BUT_MINUSSI"),st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_00529FE0));
      }
      break;
    case 0xb214:
    case 0xb218:
      switch(local_44->field_0BF5) {
      case CASE_5F:
        pcVar23 = st::mutable_c_string("BUT_TBUP");
        goto LAB_004fd533;
      case CASE_64:
      case CASE_65:
      case CASE_6D:
        /* ST_CALLSITE[004FD51D]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
        st::fn_004022D9(local_44,5,message,1,st::mutable_c_string("BUT_PLUSSI"),st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_00529FE0));
      }
      break;
    case 0xb21a:
    case 0xb21c:
      if (local_44->field_0BF5 != CASE_6D) break;
      local_c = (int *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
      piVar17 = static_cast<int *>((message->arg1).ptr);
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
      iVar4 = piVar17[1];
      iVar10 = DAT_00806734;
      if (local_44->field_0138 != 0) {
        iVar10 = local_44->field_00A8;
      }
      /* ST_CALLSITE[004FD5C8]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredGlobalRecordView_0081175C;/int */
      pRVar8 = st::pointer_boundary_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(local_44->field_09D5),
                            (uint)local_c & 0xff));
      /* ST_CALLSITE[004FD5E0]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0194,*piVar17 - this_00->field_0050,
             iVar4 - iVar10,'\x01',pRVar8);
      puVar22 = this_00->field_0148[5];
      if ((int)puVar22 < 0) break;
      uVar5 = this_00->field_00A8;
      uVar8 = this_00->field_0050;
cf_common_exit_004FD606:

      st::fn_006B3640
                (reinterpret_cast<int *>(g_ddxContext_008075A8),st::machine_word_boundary_cast<uint>(puVar22),0xffffffff,uVar8,uVar5);
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
        /* ST_CALLSITE[004FCDB2]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
        st::fn_00401E15(local_44,'\x01',0);
      }
      this_00->field_012C = 1;
      pbVar18 = local_8c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        pbVar18[0] = false;
        pbVar18[1] = false;
        pbVar18[2] = false;
        pbVar18[3] = false;
        pbVar18 = pbVar18 + 4;
      }
      *pbVar18 = false;
      pbVar18 = local_8c;
      local_6f = message->id - 0xb220;
      local_8c[0] = true;
      puVar21 = (undefined4 *)0x17;
      goto cf_common_exit_004FCF18;
    case 0xb230:
      cVar25 = local_44->field_0BCF;
      pcVar23 = st::mutable_c_string("BUT_BEHREPAIR0");
      goto cf_common_exit_004FD1D2;
    case 0xb231:
      pcVar23 = st::mutable_c_string("BUT_BEHREPAIR20");
      if (DAT_0080874e != '\x03') {
        pcVar23 = st::mutable_c_string("BUT_BEHREPAIR50");
      }
      cVar25 = local_44->field_0BD0;
      goto cf_common_exit_004FD1D2;
    case 0xb232:
      pcVar23 = st::mutable_c_string("BUT_BEHREPAIR50");
      if (DAT_0080874e != '\x03') {
        pcVar23 = st::mutable_c_string("BUT_BEHREPAIR80");
      }
      cVar25 = local_44->field_0BD1;
cf_common_exit_004FD1D2:
      local_ZF_8552 = cVar25 == '\x03';
      pCVar6 = st::fn_0040577C(pcVar23,0);
      /* ST_CALLSITE[004FD1F5]: CALL 0x0040168b; direct=0040168B CPanelTy::PaintBBut */
      st::fn_0040168B(this_00,3,message,((DAT_0080874e != '\x03') - 1U & 5) + 1,reinterpret_cast<char *>(pCVar6),local_ZF_8552);
      break;
    case 0xb233:
      bVar14 = local_44->field_0BD2 == '\x03';
      pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_BEHREPAIR80"),0);
      /* ST_CALLSITE[004FD224]: CALL 0x0040168b; direct=0040168B CPanelTy::PaintBBut */
      st::fn_0040168B(this_00,3,message,6,reinterpret_cast<char *>(pCVar6),bVar14);
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
      /* ST_CALLSITE[004FCC73]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
      st::fn_00401E15(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar18 = (bool *)((int)&local_14 + 2);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_14 = CONCAT13((char)message->id + 0x91,(int3)local_14) & 0xff00ffff;
    puVar21 = (undefined4 *)0x27;
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
          iVar4 = 0;
          local_44->field_0028 = 0xa209;
          local_44->field_0020 = 0x101;
          local_44->field_0024 = 3;

          st::fn_006E3B50
                    (reinterpret_cast<AppClassTy *>(&DAT_00807620),reinterpret_cast<undefined4 *>(&local_44->field_0x18));
          st::fn_00405E2F(0xae);
        }
      }
      goto cf_common_exit_004FD60B;
    }
    if (MESS_CPANELTY_B106 < SVar1) {
      switch(SVar1) {
      case 0xb107:
        pcVar28_callback_1536d7ef = st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_0052A3E0);
        pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_MAPSMIL"),0);
        /* ST_CALLSITE[004FC700]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
        st::fn_004022D9(this_00,4,message,6,reinterpret_cast<char *>(pCVar6),pcVar28_callback_1536d7ef);
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
            iVar4 = 0;
            local_44->field_0028 = 0xa206;
            local_44->field_0020 = 0x101;
            local_44->field_0024 = 3;

            st::fn_006E3B50
                      (reinterpret_cast<AppClassTy *>(&DAT_00807620),reinterpret_cast<undefined4 *>(&local_44->field_0x18));
            st::fn_00405E2F(0xae);
          }
        }
        break;
      case MESS_FRMPANELTY_B109:
        pcVar28 = st::function_address_boundary_cast<code *>(st::fn_0052A390);
        pcVar23 = st::mutable_c_string("BUT_MAPZIN");
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
            iVar4 = 0;
            local_44->field_0028 = 0xa207;
            local_44->field_0020 = 0x101;
            local_44->field_0024 = 3;

            st::fn_006E3B50
                      (reinterpret_cast<AppClassTy *>(&DAT_00807620),reinterpret_cast<undefined4 *>(&local_44->field_0x18));
            st::fn_00405E2F(0xae);
          }
        }
        break;
      case MESS_FRMPANELTY_B10B:
        pcVar28_callback_1536d7ef = st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_0052A390);
        pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_MAPZOUT"),0);
        /* ST_CALLSITE[004FC73A]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
        st::fn_004022D9(this_00,4,message,6,reinterpret_cast<char *>(pCVar6),pcVar28_callback_1536d7ef);
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
                      (reinterpret_cast<AppClassTy *>(&DAT_00807620),reinterpret_cast<undefined4 *>(&local_44->field_0x18));
            st::fn_00405E2F(0xae);
          }
        }
        break;
      case MESS_CPANELTY_B10D:
        pcVar28_callback_1536d7ef = st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_0052A390);
        pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_MAPTLFT"),0);
        /* ST_CALLSITE[004FC763]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
        st::fn_004022D9(this_00,4,message,6,reinterpret_cast<char *>(pCVar6),pcVar28_callback_1536d7ef);
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
        pcVar28 = st::function_address_boundary_cast<code *>(st::fn_0052A3E0);
        pcVar23 = st::mutable_c_string("BUT_MAPSCIV");
        goto cf_common_exit_004FBCF3;
      }
      local_8 = -1;
      local_c = (int *)0x1;
      if (local_44->field_023F == CASE_2) goto cf_common_exit_004FD60B;
      iVar4 = 0;
      uVar5 = (uint)(message->arg1).words.low;
      local_18 = (uint)(message->arg1).words.high;
      do {
        sVar15 = (short)iVar4;
        local_2c = (&local_44->field_003C)[sVar15];
        local_28 = (&local_44->field_0094)[sVar15];
        local_24 = (&local_44->field_0068)[sVar15];
        local_20 = (&local_44->field_00C0)[sVar15];
        if ((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
           (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        iVar10 = iVar4;
      } while ((!bVar2) && (iVar4 = iVar4 + 1, iVar10 = local_8, (short)iVar4 < 0xb));
      local_8 = iVar10;
      sVar15 = (short)local_8;
      iVar4 = (short)local_8;
      switch(iVar4) {
      case 0:
      case 2:
      case 10:
        if ((g_bldObjPanel_00801684 == nullptr) ||
           (g_bldObjPanel_00801684->field_0172 == CASE_2)) {
          piVar17 = (int *)0x1;
        }
        else {
          piVar17 = nullptr;
        }
        if ((g_behPanel_00801678 != nullptr) && (g_behPanel_00801678->field_0172 != 2)) {
          piVar17 = nullptr;
        }
        if ((g_sAMPanel_008016EC != nullptr) && (g_sAMPanel_008016EC->field_0172 != 2)) {
          piVar17 = nullptr;
        }
        pFVar14 = g_frmPanel_0080168C;
        if ((g_upgPanel_00802A48 != nullptr) && (g_upgPanel_00802A48->field_0172 != 2)) {
          piVar17 = nullptr;
        }
        break;
      default:
        piVar17 = local_c;
        goto LAB_004fbe73;
      case 6:
      case 8:
      case 9:
        if ((g_researchPanel_008016E8 == nullptr) ||
           (g_researchPanel_008016E8->field_0172 == CASE_2)) {
          piVar17 = (int *)0x1;
        }
        else {
          piVar17 = nullptr;
        }
        if ((g_bldBoatPanel_0080167C != nullptr) &&
           (g_bldBoatPanel_0080167C->field_0172 != CASE_2)) {
          piVar17 = nullptr;
        }
        if ((g_infocPanel_00801698 != nullptr) &&
           (g_infocPanel_00801698->field_0172 != 2)) {
          piVar17 = nullptr;
        }
        pFVar14 = reinterpret_cast<FrmPanelTy *>(g_bldLabPanel_00801680);
        if ((g_tradePanel_00802A44 != nullptr) &&
           (g_tradePanel_00802A44->field_0172 != 2)) {
          piVar17 = nullptr;
        }
      }
      if ((pFVar14 != nullptr) && (pFVar14->field_0172 != CASE_2)) {
        piVar17 = nullptr;
      }
LAB_004fbe73:
      local_14 = uVar5;
      if (piVar17 != nullptr) {
        switch(iVar4) {
        case 0:
        case 8:
          /* ST_CALLSITE[004FBE98]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
          st::fn_00401E15(local_44,(short)local_8 == 0,1);
          break;
        case 2:
        case 6:
          if (DAT_0080874e != '\x03') {
            local_1c = (char *)&local_44->field_0B63;
            if ((short)local_8 != 2) {
              local_1c = (char *)&local_44->field_0C51;
            }
            if ((*local_1c != '\0') &&
               ((((short)local_8 != 2 ||
                 ((((g_bldObjPanel_00801684 == nullptr ||
                    (g_bldObjPanel_00801684->field_0172 == CASE_2)) &&
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
                      (g_researchPanel_008016E8->field_0172 == CASE_2)) &&
                     ((g_bldBoatPanel_0080167C == nullptr ||
                      (g_bldBoatPanel_0080167C->field_0172 == CASE_2)))) &&
                    ((g_infocPanel_00801698 == nullptr ||
                     (g_infocPanel_00801698->field_0172 == 2)))) &&
                   ((g_tradePanel_00802A44 == nullptr ||
                    (g_tradePanel_00802A44->field_0172 == 2)))) &&
                  ((g_bldLabPanel_00801680 == nullptr ||
                   (g_bldLabPanel_00801680->field_0172 == CASE_2)))))))))) {
              local_2c = st::machine_word_boundary_cast<int>((&local_44->field_003C)[iVar4] + 7);
              local_24 = 0xe;
              local_20 = 0x1b;
              sVar12 = 0;
              do {
                local_28 = sVar12 * 0x1d + 6 + (&local_44->field_0094)[(short)local_8];
                if (((((int)uVar5 < local_2c) ||
                     ((&local_44->field_003C)[iVar4] + 0x15 <= (int)uVar5)) ||
                    ((int)local_18 < local_28)) || (local_28 + 0x1b <= (int)local_18)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  if (*local_1c == '\x01') {
                    if ((local_1c[sVar12 + 0x2a] == '\0') && (local_1c[2] == '\x01')) {
                      /* ST_CALLSITE[004FC0EF]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
                      st::fn_00401E15(local_44,(short)local_8 == 2,1);
                      /* ST_CALLSITE[004FC0FF]: CALL 0x00401ba9; direct=00401BA9 CPanelTy::SetNewDeep */
                      st::fn_00401BA9(this_00,sVar15 != 2,(byte)sVar12);
                    }
                  }
                  else {
                    /* ST_CALLSITE[004FC118]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
                    st::fn_00401E15(local_44,(short)local_8 == 2,1);
                    /* ST_CALLSITE[004FC128]: CALL 0x00401ba9; direct=00401BA9 CPanelTy::SetNewDeep */
                    st::fn_00401BA9(this_00,sVar15 != 2,(byte)sVar12);
                  }
                  break;
                }
                sVar12 = sVar12 + 1;
              } while (sVar12 < 5);
            }
          }
          break;
        case 3:
        case 5:
          if (DAT_0080874e == '\x03') {
            local_1c = (char *)&local_44->field_0B63;
            if ((short)local_8 != 3) {
              local_1c = (char *)&local_44->field_0C51;
            }
            bVar11 = 0xff;
            local_c = (int *)0xff;
            if (*local_1c != '\0') {
              if ((short)local_8 == 3) {
                if ((((((g_bldObjPanel_00801684 != nullptr) &&
                       (g_bldObjPanel_00801684->field_0172 != CASE_2)) ||
                      ((g_behPanel_00801678 != nullptr &&
                       (g_behPanel_00801678->field_0172 != 2)))) ||
                     ((g_sAMPanel_008016EC != nullptr &&
                      (g_sAMPanel_008016EC->field_0172 != 2)))) ||
                    ((g_upgPanel_00802A48 != nullptr &&
                     (g_upgPanel_00802A48->field_0172 != 2)))) ||
                   ((g_frmPanel_0080168C != nullptr &&
                    (g_frmPanel_0080168C->field_0172 != 2)))) break;
                iVar4 = local_44->field_00A0 + 0x40;
                if (((int)local_18 < iVar4) &&
                   (((local_44->field_00A0 + 10 < (int)local_18 &&
                     (iVar10 = (local_44->field_0048 + 0xb + iVar4) - uVar5, iVar10 < (int)local_18)
                     ) && ((int)local_18 < iVar10 + 0x21)))) {
                  bVar11 = 4 - (char)(st::storage_bit_cast<int>(static_cast<uint32_t>(iVar4 - local_18)) / 0xb);
                  local_c = (int *)(uint)bVar11;
                }
              }
              if ((short)local_8 == 5) {
                if (((((g_researchPanel_008016E8 != nullptr) &&
                      (g_researchPanel_008016E8->field_0172 != CASE_2)) ||
                     ((g_bldBoatPanel_0080167C != nullptr &&
                      (g_bldBoatPanel_0080167C->field_0172 != CASE_2)))) ||
                    ((g_infocPanel_00801698 != nullptr &&
                     (g_infocPanel_00801698->field_0172 != 2)))) ||
                   (((g_tradePanel_00802A44 != nullptr &&
                     (g_tradePanel_00802A44->field_0172 != 2)) ||
                    ((g_bldLabPanel_00801680 != nullptr &&
                     (g_bldLabPanel_00801680->field_0172 != CASE_2)))))) break;
                iVar4 = local_44->field_00A8 + 0xb;
                if ((iVar4 < (int)local_18) &&
                   ((((int)local_18 < local_44->field_00A8 + 0x41 &&
                     (iVar10 = (iVar4 - local_44->field_0050) + -0x87 + uVar5,
                     (int)local_18 < iVar10)) && (iVar10 + -0x21 < (int)local_18)))) {
                  uVar5 = st::storage_bit_cast<int>(static_cast<uint32_t>(local_18 - iVar4)) / 0xb;
                  bVar11 = (byte)uVar5;
                  local_c = (int *)(uVar5 & 0xff);
                }
              }
              piVar17 = local_c;
              if (bVar11 != 0xff) {
                if (*local_1c == '\x01') {
                  if ((((undefined1 *)((int)local_c + 0x2a))[(int)local_1c] == '\0') &&
                     (local_1c[2] == '\x01')) {
                    /* ST_CALLSITE[004FC32C]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
                    st::fn_00401E15(local_44,(short)local_8 == 3,1);
                    /* ST_CALLSITE[004FC33C]: CALL 0x00401ba9; direct=00401BA9 CPanelTy::SetNewDeep */
                    st::fn_00401BA9(this_00,sVar15 != 3,(byte)piVar17);
                  }
                }
                else {
                  /* ST_CALLSITE[004FC355]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
                  st::fn_00401E15(local_44,(short)local_8 == 3,1);
                  /* ST_CALLSITE[004FC368]: CALL 0x00401ba9; direct=00401BA9 CPanelTy::SetNewDeep */
                  st::fn_00401BA9(this_00,sVar15 != 3,(byte)local_c);
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
              iVar4 = 0;
              do {

                iVar10 = st::fn_004058F3('\x01',(Global_sub_004F19D0_param_2Enum)iVar4,reinterpret_cast<undefined4 *>(&local_2c),
                                            reinterpret_cast<undefined4 *>(&local_28));
                if (iVar10 != 0) {
                  local_2c = local_2c + this_00->field_0060;
                  local_28 = local_28 + this_00->field_00B8;
                  if (((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
                      ((int)local_18 < local_28)) || (local_20 + local_28 <= (int)local_18)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar10 = iVar4;
                  if (bVar2) break;
                }
                iVar4 = iVar4 + 1;
                iVar10 = local_8;
              } while ((short)iVar4 < 6);
              local_8 = iVar10;
              if (-1 < (short)local_8) {
                /* ST_CALLSITE[004FC522]: CALL 0x00401875; direct=00401875 STAllPlayersC::SetActivePanel */
                st::fn_00401875(g_allPlayers_007FA174,1,(short)local_8 + 1,1);
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
              iVar4 = 0;
              do {

                iVar10 = st::fn_004058F3('\0',(Global_sub_004F19D0_param_2Enum)iVar4,reinterpret_cast<undefined4 *>(&local_2c),
                                            reinterpret_cast<undefined4 *>(&local_28));
                if (iVar10 != 0) {
                  local_2c = local_2c + this_00->field_0064;
                  local_28 = local_28 + this_00->field_00BC;
                  if ((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
                     (((int)local_18 < local_28 || (local_20 + local_28 <= (int)local_18)))) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar10 = iVar4;
                  if (bVar2) break;
                }
                iVar4 = iVar4 + 1;
                iVar10 = local_8;
              } while ((short)iVar4 < 6);
              local_8 = iVar10;
              if (-1 < (short)local_8) {
                /* ST_CALLSITE[004FC445]: CALL 0x00401875; direct=00401875 STAllPlayersC::SetActivePanel */
                st::fn_00401875(g_allPlayers_007FA174,0,(short)local_8 + 1,1);
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
      local_40 = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_40)), (uint16_t)((message->arg1).words.high));
      if (local_44->field_023F == CASE_1) {
        local_c = &local_44->field_0204;
        local_18 = 0;
        local_3c = 5;
        do {
          piVar17 = nullptr;
          switch(local_18) {
          case 0:
          case 1:
            if (((((g_bldObjPanel_00801684 != nullptr) &&
                  (g_bldObjPanel_00801684->field_0172 == CASE_2)) &&
                 (g_behPanel_00801678 != nullptr)) &&
                (((g_behPanel_00801678->field_0172 == 2 &&
                  (g_upgPanel_00802A48 != nullptr)) &&
                 ((g_upgPanel_00802A48->field_0172 == 2 &&
                  ((g_frmPanel_0080168C != nullptr &&
                   (g_frmPanel_0080168C->field_0172 == 2)))))))) &&
               ((DAT_0080874e != '\x03' ||
                ((g_sAMPanel_008016EC != nullptr && (g_sAMPanel_008016EC->field_0172 == 2)
                 ))))) {
              piVar17 = local_c + 0x46;
            }
            break;
          case 3:
          case 4:
            if (((g_researchPanel_008016E8 != nullptr) &&
                (g_researchPanel_008016E8->field_0172 == CASE_2)) &&
               ((g_bldBoatPanel_0080167C != nullptr &&
                (((g_bldBoatPanel_0080167C->field_0172 == CASE_2 &&
                  (g_infocPanel_00801698 != nullptr)) &&
                 (g_infocPanel_00801698->field_0172 == 2)))))) {
              if (DAT_0080874e == '\x03') {
LAB_004fba8d:
                if ((g_bldLabPanel_00801680 != nullptr) &&
                   (g_bldLabPanel_00801680->field_0172 == CASE_2)) {
LAB_004fbaa0:
                  piVar17 = local_c;
                }
              }
              else if ((g_tradePanel_00802A44 != nullptr) &&
                      (g_tradePanel_00802A44->field_0172 == 2)) {
                if (DAT_0080874e == '\x03') goto LAB_004fba8d;
                goto LAB_004fbaa0;
              }
            }
          }
          if (piVar17 != nullptr) {
            piVar17 = piVar17 + 1;
            local_14 = 10;
            do {
              if (piVar17[5] != 0) {
                uVar5 = (uint)local_1c & 0xffff;
                uVar8 = local_40 & 0xffff;
                if (((((int)uVar5 < piVar17[-1]) || (piVar17[1] + piVar17[-1] <= (int)uVar5)) ||
                    ((int)uVar8 < *piVar17)) || (piVar17[2] + *piVar17 <= (int)uVar8)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if ((bVar2) &&
                   ((piVar17[3] == 0 ||

                    (local_EAX_2734 =
                          st::fn_006B55C0(piVar17[3],piVar17[4],uVar5 - piVar17[-1],uVar8 - *piVar17),
                    local_EAX_2734 != 0)))) {
                  local_8 = piVar17[5];
                }
              }
              piVar17 = piVar17 + 7;
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
          /* ST_CALLSITE[004FBB82]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
          g_cursorClass_00802A30->GetMessage((STMessage *)&this_00->field_0x18);
        }
        this_00->field_0144 = local_8;
        if (local_8 != 0) {
          this_00->field_0028 = 0x4201;
          *(undefined2 *)&this_00->field_0x2c = 0;
          *(undefined2 *)&this_00->field_0x2e = 2;
          this_00->field_0030 = this_00->field_0144;
          /* ST_CALLSITE[004FBBB7]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
          g_cursorClass_00802A30->GetMessage((STMessage *)&this_00->field_0x18);
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
            uVar8 = local_40 & 0xffff;
            if (((((int)uVar5 < local_2c) || (local_24 + local_2c <= (int)uVar5)) ||
                ((int)uVar8 < local_28)) || (local_20 + local_28 <= (int)uVar8)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {

              iVar4 = st::fn_006E68C0
                                (g_sT3DSMAPContext_00807598,(uVar5 - local_2c) + -5,
                                 (uVar8 - this_00->field_00A4) + -7,reinterpret_cast<int *>(&local_34),&local_38);
              if (this_00->field_013C != 0) {
                if (iVar4 == 0) {
                  this_00->field_013C = 0;
                }
                else {
                  st::fn_00402720(local_34,local_38);
                }
              }
              if ((this_00->field_0140 != 0) && (iVar4 == 0)) {
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
      /* ST_CALLSITE[004FB180]: CALL 0x00403062; direct=00403062 CPanelTy::PaintTV */
      st::fn_00403062(local_44);
      /* ST_CALLSITE[004FB187]: CALL 0x0040326a; direct=0040326A CPanelTy::PaintNewDeep */
      st::fn_0040326A(this_00);
      /* ST_CALLSITE[004FB18E]: CALL 0x00405231; direct=00405231 CPanelTy::PaintSMap */
      st::fn_00405231(this_00);
      /* ST_CALLSITE[004FB195]: CALL 0x00402775; direct=00402775 CPanelTy::PlayBrief */
      st::fn_00402775(this_00);
      bVar11 = 0;
      local_c = (int *)((uint)local_c & 0xffffff00);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar24 = extraout_EDX;
      do {
        uVar5 = (uint)local_c & 0xff;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)this_00->field_0B1F + uVar5 + 0x30) != '\0') {
          if (((bVar11 < 5) || (bVar11 == 0xd)) || (bVar11 == 0xe)) {
            switch(uVar5) {
            case 0:
              /* ST_CALLSITE[004FB2D5]: CALL 0x0040206d; direct=0040206D CPanelTy::Update1Panel */
              st::fn_0040206D(this_00);
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_11;
              break;
            case 1:
              st::fn_004044A3();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_12;
              break;
            case 3:
              st::fn_00401889();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_13;
              break;
            case 4:
              /* ST_CALLSITE[004FB2F0]: CALL 0x004025cc; direct=004025CC CPanelTy::Update5Panel */
              st::fn_004025CC(this_00);
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_14;
              break;
            case 0xd:
            case 0xe:
              /* ST_CALLSITE[004FB2FF]: CALL 0x0040415b; direct=0040415B CPanelTy::UpdateStackPanel */
              st::fn_0040415B(this_00,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(uVar24)), (uint8_t)(bVar11 - 0xd)));
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_15;
            }
          }
          else {
            if ((bVar11 == 5) && (g_researchPanel_008016E8 != nullptr)) {
              /* ST_CALLSITE[004FB1E3]: CALL dword ptr [EDX + 0x1c] */
              (*STField<code *>(g_researchPanel_008016E8->field_0000,0x001C))();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_00;
            }
            if ((bVar11 == 6) && (g_bldBoatPanel_0080167C != nullptr)) {
              /* ST_CALLSITE[004FB1F7]: CALL dword ptr [EAX + 0x1c] */
              (*STField<code *>(g_bldBoatPanel_0080167C->field_0000,0x001C))();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_01;
            }
            if ((bVar11 == 7) && (g_bldObjPanel_00801684 != nullptr)) {
              /* ST_CALLSITE[004FB20B]: CALL dword ptr [EDX + 0x1c] */
              (*STField<code *>(g_bldObjPanel_00801684->field_0000,0x001C))();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_02;
            }
            if ((bVar11 == 8) && (g_infocPanel_00801698 != nullptr)) {
              /* ST_CALLSITE[004FB21F]: CALL dword ptr [EAX + 0x20] */
              g_infocPanel_00801698->Update();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_03;
            }
            if ((bVar11 == 9) && (g_tradePanel_00802A44 != nullptr)) {
              /* ST_CALLSITE[004FB233]: CALL dword ptr [EDX + 0x20] */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)&g_tradePanel_00802A44->field_0000[1].field_0xc)();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_04;
            }
            if ((bVar11 == 10) && (g_behPanel_00801678 != nullptr)) {
              /* ST_CALLSITE[004FB247]: CALL dword ptr [EAX + 0x20] */
              g_behPanel_00801678->Update();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_05;
            }
            if ((bVar11 == 0xb) && (g_bldLabPanel_00801680 != nullptr)) {
              /* ST_CALLSITE[004FB25B]: CALL dword ptr [EDX + 0x1c] */
              (*STField<code *>(g_bldLabPanel_00801680->field_0000,0x001C))();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_06;
            }
            if ((bVar11 == 0xf) && (g_upgPanel_00802A48 != nullptr)) {
              /* ST_CALLSITE[004FB26F]: CALL dword ptr [EAX + 0x20] */
              g_upgPanel_00802A48->Update();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_07;
            }
            if ((bVar11 == 0x10) && (g_frmPanel_0080168C != nullptr)) {
              /* ST_CALLSITE[004FB283]: CALL dword ptr [EDX + 0x20] */
              g_frmPanel_0080168C->Update();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_08;
            }
            if ((bVar11 == 0x11) && (g_sAMPanel_008016EC != nullptr)) {
              /* ST_CALLSITE[004FB297]: CALL dword ptr [EAX + 0x20] */
              g_sAMPanel_008016EC->Update();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_09;
            }
            if ((bVar11 == 0x12) && (g_helpPanel_00801690 != nullptr)) {
              /* ST_CALLSITE[004FB2AB]: CALL 0x00402d38; direct=00402D38 HelpPanelTy::sub_00515180 */
              st::fn_00402D38(g_helpPanel_00801690,'\x06');
              /* ST_CALLSITE[004FB2B8]: CALL 0x00402d38; direct=00402D38 HelpPanelTy::sub_00515180 */
              st::fn_00402D38(g_helpPanel_00801690,'\x05');
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              uVar24 = extraout_EDX_10;
            }
          }
          *(undefined1 *)((int)this_00->field_0B1F + uVar5 + 0x30) = 0;
        }
        bVar11 = bVar11 + 1;
        local_c = (int *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar11));
      } while (bVar11 < 0x14);
      if (this_00->field_023F == CASE_3) {
        bVar2 = false;
        bVar11 = 0;
        piVar17 = &this_00->field_0094;
        do {
          iVar4 = this_00->field_0120 + -0x9b + this_00->field_0128;
          if ((bVar11 == 1) || (bVar11 == 7)) {
            iVar4 = iVar4 + this_00->field_00C0;
          }
          if (iVar4 < *piVar17) {
            *piVar17 = *piVar17 + -0xf;
          }
          iVar4 = this_00->field_0120 + -0x9b + this_00->field_0128;
          if ((bVar11 == 1) || (iVar10 = iVar4, bVar11 == 7)) {
            iVar10 = iVar4 + this_00->field_00C0;
          }
          if (*piVar17 <= iVar10) {
            if ((bVar11 == 1) || (bVar11 == 7)) {
              iVar4 = iVar4 + this_00->field_00C0;
            }
            *piVar17 = iVar4;
            bVar2 = true;
          }
          bVar11 = bVar11 + 1;
          piVar17 = piVar17 + 1;
        } while (bVar11 < 0xb);
        if (bVar2) {
          /* ST_CALLSITE[004FB49C]: CALL 0x00401b6d; direct=00401B6D OpticClassC::sub_004A9B60 */
          st::fn_00401B6D
                    (g_opticClass_007FB2A0,this_00->field_011C,this_00->field_0120,
                     this_00->field_0124,this_00->field_0128 + -0x9b);
          this_00->field_023F = CASE_5;
          if (DAT_0080731a == 0) {
            this_00->field_023F = CASE_1;
            /* ST_CALLSITE[004FB586]: CALL 0x00402ed2; direct=00402ED2 CPanelTy::ShiftControls */
            st::fn_00402ED2(this_00,1);
          }
          else {
            puVar16 = &this_00->field_02EC;
            piVar17 = &this_00->field_02EE;
            local_c = (int *)0x2;
            do {
              puVar21 = nullptr;
              iVar10 = 0;
              iVar4 = 1;
              bVar11 = 0;
              uVar5 = 6;
              pcVar23 = st::fn_00403607(nullptr,0);
              local_EAX_1162 =
                   st::fn_00709AF0
                             (PTR_00806794,CASE_1F,pcVar23,uVar5,bVar11,iVar4,iVar10,puVar21);
              piVar17[-3] = (int)local_EAX_1162;
              puVar16[-2] = (char)*local_EAX_1162;
              *puVar16 = 3;
              *piVar17 = this_00->field_0038;
              puVar16 = puVar16 + 1;
              piVar17 = piVar17 + 1;
              local_c = (int *)((int)local_c + -1);
            } while (local_c != nullptr);
            piVar17 = reinterpret_cast<int *>(&this_00->field_0D53);
            puVar16 = &this_00->field_0D47;
            local_8 = 2;
            do {
              local_c = (int *)0x6;
              do {
                puVar21 = nullptr;
                iVar10 = 0;
                iVar4 = 1;
                bVar11 = 0;
                uVar5 = 6;
                pcVar23 = st::fn_00403607(nullptr,0);
                puVar6 = st::fn_00709AF0
                                   (PTR_00806794,CASE_1F,pcVar23,uVar5,bVar11,iVar4,iVar10,puVar21);
                piVar17[-0x12] = (int)puVar6;
                puVar16[-0xc] = (char)*puVar6;
                *puVar16 = 3;
                *piVar17 = this_00->field_0038;
                piVar17 = piVar17 + 1;
                puVar16 = puVar16 + 1;
                local_c = (int *)((int)local_c + -1);
              } while (local_c != nullptr);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            local_c = nullptr;
            local_8 = 0;
          }
        }
        /* ST_CALLSITE[004FB591]: CALL 0x00403c5b; direct=00403C5B CursorClassTy::sub_0054B6D0 */
        st::fn_00403C5B(g_cursorClass_00802A30);
        bVar11 = 0;
        ppuVar13 = this_00->field_0148;
        do {
          if (-1 < (int)*ppuVar13) {

            st::fn_006B3640
                      (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)*ppuVar13,0xffffffff,(uint)ppuVar13[-0x43]
                       ,(uint)ppuVar13[-0x2d]);
          }
          bVar11 = bVar11 + 1;
          ppuVar13 = ppuVar13 + 1;
        } while (bVar11 < 0xb);
      }
      else if (this_00->field_023F == CASE_4) {
        bVar11 = 0;
        piVar17 = &this_00->field_0094;
        do {
          iVar4 = this_00->field_0120 + this_00->field_0128;
          if ((bVar11 == 1) || (bVar11 == 7)) {
            iVar4 = iVar4 + this_00->field_00C0;
          }
          if (*piVar17 < iVar4) {
            *piVar17 = *piVar17 + 0xf;
          }
          iVar4 = this_00->field_0120 + this_00->field_0128;
          if ((bVar11 == 1) || (iVar10 = iVar4, bVar11 == 7)) {
            iVar10 = iVar4 + this_00->field_00C0;
          }
          if (iVar10 <= *piVar17) {
            if ((bVar11 == 1) || (bVar11 == 7)) {
              iVar4 = iVar4 + this_00->field_00C0;
            }
            *piVar17 = iVar4;
            this_00->field_023F = CASE_2;
          }
          bVar11 = bVar11 + 1;
          piVar17 = piVar17 + 1;
        } while (bVar11 < 0xb);
        /* ST_CALLSITE[004FB3AF]: CALL 0x00403c5b; direct=00403C5B CursorClassTy::sub_0054B6D0 */
        st::fn_00403C5B(g_cursorClass_00802A30);
        bVar11 = 0;
        ppuVar13 = this_00->field_0148;
        do {
          if (-1 < (int)*ppuVar13) {

            st::fn_006B3640
                      (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)*ppuVar13,0xffffffff,(uint)ppuVar13[-0x43]
                       ,(uint)ppuVar13[-0x2d]);
          }
          bVar11 = bVar11 + 1;
          ppuVar13 = ppuVar13 + 1;
        } while (bVar11 < 0xb);
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
        uVar8 = this_00->field_00EC;
        uVar20 = this_00->field_0174;
LAB_004fb69f:

        st::fn_006B3640(reinterpret_cast<int *>(g_ddxContext_008075A8),uVar20,0xffffffff,uVar8,uVar5);
      }
      else if (DAT_0080c4d3 == 4) {
        if ((int)(this_00->field_0120 - this_00->field_00F8) < this_00->field_00F0) {
          this_00->field_00F0 = this_00->field_00F0 + -10;
        }
        iVar4 = this_00->field_0120 - this_00->field_00F8;
        if (this_00->field_00F0 <= iVar4) {
          this_00->field_00F0 = iVar4;
          DAT_0080c4d3 = 2;
        }
        uVar5 = this_00->field_00F0;
        uVar8 = this_00->field_00EC;
        uVar20 = this_00->field_0174;
        goto LAB_004fb69f;
      }
      switch(DAT_0080c4f7) {
      case 1:
        uVar5 = this_00->field_0094 - this_00->field_0118;
        if (this_00->field_0110 != uVar5) {
          this_00->field_0110 = uVar5;

          st::fn_006B3640
                    (reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_017C,0xffffffff,this_00->field_010C
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
                    (reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_017C,0xffffffff,this_00->field_010C
                     ,uVar5);
          uVar5 = this_00->field_0110 - this_00->field_0108;
          if (this_00->field_0100 != uVar5) goto LAB_004fb8d0;
        }
        break;
      case 3:
        if ((int)(this_00->field_0094 - this_00->field_0118) < this_00->field_0110) {
          this_00->field_0110 = this_00->field_0110 + -10;
        }
        iVar4 = this_00->field_0094 - this_00->field_0118;
        if (this_00->field_0110 <= iVar4) {
          this_00->field_0110 = iVar4;
          DAT_0080c4f7 = 1;
        }

        st::fn_006B3640
                  (reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_017C,0xffffffff,this_00->field_010C,
                   this_00->field_0110);
        if (DAT_0080c4f7 == 2) {
          st::fn_006B3AF0(reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_017C);
        }
        iVar4 = this_00->field_0110 - this_00->field_0108;
        if (iVar4 < this_00->field_0100) {
          this_00->field_0100 = this_00->field_0100 + -10;
        }
        if (this_00->field_0100 <= iVar4) {
          this_00->field_0100 = iVar4;
        }
        uVar5 = this_00->field_0100;
        uVar8 = this_00->field_00FC;
        uVar20 = this_00->field_0178;
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
                  (reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_017C,0xffffffff,this_00->field_010C,
                   this_00->field_0110);
        iVar4 = this_00->field_0110 - this_00->field_0108;
        if (this_00->field_0100 < iVar4) {
          this_00->field_0100 = this_00->field_0100 + 10;
        }
        if (iVar4 <= this_00->field_0100) {
          this_00->field_0100 = iVar4;
        }
        uVar5 = this_00->field_0100;
LAB_004fb8d7:
        uVar8 = this_00->field_00FC;
        uVar20 = this_00->field_0178;
LAB_004fb8ee:

        st::fn_006B3640(reinterpret_cast<int *>(g_ddxContext_008075A8),uVar20,0xffffffff,uVar8,uVar5);
      }

      local_EAX_2208 = st::fn_006B33F0(g_ddxContext_008075A8,this_00->field_0178);
      if ((local_EAX_2208 != 0) &&
         (this_00->field_0247 + this_00->field_0243 <= this_00->field_09A0)) {
        st::fn_006B3AF0(reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_0178);
      }
      break;
    case MESS_ID_CREATE:
      /* ST_CALLSITE[004FB114]: CALL 0x004014a1; direct=004014A1 CPanelTy::InitCPanel */
      st::fn_004014A1(local_44);
      break;
    case MESS_SHARED_0003:
      /* ST_CALLSITE[004FB120]: CALL 0x00404b42; direct=00404B42 CPanelTy::DoneCPanel */
      st::fn_00404B42(local_44);
      break;
    case MESS_SHARED_0005:
      ppuVar13 = local_44->field_0148;
      local_d = false;
      do {
        if (-1 < (int)*ppuVar13) {

          st::fn_006B3640
                    (reinterpret_cast<int *>(g_ddxContext_008075A8),(uint)*ppuVar13,0xffffffff,(uint)ppuVar13[-0x43],
                     (uint)ppuVar13[-0x2d]);
        }
        local_d = (bool)(local_d + 1);
        ppuVar13 = ppuVar13 + 1;
      } while (local_d < 0xb);
    }
    goto cf_common_exit_004FD60B;
  }
  switch(SVar1) {
  case 0xb10f:
    pcVar28_callback_1536d7ef = st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_0052A390);
    pcVar23 = st::mutable_c_string("BUT_MAPTRT");
cf_common_exit_004FBCF3:
    pCVar6 = st::fn_0040577C(pcVar23,0);
    /* ST_CALLSITE[004FBD06]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
    st::fn_004022D9(this_00,4,message,6,reinterpret_cast<char *>(pCVar6),pcVar28_callback_1536d7ef);
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
        cVar25 = '\x01';
LAB_004fc9c0:
        /* ST_CALLSITE[004FC9C2]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
        st::fn_00401E15(local_44,cVar25,0);
      }
    }
    else if (local_44->field_0C52 == '\0') {
      cVar25 = '\0';
      goto LAB_004fc9c0;
    }
    this_00->field_012C = 1;
    local_2e = (message->arg0).u32 == 3;
    pbVar18 = &local_2e;
    puVar21 = (undefined4 *)0x29;
    goto cf_common_exit_004FCF18;
  case MESS_CPANELTY_B110|MESS_ID_CREATE:
    pcVar28_callback_1536d7ef = st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_0052A030);
    pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_AIASS"),0);
    /* ST_CALLSITE[004FCC1A]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
    st::fn_004022D9(this_00,4,message,1,reinterpret_cast<char *>(pCVar6),pcVar28_callback_1536d7ef);
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
    pcVar28_callback_1536d7ef = st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_0052A3E0);
    pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_MAPDIR"),0);
    /* ST_CALLSITE[004FCBF1]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
    st::fn_004022D9(this_00,4,message,6,reinterpret_cast<char *>(pCVar6),pcVar28_callback_1536d7ef);
    break;
  case 0xb117:
    if (g_upgPanel_00802A48 != nullptr) {
      /* ST_CALLSITE[004FC814]: CALL dword ptr [EDX + 0x1c] */
      (*g_upgPanel_00802A48->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_upgPanel_00802A48),'\x01');
    }
    break;
  case MESS_CPANELTY_B110|MESS_SHARED_0008:
    pcVar28_callback_1536d7ef = st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_00529F90);
    if (DAT_0080874e != '\x03') {
      pcVar28_callback_1536d7ef = st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_00529FE0);
    }
    pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_SHOWUPD"),0);
    /* ST_CALLSITE[004FCB7E]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
    st::fn_004022D9(this_00,3,message,((DAT_0080874e != '\x03') - 1U & 5) + 1,reinterpret_cast<char *>(pCVar6),pcVar28_callback_1536d7ef);
    break;
  case MESS_CPANELTY_B110|MESS_CURSORCLASSTY_0009:
    if (g_frmPanel_0080168C != nullptr) {
      /* ST_CALLSITE[004FC82E]: CALL dword ptr [EAX + 0x1c] */
      (*g_frmPanel_0080168C->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_frmPanel_0080168C),'\x01');
    }
    break;
  case MESS_CPANELTY_B110|MESS_SYSTEMCLASSTY_000A:
    pcVar28_callback_1536d7ef = st::function_address_boundary_cast<STFnType_callback_004F3540_p5_e7706eff *>(st::fn_00529F90);
    pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_SHOWFRM"),0);
    /* ST_CALLSITE[004FCBB7]: CALL 0x004022d9; direct=004022D9 CPanelTy::PaintBut */
    st::fn_004022D9(this_00,3,message,((DAT_0080874e != '\x03') - 1U & 5) + 1,reinterpret_cast<char *>(pCVar6),pcVar28_callback_1536d7ef);
    break;
  case 0xb12a:
    pcVar28_callback_d5f67fca = st::function_address_boundary_cast<STFnType_callback_004F3CF0_p6_2274987b *>(st::fn_00529FE0);
    UVar26 = 0x274c;
    pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_SMALL"),0);
    /* ST_CALLSITE[004FCB08]: CALL 0x00405ea2; direct=00405EA2 CPanelTy::PaintTxtBut */
    st::fn_00405EA2(this_00,3,message,1,reinterpret_cast<char *>(pCVar6),UVar26,pcVar28_callback_d5f67fca);
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
      /* ST_CALLSITE[004FC885]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
      st::fn_00401E15(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar18 = local_68;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar18[0] = false;
      pbVar18[1] = false;
      pbVar18[2] = false;
      pbVar18[3] = false;
      pbVar18 = pbVar18 + 4;
    }
    *pbVar18 = false;
    if ((message->arg0).u32 == 3) {
      pbVar18 = local_68;
      local_68[0] = true;
      this_00->field_0C11 = CASE_1;
      puVar21 = (undefined4 *)0x17;
    }
    else {
      pbVar18 = local_68;
      local_68[0] = true;
      this_00->field_0C11 = CASE_0;
      puVar21 = (undefined4 *)0x17;
    }
    goto cf_common_exit_004FCF18;
  case 0xb12e:
    pcVar28 = st::function_address_boundary_cast<code *>(st::fn_0052A2D0);
    UVar26 = 0x3aa5;
    uVar24 = 0;
    iVar4 = 1;
    /* ST_CALLSITE[004FCABE]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int */
    pcVar23 = st::pointer_boundary_cast<char *>(st::fn_0040577C(st::mutable_c_string("BUT_AUTO"),0));
    pCVar6 = st::fn_006F2C00(pcVar23,iVar4,uVar24);
    /* ST_CALLSITE[004FCADA]: CALL 0x00405812; direct=00405812 CPanelTy::PaintTxtBut */
    st::fn_00405812(this_00,5,message,1,reinterpret_cast<char *>(pCVar6),UVar26,pcVar28);
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
      /* ST_CALLSITE[004FC92D]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
      st::fn_00401E15(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar18 = &local_d;
    local_d = (bool)((char)message->id - 0x2f);
    puVar21 = (undefined4 *)0x9;
    goto cf_common_exit_004FCF18;
  case 0xb13f:
    pcVar28_callback_d5f67fca = st::function_address_boundary_cast<STFnType_callback_004F3CF0_p6_2274987b *>(st::fn_00529FE0);
    UVar26 = 0x274c;
    pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_SMALL"),0);
    /* ST_CALLSITE[004FCB36]: CALL 0x00405ea2; direct=00405EA2 CPanelTy::PaintTxtBut */
    st::fn_00405EA2(this_00,5,message,1,reinterpret_cast<char *>(pCVar6),UVar26,pcVar28_callback_d5f67fca);
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
      /* ST_CALLSITE[004FCA7B]: CALL 0x00401e15; direct=00401E15 CPanelTy::sub_004F8020 */
      st::fn_00401E15(local_44,'\0',0);
    }
    this_00->field_012C = 1;
    pbVar18 = (bool *)((int)&local_18 + 2);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_18 = CONCAT13((char)message->id + 0xa1,CONCAT12(1,(undefined2)local_18));
    puVar21 = (undefined4 *)0x27;
cf_common_exit_004FCF18:
    /* ST_CALLSITE[004FCF1E]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
    st::fn_00403C33(g_playSystem_00802A38,puVar21,reinterpret_cast<uint *>(pbVar18),0,0xffffffff);
    st::fn_00405E2F(0xae);
  }
cf_common_exit_004FD60B:
  g_currentExceptionFrame = local_d0.previous;

  local_EAX_9661 = st::fn_006E5FD0(this_00,message);
  return local_EAX_9661;
}
