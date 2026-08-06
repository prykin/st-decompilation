#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006E8580(ST3DSMAPContext *this,int *param_1)

{
  this->field_0000 = param_1;
  param_1[0x8a] = (int)FUN_006eb4b0;
  this->field_0000[0x8c] = (int)FUN_006eb540;
  this->field_0000[0x8b] = (int)FUN_006eb570;
  this->field_0000[0x8d] = (int)this;
  if (DAT_007ee1ac < 0) {
    Library::DKW::DDX::FUN_006cff10
              (param_1,(uint *)&DAT_007ee1ac,0,0,this->field_0004->field_001C - 0xd,0xfa,0x10,
               0xffffff,0xffffffff);
  }
  if (DAT_007ee1b0 < 0) {
    Library::DKW::DDX::FUN_006cff10
              (param_1,(uint *)&DAT_007ee1b0,0,this->field_0004->field_0018 - 0xfa,
               this->field_0004->field_001C - 0xd,0xfa,0x10,0xffffff,0xffffffff);
  }
  return;
}

