
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
  uint *puVar10;
  HoloTy *pHVar11;
  ccFntTy *this_02;
  uint uVar12;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  uint *puVar13;
  int *piVar14;
  MReportTy *this_03;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar15;
  int *piVar16;
  undefined4 *puVar17;
  char *pcVar18;
  int iVar19;
  char cVar20;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar19 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0xc6,0,iVar4,&DAT_007a4ccc,
                                s_MReportTy__InitMReport_007ccf24);
    if (iVar19 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0xc6);
    return;
  }
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    if (DAT_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)DAT_00802a30->field_00AD);
    }
    else if (DAT_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)DAT_00802a30->field_0060,DAT_00802a30->field_001C);
    }
    thunk_FUN_00544940((int)DAT_00802a30);
  }
  DarkScreen(DAT_0080759c,1,0);
  thunk_FUN_005daf20(DAT_0081176c);
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
  iVar4 = FUN_0070a9f0(DAT_00806780,(char *)&DAT_0080f33a,0,1);
  this_03->field_005D = iVar4;
  FUN_006bc360(iVar4,local_6a4,(int *)0x0);
  *(undefined4 *)(DAT_0081176c + 0x140) = 0x18;
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)(DAT_0081176c + 0x144));
  puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,(byte *)s_STATS_007ccf64,0xffffffff,0,1,0,
                      (undefined4 *)0x0);
  this_03->field_007F = puVar6;
  uVar7 = FUN_0070aa50(DAT_00806780,s_RPT_IND_007ccf58,0,1);
  this_03->field_006F = uVar7;
  pcVar8 = (ccFntTy *)thunk_FUN_005defe0(this_03->field_005D,(undefined *)0x0,DAT_00807dd9);
  this_03->field_0083 = pcVar8;
  pcVar8->field_0058 = 1;
  pcVar8->field_005C = 0;
  pcVar8 = (ccFntTy *)thunk_FUN_005df290(this_03->field_005D,(undefined *)0x0,DAT_00807dd9);
  this_03->field_0087 = pcVar8;
  *(ccFntTy **)(DAT_0081176c + 0x38) = pcVar8;
  pcVar8 = (ccFntTy *)ccFntTy::operator(this_02,0x19d,DAT_00806780,s_RPT_FNTN_007ccf4c,0);
  this_03->field_008B = pcVar8;
  pcVar8->field_0058 = 1;
  pcVar8->field_005C = 0;
  iVar4 = 1;
  puVar17 = (undefined4 *)(this_03->field_005D + 0x28);
  uVar9 = FUN_006b4fe0(this_03->field_005D);
  uVar7 = FUN_006b50c0(0x91,0x28,(uint)*(ushort *)(this_03->field_005D + 0xe),uVar9,puVar17,iVar4);
  this_03->field_0077 = uVar7;
  iVar4 = 1;
  puVar17 = (undefined4 *)(this_03->field_005D + 0x28);
  uVar9 = FUN_006b4fe0(this_03->field_005D);
  uVar7 = FUN_006b50c0(300,0x1e,(uint)*(ushort *)(this_03->field_005D + 0xe),uVar9,puVar17,iVar4);
  this_03->field_007B = uVar7;
  iVar4 = 1;
  puVar17 = (undefined4 *)(this_03->field_005D + 0x28);
  uVar9 = FUN_006b4fe0(this_03->field_005D);
  iVar4 = FUN_006b50c0(0x2e9,0x15e,(uint)*(ushort *)(this_03->field_005D + 0xe),uVar9,puVar17,iVar4)
  ;
  this_03->field_0073 = iVar4;
  FUN_006b4170(iVar4,0,0,0,0x2e9,0x15e,0xff);
  FUN_006b5ee0(this_03->field_0073,0,0x2d,0,700,0x15e,0x18,0xd);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&this_03->field_0xa3);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_6a4,0,0x100,0x2e,0x10,(undefined4 *)&this_03->field_0x1a3);
  puVar17 = (undefined4 *)&this_03->field_0x2c7;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
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
    FUN_00710790((int)pcVar8);
  }
  this_03->field_030B = *(undefined4 *)&pcVar8->field_0x8a;
  if (this_03->field_0066 == '\x01') {
    local_14 = (cMf32 *)0x0;
    puVar17 = &this_03->field_0347;
    iVar4 = 3;
    do {
      puVar10 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x18,4,0x18);
      *puVar17 = puVar10;
      puVar17 = puVar17 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pcVar18 = s__s_s_s__s_007ca1ec;
    puVar17 = &DAT_0080f33a;
    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__s_007ca1ec,&DAT_00807680,PTR_s_SAVEGAME__0079c0d4,
              &DAT_00807ddd,PTR_s_PL_LOG_0079c0d8);
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;
    iVar4 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0,puVar17,pcVar18);
    if (iVar4 == 0) {
      local_14 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
    }
    pcVar3 = local_14;
    this_03 = local_18;
    g_currentExceptionFrame = local_a0.previous;
    if (local_14 != (cMf32 *)0x0) {
      puVar17 = (undefined4 *)local_2a4;
      for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
      *(undefined1 *)puVar17 = 0;
      uVar9 = 0xffffffff;
      local_2a4[0] = 0xc;
      pcVar18 = PTR_DAT_0079c0dc;
      do {
        pcVar15 = pcVar18;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar15 = pcVar18 + 1;
        cVar20 = *pcVar18;
        pcVar18 = pcVar15;
      } while (cVar20 != '\0');
      uVar9 = ~uVar9;
      piVar14 = (int *)(pcVar15 + -uVar9);
      piVar16 = (int *)(local_2a4 + 1);
      for (uVar12 = uVar9 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *piVar16 = *piVar14;
        piVar14 = piVar14 + 1;
        piVar16 = piVar16 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)piVar16 = (char)*piVar14;
        piVar14 = (int *)((int)piVar14 + 1);
        piVar16 = (int *)((int)piVar16 + 1);
      }
      local_c = (int *)(local_2a4 + 1);
      cMf32::ToBeg(pcVar3,FUN_006f2d10,local_2a4);
      this_01 = local_14;
      pcVar18 = (char *)cMf32::RecNameGetNext(local_14);
      pcVar3 = extraout_ECX;
      while (pcVar18 != (char *)0x0) {
        local_10 = 0;
        local_c = (int *)0x0;
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,PTR_DAT_0079c0dc,s__01d_02d_007ccf40);
        iVar4 = Library::MSVCRT::FUN_0072ee80(pcVar18,(byte *)&DAT_0080f33a);
        if (((iVar4 == 2) && (local_10 != 0)) && (local_10 < 4)) {
          Library::DKW::TBL::FUN_006ae1c0(*(uint **)(&this_03->field_0x343 + local_10 * 4),&local_c)
          ;
        }
        pcVar18 = (char *)cMf32::RecNameGetNext(this_01);
        pcVar3 = extraout_ECX_00;
      }
      cMf32::delete(pcVar3,&this_01->field_0000);
    }
    do {
      local_c = &this_03->field_0347;
      local_8 = 0;
      local_10 = 3;
      do {
        uVar9 = 0;
        if (*(int *)(*local_c + 0xc) != 1 && -1 < *(int *)(*local_c + 0xc) + -1) {
          do {
            iVar4 = *local_c;
            if (uVar9 < *(uint *)(iVar4 + 0xc)) {
              puVar10 = (uint *)(*(int *)(iVar4 + 8) * uVar9 + *(int *)(iVar4 + 0x1c));
            }
            else {
              puVar10 = (uint *)0x0;
            }
            uVar12 = uVar9 + 1;
            if (uVar12 < *(uint *)(iVar4 + 0xc)) {
              puVar13 = (uint *)(*(int *)(iVar4 + 8) * uVar12 + *(int *)(iVar4 + 0x1c));
            }
            else {
              puVar13 = (uint *)0x0;
            }
            if (*puVar13 < *puVar10) {
              FUN_006b0cd0(iVar4,uVar9,uVar12);
              local_8 = 1;
            }
            uVar9 = uVar12;
          } while ((int)uVar12 < *(int *)(*local_c + 0xc) + -1);
        }
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    } while (local_8 != 0);
    iVar4 = 2;
    piVar14 = &this_03->field_034F;
    do {
      if (*(int *)(*piVar14 + 0xc) != 0) {
        this_03->field_006A = (char)iVar4;
      }
      iVar4 = iVar4 + -1;
      piVar14 = piVar14 + -1;
    } while (-1 < iVar4);
    local_10 = 0;
  }
  else {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::GameResult((CFsgsConnection *)&DAT_00802a90,2 - (DAT_0080c522 != 0));
    }
    this_03->field_0067 = 1;
  }
  if (*(MMsgTy **)(DAT_0081176c + 0x2e6) != (MMsgTy *)0x0) {
    MMsgTy::HidePanel(*(MMsgTy **)(DAT_0081176c + 0x2e6),0,0,1);
  }
  SetCtrl(this_03,0);
  PutDDX(0,0,'\x01',(BITMAPINFO *)this_03->field_005D);
  local_8 = 0xffffffff;
  FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0x2bd,0x15e,DAT_0081176c + 0x140);
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x47,0x46);
  pHVar11 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar11 == (HoloTy *)0x0) {
    pHVar11 = (HoloTy *)0x0;
  }
  else {
    pHVar11->field_0002 = 1;
    pHVar11->field_0000 = 0;
    pHVar11->field_0003 = 0xffffffff;
    pHVar11->field_0001 = 2;
    pHVar11->field_0007 = 0;
    pHVar11->field_000B = 0;
    *(undefined4 *)&pHVar11->field_0xf = 0;
    *(undefined4 *)&pHVar11->field_0x1b = 1;
    pHVar11->field_0013 = 1;
    pHVar11->field_0017 = 0xffffffff;
    pHVar11->field_0027 = 0;
    pHVar11->field_0023 = 0;
    pHVar11->field_002F = 1;
    pHVar11->field_002B = 1;
  }
  this_03->field_0453 = pHVar11;
  if (pHVar11 != (HoloTy *)0x0) {
    uVar12 = 0;
    cVar20 = '\x01';
    uVar9 = 0x10;
    iVar19 = 1;
    iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x47,0x46,0x2bd,0x15e);
    uVar9 = HoloTy::Init(this_03->field_0453,CASE_2,0x47,0x46,iVar4,iVar19,uVar9,cVar20,uVar12);
    if (uVar9 != 0) {
      pHVar11 = this_03->field_0453;
      pHVar11->field_0002 = 1;
      pHVar11->field_0017 = pHVar11->field_0013;
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
  pHVar11 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar11 == (HoloTy *)0x0) {
    pHVar11 = (HoloTy *)0x0;
  }
  else {
    pHVar11->field_0002 = 1;
    pHVar11->field_0000 = 0;
    pHVar11->field_0003 = 0xffffffff;
    pHVar11->field_0001 = 2;
    pHVar11->field_0007 = 0;
    pHVar11->field_000B = 0;
    *(undefined4 *)&pHVar11->field_0xf = 0;
    *(undefined4 *)&pHVar11->field_0x1b = 1;
    pHVar11->field_0013 = 1;
    pHVar11->field_0017 = 0xffffffff;
    pHVar11->field_0027 = 0;
    pHVar11->field_0023 = 0;
    pHVar11->field_002F = 1;
    pHVar11->field_002B = 1;
  }
  this_03->field_0457 = pHVar11;
  if (pHVar11 != (HoloTy *)0x0) {
    uVar12 = 0;
    cVar20 = '\x01';
    uVar9 = 0x10;
    iVar19 = 1;
    iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x1a,10,0x2e9,0x32);
    uVar9 = HoloTy::Init(this_03->field_0457,CASE_3,0x1a,10,iVar4,iVar19,uVar9,cVar20,uVar12);
    if (uVar9 != 0) {
      pHVar11 = this_03->field_0457;
      pHVar11->field_0002 = 1;
      pHVar11->field_0017 = pHVar11->field_0013;
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
  pHVar11 = this_03->field_0457;
  if (((pHVar11 != (HoloTy *)0x0) && (pHVar11->field_0000 != '\0')) &&
     (-1 < (int)pHVar11->field_0003)) {
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar11->field_0003);
  }
  pHVar11 = this_03->field_0453;
  if (((pHVar11 != (HoloTy *)0x0) && (pHVar11->field_0000 != '\0')) &&
     (-1 < (int)pHVar11->field_0003)) {
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar11->field_0003);
  }
  this_00 = DAT_00802a30;
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    uVar7 = DAT_00802a30->field_00C9;
    uVar1 = DAT_00802a30->field_00C5;
    DAT_00802a30->field_0493 = 3;
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

