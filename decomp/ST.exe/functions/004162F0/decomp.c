#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004732F0 -> 004162F0 @ 00473619; /STBoatC+0x588 | 004732F0 -> 004162F0 @ 004737F8;
   /STBoatC+0x588 | 00491FB0 -> 004162F0 @ 00492004; /STBoatC+0x588 | 00492080 -> 004162F0 @
   00492139; /STBoatC+0x588

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004732F0 -> 004162F0 @ 00473404; /STBoatC+0x58a | 004732F0 -> 004162F0 @ 00473619;
   /STBoatC+0x58a | 004732F0 -> 004162F0 @ 004737F8; /STBoatC+0x58a | 00491FB0 -> 004162F0 @
   00492004; /STBoatC+0x58a | 00492080 -> 004162F0 @ 00492139; /STBoatC+0x58a

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004732F0 -> 004162F0 @ 00473404; /STBoatC+0x58c | 00491FB0 -> 004162F0 @ 00492004;
   /STBoatC+0x58c | 00492080 -> 004162F0 @ 00492139; /STBoatC+0x58c */

void __thiscall STFishC::sub_004162F0(STFishC *this,short *param_1,short *param_2,short *param_3)

{
  *param_1 = this->field_005B;
  *param_2 = this->field_005D;
  *param_3 = this->field_005F;
  return;
}

