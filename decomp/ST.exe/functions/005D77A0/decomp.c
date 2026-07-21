
undefined4 * FUN_005d77a0(void)

{
  undefined4 *this;
  int iVar1;
  undefined4 *puVar2;
  SpriteClassTy *this_00;
  undefined4 *puVar3;
  int local_8;

  this = FUN_006b04d0(0x21fc);
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
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)this + 0x1c6b));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)(this + 0x73f));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)this + 0x1d8d));
    *(undefined4 *)((int)this + 0x1c5f) = 0;
    *(undefined4 *)((int)this + 0x1c63) = 0;
    *(undefined4 *)((int)this + 0x1e27) = 0;
    *(undefined4 *)((int)this + 0x1e2b) = 0;
    *(undefined4 *)((int)this + 0x21e1) = 0;
    *(undefined2 *)((int)this + 0x21e5) = 0;
    *(undefined1 *)((int)this + 0x21e7) = 0;
    puVar2 = (undefined4 *)((int)this + 0x2161);
    for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)((int)this + 0x1e2f) = 0;
    *(undefined4 *)((int)this + 0x1f43) = 0;
    *(undefined4 *)((int)this + 7999) = 0;
    *(undefined4 *)((int)this + 0x1f4f) = 0;
    *(undefined4 *)((int)this + 0x1f4b) = 0;
    this[0x7e1] = 0;
    puVar2 = this + 0x7e3;
    for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)((int)this + 0x211d) = 0;
    this[0x7e2] = 0;
    puVar2 = this + 0x833;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
    puVar2 = this + 0x83d;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)((int)this + 0x1e1e) = 0;
    *(undefined4 *)((int)this + 0x1e22) = 0xffffffff;
    puVar2 = (undefined4 *)((int)this + 0x2125);
    for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)((int)this + 0x215d) = 0;
    this[0x87e] = 0;
    this[0x87d] = 0;
    this[0x87c] = 0;
    this[0x87b] = 0;
    this[0x87a] = 0;
    this[0x7e0] = 0xffffffff;
    *(undefined4 *)((int)this + 0x1c67) = 0;
    *(undefined4 *)((int)this + 0x1f47) = 0;
    this[0x7df] = 0;
    puVar2 = this + 0x7d8;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this[0x7d6] = 0;
    *(undefined1 *)((int)this + 0x1f57) = 1;
    *(undefined1 *)((int)this + 0x1f5d) = 1;
    *(undefined1 *)((int)this + 0x1f5e) = 1;
    *(undefined1 *)((int)this + 0x1f5f) = 1;
    *(undefined1 *)(this + 0x7d7) = 4;
    *this = &VTable_0079C160;
    return this;
  }
  return (undefined4 *)0x0;
}

