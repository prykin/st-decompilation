#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA854>004021CB

   [STObjectFactoryApplier] Central object factory for 0x0123 (ST_OBJECT_PAUSE_PANEL).
   Evidence: registry[38] at 007CA850 stores type 0x0123 and executable pointer 004021CB; allocation
   size 392 uniquely matches /PausePanelTy */

PausePanelTy * __cdecl CreatePausePanel(void)

{
  PausePanelTy *this;


  this = STPointerBoundaryCast<PausePanelTy *>(FUN_006b04d0(0x188));
  if (this != nullptr) {

    sub_006E5FB0(this);
    this->field_005C = 0;
    this->field_003C = 0;
    this->field_0068 = 0;
    this->field_0178 = 0;
    this->field_017C = nullptr;
    this->field_0180 = nullptr;
    this->field_0184 = 0;
    this->field_0060 = 0xffffffff;
    this->field_0064 = 4;
    this->field_0172 = CASE_2;
    this->vtable = &PausePanelTyVTable;
    this->field_0044 = 0x9c;
    this->field_0040 = 0x174;
    this->field_0048 = 0xa0;
    return this;
  }
  return nullptr;
}

