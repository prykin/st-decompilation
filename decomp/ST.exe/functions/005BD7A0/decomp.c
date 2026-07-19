
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
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  ccFntTy *this_02;
  uint uVar11;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  uint *puVar12;
  int *piVar13;
  MReportTy *this_03;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar14;
  int *piVar15;
  char *pcVar16;
  int iVar17;
  char cVar18;
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
    iVar17 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0xc6,0,iVar4,&DAT_007a4ccc,
                                s_MReportTy__InitMReport_007ccf24);
    if (iVar17 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0xc6);
    return;
  }
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    if (*(int *)&DAT_00802a30[1].field_0x45 == 0) {
      Library::DKW::DDX::FUN_006b8b10(*(int **)&DAT_00802a30[1].field_0x49);
    }
    else if (DAT_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)DAT_00802a30->field_0060,DAT_00802a30->field_001C);
    }
    thunk_FUN_00544940((int)DAT_00802a30);
  }
  thunk_FUN_0055dbf0(DAT_0080759c,1,0);
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
  *(int *)&this_03->field_0x5d = iVar4;
  FUN_006bc360(iVar4,local_6a4,(int *)0x0);
  *(undefined4 *)(DAT_0081176c + 0x140) = 0x18;
  FUN_00718780((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)(DAT_0081176c + 0x144));
  puVar6 = FUN_00709af0(DAT_00806784,CASE_B,(byte *)s_STATS_007ccf64,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)(this_03 + 1) = puVar6;
  uVar7 = FUN_0070aa50(DAT_00806780,s_RPT_IND_007ccf58,0,1);
  *(undefined4 *)&this_03->field_0x6f = uVar7;
  iVar4 = thunk_FUN_005defe0(*(int *)&this_03->field_0x5d,(undefined *)0x0,DAT_00807dd9);
  *(int *)&this_03[1].field_0x4 = iVar4;
  *(undefined4 *)(iVar4 + 0x58) = 1;
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  uVar7 = thunk_FUN_005df290(*(int *)&this_03->field_0x5d,(undefined *)0x0,DAT_00807dd9);
  *(undefined4 *)&this_03[1].field_0x8 = uVar7;
  *(undefined4 *)(DAT_0081176c + 0x38) = uVar7;
  puVar8 = ccFntTy::operator(this_02,0x19d,DAT_00806780,s_RPT_FNTN_007ccf4c,0);
  *(undefined4 **)&this_03[1].field_0xc = puVar8;
  puVar8[0x16] = 1;
  puVar8[0x17] = 0;
  iVar4 = 1;
  puVar8 = (undefined4 *)(*(int *)&this_03->field_0x5d + 0x28);
  uVar9 = FUN_006b4fe0(*(int *)&this_03->field_0x5d);
  uVar7 = FUN_006b50c0(0x91,0x28,(uint)*(ushort *)(*(int *)&this_03->field_0x5d + 0xe),uVar9,puVar8,
                       iVar4);
  this_03->field_0077 = uVar7;
  iVar4 = 1;
  puVar8 = (undefined4 *)(*(int *)&this_03->field_0x5d + 0x28);
  uVar9 = FUN_006b4fe0(*(int *)&this_03->field_0x5d);
  uVar7 = FUN_006b50c0(300,0x1e,(uint)*(ushort *)(*(int *)&this_03->field_0x5d + 0xe),uVar9,puVar8,
                       iVar4);
  this_03->field_007B = uVar7;
  iVar4 = 1;
  puVar8 = (undefined4 *)(*(int *)&this_03->field_0x5d + 0x28);
  uVar9 = FUN_006b4fe0(*(int *)&this_03->field_0x5d);
  iVar4 = FUN_006b50c0(0x2e9,0x15e,(uint)*(ushort *)(*(int *)&this_03->field_0x5d + 0xe),uVar9,
                       puVar8,iVar4);
  *(int *)&this_03->field_0x73 = iVar4;
  FUN_006b4170(iVar4,0,0,0,0x2e9,0x15e,0xff);
  FUN_006b5ee0(*(int *)&this_03->field_0x73,0,0x2d,0,700,0x15e,0x18,0xd);
  FUN_00718780((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)&this_03[1].field_0x24);
  FUN_00718780((int)local_6a4,0,0x100,0x2e,0x10,(undefined4 *)&this_03[3].field_0x26);
  puVar8 = (undefined4 *)&this_03[5].field_0x4c;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  uVar7 = *(undefined4 *)&this_03->field_0x8;
  uVar1 = *(undefined4 *)&this_03->field_0x5d;
  *(undefined1 **)&this_03[6].field_0x29 = &this_03[1].field_0x24;
  iVar4 = *(int *)&this_03[1].field_0x8;
  *(undefined4 *)&this_03[5].field_0x74 = uVar7;
  *(undefined4 *)&this_03[5].field_0x54 = uVar7;
  *(undefined4 *)((int)&this_03[5].field_0077 + 1) = 2;
  *(undefined4 *)&this_03[5].field_0x58 = 2;
  *(undefined4 *)&this_03[6].field_0x19 = uVar1;
  *(undefined4 *)&this_03[6].field_0x21 = 0x18;
  *(undefined4 *)&this_03[6].field_0x1d = 0x4c;
  if (*(int *)(iVar4 + 0xa0) != 0) {
    FUN_00710790(iVar4);
  }
  cVar18 = this_03->field_0066;
  *(undefined4 *)((int)&this_03[6].field_0010 + 1) = *(undefined4 *)(iVar4 + 0x8a);
  if (cVar18 == '\x01') {
    local_14 = (cMf32 *)0x0;
    puVar8 = (undefined4 *)&this_03[6].field_0x4d;
    iVar4 = 3;
    do {
      puVar10 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x18,4,0x18);
      *puVar8 = puVar10;
      puVar8 = puVar8 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pcVar16 = s__s_s_s__s_007ca1ec;
    puVar8 = &DAT_0080f33a;
    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__s_007ca1ec,&DAT_00807680,PTR_s_SAVEGAME__0079c0d4,
              &DAT_00807ddd,PTR_s_PL_LOG_0079c0d8);
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;
    iVar4 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0,puVar8,pcVar16);
    if (iVar4 == 0) {
      local_14 = (cMf32 *)FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
    }
    pcVar3 = local_14;
    this_03 = local_18;
    g_currentExceptionFrame = local_a0.previous;
    if (local_14 != (cMf32 *)0x0) {
      puVar8 = (undefined4 *)local_2a4;
      for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      *(undefined1 *)puVar8 = 0;
      uVar9 = 0xffffffff;
      local_2a4[0] = 0xc;
      pcVar16 = PTR_DAT_0079c0dc;
      do {
        pcVar14 = pcVar16;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar16 + 1;
        cVar18 = *pcVar16;
        pcVar16 = pcVar14;
      } while (cVar18 != '\0');
      uVar9 = ~uVar9;
      piVar13 = (int *)(pcVar14 + -uVar9);
      piVar15 = (int *)(local_2a4 + 1);
      for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *piVar15 = *piVar13;
        piVar13 = piVar13 + 1;
        piVar15 = piVar15 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)piVar15 = (char)*piVar13;
        piVar13 = (int *)((int)piVar13 + 1);
        piVar15 = (int *)((int)piVar15 + 1);
      }
      local_c = (int *)(local_2a4 + 1);
      cMf32::ToBeg(pcVar3,FUN_006f2d10,local_2a4);
      this_01 = local_14;
      pcVar16 = (char *)cMf32::RecNameGetNext(local_14);
      pcVar3 = extraout_ECX;
      while (pcVar16 != (char *)0x0) {
        local_10 = 0;
        local_c = (int *)0x0;
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,PTR_DAT_0079c0dc,s__01d_02d_007ccf40);
        iVar4 = Library::MSVCRT::FUN_0072ee80(pcVar16,(byte *)&DAT_0080f33a);
        if (((iVar4 == 2) && (local_10 != 0)) && (local_10 < 4)) {
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)(&this_03[6].field_0x49 + local_10 * 4),&local_c);
        }
        pcVar16 = (char *)cMf32::RecNameGetNext(this_01);
        pcVar3 = extraout_ECX_00;
      }
      cMf32::delete(pcVar3,(undefined4 *)this_01);
    }
    do {
      local_c = (int *)&this_03[6].field_0x4d;
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
            uVar11 = uVar9 + 1;
            if (uVar11 < *(uint *)(iVar4 + 0xc)) {
              puVar12 = (uint *)(*(int *)(iVar4 + 8) * uVar11 + *(int *)(iVar4 + 0x1c));
            }
            else {
              puVar12 = (uint *)0x0;
            }
            if (*puVar12 < *puVar10) {
              FUN_006b0cd0(iVar4,uVar9,uVar11);
              local_8 = 1;
            }
            uVar9 = uVar11;
          } while ((int)uVar11 < *(int *)(*local_c + 0xc) + -1);
        }
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    } while (local_8 != 0);
    iVar4 = 2;
    piVar13 = (int *)&this_03[6].field_0x55;
    do {
      if (*(int *)(*piVar13 + 0xc) != 0) {
        this_03->field_006A = (char)iVar4;
      }
      iVar4 = iVar4 + -1;
      piVar13 = piVar13 + -1;
    } while (-1 < iVar4);
    local_10 = 0;
  }
  else {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::GameResult((CFsgsConnection *)&DAT_00802a90,2 - (DAT_0080c522 != 0));
    }
    this_03->field_0x67 = 1;
  }
  if (*(MMsgTy **)(DAT_0081176c + 0x2e6) != (MMsgTy *)0x0) {
    MMsgTy::HidePanel(*(MMsgTy **)(DAT_0081176c + 0x2e6),0,0,1);
  }
  SetCtrl(this_03,0);
  thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)&this_03->field_0x5d);
  local_8 = 0xffffffff;
  FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0x2bd,0x15e,DAT_0081176c + 0x140);
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x47,0x46);
  puVar5 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5[2] = 1;
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 3) = 0xffffffff;
    puVar5[1] = 2;
    *(undefined4 *)(puVar5 + 7) = 0;
    *(undefined4 *)(puVar5 + 0xb) = 0;
    *(undefined4 *)(puVar5 + 0xf) = 0;
    *(undefined4 *)(puVar5 + 0x1b) = 1;
    *(undefined4 *)(puVar5 + 0x13) = 1;
    *(undefined4 *)(puVar5 + 0x17) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0x27) = 0;
    *(undefined4 *)(puVar5 + 0x23) = 0;
    *(undefined4 *)(puVar5 + 0x2f) = 1;
    *(undefined4 *)(puVar5 + 0x2b) = 1;
  }
  *(undefined1 **)&this_03[8].field_0x5b = puVar5;
  if (puVar5 != (undefined1 *)0x0) {
    uVar11 = 0;
    cVar18 = '\x01';
    uVar9 = 0x10;
    iVar17 = 1;
    iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x47,0x46,0x2bd,0x15e);
    uVar9 = HoloTy::Init(*(HoloTy **)&this_03[8].field_0x5b,2,0x47,0x46,iVar4,iVar17,uVar9,cVar18,
                         uVar11);
    if (uVar9 != 0) {
      iVar4 = *(int *)&this_03[8].field_0x5b;
      *(undefined1 *)(iVar4 + 2) = 1;
      *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
      uVar9 = *(uint *)(*(int *)&this_03[8].field_0x5b + 3);
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
  puVar5 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5[2] = 1;
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 3) = 0xffffffff;
    puVar5[1] = 2;
    *(undefined4 *)(puVar5 + 7) = 0;
    *(undefined4 *)(puVar5 + 0xb) = 0;
    *(undefined4 *)(puVar5 + 0xf) = 0;
    *(undefined4 *)(puVar5 + 0x1b) = 1;
    *(undefined4 *)(puVar5 + 0x13) = 1;
    *(undefined4 *)(puVar5 + 0x17) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0x27) = 0;
    *(undefined4 *)(puVar5 + 0x23) = 0;
    *(undefined4 *)(puVar5 + 0x2f) = 1;
    *(undefined4 *)(puVar5 + 0x2b) = 1;
  }
  *(undefined1 **)&this_03[8].field_0x5f = puVar5;
  if (puVar5 != (undefined1 *)0x0) {
    uVar11 = 0;
    cVar18 = '\x01';
    uVar9 = 0x10;
    iVar17 = 1;
    iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x1a,10,0x2e9,0x32);
    uVar9 = HoloTy::Init(*(HoloTy **)&this_03[8].field_0x5f,3,0x1a,10,iVar4,iVar17,uVar9,cVar18,
                         uVar11);
    if (uVar9 != 0) {
      iVar4 = *(int *)&this_03[8].field_0x5f;
      *(undefined1 *)(iVar4 + 2) = 1;
      *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
      uVar9 = *(uint *)(*(int *)&this_03[8].field_0x5f + 3);
      if (-1 < (int)uVar9) {
        FUN_006b3af0(DAT_008075a8,uVar9);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0(DAT_008075a8,local_8);
  }
  this_03->field_0x65 = 3;
  thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)&this_03->field_0x5d,10,2);
  pcVar16 = *(char **)&this_03[8].field_0x5f;
  if (((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) && (-1 < (int)*(uint *)(pcVar16 + 3))) {
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pcVar16 + 3));
  }
  pcVar16 = *(char **)&this_03[8].field_0x5b;
  if (((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) && (-1 < (int)*(uint *)(pcVar16 + 3))) {
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pcVar16 + 3));
  }
  this_00 = DAT_00802a30;
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    uVar7 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
    uVar1 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
    DAT_00802a30[0xb].field_0x47 = 3;
    *(undefined2 *)&this_00[0xb].field_0x48 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,uVar1,uVar7);
    CursorClassTy::DrawSprite
              (this_00,*(int *)((int)&this_00[1].field_0060 + 1),*(int *)&this_00[2].field_0x1);
    this_00[2].field_0xa = 0;
    *(undefined4 *)&this_00[0xc].field_0x2f = 0xffffffff;
  }
  thunk_FUN_00568bc0(&g_sound,0);
  if ((DAT_00807300._1_1_ & 8) != 0) {
    thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
  }
  g_currentExceptionFrame = local_5c.previous;
  return;
}

