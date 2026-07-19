
undefined4 * FUN_005ead30(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EDI;
  SpriteClassTy *this;
  undefined4 *puVar4;
  int local_8;
  
  puVar1 = FUN_006b04d0(0x1b04);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_006e5fb0(puVar1);
    *puVar1 = &PTR_FUN_0079c018;
    puVar1[6] = 0;
    *(undefined4 *)((int)puVar1 + 0x5d) = 0;
    puVar3 = (undefined4 *)((int)puVar1 + 0x1d);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    puVar3 = (undefined4 *)((int)puVar1 + 0x3d);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    DAT_0080879c = 0;
    this = (SpriteClassTy *)(puVar1 + 0x5d);
    local_8 = 0xd;
    do {
      SpriteClassTy::SpriteClassTy(this + -1,unaff_EDI);
      SpriteClassTy::SpriteClassTy(this,unaff_EDI);
      SpriteClassTy::SpriteClassTy(this + 1,unaff_EDI);
      this = (SpriteClassTy *)&this[3].field_0048;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    *puVar1 = &MMObjTyVTable;
    *(undefined1 *)((int)puVar1 + 0x65) = 2;
    *(undefined1 *)((int)puVar1 + 0x9a) = 0;
    puVar3 = (undefined4 *)((int)puVar1 + 0x66);
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_8 = 0xd;
    puVar3 = puVar1 + 0x2f;
    do {
      puVar4 = puVar3;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = 0;
      *(undefined1 *)((int)puVar4 + 2) = 0;
      local_8 = local_8 + -1;
      puVar3 = (undefined4 *)((int)puVar3 + 0x1fb);
    } while (local_8 != 0);
    puVar1[0x698] = 1;
    puVar1[0x699] = 1;
    puVar1[0x69a] = 1;
    *puVar1 = &PTR_LAB_0079c24c;
    *(undefined1 *)(puVar1 + 0x69d) = 0;
    puVar1[0x69b] = 0;
    puVar1[0x69c] = 0;
    *(undefined1 *)((int)puVar1 + 0x1a75) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a87) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a8b) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a8f) = 0xffffffff;
    *(undefined1 *)((int)puVar1 + 0x1a93) = 0;
    *(undefined1 *)((int)puVar1 + 0x1a76) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a77) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a7b) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a83) = 0;
    puVar3 = puVar1 + 0x6a5;
    for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    puVar1[0x6bc] = 0;
    puVar1[0x6bd] = 0;
    puVar1[0x6bb] = 0;
    puVar1[0x6c0] = 0;
    puVar1[0x6bf] = 0;
    puVar1[0x6be] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

