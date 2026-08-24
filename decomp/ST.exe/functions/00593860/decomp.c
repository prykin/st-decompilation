#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA86C>00404EB7

   [STObjectFactoryApplier] Central object factory for 0x0307 (ST_OBJECT_CAMPAIGN).
   Evidence: registry[41] at 007CA868 stores type 0x0307 and executable pointer 00404EB7; allocation
   size 8192 uniquely matches /CampaignTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

CampaignTy * __cdecl CreateCampaign(void)

{
  CampaignTy *this;
  int iVar1;
  uint *puVar3;
  SpriteClassTy *this_00;
  uint *puVar5;
  this = (CampaignTy *)FUN_006b04d0(0x2000);
  if (this != nullptr) {
    sub_006E5FB0(this);
    this->vtable = (CampaignTyVTable *)&VTable_0079C018;
    this->field_0018 = 0;
    this->field_005D = 0;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    DAT_0080879c = 0;
    this_00 = &this->field_00BB[0].field_00B9;
    iVar1 = 0xd;
    do {
      SpriteClassTy::SpriteClassTy(this_00 + -1);
      SpriteClassTy::SpriteClassTy(this_00);
      SpriteClassTy::SpriteClassTy(this_00 + 1);
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    this->vtable = (CampaignTyVTable *)&MMObjTyVTable;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(this->field_0066, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0xd;
    puVar3 = &this->field_00BB[0].field_0001;
    do {
      puVar5 = puVar3;
      memset(puVar5, 0, 0x27); /* compiler bulk-zero initialization */
      puVar5 = (undefined4 *)((byte *)puVar5 + 0x24);
      iVar1 = iVar1 + -1;
      puVar3 = (undefined4 *)((int)puVar3 + 0x1fb);
    } while (iVar1 != 0);
    this->vtable = &CampaignTyVTable;
    memset(&this->field_00BB[0xc].field_01E0, 0, 0xb4); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_1B13, 0, 0xb4); /* compiler bulk-zero initialization */
    this->field_1BC7 = 0;
    this->field_1BCB = 0;
    this->field_1BCF = 0;
    this->field_1BD3 = 0;
    this->field_1BD7[0] = 0;
    this->field_1BD7[1] = 0;
    this->field_1BD7[2] = 0;
    this->field_1BD7[3] = 0;
    this->field_1BE7 = 0;
    this->field_1FF8 = 1;
    this->field_1FFC = 0;
    return this;
  }
  return nullptr;
}

