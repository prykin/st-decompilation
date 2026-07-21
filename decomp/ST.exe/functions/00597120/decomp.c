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
  HoloTy *this_00;
  MMsgTy *this_01;
  code *pcVar2;
  CursorClassTy *pCVar3;
  MMObjTy *this_02;
  DWORD DVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  LPSTR pCVar8;
  ushort *puVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  char *pcVar15;
  ulong uVar16;
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

  uVar13 = 1;
  local_8 = 1;
  local_28 = (MMObjTy *)this;
  DVar4 = timeGetTime();
  this->field_0061 = DVar4;
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  iVar5 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0);
  this_02 = local_28;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x284,0,iVar5,
                                "%s","FSGSTy::NoneFSGS");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x284);
    return;
  }
  switch(local_28->field_0x65) {
  case 1:
    CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
    if (this_02[0x1d].field_0xa8 == '\x06') {
      if (15000 < (uint)(*(int *)&this_02->field_0x61 - *(int *)&this_02[0x22].field_0x8c)) {
        if ((this_02[0x1d].field_0xa9 == '\0') &&
           (iVar5 = *(int *)&this_02[0x22].field_0x80, iVar5 != 0)) {
          if (1 < *(uint *)(iVar5 + 0xc)) {
            do {
              iVar5 = *(int *)(iVar5 + 8) * uVar13 + *(int *)(iVar5 + 0x1c);
              if (iVar5 != 0) {
                CFsgsConnection::PingPlayer
                          ((CFsgsConnection *)&DAT_00802a90,*(ulong *)&this_02[0x22].field_0x88,
                           *(ulong *)(iVar5 + 0x21));
              }
              iVar5 = *(int *)&this_02[0x22].field_0x80;
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(uint *)(iVar5 + 0xc));
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
      pCVar3 = PTR_00802a30;
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        iVar5 = PTR_00802a30->field_00C9;
        iVar11 = PTR_00802a30->field_00C5;
        PTR_00802a30->field_0493 = 5;
        pCVar3->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar3,CASE_0,iVar11,iVar5);
        CursorClassTy::DrawSprite(pCVar3,pCVar3->field_00C5,pCVar3->field_00C9);
        pCVar3->field_00D2 = 0;
        pCVar3->field_04DF = 0xffffffff;
      }
    }
    if (((*(undefined4 **)&this_02[0x1d].field_0xe0 != (undefined4 *)0x0) &&
        (*(int **)&this_02[0x1e].field_0x5 != (int *)0x0)) &&
       (*(int *)((int)&this_02[0x1e].field_0008 + 1) <
        *(int *)&this_02->field_0x61 - *(int *)((int)&this_02[0x1e].field_000C + 1))) {
      Library::DKW::GPC::FUN_006c7070
                (*(int **)&this_02[0x1e].field_0x5,*(undefined4 **)&this_02[0x1d].field_0xe0,0);
      iVar5 = FUN_006c7000(*(AnonShape_006C7000_4A8D1200 **)&this_02[0x1e].field_0x5);
      *(int *)((int)&this_02[0x1e].field_0008 + 1) = iVar5;
      if (iVar5 < 1) {
        if (iVar5 == -1) {
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
        uVar6 = MMObjTy::CreateSprBut(local_28,0,1,0x121,9,0x1d6,0x3c,0x694c,0);
        *(undefined4 *)&this_02[0x1e].field_0x19 = uVar6;
      }
      iVar5 = *(int *)&this_02[0x1d].field_0xe0;
      *(int *)&this_02[0x1d].field_0xdc = *(int *)&this_02[0x1d].field_0xdc + -1;
      uVar13 = *(uint *)(iVar5 + 0x14);
      if (uVar13 == 0) {
        uVar13 = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar5 + 8);
      }
      puVar7 = (undefined4 *)FUN_006b4fa0(iVar5);
      for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      }
      iVar5 = 0;
      bVar14 = 0;
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar7 = 0xff;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      pCVar8 = FUN_006f2c00("MM_BAN_",2,*(undefined4 *)&this_02[0x1d].field_0xdc);
      puVar9 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,pCVar8,bVar14,iVar5);
      DibPut(*(AnonShape_006B5B10_E0D06CF1 **)&this_02[0x1d].field_0xe0,0,0,'\x06',(byte *)puVar9);
      FUN_006b35d0(DAT_008075a8,*(uint *)&this_02[0x1d].field_0xd8);
      local_8 = 0;
    }
    if ((*(HoloTy **)&this_02[0x23].field_0x1a != (HoloTy *)0x0) &&
       (iVar5 = HoloTy::NextFas(*(HoloTy **)&this_02[0x23].field_0x1a), iVar5 != 0)) {
      local_8 = 0;
    }
    if ((*(HoloTy **)&this_02[0x23].field_0x1e != (HoloTy *)0x0) &&
       (iVar5 = HoloTy::NextFas(*(HoloTy **)&this_02[0x23].field_0x1e), iVar5 != 0)) {
      local_8 = 0;
    }
    if ((*(HoloTy **)&this_02[0x23].field_0x22 != (HoloTy *)0x0) &&
       (iVar5 = HoloTy::NextFas(*(HoloTy **)&this_02[0x23].field_0x22), iVar5 != 0)) {
      local_8 = 0;
    }
    if ((*(HoloTy **)&this_02[0x23].field_0x26 != (HoloTy *)0x0) &&
       (iVar5 = HoloTy::NextFas(*(HoloTy **)&this_02[0x23].field_0x26), iVar5 != 0)) {
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
    puVar7 = &local_24;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    this_00 = *(HoloTy **)&this_02[0x23].field_0x22;
    *(undefined2 *)puVar7 = 0;
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
        uVar16 = 0;
        pcVar15 = &DAT_008016a0;
        pcVar10 = LoadResourceString(0x254d,HINSTANCE_00807618);
        thunk_FUN_0055d390(&DAT_00802a90,pcVar10,pcVar15,uVar16);
        this_02[0x1d].field_0xab = 0;
      }
      break;
    case 8:
      CFsgsConnection::RequestGameList
                ((CFsgsConnection *)&DAT_00802a90,*(ulong *)&this_02[0x22].field_0x9c,(char *)0x0);
      DVar4 = timeGetTime();
      *(DWORD *)&this_02[0x1d].field_0xac = DVar4;
      pCVar3 = PTR_00802a30;
      goto joined_r0x00597872;
    case 9:
      CFsgsConnection::RequestLadderList
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar3 = PTR_00802a30;
joined_r0x00597872:
      PTR_00802a30 = pCVar3;
      if (pCVar3 != (CursorClassTy *)0x0) {
        pCVar3->field_0493 = 5;
        pCVar3->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar3,CASE_0,pCVar3->field_00C5,pCVar3->field_00C9);
        CursorClassTy::DrawSprite(pCVar3,pCVar3->field_00C5,pCVar3->field_00C9);
        pCVar3->field_00D2 = 0;
        pCVar3->field_04DF = 0xffffffff;
      }
      break;
    case 10:
      if (*(char **)&this_02[0x1e].field_0x72 != (char *)0x0) {
        local_64 = "Profile\\Age";
        local_60 = "Profile\\Sex";
        local_5c = "Profile\\Location";
        local_58 = "Profile\\Description";
        local_54 = "0\\Wins";
        local_50 = "0\\Losses";
        local_4c = "0\\Draws";
        local_48 = "0\\Disconnects";
        local_44 = "1\\Wins";
        local_40 = "1\\Losses";
        local_3c = "1\\Draws";
        local_38 = "1\\Disconnects";
        local_34 = "1\\Rank";
        local_30 = "1\\Rating";
        local_2c = "1\\Last Game";
        CFsgsConnection::RequestInfo
                  ((CFsgsConnection *)&DAT_00802a90,*(char **)&this_02[0x1e].field_0x72,0xf,
                   &local_64);
        pCVar3 = PTR_00802a30;
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
      iVar5 = HoloTy::NextFas(*(HoloTy **)&local_28[0x23].field_0x1a);
      if (iVar5 == 0) {
        uVar13 = *(uint *)(*(int *)&this_02[0x23].field_0x1a + 3);
        if (-1 < (int)uVar13) {
          FUN_006b3af0(DAT_008075a8,uVar13);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_02[0x23].field_0x1e != (HoloTy *)0x0) {
      iVar5 = HoloTy::NextFas(*(HoloTy **)&this_02[0x23].field_0x1e);
      if (iVar5 == 0) {
        uVar13 = *(uint *)(*(int *)&this_02[0x23].field_0x1e + 3);
        if (-1 < (int)uVar13) {
          FUN_006b3af0(DAT_008075a8,uVar13);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_02[0x23].field_0x22 != (HoloTy *)0x0) {
      iVar5 = HoloTy::NextFas(*(HoloTy **)&this_02[0x23].field_0x22);
      if (iVar5 == 0) {
        uVar13 = *(uint *)(*(int *)&this_02[0x23].field_0x22 + 3);
        if (-1 < (int)uVar13) {
          FUN_006b3af0(DAT_008075a8,uVar13);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_02[0x23].field_0x26 != (HoloTy *)0x0) {
      iVar5 = HoloTy::NextFas(*(HoloTy **)&this_02[0x23].field_0x26);
      if (iVar5 == 0) {
        uVar13 = *(uint *)(*(int *)&this_02[0x23].field_0x26 + 3);
        if (-1 < (int)uVar13) {
          FUN_006b3af0(DAT_008075a8,uVar13);
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
      iVar5 = *(int *)&this_02[0x1d].field_0xe0;
      *(int *)&this_02[0x1d].field_0xdc = *(int *)&this_02[0x1d].field_0xdc + 1;
      uVar13 = *(uint *)(iVar5 + 0x14);
      if (uVar13 == 0) {
        uVar13 = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar5 + 8);
      }
      puVar7 = (undefined4 *)FUN_006b4fa0(iVar5);
      for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      }
      iVar5 = 0;
      bVar14 = 0;
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar7 = 0xff;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      pCVar8 = FUN_006f2c00("MM_BAN_",2,*(undefined4 *)&this_02[0x1d].field_0xdc);
      puVar9 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,pCVar8,bVar14,iVar5);
      DibPut(*(AnonShape_006B5B10_E0D06CF1 **)&this_02[0x1d].field_0xe0,0,0,'\x06',(byte *)puVar9);
      FUN_006b35d0(DAT_008075a8,*(uint *)&this_02[0x1d].field_0xd8);
      local_8 = 0;
    }
    pCVar3 = PTR_00802a30;
    if ((PTR_0081176c->field_02E6 != (MMsgTy *)0x0) &&
       (PTR_0081176c->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        iVar5 = PTR_00802a30->field_00C9;
        iVar11 = PTR_00802a30->field_00C5;
        PTR_00802a30->field_0493 = 1;
        pCVar3->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar3,CASE_0,iVar11,iVar5);
        CursorClassTy::DrawSprite(pCVar3,pCVar3->field_00C5,pCVar3->field_00C9);
        pCVar3->field_00D2 = 0;
        pCVar3->field_04DF = 0xffffffff;
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
      bVar14 = this_02[0x1d].field_0xa3;
      this_02->field_0x65 = 2;
      if ((bVar14 != 0xff) && (*(int *)((int)this_02 + (uint)bVar14 * 0x1fb + 0xd1) != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)((int)this_02 + (uint)bVar14 * 0x1fb + 0xc1));
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_a8.previous;
  return;
}

