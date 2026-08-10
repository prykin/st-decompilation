#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA864>004036B6

   [STObjectFactoryApplier] Central object factory for 0x0302 (ST_OBJECT_M_TASK).
   Evidence: registry[40] at 007CA860 stores type 0x0302 and executable pointer 004036B6; allocation
   size 1751 uniquely matches /MTaskTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

MTaskTy * __cdecl CreateMTask(void)

{
  MTaskTy *this;
  undefined4 *puVar1;
  int iVar2;

  this = (MTaskTy *)FUN_006b04d0(0x6d7);
  if (this != nullptr) {
    sub_006E5FB0(this);
    this->field_0000 = &VTable_0079C018;
    this->field_0018 = 0;
    this->field_005D = nullptr;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar2 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    DAT_0080879c = 0;
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_02D1);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_0362);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_03F3);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_048C);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_051D);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_05AE);
    this->field_0000 = &VTable_0079C238;
    this->field_006D = 2;
    this->field_0069 = 0;
    this->field_006E = 0;
    this->field_006F = 0;
    this->field_0085 = 0;
    this->field_0080 = 0;
    this->field_0081 = nullptr;
    this->field_008D = nullptr;
    this->field_0089 = nullptr;
    this->field_0291[0] = 0;
    this->field_0291[1] = 0;
    this->field_0291[2] = 0;
    this->field_0291[3] = 0;
    this->field_0291[4] = 0;
    this->field_02B9 = 0;
    puVar1 = &this->field_02BD;
    iVar2 = 5;
    do {
      puVar1[-6] = 0xffffffff;
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    this->field_02CD = 0;
    this->field_0484 = 0xffffffff;
    this->field_0488 = 0;
    this->field_063F = 0xffffffff;
    this->field_0643 = nullptr;
    memset(&this->field_0653, 0, 0x84); /* compiler bulk-zero initialization */
    this->field_0070 = nullptr;
    this->field_0078 = nullptr;
    this->field_0074 = nullptr;
    this->field_007C = 0;
    this->field_064F = nullptr;
    this->field_064B = nullptr;
    this->field_0647 = nullptr;
    return this;
  }
  return nullptr;
}

