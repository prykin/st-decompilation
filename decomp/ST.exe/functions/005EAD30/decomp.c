#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x030D (ST_OBJECT_WAIT).
   Evidence: registry[50] at 007CA8B0 stores type 0x030D and executable pointer 00405268; allocation
   size 6916 uniquely matches /WaitTy; calls base/helper constructor(s) SpriteClassTy; exact derived
   allocation size wins */

WaitTy * __cdecl CreateWait(void)

{
  WaitTy *this;
  int iVar1;
  WaitTy_Record_00BC_01FB *pWVar2;
  SpriteClassTy *this_00;
  WaitTy_Record_00BC_01FB *pWVar4;
  uint *puVar5;
  int local_8;

  this = (WaitTy *)FUN_006b04d0(0x1b04);
  if (this != nullptr) {
    sub_006E5FB0(this);
    this->vtable = (WaitTyVTable *)&VTable_0079C018;
    this->field_0018 = 0;
    this->field_005D = nullptr;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    DAT_0080879c = 0;
    this_00 = &this->array_00BC[0].field_00B8;
    local_8 = 0xd;
    do {
      SpriteClassTy::SpriteClassTy(this_00 + -1);
      SpriteClassTy::SpriteClassTy(this_00);
      SpriteClassTy::SpriteClassTy(this_00 + 1);
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    this->vtable = (WaitTyVTable *)&MMObjTyVTable;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(&this->field_0x66, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_8 = 0xd;
    pWVar2 = this->array_00BC;
    do {
      pWVar4 = pWVar2;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pWVar4 = 0;
        pWVar4 = (WaitTy_Record_00BC_01FB *)&pWVar4->field_0x4;
      }
      *(undefined2 *)pWVar4 = 0;
      pWVar4->field_0x2 = 0;
      local_8 = local_8 + -1;
      pWVar2 = pWVar2 + 1;
    } while (local_8 != 0);
    this->array_00BC[0xc].field_01E0 = 1;
    this->array_00BC[0xc].field_01E4 = 1;
    this->array_00BC[0xc].field_01E8 = 1;
    this->vtable = &WaitTyVTable;
    this->array_00BC[0xc].field_01F4 = 0;
    this->array_00BC[0xc].field_01EC = 0;
    this->array_00BC[0xc].field_01F0 = 0;
    this->array_00BC[0xc].field_01F5 = 0;
    this->field_1A87 = 0;
    this->field_1A8B = 0;
    this->field_1A8F = 0xffffffff;
    this->field_1A93 = 0;
    this->array_00BC[0xc].field_01F6 = 0;
    this->array_00BC[0xc].field_01F7 = 0;
    this->field_1A7B = 0;
    this->field_1A83 = nullptr;
    puVar5 = this->field_1A94;
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    this->field_1AF0 = nullptr;
    this->field_1AF4 = 0;
    this->field_1AEC = nullptr;
    this->field_1B00 = nullptr;
    this->field_1AFC = nullptr;
    this->field_1AF8 = nullptr;
    return this;
  }
  return nullptr;
}

