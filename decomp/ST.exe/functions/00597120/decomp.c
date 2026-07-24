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
  FSGSTy_field_1A5FState FVar1;
  AnonPointee_FSGSTy_1A97 *pAVar2;
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
  char *resourceString;
  void *pvVar11;
  int iVar12;
  uint uVar13;
  DArrayTy *pDVar14;
  uint uVar15;
  byte bVar16;
  char *pcVar17;
  ulong uVar18;
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

  uVar15 = 1;
  local_8 = 1;
  local_28 = this;
  DVar5 = timeGetTime();
  this->field_0061 = DVar5;
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  iVar6 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0);
  this_02 = local_28;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x284,0,iVar6,
                                "%s","FSGSTy::NoneFSGS");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x284);
    return;
  }
  switch(local_28->field_0065) {
  case CASE_1:
    CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
    if (this_02->field_1A5F == CASE_6) {
      if (15000 < this_02->field_0061 - this_02->field_1EB2) {
        if ((this_02->field_1A60 == '\0') &&
           (pDVar14 = this_02->field_1EA6, pDVar14 != (DArrayTy *)0x0)) {
          if (1 < pDVar14->count) {
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar14, uVar15) (runtime stride) */
              pvVar11 = (void *)(pDVar14->elementSize * uVar15 + (int)pDVar14->data);
              if (pvVar11 != (void *)0x0) {
                CFsgsConnection::PingPlayer
                          ((CFsgsConnection *)&DAT_00802a90,this_02->field_1EAE,
                           *(ulong *)((int)pvVar11 + 0x21));
              }
              pDVar14 = this_02->field_1EA6;
              uVar15 = uVar15 + 1;
            } while (uVar15 < pDVar14->count);
          }
          this_02->field_1EAE = this_02->field_1EAE + 1;
        }
        this_02->field_1EB2 = this_02->field_0061;
      }
    }
    else if ((this_02->field_1A5F == CASE_8) && (60000 < this_02->field_0061 - this_02->field_1A63))
    {
      CFsgsConnection::RequestGameList
                ((CFsgsConnection *)&DAT_00802a90,this_02->field_1EC2,(char *)0x0);
      this_02->field_1A63 = this_02->field_0061;
      pCVar4 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
        iVar6 = g_cursorClass_00802A30->field_00C9;
        iVar12 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = 5;
        pCVar4->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar4,CASE_0,iVar12,iVar6);
        CursorClassTy::DrawSprite(pCVar4,pCVar4->field_00C5,pCVar4->field_00C9);
        pCVar4->field_00D2 = 0;
        pCVar4->field_04DF = -1;
      }
    }
    if (((this_02->field_1A97 != (AnonPointee_FSGSTy_1A97 *)0x0) &&
        (this_02->field_1A9F != (int *)0x0)) &&
       (this_02->field_1AA3 < (int)(this_02->field_0061 - this_02->field_1AA7))) {
      Library::DKW::GPC::FUN_006c7070(this_02->field_1A9F,(undefined4 *)this_02->field_1A97,0);
      iVar6 = FUN_006c7000(this_02->field_1A9F);
      this_02->field_1AA3 = iVar6;
      if (iVar6 < 1) {
        if (iVar6 == -1) {
          FUN_006c7030(this_02->field_1A9F);
        }
        else {
          FUN_006c6fc0(this_02->field_1A9F);
          this_02->field_1A9F = (void *)0x0;
          FreeAndNull((void **)&this_02->field_1A9B);
        }
      }
      else {
        this_02->field_1AA7 = this_02->field_0061;
      }
      FUN_006b35d0((int *)PTR_008075a8,this_02->field_1A8F);
    }
    break;
  case CASE_3:
  case CASE_6:
  case CASE_7:
  case CASE_8:
  case CASE_A:
    if ((0 < local_28->field_1A93) && (-1 < local_28->field_1A8F)) {
      if (local_28->field_1A93 == 9) {
        uVar7 = MMObjTy::CreateSprBut((MMObjTy *)local_28,0,1,0x121,9,0x1d6,0x3c,0x694c,0);
        this_02->field_1AB3 = uVar7;
      }
      pAVar2 = this_02->field_1A97;
      this_02->field_1A93 = this_02->field_1A93 + -1;
      uVar15 = pAVar2->field_0014;
      if (uVar15 == 0) {
        uVar15 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                 pAVar2->field_0008;
      }
      puVar8 = (undefined4 *)FUN_006b4fa0((int)pAVar2);
      for (uVar13 = uVar15 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      iVar6 = 0;
      bVar16 = 0;
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      pCVar9 = FUN_006f2c00("MM_BAN_",2,this_02->field_1A93);
      puVar10 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,pCVar9,bVar16,iVar6);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_02->field_1A97,0,0,'\x06',(byte *)puVar10);
      FUN_006b35d0((int *)PTR_008075a8,this_02->field_1A8F);
      local_8 = 0;
    }
    if ((this_02->field_1F23 != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(this_02->field_1F23), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((this_02->field_1F27 != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(this_02->field_1F27), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((this_02->field_1F2B != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(this_02->field_1F2B), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((this_02->field_1F2F != (HoloTy *)0x0) &&
       (iVar6 = HoloTy::NextFas(this_02->field_1F2F), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((g_startSystem_0081176C->field_02E6 != (MMsgTy *)0x0) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 == 0) {
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    puVar8 = &local_24;
    memset(puVar8, 0, 0x18); /* compiler bulk-zero initialization */
    puVar8 = (undefined4 *)((byte *)puVar8 + 0x18);
    this_00 = this_02->field_1F2B;
    *(undefined2 *)puVar8 = 0;
    if (this_00 != (HoloTy *)0x0) {
      HoloTy::Done(this_00);
      Library::MSVCRT::FUN_0072e2b0(this_02->field_1F2B);
      this_02->field_1F2B = (HoloTy *)0x0;
    }
    if (this_02->field_1F23 != (HoloTy *)0x0) {
      HoloTy::Done(this_02->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(this_02->field_1F23);
      this_02->field_1F23 = (HoloTy *)0x0;
    }
    if (this_02->field_1F27 != (HoloTy *)0x0) {
      HoloTy::Done(this_02->field_1F27);
      Library::MSVCRT::FUN_0072e2b0(this_02->field_1F27);
      this_02->field_1F27 = (HoloTy *)0x0;
    }
    if (this_02->field_1F2F != (HoloTy *)0x0) {
      HoloTy::Done(this_02->field_1F2F);
      Library::MSVCRT::FUN_0072e2b0(this_02->field_1F2F);
      this_02->field_1F2F = (HoloTy *)0x0;
    }
    switch(this_02->field_0065) {
    case CASE_6:
      Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,this_02->field_1ABC);
      this_02->field_1A5F = CASE_1;
      thunk_FUN_0055c180((CFsgsConnection *)&DAT_00802a90);
      local_18 = 1;
      break;
    case CASE_7:
      if ((this_02->field_1A5F != CASE_3) && (this_02->field_1A5F != CASE_9)) {
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,this_02->field_1ABC);
      }
    case CASE_8:
    case CASE_A:
      local_18 = 1;
      local_1a = 1;
      local_20 = 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_24._2_2_ = 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_24._0_2_ = 1;
    }
    this_02->field_0065 = CASE_1;
    PaintFSGS(this_02,'\0');
    CreateCtrls(this_02);
    switch(this_02->field_1A5F) {
    case CASE_6:
      this_02->field_1EB2 = this_02->field_0061;
      if (this_02->field_1A62 == '\0') {
        thunk_FUN_0055d410((CFsgsConnection *)&DAT_00802a90);
      }
      else {
        uVar18 = 0;
        pcVar17 = &DAT_008016a0;
        resourceString = LoadResourceString(0x254d,g_module_00807618);
        thunk_FUN_0055d390(&DAT_00802a90,resourceString,pcVar17,uVar18);
        this_02->field_1A62 = 0;
      }
      break;
    case CASE_8:
      CFsgsConnection::RequestGameList
                ((CFsgsConnection *)&DAT_00802a90,this_02->field_1EC2,(char *)0x0);
      DVar5 = timeGetTime();
      this_02->field_1A63 = DVar5;
      pCVar4 = g_cursorClass_00802A30;
      goto joined_r0x00597872;
    case CASE_9:
      CFsgsConnection::RequestLadderList
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar4 = g_cursorClass_00802A30;
joined_r0x00597872:
      g_cursorClass_00802A30 = pCVar4;
      if (pCVar4 != (CursorClassTy *)0x0) {
        pCVar4->field_0493 = 5;
        pCVar4->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar4,CASE_0,pCVar4->field_00C5,pCVar4->field_00C9);
        CursorClassTy::DrawSprite(pCVar4,pCVar4->field_00C5,pCVar4->field_00C9);
        pCVar4->field_00D2 = 0;
        pCVar4->field_04DF = -1;
      }
      break;
    case CASE_A:
      if (this_02->field_1B0C != (byte *)0x0) {
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
                  ((CFsgsConnection *)&DAT_00802a90,(char *)this_02->field_1B0C,0xf,&local_64);
        pCVar4 = g_cursorClass_00802A30;
        goto joined_r0x00597872;
      }
    }
    this_01 = this_02->field_1A5B->field_02E6;
    if (this_01 != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(this_01,(int)&local_24);
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    break;
  case CASE_4:
    if (local_28->field_1F23 != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(local_28->field_1F23);
      if (iVar6 == 0) {
        uVar15 = this_02->field_1F23->field_0003;
        if (-1 < (int)uVar15) {
          FUN_006b3af0((int *)PTR_008075a8,uVar15);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_02->field_1F27 != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(this_02->field_1F27);
      if (iVar6 == 0) {
        uVar15 = this_02->field_1F27->field_0003;
        if (-1 < (int)uVar15) {
          FUN_006b3af0((int *)PTR_008075a8,uVar15);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_02->field_1F2B != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(this_02->field_1F2B);
      if (iVar6 == 0) {
        uVar15 = this_02->field_1F2B->field_0003;
        if (-1 < (int)uVar15) {
          FUN_006b3af0((int *)PTR_008075a8,uVar15);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_02->field_1F2F != (HoloTy *)0x0) {
      iVar6 = HoloTy::NextFas(this_02->field_1F2F);
      if (iVar6 == 0) {
        uVar15 = this_02->field_1F2F->field_0003;
        if (-1 < (int)uVar15) {
          FUN_006b3af0((int *)PTR_008075a8,uVar15);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (((this_02->field_1A61 == '\0') && (this_02->field_1A93 < 9)) && (-1 < this_02->field_1A8F))
    {
      if ((this_02->field_1A93 == 0) && (this_02->field_1AB3 != 0)) {
        StartSystemTy::sub_006E56B0(this_02->field_000C,this_02->field_1AB3);
        this_02->field_1AB3 = 0;
      }
      pAVar2 = this_02->field_1A97;
      this_02->field_1A93 = this_02->field_1A93 + 1;
      uVar15 = pAVar2->field_0014;
      if (uVar15 == 0) {
        uVar15 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                 pAVar2->field_0008;
      }
      puVar8 = (undefined4 *)FUN_006b4fa0((int)pAVar2);
      for (uVar13 = uVar15 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      iVar6 = 0;
      bVar16 = 0;
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      pCVar9 = FUN_006f2c00("MM_BAN_",2,this_02->field_1A93);
      puVar10 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,pCVar9,bVar16,iVar6);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_02->field_1A97,0,0,'\x06',(byte *)puVar10);
      FUN_006b35d0((int *)PTR_008075a8,this_02->field_1A8F);
      local_8 = 0;
    }
    pCVar4 = g_cursorClass_00802A30;
    if ((g_startSystem_0081176C->field_02E6 != (MMsgTy *)0x0) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
        iVar6 = g_cursorClass_00802A30->field_00C9;
        iVar12 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = 1;
        pCVar4->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar4,CASE_0,iVar12,iVar6);
        CursorClassTy::DrawSprite(pCVar4,pCVar4->field_00C5,pCVar4->field_00C9);
        pCVar4->field_00D2 = 0;
        pCVar4->field_04DF = -1;
      }
      FVar1 = this_02->field_1A61;
      if (FVar1 != 0) {
        switch(FVar1) {
        case CASE_2:
        case CASE_3:
        case CASE_4:
        case CASE_5:
        case CASE_7:
        case CASE_9:
        case CASE_A:
          this_02->field_1A5F = FVar1;
          SetState(this_02,7);
          this_02->field_1A61 = 0;
          g_currentExceptionFrame = local_a8.previous;
          return;
        case CASE_6:
          this_02->field_1A5F = FVar1;
          SetState(this_02,8);
          this_02->field_1A61 = 0;
          g_currentExceptionFrame = local_a8.previous;
          return;
        case CASE_8:
          this_02->field_1A5F = FVar1;
          SetState(this_02,10);
        }
        this_02->field_1A61 = 0;
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
      bVar16 = this_02->field_1A5A;
      this_02->field_0065 = CASE_2;
      if ((bVar16 != 0xff) && (*(int *)(&this_02->field_0xd1 + (uint)bVar16 * 0x1fb) != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_02->field_0xc1 + (uint)bVar16 * 0x1fb));
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_a8.previous;
  return;
}

