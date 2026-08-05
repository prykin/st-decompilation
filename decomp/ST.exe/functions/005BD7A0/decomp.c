#include "../../pseudocode_runtime.h"


/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::InitMReport */

void __thiscall MReportTy::InitMReport(MReportTy *this,undefined1 param_1)

{
  code *pcVar1;
  CursorClassTy *this_00;
  cMf32 *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  ccFntTy *pcVar6;
  int local_EAX_485;
  AnonPointee_MReportTy_0077 *pAVar7;
  int uVar8;
  void *pvVar8;
  int local_EAX_565;
  AnonShape_006B5B10_E0D06CF1 *pAVar9;
  DArrayTy *pDVar10;
  char *pcVar11;
  HoloTy *pHVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int *piVar16;
  DArrayTy **ppDVar17;
  MReportTy *this_01;
  uint *puVar18;
  undefined4 *puVar19;
  char *pcVar20;
  int iVar21;
  byte bVar22;
  char cVar23;
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
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar21 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0xc6,0,iVar3,"%s",
                                "MReportTy::InitMReport");
    if (iVar21 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\rpt_obj.cpp",0xc6);
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
    puVar4 = &DAT_007ca250;
  }
  else {
    puVar4 = &DAT_007ca248;
    if (DAT_0080874e != '\x02') {
      puVar4 = &DAT_007ca24c;
    }
  }
  wsprintfA((LPSTR)&DAT_0080f33a,"REPORT_%s_%c",puVar4,
            (int)(char)((-(DAT_0080c522 != 0) & 0xfbU) + 0x46));
  puVar5 = (ushort *)FUN_0070a9f0(g_cMf32_00806780,(char *)&DAT_0080f33a,0,1);
  this_01->field_005D = puVar5;
  FUN_006bc360(puVar5,local_6a4,nullptr);
  g_startSystem_0081176C->field_0140 = 0x18;
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&g_startSystem_0081176C->field_0x144);
  puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,"STATS",0xffffffff,0,1,0,nullptr);
  this_01->field_007F = puVar5;
  puVar5 = FUN_0070aa50(g_cMf32_00806780,"RPT_IND",0,1);
  this_01->field_006F = puVar5;
  pcVar6 = (ccFntTy *)thunk_FUN_005defe0(this_01->field_005D,nullptr,DAT_00807dd9);
  this_01->field_0083 = pcVar6;
  pcVar6->field_0058 = 1;
  pcVar6->field_005C = 0;
  pcVar6 = (ccFntTy *)thunk_FUN_005df290(this_01->field_005D,nullptr,DAT_00807dd9);
  this_01->field_0087 = pcVar6;
  g_startSystem_0081176C->field_0038 = pcVar6;
  pcVar6 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806780,"RPT_FNTN",0);
  this_01->field_008B = pcVar6;
  pcVar6->field_0058 = 1;
  pcVar6->field_005C = 0;
  iVar3 = 1;
  puVar19 = (undefined4 *)(this_01->field_005D + 0x28);
  local_EAX_485 = FUN_006b4fe0(this_01->field_005D);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pAVar7 = (AnonPointee_MReportTy_0077 *)
           FUN_006b50c0(0x91,0x28,(uint)*(ushort *)(this_01->field_005D + 0xe),local_EAX_485,puVar19
                        ,iVar3);
  this_01->field_0077 = pAVar7;
  iVar3 = 1;
  puVar19 = (undefined4 *)(this_01->field_005D + 0x28);
  uVar8 = FUN_006b4fe0(this_01->field_005D);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pvVar8 = (void *)FUN_006b50c0(300,0x1e,(uint)*(ushort *)(this_01->field_005D + 0xe),uVar8,puVar19,
                                iVar3);
  this_01->field_007B = pvVar8;
  iVar3 = 1;
  puVar19 = (undefined4 *)(this_01->field_005D + 0x28);
  local_EAX_565 = FUN_006b4fe0(this_01->field_005D);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pAVar9 = (AnonShape_006B5B10_E0D06CF1 *)
           FUN_006b50c0(0x2e9,0x15e,(uint)*(ushort *)(this_01->field_005D + 0xe),local_EAX_565,
                        puVar19,iVar3);
  this_01->field_0073 = (AnonPointee_MReportTy_0073 *)pAVar9;
  FUN_006b4170(pAVar9,0,0,0,0x2e9,0x15e,0xff);
  FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)this_01->field_0073,0,0x2d,0,700,0x15e,0x18,0xd);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&this_01->field_0xa3);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x2e,0x10,(undefined4 *)&this_01->field_0x1a3);
  memset(&this_01->field_0x2c7, 0, 0x80); /* compiler bulk-zero initialization */
  this_01->field_0323 = (MReportTy *)&this_01->field_0xa3;
  pcVar6 = this_01->field_0087;
  this_01->field_02EF = this_01->field_0008;
  this_01->field_02CF = this_01->field_0008;
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
    ppDVar17 = &this_01->field_0347;
    iVar3 = 3;
    do {
      pDVar10 = Library::DKW::TBL::DArrayCreate(nullptr,0x18,4,0x18);
      *ppDVar17 = pDVar10;
      ppDVar17 = ppDVar17 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s\\%s",&DAT_00807680,PTR_s_SAVEGAME__0079c0d4,
              &DAT_00807ddd,PTR_s_PL_LOG_0079c0d8);
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;
    iVar3 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0);
    if (iVar3 == 0) {
      local_14 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
    }
    pcVar2 = local_14;
    this_01 = local_18;
    g_currentExceptionFrame = local_a0.previous;
    if (local_14 != nullptr) {
      memset((void *)local_2a4, 0, 0x201); /* compiler bulk-zero initialization */
      uVar13 = 0xffffffff;
      local_2a4[0] = 0xc;
      pcVar11 = PTR_DAT_0079c0dc;
      do {
        pcVar20 = pcVar11;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar20 = pcVar11 + 1;
        cVar23 = *pcVar11;
        pcVar11 = pcVar20;
      } while (cVar23 != '\0');
      uVar13 = ~uVar13;
      pcVar11 = pcVar20 + -uVar13;
      ppDVar17 = (DArrayTy **)(local_2a4 + 1);
      memmove(ppDVar17, pcVar11, uVar13); /* compiler REP MOVS byte copy */
      local_c = (DArrayTy **)(local_2a4 + 1);
      cMf32::ToBeg(pcVar2,FUN_006f2d10,local_2a4);
      pcVar2 = local_14;
      pcVar11 = (char *)cMf32::RecNameGetNext(local_14);
      while (pcVar11 != nullptr) {
        local_10 = 0;
        local_c = nullptr;
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",PTR_DAT_0079c0dc,"%01d%02d");
        iVar3 = Library::MSVCRT::FUN_0072ee80(pcVar11,(byte *)&DAT_0080f33a);
        if (((iVar3 == 2) && (local_10 != 0)) && (local_10 < 4)) {
          Library::DKW::TBL::DArrayAppend
                    (*(DArrayTy **)(&this_01->field_0x343 + local_10 * 4),&local_c);
        }
        pcVar11 = (char *)cMf32::RecNameGetNext(pcVar2);
      }
      cMf32::delete(pcVar2);
    }
    do {
      local_c = &this_01->field_0347;
      local_8 = 0;
      local_10 = 3;
      do {
        uVar13 = 0;
        if ((*local_c)->count != 1 && -1 < (int)((*local_c)->count - 1)) {
          do {
            pDVar10 = *local_c;
            if (uVar13 < pDVar10->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar10, uVar13) (runtime stride) */
              puVar18 = (uint *)(pDVar10->elementSize * uVar13 + (int)pDVar10->data);
            }
            else {
              puVar18 = nullptr;
            }
            uVar14 = uVar13 + 1;
            if (uVar14 < pDVar10->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar10, uVar14) (runtime stride) */
              puVar15 = (uint *)(pDVar10->elementSize * uVar14 + (int)pDVar10->data);
            }
            else {
              puVar15 = nullptr;
            }
            if (*puVar15 < *puVar18) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)pDVar10,uVar13,uVar14);
              local_8 = 1;
            }
            uVar13 = uVar14;
          } while ((int)uVar14 < (int)((*local_c)->count - 1));
        }
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    } while (local_8 != 0);
    iVar3 = 2;
    piVar16 = &this_01->field_034F;
    do {
      if (*(int *)(*piVar16 + 0xc) != 0) {
        this_01->field_006A = (char)iVar3;
      }
      iVar3 = iVar3 + -1;
      piVar16 = piVar16 + -1;
    } while (-1 < iVar3);
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
  pHVar12 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar12 == nullptr) {
    pHVar12 = nullptr;
  }
  else {
    pHVar12->field_0002 = 1;
    pHVar12->field_0000 = 0;
    *(undefined4 *)&pHVar12->field_0x3 = 0xffffffff;
    pHVar12->field_0001 = CASE_2;
    pHVar12->field_0007 = nullptr;
    pHVar12->field_000B = nullptr;
    pHVar12->field_000F = 0;
    *(undefined4 *)&pHVar12->field_0x1b = 1;
    pHVar12->field_0013 = 1;
    pHVar12->field_0017 = -1;
    pHVar12->field_0027 = 0;
    pHVar12->field_0023 = 0;
    pHVar12->field_002F = 1;
    pHVar12->field_002B = 1;
  }
  this_01->field_0453 = pHVar12;
  if (pHVar12 != nullptr) {
    uVar13 = 0;
    cVar23 = '\x01';
    bVar22 = 0x10;
    iVar21 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x47,0x46,0x2bd,0x15e);
    uVar13 = HoloTy::Init(this_01->field_0453,CASE_2,0x47,0x46,iVar3,iVar21,bVar22,cVar23,uVar13);
    if (uVar13 != 0) {
      pHVar12 = this_01->field_0453;
      pHVar12->field_0002 = 1;
      pHVar12->field_0017 = pHVar12->field_0013;
      uVar13 = *(uint *)&this_01->field_0453->field_0x3;
      if (-1 < (int)uVar13) {
        FUN_006b3af0((int *)g_ddxContext_008075A8,uVar13);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
    local_8 = 0xffffffff;
  }
  FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x401217,0x2e9,0x32,(ushort *)this_01);
  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x1a,10);
  pHVar12 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar12 == nullptr) {
    pHVar12 = nullptr;
  }
  else {
    pHVar12->field_0002 = 1;
    pHVar12->field_0000 = 0;
    *(undefined4 *)&pHVar12->field_0x3 = 0xffffffff;
    pHVar12->field_0001 = CASE_2;
    pHVar12->field_0007 = nullptr;
    pHVar12->field_000B = nullptr;
    pHVar12->field_000F = 0;
    *(undefined4 *)&pHVar12->field_0x1b = 1;
    pHVar12->field_0013 = 1;
    pHVar12->field_0017 = -1;
    pHVar12->field_0027 = 0;
    pHVar12->field_0023 = 0;
    pHVar12->field_002F = 1;
    pHVar12->field_002B = 1;
  }
  this_01->field_0457 = pHVar12;
  if (pHVar12 != nullptr) {
    uVar13 = 0;
    cVar23 = '\x01';
    bVar22 = 0x10;
    iVar21 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x1a,10,0x2e9,0x32);
    uVar13 = HoloTy::Init(this_01->field_0457,CASE_3,0x1a,10,iVar3,iVar21,bVar22,cVar23,uVar13);
    if (uVar13 != 0) {
      pHVar12 = this_01->field_0457;
      pHVar12->field_0002 = 1;
      pHVar12->field_0017 = pHVar12->field_0013;
      uVar13 = *(uint *)&this_01->field_0457->field_0x3;
      if (-1 < (int)uVar13) {
        FUN_006b3af0((int *)g_ddxContext_008075A8,uVar13);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
  }
  this_01->field_0065 = 3;
  thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                     (ushort *)this_01->field_005D,10,2);
  pHVar12 = this_01->field_0457;
  if (((pHVar12 != nullptr) && (pHVar12->field_0000 != '\0')) &&
     (-1 < (int)*(uint *)&pHVar12->field_0x3)) {
    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar12->field_0x3);
  }
  pHVar12 = this_01->field_0453;
  if (((pHVar12 != nullptr) && (pHVar12->field_0000 != '\0')) &&
     (-1 < (int)*(uint *)&pHVar12->field_0x3)) {
    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar12->field_0x3);
  }
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != nullptr) {
    iVar3 = g_cursorClass_00802A30->field_00C9;
    iVar21 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_3;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,iVar21,iVar3);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  thunk_FUN_00568bc0(&g_sound,0);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  if ((DAT_00807300._1_1_ & 8) != 0) {
    thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,nullptr);
  }
  g_currentExceptionFrame = local_5c.previous;
  return;
}

