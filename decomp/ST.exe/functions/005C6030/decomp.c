#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::CreateCtrls */

void __thiscall SettMapTy::CreateCtrls(SettMapTy *this,char param_1)

{
  undefined1 *puVar1;
  SettMapTy_field_1E26State SVar2;
  uint uVar3;
  MMMObjTy *pMVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  DArrayTy *pDVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  cMf32 *this_00;
  SettMapTy *this_01;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 local_ef4 [566];
  undefined4 local_61c [17];
  undefined4 local_5d8;
  uint local_5d0 [5];
  int local_5bc;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_4ac;
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

  puVar8 = local_454;
  local_1c = this;
  for (iVar12 = 0xf6; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  memset(local_ef4, 0, 0x88c); /* compiler bulk-zero initialization */
  iVar12 = 0;
  memset(local_5d0, 0, 0x17c); /* compiler bulk-zero initialization */
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  iVar12 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
  this_01 = local_1c;
  if (iVar12 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Start\\sett_obj.cpp",0x34d,0,iVar12,
                                "%s","SettMapTy::CreateCtrls");
    if (iVar11 == 0) {
      RaiseInternalException(iVar12,0,"E:\\__titans\\Start\\sett_obj.cpp",0x34d);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == '\0') {
    local_5d0[0] = (uint)(DAT_0080877e != '\0');
    local_5d0[2] = 0x15;
    local_5d0[3] = 0x14;
    local_5d0[1] = iVar12;
    local_4ac = FUN_0070aa70(g_cMf32_00806780,"MASK_MAP",0,1);
    local_5d0[4] = Library::Ourlib::MFIMG::mfImgGetWidth
                             (g_cMf32_00806780,0x12,"MASK_MAP",1);
    this_01 = local_1c;
    local_5b0 = local_1c->field_0008;
    local_5ac = 2;
    local_5a8 = 0x654d;
    local_5bc = local_5d0[4];
    local_4a8 = local_5d0[4];
    (*local_1c->field_000C->vtable->CreateObject)
              ((SystemClassTy *)local_1c->field_000C,2,&local_1c->field_215D,(int *)0x0,local_5d0,0)
    ;
    goto LAB_005c69ed;
  }
  if (local_1c->field_1C6F != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)local_1c->field_1CB3,local_1c->field_1C6F,0xfffffffe,local_1c->field_1C87,
               local_1c->field_1C8B);
  }
  if (this_01->field_1D00 != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)this_01->field_1D44,this_01->field_1D00,0xfffffffe,this_01->field_1D18,
               this_01->field_1D1C);
  }
  if (this_01->field_1D91 != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)this_01->field_1DD5,this_01->field_1D91,0xfffffffe,this_01->field_1DA9,
               this_01->field_1DAD);
  }
  puVar13 = &this_01->field_20CC;
  iVar12 = 10;
  do {
    Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,*puVar13);
    puVar13 = puVar13 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  local_10 = 0x41;
  local_18 = 0x69ff;
  uVar10 = local_c;
  uVar14 = local_8;
  do {
    local_14 = 0;
    while( true ) {
      SVar2 = this_01->field_1E26;
      if (((SVar2 == 6) || (SVar2 == 1)) || (iVar12 = 8, SVar2 == 2)) {
        iVar12 = 6;
      }
      if (iVar12 <= local_14) break;
      switch(local_14) {
      case 0:
        uVar14 = 0x14;
        local_c = 0x116;
        uVar10 = local_c;
        local_8 = uVar14;
        break;
      case 1:
        uVar14 = 0x14;
        local_c = 300;
        uVar10 = local_c;
        local_8 = uVar14;
        break;
      case 2:
        uVar14 = 0x18;
        local_c = 0x141;
        uVar10 = local_c;
        local_8 = uVar14;
        break;
      case 3:
        uVar14 = 0x5f;
        local_c = 0x15b;
        uVar10 = local_c;
        local_8 = uVar14;
        break;
      case 4:
        local_c = 0x1bc;
        uVar10 = local_c;
        if (((SVar2 == 6) || (SVar2 == 1)) || (SVar2 == 2)) {
          uVar14 = 0xed;
          local_8 = uVar14;
        }
        else {
          uVar14 = 0xad;
          local_8 = uVar14;
        }
        break;
      case 5:
        if (((SVar2 == 6) || (SVar2 == 1)) || (local_c = 0x26b, SVar2 == 2)) {
          local_c = 0x2ab;
        }
        uVar14 = 0x3e;
        uVar10 = local_c;
        local_8 = uVar14;
        break;
      case 6:
        uVar14 = 0x2c;
        local_c = 0x2ab;
        uVar10 = local_c;
        local_8 = uVar14;
        break;
      case 7:
        uVar14 = 0x17;
        local_c = 0x2d9;
        uVar10 = local_c;
        local_8 = uVar14;
      }
      uVar7 = MMObjTy::CreateSprBut
                        ((MMObjTy *)this_01,1,0,uVar10,local_10,uVar14,0x14,local_18 + local_14,
                         local_18 + 0x80 + local_14);
      iVar12 = local_18 + local_14;
      local_14 = local_14 + 1;
      *(undefined4 *)((int)this_01 + iVar12 * 4 + -0x18870) = uVar7;
    }
    local_10 = local_10 + 0x19;
    local_18 = local_18 + 8;
  } while (local_10 < 0x13b);
  local_454[4] = this_01->field_1D18;
  local_2c4 = this_01->field_1C87;
  local_440 = this_01->field_1D1C;
  local_43c = this_01->field_1D20;
  local_438 = this_01->field_1D24;
  local_2c0 = this_01->field_1C8B;
  local_3ec = this_01->field_0008;
  local_2bc = this_01->field_1C8F;
  local_338 = 0x32;
  local_1b8 = 0x32;
  local_140 = this_01->field_1DA9;
  local_2b8 = this_01->field_1C93;
  local_13c = this_01->field_1DAD;
  local_a8 = 2;
  local_454[1] = 2;
  local_454[3] = 2;
  local_3e8 = 2;
  local_2d0 = 2;
  local_2c8 = 2;
  local_268 = 2;
  local_138 = this_01->field_1DB1;
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
  (*this_01->field_000C->vtable->CreateObject)
            ((SystemClassTy *)this_01->field_000C,4,&this_01->field_211D,(int *)0x0,local_454,0);
  SVar2 = this_01->field_1E26;
  if (((SVar2 == 6) || (SVar2 == CASE_7)) || (SVar2 == 0xe)) {
    local_10 = 0xcb;
    puVar8 = &this_01->field_1F60;
    iVar12 = 0x68ff;
    do {
      uVar10 = MMObjTy::CreateSprBut
                         ((MMObjTy *)this_01,1,1,0x1a,local_10,0xe0,0x14,iVar12,iVar12 + 0x80);
      *puVar8 = uVar10;
      puVar8 = puVar8 + 1;
      local_10 = local_10 + 0x28;
      iVar11 = iVar12 + -0x68fe;
      iVar12 = iVar12 + 1;
    } while (iVar11 < 6);
    if (DAT_0080877e != '\0') {
      uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x24,0x1b4,0xcc,0x1e,0x6905,0x6985);
      this_01->field_1F78 = uVar10;
      if (DAT_0080877e != '\0') goto LAB_005c665d;
    }
    this_01->field_002D = 0x20;
    this_01->field_0031 = 0;
    piVar16 = &this_01->field_1F60;
    iVar12 = 7;
    do {
      if (*piVar16 != 0) {
        FUN_006e6080(this_01,2,*piVar16,(undefined4 *)&this_01->field_0x1d);
      }
      piVar16 = piVar16 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  else {
    if (this_01->field_1F3F != (cMf32 *)0x0) {
      cMf32::delete(this_00,this_01->field_1F3F);
    }
    puVar8 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&DAT_0080ed16,0,0,0);
    this_01->field_1F3F = puVar8;
    if (DAT_0080877e == '\0') {
      if ((DArrayTy *)g_startSystem_0081176C->field_0548 != (DArrayTy *)0x0) {
        FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
      }
      pDVar9 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
      g_startSystem_0081176C->field_0548 = &pDVar9->flags;
      SVar2 = this_01->field_1E26;
      local_5d8 = DAT_0080995c;
      puVar8 = &DAT_00809960;
      puVar15 = local_61c;
      for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar15 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar15 = puVar15 + 1;
      }
      StartSystemTy::LoadMapData(g_startSystem_0081176C,this_01->field_1F3F,SVar2);
      DAT_0080995c = local_5d8;
      puVar8 = local_61c;
      puVar15 = &DAT_00809960;
      for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar15 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar15 = puVar15 + 1;
      }
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_01->field_0000->field_0028)();
  }
LAB_005c665d:
  if (this_01->field_211D != 0) {
    puVar1 = &this_01->field_0x1d;
    this_01->field_002D = 0x20;
    this_01->field_0031 = 1;
    FUN_006e6080(this_01,2,this_01->field_211D,(undefined4 *)puVar1);
    this_01->field_002D = 0x22;
    this_01->field_1F88 = 0;
    this_01->field_0031 = 0;
    FUN_006e6080(this_01,2,this_01->field_211D,(undefined4 *)puVar1);
    this_01->field_002D = 0x28;
    uVar3 = this_01->field_1F84->count;
    if (uVar3 < 0xb) {
      iVar12 = 1;
    }
    else {
      iVar12 = uVar3 - 9;
    }
    this_01->field_0031 = iVar12;
    FUN_006e6080(this_01,2,this_01->field_211D,(undefined4 *)puVar1);
  }
  SVar2 = this_01->field_1E26;
  if ((((SVar2 == 2) || (SVar2 == CASE_5)) ||
      ((SVar2 == 0xf || ((SVar2 == CASE_C || (SVar2 == 0x10)))))) ||
     ((this_01->field_1E27 == 0x13 && ((DAT_00803400 == '\x14' || (DAT_00803400 == '\x15')))))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((((((SVar2 == 6) || (SVar2 == 1)) || (SVar2 == CASE_4)) ||
       ((SVar2 == CASE_7 || (SVar2 == 0xd)))) || (SVar2 == 0xe)) &&
     ((this_01->field_1E27 != 0x13 || ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {
    uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,0x14e,0x14a,0x14,0x653f,0x657f);
    this_01->field_2125 = uVar10;
  }
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,0x164,0x50,0x14,0x6542,0x6582);
  this_01->field_2131 = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2be,0x164,0x50,0x14,0x6543,0x6583);
  this_01->field_2135 = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,0x17a,0x50,0x14,0x6544,0x6584);
  this_01->field_2139 = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2be,0x17a,0x50,0x14,0x6545,0x6585);
  this_01->field_213D = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,400,0x50,0x14,0x6546,0x6586);
  this_01->field_2141 = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2be,400,0x50,0x14,0x6547,0x6587);
  this_01->field_2145 = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x18a,0x1a6,0x16,0x14,0x6548,0x6588);
  this_01->field_2149 = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x234,0x1a6,0x16,0x14,0x6549,0x6589);
  this_01->field_214D = uVar10;
  uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2f8,0x1a6,0x16,0x14,0x654a,0x658a);
  this_01->field_2151 = uVar10;
  SVar2 = this_01->field_1E26;
  if (((SVar2 != 6) && (SVar2 != 1)) && (SVar2 != 2)) {
    uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1fe,0x1bc,0x16,0x14,0x654b,0x658b);
    this_01->field_2155 = uVar10;
    uVar10 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2f8,0x1bc,0x16,0x14,0x654c,0x658c);
    this_01->field_2159 = uVar10;
  }
  if ((DAT_0080877e == '\0') || (bVar6)) {
    this_01->field_002D = 0x20;
    this_01->field_0031 = 0;
    piVar16 = &this_01->field_2125;
    iVar12 = 0xe;
    do {
      if (*piVar16 != 0) {
        FUN_006e6080(this_01,2,*piVar16,(undefined4 *)&this_01->field_0x1d);
      }
      piVar16 = piVar16 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,this_01->field_1E22);
  SVar2 = this_01->field_1E26;
  if (((SVar2 != 6) && (SVar2 != CASE_7)) && (SVar2 != 0xe)) {
    this_01->field_002D = 0x20;
    this_01->field_0031 = 1;
    FUN_006e6080(this_01,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_01->field_0x1d);
  }
  if (this_01->field_0x21e2 != '\0') {
    StartSystemTy::CreateBinDesc(g_startSystem_0081176C);
  }
LAB_005c69ed:
  pMVar4 = this_01->field_1A5B;
  if (*(int *)(pMVar4 + 0x2e6) != 0) {
    memset(&local_38, 0, 0x1a); /* compiler bulk-zero initialization */
    local_2c = 1;
    local_2e = 1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_38._2_2_ = 1;
    MMsgTy::StatePanel(*(MMsgTy **)(pMVar4 + 0x2e6),(int)&local_38);
  }
  g_currentExceptionFrame = local_7c.previous;
  return;
}

