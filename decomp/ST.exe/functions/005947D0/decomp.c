#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9D4>00402621

   [STObjectFactoryApplier] Central object factory for 0x100EF (ST_OBJECT_TYPE_100EF).
   Evidence: registry[86] at 007CA9D0 stores type 0x100EF and executable pointer 00402621;
   allocation size 280 has no unique current class-layout match */

Visible * __cdecl CreateVisible(void)

{
  Visible *this;

  this = (Visible *)FUN_006b04d0(0x118);
  if (this != (Visible *)0x0) {
    sub_006E5FB0(this);
    *(undefined4 *)this = 0x79c01c;
    memset(&this->field_0x88, 0, 0x80); /* compiler bulk-zero initialization */
    *(undefined4 *)&this->field_0x10c = 0;
    this->field_0114 = 0;
    this->field_0110 = 0;
    *(undefined4 *)&this->field_0x108 = 0xffffffff;
    *(undefined4 *)&this->field_0x84 = 1;
    return this;
  }
  return (Visible *)0x0;
}

