
undefined4 * FUN_005bd2e0(void)

{
  undefined4 *this;
  int iVar1;
  undefined4 *puVar2;
  SpriteClassTy *this_00;
  undefined4 *puVar3;
  int local_8;

  this = FUN_006b04d0(0x1c9e);
  if (this != (undefined4 *)0x0) {
    sub_006E5FB0(this);
    *this = &VTable_0079C018;
    this[6] = 0;
    *(undefined4 *)((int)this + 0x5d) = 0;
    puVar2 = (undefined4 *)((int)this + 0x1d);
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = (undefined4 *)((int)this + 0x3d);
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_0080879c = 0;
    this_00 = (SpriteClassTy *)(this + 0x5d);
    local_8 = 0xd;
    do {
      SpriteClassTy::SpriteClassTy(this_00 + -1);
      SpriteClassTy::SpriteClassTy(this_00);
      SpriteClassTy::SpriteClassTy(this_00 + 1);
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    *this = &MMObjTyVTable;
    *(undefined1 *)((int)this + 0x65) = 2;
    *(undefined1 *)((int)this + 0x9a) = 0;
    puVar2 = (undefined4 *)((int)this + 0x66);
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_8 = 0xd;
    puVar2 = this + 0x2f;
    do {
      puVar3 = puVar2;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      *(undefined2 *)puVar3 = 0;
      *(undefined1 *)((int)puVar3 + 2) = 0;
      local_8 = local_8 + -1;
      puVar2 = (undefined4 *)((int)puVar2 + 0x1fb);
    } while (local_8 != 0);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)this + 0x1a77));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)(this + 0x6c2));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)this + 0x1b99));
    *this = &PrividerTyVTable;
    *(undefined4 *)((int)this + 0x1a65) = 1;
    *(undefined4 *)((int)this + 0x1a73) = 0;
    *(undefined4 *)((int)this + 0x1a61) = 0;
    *(undefined1 *)((int)this + 0x1a71) = 0;
    *(undefined4 *)((int)this + 0x1a69) = 0;
    *(undefined4 *)((int)this + 0x1a6d) = 0;
    *(undefined1 *)((int)this + 0x1a72) = 0;
    puVar2 = (undefined4 *)((int)this + 0x1c2a);
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)((int)this + 0x1c8a) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1c82) = 0;
    *(undefined4 *)((int)this + 0x1c86) = 0;
    *(undefined4 *)((int)this + 0x1c8e) = 0;
    *(undefined4 *)((int)this + 0x1c92) = 0;
    *(undefined4 *)((int)this + 0x1c9a) = 0;
    *(undefined4 *)((int)this + 0x1c96) = 0;
    return this;
  }
  return (undefined4 *)0x0;
}

