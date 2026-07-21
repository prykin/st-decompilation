#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0 */

void __thiscall STJellyGunC::sub_00582530(STJellyGunC *this)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 local_10;

  memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
  local_10 = this->field_0008;
  local_14 = 0x124;
  FUN_006e6080(this,4,this->field_0286,local_24);
  return;
}

