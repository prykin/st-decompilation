#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x030A (ST_OBJECT_PRIVIDER).
   Evidence: registry[48] at 007CA8A0 stores type 0x030A and executable pointer 004051A0; allocation
   size 7326 uniquely matches /PrividerTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

PrividerTy * __cdecl CreatePrivider(void)

{
  PrividerTy *this;
  int iVar1;
  PrividerTy_Record_00BC_01FB *pPVar2;
  SpriteClassTy *this_00;
  PrividerTy_Record_00BC_01FB *pPVar4;
  uint *puVar5;
  int local_8;

  this = (PrividerTy *)FUN_006b04d0(0x1c9e);
  if (this != nullptr) {
    sub_006E5FB0(this);
    this->vtable = (PrividerTyVTable *)&VTable_0079C018;
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
    this->vtable = (PrividerTyVTable *)&VTable_0079C008;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(&this->field_0x66, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_8 = 0xd;
    pPVar2 = this->array_00BC;
    do {
      pPVar4 = pPVar2;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pPVar4 = 0;
        pPVar4 = (PrividerTy_Record_00BC_01FB *)&pPVar4->field_0x4;
      }
      *(undefined2 *)pPVar4 = 0;
      pPVar4->field_0x2 = 0;
      local_8 = local_8 + -1;
      pPVar2 = pPVar2 + 1;
    } while (local_8 != 0);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->array_00BC[0xc].field_01F7);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1B08);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1B99);
    this->vtable = &PrividerTyVTable;
    this->array_00BC[0xc].field_01E5 = 1;
    this->array_00BC[0xc].field_01F3 = 0;
    this->array_00BC[0xc].field_01E1 = 0;
    this->array_00BC[0xc].field_01F1 = 0;
    this->array_00BC[0xc].field_01E9 = 0;
    this->array_00BC[0xc].field_01ED = 0;
    this->array_00BC[0xc].field_01F2 = 0;
    puVar5 = this->field_1C2A;
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    this->field_1C8A = 0xffffffff;
    this->field_1C82 = nullptr;
    this->field_1C86 = 0;
    this->field_1C8E = nullptr;
    this->field_1C92 = nullptr;
    this->field_1C9A = nullptr;
    this->field_1C96 = nullptr;
    return this;
  }
  return nullptr;
}

