#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8FC>00405457

   [STObjectFactoryApplier] Central object factory for 0x012B (ST_OBJECT_TYPE_012B).
   Evidence: registry[59] at 007CA8F8 stores type 0x012B and executable pointer 00405457; allocation
   size 421 has no unique current class-layout match */

IntercomPanelTy * __cdecl CreateIntercomPanel(void)

{
  IntercomPanelTy *this;


  this = STPointerBoundaryCast<IntercomPanelTy *>(FUN_006b04d0(0x1a5));
  if (this != nullptr) {

    sub_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    this->field_0064 = 4;
    this->field_0068 = 0;
    this->field_0172 = CASE_2;
    this->field_0178 = 0;
    this->vtable = &IntercomPanelTyVTable;
    this->field_003C = 0xc;
    this->field_0044 = 0;
    this->field_0040 = 0x2f8;
    this->field_0048 = 0x1e;
    this->field_0180 = nullptr;
    this->field_0184 = nullptr;
    this->field_019C = nullptr;
    this->field_01A0 = 0;
    this->field_0198 = nullptr;
    this->field_01A4 = 0;
    this->field_017C = 0;
    return this;
  }
  return nullptr;
}

