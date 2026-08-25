#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0306 (ST_OBJECT_SETT_MAP).
   Evidence: registry[43] at 007CA878 stores type 0x0306 and executable pointer 00405745; allocation
   size 8700 uniquely matches /SettMapTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

SettMapTy * __cdecl CreateSettMap(void)

{
  SettMapTy *this;
  int iVar1;
  SettMapTy_Record_00BC_01FB *pSVar2;
  SpriteClassTy *this_00;
  SettMapTy_Record_00BC_01FB *pSVar3;
  void **ppvVar5;
  uint *puVar6;
  int local_8;

  this = (SettMapTy *)FUN_006b04d0(0x21fc);
  if (this != nullptr) {
    sub_006E5FB0(this);
    this->vtable = (SettMapTyVTable *)&VTable_0079C018;
    this->field_0018 = 0;
    this->field_005D = 0;
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
    this->vtable = (SettMapTyVTable *)&VTable_0079C008;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(&this->field_0x66, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_8 = 0xd;
    pSVar2 = this->array_00BC;
    do {
      pSVar3 = pSVar2;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pSVar3 = 0;
        pSVar3 = (SettMapTy_Record_00BC_01FB *)&pSVar3->field_0x4;
      }
      *(undefined2 *)pSVar3 = 0;
      pSVar3->field_0x2 = 0;
      local_8 = local_8 + -1;
      pSVar2 = pSVar2 + 1;
    } while (local_8 != 0);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_0x1c6b);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_0x1cfc);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_0x1d8d);
    this->field_1C5F = 0;
    this->field_1C63 = 0;
    this->field_1E27 = 0;
    this->field_1E2B = nullptr;
    this->field_21E1 = 0;
    this->field_21E2 = 0;
    this->field_21E3 = 0;
    this->field_21E4 = 0;
    this->field_21E5 = 0;
    this->field_21E6 = 0;
    this->field_21E7 = 0;
    memset(&this->field_0x2161, 0, 0x80); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_1E2F = nullptr;
    this->field_1F43 = nullptr;
    this->field_1F3F = nullptr;
    this->field_1F4F = nullptr;
    this->field_1F4B = 0;
    this->field_1F84 = nullptr;
    memset(this->field_1F8C, 0, 0x140); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_211D = 0;
    this->field_1F88 = 0;
    puVar6 = this->field_20CC;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    ppvVar5 = this->field_20F4;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppvVar5 = nullptr;
      ppvVar5 = ppvVar5 + 1;
    }
    this->field_1E1E = 0;
    this->field_1E22 = 0xffffffff;
    memset(this->field_2125, 0, 0x38); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_215D = 0;
    this->field_21F8 = nullptr;
    this->field_21F4 = nullptr;
    this->field_21F0 = nullptr;
    this->field_21EC = nullptr;
    this->field_21E8 = nullptr;
    this->field_1F80 = 0xffffffff;
    this->field_1C67 = 0;
    this->field_1F47 = 0;
    this->field_1F7C = nullptr;
    memset(this->field_1F60, 0, 0x1c); /* compiler bulk-zero initialization */
    this->field_1F58 = 0;
    this->field_1F57 = 1;
    this->field_1F5D = 1;
    this->field_1F5E = 1;
    this->field_1F5F = 1;
    this->field_1F5C = 4;
    this->vtable = &SettMapTyVTable;
    return this;
  }
  return nullptr;
}

