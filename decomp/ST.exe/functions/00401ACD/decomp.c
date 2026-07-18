
void __thiscall HelpPanelTy::CreateList(HelpPanelTy *this)

{
  code *pcVar1;
  HelpPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  void *unaff_EDI;
  int *piVar5;
  int aiStack_520 [4];
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_3f4;
  int aiStack_3f0 [4];
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2cc;
  int iStack_2c8;
  undefined4 uStack_274;
  int aiStack_270 [26];
  undefined4 uStack_208;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  HelpPanelTy *pHStack_8;
  
  piVar4 = aiStack_520;
  pHStack_8 = this;
  for (iVar2 = 0x135; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  this_00 = pHStack_8;
  if (iVar2 == 0) {
    if (*(uint *)(pHStack_8 + 0x19c) != 0) {
      FUN_006e56b0(*(void **)(pHStack_8 + 0xc),*(uint *)(pHStack_8 + 0x19c));
    }
    FUN_006b55f0(*(undefined4 **)(this_00 + 0x68),0,0x21,0x16,*(int *)(this_00 + 0x1dc),0,0x21,0x16,
                 0x19c,0x118);
    aiStack_520[0] = 0;
    aiStack_520[2] = *(int *)(this_00 + 0x3c) + 0x21;
    if (*(int *)(this_00 + 0x5c) == 0) {
      aiStack_520[3] = -*(int *)(this_00 + 0x48);
    }
    else {
      aiStack_520[3] = *(int *)(this_00 + 0x44);
    }
    aiStack_520[3] = aiStack_520[3] + 0x16;
    uStack_510 = 0x19c;
    uStack_50c = 0x118;
    if (this_00[0x1a1] == (HelpPanelTy)0x0) {
      iVar2 = *(int *)(this_00 + 0x1b3);
    }
    else {
      iVar2 = *(int *)(this_00 + 0x1bb);
    }
    uStack_508 = *(undefined4 *)(iVar2 + 0xc);
    uStack_504 = 0;
    uStack_4f8 = *(undefined4 *)(this_00 + 8);
    aiStack_3f0[0] = 0;
    aiStack_3f0[2] = *(int *)(this_00 + 0x3c) + 0x1c3;
    uStack_4f4 = 2;
    uStack_4f0 = 0x8160;
    uStack_4d4 = 2;
    uStack_4d0 = 0x8161;
    uStack_4b4 = 2;
    uStack_4b0 = 0x8162;
    uStack_494 = 2;
    uStack_490 = 0x8163;
    uStack_3f4 = 2;
    aiStack_3f0[1] = 2;
    uStack_2e8 = 1;
    uStack_2e4 = 1;
    if (*(int *)(this_00 + 0x5c) == 0) {
      aiStack_3f0[3] = -*(int *)(this_00 + 0x48);
    }
    else {
      aiStack_3f0[3] = *(int *)(this_00 + 0x44);
    }
    aiStack_3f0[3] = aiStack_3f0[3] + 0x16;
    uStack_3e0 = 0x11;
    uStack_3dc = 0x24;
    uStack_4d8 = uStack_4f8;
    uStack_4b8 = uStack_4f8;
    uStack_498 = uStack_4f8;
    uStack_2cc = FUN_0070aa70(DAT_00806790,s_BUT_MSLUP_007c39e0,0,1);
    iStack_2c8 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLUP_007c39e0,1);
    uStack_390 = *(undefined4 *)(this_00 + 8);
    iVar2 = *(int *)(this_00 + 0x5c);
    uStack_38c = 2;
    uStack_274 = 2;
    uStack_2e0 = 500;
    uStack_2dc = 0x32;
    uStack_388 = 0x8164;
    piVar4 = aiStack_3f0;
    piVar5 = aiStack_270;
    for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    if (iVar2 == 0) {
      aiStack_270[3] = -*(int *)(this_00 + 0x48);
    }
    else {
      aiStack_270[3] = *(int *)(this_00 + 0x44);
    }
    aiStack_270[3] = aiStack_270[3] + 0x109;
    uStack_14c = FUN_0070aa70(DAT_00806790,s_BUT_MSLDN_007c39d4,0,1);
    iStack_148 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLDN_007c39d4,1);
    iStack_e4 = *(int *)(this_00 + 0x3c) + 0x1c3;
    uStack_208 = 0x8165;
    uStack_f4 = 3;
    uStack_f0 = 1;
    uStack_e8 = 0;
    if (*(int *)(this_00 + 0x5c) == 0) {
      iStack_e0 = -*(int *)(this_00 + 0x48);
    }
    else {
      iStack_e0 = *(int *)(this_00 + 0x44);
    }
    uStack_a0 = *(undefined4 *)(this_00 + 8);
    iStack_e0 = iStack_e0 + 0x3d;
    uStack_dc = 0x11;
    uStack_d8 = 0xc9;
    uStack_d4 = 0x15;
    uStack_9c = 2;
    uStack_98 = 0x8166;
    uStack_60 = 1;
    uStack_5c = 1;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(7,this_00 + 0x19c,0,aiStack_520,0);
    iVar2 = *(int *)(this_00 + 0x19c);
    if (iVar2 != 0) {
      *(undefined4 *)(this_00 + 0x28) = 0x20;
      *(undefined4 *)(this_00 + 0x2c) = 1;
      FUN_006e6080(this_00,2,iVar2,(undefined4 *)(this_00 + 0x18));
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x1a5,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c383c,0x1a5);
  return;
}

