#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA88C>00402AA9

   [STObjectFactoryApplier] Central object factory for 0x0303 (ST_OBJECT_TYPE_0303).
   Evidence: registry[45] at 007CA888 stores type 0x0303 and executable pointer 00402AA9; allocation
   size 7850 has no unique current class-layout match */

MMsgTy * __cdecl CreateMMsg(void)

{
  MMsgTy *this;
  int iVar1;
  undefined4 *puVar3;
  SpriteClassTy *this_00;
  undefined4 *puVar5;

  this = (MMsgTy *)FUN_006b04d0(0x1eaa);
  if (this != nullptr) {
    sub_006E5FB0(this);
    this->vtable = (MMsgTyVTable *)&VTable_0079C018;
    this->field_0018 = 0;
    this->field_005D = 0;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    DAT_0080879c = 0;
    this_00 = (SpriteClassTy *)&this->field_0x174;
    iVar1 = 0xd;
    do {
      SpriteClassTy::SpriteClassTy(this_00 + -1);
      SpriteClassTy::SpriteClassTy(this_00);
      SpriteClassTy::SpriteClassTy(this_00 + 1);
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    this->vtable = (MMsgTyVTable *)&MMObjTyVTable;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(this->field_0066, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0xd;
    puVar3 = (undefined4 *)&this->field_0xbc;
    do {
      puVar5 = puVar3;
      memset(puVar5, 0, 0x27); /* compiler bulk-zero initialization */
      puVar5 = (undefined4 *)((byte *)puVar5 + 0x24);
      iVar1 = iVar1 + -1;
      puVar3 = (undefined4 *)((int)puVar3 + 0x1fb);
    } while (iVar1 != 0);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_0x1cf7);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1D88);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_0x1e19);
    this->vtable = &MMsgTyVTable;
    this->field_1A5F = 0;
    this->field_1CAA = 0;
    this->field_1CA9 = 0;
    this->field_1CAB = 0;
    memset(&this->field_0x1c82, 0, 0x1a); /* compiler bulk-zero initialization */
    this->field_1C9C = 0x1010101;
    this->field_1CA0 = 0x1010101;
    this->field_1CA4 = 0x1010101;
    this->field_1CA8 = 1;
    return this;
  }
  return nullptr;
}

