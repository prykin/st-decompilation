#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9D4>00402621

   [STObjectFactoryApplier] Central object factory for 0x100EF (ST_OBJECT_TYPE_100EF).
   Evidence: registry[86] at 007CA9D0 stores type 0x100EF and executable pointer 00402621;
   allocation size 280 has no unique current class-layout match */

Visible * __cdecl CreateVisible(void)

{
  Visible *this;


  this = STPointerBoundaryCast<Visible *>(FUN_006b04d0(0x118));
  if (this != nullptr) {

    sub_006E5FB0(this);
    this->vtable = &VisibleVTable;
    memset(&this->field_0x88, 0, 0x80); /* compiler bulk-zero initialization */
    this->field_010C = 0;
    this->field_0114 = 0;
    this->field_0110 = nullptr;
    this->field_0108 = 0xffffffff;
    this->field_0084 = 1;
    return this;
  }
  return nullptr;
}

