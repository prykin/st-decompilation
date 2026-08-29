#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004C6210 -> 004AD430 @ 004C6372; /TLOBldMark+0x2c | 004C6440 -> 004AD430 @ 004C68AF;
   /TLOBldMark+0x2c | 004CC900 -> 004AD430 @ 004CC938; /TLOBaseTy+0x603

   [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true */

void __thiscall STT3DSprC::sub_004AD430(STT3DSprC *this)

{
  Library::Ourlib::ST3DSMAP::SprHide(this->field_003C,this->field_0018);
  this->field_0012 = 1;
  return;
}

