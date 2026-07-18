
undefined4 * thunk_FUN_00647ef0(uint *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 auStack_54 [16];
  int iStack_14;
  uint uStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  uVar5 = DAT_00858df8;
  puStack_c = (undefined4 *)0x0;
  puStack_8 = (undefined4 *)0x0;
  DAT_00858df8 = &stack0xffffffa8;
  iVar2 = __setjmp3(auStack_54,0,unaff_ESI,uVar5);
  if (iVar2 == 0) {
    puStack_8 = thunk_FUN_0064d000(&uStack_10);
    if (iStack_14 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)(iStack_14 + 0x5d3);
    }
    puStack_c = thunk_FUN_00648620(puVar4,puStack_8,uStack_10,param_1);
    *(undefined1 *)puStack_c = 1;
    if (puStack_8 != (undefined4 *)0x0) {
      FUN_006ab060(&puStack_8);
    }
    DAT_00858df8 = (undefined1 *)uVar5;
    return puStack_c;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  if (puStack_8 != (undefined4 *)0x0) {
    FUN_006ab060(&puStack_8);
  }
  if (puStack_c != (undefined4 *)0x0) {
    FUN_006ab060(&puStack_c);
  }
  iVar3 = FUN_006ad4d0(s_E____titans_ai_ai_boss_cpp_007d2750,0x4c,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  FUN_006a5e40(iVar2,0,0x7d2750,0x4d);
  return (undefined4 *)0x0;
}

