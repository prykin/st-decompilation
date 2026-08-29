#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STPrototypeApplier] Propagated return.
   Evidence: 00582580 returns return of sub_006E60A0 @ 005825A6 */

int __thiscall STJellyGunC::sub_00582580(STJellyGunC *this)

{
  int iVar1;
  uint local_24 [3];
  uint local_18;
  uint local_14;
  uint local_10;
  local_10 = this->field_0008;
  local_18 = 0;
  local_14 = 10;
  iVar1 = sub_006E60A0(this,local_24);
  return iVar1;
}

