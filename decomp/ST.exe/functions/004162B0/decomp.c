#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0043AAF0 -> 004162B0 @ 0043ABD0; address of STAllPlayersC::GetCamPoint parameter
   param_1 | 0043AAF0 -> 004162B0 @ 0043AC52; address of STAllPlayersC::GetCamPoint parameter
   param_1 | 0043AAF0 -> 004162B0 @ 0043AD49; address of STAllPlayersC::GetCamPoint parameter
   param_1 */

void __thiscall
STFishC::sub_004162B0(STFishC *this,short *param_1,undefined2 *param_2,undefined2 *param_3)

{
  *param_1 = this->field_0047;
  *param_2 = this->field_0049;
  *param_3 = this->field_004B;
  return;
}

