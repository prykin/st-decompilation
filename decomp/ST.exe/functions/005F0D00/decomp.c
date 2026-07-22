#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STArtiafactC.
   Evidence: this_call_owners=[STArtiafactC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STArtiafactC::sub_005F0D00(STArtiafactC *this)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_e;
  ushort local_c;
  undefined2 local_a;

  if (DAT_008117bc != (undefined4 *)0x0) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    local_e = this->field_0032;
    if ((this->field_030D == '\0') || (this->field_030E == 0xff)) {
      local_c = 0xff;
    }
    else {
      local_a = this->field_030F;
      local_c = (ushort)(byte)this->field_030E;
    }
    local_14 = 0x5ddc;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

