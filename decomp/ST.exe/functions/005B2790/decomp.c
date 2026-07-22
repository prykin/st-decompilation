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
  int local_8;

  this = (ChooseMapTy *)FUN_006b04d0(0x20c4);
  if (this != (ChooseMapTy *)0x0) {
    sub_006E5FB0(this);
    this->field_0000 = (AnonPointee_ChooseMapTy_0000 *)&VTable_0079C018;
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
    this->field_0000 = (AnonPointee_ChooseMapTy_0000 *)&MMObjTyVTable;
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
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1A70);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1B01);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1B92);
    this->field_0000 = (AnonPointee_ChooseMapTy_0000 *)&VTable_0079C088;
    this->field_1A60 = 1;
    this->field_1A6C = 0;
    puVar2 = &this->field_1C23;
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
    this->field_1C87 = 0xffffffff;
    this->field_1C7B = (AnonPointee_ChooseMapTy_1C7B *)0x0;
    this->field_1C7F = (ushort *)0x0;
    this->field_1C97 = (DArrayTy *)0x0;
    this->field_1C9B = (DArrayTy *)0x0;
    this->field_1C9F = (DArrayTy *)0x0;
    this->field_1C8F = (HANDLE)0x0;
    this->field_1C93 = 0;
    this->field_20C0 = (HoloTy *)0x0;
    this->field_20BC = (HoloTy *)0x0;
    this->field_20B8 = (HoloTy *)0x0;
    this->field_1A64 = 0;
    this->field_1A68 = 0;
    this->field_1C83 = 0;
    this->field_1C8B = (AnonPointee_ChooseMapTy_1C8B *)0x0;
    return this;
  }
  return (ChooseMapTy *)0x0;
}

