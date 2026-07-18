
undefined4 __thiscall InterSystemC::CreateInterfObjects(InterSystemC *this)

{
  code *pcVar1;
  bool bVar2;
  InterSystemC *pIVar3;
  int iVar4;
  LPSTR pCVar5;
  byte *pbVar6;
  ushort *puVar7;
  char *pcVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar9;
  undefined4 uVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
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
  InterSystemC *pIStack_8;
  
  uStack_1c8 = DAT_00858df8;
  DAT_00858df8 = &uStack_1c8;
  pIStack_8 = this;
  iVar4 = __setjmp3(auStack_1c4,0,unaff_EDI,unaff_ESI);
  pIVar3 = pIStack_8;
  if (iVar4 == 0) {
    if (DAT_0080874e == '\x01') {
      iVar4 = thunk_FUN_00541cf0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    }
    else if (DAT_0080874e == '\x02') {
      iVar4 = thunk_FUN_00541f60(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    }
    else {
      iVar4 = thunk_FUN_005421d0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    }
    *(int *)(pIVar3 + 0x24) = iVar4;
    *(undefined4 *)(iVar4 + 0x58) = 1;
    *(undefined4 *)(iVar4 + 0x5c) = 0;
    iVar4 = thunk_FUN_005412b0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    *(int *)(pIVar3 + 0x28) = iVar4;
    *(undefined4 *)(iVar4 + 0x58) = 0;
    *(undefined4 *)(iVar4 + 0x5c) = 0;
    iVar4 = thunk_FUN_005416a0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    *(int *)(pIVar3 + 0x2c) = iVar4;
    *(undefined4 *)(iVar4 + 0x58) = 1;
    *(undefined4 *)(iVar4 + 0x5c) = 0;
    iVar4 = thunk_FUN_005419e0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    *(int *)(pIVar3 + 0x30) = iVar4;
    *(undefined4 *)(iVar4 + 0x58) = 1;
    *(undefined4 *)(iVar4 + 0x5c) = 0;
    thunk_FUN_0056a500();
    puVar9 = auStack_184;
    for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    puVar15 = (undefined4 *)0x0;
    iVar14 = 0;
    iVar13 = 1;
    bVar12 = 0;
    uVar11 = 0xffffffff;
    uVar10 = 0;
    iVar4 = 1;
    auStack_184[1] = 1;
    auStack_184[0] = 1;
    pCVar5 = thunk_FUN_00571240(s_BUT_FILEOPT_007c7c48,0);
    pbVar6 = (byte *)FUN_006f2c00(pCVar5,iVar4,uVar10);
    puVar7 = FUN_00709af0(DAT_00806794,1,pbVar6,uVar11,bVar12,iVar13,iVar14,puVar15);
    auStack_184[2] = (-(uint)(DAT_0080874e != '\x03') & 5) + 0x26;
    uStack_174 = *(undefined4 *)(puVar7 + 2);
    iStack_164 = *(int *)(pIVar3 + 0x14);
    auStack_184[3] = (DAT_0080874e != '\x03') + 7;
    uStack_170 = *(undefined4 *)(puVar7 + 4);
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
    (**(code **)(*(int *)pIVar3 + 8))(2,0,0,auStack_184,1);
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
    (**(code **)(*(int *)pIVar3 + 8))(2,0,0,auStack_184,1);
    uStack_d0 = 0x2718;
    uStack_f4 = 0x2718;
    auStack_184[2] = (-(uint)(DAT_0080874e != '\x03') & 3) + 0xd2;
    auStack_184[0] = 1;
    uStack_15c = 0xb901;
    uStack_11c = 0xb902;
    (**(code **)(*(int *)pIVar3 + 8))(2,0,0,auStack_184,1);
    if ((*(char *)((int)&DAT_008087c4 + (uint)DAT_0080874d * 0x51 + 3) == '\0') &&
       (DAT_0080874f == '\0')) {
      bVar12 = 1;
    }
    else {
      bVar12 = 0;
    }
    auStack_184[0] = (uint)bVar12;
    uStack_d0 = 0x2719;
    uStack_f4 = 0x2719;
    auStack_184[2] = (-(uint)(DAT_0080874e != '\x03') & 2) + 0x128;
    uStack_15c = 0xb903;
    uStack_11c = 0xb904;
    (**(code **)(*(int *)pIVar3 + 8))(2,0,0,auStack_184,1);
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
    (**(code **)(*(int *)pIVar3 + 8))(2,0,0,auStack_184,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x11f,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x120,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x122,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x123,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x125,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x127,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x128,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x12a,0,0,0,1);
    thunk_FUN_0056a500();
    if (DAT_0080874e == '\x03') {
      (**(code **)(*(int *)pIVar3 + 8))(0x151,0,0,0,1);
      (**(code **)(*(int *)pIVar3 + 8))(0x159,0,0,0,1);
    }
    (**(code **)(*(int *)pIVar3 + 8))(0x149,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x148,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x14a,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x153,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x155,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x154,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x156,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(299,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x12e,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 8))(0x14b,0,0,0,1);
    thunk_FUN_0056a500();
    (**(code **)(*(int *)pIVar3 + 0x10))(0x201,0);
    thunk_FUN_0056a500();
    if (DAT_00801690 != (int *)0x0) {
      thunk_FUN_0051da70(DAT_00801690);
    }
    thunk_FUN_0056a500();
    if ((DAT_0080877e == '\0') && (DAT_008016d8 != (void *)0x0)) {
      uVar11 = 8;
      pcVar8 = (char *)FUN_006b0140(0x4275,DAT_00807618);
      thunk_FUN_0052d320(DAT_008016d8,pcVar8,uVar11);
    }
    DAT_00858df8 = (undefined4 *)uStack_1c8;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_1c8;
  iVar13 = FUN_006ad4d0(s_E____titans_Andrey_tintersys_cpp_007c7be8,0xb3,0,iVar4,&DAT_007a4ccc);
  if (iVar13 != 0) {
    pcVar1 = (code *)swi(3);
    uVar10 = (*pcVar1)();
    return uVar10;
  }
  FUN_006a5e40(iVar4,0,0x7c7be8,0xb3);
  return 0xfffffffc;
}

