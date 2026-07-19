
/* WARNING: Removing unreachable block (ram,0x00597a13) */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::NoneFSGS */

void __thiscall FSGSTy::NoneFSGS(FSGSTy *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  HoloTy *this_00;
  MMsgTy *this_01;
  code *pcVar3;
  CursorClassTy *pCVar4;
  FSGSTy *this_02;
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
  InternalExceptionFrame local_a8;
  char *local_64;
  char *local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  FSGSTy *local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1a;
  undefined2 local_18;
  int local_8;
  
  uVar14 = 1;
  local_8 = 1;
  local_28 = this;
  DVar5 = timeGetTime();
  this->field_0061 = DVar5;
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  iVar6 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_02 = local_28;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_a8.previous;
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
  switch(local_28->field_0065) {
  case 1:
    CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
    if (this_02->field_1A5F == '\x06') {
      if (15000 < (uint)(this_02->field_0061 - *(int *)&this_02->field_0x1eb2)) {
        if ((this_02->field_1A60 == '\0') && (iVar6 = this_02->field_1EA6, iVar6 != 0)) {
          if (1 < *(uint *)(iVar6 + 0xc)) {
            do {
              iVar6 = *(int *)(iVar6 + 8) * uVar14 + *(int *)(iVar6 + 0x1c);
              if (iVar6 != 0) {
                CFsgsConnection::PingPlayer
                          ((CFsgsConnection *)&DAT_00802a90,*(ulong *)&this_02->field_0x1eae,
                           *(ulong *)(iVar6 + 0x21));
              }
              iVar6 = this_02->field_1EA6;
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(uint *)(iVar6 + 0xc));
          }
          *(int *)&this_02->field_0x1eae = *(int *)&this_02->field_0x1eae + 1;
        }
        *(undefined4 *)&this_02->field_0x1eb2 = this_02->field_0061;
      }
    }
    else if ((this_02->field_1A5F == '\b') &&
            (60000 < (uint)(this_02->field_0061 - *(int *)&this_02->field_0x1a63))) {
      CFsgsConnection::RequestGameList
                ((CFsgsConnection *)&DAT_00802a90,*(ulong *)&this_02->field_0x1ec2,(char *)0x0);
      *(undefined4 *)&this_02->field_0x1a63 = this_02->field_0061;
      pCVar4 = DAT_00802a30;
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar7 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
        uVar2 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
        DAT_00802a30[0xb].field_0x47 = 5;
        *(undefined2 *)&pCVar4[0xb].field_0x48 = 0xffff;
        CursorClassTy::SetGCType(pCVar4,CASE_0,uVar2,uVar7);
        CursorClassTy::DrawSprite
                  (pCVar4,*(int *)((int)&pCVar4[1].field_0060 + 1),*(int *)&pCVar4[2].field_0x1);
        pCVar4[2].field_0xa = 0;
        *(undefined4 *)&pCVar4[0xc].field_0x2f = 0xffffffff;
      }
    }
    if ((((undefined4 *)this_02->field_1A97 != (undefined4 *)0x0) &&
        (*(int **)&this_02->field_0x1a9f != (int *)0x0)) &&
       (*(int *)&this_02->field_0x1aa3 < this_02->field_0061 - *(int *)&this_02->field_0x1aa7)) {
      Library::DKW::GPC::FUN_006c7070
                (*(int **)&this_02->field_0x1a9f,(undefined4 *)this_02->field_1A97,0);
      iVar6 = FUN_006c7000(*(int *)&this_02->field_0x1a9f);
      *(int *)&this_02->field_0x1aa3 = iVar6;
      if (iVar6 < 1) {
        if (iVar6 == -1) {
          FUN_006c7030(*(int *)&this_02->field_0x1a9f);
        }
        else {
          FUN_006c6fc0(*(undefined4 **)&this_02->field_0x1a9f);
          *(undefined4 *)&this_02->field_0x1a9f = 0;
          FUN_006ab060((undefined4 *)&this_02->field_0x1a9b);
        }
      }
      else {
        *(undefined4 *)&this_02->field_0x1aa7 = this_02->field_0061;
      }
      FUN_006b35d0(DAT_008075a8,*(uint *)&this_02->field_0x1a8f);
    }
    break;
  case 3:
  case 6:
  case 7:
  case 8:
  case 10:
    if ((0 < *(int *)&local_28->field_0x1a93) && (-1 < *(int *)&local_28->field_0x1a8f)) {
      if (*(int *)&local_28->field_0x1a93 == 9) {
        uVar7 = MMObjTy::CreateSprBut((MMObjTy *)local_28,0,1,0x121,9,0x1d6,0x3c,0x694c,0);
        *(undefined4 *)&this_02->field_0x1ab3 = uVar7;
      }
      iVar6 = this_02->field_1A97;
      *(int *)&this_02->field_0x1a93 = *(int *)&this_02->field_0x1a93 + -1;
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
      pCVar9 = FUN_006f2c00(s_MM_BAN__007cc058,2,*(undefined4 *)&this_02->field_0x1a93);
      puVar10 = FUN_0070a5a0(DAT_00806780,6,pCVar9,bVar15,iVar6);
      thunk_FUN_00540760((undefined4 *)this_02->field_1A97,0,0,'\x06',(byte *)puVar10);
      FUN_006b35d0(DAT_008075a8,*(uint *)&this_02->field_0x1a8f);
      local_8 = 0;
    }
    if ((*(HoloTy **)&this_02[1].field_0x44 != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(*(HoloTy **)&this_02[1].field_0x44), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((*(HoloTy **)&this_02[1].field_0x48 != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(*(HoloTy **)&this_02[1].field_0x48), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((*(HoloTy **)&this_02[1].field_0x4c != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(*(HoloTy **)&this_02[1].field_0x4c), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((*(HoloTy **)&this_02[1].field_0x50 != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(*(HoloTy **)&this_02[1].field_0x50), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      local_8 = 0;
    }
    if (local_8 == 0) {
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    puVar8 = &local_24;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    this_00 = *(HoloTy **)&this_02[1].field_0x4c;
    *(undefined2 *)puVar8 = 0;
    if (this_00 != (HoloTy *)0x0) {
      HoloTy::Done(this_00);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_02[1].field_0x4c);
      *(undefined4 *)&this_02[1].field_0x4c = 0;
    }
    if (*(HoloTy **)&this_02[1].field_0x44 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&this_02[1].field_0x44);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_02[1].field_0x44);
      *(undefined4 *)&this_02[1].field_0x44 = 0;
    }
    if (*(HoloTy **)&this_02[1].field_0x48 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&this_02[1].field_0x48);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_02[1].field_0x48);
      *(undefined4 *)&this_02[1].field_0x48 = 0;
    }
    if (*(HoloTy **)&this_02[1].field_0x50 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&this_02[1].field_0x50);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_02[1].field_0x50);
      *(undefined4 *)&this_02[1].field_0x50 = 0;
    }
    switch(this_02->field_0065) {
    case 6:
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_02->field_1ABC);
      this_02->field_1A5F = 1;
      thunk_FUN_0055c180((CFsgsConnection *)&DAT_00802a90);
      local_18 = 1;
      break;
    case 7:
      if ((this_02->field_1A5F != '\x03') && (this_02->field_1A5F != '\t')) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_02->field_1ABC);
      }
    case 8:
    case 10:
      local_18 = 1;
      local_1a = 1;
      local_20 = 1;
      local_24._2_2_ = 1;
      local_24._0_2_ = 1;
    }
    this_02->field_0065 = 1;
    PaintFSGS(this_02,'\0');
    CreateCtrls(this_02);
    switch(this_02->field_1A5F) {
    case 6:
      *(undefined4 *)&this_02->field_0x1eb2 = this_02->field_0061;
      if (this_02->field_0x1a62 == '\0') {
        thunk_FUN_0055d410((CFsgsConnection *)&DAT_00802a90);
      }
      else {
        uVar17 = 0;
        pcVar16 = &DAT_008016a0;
        pcVar11 = (char *)FUN_006b0140(0x254d,DAT_00807618);
        thunk_FUN_0055d390(&DAT_00802a90,pcVar11,pcVar16,uVar17);
        this_02->field_0x1a62 = 0;
      }
      break;
    case 8:
      CFsgsConnection::RequestGameList
                ((CFsgsConnection *)&DAT_00802a90,*(ulong *)&this_02->field_0x1ec2,(char *)0x0);
      DVar5 = timeGetTime();
      *(DWORD *)&this_02->field_0x1a63 = DVar5;
      pCVar4 = DAT_00802a30;
      goto joined_r0x00597872;
    case 9:
      CFsgsConnection::RequestLadderList
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar4 = DAT_00802a30;
joined_r0x00597872:
      DAT_00802a30 = pCVar4;
      if (pCVar4 != (CursorClassTy *)0x0) {
        pCVar4[0xb].field_0x47 = 5;
        *(undefined2 *)&pCVar4[0xb].field_0x48 = 0xffff;
        CursorClassTy::SetGCType
                  (pCVar4,CASE_0,*(undefined4 *)((int)&pCVar4[1].field_0060 + 1),
                   *(undefined4 *)&pCVar4[2].field_0x1);
        CursorClassTy::DrawSprite
                  (pCVar4,*(int *)((int)&pCVar4[1].field_0060 + 1),*(int *)&pCVar4[2].field_0x1);
        pCVar4[2].field_0xa = 0;
        *(undefined4 *)&pCVar4[0xc].field_0x2f = 0xffffffff;
      }
      break;
    case 10:
      if ((char *)this_02->field_1B0C != (char *)0x0) {
        local_64 = s_Profile_Age_007cc1a8;
        local_60 = s_Profile_Sex_007cc198;
        local_5c = s_Profile_Location_007cc184;
        local_58 = s_Profile_Description_007cc16c;
        local_54 = s_0_Wins_007cc164;
        local_50 = s_0_Losses_007cc158;
        local_4c = s_0_Draws_007cc14c;
        local_48 = s_0_Disconnects_007cc13c;
        local_44 = s_1_Wins_007cc134;
        local_40 = s_1_Losses_007cc128;
        local_3c = s_1_Draws_007cc11c;
        local_38 = s_1_Disconnects_007cc10c;
        local_34 = s_1_Rank_007cc104;
        local_30 = s_1_Rating_007cc0f8;
        local_2c = s_1_Last_Game_007cc0e8;
        CFsgsConnection::RequestInfo
                  ((CFsgsConnection *)&DAT_00802a90,(char *)this_02->field_1B0C,0xf,&local_64);
        pCVar4 = DAT_00802a30;
        goto joined_r0x00597872;
      }
    }
    this_01 = *(MMsgTy **)(*(int *)&this_02->field_0x1a5b + 0x2e6);
    if (this_01 != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(this_01,(int)&local_24);
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    break;
  case 4:
    if (*(HoloTy **)&local_28[1].field_0x44 != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(*(HoloTy **)&local_28[1].field_0x44);
      if (iVar6 == 0) {
        uVar14 = *(uint *)(*(int *)&this_02[1].field_0x44 + 3);
        if (-1 < (int)uVar14) {
          FUN_006b3af0(DAT_008075a8,uVar14);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_02[1].field_0x48 != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(*(HoloTy **)&this_02[1].field_0x48);
      if (iVar6 == 0) {
        uVar14 = *(uint *)(*(int *)&this_02[1].field_0x48 + 3);
        if (-1 < (int)uVar14) {
          FUN_006b3af0(DAT_008075a8,uVar14);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_02[1].field_0x4c != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(*(HoloTy **)&this_02[1].field_0x4c);
      if (iVar6 == 0) {
        uVar14 = *(uint *)(*(int *)&this_02[1].field_0x4c + 3);
        if (-1 < (int)uVar14) {
          FUN_006b3af0(DAT_008075a8,uVar14);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_02[1].field_0x50 != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(*(HoloTy **)&this_02[1].field_0x50);
      if (iVar6 == 0) {
        uVar14 = *(uint *)(*(int *)&this_02[1].field_0x50 + 3);
        if (-1 < (int)uVar14) {
          FUN_006b3af0(DAT_008075a8,uVar14);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (((this_02->field_0x1a61 == '\0') && (*(int *)&this_02->field_0x1a93 < 9)) &&
       (-1 < *(int *)&this_02->field_0x1a8f)) {
      if ((*(int *)&this_02->field_0x1a93 == 0) && (*(uint *)&this_02->field_0x1ab3 != 0)) {
        FUN_006e56b0(*(void **)&this_02->field_0xc,*(uint *)&this_02->field_0x1ab3);
        *(undefined4 *)&this_02->field_0x1ab3 = 0;
      }
      iVar6 = this_02->field_1A97;
      *(int *)&this_02->field_0x1a93 = *(int *)&this_02->field_0x1a93 + 1;
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
      pCVar9 = FUN_006f2c00(s_MM_BAN__007cc058,2,*(undefined4 *)&this_02->field_0x1a93);
      puVar10 = FUN_0070a5a0(DAT_00806780,6,pCVar9,bVar15,iVar6);
      thunk_FUN_00540760((undefined4 *)this_02->field_1A97,0,0,'\x06',(byte *)puVar10);
      FUN_006b35d0(DAT_008075a8,*(uint *)&this_02->field_0x1a8f);
      local_8 = 0;
    }
    pCVar4 = DAT_00802a30;
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar7 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
        uVar2 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
        DAT_00802a30[0xb].field_0x47 = 1;
        *(undefined2 *)&pCVar4[0xb].field_0x48 = 0xffff;
        CursorClassTy::SetGCType(pCVar4,CASE_0,uVar2,uVar7);
        CursorClassTy::DrawSprite
                  (pCVar4,*(int *)((int)&pCVar4[1].field_0060 + 1),*(int *)&pCVar4[2].field_0x1);
        pCVar4[2].field_0xa = 0;
        *(undefined4 *)&pCVar4[0xc].field_0x2f = 0xffffffff;
      }
      cVar1 = this_02->field_0x1a61;
      if (cVar1 != '\0') {
        switch(cVar1) {
        case '\x02':
        case '\x03':
        case '\x04':
        case '\x05':
        case '\a':
        case '\t':
        case '\n':
          this_02->field_1A5F = cVar1;
          SetState(this_02,7);
          this_02->field_0x1a61 = 0;
          g_currentExceptionFrame = local_a8.previous;
          return;
        case '\x06':
          this_02->field_1A5F = cVar1;
          SetState(this_02,8);
          this_02->field_0x1a61 = 0;
          g_currentExceptionFrame = local_a8.previous;
          return;
        case '\b':
          this_02->field_1A5F = cVar1;
          SetState(this_02,10);
        }
        this_02->field_0x1a61 = 0;
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
      bVar15 = this_02->field_0x1a5a;
      this_02->field_0065 = 2;
      if ((bVar15 != 0xff) && (*(int *)(&this_02->field_0xd1 + (uint)bVar15 * 0x1fb) != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_02->field_0xc1 + (uint)bVar15 * 0x1fb));
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_a8.previous;
  return;
}

