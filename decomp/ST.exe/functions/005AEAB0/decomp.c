
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::CreateCtrls */

void __thiscall ChooseMapTy::CreateCtrls(ChooseMapTy *this,char param_1)

{
  code *pcVar1;
  ChooseMapTy *this_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 local_fe4 [6];
  undefined4 local_fcc;
  undefined4 local_fc8;
  undefined4 local_fc4;
  int local_f98;
  undefined4 local_f94;
  undefined4 local_f90;
  int local_f58;
  undefined4 local_f54;
  undefined4 local_f50;
  undefined4 local_780;
  int local_758 [112];
  undefined4 local_598 [10];
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_c8;
  InternalExceptionFrame local_c4;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *local_38;
  uint local_34;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_1e;
  undefined2 local_1c;
  ChooseMapTy *local_c;
  uint local_8;
  
  puVar9 = local_598;
  local_c = this;
  for (iVar2 = 0x135; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_fe4;
  for (iVar2 = 0x223; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_80;
  for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  piVar8 = local_758;
  for (iVar2 = 0x70; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  iVar2 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x39f,0,iVar2,&DAT_007a4ccc
                               ,s_ChooseMapTy__CreateCtrls_007cc858);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_load_obj_cpp_007cc728,0x39f);
    return;
  }
  uVar6 = 0;
  switch(local_c->field_1A5F) {
  case CASE_1:
  case CASE_2:
    local_34 = (uint)(byte)DAT_0081176c->field_02EB;
    uVar6 = 2;
    local_c->field_1A5F = (local_34 != 1) + CASE_1;
    goto LAB_005aebde;
  case CASE_4:
  case CASE_5:
    uVar6 = 2;
    local_34 = (uint)(byte)DAT_0081176c->field_02EB;
    local_c->field_1A5F = (local_34 != 1) + CASE_4;
    break;
  case CASE_9:
  case CASE_A:
  case CASE_B:
    uVar6 = 3;
    local_34 = (uint)(byte)DAT_0081176c->field_02EA;
    cVar7 = DAT_0081176c->field_02EA;
    if (cVar7 == '\x01') {
      local_c->field_1A5F = CASE_9;
    }
    else if (cVar7 == '\x02') {
      local_c->field_1A5F = CASE_A;
    }
    else if (cVar7 == '\x03') {
      local_c->field_1A5F = CASE_B;
    }
  }
LAB_005aebde:
  if (uVar6 == 0) {
LAB_005aecc2:
    if (param_1 != '\0') goto LAB_005aef44;
  }
  else if (param_1 != '\0') {
    cVar7 = '\0';
    if (uVar6 != 0) {
      uVar3 = 0;
      do {
        local_758[uVar3 * 0x1c] = uVar3 + 1;
        cVar7 = cVar7 + '\x01';
        local_758[uVar3 * 0x1c + 1] = 0;
        local_8 = CONCAT31(local_8._1_3_,cVar7);
        local_758[uVar3 * 0x1c + 3] = uVar3 * 0x7c + 0x112;
        uVar4 = local_8 & 0xff;
        local_758[uVar3 * 0x1c + 5] = 0x7a;
        local_758[uVar3 * 0x1c + 4] = 0x1d4;
        local_758[uVar3 * 0x1c + 6] = 0x18;
        uVar3 = uVar4;
      } while (uVar4 < uVar6);
    }
    local_70 = *(undefined4 *)&this_00->field_0x8;
    local_38 = local_758;
    local_80[0] = 1;
    local_6c = 2;
    local_68 = 0x6326;
    local_4c = 2;
    local_48 = 0x6327;
    local_50 = local_70;
    (**(code **)(**(int **)&this_00->field_0xc + 8))(5,&this_00[1].field_0x223,0,local_80,0);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)&this_00[1].field_0x227);
    goto LAB_005aecc2;
  }
  local_570 = *(undefined4 *)&this_00->field_0x8;
  local_598[0] = 0;
  local_598[2] = 0x114;
  local_598[3] = 0x3f;
  local_598[4] = 0x1e4;
  local_598[5] = 399;
  local_598[6] = 0;
  local_598[7] = 0;
  local_56c = 2;
  local_568 = 0x8160;
  local_54c = 2;
  local_548 = 0x8161;
  local_52c = 2;
  local_528 = 0x8162;
  local_50c = 2;
  local_508 = 0x8163;
  if (DAT_0080734c != '\0') {
    local_c8 = 1;
  }
  local_460 = *(undefined4 *)&this_00[1].field_0x2c;
  local_45c = *(undefined4 *)&this_00[1].field_0x30;
  local_468 = 0;
  local_2e8 = 0;
  local_2e0 = *(undefined4 *)&this_00[1].field_0xbd;
  local_458 = *(undefined4 *)&this_00[1].field_0x34;
  local_2dc = *(undefined4 *)&this_00[1].field_0xc1;
  local_454 = *(undefined4 *)&this_00[1].field_0x38;
  local_2d8 = *(undefined4 *)&this_00[1].field_0xc5;
  local_358 = 500;
  local_1d8 = 500;
  local_15c = *(undefined4 *)&this_00[1].field_0x14e;
  local_2d4 = *(undefined4 *)&this_00[1].field_0xc9;
  local_154 = *(undefined4 *)&this_00[1].field_0x156;
  local_354 = 0x32;
  local_1d4 = 0x32;
  local_158 = *(undefined4 *)&this_00[1].field_0x152;
  local_46c = 2;
  local_464 = 2;
  local_404 = 2;
  local_400 = 0x8164;
  local_2ec = 2;
  local_2e4 = 2;
  local_284 = 2;
  local_280 = 0x8165;
  local_16c = 3;
  local_168 = 1;
  local_160 = 0;
  local_150 = 0x157;
  local_14c = 0xe;
  local_114 = 2;
  local_110 = 0x8166;
  local_550 = local_570;
  local_530 = local_570;
  local_510 = local_570;
  local_408 = local_570;
  local_288 = local_570;
  local_118 = local_570;
  (**(code **)(**(int **)&this_00->field_0xc + 8))(7,&this_00[1].field_0xc,0,local_598,0);
  if (*(uint *)&this_00[1].field_0x14 != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              (*(uint **)&this_00[1].field_0x58,*(uint *)&this_00[1].field_0x14,0xfffffffe,
               *(uint *)&this_00[1].field_0x2c,*(uint *)&this_00[1].field_0x30);
  }
  if (*(uint *)&this_00[1].field_0xa5 != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              (*(uint **)&this_00[1].field_0xe9,*(uint *)&this_00[1].field_0xa5,0xfffffffe,
               *(uint *)&this_00[1].field_0xbd,*(uint *)&this_00[1].field_0xc1);
  }
  if (*(uint *)&this_00[1].field_0x136 != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              (*(uint **)&this_00[1].field_0x17a,*(uint *)&this_00[1].field_0x136,0xfffffffe,
               *(uint *)&this_00[1].field_0x14e,*(uint *)&this_00[1].field_0x152);
  }
LAB_005aef44:
  if ((this_00[1].field_0x654 == '\0') || (param_1 != '\0')) {
    if (DAT_0081176c->field_0389 != 0) {
      *(undefined4 *)&this_00->field_0x2d = 0x20;
      *(undefined4 *)&this_00->field_0x31 = 0;
      FUN_006e6080(this_00,2,DAT_0081176c->field_0389,(undefined4 *)&this_00->field_0x1d);
    }
  }
  else {
    StartSystemTy::CreateBinDesc(DAT_0081176c);
  }
  if ((this_00[1].field_0x657 != '\0') && (param_1 == '\0')) {
    StartSystemTy::CreateChatView(DAT_0081176c);
    puVar9 = local_fe4;
    for (iVar2 = 0x223; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    local_fe4[0] = 1;
    local_fe4[1] = 9;
    local_fe4[2] = DAT_0081176c->field_0034;
    local_fe4[3] = 0xcb;
    local_fe4[4] = 0x23f;
    local_fe4[5] = *(undefined4 *)(DAT_0081176c->field_0682 + 4);
    local_fcc = *(undefined4 *)(DAT_0081176c->field_0682 + 8);
    local_fc8 = 0x104;
    local_fc4 = DAT_0081176c->field_0686;
    piVar8 = *(int **)&this_00->field_0xc;
    local_780 = 0x100;
    local_f98 = piVar8[5];
    local_f90 = 0xc0a0;
    local_f94 = 0;
    local_f58 = piVar8[5];
    local_f54 = 0;
    local_f50 = 0xc0a2;
    (**(code **)(*piVar8 + 8))(6,&DAT_0081176c->field_054C,0,local_fe4,0);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,DAT_0081176c->field_0554);
  }
  iVar2 = *(int *)&this_00->field_0x1a5b;
  if (*(int *)(iVar2 + 0x2e6) != 0) {
    puVar9 = &local_28;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = 0;
    local_1c = 1;
    local_1e = 1;
    local_24 = 1;
    MMsgTy::StatePanel(*(MMsgTy **)(iVar2 + 0x2e6),(int)&local_28);
  }
  if (param_1 != '\0') {
    thunk_FUN_00540dc0(1,*(undefined4 *)&this_00->field_0x8,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
  }
  g_currentExceptionFrame = local_c4.previous;
  return;
}

