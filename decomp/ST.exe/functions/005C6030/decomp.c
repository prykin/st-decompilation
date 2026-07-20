
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::CreateCtrls */

void __thiscall SettMapTy::CreateCtrls(SettMapTy *this,char param_1)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  cMf32 *this_00;
  int iVar11;
  SettMapTy *this_01;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
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
  
  puVar7 = local_454;
  local_1c = this;
  for (iVar10 = 0xf6; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = local_ef4;
  for (iVar10 = 0x223; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar8 = local_5d0;
  for (iVar10 = 0x5f; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  iVar10 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_1c;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x34d,0,iVar10,
                                &DAT_007a4ccc,s_SettMapTy__CreateCtrls_007cd1e0);
    if (iVar11 == 0) {
      RaiseInternalException(iVar10,0,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x34d);
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1 == '\0') {
    local_5d0[0] = (uint)(DAT_0080877e != '\0');
    local_5d0[2] = 0x15;
    local_5d0[3] = 0x14;
    local_5d0[1] = iVar10;
    local_4ac = FUN_0070aa70(g_cMf32_00806780,s_MASK_MAP_007cd1fc,0,1);
    local_5d0[4] = Library::Ourlib::MFIMG::mfImgGetWidth
                             (g_cMf32_00806780,0x12,s_MASK_MAP_007cd1fc,1);
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
  puVar8 = &this_01->field_20CC;
  iVar10 = 10;
  do {
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar8);
    puVar8 = puVar8 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  local_10 = 0x41;
  local_18 = 0x69ff;
  uVar9 = local_c;
  uVar12 = local_8;
  do {
    local_14 = 0;
    while( true ) {
      cVar2 = this_01->field_1E26;
      if (((cVar2 == '\x06') || (cVar2 == '\x01')) || (iVar10 = 8, cVar2 == '\x02')) {
        iVar10 = 6;
      }
      if (iVar10 <= local_14) break;
      switch(local_14) {
      case 0:
        uVar12 = 0x14;
        local_c = 0x116;
        uVar9 = local_c;
        local_8 = uVar12;
        break;
      case 1:
        uVar12 = 0x14;
        local_c = 300;
        uVar9 = local_c;
        local_8 = uVar12;
        break;
      case 2:
        uVar12 = 0x18;
        local_c = 0x141;
        uVar9 = local_c;
        local_8 = uVar12;
        break;
      case 3:
        uVar12 = 0x5f;
        local_c = 0x15b;
        uVar9 = local_c;
        local_8 = uVar12;
        break;
      case 4:
        local_c = 0x1bc;
        uVar9 = local_c;
        if (((cVar2 == '\x06') || (cVar2 == '\x01')) || (cVar2 == '\x02')) {
          uVar12 = 0xed;
          local_8 = uVar12;
        }
        else {
          uVar12 = 0xad;
          local_8 = uVar12;
        }
        break;
      case 5:
        if (((cVar2 == '\x06') || (cVar2 == '\x01')) || (local_c = 0x26b, cVar2 == '\x02')) {
          local_c = 0x2ab;
        }
        uVar12 = 0x3e;
        uVar9 = local_c;
        local_8 = uVar12;
        break;
      case 6:
        uVar12 = 0x2c;
        local_c = 0x2ab;
        uVar9 = local_c;
        local_8 = uVar12;
        break;
      case 7:
        uVar12 = 0x17;
        local_c = 0x2d9;
        uVar9 = local_c;
        local_8 = uVar12;
      }
      uVar6 = MMObjTy::CreateSprBut
                        ((MMObjTy *)this_01,1,0,uVar9,local_10,uVar12,0x14,local_18 + local_14,
                         local_18 + 0x80 + local_14);
      iVar10 = local_18 + local_14;
      local_14 = local_14 + 1;
      *(undefined4 *)((int)this_01 + iVar10 * 4 + -0x18870) = uVar6;
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
  cVar2 = this_01->field_1E26;
  if (((cVar2 == '\x06') || (cVar2 == '\a')) || (cVar2 == '\x0e')) {
    local_10 = 0xcb;
    puVar7 = &this_01->field_1F60;
    iVar10 = 0x68ff;
    do {
      uVar9 = MMObjTy::CreateSprBut
                        ((MMObjTy *)this_01,1,1,0x1a,local_10,0xe0,0x14,iVar10,iVar10 + 0x80);
      *puVar7 = uVar9;
      puVar7 = puVar7 + 1;
      local_10 = local_10 + 0x28;
      iVar11 = iVar10 + -0x68fe;
      iVar10 = iVar10 + 1;
    } while (iVar11 < 6);
    if (DAT_0080877e != '\0') {
      uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x24,0x1b4,0xcc,0x1e,0x6905,0x6985);
      this_01->field_1F78 = uVar9;
      if (DAT_0080877e != '\0') goto LAB_005c665d;
    }
    this_01->field_002D = 0x20;
    this_01->field_0031 = 0;
    piVar14 = &this_01->field_1F60;
    iVar10 = 7;
    do {
      if (*piVar14 != 0) {
        FUN_006e6080(this_01,2,*piVar14,(undefined4 *)&this_01->field_0x1d);
      }
      piVar14 = piVar14 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  else {
    if ((cMf32 *)this_01->field_1F3F != (cMf32 *)0x0) {
      cMf32::delete(this_00,(cMf32 *)this_01->field_1F3F);
    }
    puVar7 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&DAT_0080ed16,0,0,0);
    this_01->field_1F3F = puVar7;
    if (DAT_0080877e == '\0') {
      if ((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548 !=
          (AnonShape_006B5570_4D68B99C *)0x0) {
        FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548);
      }
      puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
      PTR_0081176c->field_0548 = puVar8;
      cVar2 = this_01->field_1E26;
      local_5d8 = DAT_0080995c;
      puVar7 = &DAT_00809960;
      puVar13 = local_61c;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar13 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar13 = puVar13 + 1;
      }
      StartSystemTy::LoadMapData(PTR_0081176c,(cMf32 *)this_01->field_1F3F,cVar2);
      DAT_0080995c = local_5d8;
      puVar7 = local_61c;
      puVar13 = &DAT_00809960;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar13 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar13 = puVar13 + 1;
      }
    }
    (**(code **)(this_01->field_0000 + 0x28))();
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
    uVar3 = *(uint *)(this_01->field_1F84 + 0xc);
    if (uVar3 < 0xb) {
      iVar10 = 1;
    }
    else {
      iVar10 = uVar3 - 9;
    }
    this_01->field_0031 = iVar10;
    FUN_006e6080(this_01,2,this_01->field_211D,(undefined4 *)puVar1);
  }
  cVar2 = this_01->field_1E26;
  if ((((cVar2 == '\x02') || (cVar2 == '\x05')) ||
      ((cVar2 == '\x0f' || ((cVar2 == '\f' || (cVar2 == '\x10')))))) ||
     ((this_01->field_1E27 == 0x13 && ((DAT_00803400 == '\x14' || (DAT_00803400 == '\x15')))))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((((((cVar2 == '\x06') || (cVar2 == '\x01')) || (cVar2 == '\x04')) ||
       ((cVar2 == '\a' || (cVar2 == '\r')))) || (cVar2 == '\x0e')) &&
     ((this_01->field_1E27 != 0x13 || ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {
    uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,0x14e,0x14a,0x14,0x653f,0x657f);
    this_01->field_2125 = uVar9;
  }
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,0x164,0x50,0x14,0x6542,0x6582);
  this_01->field_2131 = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2be,0x164,0x50,0x14,0x6543,0x6583);
  this_01->field_2135 = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,0x17a,0x50,0x14,0x6544,0x6584);
  this_01->field_2139 = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2be,0x17a,0x50,0x14,0x6545,0x6585);
  this_01->field_213D = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,400,0x50,0x14,0x6546,0x6586);
  this_01->field_2141 = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2be,400,0x50,0x14,0x6547,0x6587);
  this_01->field_2145 = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x18a,0x1a6,0x16,0x14,0x6548,0x6588);
  this_01->field_2149 = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x234,0x1a6,0x16,0x14,0x6549,0x6589);
  this_01->field_214D = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2f8,0x1a6,0x16,0x14,0x654a,0x658a);
  this_01->field_2151 = uVar9;
  cVar2 = this_01->field_1E26;
  if (((cVar2 != '\x06') && (cVar2 != '\x01')) && (cVar2 != '\x02')) {
    uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1fe,0x1bc,0x16,0x14,0x654b,0x658b);
    this_01->field_2155 = uVar9;
    uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2f8,0x1bc,0x16,0x14,0x654c,0x658c);
    this_01->field_2159 = uVar9;
  }
  if ((DAT_0080877e == '\0') || (bVar5)) {
    this_01->field_002D = 0x20;
    this_01->field_0031 = 0;
    piVar14 = &this_01->field_2125;
    iVar10 = 0xe;
    do {
      if (*piVar14 != 0) {
        FUN_006e6080(this_01,2,*piVar14,(undefined4 *)&this_01->field_0x1d);
      }
      piVar14 = piVar14 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_01->field_1E22);
  cVar2 = this_01->field_1E26;
  if (((cVar2 != '\x06') && (cVar2 != '\a')) && (cVar2 != '\x0e')) {
    this_01->field_002D = 0x20;
    this_01->field_0031 = 1;
    FUN_006e6080(this_01,2,PTR_0081176c->field_0389,(undefined4 *)&this_01->field_0x1d);
  }
  if (this_01->field_0x21e2 != '\0') {
    StartSystemTy::CreateBinDesc(PTR_0081176c);
  }
LAB_005c69ed:
  iVar10 = this_01->field_1A5B;
  if (*(int *)(iVar10 + 0x2e6) != 0) {
    puVar7 = &local_38;
    for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = 0;
    local_2c = 1;
    local_2e = 1;
    local_38._2_2_ = 1;
    MMsgTy::StatePanel(*(MMsgTy **)(iVar10 + 0x2e6),(int)&local_38);
  }
  g_currentExceptionFrame = local_7c.previous;
  return;
}

