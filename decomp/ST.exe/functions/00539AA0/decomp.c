#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA90C>004018B1

   [STObjectFactoryApplier] Central object factory for 0x0154 (ST_OBJECT_TYPE_0154).
   Evidence: registry[61] at 007CA908 stores type 0x0154 and executable pointer 004018B1; allocation
   size 481 has no unique current class-layout match */

PlayPanelTy * __cdecl CreatePlayPanel(void)

{
  PlayPanelTy *this;

  this = (PlayPanelTy *)FUN_006b04d0(0x1e1);
  if (this != nullptr) {
    sub_006E5FB0(this);
    this->field_005C = 0;
    this->field_0044 = 0;
    this->field_003C = 0;
    this->field_0060 = 0xffffffff;
    this->field_0064 = 4;
    this->field_0068 = nullptr;
    this->field_0172 = 2;
    this->field_0178 = 0;
    this->vtable = &PlayPanelTyVTable;
    this->field_0040 = 0x1d0;
    this->field_0048 = 0xdc;
    this->field_0180 = 0;
    this->field_01CD = nullptr;
    this->field_01DD = nullptr;
    this->field_01D9 = nullptr;
    this->field_01D5 = nullptr;
    this->field_01D1 = nullptr;
    this->field_01C1 = 0;
    this->field_01C5 = 0;
    this->field_017C = 0;
    memset(&this->field_0181, 0, 0x40); /* compiler bulk-zero initialization */
    this->field_01C9 = 0;
    return this;
  }
  return nullptr;
}

