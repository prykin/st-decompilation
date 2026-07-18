
int thunk_FUN_00647dc0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 *puVar4;
  void *unaff_EDI;
  undefined4 *puVar5;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (iStack_8 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)(iStack_8 + 0x5d3);
    }
    puVar4 = param_1;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    *(undefined1 *)(iStack_8 + 0x5d8) = 1;
    thunk_FUN_0064cd80((int *)(*(int *)(iStack_8 + 0x619) + 0x84 + (int)param_1));
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  thunk_FUN_00647ed0(iStack_8);
  iVar3 = FUN_006ad4d0(s_E____titans_ai_ai_boss_cpp_007d2750,0x29,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7d2750,0x2a);
  return iVar2;
}

