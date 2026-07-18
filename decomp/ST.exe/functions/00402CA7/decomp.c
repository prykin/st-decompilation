
undefined4 * __cdecl thunk_FUN_00668330(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  void *unaff_EDI;
  undefined4 *puVar6;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x0;
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar1 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    puVar2 = FUN_006aac10(0x260);
    puVar5 = param_1;
    puVar6 = puVar2;
    for (iVar1 = 0x98; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar1 = 0;
    puVar2[5] = 0x260;
    *(undefined1 *)(puVar2 + 6) = 2;
    puStack_8 = puVar2;
    do {
      if (*(int *)(iVar1 + 0x1eb + (int)puVar2) != 0) {
        uVar3 = FUN_006b0060((uint *)0x0,
                             (uint *)(*(int *)(iVar1 + 0x1ef + (int)puVar2) + 0x25f + (int)param_1))
        ;
        *(undefined4 *)(iVar1 + 0x1eb + (int)puStack_8) = uVar3;
        puVar2 = puStack_8;
      }
      iVar1 = iVar1 + 0xc;
    } while (iVar1 < 0x54);
    if (*(int *)((int)puVar2 + 0x1eb) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,0x2c,10);
      *(uint **)((int)puStack_8 + 0x1eb) = puVar4;
      puVar2 = puStack_8;
    }
    if (*(int *)((int)puVar2 + 0x203) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,0x14,10);
      *(uint **)((int)puStack_8 + 0x203) = puVar4;
      puVar2 = puStack_8;
    }
    if (*(int *)((int)puVar2 + 0x20f) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,0xc,10);
      *(uint **)((int)puStack_8 + 0x20f) = puVar4;
      puVar2 = puStack_8;
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return puVar2;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  thunk_FUN_006686c0((int *)&puStack_8);
  FUN_006a5e40(iVar1,0,0x7d2cc0,0x4e);
  return (undefined4 *)0x0;
}

