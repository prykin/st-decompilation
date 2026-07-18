
undefined4
FUN_0052eb50(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,
            undefined4 param_7,int param_8)

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
  uint local_42c [6];
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_2a8;
  uint local_2a4 [26];
  undefined4 local_23c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_54;
  undefined4 local_50 [16];
  int local_10;
  ushort *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar5 = local_42c;
    for (iVar2 = 0xf6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    iVar9 = 1;
    piVar8 = (int *)0x0;
    uVar7 = 0;
    local_6c = param_6;
    local_84 = *(undefined4 *)(local_10 + 8);
    local_68 = param_7;
    iVar2 = 1;
    local_42c[0] = (uint)(param_8 != 0);
    local_80 = 2;
    local_7c = param_5;
    local_2a8 = 2;
    local_42c[1] = 2;
    local_318 = 1;
    local_31c = 1;
    local_42c[3] = 2;
    local_42c[2] = local_42c[0];
    pCVar3 = thunk_FUN_00571240(s_BUT_MINUS_007c718c,0);
    pCVar3 = FUN_006f2c00(pCVar3,iVar2,uVar7);
    local_c = FUN_006f1ce0(1,pCVar3,piVar8,iVar9);
    local_414 = *(undefined4 *)(local_c + 2);
    local_410 = *(undefined4 *)(local_c + 4);
    FUN_006f20e0((uint *)&local_c);
    iVar2 = *(int *)(local_10 + 0x3c);
    local_42c[4] = iVar2 + param_3;
    iVar9 = *(int *)(local_10 + 0x5c);
    if (iVar9 == 0) {
      iVar4 = -*(int *)(local_10 + 0x48);
    }
    else {
      iVar4 = *(int *)(local_10 + 0x44);
    }
    local_3c0 = 2;
    local_42c[5] = iVar4 + param_4;
    local_3c4 = *(undefined4 *)(local_10 + 8);
    local_3bc = 0xc005;
    local_314 = 500;
    local_310 = 0x32;
    puVar5 = local_42c + 2;
    puVar6 = local_2a4;
    for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    local_2a4[2] = iVar2 + param_1;
    if (iVar9 == 0) {
      iVar2 = -*(int *)(local_10 + 0x48);
    }
    else {
      iVar2 = *(int *)(local_10 + 0x44);
    }
    local_2a4[3] = iVar2 + param_2;
    local_23c = 0xc006;
    (**(code **)(**(int **)(local_10 + 0xc) + 8))(4,&local_8,0,local_42c,0);
    DAT_00858df8 = (undefined4 *)local_54;
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  iVar9 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0xa0,0,iVar2,&DAT_007a4ccc);
  if (iVar9 != 0) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  FUN_006a5e40(iVar2,0,0x7c70a0,0xa0);
  return 0xffffffff;
}

