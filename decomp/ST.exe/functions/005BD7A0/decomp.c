#include "../../pseudocode_runtime.h"


/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::InitMReport */

void __thiscall MReportTy::InitMReport(MReportTy *this,undefined1 param_1)

{
  uint uVar1;
  DArrayTy *pDVar2;
  CursorClassTy *this_00;
  cMf32 *pcVar4;
  int local_EAX_39;
  char *pcVar5;
  ushort *local_EAX_253;
  ushort *puVar5;
  ushort *local_EAX_368;
  ccFntTy *pcVar6;
  int local_EAX_485;
  AnonPointee_MReportTy_0077 *pAVar7;
  int uVar8;
  void *pvVar8;
  int local_EAX_565;
  RecoveredSourceFamily_dibcopy *pRVar9;
  DArrayTy *pDVar10;
  int iVar3;
  int local_EAX_1185;
  HoloTy *pHVar10;
  uint uVar13;
  uint local_EAX_1943;
  int iVar21;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  DArrayTy **ppDVar15;
  MReportTy *this_01;
  uint *puVar16;
  char *pcVar18;
  int iVar19;
  byte bVar20;
  char cVar21;
  ushort *puVar22;
  int iVar23;
  undefined4 local_6a4 [256];
  undefined1 local_2a4 [516];
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
    pcVar5 = &CHAR_W_007ca250;
  }
  else {
    pcVar5 = &CHAR_B_007ca248;
    if (DAT_0080874e != '\x02') {
      pcVar5 = &CHAR_S_007ca24c;
    }
  }
  /* ST_CALLSITE[005BD88A]: CALL dword ptr [0x0085bde8] */
  wsprintfA((LPSTR)&DAT_0080f33a,"REPORT_%s_%c",pcVar5,
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
  pcVar6 = (ccFntTy *)thunk_FUN_005defe0((int)this_01->field_005D,nullptr,DAT_00807dd9);
  this_01->field_0083 = pcVar6;
  pcVar6->field_0058 = 1;
  pcVar6->field_005C = 0;
  pcVar6 = (ccFntTy *)thunk_FUN_005df290((int)this_01->field_005D,nullptr,DAT_00807dd9);
  this_01->field_0087 = pcVar6;
  g_startSystem_0081176C->field_0038 = (HDC__ *)pcVar6;
  /* ST_CALLSITE[005BD968]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new */
  pcVar6 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806780,"RPT_FNTN",0);
  this_01->field_008B = pcVar6;
  pcVar6->field_0058 = 1;
  pcVar6->field_005C = 0;
  iVar23 = 1;
  puVar22 = this_01->field_005D + 0x14;
  local_EAX_485 = FUN_006b4fe0(this_01->field_005D);
  pAVar7 = (AnonPointee_MReportTy_0077 *)
           FUN_006b50c0(0x91,0x28,(uint)this_01->field_005D[7],local_EAX_485,(undefined4 *)puVar22,
                        iVar23);
  this_01->field_0077 = pAVar7;
  iVar23 = 1;
  puVar22 = this_01->field_005D + 0x14;
  uVar8 = FUN_006b4fe0(this_01->field_005D);
  pvVar8 = (void *)FUN_006b50c0(300,0x1e,(uint)this_01->field_005D[7],uVar8,(undefined4 *)puVar22,
                                iVar23);
  this_01->field_007B = pvVar8;
  iVar23 = 1;
  puVar22 = this_01->field_005D + 0x14;
  local_EAX_565 = FUN_006b4fe0(this_01->field_005D);
  pRVar9 = (RecoveredSourceFamily_dibcopy *)
           FUN_006b50c0(0x2e9,0x15e,(uint)this_01->field_005D[7],local_EAX_565,(undefined4 *)puVar22
                        ,iVar23);
  this_01->field_0073 = (AnonPointee_MReportTy_0073 *)pRVar9;
  FUN_006b4170(pRVar9,0,0,0,0x2e9,0x15e,0xff);
  FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)this_01->field_0073,0,0x2d,0,700,0x15e,0x18,0xd);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&this_01->field_00A3);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x2e,0x10,(undefined4 *)&this_01->field_0x1a3);
  memset(&this_01->field_0x2c7, 0, 0x80); /* compiler bulk-zero initialization */
  STPiece<0,2>(uVar1) = this_01->field_0008;
  STPiece<2,2>(uVar1) = this_01->field_000A;
  this_01->field_0323 = (MReportTy *)&this_01->field_00A3;
  pcVar6 = this_01->field_0087;
  this_01->field_02EF = uVar1;
  this_01->field_02CF = uVar1;
  this_01->field_02F3 = 2;
  this_01->field_02D3 = 2;
  this_01->field_0313 = this_01->field_005D;
  this_01->field_031B = 0x18;
  this_01->field_0317 = 0x4c;
  if (pcVar6->field_00A0 != 0) {
    FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar6);
  }
  this_01->field_030B = *(undefined4 *)&pcVar6->field_0x8a;
  if (this_01->field_0066 == '\x01') {
    local_14 = nullptr;
    ppDVar15 = &this_01->field_0347;
    iVar23 = 3;
    do {
      pDVar10 = Library::DKW::TBL::DArrayCreate(nullptr,0x18,4,0x18);
      *ppDVar15 = pDVar10;
      ppDVar15 = ppDVar15 + 1;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
    /* ST_CALLSITE[005BDB31]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s\\%s",&CHAR_00h_00807680,PTR_s_SAVEGAME__0079c0d4,
              &CHAR_00h_00807ddd,PTR_s_PL_LOG_0079c0d8);
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;
    iVar3 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0);
    if (iVar3 == 0) {
      local_14 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
    }
    pcVar4 = local_14;
    this_01 = local_18;
    g_currentExceptionFrame = local_a0.previous;
    if (local_14 != nullptr) {
      memset((void *)local_2a4, 0, 0x201); /* compiler bulk-zero initialization */
      uVar11 = 0xffffffff;
      local_2a4[0] = 0xc;
      pcVar5 = PTR_DAT_0079c0dc;
      do {
        pcVar18 = pcVar5;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar18 = pcVar5 + 1;
        cVar21 = *pcVar5;
        pcVar5 = pcVar18;
      } while (cVar21 != '\0');
      uVar11 = ~uVar11;
      pcVar5 = pcVar18 + -uVar11;
      ppDVar15 = (DArrayTy **)(local_2a4 + 1);
      memmove(ppDVar15, pcVar5, uVar11); /* compiler REP MOVS byte copy */
      local_c = (DArrayTy **)(local_2a4 + 1);
      cMf32::ToBeg(pcVar4,FUN_006f2d10,local_2a4);
      pcVar4 = local_14;
      pcVar5 = (char *)cMf32::RecNameGetNext(local_14);
      while (pcVar5 != nullptr) {
        local_10 = 0;
        local_c = nullptr;
        /* ST_CALLSITE[005BDC2D]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",PTR_DAT_0079c0dc,"%01d%02d");
        local_EAX_1185 = Library::MSVCRT::FUN_0072ee80(pcVar5,(byte *)&DAT_0080f33a);
        if (((local_EAX_1185 == 2) && (local_10 != 0)) && (local_10 < 4)) {
          Library::DKW::TBL::DArrayAppend
                    (*(DArrayTy **)(&this_01->field_0x343 + local_10 * 4),&local_c);
        }
        pcVar5 = (char *)cMf32::RecNameGetNext(pcVar4);
      }
      cMf32::delete(pcVar4);
    }
    do {
      local_c = &this_01->field_0347;
      local_8 = 0;
      local_10 = 3;
      do {
        uVar11 = 0;
        if ((*local_c)->count != 1 && -1 < (int)((*local_c)->count - 1)) {
          do {
            pDVar2 = *local_c;
            if (uVar11 < pDVar2->count) {
              puVar16 = DArrayAt<uint>(pDVar2, uVar11);
            }
            else {
              puVar16 = nullptr;
            }
            uVar12 = uVar11 + 1;
            if (uVar12 < pDVar2->count) {
              puVar13 = DArrayAt<uint>(pDVar2, uVar12);
            }
            else {
              puVar13 = nullptr;
            }
            if (*puVar13 < *puVar16) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)pDVar2,uVar11,uVar12);
              local_8 = 1;
            }
            uVar11 = uVar12;
          } while ((int)uVar12 < (int)((*local_c)->count - 1));
        }
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    } while (local_8 != 0);
    iVar23 = 2;
    piVar14 = &this_01->field_034F;
    do {
      if (*(int *)(*piVar14 + 0xc) != 0) {
        this_01->field_006A = (char)iVar23;
      }
      iVar23 = iVar23 + -1;
      piVar14 = piVar14 + -1;
    } while (-1 < iVar23);
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
  pHVar10 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar10 == nullptr) {
    pHVar10 = nullptr;
  }
  else {
    pHVar10->field_0002 = 1;
    pHVar10->field_0000 = 0;
    *(undefined4 *)&pHVar10->field_0x3 = 0xffffffff;
    pHVar10->field_0001 = CASE_2;
    pHVar10->field_0007 = nullptr;
    pHVar10->field_000B = nullptr;
    pHVar10->field_000F = 0;
    *(undefined4 *)&pHVar10->field_0x1b = 1;
    pHVar10->field_0013 = 1;
    pHVar10->field_0017 = -1;
    pHVar10->field_0027 = 0;
    pHVar10->field_0023 = 0;
    pHVar10->field_002F = 1;
    pHVar10->field_002B = 1;
  }
  this_01->field_0453 = pHVar10;
  if (pHVar10 != nullptr) {
    uVar11 = 0;
    cVar21 = '\x01';
    bVar20 = 0x10;
    iVar19 = 1;
    iVar23 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x47,0x46,0x2bd,0x15e);
    /* ST_CALLSITE[005BDE48]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
    uVar13 = HoloTy::Init(this_01->field_0453,CASE_2,0x47,0x46,iVar23,iVar19,bVar20,cVar21,uVar11);
    if (uVar13 != 0) {
      pHVar10 = this_01->field_0453;
      pHVar10->field_0002 = 1;
      pHVar10->field_0017 = pHVar10->field_0013;
      uVar11 = *(uint *)&this_01->field_0453->field_0x3;
      if (-1 < (int)uVar11) {
        FUN_006b3af0((int *)g_ddxContext_008075A8,uVar11);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
    local_8 = 0xffffffff;
  }
  FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x401217,0x2e9,0x32,(ushort *)this_01);
  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x1a,10);
  pHVar10 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar10 == nullptr) {
    pHVar10 = nullptr;
  }
  else {
    pHVar10->field_0002 = 1;
    pHVar10->field_0000 = 0;
    *(undefined4 *)&pHVar10->field_0x3 = 0xffffffff;
    pHVar10->field_0001 = CASE_2;
    pHVar10->field_0007 = nullptr;
    pHVar10->field_000B = nullptr;
    pHVar10->field_000F = 0;
    *(undefined4 *)&pHVar10->field_0x1b = 1;
    pHVar10->field_0013 = 1;
    pHVar10->field_0017 = -1;
    pHVar10->field_0027 = 0;
    pHVar10->field_0023 = 0;
    pHVar10->field_002F = 1;
    pHVar10->field_002B = 1;
  }
  this_01->field_0457 = pHVar10;
  if (pHVar10 != nullptr) {
    uVar11 = 0;
    cVar21 = '\x01';
    bVar20 = 0x10;
    iVar19 = 1;
    iVar23 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x1a,10,0x2e9,0x32);
    /* ST_CALLSITE[005BDF37]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
    local_EAX_1943 =
         HoloTy::Init(this_01->field_0457,CASE_3,0x1a,10,iVar23,iVar19,bVar20,cVar21,uVar11);
    if (local_EAX_1943 != 0) {
      pHVar10 = this_01->field_0457;
      pHVar10->field_0002 = 1;
      pHVar10->field_0017 = pHVar10->field_0013;
      uVar11 = *(uint *)&this_01->field_0457->field_0x3;
      if (-1 < (int)uVar11) {
        FUN_006b3af0((int *)g_ddxContext_008075A8,uVar11);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
  }
  this_01->field_0065 = 3;
  thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                     this_01->field_005D,10,2);
  pHVar10 = this_01->field_0457;
  if (((pHVar10 != nullptr) && (pHVar10->field_0000 != '\0')) &&
     (-1 < (int)*(uint *)&pHVar10->field_0x3)) {
    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar10->field_0x3);
  }
  pHVar10 = this_01->field_0453;
  if (((pHVar10 != nullptr) && (pHVar10->field_0000 != '\0')) &&
     (-1 < (int)*(uint *)&pHVar10->field_0x3)) {
    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar10->field_0x3);
  }
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != nullptr) {
    iVar23 = g_cursorClass_00802A30->field_00C9;
    iVar19 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_3;
    this_00->field_0494 = 0xffff;
    /* ST_CALLSITE[005BE015]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
    CursorClassTy::SetGCType(this_00,CASE_0,iVar19,iVar23);
    /* ST_CALLSITE[005BE02A]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  thunk_FUN_00568bc0(&g_sound,0);
  if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0056A130::thunk_FUN_0056a130
              ((AnonReceiver_0056A130 *)&g_sound,0x14,'\x02',0,nullptr);
  }
  g_currentExceptionFrame = local_5c.previous;
  return;
}

