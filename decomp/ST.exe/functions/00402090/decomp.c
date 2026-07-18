
int thunk_FUN_00679470(void)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar6;
  undefined4 uStack_80;
  undefined4 auStack_7c [16];
  uint auStack_3c [13];
  int iStack_8;
  
  uStack_80 = DAT_00858df8;
  DAT_00858df8 = &uStack_80;
  iVar3 = __setjmp3(auStack_7c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_80;
    iVar5 = FUN_006ad4d0(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x10e,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    FUN_006a5e40(iVar3,0,0x7d2e4c,0x10f);
    return iVar3;
  }
  if (*(int *)(iStack_8 + 0x695) == 0) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7d2e4c,0xfd);
  }
  puVar6 = auStack_3c;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  auStack_3c[0] = 0x71;
  uVar1 = *(uint *)(*(int *)(iStack_8 + 0x695) + 0xc);
  do {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      DAT_00858df8 = (undefined4 *)uStack_80;
      return 0;
    }
    iVar3 = *(int *)(iStack_8 + 0x695);
    if (((iVar3 == 0) || ((int)uVar1 < 0)) || ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar1)) {
LAB_00679519:
      iVar3 = 0;
    }
    else {
      if (uVar1 < *(uint *)(iVar3 + 0xc)) {
        piVar4 = (int *)(*(int *)(iVar3 + 8) * uVar1 + *(int *)(iVar3 + 0x1c));
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (piVar4[1] == 0) goto LAB_00679519;
      iVar3 = *piVar4;
    }
    if (iVar3 != 0) {
      if (&stack0x00000000 != (undefined1 *)0x3c) {
        thunk_FUN_0068fd00(auStack_3c);
      }
      thunk_FUN_0054cf70(DAT_00802a38,*(uint *)(iVar3 + 8));
      FUN_006b0c70(*(int *)(iStack_8 + 0x695),uVar1);
    }
  } while( true );
}

