#include "../../pseudocode_runtime.h"


undefined4 * FUN_005aa2c0(void)

{
  undefined4 *this;
  int iVar1;
  undefined4 *puVar2;
  SpriteClassTy *this_00;
  undefined4 *puVar3;
  int local_8;

  this = FUN_006b04d0(0x20c3);
  if (this != (undefined4 *)0x0) {
    sub_006E5FB0(this);
    *this = &VTable_0079C018;
    this[6] = 0;
    *(undefined4 *)((int)this + 0x5d) = 0;
    memset((void *)((int)this + 0x1d), 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset((void *)((int)this + 0x3d), 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
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
    memset((void *)((int)this + 0x66), 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_8 = 0xd;
    puVar2 = this + 0x2f;
    do {
      puVar3 = puVar2;
      memset(puVar3, 0, 0x26); /* compiler bulk-zero initialization */
      puVar3 = (undefined4 *)((byte *)puVar3 + 0x24);
      iVar1 = 0;
      *(undefined1 *)((int)puVar3 + 2) = 0;
      local_8 = local_8 + -1;
      puVar2 = (undefined4 *)((int)puVar2 + 0x1fb);
    } while (local_8 != 0);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)(this + 0x6ca));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)this + 0x1bb9));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)this + 0x1c4a));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)this + 0x1cdb));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)(this + 0x75b));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)this + 0x1dfd));
    *this = &VTable_0079C02C;
    *(undefined4 *)((int)this + 0x1a6b) = 1;
    *(undefined1 *)((int)this + 0x65) = 1;
    *(undefined1 *)((int)this + 0x1a61) = 0;
    *(undefined1 *)((int)this + 0x1a5f) = 0;
    *(undefined1 *)(this + 0x698) = 0;
    *(undefined1 *)((int)this + 0x1a62) = 1;
    *(undefined4 *)((int)this + 0x1f2f) = 0;
    *(undefined4 *)((int)this + 0x1f23) = 0;
    *(undefined4 *)((int)this + 0x1f27) = 0;
    *(undefined4 *)((int)this + 0x1f2b) = 0;
    *(undefined4 *)((int)this + 0x1a67) = 0;
    *(undefined4 *)((int)this + 0x1a7f) = 0;
    *(undefined4 *)((int)this + 0x1a7b) = 0;
    *(undefined4 *)((int)this + 0x1a77) = 0;
    *(undefined4 *)((int)this + 0x1a73) = 0;
    *(undefined4 *)((int)this + 0x1a6f) = 0;
    *(undefined4 *)((int)this + 0x1a8b) = 0;
    *(undefined4 *)((int)this + 0x1a87) = 0;
    *(undefined4 *)((int)this + 0x1a83) = 0;
    *(undefined4 *)((int)this + 0x1a8f) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1a93) = 9;
    *(undefined4 *)((int)this + 0x1a97) = 0;
    *(undefined4 *)((int)this + 0x1aab) = 0;
    *(undefined4 *)((int)this + 0x1ab3) = 0;
    *(undefined4 *)((int)this + 0x1a9b) = 0;
    *(undefined4 *)((int)this + 0x1a9f) = 0;
    *(undefined4 *)((int)this + 0x1aa3) = 0;
    *(undefined4 *)((int)this + 0x1ab7) = 0;
    this[0x6af] = 0xffffffff;
    this[0x6b0] = 0;
    *(undefined1 *)((int)this + 0x1abb) = 0;
    this[0x6b9] = 0;
    this[0x6b8] = 0;
    this[0x6b7] = 0;
    this[0x6b6] = 0;
    this[0x6b4] = 0;
    this[0x6b5] = 0;
    this[0x6b3] = 0;
    this[0x6b2] = 0;
    this[0x6b1] = 0;
    this[0x6c1] = 0;
    this[0x6c0] = 0;
    this[0x6bf] = 0;
    this[0x6be] = 0;
    this[0x6bd] = 0;
    this[0x6bc] = 0;
    this[0x6bb] = 0;
    this[0x6ba] = 0;
    this[0x6c2] = 0;
    this[0x6c3] = 0;
    *(undefined4 *)((int)this + 0x1e9a) = 0;
    *(undefined4 *)((int)this + 0x1e96) = 0;
    *(undefined4 *)((int)this + 0x1e92) = 0;
    *(undefined4 *)((int)this + 0x1e8e) = 0;
    this[0x6c9] = 0;
    this[0x6c8] = 0;
    this[0x6c7] = 0;
    this[0x6c6] = 0;
    this[0x6c5] = 0;
    this[0x6c4] = 0;
    *(undefined4 *)((int)this + 0x1ea2) = 0;
    *(undefined4 *)((int)this + 0x1e9e) = 0;
    *(undefined4 *)((int)this + 0x1eaa) = 0;
    *(undefined4 *)((int)this + 0x1ea6) = 0;
    *(undefined4 *)((int)this + 0x1eae) = 0;
    *(undefined4 *)((int)this + 0x1ed7) = 0;
    *(undefined4 *)((int)this + 0x1ed3) = 0;
    *(undefined4 *)((int)this + 0x1eba) = 0;
    *(undefined4 *)((int)this + 0x1eb6) = 0;
    *(undefined4 *)((int)this + 0x1ebe) = 0;
    *(undefined4 *)((int)this + 0x1ec2) = 0x100;
    *(undefined4 *)((int)this + 0x1ece) = 0;
    *(undefined4 *)((int)this + 0x1edb) = 0;
    *(undefined4 *)((int)this + 0x1ee3) = 0;
    *(undefined4 *)((int)this + 0x1edf) = 0;
    memset((void *)((int)this + 0x1ee7), 0, 0x3c); /* compiler bulk-zero initialization */
    *(undefined4 *)((int)this + 0x1fb3) = 0;
    return this;
  }
  return (undefined4 *)0x0;
}

