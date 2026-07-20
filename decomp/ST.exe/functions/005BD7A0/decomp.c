
/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::InitMReport */

void __thiscall MReportTy::InitMReport(MReportTy *this,undefined1 param_1)

{
  AnonShape_006B0CD0_C8D121FA *pAVar1;
  undefined4 uVar2;
  code *pcVar3;
  cMf32 *pcVar4;
  CursorClassTy *this_00;
  cMf32 *this_01;
  int iVar5;
  undefined1 *puVar6;
  ushort *puVar7;
  undefined4 uVar8;
  ccFntTy *pcVar9;
  uint uVar10;
  uint *puVar11;
  HoloTy *pHVar12;
  ccFntTy *this_02;
  uint uVar13;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  uint *puVar14;
  int *piVar15;
  MReportTy *this_03;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar16;
  int *piVar17;
  undefined4 *puVar18;
  char *pcVar19;
  int iVar20;
  char cVar21;
  undefined4 local_6a4 [256];
  undefined1 local_2a4 [516];
  InternalExceptionFrame local_a0;
  InternalExceptionFrame local_5c;
  MReportTy *local_18;
  cMf32 *local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar20 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0xc6,0,iVar5,&DAT_007a4ccc,
                                s_MReportTy__InitMReport_007ccf24);
    if (iVar20 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0xc6);
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
    puVar6 = &DAT_007ca250;
  }
  else {
    puVar6 = &DAT_007ca248;
    if (DAT_0080874e != '\x02') {
      puVar6 = &DAT_007ca24c;
    }
  }
  wsprintfA((LPSTR)&DAT_0080f33a,s_REPORT__s__c_007ccf6c,puVar6,
            (int)(char)((-(DAT_0080c522 != 0) & 0xfbU) + 0x46));
  puVar7 = (ushort *)FUN_0070a9f0(g_cMf32_00806780,(char *)&DAT_0080f33a,0,1);
  this_03->field_005D = puVar7;
  FUN_006bc360(puVar7,local_6a4,(int *)0x0);
  *(undefined4 *)&PTR_0081176c->field_0x140 = 0x18;
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&PTR_0081176c->field_0x144);
  puVar7 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,s_STATS_007ccf64,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_03->field_007F = puVar7;
  uVar8 = FUN_0070aa50(g_cMf32_00806780,s_RPT_IND_007ccf58,0,1);
  this_03->field_006F = uVar8;
  pcVar9 = (ccFntTy *)thunk_FUN_005defe0(this_03->field_005D,(undefined *)0x0,DAT_00807dd9);
  this_03->field_0083 = pcVar9;
  pcVar9->field_0058 = 1;
  pcVar9->field_005C = 0;
  pcVar9 = (ccFntTy *)thunk_FUN_005df290(this_03->field_005D,(undefined *)0x0,DAT_00807dd9);
  this_03->field_0087 = pcVar9;
  PTR_0081176c->field_0038 = pcVar9;
  pcVar9 = (ccFntTy *)ccFntTy::operator(this_02,0x19d,g_cMf32_00806780,s_RPT_FNTN_007ccf4c,0);
  this_03->field_008B = pcVar9;
  pcVar9->field_0058 = 1;
  pcVar9->field_005C = 0;
  iVar5 = 1;
  puVar18 = (undefined4 *)(this_03->field_005D + 0x28);
  uVar10 = FUN_006b4fe0(this_03->field_005D);
  uVar8 = FUN_006b50c0(0x91,0x28,(uint)*(ushort *)(this_03->field_005D + 0xe),uVar10,puVar18,iVar5);
  this_03->field_0077 = uVar8;
  iVar5 = 1;
  puVar18 = (undefined4 *)(this_03->field_005D + 0x28);
  uVar10 = FUN_006b4fe0(this_03->field_005D);
  uVar8 = FUN_006b50c0(300,0x1e,(uint)*(ushort *)(this_03->field_005D + 0xe),uVar10,puVar18,iVar5);
  this_03->field_007B = uVar8;
  iVar5 = 1;
  puVar18 = (undefined4 *)(this_03->field_005D + 0x28);
  uVar10 = FUN_006b4fe0(this_03->field_005D);
  iVar5 = FUN_006b50c0(0x2e9,0x15e,(uint)*(ushort *)(this_03->field_005D + 0xe),uVar10,puVar18,iVar5
                      );
  this_03->field_0073 = iVar5;
  FUN_006b4170(iVar5,0,0,0,0x2e9,0x15e,0xff);
  FUN_006b5ee0(this_03->field_0073,0,0x2d,0,700,0x15e,0x18,0xd);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&this_03->field_0xa3);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x2e,0x10,(undefined4 *)&this_03->field_0x1a3);
  puVar18 = (undefined4 *)&this_03->field_0x2c7;
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar18 = 0;
    puVar18 = puVar18 + 1;
  }
  this_03->field_0323 = &this_03->field_0xa3;
  pcVar9 = this_03->field_0087;
  this_03->field_02EF = this_03->field_0008;
  this_03->field_02CF = this_03->field_0008;
  this_03->field_02F3 = 2;
  this_03->field_02D3 = 2;
  this_03->field_0313 = this_03->field_005D;
  this_03->field_031B = 0x18;
  this_03->field_0317 = 0x4c;
  if (pcVar9->field_00A0 != 0) {
    FUN_00710790((uint *)pcVar9);
  }
  this_03->field_030B = *(undefined4 *)&pcVar9->field_0x8a;
  if (this_03->field_0066 == '\x01') {
    local_14 = (cMf32 *)0x0;
    puVar18 = &this_03->field_0347;
    iVar5 = 3;
    do {
      puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x18,4,0x18);
      *puVar18 = puVar11;
      puVar18 = puVar18 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    pcVar19 = s__s_s_s__s_007ca1ec;
    puVar18 = &DAT_0080f33a;
    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__s_007ca1ec,&DAT_00807680,PTR_s_SAVEGAME__0079c0d4,
              &DAT_00807ddd,PTR_s_PL_LOG_0079c0d8);
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;
    iVar5 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0,puVar18,pcVar19);
    if (iVar5 == 0) {
      local_14 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
    }
    pcVar4 = local_14;
    this_03 = local_18;
    g_currentExceptionFrame = local_a0.previous;
    if (local_14 != (cMf32 *)0x0) {
      puVar18 = (undefined4 *)local_2a4;
      for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar18 = 0;
        puVar18 = puVar18 + 1;
      }
      *(undefined1 *)puVar18 = 0;
      uVar10 = 0xffffffff;
      local_2a4[0] = 0xc;
      pcVar19 = PTR_DAT_0079c0dc;
      do {
        pcVar16 = pcVar19;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar16 = pcVar19 + 1;
        cVar21 = *pcVar19;
        pcVar19 = pcVar16;
      } while (cVar21 != '\0');
      uVar10 = ~uVar10;
      piVar15 = (int *)(pcVar16 + -uVar10);
      piVar17 = (int *)(local_2a4 + 1);
      for (uVar13 = uVar10 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *piVar17 = *piVar15;
        piVar15 = piVar15 + 1;
        piVar17 = piVar17 + 1;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(char *)piVar17 = (char)*piVar15;
        piVar15 = (int *)((int)piVar15 + 1);
        piVar17 = (int *)((int)piVar17 + 1);
      }
      local_c = (int *)(local_2a4 + 1);
      cMf32::ToBeg(pcVar4,FUN_006f2d10,local_2a4);
      this_01 = local_14;
      pcVar19 = (char *)cMf32::RecNameGetNext(local_14);
      pcVar4 = extraout_ECX;
      while (pcVar19 != (char *)0x0) {
        local_10 = 0;
        local_c = (int *)0x0;
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,PTR_DAT_0079c0dc,s__01d_02d_007ccf40);
        iVar5 = Library::MSVCRT::FUN_0072ee80(pcVar19,(byte *)&DAT_0080f33a);
        if (((iVar5 == 2) && (local_10 != 0)) && (local_10 < 4)) {
          Library::DKW::TBL::FUN_006ae1c0(*(uint **)(&this_03->field_0x343 + local_10 * 4),&local_c)
          ;
        }
        pcVar19 = (char *)cMf32::RecNameGetNext(this_01);
        pcVar4 = extraout_ECX_00;
      }
      cMf32::delete(pcVar4,this_01);
    }
    do {
      local_c = &this_03->field_0347;
      local_8 = 0;
      local_10 = 3;
      do {
        uVar10 = 0;
        if (*(int *)(*local_c + 0xc) != 1 && -1 < *(int *)(*local_c + 0xc) + -1) {
          do {
            pAVar1 = (AnonShape_006B0CD0_C8D121FA *)*local_c;
            if (uVar10 < pAVar1->field_000C) {
              puVar11 = (uint *)(pAVar1->field_0008 * uVar10 + pAVar1->field_001C);
            }
            else {
              puVar11 = (uint *)0x0;
            }
            uVar13 = uVar10 + 1;
            if (uVar13 < pAVar1->field_000C) {
              puVar14 = (uint *)(pAVar1->field_0008 * uVar13 + pAVar1->field_001C);
            }
            else {
              puVar14 = (uint *)0x0;
            }
            if (*puVar14 < *puVar11) {
              FUN_006b0cd0(pAVar1,uVar10,uVar13);
              local_8 = 1;
            }
            uVar10 = uVar13;
          } while ((int)uVar13 < *(int *)(*local_c + 0xc) + -1);
        }
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    } while (local_8 != 0);
    iVar5 = 2;
    piVar15 = &this_03->field_034F;
    do {
      if (*(int *)(*piVar15 + 0xc) != 0) {
        this_03->field_006A = (char)iVar5;
      }
      iVar5 = iVar5 + -1;
      piVar15 = piVar15 + -1;
    } while (-1 < iVar5);
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
  pHVar12 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar12 == (HoloTy *)0x0) {
    pHVar12 = (HoloTy *)0x0;
  }
  else {
    pHVar12->field_0002 = 1;
    pHVar12->field_0000 = 0;
    pHVar12->field_0003 = 0xffffffff;
    pHVar12->field_0001 = CASE_2;
    pHVar12->field_0007 = 0;
    pHVar12->field_000B = 0;
    *(undefined4 *)&pHVar12->field_0xf = 0;
    *(undefined4 *)&pHVar12->field_0x1b = 1;
    pHVar12->field_0013 = 1;
    pHVar12->field_0017 = 0xffffffff;
    pHVar12->field_0027 = 0;
    pHVar12->field_0023 = 0;
    pHVar12->field_002F = 1;
    pHVar12->field_002B = 1;
  }
  this_03->field_0453 = pHVar12;
  if (pHVar12 != (HoloTy *)0x0) {
    uVar13 = 0;
    cVar21 = '\x01';
    uVar10 = 0x10;
    iVar20 = 1;
    iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x47,0x46,0x2bd,0x15e);
    uVar10 = HoloTy::Init(this_03->field_0453,CASE_2,0x47,0x46,iVar5,iVar20,uVar10,cVar21,uVar13);
    if (uVar10 != 0) {
      pHVar12 = this_03->field_0453;
      pHVar12->field_0002 = 1;
      pHVar12->field_0017 = pHVar12->field_0013;
      uVar10 = this_03->field_0453->field_0003;
      if (-1 < (int)uVar10) {
        FUN_006b3af0(DAT_008075a8,uVar10);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0(DAT_008075a8,local_8);
    local_8 = 0xffffffff;
  }
  FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x401217,0x2e9,0x32,(uint)this_03);
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x1a,10);
  pHVar12 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar12 == (HoloTy *)0x0) {
    pHVar12 = (HoloTy *)0x0;
  }
  else {
    pHVar12->field_0002 = 1;
    pHVar12->field_0000 = 0;
    pHVar12->field_0003 = 0xffffffff;
    pHVar12->field_0001 = CASE_2;
    pHVar12->field_0007 = 0;
    pHVar12->field_000B = 0;
    *(undefined4 *)&pHVar12->field_0xf = 0;
    *(undefined4 *)&pHVar12->field_0x1b = 1;
    pHVar12->field_0013 = 1;
    pHVar12->field_0017 = 0xffffffff;
    pHVar12->field_0027 = 0;
    pHVar12->field_0023 = 0;
    pHVar12->field_002F = 1;
    pHVar12->field_002B = 1;
  }
  this_03->field_0457 = pHVar12;
  if (pHVar12 != (HoloTy *)0x0) {
    uVar13 = 0;
    cVar21 = '\x01';
    uVar10 = 0x10;
    iVar20 = 1;
    iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x1a,10,0x2e9,0x32);
    uVar10 = HoloTy::Init(this_03->field_0457,CASE_3,0x1a,10,iVar5,iVar20,uVar10,cVar21,uVar13);
    if (uVar10 != 0) {
      pHVar12 = this_03->field_0457;
      pHVar12->field_0002 = 1;
      pHVar12->field_0017 = pHVar12->field_0013;
      uVar10 = this_03->field_0457->field_0003;
      if (-1 < (int)uVar10) {
        FUN_006b3af0(DAT_008075a8,uVar10);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0(DAT_008075a8,local_8);
  }
  this_03->field_0065 = 3;
  thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,this_03->field_005D,10,2);
  pHVar12 = this_03->field_0457;
  if (((pHVar12 != (HoloTy *)0x0) && (pHVar12->field_0000 != '\0')) &&
     (-1 < (int)pHVar12->field_0003)) {
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar12->field_0003);
  }
  pHVar12 = this_03->field_0453;
  if (((pHVar12 != (HoloTy *)0x0) && (pHVar12->field_0000 != '\0')) &&
     (-1 < (int)pHVar12->field_0003)) {
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar12->field_0003);
  }
  this_00 = PTR_00802a30;
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    uVar8 = PTR_00802a30->field_00C9;
    uVar2 = PTR_00802a30->field_00C5;
    PTR_00802a30->field_0493 = 3;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,uVar2,uVar8);
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

