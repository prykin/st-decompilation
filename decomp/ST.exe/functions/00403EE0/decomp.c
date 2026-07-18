
undefined4 __thiscall
OptPanelTy::CreateSlider
          (OptPanelTy *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  OptPanelTy *pOVar2;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  undefined4 unaff_ESI;
  uint *puVar6;
  void *unaff_EDI;
  uint *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
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
  OptPanelTy *pOStack_10;
  ushort *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  pOStack_10 = this;
  iVar3 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  pOVar2 = pOStack_10;
  if (iVar3 == 0) {
    puVar6 = auStack_42c;
    for (iVar3 = 0xf6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    iVar10 = 1;
    piVar9 = (int *)0x0;
    uVar8 = 0;
    uStack_6c = param_6;
    uStack_84 = *(undefined4 *)(pOVar2 + 8);
    uStack_68 = param_7;
    iVar3 = 1;
    auStack_42c[0] = (uint)(param_8 != 0);
    uStack_80 = 2;
    uStack_7c = param_5;
    uStack_2a8 = 2;
    auStack_42c[1] = 2;
    uStack_318 = 1;
    uStack_31c = 1;
    auStack_42c[3] = 2;
    auStack_42c[2] = auStack_42c[0];
    pCVar4 = thunk_FUN_00571240(s_BUT_MINUS_007c718c,0);
    pCVar4 = FUN_006f2c00(pCVar4,iVar3,uVar8);
    puStack_c = FUN_006f1ce0(1,pCVar4,piVar9,iVar10);
    uStack_414 = *(undefined4 *)(puStack_c + 2);
    uStack_410 = *(undefined4 *)(puStack_c + 4);
    cMf32::RecMemFree(DAT_00806790,(uint *)&puStack_c);
    iVar3 = *(int *)(pOVar2 + 0x3c);
    auStack_42c[4] = iVar3 + param_3;
    iVar10 = *(int *)(pOVar2 + 0x5c);
    if (iVar10 == 0) {
      iVar5 = -*(int *)(pOVar2 + 0x48);
    }
    else {
      iVar5 = *(int *)(pOVar2 + 0x44);
    }
    uStack_3c0 = 2;
    auStack_42c[5] = iVar5 + param_4;
    uStack_3c4 = *(undefined4 *)(pOVar2 + 8);
    uStack_3bc = 0xc005;
    uStack_314 = 500;
    uStack_310 = 0x32;
    puVar6 = auStack_42c + 2;
    puVar7 = auStack_2a4;
    for (iVar5 = 0x5f; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    auStack_2a4[2] = iVar3 + param_1;
    if (iVar10 == 0) {
      iVar3 = -*(int *)(pOVar2 + 0x48);
    }
    else {
      iVar3 = *(int *)(pOVar2 + 0x44);
    }
    auStack_2a4[3] = iVar3 + param_2;
    uStack_23c = 0xc006;
    (**(code **)(**(int **)(pOVar2 + 0xc) + 8))(4,&uStack_8,0,auStack_42c,0);
    DAT_00858df8 = (undefined4 *)uStack_54;
    return uStack_8;
  }
  DAT_00858df8 = (undefined4 *)uStack_54;
  iVar10 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0xa0,0,iVar3,&DAT_007a4ccc);
  if (iVar10 != 0) {
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  FUN_006a5e40(iVar3,0,0x7c70a0,0xa0);
  return 0xffffffff;
}

