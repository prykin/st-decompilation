#include "../../pseudocode_runtime.h"


undefined4 * FUN_005b2790(void)

{
  undefined4 *this;
  int iVar1;
  undefined4 *puVar2;
  SpriteClassTy *this_00;
  undefined4 *puVar3;
  int local_8;

  this = FUN_006b04d0(0x20c4);
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
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)(this + 0x69c));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)this + 0x1b01));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)this + 0x1b92));
    *this = &VTable_0079C088;
    this[0x698] = 1;
    this[0x69b] = 0;
    puVar2 = (undefined4 *)((int)this + 0x1c23);
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)((int)this + 0x1c87) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1c7b) = 0;
    *(undefined4 *)((int)this + 0x1c7f) = 0;
    *(undefined4 *)((int)this + 0x1c97) = 0;
    *(undefined4 *)((int)this + 0x1c9b) = 0;
    *(undefined4 *)((int)this + 0x1c9f) = 0;
    *(undefined4 *)((int)this + 0x1c8f) = 0;
    *(undefined4 *)((int)this + 0x1c93) = 0;
    this[0x830] = 0;
    this[0x82f] = 0;
    this[0x82e] = 0;
    this[0x699] = 0;
    this[0x69a] = 0;
    *(undefined4 *)((int)this + 0x1c83) = 0;
    *(undefined4 *)((int)this + 0x1c8b) = 0;
    return this;
  }
  return (undefined4 *)0x0;
}

