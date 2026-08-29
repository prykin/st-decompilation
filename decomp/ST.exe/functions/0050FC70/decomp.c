#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA91C>0040579A

   [STObjectFactoryApplier] Central object factory for 0x0155 (ST_OBJECT_FRM_PANEL).
   Evidence: registry[63] at 007CA918 stores type 0x0155 and executable pointer 0040579A; allocation
   size 483 uniquely matches /FrmPanelTy */

FrmPanelTy * __cdecl CreateFrmPanel(void)

{
  FrmPanelTy *this;


  this = STPointerBoundaryCast<FrmPanelTy *>(FUN_006b04d0(0x1e3));
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
    this->vtable = &FrmPanelTyVTable;
    this->field_003C = 0xc;
    this->field_0044 = 0;
    this->field_0040 = 0x128;
    this->field_0048 = 0x8c;
    this->field_0180 = 1;
    this->field_0184 = 0;
    memset(this->field_01B3, 0, 0x20); /* compiler bulk-zero initialization */
    this->field_01D3[0] = 0;
    this->field_01D3[1] = 0;
    this->field_01D3[2] = 0;
    this->field_01D3[3] = 0;
    this->field_01AB = 0;
    this->field_01AF = 0;
    return this;
  }
  return nullptr;
}

