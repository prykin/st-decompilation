#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CAA0C>00405D44

   [STObjectFactoryApplier] Central object factory for 0x0159 (ST_OBJECT_SAM_PANEL).
   Evidence: registry[93] at 007CAA08 stores type 0x0159 and executable pointer 00405D44; allocation
   size 465 uniquely matches /SAMPanelTy */

SAMPanelTy * __cdecl CreateSAMPanel(void)

{
  SAMPanelTy *this;

  this = (SAMPanelTy *)FUN_006b04d0(0x1d1);
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
    this->field_0189 = nullptr;
    this->vtable = &SAMPanelTyVTable;
    this->field_003C = 0xc;
    this->field_0044 = 0;
    this->field_0040 = 0x128;
    this->field_0048 = 0x8c;
    this->field_0180 = 1;
    this->field_0184 = 0;
    this->field_01AB = 0;
    this->field_01AF = 0;
    memset(this->field_01B5, 0, 0x1c); /* compiler bulk-zero initialization */
    this->field_01B1 = nullptr;
    return this;
  }
  return nullptr;
}

