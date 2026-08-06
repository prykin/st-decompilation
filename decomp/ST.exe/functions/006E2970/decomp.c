#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0054A9B0 -> 006E2970 @ 0054AC85;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::FUN_0054a9b0 parameter param_1

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0054A9B0 -> 006E2970 @ 0054AC85;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::FUN_0054a9b0 parameter param_2 */

void __thiscall
ST3DSMAPContext::sub_006E2970
          (ST3DSMAPContext *this,float param_1,float param_2,undefined4 param_3,int *param_4,
          int *param_5)

{
  int local_20;
  int local_1c;
  float local_10;
  float local_c;
  undefined4 local_8;

  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  sub_006E25D0(this,&local_20,&local_10,0.0,0.0,0.0,1);
  *param_4 = (local_20 >> 0x10) + this->field_0020;
  *param_5 = (local_1c >> 0x10) + this->field_0024;
  return;
}

