
/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::InitMReport */

void __thiscall MReportTy::InitMReport(MReportTy *this,undefined1 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  cMf32 *pcVar3;
  CursorClassTy *this_00;
  cMf32 *this_01;
  int iVar4;
  undefined1 *puVar5;
  ushort *puVar6;
  undefined4 uVar7;
  ccFntTy *pcVar8;
  uint uVar9;
  AnonPointee_MReportTy_0077 *pAVar10;
  AnonShape_006C7610_838EDECF *pAVar11;
  DArrayTy *pDVar12;
  HoloTy *pHVar13;
  ccFntTy *this_02;
  uint uVar14;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  uint *puVar15;
  int *piVar16;
  DArrayTy **ppDVar17;
  MReportTy *this_03;
  undefined4 unaff_ESI;
  uint *puVar18;
  void *unaff_EDI;
  char *pcVar19;
  undefined4 *puVar20;
  char *pcVar21;
  int iVar22;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar22 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0xc6,0,iVar4,&DAT_007a4ccc,
                                s_MReportTy__InitMReport_007ccf24);
    if (iVar22 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0xc6);
    return;
  }
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
    }
    thunk_FUN_00544940((AnonShape_00544940_E504B2A8 *)PTR_00802a30);
  }
  DarkScreen(DAT_0080759c,1,0);
  StartSystemTy::sub_005DAF20(PTR_0081176c);
  this_03 = local_18;
  DAT_0080877e = 1;
  DAT_0080877f = 0;
  local_18->field_0066 = param_1;
  if (DAT_0080874e == '\x01') {
    puVar5 = &DAT_007ca250;
  }
  else {
    puVar5 = &DAT_007ca248;
    if (DAT_0080874e != '\x02') {
      puVar5 = &DAT_007ca24c;
    }
  }
  wsprintfA((LPSTR)&DAT_0080f33a,s_REPORT__s__c_007ccf6c,puVar5,
            (int)(char)((-(DAT_0080c522 != 0) & 0xfbU) + 0x46));
  puVar6 = (ushort *)FUN_0070a9f0(g_cMf32_00806780,(char *)&DAT_0080f33a,0,1);
  this_03->field_005D = puVar6;
  FUN_006bc360(puVar6,local_6a4,(int *)0x0);
  *(undefined4 *)&PTR_0081176c->field_0x140 = 0x18;
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&PTR_0081176c->field_0x144);
  puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,s_STATS_007ccf64,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_03->field_007F = puVar6;
  uVar7 = FUN_0070aa50(g_cMf32_00806780,s_RPT_IND_007ccf58,0,1);
  this_03->field_006F = uVar7;
  pcVar8 = (ccFntTy *)thunk_FUN_005defe0(this_03->field_005D,(undefined *)0x0,DAT_00807dd9);
  this_03->field_0083 = pcVar8;
  pcVar8->field_0058 = 1;
  pcVar8->field_005C = 0;
  pcVar8 = (ccFntTy *)thunk_FUN_005df290(this_03->field_005D,(undefined *)0x0,DAT_00807dd9);
  this_03->field_0087 = pcVar8;
  PTR_0081176c->field_0038 = pcVar8;
  pcVar8 = (ccFntTy *)ccFntTy::operator(this_02,0x19d,g_cMf32_00806780,s_RPT_FNTN_007ccf4c,0);
  this_03->field_008B = pcVar8;
  pcVar8->field_0058 = 1;
  pcVar8->field_005C = 0;
  iVar4 = 1;
  puVar20 = (undefined4 *)(this_03->field_005D + 0x28);
  uVar9 = FUN_006b4fe0(this_03->field_005D);
  pAVar10 = (AnonPointee_MReportTy_0077 *)
            FUN_006b50c0(0x91,0x28,(uint)*(ushort *)(this_03->field_005D + 0xe),uVar9,puVar20,iVar4)
  ;
  this_03->field_0077 = pAVar10;
  iVar4 = 1;
  puVar20 = (undefined4 *)(this_03->field_005D + 0x28);
  uVar9 = FUN_006b4fe0(this_03->field_005D);
  uVar7 = FUN_006b50c0(300,0x1e,(uint)*(ushort *)(this_03->field_005D + 0xe),uVar9,puVar20,iVar4);
  this_03->field_007B = uVar7;
  iVar4 = 1;
  puVar20 = (undefined4 *)(this_03->field_005D + 0x28);
  uVar9 = FUN_006b4fe0(this_03->field_005D);
  pAVar11 = (AnonShape_006C7610_838EDECF *)
            FUN_006b50c0(0x2e9,0x15e,(uint)*(ushort *)(this_03->field_005D + 0xe),uVar9,puVar20,
                         iVar4);
  this_03->field_0073 = (AnonPointee_MReportTy_0073 *)pAVar11;
  FUN_006b4170(pAVar11,0,0,0,0x2e9,0x15e,0xff);
  FUN_006b5ee0((int)this_03->field_0073,0,0x2d,0,700,0x15e,0x18,0xd);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&this_03->field_0xa3);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x2e,0x10,(undefined4 *)&this_03->field_0x1a3);
  puVar20 = (undefined4 *)&this_03->field_0x2c7;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar20 = 0;
    puVar20 = puVar20 + 1;
  }
  this_03->field_0323 = &this_03->field_0xa3;
  pcVar8 = this_03->field_0087;
  this_03->field_02EF = this_03->field_0008;
  this_03->field_02CF = this_03->field_0008;
  this_03->field_02F3 = 2;
  this_03->field_02D3 = 2;
  this_03->field_0313 = this_03->field_005D;
  this_03->field_031B = 0x18;
  this_03->field_0317 = 0x4c;
  if (pcVar8->field_00A0 != 0) {
    FUN_00710790((uint *)pcVar8);
  }
  this_03->field_030B = *(undefined4 *)&pcVar8->field_0x8a;
  if (this_03->field_0066 == '\x01') {
    local_14 = (cMf32 *)0x0;
    ppDVar17 = &this_03->field_0347;
    iVar4 = 3;
    do {
      pDVar12 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x18,4,0x18);
      *ppDVar17 = pDVar12;
      ppDVar17 = ppDVar17 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pcVar21 = s__s_s_s__s_007ca1ec;
    puVar20 = &DAT_0080f33a;
    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__s_007ca1ec,&DAT_00807680,PTR_s_SAVEGAME__0079c0d4,
              &DAT_00807ddd,PTR_s_PL_LOG_0079c0d8);
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;
    iVar4 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0,puVar20,pcVar21);
    if (iVar4 == 0) {
      local_14 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
    }
    pcVar3 = local_14;
    this_03 = local_18;
    g_currentExceptionFrame = local_a0.previous;
    if (local_14 != (cMf32 *)0x0) {
      puVar20 = (undefined4 *)local_2a4;
      for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar20 = 0;
        puVar20 = puVar20 + 1;
      }
      *(undefined1 *)puVar20 = 0;
      uVar9 = 0xffffffff;
      local_2a4[0] = 0xc;
      pcVar21 = PTR_DAT_0079c0dc;
      do {
        pcVar19 = pcVar21;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar19 = pcVar21 + 1;
        cVar23 = *pcVar21;
        pcVar21 = pcVar19;
      } while (cVar23 != '\0');
      uVar9 = ~uVar9;
      pcVar21 = pcVar19 + -uVar9;
      ppDVar17 = (DArrayTy **)(local_2a4 + 1);
      for (uVar14 = uVar9 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *ppDVar17 = *(DArrayTy **)pcVar21;
        pcVar21 = pcVar21 + 4;
        ppDVar17 = ppDVar17 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)ppDVar17 = *pcVar21;
        pcVar21 = pcVar21 + 1;
        ppDVar17 = (DArrayTy **)((int)ppDVar17 + 1);
      }
      local_c = (DArrayTy **)(local_2a4 + 1);
      cMf32::ToBeg(pcVar3,FUN_006f2d10,local_2a4);
      this_01 = local_14;
      pcVar21 = (char *)cMf32::RecNameGetNext(local_14);
      pcVar3 = extraout_ECX;
      while (pcVar21 != (char *)0x0) {
        local_10 = 0;
        local_c = (DArrayTy **)0x0;
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,PTR_DAT_0079c0dc,s__01d_02d_007ccf40);
        iVar4 = Library::MSVCRT::FUN_0072ee80(pcVar21,(byte *)&DAT_0080f33a);
        if (((iVar4 == 2) && (local_10 != 0)) && (local_10 < 4)) {
          Library::DKW::TBL::FUN_006ae1c0(*(uint **)(&this_03->field_0x343 + local_10 * 4),&local_c)
          ;
        }
        pcVar21 = (char *)cMf32::RecNameGetNext(this_01);
        pcVar3 = extraout_ECX_00;
      }
      cMf32::delete(pcVar3,this_01);
    }
    do {
      local_c = &this_03->field_0347;
      local_8 = 0;
      local_10 = 3;
      do {
        uVar9 = 0;
        if ((*local_c)->count != 1 && -1 < (int)((*local_c)->count - 1)) {
          do {
            pDVar12 = *local_c;
            if (uVar9 < pDVar12->count) {
              puVar18 = (uint *)(pDVar12->elementSize * uVar9 + (int)pDVar12->data);
            }
            else {
              puVar18 = (uint *)0x0;
            }
            uVar14 = uVar9 + 1;
            if (uVar14 < pDVar12->count) {
              puVar15 = (uint *)(pDVar12->elementSize * uVar14 + (int)pDVar12->data);
            }
            else {
              puVar15 = (uint *)0x0;
            }
            if (*puVar15 < *puVar18) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)pDVar12,uVar9,uVar14);
              local_8 = 1;
            }
            uVar9 = uVar14;
          } while ((int)uVar14 < (int)((*local_c)->count - 1));
        }
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    } while (local_8 != 0);
    iVar4 = 2;
    piVar16 = &this_03->field_034F;
    do {
      if (*(int *)(*piVar16 + 0xc) != 0) {
        this_03->field_006A = (char)iVar4;
      }
      iVar4 = iVar4 + -1;
      piVar16 = piVar16 + -1;
    } while (-1 < iVar4);
    local_10 = 0;
  }
  else {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::GameResult((CFsgsConnection *)&DAT_00802a90,2 - (DAT_0080c522 != 0));
    }
    this_03->field_0067 = 1;
  }
  if (PTR_0081176c->field_02E6 != (MMsgTy *)0x0) {
    MMsgTy::HidePanel(PTR_0081176c->field_02E6,0,0,1);
  }
  SetCtrl(this_03,0);
  PutDDX(0,0,'\x01',(BITMAPINFO *)this_03->field_005D);
  local_8 = 0xffffffff;
  FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0x2bd,0x15e,
               (uint)&PTR_0081176c->field_0x140);
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x47,0x46);
  pHVar13 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar13 == (HoloTy *)0x0) {
    pHVar13 = (HoloTy *)0x0;
  }
  else {
    pHVar13->field_0002 = 1;
    pHVar13->field_0000 = 0;
    pHVar13->field_0003 = 0xffffffff;
    pHVar13->field_0001 = CASE_2;
    pHVar13->field_0007 = 0;
    pHVar13->field_000B = 0;
    *(undefined4 *)&pHVar13->field_0xf = 0;
    *(undefined4 *)&pHVar13->field_0x1b = 1;
    pHVar13->field_0013 = 1;
    pHVar13->field_0017 = 0xffffffff;
    pHVar13->field_0027 = 0;
    pHVar13->field_0023 = 0;
    pHVar13->field_002F = 1;
    pHVar13->field_002B = 1;
  }
  this_03->field_0453 = pHVar13;
  if (pHVar13 != (HoloTy *)0x0) {
    uVar14 = 0;
    cVar23 = '\x01';
    uVar9 = 0x10;
    iVar22 = 1;
    iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x47,0x46,0x2bd,0x15e);
    uVar9 = HoloTy::Init(this_03->field_0453,CASE_2,0x47,0x46,iVar4,iVar22,uVar9,cVar23,uVar14);
    if (uVar9 != 0) {
      pHVar13 = this_03->field_0453;
      pHVar13->field_0002 = 1;
      pHVar13->field_0017 = pHVar13->field_0013;
      uVar9 = this_03->field_0453->field_0003;
      if (-1 < (int)uVar9) {
        FUN_006b3af0(DAT_008075a8,uVar9);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0(DAT_008075a8,local_8);
    local_8 = 0xffffffff;
  }
  FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x401217,0x2e9,0x32,(uint)this_03);
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x1a,10);
  pHVar13 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar13 == (HoloTy *)0x0) {
    pHVar13 = (HoloTy *)0x0;
  }
  else {
    pHVar13->field_0002 = 1;
    pHVar13->field_0000 = 0;
    pHVar13->field_0003 = 0xffffffff;
    pHVar13->field_0001 = CASE_2;
    pHVar13->field_0007 = 0;
    pHVar13->field_000B = 0;
    *(undefined4 *)&pHVar13->field_0xf = 0;
    *(undefined4 *)&pHVar13->field_0x1b = 1;
    pHVar13->field_0013 = 1;
    pHVar13->field_0017 = 0xffffffff;
    pHVar13->field_0027 = 0;
    pHVar13->field_0023 = 0;
    pHVar13->field_002F = 1;
    pHVar13->field_002B = 1;
  }
  this_03->field_0457 = pHVar13;
  if (pHVar13 != (HoloTy *)0x0) {
    uVar14 = 0;
    cVar23 = '\x01';
    uVar9 = 0x10;
    iVar22 = 1;
    iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x1a,10,0x2e9,0x32);
    uVar9 = HoloTy::Init(this_03->field_0457,CASE_3,0x1a,10,iVar4,iVar22,uVar9,cVar23,uVar14);
    if (uVar9 != 0) {
      pHVar13 = this_03->field_0457;
      pHVar13->field_0002 = 1;
      pHVar13->field_0017 = pHVar13->field_0013;
      uVar9 = this_03->field_0457->field_0003;
      if (-1 < (int)uVar9) {
        FUN_006b3af0(DAT_008075a8,uVar9);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0(DAT_008075a8,local_8);
  }
  this_03->field_0065 = 3;
  thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,this_03->field_005D,10,2);
  pHVar13 = this_03->field_0457;
  if (((pHVar13 != (HoloTy *)0x0) && (pHVar13->field_0000 != '\0')) &&
     (-1 < (int)pHVar13->field_0003)) {
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar13->field_0003);
  }
  pHVar13 = this_03->field_0453;
  if (((pHVar13 != (HoloTy *)0x0) && (pHVar13->field_0000 != '\0')) &&
     (-1 < (int)pHVar13->field_0003)) {
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar13->field_0003);
  }
  this_00 = PTR_00802a30;
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    uVar7 = PTR_00802a30->field_00C9;
    uVar1 = PTR_00802a30->field_00C5;
    PTR_00802a30->field_0493 = 3;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,uVar1,uVar7);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_0xd2 = 0;
    *(undefined4 *)&this_00->field_0x4df = 0xffffffff;
  }
  thunk_FUN_00568bc0(&g_sound,0);
  if ((DAT_00807300._1_1_ & 8) != 0) {
    thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
  }
  g_currentExceptionFrame = local_5c.previous;
  return;
}

