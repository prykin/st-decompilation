
undefined4 * thunk_FUN_00649eb0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 auStack_58 [16];
  uint uStack_18;
  uint uStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  uVar5 = DAT_00858df8;
  puStack_c = (undefined4 *)0x0;
  puStack_8 = (undefined4 *)0x0;
  puStack_10 = (undefined4 *)0x0;
  DAT_00858df8 = &stack0xffffffa4;
  iVar2 = __setjmp3(auStack_58,0,unaff_ESI,uVar5);
  if (iVar2 == 0) {
    puStack_8 = thunk_FUN_00648400(s_Default_Arbiter_007d2988,1);
    puStack_10 = thunk_FUN_0065cd10(*(undefined4 **)((int)puStack_8 + 0x4e),&uStack_14);
    puStack_c = thunk_FUN_00648620(puStack_8,puStack_10,uStack_14,&uStack_18);
    thunk_FUN_0065d0f0((int *)&puStack_10);
    thunk_FUN_006484f0((int *)&puStack_8);
    DAT_00858df8 = (undefined1 *)uVar5;
    return puStack_c;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  thunk_FUN_0065d0f0((int *)&puStack_10);
  thunk_FUN_006484f0((int *)&puStack_8);
  thunk_FUN_006484f0((int *)&puStack_c);
  iVar3 = FUN_006ad4d0(s_E____titans_ai_ai_creat_cpp_007d2880,0x1c1,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  FUN_006a5e40(iVar2,0,0x7d2880,0x1c2);
  return (undefined4 *)0x0;
}

