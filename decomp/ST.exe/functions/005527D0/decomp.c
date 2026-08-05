#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA904>0040403E

   [STObjectFactoryApplier] Central object factory for 0x0153 (ST_OBJECT_UPG_PANEL).
   Evidence: registry[60] at 007CA900 stores type 0x0153 and executable pointer 0040403E; allocation
   size 1015 uniquely matches /UpgPanelTy */

UpgPanelTy * __cdecl CreateUpgPanel(void)

{
  UpgPanelTy *this;

  this = (UpgPanelTy *)FUN_006b04d0(0x3f7);
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
    this->vtable = &UpgPanelTyVTable;
    this->field_003C = 0xc;
    this->field_0044 = 0;
    this->field_0040 = 0x128;
    this->field_0048 = 0x8c;
    this->field_0180 = 1;
    this->field_0184 = 0;
    memset(&this->field_01AB, 0, 0x240); /* compiler bulk-zero initialization */
    this->field_03F3 = nullptr;
    this->field_03EF = nullptr;
    this->field_03EB = nullptr;
    return this;
  }
  return nullptr;
}

