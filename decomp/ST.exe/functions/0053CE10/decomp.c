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
  if (this != (SAMPanelTy *)0x0) {
    sub_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    *(undefined4 *)&this->field_0x64 = 4;
    this->field_0068 = 0;
    this->field_0172 = 2;
    *(undefined4 *)&this->field_0x178 = 0;
    *(undefined4 *)&this->field_0x17c = 0;
    this->field_0185 = 0;
    this->field_0189 = (ccFntTy *)0x0;
    this->field_0000 = (AnonPointee_SAMPanelTy_0000 *)&PTR_GetMessage_0079ad8c;
    this->field_003C = 0xc;
    this->field_0044 = 0;
    *(undefined4 *)&this->field_0x40 = 0x128;
    *(undefined4 *)&this->field_0x48 = 0x8c;
    *(undefined4 *)&this->field_0x180 = 1;
    this->field_0x184 = 0;
    this->field_01AB = 0;
    this->field_01AF = 0;
    memset(&this->field_01B5, 0, 0x1c); /* compiler bulk-zero initialization */
    this->field_01B1 = (ushort *)0x0;
    return this;
  }
  return (SAMPanelTy *)0x0;
}

