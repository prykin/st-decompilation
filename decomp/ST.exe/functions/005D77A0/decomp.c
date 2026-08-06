#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0306 (ST_OBJECT_SETT_MAP).
   Evidence: registry[43] at 007CA878 stores type 0x0306 and executable pointer 00405745; allocation
   size 8700 uniquely matches /SettMapTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

SettMapTy * __cdecl CreateSettMap(void)

{
  SettMapTy *this;
  int iVar1;
  undefined4 *puVar2;
  SpriteClassTy *this_00;
  undefined4 *puVar3;
  void **ppvVar4;
  uint *puVar5;
  int local_8;

  this = (SettMapTy *)FUN_006b04d0(0x21fc);
  if (this != nullptr) {
    sub_006E5FB0(this);
    this->vtable = (SettMapTyVTable *)&VTable_0079C018;
    this->field_0018 = 0;
    this->field_005D = 0;
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
    this->vtable = (SettMapTyVTable *)&MMObjTyVTable;
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
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_0x1c6b);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_0x1cfc);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_0x1d8d);
    this->field_1C5F = 0;
    this->field_1C63 = 0;
    this->field_1E27 = 0;
    this->field_1E2B = nullptr;
    *(undefined4 *)&this->field_0x21e1 = 0;
    *(undefined2 *)&this->field_0x21e5 = 0;
    this->field_21E7 = 0;
    memset(&this->field_0x2161, 0, 0x80); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_1E2F = nullptr;
    this->field_1F43 = nullptr;
    this->field_1F3F = nullptr;
    this->field_1F4F = nullptr;
    this->field_1F4B = 0;
    this->field_1F84 = nullptr;
    memset(&this->field_1F8C, 0, 0x140); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_211D = 0;
    this->field_1F88 = 0;
    puVar5 = this->field_20CC;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    ppvVar4 = this->field_20F4;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppvVar4 = nullptr;
      ppvVar4 = ppvVar4 + 1;
    }
    this->field_1E1E = 0;
    this->field_1E22 = 0xffffffff;
    memset(this->field_2125, 0, 0x38); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_215D = 0;
    this->field_21F8 = nullptr;
    this->field_21F4 = nullptr;
    this->field_21F0 = nullptr;
    this->field_21EC = nullptr;
    this->field_21E8 = nullptr;
    this->field_1F80 = 0xffffffff;
    this->field_1C67 = 0;
    this->field_1F47 = 0;
    this->field_1F7C = nullptr;
    memset(this->field_1F60, 0, 0x1c); /* compiler bulk-zero initialization */
    this->field_1F58 = 0;
    this->field_1F57 = 1;
    this->field_1F5D = 1;
    this->field_1F5E = 1;
    this->field_1F5F = 1;
    this->field_1F5C = 4;
    this->vtable = &SettMapTyVTable;
    return this;
  }
  return nullptr;
}

