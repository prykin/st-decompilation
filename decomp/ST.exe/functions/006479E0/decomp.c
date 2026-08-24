#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STVolcanoC.
   Evidence: this_call_owners=[STVolcanoC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall STVolcanoC::sub_006479E0(STVolcanoC *this)

{
  if (-1 < this->field_005D) {
    Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,this->field_005D);
    this->field_005D = -1;
  }
  if (-1 < this->field_007A) {
    Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,this->field_007A);
    this->field_007A = -1;
  }
  if (-1 < this->field_0086) {
    Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,this->field_0086);
    this->field_0086 = -1;
  }
  return;
}

