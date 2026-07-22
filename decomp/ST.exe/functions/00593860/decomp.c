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
  undefined4 *puVar3;
  SpriteClassTy *this_00;
  undefined4 *puVar4;

  this = (CampaignTy *)FUN_006b04d0(0x2000);
  if (this != (CampaignTy *)0x0) {
    sub_006E5FB0(this);
    this->field_0000 = &VTable_0079C018;
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
    this->field_0000 = &MMObjTyVTable;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(&this->field_0066, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0xd;
    puVar3 = (undefined4 *)&this->field_0xbc;
    do {
      puVar4 = puVar3;
      memset(puVar4, 0, 0x26); /* compiler bulk-zero initialization */
      puVar4 = (undefined4 *)((byte *)puVar4 + 0x24);
      iVar1 = iVar1 + -1;
      *(undefined1 *)((int)puVar4 + 2) = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 0x1fb);
    } while (iVar1 != 0);
    this->field_0000 = &UNK_0079bff8;
    memset(&this->field_1A5F, 0, 0xb4); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_1B13, 0, 0xb4); /* compiler bulk-zero initialization */
    this->field_1BC7 = 0;
    *(undefined4 *)&this->field_0x1bcb = 0;
    *(undefined4 *)&this->field_0x1bcf = 0;
    *(undefined4 *)&this->field_0x1bd3 = 0;
    this->field_1BD7 = 0;
    *(undefined4 *)&this->field_0x1bdb = 0;
    *(undefined4 *)&this->field_0x1bdf = 0;
    *(undefined4 *)&this->field_0x1be3 = 0;
    this->field_1BE7 = 0;
    this->field_1FF8 = 1;
    this->field_1FFC = 0;
    return this;
  }
  return (CampaignTy *)0x0;
}

