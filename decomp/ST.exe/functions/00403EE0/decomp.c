
undefined4
thunk_FUN_0052eb50(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint *puVar5;
  void *unaff_EDI;
  uint *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint auStack_42c [6];
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_2a8;
  uint auStack_2a4 [26];
  undefined4 uStack_23c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  int iStack_10;
  ushort *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  iVar2 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar5 = auStack_42c;
    for (iVar2 = 0xf6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    iVar9 = 1;
    piVar8 = (int *)0x0;
    uVar7 = 0;
    uStack_6c = param_6;
    uStack_84 = *(undefined4 *)(iStack_10 + 8);
    uStack_68 = param_7;
    iVar2 = 1;
    auStack_42c[0] = (uint)(param_8 != 0);
    uStack_80 = 2;
    uStack_7c = param_5;
    uStack_2a8 = 2;
    auStack_42c[1] = 2;
    uStack_318 = 1;
    uStack_31c = 1;
    auStack_42c[3] = 2;
    auStack_42c[2] = auStack_42c[0];
    pCVar3 = thunk_FUN_00571240(s_BUT_MINUS_007c718c,0);
    pCVar3 = FUN_006f2c00(pCVar3,iVar2,uVar7);
    puStack_c = FUN_006f1ce0(1,pCVar3,piVar8,iVar9);
    uStack_414 = *(undefined4 *)(puStack_c + 2);
    uStack_410 = *(undefined4 *)(puStack_c + 4);
    FUN_006f20e0((uint *)&puStack_c);
    iVar2 = *(int *)(iStack_10 + 0x3c);
    auStack_42c[4] = iVar2 + param_3;
    iVar9 = *(int *)(iStack_10 + 0x5c);
    if (iVar9 == 0) {
      iVar4 = -*(int *)(iStack_10 + 0x48);
    }
    else {
      iVar4 = *(int *)(iStack_10 + 0x44);
    }
    uStack_3c0 = 2;
    auStack_42c[5] = iVar4 + param_4;
    uStack_3c4 = *(undefined4 *)(iStack_10 + 8);
    uStack_3bc = 0xc005;
    uStack_314 = 500;
    uStack_310 = 0x32;
    puVar5 = auStack_42c + 2;
    puVar6 = auStack_2a4;
    for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStack_2a4[2] = iVar2 + param_1;
    if (iVar9 == 0) {
      iVar2 = -*(int *)(iStack_10 + 0x48);
    }
    else {
      iVar2 = *(int *)(iStack_10 + 0x44);
    }
    auStack_2a4[3] = iVar2 + param_2;
    uStack_23c = 0xc006;
    (**(code **)(**(int **)(iStack_10 + 0xc) + 8))(4,&uStack_8,0,auStack_42c,0);
    DAT_00858df8 = (undefined4 *)uStack_54;
    return uStack_8;
  }
  DAT_00858df8 = (undefined4 *)uStack_54;
  iVar9 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0xa0,0,iVar2,&DAT_007a4ccc);
  if (iVar9 != 0) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  FUN_006a5e40(iVar2,0,0x7c70a0,0xa0);
  return 0xffffffff;
}

