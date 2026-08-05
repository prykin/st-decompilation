#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA89C>0040181B

   [STObjectFactoryApplier] Central object factory for 0x0309 (ST_OBJECT_TYPE_0309).
   Evidence: registry[47] at 007CA898 stores type 0x0309 and executable pointer 0040181B; allocation
   size 7640 has no unique current class-layout match */

SIDTy * __cdecl CreateSID(void)

{
  SIDTy *this;
  int iVar1;
  undefined4 *puVar3;
  SpriteClassTy *this_00;
  undefined4 *puVar4;

  this = (SIDTy *)FUN_006b04d0(0x1dd8);
  if (this != nullptr) {
    sub_006E5FB0(this);
    this->vtable = (SIDTyVTable *)&VTable_0079C018;
    *(undefined4 *)&this->field_0x18 = 0;
    *(undefined4 *)&this->field_0x5d = 0;
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
    this->vtable = (SIDTyVTable *)&MMObjTyVTable;
    this->field_0065 = 2;
    this->field_0x9a = 0;
    memset(&this->field_0x66, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0xd;
    puVar3 = (undefined4 *)&this->field_0xbc;
    do {
      puVar4 = puVar3;
      memset(puVar4, 0, 0x27); /* compiler bulk-zero initialization */
      puVar4 = (undefined4 *)((byte *)puVar4 + 0x24);
      iVar1 = iVar1 + -1;
      puVar3 = (undefined4 *)((int)puVar3 + 0x1fb);
    } while (iVar1 != 0);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1A60);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1B01);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1B92);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1C23);
    this->vtable = &SIDTyVTable;
    this->field_1A5F = 0;
    this->field_1AF1[0] = 0;
    this->field_1AF1[1] = 0;
    this->field_1AF9[0] = 0;
    this->field_1AF9[1] = 0;
    this->field_1CB8 = nullptr;
    this->field_1CC4 = (HANDLE)0x0;
    this->field_1CCC = nullptr;
    this->field_1CD0 = nullptr;
    this->field_1CC8 = nullptr;
    this->field_1CC0 = nullptr;
    this->field_1CBC = nullptr;
    this->field_1CB4 = 0xffffffff;
    return this;
  }
  return nullptr;
}

