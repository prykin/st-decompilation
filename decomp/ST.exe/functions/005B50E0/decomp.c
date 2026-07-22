#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA85C>0040409D

   [STObjectFactoryApplier] Central object factory for 0x0301 (ST_OBJECT_MAIN_MENU).
   Evidence: registry[39] at 007CA858 stores type 0x0301 and executable pointer 0040409D; allocation
   size 7908 uniquely matches /MainMenuTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

MainMenuTy * __cdecl CreateMainMenu(void)

{
  MainMenuTy *this;
  int iVar1;
  undefined4 *puVar3;
  SpriteClassTy *this_00;
  undefined4 *puVar4;
  AnonPointee_MainMenuTy_1AA7 **ppAVar5;

  this = (MainMenuTy *)FUN_006b04d0(0x1ee4);
  if (this != (MainMenuTy *)0x0) {
    sub_006E5FB0(this);
    this->field_0000 = &VTable_0079C018;
    *(undefined4 *)&this->field_0x18 = 0;
    *(undefined4 *)&this->field_0x5d = 0;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    DAT_0080879c = 0;
    this_00 = (SpriteClassTy *)&this->field_0174;
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
    puVar3 = &this->field_00BC;
    do {
      puVar4 = puVar3;
      memset(puVar4, 0, 0x26); /* compiler bulk-zero initialization */
      puVar4 = (undefined4 *)((byte *)puVar4 + 0x24);
      iVar1 = iVar1 + -1;
      *(undefined1 *)((int)puVar4 + 2) = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 0x1fb);
    } while (iVar1 != 0);
    this->field_0000 = &UNK_0079c098;
    memset(&this->field_1A7F, 0, 0x28); /* compiler bulk-zero initialization */
    iVar1 = 0;
    ppAVar5 = &this->field_1AA7;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppAVar5 = (AnonPointee_MainMenuTy_1AA7 *)0x0;
      ppAVar5 = ppAVar5 + 1;
    }
    this->field_1ACF = 0;
    this->field_1EE3 = 0;
    this->field_1EDF = 1;
    memset(&this->field_0x1a5f, 0, 0x20); /* compiler bulk-zero initialization */
    return this;
  }
  return (MainMenuTy *)0x0;
}

