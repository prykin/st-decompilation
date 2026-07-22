#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA844>00404B01

   [STObjectFactoryApplier] Central object factory for 0x014A (ST_OBJECT_BEH_PANEL).
   Evidence: registry[36] at 007CA840 stores type 0x014A and executable pointer 00404B01; allocation
   size 700 uniquely matches /BehPanelTy */

BehPanelTy * __cdecl CreateBehPanel(void)

{
  BehPanelTy *this;

  this = (BehPanelTy *)FUN_006b04d0(700);
  if (this != (BehPanelTy *)0x0) {
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
    this->field_0000 = (AnonPointee_BehPanelTy_0000 *)&PTR_GetMessage_0079ab74;
    *(undefined4 *)&this->field_0x40 = 0xf7;
    *(undefined4 *)&this->field_0x48 = 0x8c;
    this->field_003C = 0x3b;
    this->field_0044 = 0;
    *(undefined4 *)&this->field_0x180 = 1;
    this->field_0x184 = 0;
    this->field_01CA = 0;
    this->field_01C6 = 0;
    this->field_01C2 = 0;
    this->field_01BE = 0;
    memset(&this->field_01CE, 0, 0xea); /* compiler bulk-zero initialization */
    this->field_02B8 = (ushort *)0x0;
    return this;
  }
  return (BehPanelTy *)0x0;
}

