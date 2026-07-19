
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
  undefined4 auStack_fe4 [6];
  undefined4 uStack_fcc;
  undefined4 uStack_fc8;
  undefined4 uStack_fc4;
  int iStack_f98;
  undefined4 uStack_f94;
  undefined4 uStack_f90;
  int iStack_f58;
  undefined4 uStack_f54;
  undefined4 uStack_f50;
  undefined4 uStack_780;
  int aiStack_758 [112];
  undefined4 auStack_598 [10];
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_c8;
  InternalExceptionFrame IStack_c4;
  undefined4 auStack_80 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int *piStack_38;
  uint uStack_34;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  ChooseMapTy *pCStack_c;
  uint uStack_8;
  
  puVar10 = auStack_598;
  pCStack_c = this;
  for (iVar3 = 0x135; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  puVar10 = auStack_fe4;
  for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  puVar10 = auStack_80;
  for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  piVar9 = aiStack_758;
  for (iVar3 = 0x70; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  IStack_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_c4;
  iVar3 = __setjmp3(IStack_c4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pCStack_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_c4.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x39f,0,iVar3,&DAT_007a4ccc
                               ,s_ChooseMapTy__CreateCtrls_007cc858);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_load_obj_cpp_007cc728,0x39f);
    return;
  }
  uVar7 = 0;
  switch(pCStack_c[0x1a5f]) {
  case (ChooseMapTy)0x1:
  case (ChooseMapTy)0x2:
    uStack_34 = (uint)(byte)DAT_0081176c[0x2eb];
    uVar7 = 2;
    pCStack_c[0x1a5f] = (ChooseMapTy)((uStack_34 != 1) + '\x01');
    goto LAB_005aebde;
  case (ChooseMapTy)0x4:
  case (ChooseMapTy)0x5:
    uVar7 = 2;
    uStack_34 = (uint)(byte)DAT_0081176c[0x2eb];
    pCStack_c[0x1a5f] = (ChooseMapTy)((uStack_34 != 1) + '\x04');
    break;
  case (ChooseMapTy)0x9:
  case (ChooseMapTy)0xa:
  case (ChooseMapTy)0xb:
    uVar7 = 3;
    uStack_34 = (uint)(byte)DAT_0081176c[0x2ea];
    SVar1 = DAT_0081176c[0x2ea];
    if (SVar1 == (StartSystemTy)0x1) {
      pCStack_c[0x1a5f] = (ChooseMapTy)0x9;
    }
    else if (SVar1 == (StartSystemTy)0x2) {
      pCStack_c[0x1a5f] = (ChooseMapTy)0xa;
    }
    else if (SVar1 == (StartSystemTy)0x3) {
      pCStack_c[0x1a5f] = (ChooseMapTy)0xb;
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
        aiStack_758[uVar4 * 0x1c] = uVar4 + 1;
        cVar8 = cVar8 + '\x01';
        aiStack_758[uVar4 * 0x1c + 1] = 0;
        uStack_8 = CONCAT31(uStack_8._1_3_,cVar8);
        aiStack_758[uVar4 * 0x1c + 3] = uVar4 * 0x7c + 0x112;
        uVar5 = uStack_8 & 0xff;
        aiStack_758[uVar4 * 0x1c + 5] = 0x7a;
        aiStack_758[uVar4 * 0x1c + 4] = 0x1d4;
        aiStack_758[uVar4 * 0x1c + 6] = 0x18;
        uVar4 = uVar5;
      } while (uVar5 < uVar7);
    }
    uStack_70 = *(undefined4 *)(this_00 + 8);
    piStack_38 = aiStack_758;
    auStack_80[0] = 1;
    uStack_6c = 2;
    uStack_68 = 0x6326;
    uStack_4c = 2;
    uStack_48 = 0x6327;
    uStack_50 = uStack_70;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(5,this_00 + 0x1c83,0,auStack_80,0);
    FUN_006b3430(DAT_008075a8,*(uint *)(this_00 + 0x1c87));
    goto LAB_005aecc2;
  }
  uStack_570 = *(undefined4 *)(this_00 + 8);
  auStack_598[0] = 0;
  auStack_598[2] = 0x114;
  auStack_598[3] = 0x3f;
  auStack_598[4] = 0x1e4;
  auStack_598[5] = 399;
  auStack_598[6] = 0;
  auStack_598[7] = 0;
  uStack_56c = 2;
  uStack_568 = 0x8160;
  uStack_54c = 2;
  uStack_548 = 0x8161;
  uStack_52c = 2;
  uStack_528 = 0x8162;
  uStack_50c = 2;
  uStack_508 = 0x8163;
  if (DAT_0080734c != '\0') {
    uStack_c8 = 1;
  }
  uStack_460 = *(undefined4 *)(this_00 + 0x1a8c);
  uStack_45c = *(undefined4 *)(this_00 + 0x1a90);
  uStack_468 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = *(undefined4 *)(this_00 + 0x1b1d);
  uStack_458 = *(undefined4 *)(this_00 + 0x1a94);
  uStack_2dc = *(undefined4 *)(this_00 + 0x1b21);
  uStack_454 = *(undefined4 *)(this_00 + 0x1a98);
  uStack_2d8 = *(undefined4 *)(this_00 + 0x1b25);
  uStack_358 = 500;
  uStack_1d8 = 500;
  uStack_15c = *(undefined4 *)(this_00 + 0x1bae);
  uStack_2d4 = *(undefined4 *)(this_00 + 0x1b29);
  uStack_154 = *(undefined4 *)(this_00 + 0x1bb6);
  uStack_354 = 0x32;
  uStack_1d4 = 0x32;
  uStack_158 = *(undefined4 *)(this_00 + 0x1bb2);
  uStack_46c = 2;
  uStack_464 = 2;
  uStack_404 = 2;
  uStack_400 = 0x8164;
  uStack_2ec = 2;
  uStack_2e4 = 2;
  uStack_284 = 2;
  uStack_280 = 0x8165;
  uStack_16c = 3;
  uStack_168 = 1;
  uStack_160 = 0;
  uStack_150 = 0x157;
  uStack_14c = 0xe;
  uStack_114 = 2;
  uStack_110 = 0x8166;
  uStack_550 = uStack_570;
  uStack_530 = uStack_570;
  uStack_510 = uStack_570;
  uStack_408 = uStack_570;
  uStack_288 = uStack_570;
  uStack_118 = uStack_570;
  (**(code **)(**(int **)(this_00 + 0xc) + 8))(7,this_00 + 0x1a6c,0,auStack_598,0);
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
    puVar10 = auStack_fe4;
    for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    auStack_fe4[0] = 1;
    auStack_fe4[1] = 9;
    auStack_fe4[2] = *(undefined4 *)(DAT_0081176c + 0x34);
    auStack_fe4[3] = 0xcb;
    auStack_fe4[4] = 0x23f;
    auStack_fe4[5] = *(undefined4 *)(*(int *)(DAT_0081176c + 0x682) + 4);
    uStack_fcc = *(undefined4 *)(*(int *)(DAT_0081176c + 0x682) + 8);
    uStack_fc8 = 0x104;
    uStack_fc4 = *(undefined4 *)(DAT_0081176c + 0x686);
    piVar9 = *(int **)(this_00 + 0xc);
    uStack_780 = 0x100;
    iStack_f98 = piVar9[5];
    uStack_f90 = 0xc0a0;
    uStack_f94 = 0;
    iStack_f58 = piVar9[5];
    uStack_f54 = 0;
    uStack_f50 = 0xc0a2;
    (**(code **)(*piVar9 + 8))(6,DAT_0081176c + 0x54c,0,auStack_fe4,0);
    FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
  }
  iVar3 = *(int *)(this_00 + 0x1a5b);
  if (*(int *)(iVar3 + 0x2e6) != 0) {
    puVar10 = &uStack_28;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = 0;
    uStack_1c = 1;
    uStack_1e = 1;
    uStack_24 = 1;
    MMsgTy::StatePanel(*(MMsgTy **)(iVar3 + 0x2e6),(int)&uStack_28);
  }
  if (param_1 != '\0') {
    thunk_FUN_00540dc0(1,*(undefined4 *)(this_00 + 8),2,0xc0a1,2,0x1c,0,0,0,0,0,0);
  }
  g_currentExceptionFrame = IStack_c4.previous;
  return;
}

