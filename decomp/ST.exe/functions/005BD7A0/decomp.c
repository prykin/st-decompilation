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
  undefined4 uVar6;
  ccFntTy *pcVar7;
  int local_EAX_485;
  AnonPointee_MReportTy_0077 *pAVar8;
  int uVar8;
  void *pvVar9;
  int local_EAX_565;
  AnonShape_006B5B10_E0D06CF1 *pAVar10;
  DArrayTy *pDVar11;
  char *pcVar12;
  HoloTy *pHVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int *piVar17;
  DArrayTy **ppDVar18;
  MReportTy *this_01;
  uint *puVar19;
  undefined4 *puVar20;
  char *pcVar21;
  int iVar22;
  byte bVar23;
  char cVar24;
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
    iVar22 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0xc6,0,iVar3,"%s",
                                "MReportTy::InitMReport");
    if (iVar22 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\rpt_obj.cpp",0xc6);
    return;
  }
  if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
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
  FUN_006bc360(puVar5,local_6a4,(int *)0x0);
  g_startSystem_0081176C->field_0140 = 0x18;
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&g_startSystem_0081176C->field_0x144);
  puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,"STATS",0xffffffff,0,1,0,(undefined4 *)0x0);
  this_01->field_007F = puVar5;
  uVar6 = FUN_0070aa50(g_cMf32_00806780,"RPT_IND",0,1);
  this_01->field_006F = uVar6;
  pcVar7 = (ccFntTy *)thunk_FUN_005defe0(this_01->field_005D,(undefined *)0x0,DAT_00807dd9);
  this_01->field_0083 = pcVar7;
  pcVar7->field_0058 = 1;
  pcVar7->field_005C = 0;
  pcVar7 = (ccFntTy *)thunk_FUN_005df290(this_01->field_005D,(undefined *)0x0,DAT_00807dd9);
  this_01->field_0087 = pcVar7;
  g_startSystem_0081176C->field_0038 = pcVar7;
  pcVar7 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806780,"RPT_FNTN",0);
  this_01->field_008B = pcVar7;
  pcVar7->field_0058 = 1;
  pcVar7->field_005C = 0;
  iVar3 = 1;
  puVar20 = (undefined4 *)(this_01->field_005D + 0x28);
  local_EAX_485 = FUN_006b4fe0(this_01->field_005D);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pAVar8 = (AnonPointee_MReportTy_0077 *)
           FUN_006b50c0(0x91,0x28,(uint)*(ushort *)(this_01->field_005D + 0xe),local_EAX_485,puVar20
                        ,iVar3);
  this_01->field_0077 = pAVar8;
  iVar3 = 1;
  puVar20 = (undefined4 *)(this_01->field_005D + 0x28);
  uVar8 = FUN_006b4fe0(this_01->field_005D);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pvVar9 = (void *)FUN_006b50c0(300,0x1e,(uint)*(ushort *)(this_01->field_005D + 0xe),uVar8,puVar20,
                                iVar3);
  this_01->field_007B = pvVar9;
  iVar3 = 1;
  puVar20 = (undefined4 *)(this_01->field_005D + 0x28);
  local_EAX_565 = FUN_006b4fe0(this_01->field_005D);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pAVar10 = (AnonShape_006B5B10_E0D06CF1 *)
            FUN_006b50c0(0x2e9,0x15e,(uint)*(ushort *)(this_01->field_005D + 0xe),local_EAX_565,
                         puVar20,iVar3);
  this_01->field_0073 = (AnonPointee_MReportTy_0073 *)pAVar10;
  FUN_006b4170(pAVar10,0,0,0,0x2e9,0x15e,0xff);
  FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)this_01->field_0073,0,0x2d,0,700,0x15e,0x18,0xd);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&this_01->field_0xa3);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x2e,0x10,(undefined4 *)&this_01->field_0x1a3);
  memset(&this_01->field_0x2c7, 0, 0x80); /* compiler bulk-zero initialization */
  this_01->field_0323 = (MReportTy *)&this_01->field_0xa3;
  pcVar7 = this_01->field_0087;
  this_01->field_02EF = this_01->field_0008;
  this_01->field_02CF = this_01->field_0008;
  this_01->field_02F3 = 2;
  this_01->field_02D3 = 2;
  this_01->field_0313 = this_01->field_005D;
  this_01->field_031B = 0x18;
  this_01->field_0317 = 0x4c;
  if (pcVar7->field_00A0 != 0) {
    FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar7);
  }
  this_01->field_030B = *(undefined4 *)&pcVar7->field_0x8a;
  if (this_01->field_0066 == '\x01') {
    local_14 = (cMf32 *)0x0;
    ppDVar18 = &this_01->field_0347;
    iVar3 = 3;
    do {
      pDVar11 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x18,4,0x18);
      *ppDVar18 = pDVar11;
      ppDVar18 = ppDVar18 + 1;
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
    if (local_14 != (cMf32 *)0x0) {
      memset((void *)local_2a4, 0, 0x201); /* compiler bulk-zero initialization */
      uVar14 = 0xffffffff;
      local_2a4[0] = 0xc;
      pcVar12 = PTR_DAT_0079c0dc;
      do {
        pcVar21 = pcVar12;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar21 = pcVar12 + 1;
        cVar24 = *pcVar12;
        pcVar12 = pcVar21;
      } while (cVar24 != '\0');
      uVar14 = ~uVar14;
      pcVar12 = pcVar21 + -uVar14;
      ppDVar18 = (DArrayTy **)(local_2a4 + 1);
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *ppDVar18 = *(DArrayTy **)pcVar12;
        pcVar12 = pcVar12 + 4;
        ppDVar18 = ppDVar18 + 1;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(char *)ppDVar18 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        ppDVar18 = (DArrayTy **)((int)ppDVar18 + 1);
      }
      local_c = (DArrayTy **)(local_2a4 + 1);
      cMf32::ToBeg(pcVar2,FUN_006f2d10,local_2a4);
      pcVar2 = local_14;
      pcVar12 = (char *)cMf32::RecNameGetNext(local_14);
      while (pcVar12 != (char *)0x0) {
        local_10 = 0;
        local_c = (DArrayTy **)0x0;
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",PTR_DAT_0079c0dc,"%01d%02d");
        iVar3 = Library::MSVCRT::FUN_0072ee80(pcVar12,(byte *)&DAT_0080f33a);
        if (((iVar3 == 2) && (local_10 != 0)) && (local_10 < 4)) {
          Library::DKW::TBL::FUN_006ae1c0(*(uint **)(&this_01->field_0x343 + local_10 * 4),&local_c);
        }
        pcVar12 = (char *)cMf32::RecNameGetNext(pcVar2);
      }
      cMf32::delete(pcVar2);
    }
    do {
      local_c = &this_01->field_0347;
      local_8 = 0;
      local_10 = 3;
      do {
        uVar14 = 0;
        if ((*local_c)->count != 1 && -1 < (int)((*local_c)->count - 1)) {
          do {
            pDVar11 = *local_c;
            if (uVar14 < pDVar11->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar11, uVar14) (runtime stride) */
              puVar19 = (uint *)(pDVar11->elementSize * uVar14 + (int)pDVar11->data);
            }
            else {
              puVar19 = (uint *)0x0;
            }
            uVar15 = uVar14 + 1;
            if (uVar15 < pDVar11->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar11, uVar15) (runtime stride) */
              puVar16 = (uint *)(pDVar11->elementSize * uVar15 + (int)pDVar11->data);
            }
            else {
              puVar16 = (uint *)0x0;
            }
            if (*puVar16 < *puVar19) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)pDVar11,uVar14,uVar15);
              local_8 = 1;
            }
            uVar14 = uVar15;
          } while ((int)uVar15 < (int)((*local_c)->count - 1));
        }
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    } while (local_8 != 0);
    iVar3 = 2;
    piVar17 = &this_01->field_034F;
    do {
      if (*(int *)(*piVar17 + 0xc) != 0) {
        this_01->field_006A = (char)iVar3;
      }
      iVar3 = iVar3 + -1;
      piVar17 = piVar17 + -1;
    } while (-1 < iVar3);
    local_10 = 0;
  }
  else {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::GameResult((CFsgsConnection *)&DAT_00802a90,2 - (DAT_0080c522 != 0));
    }
    this_01->field_0067 = 1;
  }
  if (g_startSystem_0081176C->field_02E6 != (MMsgTy *)0x0) {
    MMsgTy::HidePanel(g_startSystem_0081176C->field_02E6,0,0,1);
  }
  SetCtrl(this_01,0);
  PutDDX(0,0,'\x01',(BITMAPINFO *)this_01->field_005D);
  local_8 = 0xffffffff;
  FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0x2bd,0x15e,
               (ushort *)&g_startSystem_0081176C->field_0140);
  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x47,0x46);
  pHVar13 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar13 == (HoloTy *)0x0) {
    pHVar13 = (HoloTy *)0x0;
  }
  else {
    pHVar13->field_0002 = 1;
    pHVar13->field_0000 = 0;
    *(undefined4 *)&pHVar13->field_0x3 = 0xffffffff;
    pHVar13->field_0001 = CASE_2;
    pHVar13->field_0007 = (void *)0x0;
    pHVar13->field_000B = (void *)0x0;
    pHVar13->field_000F = 0;
    *(undefined4 *)&pHVar13->field_0x1b = 1;
    pHVar13->field_0013 = 1;
    pHVar13->field_0017 = -1;
    pHVar13->field_0027 = 0;
    pHVar13->field_0023 = 0;
    pHVar13->field_002F = 1;
    pHVar13->field_002B = 1;
  }
  this_01->field_0453 = pHVar13;
  if (pHVar13 != (HoloTy *)0x0) {
    uVar14 = 0;
    cVar24 = '\x01';
    bVar23 = 0x10;
    iVar22 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x47,0x46,0x2bd,0x15e);
    uVar14 = HoloTy::Init(this_01->field_0453,CASE_2,0x47,0x46,iVar3,iVar22,bVar23,cVar24,uVar14);
    if (uVar14 != 0) {
      pHVar13 = this_01->field_0453;
      pHVar13->field_0002 = 1;
      pHVar13->field_0017 = pHVar13->field_0013;
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
  pHVar13 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar13 == (HoloTy *)0x0) {
    pHVar13 = (HoloTy *)0x0;
  }
  else {
    pHVar13->field_0002 = 1;
    pHVar13->field_0000 = 0;
    *(undefined4 *)&pHVar13->field_0x3 = 0xffffffff;
    pHVar13->field_0001 = CASE_2;
    pHVar13->field_0007 = (void *)0x0;
    pHVar13->field_000B = (void *)0x0;
    pHVar13->field_000F = 0;
    *(undefined4 *)&pHVar13->field_0x1b = 1;
    pHVar13->field_0013 = 1;
    pHVar13->field_0017 = -1;
    pHVar13->field_0027 = 0;
    pHVar13->field_0023 = 0;
    pHVar13->field_002F = 1;
    pHVar13->field_002B = 1;
  }
  this_01->field_0457 = pHVar13;
  if (pHVar13 != (HoloTy *)0x0) {
    uVar14 = 0;
    cVar24 = '\x01';
    bVar23 = 0x10;
    iVar22 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x1a,10,0x2e9,0x32);
    uVar14 = HoloTy::Init(this_01->field_0457,CASE_3,0x1a,10,iVar3,iVar22,bVar23,cVar24,uVar14);
    if (uVar14 != 0) {
      pHVar13 = this_01->field_0457;
      pHVar13->field_0002 = 1;
      pHVar13->field_0017 = pHVar13->field_0013;
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
                     (ushort *)this_01->field_005D,10,2);
  pHVar13 = this_01->field_0457;
  if (((pHVar13 != (HoloTy *)0x0) && (pHVar13->field_0000 != '\0')) &&
     (-1 < (int)*(uint *)&pHVar13->field_0x3)) {
    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar13->field_0x3);
  }
  pHVar13 = this_01->field_0453;
  if (((pHVar13 != (HoloTy *)0x0) && (pHVar13->field_0000 != '\0')) &&
     (-1 < (int)*(uint *)&pHVar13->field_0x3)) {
    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar13->field_0x3);
  }
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
    iVar3 = g_cursorClass_00802A30->field_00C9;
    iVar22 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_3;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,iVar22,iVar3);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  thunk_FUN_00568bc0(&g_sound,0);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  if ((DAT_00807300._1_1_ & 8) != 0) {
    thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
  }
  g_currentExceptionFrame = local_5c.previous;
  return;
}

