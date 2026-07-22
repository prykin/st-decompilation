#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA834>00403FCB

   [STObjectFactoryApplier] Central object factory for 0x0148 (ST_OBJECT_INFOC_PANEL).
   Evidence: registry[34] at 007CA830 stores type 0x0148 and executable pointer 00403FCB; allocation
   size 985 uniquely matches /InfocPanelTy */

InfocPanelTy * __cdecl CreateInfocPanel(void)

{
  InfocPanelTy *this;
  int iVar1;

  this = (InfocPanelTy *)FUN_006b04d0(0x3d9);
  if (this != (InfocPanelTy *)0x0) {
    sub_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    *(undefined4 *)&this->field_0x64 = 4;
    this->field_0068 = 0;
    this->field_0172 = 2;
    this->field_0178 = 0;
    *(undefined4 *)&this->field_0x17c = 0;
    *(undefined4 *)&this->field_0x185 = 0;
    this->field_0189 = (ccFntTy *)0x0;
    this->field_0000 = (AnonPointee_InfocPanelTy_0000 *)&PTR_GetMessage_0079ac70;
    this->field_003C = 0x1c7;
    this->field_0044 = 0;
    *(undefined4 *)&this->field_0x40 = 0x13d;
    this->field_0048 = 0xa1;
    *(undefined4 *)&this->field_0x180 = 0;
    this->field_0x184 = 0;
    this->field_03D0 = 0;
    this->field_03D4 = 0xff;
    memset(&this->field_01AB, 0, 0x129); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_02D4, 0, 0xf0); /* compiler bulk-zero initialization */
    this->field_03CC = (ushort *)0x0;
    this->field_03C8 = (ushort *)0x0;
    this->field_03C4 = (ushort *)0x0;
    this->field_03D5 = (ccFntTy *)0x0;
    return this;
  }
  return (InfocPanelTy *)0x0;
}

