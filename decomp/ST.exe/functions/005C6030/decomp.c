#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::CreateCtrls */

void __thiscall SettMapTy::CreateCtrls(SettMapTy *this,char param_1)

{
  byte *puVar1;
  SettMapTy_field_1E26State SVar2;
  uint uVar3;
  MMMObjTy *pMVar4;
  bool bVar6;
  int iVar11;
  cMf32 *pcVar7;
  DArrayTy *pDVar8;
  int uVar8_mg0;
  int uVar8_mg1;
  int uVar8_mg3;
  int uVar8_mg4;
  int uVar8_mg5;
  int uVar8_mg6;
  int uVar8_mg7;
  int uVar8_mg8;
  int uVar8_mg9;
  int uVar8_mgA;
  int uVar8_mgB;
  int uVar8_mgC;
  int uVar8_mgD;
  int uVar8_mgE;
  int iVar12;
  int iVar9;
  int iVar10;
  SettMapTy *this_00;
  uint uVar11;
  byte *puVar12;
  uint *puVar13;
  uint uVar14;
  byte *puVar15;
  uint local_ef4 [566];
  uint local_61c [17];
  uint local_5d8;
  uint local_5d0 [5];
  int local_5bc;
  uint local_5b0;
  uint local_5ac;
  uint local_5a8;
  ushort *local_4ac;
  int local_4a8;
  uint local_454 [5];
  uint local_440;
  uint local_43c;
  uint local_438;
  uint local_3ec;
  uint local_3e8;
  uint local_3e4;
  uint local_33c;
  uint local_338;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_1bc;
  uint local_1b8;
  uint local_150;
  uint local_14c;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_94;
  uint local_90;
  InternalExceptionFrame local_7c;
  uint local_38;
  ushort local_2e;
  ushort local_2c;
  SettMapTy *local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  puVar12 = (byte *)(local_454);
  local_1c = this;
  for (iVar9 = 0xf6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = 0;
    puVar12 = (byte *)(puVar12 + 1);
  }
  memset(local_ef4, 0, 0x88c); /* compiler bulk-zero initialization */
  iVar9 = 0;
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
    /* ST_CALLSITE[005C6144]: CALL dword ptr [EDX + 0x8] */
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
  puVar13 = this_00->field_20CC;
  iVar9 = 10;
  do {

    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*puVar13);
    puVar13 = puVar13 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_10 = 0x41;
  local_18 = 0x69ff;
  uVar11 = local_c;
  uVar14 = local_8;
  do {
    local_14 = 0;
    while( true ) {
      SVar2 = this_00->field_1E26;
      if (((SVar2 == CASE_6) || (SVar2 == CASE_1)) || (iVar9 = 8, SVar2 == CASE_2)) {
        iVar9 = 6;
      }
      if (iVar9 <= local_14) break;
      switch(local_14) {
      case 0:
        uVar14 = 0x14;
        local_c = 0x116;
        uVar11 = local_c;
        local_8 = uVar14;
        break;
      case 1:
        uVar14 = 0x14;
        local_c = 300;
        uVar11 = local_c;
        local_8 = uVar14;
        break;
      case 2:
        uVar14 = 0x18;
        local_c = 0x141;
        uVar11 = local_c;
        local_8 = uVar14;
        break;
      case 3:
        uVar14 = 0x5f;
        local_c = 0x15b;
        uVar11 = local_c;
        local_8 = uVar14;
        break;
      case 4:
        local_c = 0x1bc;
        uVar11 = local_c;
        if (((SVar2 == CASE_6) || (SVar2 == CASE_1)) || (SVar2 == CASE_2)) {
          uVar14 = 0xed;
          local_8 = uVar14;
        }
        else {
          uVar14 = 0xad;
          local_8 = uVar14;
        }
        break;
      case 5:
        if (((SVar2 == CASE_6) || (SVar2 == CASE_1)) || (local_c = 0x26b, SVar2 == CASE_2)) {
          local_c = 0x2ab;
        }
        uVar14 = 0x3e;
        uVar11 = local_c;
        local_8 = uVar14;
        break;
      case 6:
        uVar14 = 0x2c;
        local_c = 0x2ab;
        uVar11 = local_c;
        local_8 = uVar14;
        break;
      case 7:
        uVar14 = 0x17;
        local_c = 0x2d9;
        uVar11 = local_c;
        local_8 = uVar14;
      }
      /* ST_CALLSITE[005C62F8]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
      iVar9 = MMObjTy::CreateSprBut
                        ((MMObjTy *)this_00,1,0,uVar11,local_10,uVar14,0x14,local_18 + local_14,
                         local_18 + 0x80 + local_14);
      iVar10 = local_18 + local_14;
      local_14 = local_14 + 1;
      *(int *)((int)this_00 + iVar10 * 4 + -0x18870) = iVar9;
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
  /* ST_CALLSITE[005C64BA]: CALL dword ptr [EDX + 0x8] */
  (*this_00->field_000C->vtable->CreateObject)
            ((SystemClassTy *)this_00->field_000C,4,&this_00->field_211D,nullptr,local_454,0);
  SVar2 = this_00->field_1E26;
  if (((SVar2 == CASE_6) || (SVar2 == CASE_7)) || (SVar2 == CASE_E)) {
    local_10 = 0xcb;
    puVar13 = this_00->field_1F60;
    iVar9 = 0x68ff;
    do {
      /* ST_CALLSITE[005C65D0]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
      uVar8_mg0 = MMObjTy::CreateSprBut
                            ((MMObjTy *)this_00,1,1,0x1a,local_10,0xe0,0x14,iVar9,iVar9 + 0x80);
      *puVar13 = uVar8_mg0;
      puVar13 = puVar13 + 1;
      local_10 = local_10 + 0x28;
      iVar10 = iVar9 + -0x68fe;
      iVar9 = iVar9 + 1;
    } while (iVar10 < 6);
    if (DAT_0080877e != '\0') {
      /* ST_CALLSITE[005C6616]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
      uVar8_mg1 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x24,0x1b4,0xcc,0x1e,0x6905,0x6985);
      this_00->field_1F60[6] = uVar8_mg1;
      if (DAT_0080877e != '\0') goto LAB_005c665d;
    }
    this_00->field_002D = 0x20;
    this_00->field_0031 = 0;
    puVar13 = this_00->field_1F60;
    iVar9 = 7;
    do {
      if (*puVar13 != 0) {
        FUN_006e6080(this_00,2,*puVar13,(undefined4 *)&this_00->field_0x1d);
      }
      puVar13 = puVar13 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  else {
    if (this_00->field_1F3F != nullptr) {
      cMf32::delete(this_00->field_1F3F);
    }
    /* ST_CALLSITE[005C64FB]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cMf32; signature=__cdecl;pointer:/cMf32;/uint;pointer:/byte;/int;/uint;/uint */
    pcVar7 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&CHAR_00h_0080ed16,0,0,0);
    this_00->field_1F3F = pcVar7;
    if (DAT_0080877e == '\0') {
      if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
        FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
      }
      /* ST_CALLSITE[005C6531]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
      pDVar8 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
      g_startSystem_0081176C->field_0548 = &pDVar8->flags;
      SVar2 = this_00->field_1E26;
      local_5d8 = DAT_0080995c;
      puVar12 = (byte *)&DAT_00809960;
      puVar15 = (byte *)(local_61c);
      memmove(puVar15, puVar12, 0x20); /* compiler REP MOVS byte copy */
      iVar9 = 0;
      /* ST_CALLSITE[005C6574]: CALL 0x00402716; direct=00402716 StartSystemTy::LoadMapData */
      StartSystemTy::LoadMapData(g_startSystem_0081176C,this_00->field_1F3F,SVar2);
      DAT_0080995c = local_5d8;
      puVar12 = (byte *)(local_61c);
      puVar15 = (byte *)&DAT_00809960;
      memmove(puVar15, puVar12, 0x20); /* compiler REP MOVS byte copy */
    }
    /* ST_CALLSITE[005C659B]: CALL dword ptr [EAX + 0x28] */
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
    uVar3 = this_00->field_1F84->count;
    if (uVar3 < 0xb) {
      iVar9 = 1;
    }
    else {
      iVar9 = uVar3 - 9;
    }
    this_00->field_0031 = iVar9;
    FUN_006e6080(this_00,2,this_00->field_211D,(undefined4 *)puVar1);
  }
  SVar2 = this_00->field_1E26;
  if ((((SVar2 == CASE_2) || (SVar2 == CASE_5)) ||
      ((SVar2 == CASE_F || ((SVar2 == CASE_C || (SVar2 == CASE_10)))))) ||
     ((this_00->field_1E27 == 0x13 && ((DAT_00803400 == '\x14' || (DAT_00803400 == '\x15')))))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((((((SVar2 == CASE_6) || (SVar2 == CASE_1)) || (SVar2 == CASE_4)) ||
       ((SVar2 == CASE_7 || (SVar2 == CASE_D)))) || (SVar2 == CASE_E)) &&
     ((this_00->field_1E27 != 0x13 || ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {
    /* ST_CALLSITE[005C6764]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar8_mg3 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x1c4,0x14e,0x14a,0x14,0x653f,0x657f);
    this_00->field_2125[0] = uVar8_mg3;
  }
  /* ST_CALLSITE[005C678D]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar8_mg4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x1c4,0x164,0x50,0x14,0x6542,0x6582);
  this_00->field_2125[3] = uVar8_mg4;
  /* ST_CALLSITE[005C67B6]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar8_mg5 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2be,0x164,0x50,0x14,0x6543,0x6583);
  this_00->field_2125[4] = uVar8_mg5;
  /* ST_CALLSITE[005C67DF]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar8_mg6 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x1c4,0x17a,0x50,0x14,0x6544,0x6584);
  this_00->field_2125[5] = uVar8_mg6;
  /* ST_CALLSITE[005C6808]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar8_mg7 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2be,0x17a,0x50,0x14,0x6545,0x6585);
  this_00->field_2125[6] = uVar8_mg7;
  /* ST_CALLSITE[005C6831]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar8_mg8 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x1c4,400,0x50,0x14,0x6546,0x6586);
  this_00->field_2125[7] = uVar8_mg8;
  /* ST_CALLSITE[005C685A]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar8_mg9 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2be,400,0x50,0x14,0x6547,0x6587);
  this_00->field_2125[8] = uVar8_mg9;
  /* ST_CALLSITE[005C6883]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar8_mgA = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x18a,0x1a6,0x16,0x14,0x6548,0x6588);
  this_00->field_2125[9] = uVar8_mgA;
  /* ST_CALLSITE[005C68AC]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar8_mgB = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x234,0x1a6,0x16,0x14,0x6549,0x6589);
  this_00->field_2125[10] = uVar8_mgB;
  /* ST_CALLSITE[005C68D5]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
  uVar8_mgC = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2f8,0x1a6,0x16,0x14,0x654a,0x658a);
  this_00->field_2125[0xb] = uVar8_mgC;
  SVar2 = this_00->field_1E26;
  if (((SVar2 != CASE_6) && (SVar2 != CASE_1)) && (SVar2 != CASE_2)) {
    /* ST_CALLSITE[005C6910]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar8_mgD = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x1fe,0x1bc,0x16,0x14,0x654b,0x658b);
    this_00->field_2125[0xc] = uVar8_mgD;
    /* ST_CALLSITE[005C6939]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
    uVar8_mgE = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2f8,0x1bc,0x16,0x14,0x654c,0x658c);
    this_00->field_2125[0xd] = uVar8_mgE;
  }
  if ((DAT_0080877e == '\0') || (bVar6)) {
    this_00->field_002D = 0x20;
    this_00->field_0031 = 0;
    puVar13 = this_00->field_2125;
    iVar9 = 0xe;
    do {
      if (*puVar13 != 0) {
        FUN_006e6080(this_00,2,*puVar13,(undefined4 *)&this_00->field_0x1d);
      }
      puVar13 = puVar13 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }

  Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,this_00->field_1E22);
  SVar2 = this_00->field_1E26;
  if (((SVar2 != CASE_6) && (SVar2 != CASE_7)) && (SVar2 != CASE_E)) {
    this_00->field_002D = 0x20;
    this_00->field_0031 = 1;
    FUN_006e6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_00->field_0x1d);
  }
  if (this_00->field_21E2 != '\0') {
    /* ST_CALLSITE[005C69E8]: CALL 0x00402a4a; direct=00402A4A StartSystemTy::CreateBinDesc */
    StartSystemTy::CreateBinDesc(g_startSystem_0081176C);
  }
LAB_005c69ed:
  pMVar4 = this_00->array_00BC[0xc].field_01DB;
  if (*(int *)(pMVar4 + 0x2e6) != 0) {
    memset(&local_38, 0, 0x1a); /* compiler bulk-zero initialization */
    local_2c = 1;
    local_2e = 1;
    STPiece<2,2>(local_38) = 1;
    /* ST_CALLSITE[005C6A21]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
    MMsgTy::StatePanel(*(MMsgTy **)(pMVar4 + 0x2e6),(int)&local_38);
  }
  g_currentExceptionFrame = local_7c.previous;
  return;
}

