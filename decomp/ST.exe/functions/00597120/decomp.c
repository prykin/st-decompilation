#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x00597a13) */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::NoneFSGS

   [STSwitchEnumApplier] Switch target field_0065 uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_0065State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10 */

void __thiscall FSGSTy::NoneFSGS(FSGSTy *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  HoloTy *this_00;
  MMsgTy *this_01;
  code *pcVar3;
  CursorClassTy *pCVar4;
  MMObjTy *this_02;
  DWORD DVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  LPSTR pCVar9;
  ushort *puVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
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
  MMObjTy *local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1a;
  undefined2 local_18;
  int local_8;

  uVar14 = 1;
  local_8 = 1;
  local_28 = (MMObjTy *)this;
  DVar5 = timeGetTime();
  this->field_0061 = DVar5;
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  iVar6 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0);
  this_02 = local_28;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x284,0,iVar6,
                                &DAT_007a4ccc,s_FSGSTy__NoneFSGS_007cc0d4);
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x284);
    return;
  }
  switch(local_28->field_0x65) {
  case 1:
    CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
    if (this_02[0x1d].field_0xa8 == '\x06') {
      if (15000 < (uint)(*(int *)&this_02->field_0x61 - *(int *)&this_02[0x22].field_0x8c)) {
        if ((this_02[0x1d].field_0xa9 == '\0') &&
           (iVar6 = *(int *)&this_02[0x22].field_0x80, iVar6 != 0)) {
          if (1 < *(uint *)(iVar6 + 0xc)) {
            do {
              iVar6 = *(int *)(iVar6 + 8) * uVar14 + *(int *)(iVar6 + 0x1c);
              if (iVar6 != 0) {
                CFsgsConnection::PingPlayer
                          ((CFsgsConnection *)&DAT_00802a90,*(ulong *)&this_02[0x22].field_0x88,
                           *(ulong *)(iVar6 + 0x21));
              }
              iVar6 = *(int *)&this_02[0x22].field_0x80;
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(uint *)(iVar6 + 0xc));
          }
          *(int *)&this_02[0x22].field_0x88 = *(int *)&this_02[0x22].field_0x88 + 1;
        }
        *(undefined4 *)&this_02[0x22].field_0x8c = *(undefined4 *)&this_02->field_0x61;
      }
    }
    else if ((this_02[0x1d].field_0xa8 == '\b') &&
            (60000 < (uint)(*(int *)&this_02->field_0x61 - *(int *)&this_02[0x1d].field_0xac))) {
      CFsgsConnection::RequestGameList
                ((CFsgsConnection *)&DAT_00802a90,*(ulong *)&this_02[0x22].field_0x9c,(char *)0x0);
      *(undefined4 *)&this_02[0x1d].field_0xac = *(undefined4 *)&this_02->field_0x61;
      pCVar4 = PTR_00802a30;
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        uVar7 = PTR_00802a30->field_00C9;
        uVar2 = PTR_00802a30->field_00C5;
        PTR_00802a30->field_0493 = 5;
        pCVar4->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar4,CASE_0,uVar2,uVar7);
        CursorClassTy::DrawSprite(pCVar4,pCVar4->field_00C5,pCVar4->field_00C9);
        pCVar4->field_0xd2 = 0;
        *(undefined4 *)&pCVar4->field_0x4df = 0xffffffff;
      }
    }
    if (((*(undefined4 **)&this_02[0x1d].field_0xe0 != (undefined4 *)0x0) &&
        (*(int **)&this_02[0x1e].field_0x5 != (int *)0x0)) &&
       (*(int *)((int)&this_02[0x1e].field_0008 + 1) <
        *(int *)&this_02->field_0x61 - *(int *)((int)&this_02[0x1e].field_000C + 1))) {
      Library::DKW::GPC::FUN_006c7070
                (*(int **)&this_02[0x1e].field_0x5,*(undefined4 **)&this_02[0x1d].field_0xe0,0);
      iVar6 = FUN_006c7000(*(AnonShape_006C7000_4A8D1200 **)&this_02[0x1e].field_0x5);
      *(int *)((int)&this_02[0x1e].field_0008 + 1) = iVar6;
      if (iVar6 < 1) {
        if (iVar6 == -1) {
          FUN_006c7030(*(AnonShape_006C7030_23487746 **)&this_02[0x1e].field_0x5);
        }
        else {
          FUN_006c6fc0(*(AnonShape_006C6FC0_B2C34C14 **)&this_02[0x1e].field_0x5);
          *(undefined4 *)&this_02[0x1e].field_0x5 = 0;
          FreeAndNull((void **)((int)&this_02[0x1e].vtable + 1));
        }
      }
      else {
        *(undefined4 *)((int)&this_02[0x1e].field_000C + 1) = *(undefined4 *)&this_02->field_0x61;
      }
      FUN_006b35d0(DAT_008075a8,*(uint *)&this_02[0x1d].field_0xd8);
    }
    break;
  case 3:
  case 6:
  case 7:
  case 8:
  case 10:
    if ((0 < *(int *)&local_28[0x1d].field_0xdc) && (-1 < *(int *)&local_28[0x1d].field_0xd8)) {
      if (*(int *)&local_28[0x1d].field_0xdc == 9) {
        uVar7 = MMObjTy::CreateSprBut(local_28,0,1,0x121,9,0x1d6,0x3c,0x694c,0);
        *(undefined4 *)&this_02[0x1e].field_0x19 = uVar7;
      }
      iVar6 = *(int *)&this_02[0x1d].field_0xe0;
      *(int *)&this_02[0x1d].field_0xdc = *(int *)&this_02[0x1d].field_0xdc + -1;
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
      pCVar9 = FUN_006f2c00(s_MM_BAN__007cc058,2,*(undefined4 *)&this_02[0x1d].field_0xdc);
      puVar10 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,pCVar9,bVar15,iVar6);
      DibPut(*(AnonShape_006B5B10_E0D06CF1 **)&this_02[0x1d].field_0xe0,0,0,'\x06',(byte *)puVar10);
      FUN_006b35d0(DAT_008075a8,*(uint *)&this_02[0x1d].field_0xd8);
      local_8 = 0;
    }
    if ((*(HoloTy **)&this_02[0x23].field_0x1a != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(*(HoloTy **)&this_02[0x23].field_0x1a), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((*(HoloTy **)&this_02[0x23].field_0x1e != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(*(HoloTy **)&this_02[0x23].field_0x1e), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((*(HoloTy **)&this_02[0x23].field_0x22 != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(*(HoloTy **)&this_02[0x23].field_0x22), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((*(HoloTy **)&this_02[0x23].field_0x26 != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(*(HoloTy **)&this_02[0x23].field_0x26), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((PTR_0081176c->field_02E6 != (MMsgTy *)0x0) &&
       (PTR_0081176c->field_02E6->field_0065 != '\x01')) {
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
    this_00 = *(HoloTy **)&this_02[0x23].field_0x22;
    *(undefined2 *)puVar8 = 0;
    if (this_00 != (HoloTy *)0x0) {
      HoloTy::Done(this_00);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&this_02[0x23].field_0x22);
      *(undefined4 *)&this_02[0x23].field_0x22 = 0;
    }
    if (*(HoloTy **)&this_02[0x23].field_0x1a != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&this_02[0x23].field_0x1a);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&this_02[0x23].field_0x1a);
      *(undefined4 *)&this_02[0x23].field_0x1a = 0;
    }
    if (*(HoloTy **)&this_02[0x23].field_0x1e != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&this_02[0x23].field_0x1e);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&this_02[0x23].field_0x1e);
      *(undefined4 *)&this_02[0x23].field_0x1e = 0;
    }
    if (*(HoloTy **)&this_02[0x23].field_0x26 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&this_02[0x23].field_0x26);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&this_02[0x23].field_0x26);
      *(undefined4 *)&this_02[0x23].field_0x26 = 0;
    }
    switch(this_02->field_0x65) {
    case 6:
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)&this_02[0x1e].field_0x22);
      this_02[0x1d].field_0xa8 = 1;
      thunk_FUN_0055c180((CFsgsConnection *)&DAT_00802a90);
      local_18 = 1;
      break;
    case 7:
      if ((this_02[0x1d].field_0xa8 != '\x03') && (this_02[0x1d].field_0xa8 != '\t')) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)&this_02[0x1e].field_0x22);
      }
    case 8:
    case 10:
      local_18 = 1;
      local_1a = 1;
      local_20 = 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_24._2_2_ = 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_24._0_2_ = 1;
    }
    this_02->field_0x65 = 1;
    PaintFSGS((FSGSTy *)this_02,'\0');
    CreateCtrls((FSGSTy *)this_02);
    switch(this_02[0x1d].field_0xa8) {
    case 6:
      cVar1 = this_02[0x1d].field_0xab;
      *(undefined4 *)&this_02[0x22].field_0x8c = *(undefined4 *)&this_02->field_0x61;
      if (cVar1 == '\0') {
        thunk_FUN_0055d410((CFsgsConnection *)&DAT_00802a90);
      }
      else {
        uVar17 = 0;
        pcVar16 = &DAT_008016a0;
        pcVar11 = LoadResourceString(0x254d,HINSTANCE_00807618);
        thunk_FUN_0055d390(&DAT_00802a90,pcVar11,pcVar16,uVar17);
        this_02[0x1d].field_0xab = 0;
      }
      break;
    case 8:
      CFsgsConnection::RequestGameList
                ((CFsgsConnection *)&DAT_00802a90,*(ulong *)&this_02[0x22].field_0x9c,(char *)0x0);
      DVar5 = timeGetTime();
      *(DWORD *)&this_02[0x1d].field_0xac = DVar5;
      pCVar4 = PTR_00802a30;
      goto joined_r0x00597872;
    case 9:
      CFsgsConnection::RequestLadderList
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar4 = PTR_00802a30;
joined_r0x00597872:
      PTR_00802a30 = pCVar4;
      if (pCVar4 != (CursorClassTy *)0x0) {
        pCVar4->field_0493 = 5;
        pCVar4->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar4,CASE_0,pCVar4->field_00C5,pCVar4->field_00C9);
        CursorClassTy::DrawSprite(pCVar4,pCVar4->field_00C5,pCVar4->field_00C9);
        pCVar4->field_0xd2 = 0;
        *(undefined4 *)&pCVar4->field_0x4df = 0xffffffff;
      }
      break;
    case 10:
      if (*(char **)&this_02[0x1e].field_0x72 != (char *)0x0) {
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
                  ((CFsgsConnection *)&DAT_00802a90,*(char **)&this_02[0x1e].field_0x72,0xf,
                   &local_64);
        pCVar4 = PTR_00802a30;
        goto joined_r0x00597872;
      }
    }
    this_01 = *(MMsgTy **)(*(int *)&this_02[0x1d].field_0xa4 + 0x2e6);
    if (this_01 != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(this_01,(int)&local_24);
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    break;
  case 4:
    if (*(HoloTy **)&local_28[0x23].field_0x1a != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(*(HoloTy **)&local_28[0x23].field_0x1a);
      if (iVar6 == 0) {
        uVar14 = *(uint *)(*(int *)&this_02[0x23].field_0x1a + 3);
        if (-1 < (int)uVar14) {
          FUN_006b3af0(DAT_008075a8,uVar14);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_02[0x23].field_0x1e != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(*(HoloTy **)&this_02[0x23].field_0x1e);
      if (iVar6 == 0) {
        uVar14 = *(uint *)(*(int *)&this_02[0x23].field_0x1e + 3);
        if (-1 < (int)uVar14) {
          FUN_006b3af0(DAT_008075a8,uVar14);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_02[0x23].field_0x22 != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(*(HoloTy **)&this_02[0x23].field_0x22);
      if (iVar6 == 0) {
        uVar14 = *(uint *)(*(int *)&this_02[0x23].field_0x22 + 3);
        if (-1 < (int)uVar14) {
          FUN_006b3af0(DAT_008075a8,uVar14);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_02[0x23].field_0x26 != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(*(HoloTy **)&this_02[0x23].field_0x26);
      if (iVar6 == 0) {
        uVar14 = *(uint *)(*(int *)&this_02[0x23].field_0x26 + 3);
        if (-1 < (int)uVar14) {
          FUN_006b3af0(DAT_008075a8,uVar14);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (((this_02[0x1d].field_0xaa == '\0') && (*(int *)&this_02[0x1d].field_0xdc < 9)) &&
       (-1 < *(int *)&this_02[0x1d].field_0xd8)) {
      if ((*(int *)&this_02[0x1d].field_0xdc == 0) && (*(uint *)&this_02[0x1e].field_0x19 != 0)) {
        StartSystemTy::sub_006E56B0(this_02->field_000C,*(uint *)&this_02[0x1e].field_0x19);
        *(undefined4 *)&this_02[0x1e].field_0x19 = 0;
      }
      iVar6 = *(int *)&this_02[0x1d].field_0xe0;
      *(int *)&this_02[0x1d].field_0xdc = *(int *)&this_02[0x1d].field_0xdc + 1;
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
      pCVar9 = FUN_006f2c00(s_MM_BAN__007cc058,2,*(undefined4 *)&this_02[0x1d].field_0xdc);
      puVar10 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,pCVar9,bVar15,iVar6);
      DibPut(*(AnonShape_006B5B10_E0D06CF1 **)&this_02[0x1d].field_0xe0,0,0,'\x06',(byte *)puVar10);
      FUN_006b35d0(DAT_008075a8,*(uint *)&this_02[0x1d].field_0xd8);
      local_8 = 0;
    }
    pCVar4 = PTR_00802a30;
    if ((PTR_0081176c->field_02E6 != (MMsgTy *)0x0) &&
       (PTR_0081176c->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        uVar7 = PTR_00802a30->field_00C9;
        uVar2 = PTR_00802a30->field_00C5;
        PTR_00802a30->field_0493 = 1;
        pCVar4->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar4,CASE_0,uVar2,uVar7);
        CursorClassTy::DrawSprite(pCVar4,pCVar4->field_00C5,pCVar4->field_00C9);
        pCVar4->field_0xd2 = 0;
        *(undefined4 *)&pCVar4->field_0x4df = 0xffffffff;
      }
      cVar1 = this_02[0x1d].field_0xaa;
      if (cVar1 != '\0') {
        switch(cVar1) {
        case '\x02':
        case '\x03':
        case '\x04':
        case '\x05':
        case '\a':
        case '\t':
        case '\n':
          this_02[0x1d].field_0xa8 = cVar1;
          SetState((FSGSTy *)this_02,7);
          this_02[0x1d].field_0xaa = 0;
          g_currentExceptionFrame = local_a8.previous;
          return;
        case '\x06':
          this_02[0x1d].field_0xa8 = cVar1;
          SetState((FSGSTy *)this_02,8);
          this_02[0x1d].field_0xaa = 0;
          g_currentExceptionFrame = local_a8.previous;
          return;
        case '\b':
          this_02[0x1d].field_0xa8 = cVar1;
          SetState((FSGSTy *)this_02,10);
        }
        this_02[0x1d].field_0xaa = 0;
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
      bVar15 = this_02[0x1d].field_0xa3;
      this_02->field_0x65 = 2;
      if ((bVar15 != 0xff) && (*(int *)((int)this_02 + (uint)bVar15 * 0x1fb + 0xd1) != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)((int)this_02 + (uint)bVar15 * 0x1fb + 0xc1));
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_a8.previous;
  return;
}

