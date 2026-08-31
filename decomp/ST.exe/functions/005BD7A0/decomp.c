#include "../../pseudocode_runtime.h"


/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::InitMReport */

void __thiscall MReportTy::InitMReport(MReportTy *this,undefined1 param_1)

{
  uint uVar1;
  DArrayTy *pDVar2;
  int iVar4;
  CursorClassTy *this_00;
  cMf32 *pcVar6;
  int local_EAX_39;
  char *pcVar7;
  ushort *local_EAX_253;
  ushort *puVar5;
  ushort *local_EAX_368;
  ccFntTy *pcVar6_mg0;
  ccFntTy *pcVar8;
  int local_EAX_485;
  AnonPointee_MReportTy_0077 *pAVar7;
  int uVar8;
  void *pvVar9;
  int local_EAX_565;
  RecoveredSourceFamily_dibcopy *pRVar10;
  DArrayTy *pDVar10;
  int iVar3;
  int local_EAX_1185;
  HoloTy *pHVar11;
  RecoveredRecord_005AACB0_2533FD69 *pRVar12;
  uint uVar13;
  uint local_EAX_1943;
  int iVar21;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int *piVar17;
  DArrayTy **ppDVar18;
  MReportTy *this_01;
  uint *puVar19;
  char *pcVar21;
  byte bVar22;
  char cVar23;
  ushort *puVar24;
  int iVar25;
  uint local_6a4 [256];
  byte local_2a4 [516];
  InternalExceptionFrame local_a0;
  InternalExceptionFrame local_5c;
  MReportTy *local_18;
  cMf32 *local_14;
  uint local_10;
  DArrayTy **local_c;
  uint local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;

  local_EAX_39 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  if (local_EAX_39 != 0) {
    g_currentExceptionFrame = local_5c.previous;

    iVar21 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0xc6,0,local_EAX_39,
                                "%s","MReportTy::InitMReport");
    if (iVar21 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_39,0,"E:\\__titans\\Start\\rpt_obj.cpp",0xc6);
    return;
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {

      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
    /* ST_CALLSITE[005BD811]: CALL 0x00401055; direct=00401055 CursorClassTy::sub_00544940 */
    CursorClassTy::sub_00544940(g_cursorClass_00802A30);
  }
  /* ST_CALLSITE[005BD824]: CALL 0x00401d43; direct=00401D43 DarkScreen */
  DarkScreen(g_dDXContext_0080759C,1,0);
  /* ST_CALLSITE[005BD832]: CALL 0x0040590c; direct=0040590C StartSystemTy::sub_005DAF20 */
  StartSystemTy::sub_005DAF20(g_startSystem_0081176C);
  this_01 = local_18;
  DAT_0080877e = 1;
  DAT_0080877f = 0;
  local_18->field_0066 = param_1;
  if (DAT_0080874e == '\x01') {
    pcVar7 = &CHAR_W_007ca250;
  }
  else {
    pcVar7 = &CHAR_B_007ca248;
    if (DAT_0080874e != '\x02') {
      pcVar7 = &CHAR_S_007ca24c;
    }
  }
  /* ST_CALLSITE[005BD88A]: CALL dword ptr [0x0085bde8] */
  wsprintfA((LPSTR)&DAT_0080f33a,"REPORT_%s_%c",pcVar7,
            (int)(char)((-(DAT_0080c522 != 0) & 0xfbU) + 0x46));
  local_EAX_253 = FUN_0070a9f0(g_cMf32_00806780,(char *)&DAT_0080f33a,0,1);
  this_01->field_005D = local_EAX_253;

  FUN_006bc360(local_EAX_253,local_6a4,nullptr);
  g_startSystem_0081176C->field_0140 = 0x18;

  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&g_startSystem_0081176C->field_0x144);
  puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806784,CASE_B,"STATS",0xffffffff,0,1,0,nullptr);
  this_01->field_007F = puVar5;
  local_EAX_368 = FUN_0070aa50(g_cMf32_00806780,"RPT_IND",0,1);
  this_01->field_006F = local_EAX_368;
  /* ST_CALLSITE[005BD927]: CALL 0x004042a5; direct=004042A5 thunk_FUN_005defe0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/int;pointer:/undefined;/WinDef.h/BYTE */
  pcVar6_mg0 = thunk_FUN_005defe0((int)this_01->field_005D,nullptr,DAT_00807dd9);
  this_01->field_0083 = pcVar6_mg0;
  pcVar6_mg0->field_0058 = 1;
  pcVar6_mg0->field_005C = 0;
  pcVar8 = (ccFntTy *)thunk_FUN_005df290((int)this_01->field_005D,nullptr,DAT_00807dd9);
  this_01->field_0087 = pcVar8;
  g_startSystem_0081176C->field_0038 = (HDC__ *)pcVar8;
  /* ST_CALLSITE[005BD968]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/cMf32;pointer:/char;/byte */
  pcVar8 = ccFntTy::operator_new(0x19d,g_cMf32_00806780,"RPT_FNTN",0);
  this_01->field_008B = pcVar8;
  pcVar8->field_0058 = 1;
  pcVar8->field_005C = 0;
  iVar25 = 1;
  puVar24 = this_01->field_005D + 0x14;

  local_EAX_485 = FUN_006b4fe0(this_01->field_005D);
  /* ST_CALLSITE[005BD99C]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_MReportTy_0077; signature=__stdcall;pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_MReportTy_0077;/int;/int;/int;/uint;pointer:/undefined4;/int */
  pAVar7 = FUN_006b50c0(0x91,0x28,(uint)this_01->field_005D[7],local_EAX_485,(undefined4 *)puVar24,
                        iVar25);
  this_01->field_0077 = pAVar7;
  iVar25 = 1;
  puVar24 = this_01->field_005D + 0x14;

  uVar8 = FUN_006b4fe0(this_01->field_005D);

  pvVar9 = STPointerBoundaryCast<void *>(FUN_006b50c0(300,0x1e,(uint)this_01->field_005D[7],uVar8,(undefined4 *)puVar24,
                                iVar25));
  this_01->field_007B = pvVar9;
  iVar25 = 1;
  puVar24 = this_01->field_005D + 0x14;

  local_EAX_565 = FUN_006b4fe0(this_01->field_005D);
  pRVar10 = STPointerBoundaryCast<RecoveredSourceFamily_dibcopy *>(FUN_006b50c0(0x2e9,0x15e,(uint)this_01->field_005D[7],local_EAX_565,
                         (undefined4 *)puVar24,iVar25));
  this_01->field_0073 = (AnonPointee_MReportTy_0073 *)pRVar10;
  FUN_006b4170(pRVar10,0,0,0,0x2e9,0x15e,0xff);
  FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)this_01->field_0073,0,0x2d,0,700,0x15e,0x18,0xd);

  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&this_01->field_00A3);

  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x2e,0x10,(undefined4 *)&this_01->field_0x1a3);
  memset(&this_01->field_0x2c7, 0, 0x80); /* compiler bulk-zero initialization */
  STPiece<0,2>(uVar1) = this_01->field_0008;
  STPiece<2,2>(uVar1) = this_01->field_000A;
  this_01->field_0323 = (MReportTy *)&this_01->field_00A3;
  pcVar8 = this_01->field_0087;
  this_01->field_02EF = uVar1;
  this_01->field_02CF = uVar1;
  this_01->field_02F3 = 2;
  this_01->field_02D3 = 2;
  this_01->field_0313 = this_01->field_005D;
  this_01->field_031B = 0x18;
  this_01->field_0317 = 0x4c;
  if (pcVar8->field_00A0 != 0) {
    FUN_00710790((RecoveredRecordView_00710790_7768A573 *)pcVar8);
  }
  this_01->field_030B = *(undefined4 *)&pcVar8->field_0x8a;
  if (this_01->field_0066 == '\x01') {
    local_14 = nullptr;
    ppDVar18 = &this_01->field_0347;
    iVar25 = 3;
    do {
      pDVar10 = Library::DKW::TBL::DArrayCreate(nullptr,0x18,4,0x18);
      *ppDVar18 = pDVar10;
      ppDVar18 = ppDVar18 + 1;
      iVar25 = iVar25 + -1;
    } while (iVar25 != 0);
    /* ST_CALLSITE[005BDB31]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s\\%s",&CHAR_00h_00807680,PTR_s_SAVEGAME__0079c0d4,
              &CHAR_00h_00807ddd,PTR_s_PL_LOG_0079c0d8);
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;

    iVar3 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0);
    if (iVar3 == 0) {

      local_14 = STPointerBoundaryCast<cMf32 *>(Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0));
    }
    pcVar6 = local_14;
    this_01 = local_18;
    g_currentExceptionFrame = local_a0.previous;
    if (local_14 != nullptr) {
      memset((void *)local_2a4, 0, 0x201); /* compiler bulk-zero initialization */
      uVar14 = 0xffffffff;
      local_2a4[0] = 0xc;
      pcVar7 = PTR_DAT_0079c0dc;
      do {
        pcVar21 = pcVar7;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar21 = pcVar7 + 1;
        cVar23 = *pcVar7;
        pcVar7 = pcVar21;
      } while (cVar23 != '\0');
      uVar14 = ~uVar14;
      pcVar7 = pcVar21 + -uVar14;
      ppDVar18 = (DArrayTy **)(local_2a4 + 1);
      memmove(ppDVar18, pcVar7, uVar14); /* compiler REP MOVS byte copy */
      local_c = (DArrayTy **)(local_2a4 + 1);
      cMf32::ToBeg(pcVar6,FUN_006f2d10,local_2a4);
      pcVar6 = local_14;

      pcVar7 = STPointerBoundaryCast<char *>(cMf32::RecNameGetNext(local_14));
      while (pcVar7 != nullptr) {
        local_10 = 0;
        local_c = nullptr;
        /* ST_CALLSITE[005BDC2D]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",PTR_DAT_0079c0dc,"%01d%02d");

        local_EAX_1185 = Library::MSVCRT::FUN_0072ee80(pcVar7,(byte *)&DAT_0080f33a);
        if (((local_EAX_1185 == 2) && (local_10 != 0)) && (local_10 < 4)) {

          Library::DKW::TBL::DArrayAppend
                    (*(DArrayTy **)(&this_01->field_0x343 + local_10 * 4),&local_c);
        }

        pcVar7 = STPointerBoundaryCast<char *>(cMf32::RecNameGetNext(pcVar6));
      }
      cMf32::delete(pcVar6);
    }
    do {
      local_c = &this_01->field_0347;
      local_8 = 0;
      local_10 = 3;
      do {
        uVar14 = 0;
        if ((*local_c)->count != 1 && -1 < (int)((*local_c)->count - 1)) {
          do {
            pDVar2 = *local_c;
            if (uVar14 < pDVar2->count) {
              puVar19 = DArrayAt<uint>(pDVar2, uVar14);
            }
            else {
              puVar19 = nullptr;
            }
            uVar15 = uVar14 + 1;
            if (uVar15 < pDVar2->count) {
              puVar16 = DArrayAt<uint>(pDVar2, uVar15);
            }
            else {
              puVar16 = nullptr;
            }
            if (*puVar16 < *puVar19) {

              FUN_006b0cd0((RecoveredRecordView_00413AF0_B98DB3AE *)pDVar2,uVar14,uVar15);
              local_8 = 1;
            }
            uVar14 = uVar15;
          } while ((int)uVar15 < (int)((*local_c)->count - 1));
        }
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    } while (local_8 != 0);
    iVar25 = 2;
    piVar17 = &this_01->field_034F;
    do {
      if (*(int *)(*piVar17 + 0xc) != 0) {
        this_01->field_006A = (char)iVar25;
      }
      iVar25 = iVar25 + -1;
      piVar17 = piVar17 + -1;
    } while (-1 < iVar25);
    local_10 = 0;
  }
  else {
    if (DAT_008067a0 != '\0') {
      /* ST_CALLSITE[005BDD49]: CALL dword ptr [0x0085c060] */
      CFsgsConnection::GameResult((CFsgsConnection *)&DAT_00802a90,2 - (DAT_0080c522 != 0));
    }
    this_01->field_0067 = 1;
  }
  if (g_startSystem_0081176C->field_02E6 != nullptr) {
    /* ST_CALLSITE[005BDD6D]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
    MMsgTy::HidePanel(g_startSystem_0081176C->field_02E6,0,0,1);
  }
  /* ST_CALLSITE[005BDD76]: CALL 0x0040126c; direct=0040126C MReportTy::SetCtrl */
  SetCtrl(this_01,0);
  /* ST_CALLSITE[005BDD84]: CALL 0x00403738; direct=00403738 PutDDX */
  PutDDX(0,0,'\x01',(BITMAPINFO *)this_01->field_005D);
  local_8 = 0xffffffff;

  FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0x2bd,0x15e,
               (ushort *)&g_startSystem_0081176C->field_0140);

  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x47,0x46);
  pHVar11 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar11 == nullptr) {
    pHVar11 = nullptr;
  }
  else {
    pHVar11->field_0002 = 1;
    pHVar11->field_0000 = 0;
    *(undefined4 *)&pHVar11->field_0x3 = 0xffffffff;
    pHVar11->field_0001 = CASE_2;
    pHVar11->field_0007 = nullptr;
    pHVar11->field_000B = nullptr;
    pHVar11->field_000F = 0;
    *(undefined4 *)&pHVar11->field_0x1b = 1;
    pHVar11->field_0013 = 1;
    pHVar11->field_0017 = -1;
    pHVar11->field_0027 = 0;
    pHVar11->field_0023 = 0;
    pHVar11->field_002F = 1;
    pHVar11->field_002B = 1;
  }
  this_01->field_0453 = pHVar11;
  if (pHVar11 != nullptr) {
    uVar14 = 0;
    cVar23 = '\x01';
    bVar22 = 0x10;
    iVar25 = 1;
    /* ST_CALLSITE[005BDE36]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
    pRVar12 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x47,0x46,0x2bd,0x15e);
    /* ST_CALLSITE[005BDE48]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
    uVar13 = HoloTy::Init(this_01->field_0453,CASE_2,0x47,0x46,pRVar12,iVar25,bVar22,cVar23,uVar14);
    if (uVar13 != 0) {
      pHVar11 = this_01->field_0453;
      pHVar11->field_0002 = 1;
      pHVar11->field_0017 = pHVar11->field_0013;
      uVar14 = *(uint *)&this_01->field_0453->field_0x3;
      if (-1 < (int)uVar14) {
        FUN_006b3af0((int *)g_ddxContext_008075A8,uVar14);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
    local_8 = 0xffffffff;
  }

  FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x401217,0x2e9,0x32,(ushort *)this_01);

  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x1a,10);
  pHVar11 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar11 == nullptr) {
    pHVar11 = nullptr;
  }
  else {
    pHVar11->field_0002 = 1;
    pHVar11->field_0000 = 0;
    *(undefined4 *)&pHVar11->field_0x3 = 0xffffffff;
    pHVar11->field_0001 = CASE_2;
    pHVar11->field_0007 = nullptr;
    pHVar11->field_000B = nullptr;
    pHVar11->field_000F = 0;
    *(undefined4 *)&pHVar11->field_0x1b = 1;
    pHVar11->field_0013 = 1;
    pHVar11->field_0017 = -1;
    pHVar11->field_0027 = 0;
    pHVar11->field_0023 = 0;
    pHVar11->field_002F = 1;
    pHVar11->field_002B = 1;
  }
  this_01->field_0457 = pHVar11;
  if (pHVar11 != nullptr) {
    uVar14 = 0;
    cVar23 = '\x01';
    bVar22 = 0x10;
    iVar25 = 1;
    /* ST_CALLSITE[005BDF25]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
    pRVar12 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x1a,10,0x2e9,0x32);
    /* ST_CALLSITE[005BDF37]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
    local_EAX_1943 =
         HoloTy::Init(this_01->field_0457,CASE_3,0x1a,10,pRVar12,iVar25,bVar22,cVar23,uVar14);
    if (local_EAX_1943 != 0) {
      pHVar11 = this_01->field_0457;
      pHVar11->field_0002 = 1;
      pHVar11->field_0017 = pHVar11->field_0013;
      uVar14 = *(uint *)&this_01->field_0457->field_0x3;
      if (-1 < (int)uVar14) {
        FUN_006b3af0((int *)g_ddxContext_008075A8,uVar14);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
  }
  this_01->field_0065 = 3;
  thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                     this_01->field_005D,10,2);
  pHVar11 = this_01->field_0457;
  if (((pHVar11 != nullptr) && (pHVar11->field_0000 != '\0')) &&
     (-1 < (int)*(uint *)&pHVar11->field_0x3)) {

    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar11->field_0x3);
  }
  pHVar11 = this_01->field_0453;
  if (((pHVar11 != nullptr) && (pHVar11->field_0000 != '\0')) &&
     (-1 < (int)*(uint *)&pHVar11->field_0x3)) {

    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar11->field_0x3);
  }
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != nullptr) {
    iVar25 = g_cursorClass_00802A30->field_00C9;
    iVar4 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_3;
    this_00->field_0494 = 0xffff;
    /* ST_CALLSITE[005BE015]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
    CursorClassTy::SetGCType(this_00,CASE_0,iVar4,iVar25);
    /* ST_CALLSITE[005BE02A]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  thunk_FUN_00568bc0(&g_sound,0);
  if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
    SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0056A130::thunk_FUN_0056a130
              ((RecoveredReceiver_0056A130 *)&g_sound,0x14,'\x02',0,nullptr);
  }
  g_currentExceptionFrame = local_5c.previous;
  return;
}

