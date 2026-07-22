#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA91C>0040579A

   [STObjectFactoryApplier] Central object factory for 0x0155 (ST_OBJECT_FRM_PANEL).
   Evidence: registry[63] at 007CA918 stores type 0x0155 and executable pointer 0040579A; allocation
   size 483 uniquely matches /FrmPanelTy */

FrmPanelTy * __cdecl CreateFrmPanel(void)

{
  FrmPanelTy *this;

  this = (FrmPanelTy *)FUN_006b04d0(0x1e3);
  if (this != (FrmPanelTy *)0x0) {
    sub_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    *(undefined4 *)&this->field_0x64 = 4;
    this->field_0068 = 0;
    this->field_0172 = 2;
    *(undefined4 *)&this->field_0x178 = 0;
    *(undefined4 *)&this->field_0x17c = 0;
    *(undefined4 *)&this->field_0x185 = 0;
    *(undefined4 *)&this->field_0x189 = 0;
    this->field_0000 = (AnonPointee_FrmPanelTy_0000 *)0x79ac1c;
    this->field_003C = 0xc;
    this->field_0044 = 0;
    *(undefined4 *)&this->field_0x40 = 0x128;
    *(undefined4 *)&this->field_0x48 = 0x8c;
    *(undefined4 *)&this->field_0x180 = 1;
    this->field_0x184 = 0;
    memset(&this->field_01B3, 0, 0x20); /* compiler bulk-zero initialization */
    this->field_01D3 = 0;
    this->field_01D7 = 0;
    this->field_01DB = 0;
    this->field_01DF = 0;
    this->field_01AB = 0;
    this->field_01AF = 0;
    return this;
  }
  return (FrmPanelTy *)0x0;
}

