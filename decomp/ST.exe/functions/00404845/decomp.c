
undefined4 * thunk_FUN_00555fe0(uint *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  int iStack_14;
  uint uStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x0;
  puStack_c = (undefined4 *)0x0;
  uStack_10 = 0;
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  iVar2 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  uVar6 = uStack_10;
  if (iVar2 == 0) {
    *param_1 = uStack_10 + 0x5d;
    puStack_8 = FUN_006aac10(uStack_10 + 0x5d);
    *puStack_8 = 0x46;
    puStack_8[1] = 0xff;
    puStack_8[2] = 2;
    puStack_8[5] = 1;
    puStack_8[6] = *(undefined4 *)(iStack_14 + 0x1c);
    *(bool *)(puStack_8 + 7) = puStack_c != (undefined4 *)0x0;
    if (puStack_c != (undefined4 *)0x0) {
      puVar4 = puStack_c;
      puVar7 = puStack_8 + 0x17;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_006ab060(&puStack_c);
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    return puStack_8;
  }
  DAT_00858df8 = (undefined4 *)uStack_58;
  if (puStack_8 != (undefined4 *)0x0) {
    FUN_006ab060(&puStack_8);
  }
  if (puStack_c != (undefined4 *)0x0) {
    FUN_006ab060(&puStack_c);
  }
  iVar3 = FUN_006ad4d0(s_E____titans_grig_traks_cpp_007c9104,0xed,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  FUN_006a5e40(iVar2,0,0x7c9104,0xee);
  return (undefined4 *)0x0;
}

