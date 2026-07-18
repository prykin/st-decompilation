
int FUN_00679300(byte *param_1)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar7;
  undefined4 local_80;
  undefined4 local_7c [16];
  uint local_3c [13];
  void *local_8;
  
  local_80 = DAT_00858df8;
  DAT_00858df8 = &local_80;
  iVar3 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
  pvVar2 = local_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_80;
    iVar6 = FUN_006ad4d0(s_E____titans_ai_ai_plr_cpp_007d2e4c,0xf1,0,iVar3,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar3,0,0x7d2e4c,0xf2);
      return iVar3;
    }
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  uVar4 = thunk_FUN_00678e00(local_8,param_1);
  if ((int)uVar4 < 0) {
    DAT_00858df8 = (undefined4 *)local_80;
    return 0;
  }
  iVar3 = *(int *)((int)pvVar2 + 0x695);
  if ((iVar3 != 0) && ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc))) {
    if (uVar4 < *(uint *)(iVar3 + 0xc)) {
      piVar5 = (int *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
    }
    else {
      piVar5 = (int *)0x0;
    }
    if (piVar5[1] != 0) {
      iVar3 = *piVar5;
      goto LAB_00679378;
    }
  }
  iVar3 = 0;
LAB_00679378:
  if (iVar3 != 0) {
    puVar7 = local_3c;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_3c[0] = 0x71;
    if (&stack0x00000000 != (undefined1 *)0x3c) {
      thunk_FUN_0068fd00(local_3c);
    }
    thunk_FUN_0054cf70(DAT_00802a38,*(uint *)(iVar3 + 8));
    FUN_006b0c70(*(int *)((int)local_8 + 0x695),uVar4);
  }
  DAT_00858df8 = (undefined4 *)local_80;
  return 0;
}

