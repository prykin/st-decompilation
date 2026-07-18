
undefined4 * __cdecl thunk_FUN_00648400(char *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 auStack_48 [16];
  undefined4 *puStack_8;
  
  uVar3 = DAT_00858df8;
  puStack_8 = (undefined4 *)0x0;
  DAT_00858df8 = &stack0xffffffb4;
  iVar1 = __setjmp3(auStack_48,0,unaff_ESI,uVar3);
  if (iVar1 == 0) {
    puStack_8 = FUN_006aac10(0x85);
    *(undefined4 *)((int)puStack_8 + 1) = 0x85;
    *(undefined1 *)((int)puStack_8 + 5) = 2;
    _strncpy((char *)((int)puStack_8 + 6),param_1,0x3f);
    puVar2 = thunk_FUN_0065c9e0(param_1);
    *(undefined4 **)((int)puStack_8 + 0x4e) = puVar2;
    *(undefined4 *)((int)puStack_8 + 0x52) = param_2;
    DAT_00858df8 = (undefined1 *)uVar3;
    return puStack_8;
  }
  DAT_00858df8 = (undefined1 *)uVar3;
  thunk_FUN_006484f0((int *)&puStack_8);
  FUN_006a5e40(iVar1,0,0x7d27f4,0x20);
  return (undefined4 *)0x0;
}

