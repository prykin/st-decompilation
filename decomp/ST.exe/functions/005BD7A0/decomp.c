
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::InitMReport */

void __thiscall MReportTy::InitMReport(MReportTy *this,MReportTy param_1)

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
  MReportTy *pMVar13;
  MReportTy *pMVar14;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar15;
  MReportTy *pMVar16;
  char *pcVar17;
  int iVar18;
  char cVar19;
  undefined4 local_6a4 [256];
  undefined1 local_2a4 [516];
  InternalExceptionFrame local_a0;
  InternalExceptionFrame local_5c;
  MReportTy *local_18;
  cMf32 *local_14;
  uint local_10;
  MReportTy *local_c;
  uint local_8;
  
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar18 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0xc6,0,iVar4,&DAT_007a4ccc,
                                s_MReportTy__InitMReport_007ccf24);
    if (iVar18 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0xc6);
    return;
  }
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
    thunk_FUN_00544940((int)DAT_00802a30);
  }
  thunk_FUN_0055dbf0(DAT_0080759c,1,0);
  thunk_FUN_005daf20(DAT_0081176c);
  pMVar14 = local_18;
  DAT_0080877e = 1;
  DAT_0080877f = 0;
  local_18[0x66] = param_1;
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
  *(int *)(pMVar14 + 0x5d) = iVar4;
  FUN_006bc360(iVar4,local_6a4,(int *)0x0);
  *(undefined4 *)(DAT_0081176c + 0x140) = 0x18;
  FUN_00718780((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)(DAT_0081176c + 0x144));
  puVar6 = FUN_00709af0(DAT_00806784,0xb,(byte *)s_STATS_007ccf64,0xffffffff,0,1,0,(undefined4 *)0x0
                       );
  *(ushort **)(pMVar14 + 0x7f) = puVar6;
  uVar7 = FUN_0070aa50(DAT_00806780,s_RPT_IND_007ccf58,0,1);
  *(undefined4 *)(pMVar14 + 0x6f) = uVar7;
  iVar4 = thunk_FUN_005defe0(*(int *)(pMVar14 + 0x5d),(undefined *)0x0,DAT_00807dd9);
  *(int *)(pMVar14 + 0x83) = iVar4;
  *(undefined4 *)(iVar4 + 0x58) = 1;
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  uVar7 = thunk_FUN_005df290(*(int *)(pMVar14 + 0x5d),(undefined *)0x0,DAT_00807dd9);
  *(undefined4 *)(pMVar14 + 0x87) = uVar7;
  *(undefined4 *)(DAT_0081176c + 0x38) = uVar7;
  puVar8 = ccFntTy::operator(this_02,0x19d,DAT_00806780,s_RPT_FNTN_007ccf4c,0);
  *(undefined4 **)(pMVar14 + 0x8b) = puVar8;
  puVar8[0x16] = 1;
  puVar8[0x17] = 0;
  iVar4 = 1;
  puVar8 = (undefined4 *)(*(int *)(pMVar14 + 0x5d) + 0x28);
  uVar9 = FUN_006b4fe0(*(int *)(pMVar14 + 0x5d));
  uVar7 = FUN_006b50c0(0x91,0x28,(uint)*(ushort *)(*(int *)(pMVar14 + 0x5d) + 0xe),uVar9,puVar8,
                       iVar4);
  *(undefined4 *)(pMVar14 + 0x77) = uVar7;
  iVar4 = 1;
  puVar8 = (undefined4 *)(*(int *)(pMVar14 + 0x5d) + 0x28);
  uVar9 = FUN_006b4fe0(*(int *)(pMVar14 + 0x5d));
  uVar7 = FUN_006b50c0(300,0x1e,(uint)*(ushort *)(*(int *)(pMVar14 + 0x5d) + 0xe),uVar9,puVar8,iVar4
                      );
  *(undefined4 *)(pMVar14 + 0x7b) = uVar7;
  iVar4 = 1;
  puVar8 = (undefined4 *)(*(int *)(pMVar14 + 0x5d) + 0x28);
  uVar9 = FUN_006b4fe0(*(int *)(pMVar14 + 0x5d));
  iVar4 = FUN_006b50c0(0x2e9,0x15e,(uint)*(ushort *)(*(int *)(pMVar14 + 0x5d) + 0xe),uVar9,puVar8,
                       iVar4);
  *(int *)(pMVar14 + 0x73) = iVar4;
  FUN_006b4170(iVar4,0,0,0,0x2e9,0x15e,0xff);
  FUN_006b5ee0(*(int *)(pMVar14 + 0x73),0,0x2d,0,700,0x15e,0x18,0xd);
  FUN_00718780((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)(pMVar14 + 0xa3));
  FUN_00718780((int)local_6a4,0,0x100,0x2e,0x10,(undefined4 *)(pMVar14 + 0x1a3));
  pMVar13 = pMVar14 + 0x2c7;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pMVar13 = 0;
    pMVar13 = pMVar13 + 4;
  }
  *(MReportTy **)(pMVar14 + 0x323) = pMVar14 + 0xa3;
  iVar4 = *(int *)(pMVar14 + 0x87);
  *(undefined4 *)(pMVar14 + 0x2ef) = *(undefined4 *)(pMVar14 + 8);
  *(undefined4 *)(pMVar14 + 0x2cf) = *(undefined4 *)(pMVar14 + 8);
  *(undefined4 *)(pMVar14 + 0x2f3) = 2;
  *(undefined4 *)(pMVar14 + 0x2d3) = 2;
  *(undefined4 *)(pMVar14 + 0x313) = *(undefined4 *)(pMVar14 + 0x5d);
  *(undefined4 *)(pMVar14 + 0x31b) = 0x18;
  *(undefined4 *)(pMVar14 + 0x317) = 0x4c;
  if (*(int *)(iVar4 + 0xa0) != 0) {
    FUN_00710790(iVar4);
  }
  *(undefined4 *)(pMVar14 + 0x30b) = *(undefined4 *)(iVar4 + 0x8a);
  if (pMVar14[0x66] == (MReportTy)0x1) {
    local_14 = (cMf32 *)0x0;
    pMVar14 = pMVar14 + 0x347;
    iVar4 = 3;
    do {
      puVar10 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x18,4,0x18);
      *(uint **)pMVar14 = puVar10;
      pMVar14 = pMVar14 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pcVar17 = s__s_s_s__s_007ca1ec;
    puVar8 = &DAT_0080f33a;
    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__s_007ca1ec,&DAT_00807680,PTR_s_SAVEGAME__0079c0d4,
              &DAT_00807ddd,PTR_s_PL_LOG_0079c0d8);
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;
    iVar4 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0,puVar8,pcVar17);
    if (iVar4 == 0) {
      local_14 = (cMf32 *)FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
    }
    pcVar3 = local_14;
    pMVar14 = local_18;
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
      pcVar17 = PTR_DAT_0079c0dc;
      do {
        pcVar15 = pcVar17;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar15 = pcVar17 + 1;
        cVar19 = *pcVar17;
        pcVar17 = pcVar15;
      } while (cVar19 != '\0');
      uVar9 = ~uVar9;
      pMVar13 = (MReportTy *)(pcVar15 + -uVar9);
      pMVar16 = (MReportTy *)(local_2a4 + 1);
      for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pMVar16 = *(undefined4 *)pMVar13;
        pMVar13 = pMVar13 + 4;
        pMVar16 = pMVar16 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pMVar16 = *pMVar13;
        pMVar13 = pMVar13 + 1;
        pMVar16 = pMVar16 + 1;
      }
      local_c = (MReportTy *)(local_2a4 + 1);
      cMf32::ToBeg(pcVar3,FUN_006f2d10,local_2a4);
      this_01 = local_14;
      pcVar17 = (char *)cMf32::RecNameGetNext(local_14);
      pcVar3 = extraout_ECX;
      while (pcVar17 != (char *)0x0) {
        local_10 = 0;
        local_c = (MReportTy *)0x0;
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,PTR_DAT_0079c0dc,s__01d_02d_007ccf40);
        iVar4 = Library::MSVCRT::FUN_0072ee80(pcVar17,(byte *)&DAT_0080f33a);
        if (((iVar4 == 2) && (local_10 != 0)) && (local_10 < 4)) {
          Library::DKW::TBL::FUN_006ae1c0(*(uint **)(pMVar14 + local_10 * 4 + 0x343),&local_c);
        }
        pcVar17 = (char *)cMf32::RecNameGetNext(this_01);
        pcVar3 = extraout_ECX_00;
      }
      cMf32::delete(pcVar3,(undefined4 *)this_01);
    }
    do {
      local_c = pMVar14 + 0x347;
      local_8 = 0;
      local_10 = 3;
      do {
        uVar9 = 0;
        if (*(int *)(*(int *)local_c + 0xc) != 1 && -1 < *(int *)(*(int *)local_c + 0xc) + -1) {
          do {
            iVar4 = *(int *)local_c;
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
          } while ((int)uVar11 < *(int *)(*(int *)local_c + 0xc) + -1);
        }
        local_c = local_c + 4;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    } while (local_8 != 0);
    iVar4 = 2;
    pMVar13 = pMVar14 + 0x34f;
    do {
      if (*(int *)(*(int *)pMVar13 + 0xc) != 0) {
        pMVar14[0x6a] = SUB41(iVar4,0);
      }
      iVar4 = iVar4 + -1;
      pMVar13 = pMVar13 + -4;
    } while (-1 < iVar4);
    local_10 = 0;
  }
  else {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::GameResult((CFsgsConnection *)&DAT_00802a90,2 - (DAT_0080c522 != 0));
    }
    pMVar14[0x67] = (MReportTy)0x1;
  }
  if (*(MMsgTy **)(DAT_0081176c + 0x2e6) != (MMsgTy *)0x0) {
    MMsgTy::HidePanel(*(MMsgTy **)(DAT_0081176c + 0x2e6),0,0,1);
  }
  SetCtrl(pMVar14,0);
  thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(pMVar14 + 0x5d));
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
  *(undefined1 **)(pMVar14 + 0x453) = puVar5;
  if (puVar5 != (undefined1 *)0x0) {
    uVar11 = 0;
    cVar19 = '\x01';
    uVar9 = 0x10;
    iVar18 = 1;
    iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x47,0x46,0x2bd,0x15e);
    uVar9 = HoloTy::Init(*(HoloTy **)(pMVar14 + 0x453),2,0x47,0x46,iVar4,iVar18,uVar9,cVar19,uVar11)
    ;
    if (uVar9 != 0) {
      iVar4 = *(int *)(pMVar14 + 0x453);
      *(undefined1 *)(iVar4 + 2) = 1;
      *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
      if (-1 < (int)*(uint *)(*(int *)(pMVar14 + 0x453) + 3)) {
        FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(pMVar14 + 0x453) + 3));
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0(DAT_008075a8,local_8);
    local_8 = 0xffffffff;
  }
  FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x401217,0x2e9,0x32,(uint)pMVar14);
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
  *(undefined1 **)(pMVar14 + 0x457) = puVar5;
  if (puVar5 != (undefined1 *)0x0) {
    uVar11 = 0;
    cVar19 = '\x01';
    uVar9 = 0x10;
    iVar18 = 1;
    iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x1a,10,0x2e9,0x32);
    uVar9 = HoloTy::Init(*(HoloTy **)(pMVar14 + 0x457),3,0x1a,10,iVar4,iVar18,uVar9,cVar19,uVar11);
    if (uVar9 != 0) {
      iVar4 = *(int *)(pMVar14 + 0x457);
      *(undefined1 *)(iVar4 + 2) = 1;
      *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
      if (-1 < (int)*(uint *)(*(int *)(pMVar14 + 0x457) + 3)) {
        FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(pMVar14 + 0x457) + 3));
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0(DAT_008075a8,local_8);
  }
  pMVar14[0x65] = (MReportTy)0x3;
  thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)(pMVar14 + 0x5d),10,2);
  pcVar17 = *(char **)(pMVar14 + 0x457);
  if (((pcVar17 != (char *)0x0) && (*pcVar17 != '\0')) && (-1 < (int)*(uint *)(pcVar17 + 3))) {
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pcVar17 + 3));
  }
  pcVar17 = *(char **)(pMVar14 + 0x453);
  if (((pcVar17 != (char *)0x0) && (*pcVar17 != '\0')) && (-1 < (int)*(uint *)(pcVar17 + 3))) {
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pcVar17 + 3));
  }
  this_00 = DAT_00802a30;
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
    uVar1 = *(undefined4 *)(DAT_00802a30 + 0xc5);
    DAT_00802a30[0x493] = (CursorClassTy)0x3;
    *(undefined2 *)(this_00 + 0x494) = 0xffff;
    CursorClassTy::SetGCType(this_00,0,uVar1,uVar7);
    CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
    this_00[0xd2] = (CursorClassTy)0x0;
    *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
  }
  thunk_FUN_00568bc0(&g_sound,0);
  if ((DAT_00807300._1_1_ & 8) != 0) {
    thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
  }
  g_currentExceptionFrame = local_5c.previous;
  return;
}

