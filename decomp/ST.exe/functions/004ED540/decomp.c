#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA844>00404B01

   [STObjectFactoryApplier] Central object factory for 0x014A (ST_OBJECT_BEH_PANEL).
   Evidence: registry[36] at 007CA840 stores type 0x014A and executable pointer 00404B01; allocation
   size 700 uniquely matches /BehPanelTy */

BehPanelTy * __cdecl CreateBehPanel(void)

{
  BehPanelTy *this;


  this = STPointerBoundaryCast<BehPanelTy *>(FUN_006b04d0(700));
  if (this != nullptr) {

    sub_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    this->field_0064 = 4;
    this->field_0068 = 0;
    this->field_0172 = 2;
    this->field_0178 = 0;
    this->field_017C = 0;
    this->field_0185 = 0;
    this->field_0189 = 0;
    this->vtable = &BehPanelTyVTable;
    this->field_0040 = 0xf7;
    this->field_0048 = 0x8c;
    this->field_003C = 0x3b;
    this->field_0044 = 0;
    this->field_0180 = 1;
    this->field_0184 = 0;
    this->field_01CA = 0;
    this->field_01C6 = 0;
    this->field_01C2 = 0;
    this->field_01BE = 0;
    memset(&this->field_01CE, 0, 0xea); /* compiler bulk-zero initialization */
    this->field_02B8 = nullptr;
    return this;
  }
  return nullptr;
}

