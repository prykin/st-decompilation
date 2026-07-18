
undefined4
thunk_FUN_0053dea0(undefined4 param_1,int param_2,int param_3,int param_4,byte param_5,int param_6,
                  undefined4 param_7,undefined4 param_8,short param_9,undefined2 param_10,
                  undefined4 param_11,char *param_12,undefined4 param_13,undefined4 param_14)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar5;
  int aiStack_1d0 [4];
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined2 uStack_144;
  short sStack_142;
  undefined4 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined2 uStack_120;
  short sStack_11e;
  undefined4 uStack_11c;
  undefined4 uStack_114;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 *puStack_54;
  undefined4 auStack_50 [16];
  int iStack_10;
  undefined4 uStack_c;
  ushort *puStack_8;
  
  puStack_8 = (ushort *)0x0;
  uStack_c = 0;
  puStack_54 = DAT_00858df8;
  DAT_00858df8 = &puStack_54;
  iVar2 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    piVar5 = aiStack_1d0;
    for (iVar2 = 0x5f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    aiStack_1d0[1] = param_1;
    aiStack_1d0[0] = param_2;
    if (param_6 != 0) {
      wsprintfA((LPSTR)(iStack_10 + 0x6c),&DAT_007c181c,param_6);
      puStack_8 = FUN_006f1ce0(param_5,(LPSTR)(iStack_10 + 0x6c),(int *)0x0,1);
    }
    if ((param_5 == 1) || (param_5 == 6)) {
      uStack_1c0 = *(undefined4 *)(puStack_8 + 2);
      param_14 = *(undefined4 *)(puStack_8 + 4);
    }
    else {
      uStack_1c0 = param_13;
    }
    aiStack_1d0[2] = *(int *)(iStack_10 + 0x3c) + param_3;
    if (*(int *)(iStack_10 + 0x5c) == 0) {
      aiStack_1d0[3] = -*(int *)(iStack_10 + 0x48);
    }
    else {
      aiStack_1d0[3] = *(int *)(iStack_10 + 0x44);
    }
    aiStack_1d0[3] = aiStack_1d0[3] + param_4;
    uStack_1bc = param_14;
    if (puStack_8 != (ushort *)0x0) {
      FUN_006f20e0((uint *)&puStack_8);
    }
    uStack_1b0 = *(undefined4 *)(iStack_10 + 8);
    uStack_168 = param_8;
    uStack_c8 = 1;
    uStack_c4 = 1;
    uStack_1ac = 2;
    uStack_1a8 = param_7;
    uStack_16c = 2;
    if (param_9 != 0) {
      uStack_150 = 0x101;
      uStack_14c = 3;
      uStack_148 = 0x4201;
      uStack_144 = param_10;
      sStack_142 = param_9;
      uStack_140 = param_11;
      uStack_138 = 0;
      uStack_114 = 0;
      uStack_12c = 0x101;
      uStack_128 = 3;
      uStack_124 = 0x4202;
      uStack_120 = param_10;
      sStack_11e = param_9;
      uStack_11c = param_11;
    }
    uStack_170 = uStack_1b0;
    if (param_12 != (char *)0x0) {
      uStack_ac = FUN_0070aa70(DAT_00806790,param_12,0,1);
      iStack_a8 = FUN_0070a6f0(DAT_00806790,0x12,param_12,1);
    }
    (**(code **)(**(int **)(iStack_10 + 0xc) + 8))(2,&uStack_c,0,aiStack_1d0,0);
    DAT_00858df8 = puStack_54;
    return uStack_c;
  }
  DAT_00858df8 = puStack_54;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0xb1,0,iVar2,&DAT_007a4ccc);
  if (iVar3 == 0) {
    FUN_006a5e40(iVar2,0,0x7c7870,0xb1);
    return 0;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

