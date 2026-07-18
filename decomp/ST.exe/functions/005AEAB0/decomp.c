
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::CreateCtrls */

void __thiscall ChooseMapTy::CreateCtrls(ChooseMapTy *this,char param_1)

{
  StartSystemTy SVar1;
  code *pcVar2;
  ChooseMapTy *this_00;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar9;
  undefined4 *puVar10;
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
  undefined4 local_c4;
  undefined4 local_c0 [16];
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
  
  puVar10 = local_598;
  local_c = this;
  for (iVar3 = 0x135; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_fe4;
  for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_80;
  for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  piVar9 = local_758;
  for (iVar3 = 0x70; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  local_c4 = DAT_00858df8;
  DAT_00858df8 = &local_c4;
  iVar3 = __setjmp3(local_c0,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_c4;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_load_obj_cpp_007cc728,0x39f,0,iVar3,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cc728,0x39f);
    return;
  }
  uVar7 = 0;
  switch(local_c[0x1a5f]) {
  case (ChooseMapTy)0x1:
  case (ChooseMapTy)0x2:
    local_34 = (uint)(byte)DAT_0081176c[0x2eb];
    uVar7 = 2;
    local_c[0x1a5f] = (ChooseMapTy)((local_34 != 1) + '\x01');
    goto LAB_005aebde;
  case (ChooseMapTy)0x4:
  case (ChooseMapTy)0x5:
    uVar7 = 2;
    local_34 = (uint)(byte)DAT_0081176c[0x2eb];
    local_c[0x1a5f] = (ChooseMapTy)((local_34 != 1) + '\x04');
    break;
  case (ChooseMapTy)0x9:
  case (ChooseMapTy)0xa:
  case (ChooseMapTy)0xb:
    uVar7 = 3;
    local_34 = (uint)(byte)DAT_0081176c[0x2ea];
    SVar1 = DAT_0081176c[0x2ea];
    if (SVar1 == (StartSystemTy)0x1) {
      local_c[0x1a5f] = (ChooseMapTy)0x9;
    }
    else if (SVar1 == (StartSystemTy)0x2) {
      local_c[0x1a5f] = (ChooseMapTy)0xa;
    }
    else if (SVar1 == (StartSystemTy)0x3) {
      local_c[0x1a5f] = (ChooseMapTy)0xb;
    }
  }
LAB_005aebde:
  if (uVar7 == 0) {
LAB_005aecc2:
    if (param_1 != '\0') goto LAB_005aef44;
  }
  else if (param_1 != '\0') {
    cVar8 = '\0';
    if (uVar7 != 0) {
      uVar4 = 0;
      do {
        local_758[uVar4 * 0x1c] = uVar4 + 1;
        cVar8 = cVar8 + '\x01';
        local_758[uVar4 * 0x1c + 1] = 0;
        local_8 = CONCAT31(local_8._1_3_,cVar8);
        local_758[uVar4 * 0x1c + 3] = uVar4 * 0x7c + 0x112;
        uVar5 = local_8 & 0xff;
        local_758[uVar4 * 0x1c + 5] = 0x7a;
        local_758[uVar4 * 0x1c + 4] = 0x1d4;
        local_758[uVar4 * 0x1c + 6] = 0x18;
        uVar4 = uVar5;
      } while (uVar5 < uVar7);
    }
    local_70 = *(undefined4 *)(this_00 + 8);
    local_38 = local_758;
    local_80[0] = 1;
    local_6c = 2;
    local_68 = 0x6326;
    local_4c = 2;
    local_48 = 0x6327;
    local_50 = local_70;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(5,this_00 + 0x1c83,0,local_80,0);
    FUN_006b3430(DAT_008075a8,*(uint *)(this_00 + 0x1c87));
    goto LAB_005aecc2;
  }
  local_570 = *(undefined4 *)(this_00 + 8);
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
  local_460 = *(undefined4 *)(this_00 + 0x1a8c);
  local_45c = *(undefined4 *)(this_00 + 0x1a90);
  local_468 = 0;
  local_2e8 = 0;
  local_2e0 = *(undefined4 *)(this_00 + 0x1b1d);
  local_458 = *(undefined4 *)(this_00 + 0x1a94);
  local_2dc = *(undefined4 *)(this_00 + 0x1b21);
  local_454 = *(undefined4 *)(this_00 + 0x1a98);
  local_2d8 = *(undefined4 *)(this_00 + 0x1b25);
  local_358 = 500;
  local_1d8 = 500;
  local_15c = *(undefined4 *)(this_00 + 0x1bae);
  local_2d4 = *(undefined4 *)(this_00 + 0x1b29);
  local_154 = *(undefined4 *)(this_00 + 0x1bb6);
  local_354 = 0x32;
  local_1d4 = 0x32;
  local_158 = *(undefined4 *)(this_00 + 0x1bb2);
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
  (**(code **)(**(int **)(this_00 + 0xc) + 8))(7,this_00 + 0x1a6c,0,local_598,0);
  if (*(uint *)(this_00 + 0x1a74) != 0xffffffff) {
    FUN_006b34d0(*(uint **)(this_00 + 0x1ab8),*(uint *)(this_00 + 0x1a74),0xfffffffe,
                 *(uint *)(this_00 + 0x1a8c),*(uint *)(this_00 + 0x1a90));
  }
  if (*(uint *)(this_00 + 0x1b05) != 0xffffffff) {
    FUN_006b34d0(*(uint **)(this_00 + 0x1b49),*(uint *)(this_00 + 0x1b05),0xfffffffe,
                 *(uint *)(this_00 + 0x1b1d),*(uint *)(this_00 + 0x1b21));
  }
  if (*(uint *)(this_00 + 0x1b96) != 0xffffffff) {
    FUN_006b34d0(*(uint **)(this_00 + 0x1bda),*(uint *)(this_00 + 0x1b96),0xfffffffe,
                 *(uint *)(this_00 + 0x1bae),*(uint *)(this_00 + 0x1bb2));
  }
LAB_005aef44:
  if ((this_00[0x20b4] == (ChooseMapTy)0x0) || (param_1 != '\0')) {
    if (*(int *)(DAT_0081176c + 0x389) != 0) {
      *(undefined4 *)(this_00 + 0x2d) = 0x20;
      *(undefined4 *)(this_00 + 0x31) = 0;
      FUN_006e6080(this_00,2,*(undefined4 *)(DAT_0081176c + 0x389),(undefined4 *)(this_00 + 0x1d));
    }
  }
  else {
    StartSystemTy::CreateBinDesc(DAT_0081176c);
  }
  if ((this_00[0x20b7] != (ChooseMapTy)0x0) && (param_1 == '\0')) {
    StartSystemTy::CreateChatView(DAT_0081176c);
    puVar10 = local_fe4;
    for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    local_fe4[0] = 1;
    local_fe4[1] = 9;
    local_fe4[2] = *(undefined4 *)(DAT_0081176c + 0x34);
    local_fe4[3] = 0xcb;
    local_fe4[4] = 0x23f;
    local_fe4[5] = *(undefined4 *)(*(int *)(DAT_0081176c + 0x682) + 4);
    local_fcc = *(undefined4 *)(*(int *)(DAT_0081176c + 0x682) + 8);
    local_fc8 = 0x104;
    local_fc4 = *(undefined4 *)(DAT_0081176c + 0x686);
    piVar9 = *(int **)(this_00 + 0xc);
    local_780 = 0x100;
    local_f98 = piVar9[5];
    local_f90 = 0xc0a0;
    local_f94 = 0;
    local_f58 = piVar9[5];
    local_f54 = 0;
    local_f50 = 0xc0a2;
    (**(code **)(*piVar9 + 8))(6,DAT_0081176c + 0x54c,0,local_fe4,0);
    FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
  }
  iVar3 = *(int *)(this_00 + 0x1a5b);
  if (*(int *)(iVar3 + 0x2e6) != 0) {
    puVar10 = &local_28;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = 0;
    local_1c = 1;
    local_1e = 1;
    local_24 = 1;
    MMsgTy::StatePanel(*(MMsgTy **)(iVar3 + 0x2e6),(int)&local_28);
  }
  if (param_1 != '\0') {
    thunk_FUN_00540dc0(1,*(undefined4 *)(this_00 + 8),2,0xc0a1,2,0x1c,0,0,0,0,0,0);
  }
  DAT_00858df8 = (undefined4 *)local_c4;
  return;
}

