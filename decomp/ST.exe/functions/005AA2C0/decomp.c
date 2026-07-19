
undefined4 * FUN_005aa2c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EDI;
  SpriteClassTy *this;
  undefined4 *puVar4;
  int local_8;
  
  puVar1 = FUN_006b04d0(0x20c3);
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
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)(puVar1 + 0x6ca),unaff_EDI);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)puVar1 + 0x1bb9),unaff_EDI);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)puVar1 + 0x1c4a),unaff_EDI);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)puVar1 + 0x1cdb),unaff_EDI);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)(puVar1 + 0x75b),unaff_EDI);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)puVar1 + 0x1dfd),unaff_EDI);
    *puVar1 = &PTR_LAB_0079c02c;
    *(undefined4 *)((int)puVar1 + 0x1a6b) = 1;
    *(undefined1 *)((int)puVar1 + 0x65) = 1;
    *(undefined1 *)((int)puVar1 + 0x1a61) = 0;
    *(undefined1 *)((int)puVar1 + 0x1a5f) = 0;
    *(undefined1 *)(puVar1 + 0x698) = 0;
    *(undefined1 *)((int)puVar1 + 0x1a62) = 1;
    *(undefined4 *)((int)puVar1 + 0x1f2f) = 0;
    *(undefined4 *)((int)puVar1 + 0x1f23) = 0;
    *(undefined4 *)((int)puVar1 + 0x1f27) = 0;
    *(undefined4 *)((int)puVar1 + 0x1f2b) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a67) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a7f) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a7b) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a77) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a73) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a6f) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a8b) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a87) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a83) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a8f) = 0xffffffff;
    *(undefined4 *)((int)puVar1 + 0x1a93) = 9;
    *(undefined4 *)((int)puVar1 + 0x1a97) = 0;
    *(undefined4 *)((int)puVar1 + 0x1aab) = 0;
    *(undefined4 *)((int)puVar1 + 0x1ab3) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a9b) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a9f) = 0;
    *(undefined4 *)((int)puVar1 + 0x1aa3) = 0;
    *(undefined4 *)((int)puVar1 + 0x1ab7) = 0;
    puVar1[0x6af] = 0xffffffff;
    puVar1[0x6b0] = 0;
    *(undefined1 *)((int)puVar1 + 0x1abb) = 0;
    puVar1[0x6b9] = 0;
    puVar1[0x6b8] = 0;
    puVar1[0x6b7] = 0;
    puVar1[0x6b6] = 0;
    puVar1[0x6b4] = 0;
    puVar1[0x6b5] = 0;
    puVar1[0x6b3] = 0;
    puVar1[0x6b2] = 0;
    puVar1[0x6b1] = 0;
    puVar1[0x6c1] = 0;
    puVar1[0x6c0] = 0;
    puVar1[0x6bf] = 0;
    puVar1[0x6be] = 0;
    puVar1[0x6bd] = 0;
    puVar1[0x6bc] = 0;
    puVar1[0x6bb] = 0;
    puVar1[0x6ba] = 0;
    puVar1[0x6c2] = 0;
    puVar1[0x6c3] = 0;
    *(undefined4 *)((int)puVar1 + 0x1e9a) = 0;
    *(undefined4 *)((int)puVar1 + 0x1e96) = 0;
    *(undefined4 *)((int)puVar1 + 0x1e92) = 0;
    *(undefined4 *)((int)puVar1 + 0x1e8e) = 0;
    puVar1[0x6c9] = 0;
    puVar1[0x6c8] = 0;
    puVar1[0x6c7] = 0;
    puVar1[0x6c6] = 0;
    puVar1[0x6c5] = 0;
    puVar1[0x6c4] = 0;
    *(undefined4 *)((int)puVar1 + 0x1ea2) = 0;
    *(undefined4 *)((int)puVar1 + 0x1e9e) = 0;
    *(undefined4 *)((int)puVar1 + 0x1eaa) = 0;
    *(undefined4 *)((int)puVar1 + 0x1ea6) = 0;
    *(undefined4 *)((int)puVar1 + 0x1eae) = 0;
    *(undefined4 *)((int)puVar1 + 0x1ed7) = 0;
    *(undefined4 *)((int)puVar1 + 0x1ed3) = 0;
    *(undefined4 *)((int)puVar1 + 0x1eba) = 0;
    *(undefined4 *)((int)puVar1 + 0x1eb6) = 0;
    *(undefined4 *)((int)puVar1 + 0x1ebe) = 0;
    *(undefined4 *)((int)puVar1 + 0x1ec2) = 0x100;
    *(undefined4 *)((int)puVar1 + 0x1ece) = 0;
    *(undefined4 *)((int)puVar1 + 0x1edb) = 0;
    *(undefined4 *)((int)puVar1 + 0x1ee3) = 0;
    *(undefined4 *)((int)puVar1 + 0x1edf) = 0;
    puVar3 = (undefined4 *)((int)puVar1 + 0x1ee7);
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)((int)puVar1 + 0x1fb3) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

