#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0305 (ST_OBJECT_CHOOSE_MAP).
   Evidence: registry[42] at 007CA870 stores type 0x0305 and executable pointer 00405C8B; allocation
   size 8388 uniquely matches /ChooseMapTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

ChooseMapTy * __cdecl CreateChooseMap(void)

{
  ChooseMapTy *this;
  int iVar1;
  ChooseMapTy_Record_00BC_01FB *pCVar2;
  SpriteClassTy *this_00;
  ChooseMapTy_Record_00BC_01FB *pCVar4;
  uint *puVar5;
  int local_8;

  this = (ChooseMapTy *)FUN_006b04d0(0x20c4);
  if (this != nullptr) {
    sub_006E5FB0(this);
    this->vtable = (ChooseMapTyVTable *)&VTable_0079C018;
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
    this->vtable = (ChooseMapTyVTable *)&VTable_0079C008;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(&this->field_0x66, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_8 = 0xd;
    pCVar2 = this->array_00BC;
    do {
      pCVar4 = pCVar2;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pCVar4 = 0;
        pCVar4 = (ChooseMapTy_Record_00BC_01FB *)&pCVar4->field_0x4;
      }
      *(undefined2 *)pCVar4 = 0;
      pCVar4->field_0x2 = 0;
      local_8 = local_8 + -1;
      pCVar2 = pCVar2 + 1;
    } while (local_8 != 0);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->array_00BC[0xc].field_01F0);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1B01);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1B92);
    this->vtable = &ChooseMapTyVTable;
    this->array_00BC[0xc].field_01E0 = 1;
    this->array_00BC[0xc].field_01EC = 0;
    puVar5 = &this->field_1C23;
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    this->field_1C87 = 0xffffffff;
    this->field_1C7B = nullptr;
    this->field_1C7F = nullptr;
    this->field_1C97 = nullptr;
    this->field_1C9B = nullptr;
    this->field_1C9F = nullptr;
    this->field_1C8F = (HANDLE)0x0;
    this->field_1C93 = 0;
    this->field_20C0 = nullptr;
    this->field_20BC = nullptr;
    this->field_20B8 = nullptr;
    this->array_00BC[0xc].field_01E4 = 0;
    this->array_00BC[0xc].field_01E8 = 0;
    this->field_1C83 = 0;
    this->field_1C8B = nullptr;
    return this;
  }
  return nullptr;
}

