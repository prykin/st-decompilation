
undefined4 * __cdecl thunk_FUN_0065c9e0(char *param_1)

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
    puStack_8 = FUN_006aac10(0x49f);
    *(undefined4 *)((int)puStack_8 + 1) = 0x49f;
    *(undefined1 *)((int)puStack_8 + 5) = 2;
    _strncpy((char *)((int)puStack_8 + 6),param_1,0x3f);
    puVar2 = FUN_006b54f0((uint *)0x0,5,5);
    *(uint **)((int)puStack_8 + 0x456) = puVar2;
    puVar2 = FUN_006ae290((uint *)0x0,5,0x1b,5);
    *(uint **)((int)puStack_8 + 0x462) = puVar2;
    thunk_FUN_0064a6f0((int *)((int)puStack_8 + 0x46e),10);
    DAT_00858df8 = (undefined1 *)uVar3;
    return puStack_8;
  }
  DAT_00858df8 = (undefined1 *)uVar3;
  thunk_FUN_0065d0f0((int *)&puStack_8);
  FUN_006a5e40(iVar1,0,0x7d2b4c,0x21);
  return (undefined4 *)0x0;
}

