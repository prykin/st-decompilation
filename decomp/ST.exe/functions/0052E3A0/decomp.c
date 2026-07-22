#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA82C>004038FF

   [STObjectFactoryApplier] Central object factory for 0x0122 (ST_OBJECT_OPT_PANEL).
   Evidence: registry[33] at 007CA828 stores type 0x0122 and executable pointer 004038FF; allocation
   size 774 uniquely matches /OptPanelTy */

OptPanelTy * __cdecl CreateOptPanel(void)

{
  OptPanelTy *this;

  this = (OptPanelTy *)FUN_006b04d0(0x306);
  if (this != (OptPanelTy *)0x0) {
    sub_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    *(undefined4 *)&this->field_0x64 = 4;
    this->field_0068 = 0;
    this->field_0172 = CASE_2;
    *(undefined4 *)&this->field_0x178 = 0;
    this->field_0000 = &PTR_GetMessage_0079ad10;
    this->field_003C = 0xc;
    this->field_0044 = 0x9c;
    *(undefined4 *)&this->field_0x40 = 0x128;
    this->field_0048 = 0xb4;
    this->field_0180 = (ccFntTy *)0x0;
    this->field_017C = (ccFntTy *)0x0;
    this->field_019C = 0;
    this->field_01A0 = 0;
    this->field_0184 = (ushort *)0x0;
    this->field_0188 = 0;
    this->field_018C = (ushort *)0x0;
    this->field_0190 = (ushort *)0x0;
    this->field_0194 = (ushort *)0x0;
    this->field_0198 = (ushort *)0x0;
    this->field_01A4 = CASE_1;
    this->field_01AD = 0;
    this->field_01B1 = 0;
    memset(&this->field_01B5, 0, 0x28); /* compiler bulk-zero initialization */
    this->field_01DD = (HANDLE)0x0;
    this->field_01E1 = 0;
    this->field_01AC = 0;
    this->field_01E5 = (ushort *)0x0;
    this->field_01F1 = (DArrayTy *)0x0;
    this->field_01E9 = (DArrayTy *)0x0;
    this->field_01ED = (DArrayTy *)0x0;
    this->field_02FD = (DArrayTy *)0x0;
    this->field_02F9 = (uint *)0x0;
    this->field_0301 = 0;
    return this;
  }
  return (OptPanelTy *)0x0;
}

