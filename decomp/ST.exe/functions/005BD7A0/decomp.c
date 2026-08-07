#include "../../pseudocode_runtime.h"


/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::InitMReport */

void __thiscall MReportTy::InitMReport(MReportTy *this,undefined1 param_1)

{
  DArrayTy *pDVar1;
  CursorClassTy *this_00;
  cMf32 *pcVar3;
  int local_EAX_39;
  char *pcVar4;
  ushort *local_EAX_253;
  ushort *puVar5;
  ushort *local_EAX_368;
  ccFntTy *pcVar5;
  int local_EAX_485;
  AnonPointee_MReportTy_0077 *pAVar6;
  int uVar8;
  void *pvVar7;
  int local_EAX_565;
  RecoveredSourceFamily_dibcopy *pRVar8;
  DArrayTy *pDVar10;
  int iVar3;
  int local_EAX_1185;
  HoloTy *pHVar9;
  uint uVar13;
  uint local_EAX_1943;
  int iVar21;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  DArrayTy **ppDVar14;
  MReportTy *this_01;
  uint *puVar15;
  char *pcVar17;
  int iVar18;
  byte bVar19;
  char cVar20;
  ushort *puVar21;
  int iVar22;
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
    CursorClassTy::sub_00544940(g_cursorClass_00802A30);
  }
  DarkScreen(g_dDXContext_0080759C,1,0);
  StartSystemTy::sub_005DAF20(g_startSystem_0081176C);
  this_01 = local_18;
  DAT_0080877e = 1;
  DAT_0080877f = 0;
  local_18->field_0066 = param_1;
  if (DAT_0080874e == '\x01') {
    pcVar4 = &CHAR_W_007ca250;
  }
  else {
    pcVar4 = &CHAR_B_007ca248;
    if (DAT_0080874e != '\x02') {
      pcVar4 = &DAT_007ca24c;
    }
  }
  wsprintfA((LPSTR)&DAT_0080f33a,"REPORT_%s_%c",pcVar4,
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
  pcVar5 = (ccFntTy *)thunk_FUN_005defe0((int)this_01->field_005D,nullptr,DAT_00807dd9);
  this_01->field_0083 = pcVar5;
  pcVar5->field_0058 = 1;
  pcVar5->field_005C = 0;
  pcVar5 = (ccFntTy *)thunk_FUN_005df290((int)this_01->field_005D,nullptr,DAT_00807dd9);
  this_01->field_0087 = pcVar5;
  g_startSystem_0081176C->field_0038 = (HDC__ *)pcVar5;
  pcVar5 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806780,"RPT_FNTN",0);
  this_01->field_008B = pcVar5;
  pcVar5->field_0058 = 1;
  pcVar5->field_005C = 0;
  iVar22 = 1;
  puVar21 = this_01->field_005D + 0x14;
  local_EAX_485 = FUN_006b4fe0((int)this_01->field_005D);
  pAVar6 = (AnonPointee_MReportTy_0077 *)
           FUN_006b50c0(0x91,0x28,(uint)this_01->field_005D[7],local_EAX_485,(undefined4 *)puVar21,
                        iVar22);
  this_01->field_0077 = pAVar6;
  iVar22 = 1;
  puVar21 = this_01->field_005D + 0x14;
  uVar8 = FUN_006b4fe0((int)this_01->field_005D);
  pvVar7 = (void *)FUN_006b50c0(300,0x1e,(uint)this_01->field_005D[7],uVar8,(undefined4 *)puVar21,
                                iVar22);
  this_01->field_007B = pvVar7;
  iVar22 = 1;
  puVar21 = this_01->field_005D + 0x14;
  local_EAX_565 = FUN_006b4fe0((int)this_01->field_005D);
  pRVar8 = (RecoveredSourceFamily_dibcopy *)
           FUN_006b50c0(0x2e9,0x15e,(uint)this_01->field_005D[7],local_EAX_565,(undefined4 *)puVar21
                        ,iVar22);
  this_01->field_0073 = (AnonPointee_MReportTy_0073 *)pRVar8;
  FUN_006b4170(pRVar8,0,0,0,0x2e9,0x15e,0xff);
  FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)this_01->field_0073,0,0x2d,0,700,0x15e,0x18,0xd);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&this_01->field_00A3);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x2e,0x10,(undefined4 *)&this_01->field_0x1a3);
  memset(&this_01->field_0x2c7, 0, 0x80); /* compiler bulk-zero initialization */
  this_01->field_0323 = (MReportTy *)&this_01->field_00A3;
  pcVar5 = this_01->field_0087;
  this_01->field_02EF = this_01->field_0008;
  this_01->field_02CF = this_01->field_0008;
  this_01->field_02F3 = 2;
  this_01->field_02D3 = 2;
  this_01->field_0313 = this_01->field_005D;
  this_01->field_031B = 0x18;
  this_01->field_0317 = 0x4c;
  if (pcVar5->field_00A0 != 0) {
    FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar5);
  }
  this_01->field_030B = *(undefined4 *)&pcVar5->field_0x8a;
  if (this_01->field_0066 == '\x01') {
    local_14 = nullptr;
    ppDVar14 = &this_01->field_0347;
    iVar22 = 3;
    do {
      pDVar10 = Library::DKW::TBL::DArrayCreate(nullptr,0x18,4,0x18);
      *ppDVar14 = pDVar10;
      ppDVar14 = ppDVar14 + 1;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s\\%s",&CHAR_00h_00807680,PTR_s_SAVEGAME__0079c0d4,
              &CHAR_00h_00807ddd,PTR_s_PL_LOG_0079c0d8);
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;
    iVar3 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0);
    if (iVar3 == 0) {
      local_14 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
    }
    pcVar3 = local_14;
    this_01 = local_18;
    g_currentExceptionFrame = local_a0.previous;
    if (local_14 != nullptr) {
      memset((void *)local_2a4, 0, 0x201); /* compiler bulk-zero initialization */
      uVar10 = 0xffffffff;
      local_2a4[0] = 0xc;
      pcVar4 = PTR_DAT_0079c0dc;
      do {
        pcVar17 = pcVar4;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar4 + 1;
        cVar20 = *pcVar4;
        pcVar4 = pcVar17;
      } while (cVar20 != '\0');
      uVar10 = ~uVar10;
      pcVar4 = pcVar17 + -uVar10;
      ppDVar14 = (DArrayTy **)(local_2a4 + 1);
      memmove(ppDVar14, pcVar4, uVar10); /* compiler REP MOVS byte copy */
      local_c = (DArrayTy **)(local_2a4 + 1);
      cMf32::ToBeg(pcVar3,FUN_006f2d10,local_2a4);
      pcVar3 = local_14;
      pcVar4 = (char *)cMf32::RecNameGetNext(local_14);
      while (pcVar4 != nullptr) {
        local_10 = 0;
        local_c = nullptr;
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",PTR_DAT_0079c0dc,"%01d%02d");
        local_EAX_1185 = Library::MSVCRT::FUN_0072ee80(pcVar4,(byte *)&DAT_0080f33a);
        if (((local_EAX_1185 == 2) && (local_10 != 0)) && (local_10 < 4)) {
          Library::DKW::TBL::DArrayAppend
                    (*(DArrayTy **)(&this_01->field_0x343 + local_10 * 4),&local_c);
        }
        pcVar4 = (char *)cMf32::RecNameGetNext(pcVar3);
      }
      cMf32::delete(pcVar3);
    }
    do {
      local_c = &this_01->field_0347;
      local_8 = 0;
      local_10 = 3;
      do {
        uVar10 = 0;
        if ((*local_c)->count != 1 && -1 < (int)((*local_c)->count - 1)) {
          do {
            pDVar1 = *local_c;
            if (uVar10 < pDVar1->count) {
              puVar15 = DArrayAt<uint>(pDVar1, uVar10);
            }
            else {
              puVar15 = nullptr;
            }
            uVar11 = uVar10 + 1;
            if (uVar11 < pDVar1->count) {
              puVar12 = DArrayAt<uint>(pDVar1, uVar11);
            }
            else {
              puVar12 = nullptr;
            }
            if (*puVar12 < *puVar15) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)pDVar1,uVar10,uVar11);
              local_8 = 1;
            }
            uVar10 = uVar11;
          } while ((int)uVar11 < (int)((*local_c)->count - 1));
        }
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    } while (local_8 != 0);
    iVar22 = 2;
    piVar13 = &this_01->field_034F;
    do {
      if (*(int *)(*piVar13 + 0xc) != 0) {
        this_01->field_006A = (char)iVar22;
      }
      iVar22 = iVar22 + -1;
      piVar13 = piVar13 + -1;
    } while (-1 < iVar22);
    local_10 = 0;
  }
  else {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::GameResult((CFsgsConnection *)&DAT_00802a90,2 - (DAT_0080c522 != 0));
    }
    this_01->field_0067 = 1;
  }
  if (g_startSystem_0081176C->field_02E6 != nullptr) {
    MMsgTy::HidePanel(g_startSystem_0081176C->field_02E6,0,0,1);
  }
  SetCtrl(this_01,0);
  PutDDX(0,0,'\x01',(BITMAPINFO *)this_01->field_005D);
  local_8 = 0xffffffff;
  FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0x2bd,0x15e,
               (ushort *)&g_startSystem_0081176C->field_0140);
  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x47,0x46);
  pHVar9 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar9 == nullptr) {
    pHVar9 = nullptr;
  }
  else {
    pHVar9->field_0002 = 1;
    pHVar9->field_0000 = 0;
    *(undefined4 *)&pHVar9->field_0x3 = 0xffffffff;
    pHVar9->field_0001 = CASE_2;
    pHVar9->field_0007 = nullptr;
    pHVar9->field_000B = nullptr;
    pHVar9->field_000F = 0;
    *(undefined4 *)&pHVar9->field_0x1b = 1;
    pHVar9->field_0013 = 1;
    pHVar9->field_0017 = -1;
    pHVar9->field_0027 = 0;
    pHVar9->field_0023 = 0;
    pHVar9->field_002F = 1;
    pHVar9->field_002B = 1;
  }
  this_01->field_0453 = pHVar9;
  if (pHVar9 != nullptr) {
    uVar10 = 0;
    cVar20 = '\x01';
    bVar19 = 0x10;
    iVar18 = 1;
    iVar22 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x47,0x46,0x2bd,0x15e);
    uVar13 = HoloTy::Init(this_01->field_0453,CASE_2,0x47,0x46,iVar22,iVar18,bVar19,cVar20,uVar10);
    if (uVar13 != 0) {
      pHVar9 = this_01->field_0453;
      pHVar9->field_0002 = 1;
      pHVar9->field_0017 = pHVar9->field_0013;
      uVar10 = *(uint *)&this_01->field_0453->field_0x3;
      if (-1 < (int)uVar10) {
        FUN_006b3af0((int *)g_ddxContext_008075A8,uVar10);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
    local_8 = 0xffffffff;
  }
  FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x401217,0x2e9,0x32,(ushort *)this_01);
  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x1a,10);
  pHVar9 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar9 == nullptr) {
    pHVar9 = nullptr;
  }
  else {
    pHVar9->field_0002 = 1;
    pHVar9->field_0000 = 0;
    *(undefined4 *)&pHVar9->field_0x3 = 0xffffffff;
    pHVar9->field_0001 = CASE_2;
    pHVar9->field_0007 = nullptr;
    pHVar9->field_000B = nullptr;
    pHVar9->field_000F = 0;
    *(undefined4 *)&pHVar9->field_0x1b = 1;
    pHVar9->field_0013 = 1;
    pHVar9->field_0017 = -1;
    pHVar9->field_0027 = 0;
    pHVar9->field_0023 = 0;
    pHVar9->field_002F = 1;
    pHVar9->field_002B = 1;
  }
  this_01->field_0457 = pHVar9;
  if (pHVar9 != nullptr) {
    uVar10 = 0;
    cVar20 = '\x01';
    bVar19 = 0x10;
    iVar18 = 1;
    iVar22 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x1a,10,0x2e9,0x32);
    local_EAX_1943 =
         HoloTy::Init(this_01->field_0457,CASE_3,0x1a,10,iVar22,iVar18,bVar19,cVar20,uVar10);
    if (local_EAX_1943 != 0) {
      pHVar9 = this_01->field_0457;
      pHVar9->field_0002 = 1;
      pHVar9->field_0017 = pHVar9->field_0013;
      uVar10 = *(uint *)&this_01->field_0457->field_0x3;
      if (-1 < (int)uVar10) {
        FUN_006b3af0((int *)g_ddxContext_008075A8,uVar10);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
  }
  this_01->field_0065 = 3;
  thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                     this_01->field_005D,10,2);
  pHVar9 = this_01->field_0457;
  if (((pHVar9 != nullptr) && (pHVar9->field_0000 != '\0')) &&
     (-1 < (int)*(uint *)&pHVar9->field_0x3)) {
    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar9->field_0x3);
  }
  pHVar9 = this_01->field_0453;
  if (((pHVar9 != nullptr) && (pHVar9->field_0000 != '\0')) &&
     (-1 < (int)*(uint *)&pHVar9->field_0x3)) {
    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar9->field_0x3);
  }
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != nullptr) {
    iVar22 = g_cursorClass_00802A30->field_00C9;
    iVar18 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_3;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,iVar18,iVar22);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  thunk_FUN_00568bc0(&g_sound,0);
  if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
    thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,nullptr);
  }
  g_currentExceptionFrame = local_5c.previous;
  return;
}

