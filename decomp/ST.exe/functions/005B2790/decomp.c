#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0305 (ST_OBJECT_CHOOSE_MAP).
   Evidence: registry[42] at 007CA870 stores type 0x0305 and executable pointer 00405C8B; allocation
   size 8388 uniquely matches /ChooseMapTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

ChooseMapTy * __cdecl CreateChooseMap(void)

{
  ChooseMapTy *this;
  int iVar1;
  undefined4 *puVar2;
  SpriteClassTy *this_00;
  undefined4 *puVar3;
  uint *puVar4;
  int local_8;

  this = (ChooseMapTy *)FUN_006b04d0(0x20c4);
  if (this != nullptr) {
    sub_006E5FB0(this);
    this->vtable = (ChooseMapTyVTable *)&VTable_0079C018;
    this->field_0018 = 0;
    this->field_005D = nullptr;
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
    this->vtable = (ChooseMapTyVTable *)&MMObjTyVTable;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(&this->field_0x66, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_8 = 0xd;
    puVar2 = (undefined4 *)&this->field_0xbc;
    do {
      puVar3 = puVar2;
      memset(puVar3, 0, 0x27); /* compiler bulk-zero initialization */
      puVar3 = (undefined4 *)((byte *)puVar3 + 0x24);
      iVar1 = 0;
      local_8 = local_8 + -1;
      puVar2 = (undefined4 *)((int)puVar2 + 0x1fb);
    } while (local_8 != 0);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1A70);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1B01);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1B92);
    this->vtable = &ChooseMapTyVTable;
    this->field_1A60 = 1;
    this->field_1A6C = 0;
    puVar4 = &this->field_1C23;
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    this->field_1C87 = 0xffffffff;
    this->field_1C7B = nullptr;
    this->field_1C7F = nullptr;
    this->field_1C97 = nullptr;
    this->field_1C9B = nullptr;
    this->field_1C9F = nullptr;
    this->field_1C8F = (HANDLE)0x0;
    this->field_1C93 = 0;
    this->field_20C0 = nullptr;
    this->field_20BC = nullptr;
    this->field_20B8 = nullptr;
    this->field_1A64 = 0;
    this->field_1A68 = 0;
    this->field_1C83 = 0;
    this->field_1C8B = nullptr;
    return this;
  }
  return nullptr;
}

