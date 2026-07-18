
undefined4 * __cdecl
thunk_FUN_00668180(char *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined1 param_5)

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
    puStack_8 = FUN_006aac10(0x260);
    *puStack_8 = 900;
    puStack_8[5] = 0x260;
    *(undefined1 *)(puStack_8 + 6) = 2;
    _strncpy((char *)((int)puStack_8 + 0x1b),param_1,0x3f);
    *(undefined2 *)((int)puStack_8 + 0x19) = param_2;
    *(undefined2 *)((int)puStack_8 + 0x5b) = param_3;
    *(undefined2 *)((int)puStack_8 + 0x5f) = param_4;
    *(undefined1 *)((int)puStack_8 + 0x61) = param_5;
    *(undefined4 *)((int)puStack_8 + 0x23f) = 0x3fffffff;
    if (*(int *)((int)puStack_8 + 0x1eb) == 0) {
      puVar2 = FUN_006ae290((uint *)0x0,10,0x2c,10);
      *(uint **)((int)puStack_8 + 0x1eb) = puVar2;
    }
    if (*(int *)((int)puStack_8 + 0x203) == 0) {
      puVar2 = FUN_006ae290((uint *)0x0,10,0x14,10);
      *(uint **)((int)puStack_8 + 0x203) = puVar2;
    }
    if (*(int *)((int)puStack_8 + 0x20f) == 0) {
      puVar2 = FUN_006ae290((uint *)0x0,10,0xc,10);
      *(uint **)((int)puStack_8 + 0x20f) = puVar2;
    }
    DAT_00858df8 = (undefined1 *)uVar3;
    return puStack_8;
  }
  DAT_00858df8 = (undefined1 *)uVar3;
  thunk_FUN_006686c0((int *)&puStack_8);
  FUN_006a5e40(iVar1,0,0x7d2cc0,0x2a);
  return (undefined4 *)0x0;
}

