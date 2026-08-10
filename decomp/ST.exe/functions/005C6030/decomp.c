#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::CreateCtrls */

void __thiscall SettMapTy::CreateCtrls(SettMapTy *this,char param_1)

{
  undefined1 *puVar1;
  int iVar2;
  SettMapTy_field_1E26State SVar3;
  MMMObjTy *pMVar4;
  bool bVar6;
  int iVar11;
  undefined4 uVar7;
  cMf32 *pcVar8;
  DArrayTy *pDVar9;
  uint uVar10;
  int iVar12;
  int iVar13;
  SettMapTy *this_00;
  undefined4 uVar14;
  byte *puVar15;
  uint *puVar16;
  undefined4 uVar17;
  byte *puVar18;
  undefined4 local_ef4 [566];
  undefined4 local_61c [17];
  undefined4 local_5d8;
  uint local_5d0 [5];
  int local_5bc;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  ushort *local_4ac;
  int local_4a8;
  undefined4 local_454 [5];
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_94;
  undefined4 local_90;
  InternalExceptionFrame local_7c;
  undefined4 local_38;
  undefined2 local_2e;
  undefined2 local_2c;
  SettMapTy *local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puVar15 = (byte *)(local_454);
  local_1c = this;
  for (iVar13 = 0xf6; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar15 = 0;
    puVar15 = (byte *)(puVar15 + 1);
  }
  memset(local_ef4, 0, 0x88c); /* compiler bulk-zero initialization */
  iVar13 = 0;
  memset(local_5d0, 0, 0x17c); /* compiler bulk-zero initialization */
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  iVar11 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar11 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\Start\\sett_obj.cpp",0x34d,0,iVar11,
                                "%s","SettMapTy::CreateCtrls");
    if (iVar12 == 0) {
      RaiseInternalException(iVar11,0,"E:\\__titans\\Start\\sett_obj.cpp",0x34d);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == '\0') {
    local_5d0[0] = (uint)(DAT_0080877e != '\0');
    local_5d0[2] = 0x15;
    local_5d0[3] = 0x14;
    local_5d0[1] = iVar11;
    local_4ac = FUN_0070aa70(g_cMf32_00806780,"MASK_MAP",0,1);
    local_5d0[4] = Library::Ourlib::MFIMG::mfImgGetWidth
                             (g_cMf32_00806780,0x12,"MASK_MAP",1);
    this_00 = local_1c;
    local_5b0 = local_1c->field_0008;
    local_5ac = 2;
    local_5a8 = 0x654d;
    local_5bc = local_5d0[4];
    local_4a8 = local_5d0[4];
    (*local_1c->field_000C->vtable->CreateObject)
              ((SystemClassTy *)local_1c->field_000C,2,&local_1c->field_215D,nullptr,local_5d0,0);
    goto LAB_005c69ed;
  }
  if (local_1c->field_1C6F != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)local_1c->field_1CB3,local_1c->field_1C6F,0xfffffffe,local_1c->field_1C87,
               local_1c->field_1C8B);
  }
  if (this_00->field_1D00 != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)this_00->field_1D44,this_00->field_1D00,0xfffffffe,this_00->field_1D18,
               this_00->field_1D1C);
  }
  if (this_00->field_1D91 != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)this_00->field_1DD5,this_00->field_1D91,0xfffffffe,this_00->field_1DA9,
               this_00->field_1DAD);
  }
  puVar16 = this_00->field_20CC;
  iVar13 = 10;
  do {
    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*puVar16);
    puVar16 = puVar16 + 1;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  local_10 = 0x41;
  local_18 = 0x69ff;
  uVar14 = local_c;
  uVar17 = local_8;
  do {
    local_14 = 0;
    while( true ) {
      SVar3 = this_00->field_1E26;
      if (((SVar3 == CASE_6) || (SVar3 == CASE_1)) || (iVar13 = 8, SVar3 == CASE_2)) {
        iVar13 = 6;
      }
      if (iVar13 <= local_14) break;
      switch(local_14) {
      case 0:
        uVar17 = 0x14;
        local_c = 0x116;
        uVar14 = local_c;
        local_8 = uVar17;
        break;
      case 1:
        uVar17 = 0x14;
        local_c = 300;
        uVar14 = local_c;
        local_8 = uVar17;
        break;
      case 2:
        uVar17 = 0x18;
        local_c = 0x141;
        uVar14 = local_c;
        local_8 = uVar17;
        break;
      case 3:
        uVar17 = 0x5f;
        local_c = 0x15b;
        uVar14 = local_c;
        local_8 = uVar17;
        break;
      case 4:
        local_c = 0x1bc;
        uVar14 = local_c;
        if (((SVar3 == CASE_6) || (SVar3 == CASE_1)) || (SVar3 == CASE_2)) {
          uVar17 = 0xed;
          local_8 = uVar17;
        }
        else {
          uVar17 = 0xad;
          local_8 = uVar17;
        }
        break;
      case 5:
        if (((SVar3 == CASE_6) || (SVar3 == CASE_1)) || (local_c = 0x26b, SVar3 == CASE_2)) {
          local_c = 0x2ab;
        }
        uVar17 = 0x3e;
        uVar14 = local_c;
        local_8 = uVar17;
        break;
      case 6:
        uVar17 = 0x2c;
        local_c = 0x2ab;
        uVar14 = local_c;
        local_8 = uVar17;
        break;
      case 7:
        uVar17 = 0x17;
        local_c = 0x2d9;
        uVar14 = local_c;
        local_8 = uVar17;
      }
      uVar7 = MMObjTy::CreateSprBut
                        ((MMObjTy *)this_00,1,0,uVar14,local_10,uVar17,0x14,local_18 + local_14,
                         local_18 + 0x80 + local_14);
      iVar13 = local_18 + local_14;
      local_14 = local_14 + 1;
      *(undefined4 *)((int)this_00 + iVar13 * 4 + -0x18870) = uVar7;
    }
    local_10 = local_10 + 0x19;
    local_18 = local_18 + 8;
  } while (local_10 < 0x13b);
  local_454[4] = this_00->field_1D18;
  local_2c4 = this_00->field_1C87;
  local_440 = this_00->field_1D1C;
  local_43c = this_00->field_1D20;
  local_438 = this_00->field_1D24;
  local_2c0 = this_00->field_1C8B;
  local_3ec = this_00->field_0008;
  local_2bc = this_00->field_1C8F;
  local_338 = 0x32;
  local_1b8 = 0x32;
  local_140 = this_00->field_1DA9;
  local_2b8 = this_00->field_1C93;
  local_13c = this_00->field_1DAD;
  local_a8 = 2;
  local_454[1] = 2;
  local_454[3] = 2;
  local_3e8 = 2;
  local_2d0 = 2;
  local_2c8 = 2;
  local_268 = 2;
  local_138 = this_00->field_1DB1;
  local_f8 = 2;
  local_454[0] = 0;
  local_94 = 0;
  local_90 = 0;
  local_a4 = 0x6200;
  local_454[2] = 0;
  local_33c = 500;
  local_3e4 = 0x6202;
  local_2cc = 0;
  local_1bc = 500;
  local_264 = 0x6201;
  local_150 = 3;
  local_14c = 1;
  local_144 = 0;
  local_134 = 0xbe;
  local_130 = 0xe;
  local_f4 = 0x6203;
  local_26c = local_3ec;
  local_fc = local_3ec;
  local_ac = local_3ec;
  (*this_00->field_000C->vtable->CreateObject)
            ((SystemClassTy *)this_00->field_000C,4,&this_00->field_211D,nullptr,local_454,0);
  SVar3 = this_00->field_1E26;
  if (((SVar3 == CASE_6) || (SVar3 == CASE_7)) || (SVar3 == CASE_E)) {
    local_10 = 0xcb;
    puVar16 = this_00->field_1F60;
    iVar13 = 0x68ff;
    do {
      uVar10 = MMObjTy::CreateSprBut
                         ((MMObjTy *)this_00,1,1,0x1a,local_10,0xe0,0x14,iVar13,iVar13 + 0x80);
      *puVar16 = uVar10;
      puVar16 = puVar16 + 1;
      local_10 = local_10 + 0x28;
      iVar2 = iVar13 + -0x68fe;
      iVar13 = iVar13 + 1;
    } while (iVar2 < 6);
    if (DAT_0080877e != '\0') {
      uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x24,0x1b4,0xcc,0x1e,0x6905,0x6985);
      this_00->field_1F60[6] = uVar10;
      if (DAT_0080877e != '\0') goto LAB_005c665d;
    }
    this_00->field_002D = 0x20;
    this_00->field_0031 = 0;
    puVar16 = this_00->field_1F60;
    iVar13 = 7;
    do {
      if (*puVar16 != 0) {
        FUN_006e6080(this_00,2,*puVar16,(undefined4 *)&this_00->field_0x1d);
      }
      puVar16 = puVar16 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  else {
    if (this_00->field_1F3F != nullptr) {
      cMf32::delete(this_00->field_1F3F);
    }
    pcVar8 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&CHAR_00h_0080ed16,0,0,0);
    this_00->field_1F3F = pcVar8;
    if (DAT_0080877e == '\0') {
      if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
        FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
      }
      pDVar9 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
      g_startSystem_0081176C->field_0548 = &pDVar9->flags;
      SVar3 = this_00->field_1E26;
      local_5d8 = DAT_0080995c;
      puVar15 = (byte *)&DAT_00809960;
      puVar18 = (byte *)(local_61c);
      memmove(puVar18, puVar15, 0x20); /* compiler REP MOVS byte copy */
      iVar13 = 0;
      StartSystemTy::LoadMapData(g_startSystem_0081176C,this_00->field_1F3F,SVar3);
      DAT_0080995c = local_5d8;
      puVar15 = (byte *)(local_61c);
      puVar18 = (byte *)&DAT_00809960;
      memmove(puVar18, puVar15, 0x20); /* compiler REP MOVS byte copy */
    }
    (*this_00->vtable->PrepPlList)((SettMapSTy *)this_00);
  }
LAB_005c665d:
  if (this_00->field_211D != 0) {
    puVar1 = &this_00->field_0x1d;
    this_00->field_002D = 0x20;
    this_00->field_0031 = 1;
    FUN_006e6080(this_00,2,this_00->field_211D,(undefined4 *)puVar1);
    this_00->field_002D = 0x22;
    this_00->field_1F88 = 0;
    this_00->field_0031 = 0;
    FUN_006e6080(this_00,2,this_00->field_211D,(undefined4 *)puVar1);
    this_00->field_002D = 0x28;
    uVar10 = this_00->field_1F84->count;
    if (uVar10 < 0xb) {
      iVar13 = 1;
    }
    else {
      iVar13 = uVar10 - 9;
    }
    this_00->field_0031 = iVar13;
    FUN_006e6080(this_00,2,this_00->field_211D,(undefined4 *)puVar1);
  }
  SVar3 = this_00->field_1E26;
  if ((((SVar3 == CASE_2) || (SVar3 == CASE_5)) ||
      ((SVar3 == CASE_F || ((SVar3 == CASE_C || (SVar3 == CASE_10)))))) ||
     ((this_00->field_1E27 == 0x13 && ((DAT_00803400 == '\x14' || (DAT_00803400 == '\x15')))))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((((((SVar3 == CASE_6) || (SVar3 == CASE_1)) || (SVar3 == CASE_4)) ||
       ((SVar3 == CASE_7 || (SVar3 == CASE_D)))) || (SVar3 == CASE_E)) &&
     ((this_00->field_1E27 != 0x13 || ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {
    uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x1c4,0x14e,0x14a,0x14,0x653f,0x657f);
    this_00->field_2125[0] = uVar10;
  }
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x1c4,0x164,0x50,0x14,0x6542,0x6582);
  this_00->field_2125[3] = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2be,0x164,0x50,0x14,0x6543,0x6583);
  this_00->field_2125[4] = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x1c4,0x17a,0x50,0x14,0x6544,0x6584);
  this_00->field_2125[5] = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2be,0x17a,0x50,0x14,0x6545,0x6585);
  this_00->field_2125[6] = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x1c4,400,0x50,0x14,0x6546,0x6586);
  this_00->field_2125[7] = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2be,400,0x50,0x14,0x6547,0x6587);
  this_00->field_2125[8] = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x18a,0x1a6,0x16,0x14,0x6548,0x6588);
  this_00->field_2125[9] = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x234,0x1a6,0x16,0x14,0x6549,0x6589);
  this_00->field_2125[10] = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2f8,0x1a6,0x16,0x14,0x654a,0x658a);
  this_00->field_2125[0xb] = uVar10;
  SVar3 = this_00->field_1E26;
  if (((SVar3 != CASE_6) && (SVar3 != CASE_1)) && (SVar3 != CASE_2)) {
    uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x1fe,0x1bc,0x16,0x14,0x654b,0x658b);
    this_00->field_2125[0xc] = uVar10;
    uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2f8,0x1bc,0x16,0x14,0x654c,0x658c);
    this_00->field_2125[0xd] = uVar10;
  }
  if ((DAT_0080877e == '\0') || (bVar6)) {
    this_00->field_002D = 0x20;
    this_00->field_0031 = 0;
    puVar16 = this_00->field_2125;
    iVar13 = 0xe;
    do {
      if (*puVar16 != 0) {
        FUN_006e6080(this_00,2,*puVar16,(undefined4 *)&this_00->field_0x1d);
      }
      puVar16 = puVar16 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,this_00->field_1E22);
  SVar3 = this_00->field_1E26;
  if (((SVar3 != CASE_6) && (SVar3 != CASE_7)) && (SVar3 != CASE_E)) {
    this_00->field_002D = 0x20;
    this_00->field_0031 = 1;
    FUN_006e6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_00->field_0x1d);
  }
  if (this_00->field_0x21e2 != '\0') {
    StartSystemTy::CreateBinDesc(g_startSystem_0081176C);
  }
LAB_005c69ed:
  pMVar4 = this_00->field_1A5B;
  if (*(int *)(pMVar4 + 0x2e6) != 0) {
    memset(&local_38, 0, 0x1a); /* compiler bulk-zero initialization */
    local_2c = 1;
    local_2e = 1;
    STPiece<2,2>(local_38) = 1;
    MMsgTy::StatePanel(*(MMsgTy **)(pMVar4 + 0x2e6),(int)&local_38);
  }
  g_currentExceptionFrame = local_7c.previous;
  return;
}

