#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0043AAF0 -> 004162B0 @ 0043ABD0; address of STAllPlayersC::GetCamPoint parameter
   param_1 | 0043AAF0 -> 004162B0 @ 0043AC52; address of STAllPlayersC::GetCamPoint parameter
   param_1 | 0043AAF0 -> 004162B0 @ 0043AD49; address of STAllPlayersC::GetCamPoint parameter
   param_1

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004162C4 exact 2-byte output store from /STFishC+0x49; exact partial-width MOV at
   004162C0

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004162CE exact 2-byte output store from /STFishC+0x4b; exact partial-width MOV at
   004162C7 */

void __thiscall STFishC::sub_004162B0(STFishC *this,short *param_1,short *param_2,short *param_3)

{
  *param_1 = this->field_0047;
  *param_2 = this->field_0049;
  *param_3 = this->field_004B;
  return;
}

