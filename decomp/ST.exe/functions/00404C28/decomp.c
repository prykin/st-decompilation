
undefined4 * __cdecl thunk_FUN_00648530(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar3;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x0;
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar1 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    puStack_8 = FUN_006aac10(0x85);
    puVar2 = param_1;
    puVar3 = puStack_8;
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
    *(undefined4 *)((int)puStack_8 + 1) = 0x85;
    *(undefined1 *)((int)puStack_8 + 5) = 2;
    puVar2 = thunk_FUN_0065cb00((undefined4 *)
                                (*(int *)((int)puStack_8 + 0x46) + 0x84 + (int)param_1));
    *(undefined4 **)((int)puStack_8 + 0x4e) = puVar2;
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return puStack_8;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  thunk_FUN_006484f0((int *)&puStack_8);
  FUN_006a5e40(iVar1,0,0x7d27f4,0x45);
  return (undefined4 *)0x0;
}

