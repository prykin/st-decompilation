#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x00597a13) */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::NoneFSGS

   [STSwitchEnumApplier] Switch target field_0065 uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_0065State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NoneFSGS(FSGSTy * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=00597422 RET | 00597462 RET | 0059748B RET | 005974B4 RET | 00597916 RET |
   00597B00 RET | 00597B47 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall FSGSTy::NoneFSGS(FSGSTy *this)

{
  char cVar1;
  int iVar2;
  AnonPointee_FSGSTy_1A97 *pAVar3;
  HoloTy *this_00;
  MMsgTy *this_01;
  CursorClassTy *pCVar5;
  FSGSTy *this_02;
  DWORD DVar6;
  int local_EAX_67;
  undefined4 uVar7;
  undefined4 *puVar8;
  LPSTR pCVar9;
  ushort *puVar10;
  char *pcVar11_mg0;
  int iVar6;
  int iVar12;
  uint uVar11;
  FSGSTy_field_1EA6DArray *pFVar12;
  uint uVar13;
  byte bVar14;
  char *pcVar15;
  FSGSTy_field_1EA6Element *element_1ea6;
  int iVar16;
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

  uVar13 = 1;
  local_8 = 1;
  local_28 = this;
  DVar6 = timeGetTime();
  this->field_0061 = DVar6;
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  local_EAX_67 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0);
  this_02 = local_28;
  if (local_EAX_67 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x284,0,local_EAX_67,
                                "%s","FSGSTy::NoneFSGS");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_67,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x284);
    return;
  }
  switch(local_28->field_0065) {
  case CASE_1:
    CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
    cVar1 = this_02->array_00BC[0xc].field_01DF;
    if (cVar1 == '\x06') {
      if (15000 < this_02->field_0061 - this_02->field_1EB2) {
        if ((this_02->array_00BC[0xc].field_01E0 == '\0') &&
           (pFVar12 = this_02->field_1EA6, pFVar12 != nullptr)) {
          if (1 < pFVar12->count) {
            do {
              element_1ea6 = DArrayAt<FSGSTy_field_1EA6Element>(pFVar12, uVar13);
              if (element_1ea6 != nullptr) {
                CFsgsConnection::PingPlayer
                          ((CFsgsConnection *)&DAT_00802a90,this_02->field_1EAE,
                           *(ulong *)(element_1ea6 + 0x21));
              }
              pFVar12 = this_02->field_1EA6;
              uVar13 = uVar13 + 1;
            } while (uVar13 < pFVar12->count);
          }
          this_02->field_1EAE = this_02->field_1EAE + 1;
        }
        this_02->field_1EB2 = this_02->field_0061;
      }
    }
    else if ((cVar1 == '\b') && (60000 < this_02->field_0061 - this_02->array_00BC[0xc].field_01E3))
    {
      CFsgsConnection::RequestGameList
                ((CFsgsConnection *)&DAT_00802a90,this_02->field_1EC2,nullptr);
      this_02->array_00BC[0xc].field_01E3 = this_02->field_0061;
      pCVar5 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 != nullptr) {
        iVar16 = g_cursorClass_00802A30->field_00C9;
        iVar2 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_5;
        pCVar5->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar5,CASE_0,iVar2,iVar16);
        CursorClassTy::DrawSprite(pCVar5,pCVar5->field_00C5,pCVar5->field_00C9);
        pCVar5->field_00D2 = 0;
        pCVar5->field_04DF = -1;
      }
    }
    if (((this_02->field_1A97 != nullptr) &&
        (this_02->field_1A9F != nullptr)) &&
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
          this_02->field_1A9F = nullptr;
          FreeAndNull(&this_02->field_1A9B);
        }
      }
      else {
        this_02->field_1AA7 = this_02->field_0061;
      }
      FUN_006b35d0((int *)g_ddxContext_008075A8,this_02->field_1A8F);
    }
    break;
  case CASE_3:
  case CASE_6:
  case CASE_7:
  case CASE_8:
  case CASE_A:
    if ((0 < local_28->field_1A93) && (-1 < (int)local_28->field_1A8F)) {
      if (local_28->field_1A93 == 9) {
        uVar7 = MMObjTy::CreateSprBut((MMObjTy *)local_28,0,1,0x121,9,0x1d6,0x3c,0x694c,0);
        this_02->field_1AB3 = uVar7;
      }
      pAVar3 = this_02->field_1A97;
      this_02->field_1A93 = this_02->field_1A93 + -1;
      uVar13 = pAVar3->field_0014;
      if (uVar13 == 0) {
        uVar13 = ((uint)(ushort)pAVar3->field_000E * pAVar3->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                 pAVar3->field_0008;
      }
      puVar8 = (undefined4 *)FUN_006b4fa0((int *)pAVar3);
      for (uVar11 = uVar13 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      iVar16 = 0;
      bVar14 = 0;
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      pCVar9 = FUN_006f2c00("MM_BAN_",2,this_02->field_1A93);
      puVar10 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,pCVar9,bVar14,iVar16);
      DibPut((RecoveredSourceFamily_dibcopy *)this_02->field_1A97,0,0,'\x06',(byte *)puVar10);
      FUN_006b35d0((int *)g_ddxContext_008075A8,this_02->field_1A8F);
      local_8 = 0;
    }
    if ((this_02->field_1F23 != nullptr) &&
       (iVar16 = HoloTy::NextFas(this_02->field_1F23), iVar16 != 0)) {
      local_8 = 0;
    }
    if ((this_02->field_1F27 != nullptr) &&
       (iVar16 = HoloTy::NextFas(this_02->field_1F27), iVar16 != 0)) {
      local_8 = 0;
    }
    if ((this_02->field_1F2B != nullptr) &&
       (iVar16 = HoloTy::NextFas(this_02->field_1F2B), iVar16 != 0)) {
      local_8 = 0;
    }
    if ((this_02->field_1F2F != nullptr) &&
       (iVar16 = HoloTy::NextFas(this_02->field_1F2F), iVar16 != 0)) {
      local_8 = 0;
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 == 0) {
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    puVar8 = &local_24;
    memset(puVar8, 0, 0x1a); /* compiler bulk-zero initialization */
    puVar8 = (undefined4 *)((byte *)puVar8 + 0x18);
    this_00 = this_02->field_1F2B;
    if (this_00 != nullptr) {
      HoloTy::Done(this_00);
      Library::MSVCRT::FUN_0072e2b0(this_02->field_1F2B);
      this_02->field_1F2B = nullptr;
    }
    if (this_02->field_1F23 != nullptr) {
      HoloTy::Done(this_02->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(this_02->field_1F23);
      this_02->field_1F23 = nullptr;
    }
    if (this_02->field_1F27 != nullptr) {
      HoloTy::Done(this_02->field_1F27);
      Library::MSVCRT::FUN_0072e2b0(this_02->field_1F27);
      this_02->field_1F27 = nullptr;
    }
    if (this_02->field_1F2F != nullptr) {
      HoloTy::Done(this_02->field_1F2F);
      Library::MSVCRT::FUN_0072e2b0(this_02->field_1F2F);
      this_02->field_1F2F = nullptr;
    }
    switch(this_02->field_0065) {
    case CASE_6:
      Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,this_02->field_1ABC);
      this_02->array_00BC[0xc].field_01DF = 1;
      thunk_FUN_0055c180((CFsgsConnection *)&DAT_00802a90);
      local_18 = 1;
      break;
    case CASE_7:
      cVar1 = this_02->array_00BC[0xc].field_01DF;
      if ((cVar1 != '\x03') && (cVar1 != '\t')) {
        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,this_02->field_1ABC);
      }
    case CASE_8:
    case CASE_A:
      local_18 = 1;
      local_1a = 1;
      local_20 = 1;
      STPiece<2,2>(local_24) = 1;
      STPiece<0,2>(local_24) = 1;
    }
    this_02->field_0065 = CASE_1;
    PaintFSGS(this_02,'\0');
    CreateCtrls(this_02);
    switch(this_02->array_00BC[0xc].field_01DF) {
    case 6:
      cVar1 = this_02->array_00BC[0xc].field_01E2;
      this_02->field_1EB2 = this_02->field_0061;
      if (cVar1 == '\0') {
        thunk_FUN_0055d410((CFsgsConnection *)&DAT_00802a90);
      }
      else {
        uVar17 = 0;
        pcVar15 = &CHAR_00h_008016a0;
        pcVar11_mg0 = LoadResourceString(0x254d,g_hINSTANCE_00807618);
        thunk_FUN_0055d390(&DAT_00802a90,pcVar11_mg0,pcVar15,uVar17);
        this_02->array_00BC[0xc].field_01E2 = 0;
      }
      break;
    case 8:
      CFsgsConnection::RequestGameList
                ((CFsgsConnection *)&DAT_00802a90,this_02->field_1EC2,nullptr);
      DVar6 = timeGetTime();
      this_02->array_00BC[0xc].field_01E3 = DVar6;
      pCVar5 = g_cursorClass_00802A30;
      goto joined_r0x00597872;
    case 9:
      CFsgsConnection::RequestLadderList
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar5 = g_cursorClass_00802A30;
joined_r0x00597872:
      g_cursorClass_00802A30 = pCVar5;
      if (pCVar5 != nullptr) {
        pCVar5->field_0493 = CASE_5;
        pCVar5->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar5,CASE_0,pCVar5->field_00C5,pCVar5->field_00C9);
        CursorClassTy::DrawSprite(pCVar5,pCVar5->field_00C5,pCVar5->field_00C9);
        pCVar5->field_00D2 = 0;
        pCVar5->field_04DF = -1;
      }
      break;
    case 10:
      if (this_02->field_1B0C != nullptr) {
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
        pCVar5 = g_cursorClass_00802A30;
        goto joined_r0x00597872;
      }
    }
    this_01 = (this_02->array_00BC[0xc].field_01DB)->field_02E6;
    if (this_01 != nullptr) {
      MMsgTy::StatePanel(this_01,(int)&local_24);
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    break;
  case CASE_4:
    if (local_28->field_1F23 != nullptr) {
      iVar16 = HoloTy::NextFas(local_28->field_1F23);
      if (iVar16 == 0) {
        uVar13 = *(uint *)&this_02->field_1F23->field_0x3;
        if (-1 < (int)uVar13) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar13);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_02->field_1F27 != nullptr) {
      iVar16 = HoloTy::NextFas(this_02->field_1F27);
      if (iVar16 == 0) {
        uVar13 = *(uint *)&this_02->field_1F27->field_0x3;
        if (-1 < (int)uVar13) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar13);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_02->field_1F2B != nullptr) {
      iVar16 = HoloTy::NextFas(this_02->field_1F2B);
      if (iVar16 == 0) {
        uVar13 = *(uint *)&this_02->field_1F2B->field_0x3;
        if (-1 < (int)uVar13) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar13);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_02->field_1F2F != nullptr) {
      iVar16 = HoloTy::NextFas(this_02->field_1F2F);
      if (iVar16 == 0) {
        uVar13 = *(uint *)&this_02->field_1F2F->field_0x3;
        if (-1 < (int)uVar13) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar13);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (((this_02->array_00BC[0xc].field_01E1 == '\0') && (this_02->field_1A93 < 9)) &&
       (-1 < (int)this_02->field_1A8F)) {
      if ((this_02->field_1A93 == 0) && (this_02->field_1AB3 != 0)) {
        StartSystemTy::sub_006E56B0(this_02->field_000C,this_02->field_1AB3);
        this_02->field_1AB3 = 0;
      }
      pAVar3 = this_02->field_1A97;
      this_02->field_1A93 = this_02->field_1A93 + 1;
      uVar13 = pAVar3->field_0014;
      if (uVar13 == 0) {
        uVar13 = ((uint)(ushort)pAVar3->field_000E * pAVar3->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                 pAVar3->field_0008;
      }
      puVar8 = (undefined4 *)FUN_006b4fa0((int *)pAVar3);
      for (uVar11 = uVar13 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      iVar16 = 0;
      bVar14 = 0;
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      pCVar9 = FUN_006f2c00("MM_BAN_",2,this_02->field_1A93);
      puVar10 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,pCVar9,bVar14,iVar16);
      DibPut((RecoveredSourceFamily_dibcopy *)this_02->field_1A97,0,0,'\x06',(byte *)puVar10);
      FUN_006b35d0((int *)g_ddxContext_008075A8,this_02->field_1A8F);
      local_8 = 0;
    }
    pCVar5 = g_cursorClass_00802A30;
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar16 = g_cursorClass_00802A30->field_00C9;
        iVar2 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar5->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar5,CASE_0,iVar2,iVar16);
        CursorClassTy::DrawSprite(pCVar5,pCVar5->field_00C5,pCVar5->field_00C9);
        pCVar5->field_00D2 = 0;
        pCVar5->field_04DF = -1;
      }
      cVar1 = this_02->array_00BC[0xc].field_01E1;
      if (cVar1 != '\0') {
        switch(cVar1) {
        case '\x02':
        case '\x03':
        case '\x04':
        case '\x05':
        case '\a':
        case '\t':
        case '\n':
          this_02->array_00BC[0xc].field_01DF = cVar1;
          SetState(this_02,7);
          this_02->array_00BC[0xc].field_01E1 = 0;
          g_currentExceptionFrame = local_a8.previous;
          return;
        case '\x06':
          this_02->array_00BC[0xc].field_01DF = cVar1;
          SetState(this_02,8);
          this_02->array_00BC[0xc].field_01E1 = 0;
          g_currentExceptionFrame = local_a8.previous;
          return;
        case '\b':
          this_02->array_00BC[0xc].field_01DF = cVar1;
          SetState(this_02,10);
        }
        this_02->array_00BC[0xc].field_01E1 = 0;
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
      bVar14 = this_02->array_00BC[0xc].field_01DA;
      this_02->field_0065 = CASE_2;
      if ((bVar14 != 0xff) && (*(int *)&this_02->array_00BC[bVar14].field_0x15 != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_02->array_00BC[bVar14].field_0x5);
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_a8.previous;
  return;
}

