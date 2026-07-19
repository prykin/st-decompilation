
/* WARNING: Removing unreachable block (ram,0x00597a13) */

void __thiscall FSGSTy::NoneFSGS(FSGSTy *this,int param_1)

{
  FSGSTy FVar1;
  undefined4 uVar2;
  HoloTy *this_00;
  code *pcVar3;
  CursorClassTy *pCVar4;
  FSGSTy *this_01;
  DWORD DVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  LPSTR pCVar9;
  ushort *puVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar14;
  byte bVar15;
  char *pcVar16;
  ulong uVar17;
  InternalExceptionFrame IStack_a8;
  char *pcStack_64;
  char *pcStack_60;
  char *pcStack_5c;
  char *pcStack_58;
  char *pcStack_54;
  char *pcStack_50;
  char *pcStack_4c;
  char *pcStack_48;
  char *pcStack_44;
  char *pcStack_40;
  char *pcStack_3c;
  char *pcStack_38;
  char *pcStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  FSGSTy *pFStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  int iStack_8;
  
  uVar14 = 1;
  iStack_8 = 1;
  pFStack_28 = this;
  DVar5 = timeGetTime();
  *(DWORD *)(this + 0x61) = DVar5;
  IStack_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_a8;
  iVar6 = Library::MSVCRT::__setjmp3(IStack_a8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = pFStack_28;
  if (iVar6 != 0) {
    g_currentExceptionFrame = IStack_a8.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x284,0,iVar6,
                                &DAT_007a4ccc,s_FSGSTy__NoneFSGS_007cc0d4);
    if (iVar12 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x284);
    return;
  }
  switch(pFStack_28[0x65]) {
  case (FSGSTy)0x1:
    CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
    if (this_01[0x1a5f] == (FSGSTy)0x6) {
      if (15000 < (uint)(*(int *)(this_01 + 0x61) - *(int *)(this_01 + 0x1eb2))) {
        if ((this_01[0x1a60] == (FSGSTy)0x0) && (iVar6 = *(int *)(this_01 + 0x1ea6), iVar6 != 0)) {
          if (1 < *(uint *)(iVar6 + 0xc)) {
            do {
              iVar6 = *(int *)(iVar6 + 8) * uVar14 + *(int *)(iVar6 + 0x1c);
              if (iVar6 != 0) {
                CFsgsConnection::PingPlayer
                          ((CFsgsConnection *)&DAT_00802a90,*(ulong *)(this_01 + 0x1eae),
                           *(ulong *)(iVar6 + 0x21));
              }
              iVar6 = *(int *)(this_01 + 0x1ea6);
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(uint *)(iVar6 + 0xc));
          }
          *(int *)(this_01 + 0x1eae) = *(int *)(this_01 + 0x1eae) + 1;
        }
        *(undefined4 *)(this_01 + 0x1eb2) = *(undefined4 *)(this_01 + 0x61);
      }
    }
    else if ((this_01[0x1a5f] == (FSGSTy)0x8) &&
            (60000 < (uint)(*(int *)(this_01 + 0x61) - *(int *)(this_01 + 0x1a63)))) {
      CFsgsConnection::RequestGameList
                ((CFsgsConnection *)&DAT_00802a90,*(ulong *)(this_01 + 0x1ec2),(char *)0x0);
      *(undefined4 *)(this_01 + 0x1a63) = *(undefined4 *)(this_01 + 0x61);
      pCVar4 = DAT_00802a30;
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
        uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
        DAT_00802a30[0x493] = (CursorClassTy)0x5;
        *(undefined2 *)(pCVar4 + 0x494) = 0xffff;
        CursorClassTy::SetGCType(pCVar4,0,uVar2,uVar7);
        CursorClassTy::DrawSprite(pCVar4,*(int *)(pCVar4 + 0xc5),*(int *)(pCVar4 + 0xc9));
        pCVar4[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(pCVar4 + 0x4df) = 0xffffffff;
      }
    }
    if (((*(undefined4 **)(this_01 + 0x1a97) != (undefined4 *)0x0) &&
        (*(int **)(this_01 + 0x1a9f) != (int *)0x0)) &&
       (*(int *)(this_01 + 0x1aa3) < *(int *)(this_01 + 0x61) - *(int *)(this_01 + 0x1aa7))) {
      Library::DKW::GPC::FUN_006c7070
                (*(int **)(this_01 + 0x1a9f),*(undefined4 **)(this_01 + 0x1a97),0);
      iVar6 = FUN_006c7000(*(int *)(this_01 + 0x1a9f));
      *(int *)(this_01 + 0x1aa3) = iVar6;
      if (iVar6 < 1) {
        if (iVar6 == -1) {
          FUN_006c7030(*(int *)(this_01 + 0x1a9f));
        }
        else {
          FUN_006c6fc0(*(undefined4 **)(this_01 + 0x1a9f));
          *(undefined4 *)(this_01 + 0x1a9f) = 0;
          FUN_006ab060((undefined4 *)(this_01 + 0x1a9b));
        }
      }
      else {
        *(undefined4 *)(this_01 + 0x1aa7) = *(undefined4 *)(this_01 + 0x61);
      }
      FUN_006b35d0(DAT_008075a8,*(uint *)(this_01 + 0x1a8f));
    }
    break;
  case (FSGSTy)0x3:
  case (FSGSTy)0x6:
  case (FSGSTy)0x7:
  case (FSGSTy)0x8:
  case (FSGSTy)0xa:
    if ((0 < *(int *)(pFStack_28 + 0x1a93)) && (-1 < *(int *)(pFStack_28 + 0x1a8f))) {
      if (*(int *)(pFStack_28 + 0x1a93) == 9) {
        uVar7 = MMObjTy::CreateSprBut((MMObjTy *)pFStack_28,0,1,0x121,9,0x1d6,0x3c,0x694c,0);
        *(undefined4 *)(this_01 + 0x1ab3) = uVar7;
      }
      iVar6 = *(int *)(this_01 + 0x1a97);
      *(int *)(this_01 + 0x1a93) = *(int *)(this_01 + 0x1a93) + -1;
      uVar14 = *(uint *)(iVar6 + 0x14);
      if (uVar14 == 0) {
        uVar14 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar6 + 8);
      }
      puVar8 = (undefined4 *)FUN_006b4fa0(iVar6);
      for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      iVar6 = 0;
      bVar15 = 0;
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      pCVar9 = FUN_006f2c00(s_MM_BAN__007cc058,2,*(undefined4 *)(this_01 + 0x1a93));
      puVar10 = FUN_0070a5a0(DAT_00806780,6,pCVar9,bVar15,iVar6);
      thunk_FUN_00540760(*(undefined4 **)(this_01 + 0x1a97),0,0,'\x06',(byte *)puVar10);
      FUN_006b35d0(DAT_008075a8,*(uint *)(this_01 + 0x1a8f));
      iStack_8 = 0;
    }
    if ((*(HoloTy **)(this_01 + 0x1f23) != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(*(HoloTy **)(this_01 + 0x1f23)), iVar6 != 0)) {
      iStack_8 = 0;
    }
    if ((*(HoloTy **)(this_01 + 0x1f27) != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(*(HoloTy **)(this_01 + 0x1f27)), iVar6 != 0)) {
      iStack_8 = 0;
    }
    if ((*(HoloTy **)(this_01 + 0x1f2b) != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(*(HoloTy **)(this_01 + 0x1f2b)), iVar6 != 0)) {
      iStack_8 = 0;
    }
    if ((*(HoloTy **)(this_01 + 0x1f2f) != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(*(HoloTy **)(this_01 + 0x1f2f)), iVar6 != 0)) {
      iStack_8 = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      iStack_8 = 0;
    }
    if (iStack_8 == 0) {
      g_currentExceptionFrame = IStack_a8.previous;
      return;
    }
    puVar8 = &uStack_24;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    this_00 = *(HoloTy **)(this_01 + 0x1f2b);
    *(undefined2 *)puVar8 = 0;
    if (this_00 != (HoloTy *)0x0) {
      HoloTy::Done(this_00);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(this_01 + 0x1f2b));
      *(undefined4 *)(this_01 + 0x1f2b) = 0;
    }
    if (*(HoloTy **)(this_01 + 0x1f23) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(this_01 + 0x1f23));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(this_01 + 0x1f23));
      *(undefined4 *)(this_01 + 0x1f23) = 0;
    }
    if (*(HoloTy **)(this_01 + 0x1f27) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(this_01 + 0x1f27));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(this_01 + 0x1f27));
      *(undefined4 *)(this_01 + 0x1f27) = 0;
    }
    if (*(HoloTy **)(this_01 + 0x1f2f) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(this_01 + 0x1f2f));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(this_01 + 0x1f2f));
      *(undefined4 *)(this_01 + 0x1f2f) = 0;
    }
    switch(this_01[0x65]) {
    case (FSGSTy)0x6:
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(this_01 + 0x1abc));
      this_01[0x1a5f] = (FSGSTy)0x1;
      thunk_FUN_0055c180((CFsgsConnection *)&DAT_00802a90);
      uStack_18 = 1;
      break;
    case (FSGSTy)0x7:
      if ((this_01[0x1a5f] != (FSGSTy)0x3) && (this_01[0x1a5f] != (FSGSTy)0x9)) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(this_01 + 0x1abc));
      }
    case (FSGSTy)0x8:
    case (FSGSTy)0xa:
      uStack_18 = 1;
      uStack_1a = 1;
      uStack_20 = 1;
      uStack_24._2_2_ = 1;
      uStack_24._0_2_ = 1;
    }
    this_01[0x65] = (FSGSTy)0x1;
    PaintFSGS(this_01,'\0');
    CreateCtrls(this_01);
    switch(this_01[0x1a5f]) {
    case (FSGSTy)0x6:
      *(undefined4 *)(this_01 + 0x1eb2) = *(undefined4 *)(this_01 + 0x61);
      if (this_01[0x1a62] == (FSGSTy)0x0) {
        thunk_FUN_0055d410((CFsgsConnection *)&DAT_00802a90);
      }
      else {
        uVar17 = 0;
        pcVar16 = &DAT_008016a0;
        pcVar11 = (char *)FUN_006b0140(0x254d,DAT_00807618);
        thunk_FUN_0055d390(&DAT_00802a90,pcVar11,pcVar16,uVar17);
        this_01[0x1a62] = (FSGSTy)0x0;
      }
      break;
    case (FSGSTy)0x8:
      CFsgsConnection::RequestGameList
                ((CFsgsConnection *)&DAT_00802a90,*(ulong *)(this_01 + 0x1ec2),(char *)0x0);
      DVar5 = timeGetTime();
      *(DWORD *)(this_01 + 0x1a63) = DVar5;
      pCVar4 = DAT_00802a30;
      goto joined_r0x00597872;
    case (FSGSTy)0x9:
      CFsgsConnection::RequestLadderList
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar4 = DAT_00802a30;
joined_r0x00597872:
      DAT_00802a30 = pCVar4;
      if (pCVar4 != (CursorClassTy *)0x0) {
        pCVar4[0x493] = (CursorClassTy)0x5;
        *(undefined2 *)(pCVar4 + 0x494) = 0xffff;
        CursorClassTy::SetGCType
                  (pCVar4,0,*(undefined4 *)(pCVar4 + 0xc5),*(undefined4 *)(pCVar4 + 0xc9));
        CursorClassTy::DrawSprite(pCVar4,*(int *)(pCVar4 + 0xc5),*(int *)(pCVar4 + 0xc9));
        pCVar4[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(pCVar4 + 0x4df) = 0xffffffff;
      }
      break;
    case (FSGSTy)0xa:
      if (*(char **)(this_01 + 0x1b0c) != (char *)0x0) {
        pcStack_64 = s_Profile_Age_007cc1a8;
        pcStack_60 = s_Profile_Sex_007cc198;
        pcStack_5c = s_Profile_Location_007cc184;
        pcStack_58 = s_Profile_Description_007cc16c;
        pcStack_54 = s_0_Wins_007cc164;
        pcStack_50 = s_0_Losses_007cc158;
        pcStack_4c = s_0_Draws_007cc14c;
        pcStack_48 = s_0_Disconnects_007cc13c;
        pcStack_44 = s_1_Wins_007cc134;
        pcStack_40 = s_1_Losses_007cc128;
        pcStack_3c = s_1_Draws_007cc11c;
        pcStack_38 = s_1_Disconnects_007cc10c;
        pcStack_34 = s_1_Rank_007cc104;
        pcStack_30 = s_1_Rating_007cc0f8;
        pcStack_2c = s_1_Last_Game_007cc0e8;
        CFsgsConnection::RequestInfo
                  ((CFsgsConnection *)&DAT_00802a90,*(char **)(this_01 + 0x1b0c),0xf,&pcStack_64);
        pCVar4 = DAT_00802a30;
        goto joined_r0x00597872;
      }
    }
    if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),(int)&uStack_24);
      g_currentExceptionFrame = IStack_a8.previous;
      return;
    }
    break;
  case (FSGSTy)0x4:
    if (*(HoloTy **)(pFStack_28 + 0x1f23) != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(*(HoloTy **)(pFStack_28 + 0x1f23));
      if (iVar6 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x1f23) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x1f23) + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if (*(HoloTy **)(this_01 + 0x1f27) != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(*(HoloTy **)(this_01 + 0x1f27));
      if (iVar6 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x1f27) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x1f27) + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if (*(HoloTy **)(this_01 + 0x1f2b) != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(*(HoloTy **)(this_01 + 0x1f2b));
      if (iVar6 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x1f2b) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x1f2b) + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if (*(HoloTy **)(this_01 + 0x1f2f) != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(*(HoloTy **)(this_01 + 0x1f2f));
      if (iVar6 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x1f2f) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x1f2f) + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if (((this_01[0x1a61] == (FSGSTy)0x0) && (*(int *)(this_01 + 0x1a93) < 9)) &&
       (-1 < *(int *)(this_01 + 0x1a8f))) {
      if ((*(int *)(this_01 + 0x1a93) == 0) && (*(uint *)(this_01 + 0x1ab3) != 0)) {
        FUN_006e56b0(*(void **)(this_01 + 0xc),*(uint *)(this_01 + 0x1ab3));
        *(undefined4 *)(this_01 + 0x1ab3) = 0;
      }
      iVar6 = *(int *)(this_01 + 0x1a97);
      *(int *)(this_01 + 0x1a93) = *(int *)(this_01 + 0x1a93) + 1;
      uVar14 = *(uint *)(iVar6 + 0x14);
      if (uVar14 == 0) {
        uVar14 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar6 + 8);
      }
      puVar8 = (undefined4 *)FUN_006b4fa0(iVar6);
      for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      iVar6 = 0;
      bVar15 = 0;
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      pCVar9 = FUN_006f2c00(s_MM_BAN__007cc058,2,*(undefined4 *)(this_01 + 0x1a93));
      puVar10 = FUN_0070a5a0(DAT_00806780,6,pCVar9,bVar15,iVar6);
      thunk_FUN_00540760(*(undefined4 **)(this_01 + 0x1a97),0,0,'\x06',(byte *)puVar10);
      FUN_006b35d0(DAT_008075a8,*(uint *)(this_01 + 0x1a8f));
      iStack_8 = 0;
    }
    pCVar4 = DAT_00802a30;
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
        uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
        DAT_00802a30[0x493] = (CursorClassTy)0x1;
        *(undefined2 *)(pCVar4 + 0x494) = 0xffff;
        CursorClassTy::SetGCType(pCVar4,0,uVar2,uVar7);
        CursorClassTy::DrawSprite(pCVar4,*(int *)(pCVar4 + 0xc5),*(int *)(pCVar4 + 0xc9));
        pCVar4[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(pCVar4 + 0x4df) = 0xffffffff;
      }
      FVar1 = this_01[0x1a61];
      if (FVar1 != (FSGSTy)0x0) {
        switch(FVar1) {
        case (FSGSTy)0x2:
        case (FSGSTy)0x3:
        case (FSGSTy)0x4:
        case (FSGSTy)0x5:
        case (FSGSTy)0x7:
        case (FSGSTy)0x9:
        case (FSGSTy)0xa:
          this_01[0x1a5f] = FVar1;
          SetState(this_01,7);
          this_01[0x1a61] = (FSGSTy)0x0;
          g_currentExceptionFrame = IStack_a8.previous;
          return;
        case (FSGSTy)0x6:
          this_01[0x1a5f] = FVar1;
          SetState(this_01,8);
          this_01[0x1a61] = (FSGSTy)0x0;
          g_currentExceptionFrame = IStack_a8.previous;
          return;
        case (FSGSTy)0x8:
          this_01[0x1a5f] = FVar1;
          SetState(this_01,10);
        }
        this_01[0x1a61] = (FSGSTy)0x0;
        g_currentExceptionFrame = IStack_a8.previous;
        return;
      }
      FVar1 = this_01[0x1a5a];
      this_01[0x65] = (FSGSTy)0x2;
      if ((FVar1 != (FSGSTy)0xff) && (*(int *)(this_01 + (uint)(byte)FVar1 * 0x1fb + 0xd1) != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(this_01 + (uint)(byte)FVar1 * 0x1fb + 0xc1));
        g_currentExceptionFrame = IStack_a8.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = IStack_a8.previous;
  return;
}

