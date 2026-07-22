#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x030D (ST_OBJECT_WAIT).
   Evidence: registry[50] at 007CA8B0 stores type 0x030D and executable pointer 00405268; allocation
   size 6916 uniquely matches /WaitTy; calls base/helper constructor(s) SpriteClassTy; exact derived
   allocation size wins */

WaitTy * __cdecl CreateWait(void)

{
  WaitTy *this;
  int iVar1;
  undefined4 *puVar2;
  SpriteClassTy *this_00;
  undefined4 *puVar3;
  int local_8;

  this = (WaitTy *)FUN_006b04d0(0x1b04);
  if (this != (WaitTy *)0x0) {
    sub_006E5FB0(this);
    this->field_0000 = (AnonPointee_WaitTy_0000 *)&VTable_0079C018;
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
    this->field_0000 = (AnonPointee_WaitTy_0000 *)&MMObjTyVTable;
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
    this->field_1A60 = 1;
    this->field_1A64 = 1;
    this->field_1A68 = 1;
    this->field_0000 = (AnonPointee_WaitTy_0000 *)&VTable_0079C24C;
    this->field_1A74 = 0;
    this->field_1A6C = 0;
    this->field_1A70 = 0;
    this->field_1A75 = 0;
    this->field_1A87 = 0;
    this->field_1A8B = 0;
    this->field_1A8F = 0xffffffff;
    this->field_1A93 = 0;
    this->field_1A76 = 0;
    this->field_1A77 = 0;
    this->field_1A7B = 0;
    this->field_1A83 = (byte *)0x0;
    puVar2 = &this->field_1A94;
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
    this->field_1AF0 = (DArrayTy *)0x0;
    this->field_1AF4 = 0;
    this->field_1AEC = (ushort *)0x0;
    this->field_1B00 = (HoloTy *)0x0;
    this->field_1AFC = (HoloTy *)0x0;
    this->field_1AF8 = (HoloTy *)0x0;
    return this;
  }
  return (WaitTy *)0x0;
}

