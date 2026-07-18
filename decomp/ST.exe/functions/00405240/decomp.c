
undefined4 thunk_FUN_004ac1a0(byte param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  uint uStack_c;
  uint uStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_Tspr3d_cpp_007ac638,0xf1,0,iVar2,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    return 0xffffffff;
  }
  if (*(int *)(uStack_8 + 0x18) == -1) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0xce);
  }
  if (((char)param_1 < '\0') || (*(int *)(uStack_8 + 0x14) + -1 < (int)(char)param_1)) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0xcf);
  }
  uVar6 = (uint)(char)param_1;
  iVar2 = uVar6 * 0x24;
  if (*(int *)(*(int *)(uStack_8 + 0x20) + iVar2) == 0) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0xd0);
  }
  uStack_c = 1 << (param_1 & 0x1f);
  if ((*(uint *)(uStack_8 + 0x1c) & uStack_c) != 0) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0xd1);
  }
  FUN_006e9cb0(*(void **)(uStack_8 + 0x3c),*(uint **)(uStack_8 + 0x18),uVar6);
  *(uint *)(uStack_8 + 0x1c) = *(uint *)(uStack_8 + 0x1c) | uStack_c;
  iVar3 = *(int *)(uStack_8 + 0x20) + iVar2;
  if (*(int *)(iVar3 + 0x20) == 0) {
    FUN_006ea270(*(void **)(uStack_8 + 0x3c),*(uint *)(uStack_8 + 0x18),uVar6,
                 *(uint *)(iVar3 + 0x18));
  }
  else {
    FUN_006e9d40(*(void **)(uStack_8 + 0x3c),*(uint **)(uStack_8 + 0x18),uVar6);
  }
  if (*(char *)(uStack_8 + 0x12) == '\0') {
    FUN_006eaaa0(*(void **)(uStack_8 + 0x3c),*(uint *)(uStack_8 + 0x18),0);
  }
  if (*(char *)(uStack_8 + 0x11) == '\0') {
    if (*(char *)(uStack_8 + 0x10) == '\0') {
      if (*(int *)(*(int *)(*(int *)(uStack_8 + 0x20) + iVar2) + 0x29) == 0) goto LAB_004ac330;
      *(byte *)(uStack_8 + 0x13) = param_1;
      *(undefined4 *)(uStack_8 + 0x30) = *(undefined4 *)(*(int *)(uStack_8 + 0x20) + iVar2 + 0x18);
      puVar7 = &LAB_00404999;
    }
    else {
      if ((*(int *)(uStack_8 + 0x38) == 0) ||
         (piVar4 = (int *)(*(int *)(uStack_8 + 0x20) + iVar2), *(int *)(*piVar4 + 0x29) == 0))
      goto LAB_004ac330;
      *(byte *)(uStack_8 + 0x13) = param_1;
      *(int *)(uStack_8 + 0x30) = piVar4[6];
      puVar7 = &LAB_00405b64;
    }
    FUN_006e9520(*(void **)(uStack_8 + 0x3c),*(uint *)(uStack_8 + 0x18),*(uint *)(uStack_8 + 0x34),
                 (uint)puVar7,uStack_8);
  }
LAB_004ac330:
  *(undefined4 *)(*(int *)(uStack_8 + 0x20) + 0x1c + iVar2) = param_2;
  DAT_00858df8 = (undefined4 *)uStack_50;
  return 0;
}

