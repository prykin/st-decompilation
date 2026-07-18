
void thunk_FUN_00512830(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  void *unaff_EDI;
  int *piVar5;
  int aiStack_424 [6];
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_2f8;
  int iStack_2f4;
  undefined4 uStack_2a0;
  int aiStack_29c [26];
  undefined4 uStack_234;
  undefined4 uStack_178;
  int iStack_174;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_114;
  int iStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  piVar4 = aiStack_424;
  for (iVar2 = 0xf6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(uint *)((int)pvStack_8 + 0x19c) != 0) {
      FUN_006e56b0(*(void **)((int)pvStack_8 + 0xc),*(uint *)((int)pvStack_8 + 0x19c));
    }
    uStack_7c = *(undefined4 *)((int)pvStack_8 + 8);
    iStack_64 = param_1;
    aiStack_424[4] = *(int *)((int)pvStack_8 + 0x3c) + 0x1c3;
    *(undefined4 *)((int)pvStack_8 + 0x1c3) = 0;
    aiStack_424[0] = 0;
    uStack_60 = 0;
    uStack_78 = 2;
    uStack_74 = 0x6200;
    aiStack_424[1] = 2;
    aiStack_424[2] = 0;
    aiStack_424[3] = 2;
    if (*(int *)((int)pvStack_8 + 0x5c) == 0) {
      aiStack_424[5] = -*(int *)((int)pvStack_8 + 0x48);
    }
    else {
      aiStack_424[5] = *(int *)((int)pvStack_8 + 0x44);
    }
    aiStack_424[5] = aiStack_424[5] + 0x109;
    uStack_40c = 0x11;
    uStack_408 = 0x24;
    uStack_30c = 500;
    uStack_308 = 0x32;
    uStack_2f8 = FUN_0070aa70(DAT_00806790,s_BUT_MSLDN_007c39d4,0,1);
    iStack_2f4 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLDN_007c39d4,1);
    iVar2 = *(int *)((int)pvStack_8 + 0x5c);
    uStack_3b8 = 2;
    uStack_314 = 1;
    uStack_310 = 1;
    uStack_2a0 = 2;
    uStack_3bc = *(undefined4 *)((int)pvStack_8 + 8);
    uStack_3b4 = 0x8165;
    piVar4 = aiStack_424 + 2;
    piVar5 = aiStack_29c;
    for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    if (iVar2 == 0) {
      aiStack_29c[3] = -*(int *)((int)pvStack_8 + 0x48);
    }
    else {
      aiStack_29c[3] = *(int *)((int)pvStack_8 + 0x44);
    }
    aiStack_29c[3] = aiStack_29c[3] + 0x16;
    uStack_178 = FUN_0070aa70(DAT_00806790,s_BUT_MSLUP_007c39e0,0,1);
    iStack_174 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLUP_007c39e0,1);
    iStack_110 = *(int *)((int)pvStack_8 + 0x3c) + 0x1c3;
    uStack_234 = 0x8164;
    uStack_120 = 3;
    uStack_11c = 1;
    uStack_114 = 0;
    if (*(int *)((int)pvStack_8 + 0x5c) == 0) {
      iStack_10c = -*(int *)((int)pvStack_8 + 0x48);
    }
    else {
      iStack_10c = *(int *)((int)pvStack_8 + 0x44);
    }
    iStack_10c = iStack_10c + 0x3d;
    uStack_cc = *(undefined4 *)((int)pvStack_8 + 8);
    uStack_108 = 0x11;
    uStack_104 = 0xc9;
    uStack_100 = 0x15;
    uStack_c8 = 2;
    uStack_c4 = 0x8166;
    uStack_8c = 1;
    uStack_88 = 1;
    (**(code **)(**(int **)((int)pvStack_8 + 0xc) + 8))
              (4,(int *)((int)pvStack_8 + 0x19c),0,aiStack_424,0);
    iVar2 = *(int *)((int)pvStack_8 + 0x19c);
    if ((iVar2 != 0) && (param_1 != 0)) {
      *(undefined4 *)((int)pvStack_8 + 0x28) = 0x20;
      *(undefined4 *)((int)pvStack_8 + 0x2c) = 1;
      FUN_006e6080(pvStack_8,2,iVar2,(undefined4 *)((int)pvStack_8 + 0x18));
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x1df,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c383c,0x1df);
  return;
}

