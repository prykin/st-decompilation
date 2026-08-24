#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8EC>004054A2

   [STObjectFactoryApplier] Central object factory for 0x012A (ST_OBJECT_TYPE_012A).
   Evidence: registry[57] at 007CA8E8 stores type 0x012A and executable pointer 004054A2; allocation
   size 662 has no unique current class-layout match */

BldObjPanelTy * __cdecl CreateBldObjPanel(void)

{
  BldObjPanelTy *this;
  uint *puVar2;
  this = (BldObjPanelTy *)FUN_006b04d0(0x296);
  if (this != nullptr) {
    sub_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    this->field_0064 = 4;
    this->field_0068 = 0;
    this->field_0172 = 2;
    this->field_0178 = 0;
    this->field_017C = 0;
    this->field_0184 = nullptr;
    this->field_0190 = nullptr;
    this->field_0188 = nullptr;
    this->field_019D = 0;
    this->field_0180 = 0;
    this->field_01A1 = 0;
    this->field_01A5 = 0;
    this->field_01A9 = 0;
    this->field_01AD = 0;
    this->field_01B1 = 0;
    puVar2 = (undefined4 *)&this->field_01B5;
    memset(puVar2, 0, 0xc3); /* compiler bulk-zero initialization */
    puVar2 = (undefined4 *)((byte *)puVar2 + 0xc0);
    this->field_0199 = 0;
    this->field_0279 = 1;
    this->field_0278 = 0;
    this->vtable = &BldObjPanelTyVTable;
    this->field_003C = 0xc;
    this->field_0044 = 0;
    this->field_0040 = 0x13d;
    this->field_0048 = 0x78;
    this->field_0194 = 0;
    this->field_0195 = 1;
    this->field_027A = nullptr;
    this->field_0292 = 0;
    this->field_027E = 0;
    this->field_0282 = 0;
    this->field_0286 = 0;
    this->field_028A = 0;
    this->field_028E = 0;
    return this;
  }
  return nullptr;
}

