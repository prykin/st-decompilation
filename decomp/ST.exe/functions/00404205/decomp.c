
undefined4 * thunk_FUN_0065d120(void)

{
  int iVar1;
  uint *puVar2;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 auStack_48 [16];
  undefined4 *puStack_8;
  
  uVar3 = DAT_00858df8;
  puStack_8 = (undefined4 *)0x0;
  DAT_00858df8 = &stack0xffffffb4;
  iVar1 = __setjmp3(auStack_48,0,unaff_ESI,uVar3);
  if (iVar1 == 0) {
    puStack_8 = FUN_006aac10(0x1b);
    *(undefined1 *)puStack_8 = 0;
    *(undefined2 *)((int)puStack_8 + 9) = 0xffff;
    puVar2 = FUN_006ae290((uint *)0x0,5,2,5);
    *(uint **)((int)puStack_8 + 0xf) = puVar2;
    DAT_00858df8 = (undefined1 *)uVar3;
    return puStack_8;
  }
  DAT_00858df8 = (undefined1 *)uVar3;
  thunk_FUN_0065d1f0((int *)&puStack_8);
  FUN_006a5e40(iVar1,0,0x7d2b4c,0xb7);
  return (undefined4 *)0x0;
}

