#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00428E50 -> 006DD610 @ 0042922F; zeroed full register at 00429216 | 00691690 ->
   006DD610 @ 006917E9; zeroed full register at 006917A2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00428E50 -> 006DD610 @ 0042922F; zeroed full register at 00429216 | 00691690 ->
   006DD610 @ 006917E9; zeroed full register at 006917A2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=11, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=8; direct_non_thunk_callers=10;
   incoming_ecx_receiver_callers=2; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=void
   __thiscall sub_006DD610(ST3DSMAPContext * this, uint param_2, double param_3, double param_4)
   Evidence: x87 double-width accesses or exact split stores into an owner field independently typed
   or consumed as double prove physical EBP slot boundaries; merged_slots={1=2, 3=2}; sites=006DD64A
   forwards adjacent incoming dwords to Library::Ourlib::STREND::FUN_006dd050 parameter stack slot
   +0x4 typed /double | 006DD64A forwards adjacent incoming dwords to
   Library::Ourlib::STREND::FUN_006dd050 parameter stack slot +0xc typed /double */

void __thiscall
ST3DSMAPContext::sub_006DD610(ST3DSMAPContext *this,uint param_2,double param_3,double param_4)

{
  this->field_0088 = param_3;
  this->field_0090 = param_4;
  Library::Ourlib::STREND::FUN_006dd050(this,param_2,param_3,param_4);
  return;
}

