
undefined4 thunk_FUN_005424a0(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  LPSTR pCVar4;
  byte *pbVar5;
  ushort *puVar6;
  char *pcVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uStack_1c8;
  undefined4 auStack_1c4 [16];
  uint auStack_184 [4];
  undefined4 uStack_174;
  undefined4 uStack_170;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined4 uStack_f4;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_60;
  int iStack_5c;
  int *piStack_8;
  
  uStack_1c8 = DAT_00858df8;
  DAT_00858df8 = &uStack_1c8;
  iVar3 = __setjmp3(auStack_1c4,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (DAT_0080874e == '\x01') {
      iVar3 = thunk_FUN_00541cf0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    }
    else if (DAT_0080874e == '\x02') {
      iVar3 = thunk_FUN_00541f60(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    }
    else {
      iVar3 = thunk_FUN_005421d0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    }
    piStack_8[9] = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    iVar3 = thunk_FUN_005412b0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    piStack_8[10] = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 0;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    iVar3 = thunk_FUN_005416a0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    piStack_8[0xb] = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    iVar3 = thunk_FUN_005419e0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    piStack_8[0xc] = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    thunk_FUN_0056a500();
    puVar8 = auStack_184;
    for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    puVar14 = (undefined4 *)0x0;
    iVar13 = 0;
    iVar12 = 1;
    bVar11 = 0;
    uVar10 = 0xffffffff;
    uVar9 = 0;
    iVar3 = 1;
    auStack_184[1] = 1;
    auStack_184[0] = 1;
    pCVar4 = thunk_FUN_00571240(s_BUT_FILEOPT_007c7c48,0);
    pbVar5 = (byte *)FUN_006f2c00(pCVar4,iVar3,uVar9);
    puVar6 = FUN_00709af0(DAT_00806794,1,pbVar5,uVar10,bVar11,iVar12,iVar13,puVar14);
    auStack_184[2] = (-(uint)(DAT_0080874e != '\x03') & 5) + 0x26;
    uStack_174 = *(undefined4 *)(puVar6 + 2);
    iStack_164 = piStack_8[5];
    auStack_184[3] = (DAT_0080874e != '\x03') + 7;
    uStack_170 = *(undefined4 *)(puVar6 + 4);
    uStack_e0 = 0x101;
    uStack_104 = 0x101;
    uStack_dc = 3;
    uStack_100 = 3;
    uStack_d0 = 0x2717;
    uStack_f4 = 0x2717;
    uStack_d2 = 2;
    uStack_f6 = 2;
    uStack_120 = 0;
    uStack_160 = 0;
    uStack_15c = 0xb8ff;
    uStack_11c = 0xb900;
    uStack_fc = 0x4201;
    uStack_d8 = 0x4202;
    uStack_d4 = 0;
    uStack_f8 = 0;
    uStack_ec = 0;
    uStack_c8 = 1;
    iStack_124 = iStack_164;
    (**(code **)(*piStack_8 + 8))(2,0,0,auStack_184,1);
    if ((*(char *)((int)&DAT_008087c4 + (uint)DAT_0080874d * 0x51 + 3) == '\0') &&
       (DAT_0080874f == '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((!bVar2) || ((DAT_00808783 == '\x03' && (DAT_00808aa9 == '\0')))) {
      auStack_184[0] = 0;
    }
    uStack_15c = 0xb905;
    auStack_184[2] = (-(uint)(DAT_0080874e != '\x03') & 4) + 0x7c;
    uStack_11c = 0xb906;
    uStack_d0 = 0x271a;
    uStack_f4 = 0x271a;
    (**(code **)(*piStack_8 + 8))(2,0,0,auStack_184,1);
    uStack_d0 = 0x2718;
    uStack_f4 = 0x2718;
    auStack_184[2] = (-(uint)(DAT_0080874e != '\x03') & 3) + 0xd2;
    auStack_184[0] = 1;
    uStack_15c = 0xb901;
    uStack_11c = 0xb902;
    (**(code **)(*piStack_8 + 8))(2,0,0,auStack_184,1);
    if ((*(char *)((int)&DAT_008087c4 + (uint)DAT_0080874d * 0x51 + 3) == '\0') &&
       (DAT_0080874f == '\0')) {
      bVar11 = 1;
    }
    else {
      bVar11 = 0;
    }
    auStack_184[0] = (uint)bVar11;
    uStack_d0 = 0x2719;
    uStack_f4 = 0x2719;
    auStack_184[2] = (-(uint)(DAT_0080874e != '\x03') & 2) + 0x128;
    uStack_15c = 0xb903;
    uStack_11c = 0xb904;
    (**(code **)(*piStack_8 + 8))(2,0,0,auStack_184,1);
    auStack_184[3] = DAT_00806734 + -0x1a;
    auStack_184[2] = DAT_00806730 + -0x32;
    auStack_184[0] = 1;
    uStack_174 = 0x28;
    uStack_170 = 0x12;
    if (DAT_0080874e == '\x03') {
      uStack_60 = FUN_0070aa70(DAT_00806790,s_BUT_OHELPMSK_007c7c38,0,1);
      iStack_5c = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_OHELPMSK_007c7c38,1);
    }
    uStack_d0 = 0x2739;
    uStack_f4 = 0x2739;
    uStack_15c = 0xb907;
    uStack_11c = 0xb908;
    (**(code **)(*piStack_8 + 8))(2,0,0,auStack_184,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x11f,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x120,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x122,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x123,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x125,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x127,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x128,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x12a,0,0,0,1);
    thunk_FUN_0056a500();
    if (DAT_0080874e == '\x03') {
      (**(code **)(*piStack_8 + 8))(0x151,0,0,0,1);
      (**(code **)(*piStack_8 + 8))(0x159,0,0,0,1);
    }
    (**(code **)(*piStack_8 + 8))(0x149,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x148,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x14a,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x153,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x155,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x154,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x156,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(299,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x12e,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 8))(0x14b,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*piStack_8 + 0x10))(0x201,0);
    thunk_FUN_0056a500();
    if (DAT_00801690 != (int *)0x0) {
      thunk_FUN_0051da70(DAT_00801690);
    }
    thunk_FUN_0056a500();
    if ((DAT_0080877e == '\0') && (DAT_008016d8 != (void *)0x0)) {
      uVar10 = 8;
      pcVar7 = (char *)FUN_006b0140(0x4275,DAT_00807618);
      thunk_FUN_0052d320(DAT_008016d8,pcVar7,uVar10);
    }
    DAT_00858df8 = (undefined4 *)uStack_1c8;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_1c8;
  iVar12 = FUN_006ad4d0(s_E____titans_Andrey_tintersys_cpp_007c7be8,0xb3,0,iVar3,&DAT_007a4ccc);
  if (iVar12 != 0) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return uVar9;
  }
  FUN_006a5e40(iVar3,0,0x7c7be8,0xb3);
  return 0xfffffffc;
}

