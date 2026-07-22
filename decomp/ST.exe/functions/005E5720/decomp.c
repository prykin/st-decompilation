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
  int *piVar1;
  int iVar2;

  this = (MTaskTy *)FUN_006b04d0(0x6d7);
  if (this != (MTaskTy *)0x0) {
    sub_006E5FB0(this);
    *(VTable_0079C018 **)this = &VTable_0079C018;
    *(undefined4 *)&this->field_0x18 = 0;
    this->field_005D = (cMf32 *)0x0;
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
    *(undefined **)this = &UNK_0079c238;
    this->field_006D = 2;
    this->field_0069 = 0;
    this->field_006E = 0;
    this->field_006F = 0;
    *(undefined4 *)&this->field_0x85 = 0;
    this->field_0080 = 0;
    this->field_0081 = (ushort *)0x0;
    this->field_008D = (ccFntTy *)0x0;
    this->field_0089 = (ccFntTy *)0x0;
    this->field_0291 = 0;
    *(undefined4 *)&this->field_0x295 = 0;
    *(undefined4 *)&this->field_0x299 = 0;
    *(undefined4 *)&this->field_0x29d = 0;
    *(undefined4 *)&this->field_0x2a1 = 0;
    this->field_02B9 = 0;
    piVar1 = &this->field_02BD;
    iVar2 = 5;
    do {
      piVar1[-6] = -1;
      *piVar1 = -1;
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    this->field_02CD = 0;
    this->field_0484 = -1;
    this->field_0488 = 0;
    this->field_063F = -1;
    this->field_0643 = (AnonPointee_MTaskTy_0643 *)0x0;
    memset(&this->field_0653, 0, 0x84); /* compiler bulk-zero initialization */
    this->field_0070 = (cMf32 *)0x0;
    this->field_0078 = 0;
    this->field_0074 = (DArrayTy *)0x0;
    this->field_007C = 0;
    this->field_064F = (DArrayTy *)0x0;
    this->field_064B = (DArrayTy *)0x0;
    this->field_0647 = (DArrayTy *)0x0;
    return this;
  }
  return (MTaskTy *)0x0;
}

