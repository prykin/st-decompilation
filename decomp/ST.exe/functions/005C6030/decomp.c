
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
    local_4ac = FUN_0070aa70(DAT_00806780,s_MASK_MAP_007cd1fc,0,1);
    local_5d0[4] = FUN_0070a6f0(DAT_00806780,0x12,s_MASK_MAP_007cd1fc,1);
    this_01 = local_1c;
    local_5b0 = *(undefined4 *)&local_1c->field_0x8;
    local_5ac = 2;
    local_5a8 = 0x654d;
    local_5bc = local_5d0[4];
    local_4a8 = local_5d0[4];
    (**(code **)(**(int **)&local_1c->field_0xc + 8))(2,&local_1c[0x54].field_0x39,0,local_5d0,0);
    goto LAB_005c69ed;
  }
  if (*(uint *)&local_1c[0x48].field_0x7 != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              (*(uint **)&local_1c[0x48].field_0x4b,*(uint *)&local_1c[0x48].field_0x7,0xfffffffe,
               *(uint *)&local_1c[0x48].field_0x1f,*(uint *)&local_1c[0x48].field_0x23);
  }
  if (*(uint *)&this_01[0x49].field_0x33 != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              (*(uint **)((int)&this_01[0x4a].field_0010 + 2),*(uint *)&this_01[0x49].field_0x33,
               0xfffffffe,*(uint *)&this_01[0x49].field_0x4b,*(uint *)&this_01[0x49].field_0x4f);
  }
  if (*(uint *)&this_01[0x4a].field_0x5f != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              (*(uint **)&this_01[0x4b].field_0x3e,*(uint *)&this_01[0x4a].field_0x5f,0xfffffffe,
               *(uint *)((int)&this_01[0x4b].field_0010 + 2),*(uint *)&this_01[0x4b].field_0x16);
  }
  puVar8 = (uint *)&this_01[0x53].field_0xd;
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
      cVar2 = this_01[0x4c].field_0x2a;
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
  local_454[4] = *(undefined4 *)&this_01[0x49].field_0x4b;
  local_2c4 = *(undefined4 *)&this_01[0x48].field_0x1f;
  local_440 = *(undefined4 *)&this_01[0x49].field_0x4f;
  local_43c = *(undefined4 *)&this_01[0x49].field_0x53;
  local_438 = *(undefined4 *)&this_01[0x49].field_0x57;
  local_2c0 = *(undefined4 *)&this_01[0x48].field_0x23;
  local_3ec = *(undefined4 *)&this_01->field_0x8;
  local_2bc = *(undefined4 *)&this_01[0x48].field_0x27;
  local_338 = 0x32;
  local_1b8 = 0x32;
  local_140 = *(undefined4 *)((int)&this_01[0x4b].field_0010 + 2);
  local_2b8 = *(undefined4 *)&this_01[0x48].field_0x2b;
  local_13c = *(undefined4 *)&this_01[0x4b].field_0x16;
  local_a8 = 2;
  local_454[1] = 2;
  local_454[3] = 2;
  local_3e8 = 2;
  local_2d0 = 2;
  local_2c8 = 2;
  local_268 = 2;
  local_138 = *(undefined4 *)&this_01[0x4b].field_0x1a;
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
  (**(code **)(**(int **)&this_01->field_0xc + 8))(4,&this_01[0x53].field_0x5e,0,local_454,0);
  cVar2 = this_01[0x4c].field_0x2a;
  if (((cVar2 == '\x06') || (cVar2 == '\a')) || (cVar2 == '\x0e')) {
    local_10 = 0xcb;
    puVar7 = (undefined4 *)&this_01[0x4f].field_0x35;
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
      *(undefined4 *)&this_01[0x4f].field_0x4d = uVar9;
      if (DAT_0080877e != '\0') goto LAB_005c665d;
    }
    *(undefined4 *)&this_01->field_0x2d = 0x20;
    *(undefined4 *)&this_01->field_0x31 = 0;
    piVar14 = (int *)&this_01[0x4f].field_0x35;
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
    if (*(undefined4 **)&this_01[0x4f].field_0x14 != (undefined4 *)0x0) {
      cMf32::delete(this_00,*(undefined4 **)&this_01[0x4f].field_0x14);
    }
    puVar7 = FUN_006f0ec0(0x345,&DAT_0080ed16,0,0,0);
    *(undefined4 **)&this_01[0x4f].field_0x14 = puVar7;
    if (DAT_0080877e == '\0') {
      if ((byte *)DAT_0081176c->field_0548 != (byte *)0x0) {
        FUN_006b5570((byte *)DAT_0081176c->field_0548);
      }
      puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
      DAT_0081176c->field_0548 = puVar8;
      cVar2 = this_01[0x4c].field_0x2a;
      local_5d8 = DAT_0080995c;
      puVar7 = &DAT_00809960;
      puVar13 = local_61c;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar13 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar13 = puVar13 + 1;
      }
      StartSystemTy::LoadMapData(DAT_0081176c,*(int *)&this_01[0x4f].field_0x14,cVar2);
      DAT_0080995c = local_5d8;
      puVar7 = local_61c;
      puVar13 = &DAT_00809960;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar13 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar13 = puVar13 + 1;
      }
    }
    (**(code **)(*(int *)this_01 + 0x28))();
  }
LAB_005c665d:
  iVar10 = *(int *)&this_01[0x53].field_0x5e;
  if (iVar10 != 0) {
    puVar1 = &this_01->field_0x1d;
    *(undefined4 *)&this_01->field_0x2d = 0x20;
    *(undefined4 *)&this_01->field_0x31 = 1;
    FUN_006e6080(this_01,2,iVar10,(undefined4 *)puVar1);
    uVar9 = *(undefined4 *)&this_01[0x53].field_0x5e;
    *(undefined4 *)&this_01->field_0x2d = 0x22;
    *(undefined4 *)&this_01[0x4f].field_0x5d = 0;
    *(undefined4 *)&this_01->field_0x31 = 0;
    FUN_006e6080(this_01,2,uVar9,(undefined4 *)puVar1);
    iVar10 = *(int *)&this_01[0x4f].field_0x59;
    *(undefined4 *)&this_01->field_0x2d = 0x28;
    uVar3 = *(uint *)(iVar10 + 0xc);
    if (uVar3 < 0xb) {
      iVar10 = 1;
    }
    else {
      iVar10 = uVar3 - 9;
    }
    uVar9 = *(undefined4 *)&this_01[0x53].field_0x5e;
    *(int *)&this_01->field_0x31 = iVar10;
    FUN_006e6080(this_01,2,uVar9,(undefined4 *)puVar1);
  }
  cVar2 = this_01[0x4c].field_0x2a;
  if ((((cVar2 == '\x02') || (cVar2 == '\x05')) ||
      ((cVar2 == '\x0f' || ((cVar2 == '\f' || (cVar2 == '\x10')))))) ||
     ((*(int *)&this_01[0x4c].field_0x2b == 0x13 &&
      ((DAT_00803400 == '\x14' || (DAT_00803400 == '\x15')))))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((((((cVar2 == '\x06') || (cVar2 == '\x01')) || (cVar2 == '\x04')) ||
       ((cVar2 == '\a' || (cVar2 == '\r')))) || (cVar2 == '\x0e')) &&
     ((*(int *)&this_01[0x4c].field_0x2b != 0x13 ||
      ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {
    uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,0x14e,0x14a,0x14,0x653f,0x657f);
    *(undefined4 *)&this_01[0x54].field_0x1 = uVar9;
  }
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,0x164,0x50,0x14,0x6542,0x6582);
  *(undefined4 *)&this_01[0x54].field_0xd = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2be,0x164,0x50,0x14,0x6543,0x6583);
  *(undefined4 *)((int)&this_01[0x54].field_0010 + 1) = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,0x17a,0x50,0x14,0x6544,0x6584);
  *(undefined4 *)&this_01[0x54].field_0x15 = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2be,0x17a,0x50,0x14,0x6545,0x6585);
  *(undefined4 *)&this_01[0x54].field_0x19 = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1c4,400,0x50,0x14,0x6546,0x6586);
  *(undefined4 *)&this_01[0x54].field_0x1d = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2be,400,0x50,0x14,0x6547,0x6587);
  *(undefined4 *)&this_01[0x54].field_0x21 = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x18a,0x1a6,0x16,0x14,0x6548,0x6588);
  *(undefined4 *)&this_01[0x54].field_0x25 = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x234,0x1a6,0x16,0x14,0x6549,0x6589);
  *(undefined4 *)&this_01[0x54].field_0x29 = uVar9;
  uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2f8,0x1a6,0x16,0x14,0x654a,0x658a);
  *(undefined4 *)&this_01[0x54].field_0x2d = uVar9;
  cVar2 = this_01[0x4c].field_0x2a;
  if (((cVar2 != '\x06') && (cVar2 != '\x01')) && (cVar2 != '\x02')) {
    uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x1fe,0x1bc,0x16,0x14,0x654b,0x658b);
    *(undefined4 *)&this_01[0x54].field_0x31 = uVar9;
    uVar9 = MMObjTy::CreateSprBut((MMObjTy *)this_01,1,1,0x2f8,0x1bc,0x16,0x14,0x654c,0x658c);
    *(undefined4 *)&this_01[0x54].field_0x35 = uVar9;
  }
  if ((DAT_0080877e == '\0') || (bVar5)) {
    *(undefined4 *)&this_01->field_0x2d = 0x20;
    *(undefined4 *)&this_01->field_0x31 = 0;
    piVar14 = (int *)&this_01[0x54].field_0x1;
    iVar10 = 0xe;
    do {
      if (*piVar14 != 0) {
        FUN_006e6080(this_01,2,*piVar14,(undefined4 *)&this_01->field_0x1d);
      }
      piVar14 = piVar14 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)&this_01[0x4c].field_0x26);
  cVar2 = this_01[0x4c].field_0x2a;
  if (((cVar2 != '\x06') && (cVar2 != '\a')) && (cVar2 != '\x0e')) {
    *(undefined4 *)&this_01->field_0x2d = 0x20;
    *(undefined4 *)&this_01->field_0x31 = 1;
    FUN_006e6080(this_01,2,DAT_0081176c->field_0389,(undefined4 *)&this_01->field_0x1d);
  }
  if (this_01[0x55].field_0x59 != '\0') {
    StartSystemTy::CreateBinDesc(DAT_0081176c);
  }
LAB_005c69ed:
  iVar10 = *(int *)&this_01[0x42].field_0x51;
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

