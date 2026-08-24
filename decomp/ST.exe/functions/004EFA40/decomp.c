#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8F4>0040184D

   [STObjectFactoryApplier] Central object factory for 0x0151 (ST_OBJECT_BLD_LAB_PANEL).
   Evidence: registry[58] at 007CA8F0 stores type 0x0151 and executable pointer 0040184D; allocation
   size 638 uniquely matches /BldLabPanelTy */

BldLabPanelTy * __cdecl CreateBldLabPanel(void)

{
  BldLabPanelTy *this;
  uint *puVar2;
  this = (BldLabPanelTy *)FUN_006b04d0(0x27e);
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
    this->vtable = &BldLabPanelTyVTable;
    this->field_003C = 0x1c7;
    this->field_0044 = 0;
    this->field_0040 = 0x13d;
    this->field_0048 = 0x78;
    this->field_0194 = 0;
    this->field_0195 = 0;
    this->field_027A = nullptr;
    return this;
  }
  return nullptr;
}

