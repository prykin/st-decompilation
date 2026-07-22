#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x030A (ST_OBJECT_PRIVIDER).
   Evidence: registry[48] at 007CA8A0 stores type 0x030A and executable pointer 004051A0; allocation
   size 7326 uniquely matches /PrividerTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

PrividerTy * __cdecl CreatePrivider(void)

{
  PrividerTy *this;
  int iVar1;
  undefined4 *puVar2;
  SpriteClassTy *this_00;
  undefined4 *puVar3;
  int local_8;

  this = (PrividerTy *)FUN_006b04d0(0x1c9e);
  if (this != (PrividerTy *)0x0) {
    sub_006E5FB0(this);
    this->vtable = (PrividerTyVTable *)&VTable_0079C018;
    *(undefined4 *)&this->field_0x18 = 0;
    this->field_005D = (ushort *)0x0;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    DAT_0080879c = 0;
    this_00 = (SpriteClassTy *)&this->field_0x174;
    local_8 = 0xd;
    do {
      SpriteClassTy::SpriteClassTy(this_00 + -1);
      SpriteClassTy::SpriteClassTy(this_00);
      SpriteClassTy::SpriteClassTy(this_00 + 1);
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    this->vtable = (PrividerTyVTable *)&MMObjTyVTable;
    this->field_0065 = 2;
    this->field_0x9a = 0;
    memset(&this->field_0x66, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_8 = 0xd;
    puVar2 = (undefined4 *)&this->field_0xbc;
    do {
      puVar3 = puVar2;
      memset(puVar3, 0, 0x26); /* compiler bulk-zero initialization */
      puVar3 = (undefined4 *)((byte *)puVar3 + 0x24);
      iVar1 = 0;
      *(undefined1 *)((int)puVar3 + 2) = 0;
      local_8 = local_8 + -1;
      puVar2 = (undefined4 *)((int)puVar2 + 0x1fb);
    } while (local_8 != 0);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1A77);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1B08);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1B99);
    this->vtable = &PrividerTyVTable;
    *(undefined4 *)&this->field_0x1a65 = 1;
    this->field_1A73 = 0;
    this->field_1A61 = 0;
    this->field_1A71 = 0;
    this->field_1A69 = 0;
    this->field_1A6D = 0;
    this->field_1A72 = 0;
    puVar2 = &this->field_1C2A;
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
    this->field_1C8A = 0xffffffff;
    this->field_1C82 = (ushort *)0x0;
    this->field_1C86 = 0;
    this->field_1C8E = (AnonPointee_PrividerTy_1C8E *)0x0;
    this->field_1C92 = (uint *)0x0;
    this->field_1C9A = (HoloTy *)0x0;
    this->field_1C96 = (HoloTy *)0x0;
    return this;
  }
  return (PrividerTy *)0x0;
}

