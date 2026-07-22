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
  if (this != (UpgPanelTy *)0x0) {
    sub_006E5FB0(this);
    this->field_005C = 0;
    *(undefined4 *)&this->field_0x60 = 0xffffffff;
    *(undefined4 *)&this->field_0x64 = 4;
    this->field_0068 = 0;
    this->field_0172 = 2;
    *(undefined4 *)&this->field_0x178 = 0;
    *(undefined4 *)&this->field_0x17c = 0;
    *(undefined4 *)&this->field_0x185 = 0;
    *(undefined4 *)&this->field_0x189 = 0;
    this->field_0000 = (AnonPointee_UpgPanelTy_0000 *)&PTR_GetMessage_0079ae90;
    *(undefined4 *)&this->field_0x3c = 0xc;
    *(undefined4 *)&this->field_0x44 = 0;
    *(undefined4 *)&this->field_0x40 = 0x128;
    *(undefined4 *)&this->field_0x48 = 0x8c;
    *(undefined4 *)&this->field_0x180 = 1;
    this->field_0x184 = 0;
    memset(&this->field_01AB, 0, 0x240); /* compiler bulk-zero initialization */
    this->field_03F3 = (ushort *)0x0;
    this->field_03EF = (ushort *)0x0;
    this->field_03EB = (ushort *)0x0;
    return this;
  }
  return (UpgPanelTy *)0x0;
}

